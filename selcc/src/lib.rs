// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selcc: C compiler driver library for the Selache toolchain
// Copyright (c) 2026 Jakob Kastelic

//! The selcc library: turns C source into SHARC+ assembly text that the
//! `selas` assembler consumes. The `selcc` binary is a thin gcc/clang-
//! style driver on top of this library.

pub mod ast;
pub mod cli;
pub mod emit_asm;
pub mod error;
pub mod ir;
pub mod ir_opt;
pub mod isel;
pub mod lex;
pub mod lower;
pub mod mach;
pub mod parse;
pub mod preproc;
pub mod regalloc;
pub mod target;
pub mod token;
pub mod types;

use crate::error::Result;

/// Configure a `preproc::Preprocessor` from the CLI options.
fn make_preprocessor(opts: &cli::Options) -> preproc::Preprocessor {
    let mut pp = preproc::Preprocessor::new();
    for def in &opts.defines {
        if let Some((name, val)) = def.split_once('=') {
            pp.define(name, val);
        } else {
            pp.define(def, "1");
        }
    }
    for undef in &opts.undefines {
        pp.undefine(undef);
    }
    for dir in &opts.include_dirs {
        pp.add_include_dir(dir);
    }
    pp.set_no_std_inc(opts.no_std_inc);
    if let Some(proc_name) = &opts.processor {
        pp.set_processor(proc_name);
    }
    if opts.char_size == 8 {
        pp.define("__BYTE_ADDRESSING__", "1");
    }
    if opts.swc {
        pp.define("__SWC__", "1");
    }
    pp
}

/// Run only the C preprocessor and return the expanded source.
pub fn preprocess_only(src: &str, filename: &str, opts: &cli::Options) -> Result<String> {
    let mut pp = make_preprocessor(opts);
    pp.process(src, filename)
}

/// Preprocess, parse, and lower the given C source to SHARC+ assembly text.
pub fn compile_to_asm(src: &str, filename: &str, opts: &cli::Options) -> Result<String> {
    let processed = preprocess_only(src, filename, opts)?;
    let mut unit = parse::parse(&processed)?;
    prune_unused_static_fns(&mut unit);
    let module = emit_asm::emit_module(&unit, opts.char_size)?;
    Ok(module.text)
}

/// Drop `static` functions (C11 6.2.2p3, internal linkage) that no
/// externally-linked or reachable code references.
///
/// Purely a compile-time dead-code pass over the AST: the lowerer
/// never sees bodies that would produce unresolved externs (e.g. the
/// safe-math wrappers in csmith headers, which call `fabs` / `fabsf`
/// but are unused in programs built with `--no-float`). Keeps the
/// linker from seeing symbols the user deliberately isn't linking
/// against.
fn prune_unused_static_fns(unit: &mut ast::TranslationUnit) {
    use std::collections::{HashMap, HashSet};
    let fn_names: HashSet<String> =
        unit.functions.iter().map(|f| f.name.clone()).collect();
    let by_name: HashMap<&str, &ast::Function> =
        unit.functions.iter().map(|f| (f.name.as_str(), f)).collect();
    let mut reachable: HashSet<String> = unit
        .functions
        .iter()
        .filter(|f| !f.is_static)
        .map(|f| f.name.clone())
        .collect();
    // Address-taken / referenced from global initializers always counts
    // as a root: a function-pointer table in .data can call anything.
    for g in &unit.globals {
        if let Some(init) = &g.init {
            collect_expr_refs(init, &fn_names, &mut reachable);
        }
    }
    let mut worklist: Vec<String> = reachable.iter().cloned().collect();
    while let Some(name) = worklist.pop() {
        let Some(f) = by_name.get(name.as_str()) else { continue };
        let before = reachable.len();
        for stmt in &f.body {
            collect_stmt_refs(stmt, &fn_names, &mut reachable);
        }
        if reachable.len() > before {
            for n in reachable.iter().cloned().collect::<Vec<_>>() {
                if !worklist.contains(&n) {
                    worklist.push(n);
                }
            }
        }
    }
    unit.functions.retain(|f| !f.is_static || reachable.contains(&f.name));
}

fn collect_stmt_refs(
    stmt: &ast::Stmt,
    fns: &std::collections::HashSet<String>,
    out: &mut std::collections::HashSet<String>,
) {
    use ast::Stmt::*;
    match stmt {
        Return(e) => {
            if let Some(e) = e {
                collect_expr_refs(e, fns, out);
            }
        }
        Expr(e) => collect_expr_refs(e, fns, out),
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                collect_expr_refs(e, fns, out);
            }
            if let Some(e) = vla_dim {
                collect_expr_refs(e, fns, out);
            }
        }
        If { cond, then_body, else_body } => {
            collect_expr_refs(cond, fns, out);
            for s in then_body {
                collect_stmt_refs(s, fns, out);
            }
            if let Some(body) = else_body {
                for s in body {
                    collect_stmt_refs(s, fns, out);
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            collect_expr_refs(cond, fns, out);
            for s in body {
                collect_stmt_refs(s, fns, out);
            }
        }
        For { init, cond, step, body } => {
            if let Some(s) = init {
                collect_stmt_refs(s, fns, out);
            }
            if let Some(e) = cond {
                collect_expr_refs(e, fns, out);
            }
            if let Some(e) = step {
                collect_expr_refs(e, fns, out);
            }
            for s in body {
                collect_stmt_refs(s, fns, out);
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body {
                collect_stmt_refs(s, fns, out);
            }
        }
        Switch { expr, body } => {
            collect_expr_refs(expr, fns, out);
            for s in body {
                collect_stmt_refs(s, fns, out);
            }
        }
        CaseLabel(e) => collect_expr_refs(e, fns, out),
        Label(_, inner) => collect_stmt_refs(inner, fns, out),
        DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
    }
}

fn collect_expr_refs(
    expr: &ast::Expr,
    fns: &std::collections::HashSet<String>,
    out: &mut std::collections::HashSet<String>,
) {
    use ast::Expr::*;
    match expr {
        Ident(name) => {
            if fns.contains(name) {
                out.insert(name.clone());
            }
        }
        Call { name, args } => {
            if fns.contains(name) {
                out.insert(name.clone());
            }
            for a in args {
                collect_expr_refs(a, fns, out);
            }
        }
        CallIndirect { func_expr, args } => {
            collect_expr_refs(func_expr, fns, out);
            for a in args {
                collect_expr_refs(a, fns, out);
            }
        }
        Unary { operand, .. } => collect_expr_refs(operand, fns, out),
        Binary { lhs, rhs, .. } => {
            collect_expr_refs(lhs, fns, out);
            collect_expr_refs(rhs, fns, out);
        }
        Assign { target, value } | CompoundAssign { target, value, .. } => {
            collect_expr_refs(target, fns, out);
            collect_expr_refs(value, fns, out);
        }
        Deref(e) | AddrOf(e) | Cast(_, e) | PreInc(e) | PreDec(e)
        | PostInc(e) | PostDec(e) | RealPart(e) | ImagPart(e) => {
            collect_expr_refs(e, fns, out);
        }
        Index(a, b) => {
            collect_expr_refs(a, fns, out);
            collect_expr_refs(b, fns, out);
        }
        Member(e, _) | Arrow(e, _) => collect_expr_refs(e, fns, out),
        Ternary { cond, then_expr, else_expr } => {
            collect_expr_refs(cond, fns, out);
            collect_expr_refs(then_expr, fns, out);
            collect_expr_refs(else_expr, fns, out);
        }
        InitList(items) => {
            for e in items {
                collect_expr_refs(e, fns, out);
            }
        }
        Comma(a, b) => {
            collect_expr_refs(a, fns, out);
            collect_expr_refs(b, fns, out);
        }
        DesignatedInit { value, .. } => collect_expr_refs(value, fns, out),
        ArrayDesignator { index, value } => {
            collect_expr_refs(index, fns, out);
            collect_expr_refs(value, fns, out);
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | StringLit(_)
        | WideStringLit(_) | CharLit(_) => {}
    }
}
