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
    fold_constant_exprs(&mut unit);
    inline_simple_static_fns(&mut unit);
    prune_unused_static_fns(&mut unit);
    let module = emit_asm::emit_module(&unit, opts.char_size)?;
    Ok(module.text)
}

fn fold_constant_exprs(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        for stmt in &mut f.body {
            fold_stmt_constants(stmt);
        }
    }
    for g in &mut unit.globals {
        if let Some(init) = &mut g.init {
            fold_expr_constants(init);
        }
    }
}

fn fold_stmt_constants(stmt: &mut ast::Stmt) {
    use ast::Stmt::*;
    match stmt {
        Return(Some(e)) | Expr(e) | CaseLabel(e) => fold_expr_constants(e),
        Return(None) | DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                fold_expr_constants(e);
            }
            if let Some(e) = vla_dim {
                fold_expr_constants(e);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            fold_expr_constants(cond);
            for s in then_body {
                fold_stmt_constants(s);
            }
            if let Some(body) = else_body {
                for s in body {
                    fold_stmt_constants(s);
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            fold_expr_constants(cond);
            for s in body {
                fold_stmt_constants(s);
            }
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                fold_stmt_constants(s);
            }
            if let Some(e) = cond {
                fold_expr_constants(e);
            }
            if let Some(e) = step {
                fold_expr_constants(e);
            }
            for s in body {
                fold_stmt_constants(s);
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body {
                fold_stmt_constants(s);
            }
        }
        Switch { expr, body } => {
            fold_expr_constants(expr);
            for s in body {
                fold_stmt_constants(s);
            }
        }
        Label(_, inner) => fold_stmt_constants(inner),
    }
}

fn fold_expr_constants(expr: &mut ast::Expr) {
    use ast::Expr::*;
    match expr {
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | PostDec(operand)
        | RealPart(operand)
        | ImagPart(operand) => fold_expr_constants(operand),
        Binary { lhs, rhs, .. } | Assign { target: lhs, value: rhs } | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            fold_expr_constants(lhs);
            fold_expr_constants(rhs);
        }
        CompoundAssign { target, value, .. } => {
            fold_expr_constants(target);
            fold_expr_constants(value);
        }
        Call { args, .. } => {
            for a in args {
                fold_expr_constants(a);
            }
        }
        CallIndirect { func_expr, args } => {
            fold_expr_constants(func_expr);
            for a in args {
                fold_expr_constants(a);
            }
        }
        Member(base, _) | Arrow(base, _) => fold_expr_constants(base),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            fold_expr_constants(cond);
            fold_expr_constants(then_expr);
            fold_expr_constants(else_expr);
        }
        InitList(items) => {
            for e in items {
                fold_expr_constants(e);
            }
        }
        DesignatedInit { value, .. } => fold_expr_constants(value),
        ArrayDesignator { index, value } => {
            fold_expr_constants(index);
            fold_expr_constants(value);
        }
        Sizeof(_) => {}
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_)
        | Ident(_) => {}
    }

    if let Some(v) = eval_const_int_expr(expr) {
        *expr = ast::Expr::IntLit(v, crate::token::IntSuffix::None);
        return;
    }

    if let ast::Expr::Binary { op, lhs, rhs } = expr {
        match op {
            ast::BinaryOp::LogOr
                if eval_const_int_expr(rhs).is_some_and(|v| v != 0)
                    && expr_side_effect_free(lhs) =>
            {
                *expr = ast::Expr::IntLit(1, crate::token::IntSuffix::None);
            }
            ast::BinaryOp::LogOr if eval_const_int_expr(lhs).is_some_and(|v| v != 0) => {
                *expr = ast::Expr::IntLit(1, crate::token::IntSuffix::None);
            }
            ast::BinaryOp::LogAnd
                if eval_const_int_expr(rhs) == Some(0) && expr_side_effect_free(lhs) =>
            {
                *expr = ast::Expr::IntLit(0, crate::token::IntSuffix::None);
            }
            ast::BinaryOp::LogAnd if eval_const_int_expr(lhs) == Some(0) => {
                *expr = ast::Expr::IntLit(0, crate::token::IntSuffix::None);
            }
            _ => {}
        }
    }
}

fn eval_const_int_expr(expr: &ast::Expr) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Unary { op, operand } => {
            let v = eval_const_int_expr(operand)?;
            Some(match op {
                UnaryOp::Neg => v.wrapping_neg(),
                UnaryOp::BitNot => !v,
                UnaryOp::LogNot => i64::from(v == 0),
            })
        }
        Expr::Cast(ty, operand) if ty.is_integer() => eval_const_int_expr(operand),
        Expr::Binary { op, lhs, rhs } => {
            let a = eval_const_int_expr(lhs)?;
            let b = eval_const_int_expr(rhs)?;
            Some(match op {
                BinaryOp::Add => a.wrapping_add(b),
                BinaryOp::Sub => a.wrapping_sub(b),
                BinaryOp::Mul => a.wrapping_mul(b),
                BinaryOp::Div if b != 0 => (a as i32).wrapping_div(b as i32) as i64,
                BinaryOp::Mod if b != 0 => (a as i32).wrapping_rem(b as i32) as i64,
                BinaryOp::BitAnd => a & b,
                BinaryOp::BitOr => a | b,
                BinaryOp::BitXor => a ^ b,
                BinaryOp::Shl => (a as u32).wrapping_shl(b as u32) as i32 as i64,
                BinaryOp::Shr => (a as i32).wrapping_shr(b as u32) as i64,
                BinaryOp::Eq => i64::from(a == b),
                BinaryOp::Ne => i64::from(a != b),
                BinaryOp::Lt => i64::from(a < b),
                BinaryOp::Gt => i64::from(a > b),
                BinaryOp::Le => i64::from(a <= b),
                BinaryOp::Ge => i64::from(a >= b),
                BinaryOp::LogAnd => i64::from(a != 0 && b != 0),
                BinaryOp::LogOr => i64::from(a != 0 || b != 0),
                BinaryOp::Div | BinaryOp::Mod => return None,
            })
        }
        _ => None,
    }
}

/// Inline tiny internal helpers before lowering.
///
/// This deliberately handles only the low-risk case: `static` functions
/// whose body is exactly `return expr;`, where both `expr` and the call
/// arguments are side-effect-free. That keeps argument duplication
/// semantics intact while removing hot helper-call overhead.
fn inline_simple_static_fns(unit: &mut ast::TranslationUnit) {
    use std::collections::HashMap;

    if unit.functions.len() > 16 {
        return;
    }

    let call_counts = direct_call_counts(unit);
    let mut inline_fns: HashMap<String, InlineFn> = HashMap::new();
    for f in &unit.functions {
        if !f.is_static || f.is_variadic || f.body.len() != 1 {
            continue;
        }
        if call_counts.get(&f.name).copied().unwrap_or(0) > 4 {
            continue;
        }
        let ast::Stmt::Return(Some(body)) = &f.body[0] else {
            continue;
        };
        if !expr_side_effect_free(body) || expr_mentions_name(body, &f.name) {
            continue;
        }
        inline_fns.insert(
            f.name.clone(),
            InlineFn {
                params: f.params.iter().map(|(name, _)| name.clone()).collect(),
                body: body.clone(),
            },
        );
    }

    if inline_fns.is_empty() {
        return;
    }

    for f in &mut unit.functions {
        for stmt in &mut f.body {
            inline_stmt(stmt, &inline_fns);
        }
    }
}

fn direct_call_counts(unit: &ast::TranslationUnit) -> std::collections::HashMap<String, usize> {
    let mut counts = std::collections::HashMap::new();
    for f in &unit.functions {
        for stmt in &f.body {
            count_stmt_calls(stmt, &mut counts);
        }
    }
    for g in &unit.globals {
        if let Some(init) = &g.init {
            count_expr_calls(init, &mut counts);
        }
    }
    counts
}

fn count_stmt_calls(stmt: &ast::Stmt, counts: &mut std::collections::HashMap<String, usize>) {
    use ast::Stmt::*;
    match stmt {
        Return(Some(e)) | Expr(e) | CaseLabel(e) => count_expr_calls(e, counts),
        Return(None) | DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                count_expr_calls(e, counts);
            }
            if let Some(e) = vla_dim {
                count_expr_calls(e, counts);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            count_expr_calls(cond, counts);
            for s in then_body {
                count_stmt_calls(s, counts);
            }
            if let Some(body) = else_body {
                for s in body {
                    count_stmt_calls(s, counts);
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            count_expr_calls(cond, counts);
            for s in body {
                count_stmt_calls(s, counts);
            }
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                count_stmt_calls(s, counts);
            }
            if let Some(e) = cond {
                count_expr_calls(e, counts);
            }
            if let Some(e) = step {
                count_expr_calls(e, counts);
            }
            for s in body {
                count_stmt_calls(s, counts);
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body {
                count_stmt_calls(s, counts);
            }
        }
        Switch { expr, body } => {
            count_expr_calls(expr, counts);
            for s in body {
                count_stmt_calls(s, counts);
            }
        }
        Label(_, inner) => count_stmt_calls(inner, counts),
    }
}

fn count_expr_calls(expr: &ast::Expr, counts: &mut std::collections::HashMap<String, usize>) {
    use ast::Expr::*;
    match expr {
        Call { name, args } => {
            *counts.entry(name.clone()).or_insert(0) += 1;
            for a in args {
                count_expr_calls(a, counts);
            }
        }
        CallIndirect { func_expr, args } => {
            count_expr_calls(func_expr, counts);
            for a in args {
                count_expr_calls(a, counts);
            }
        }
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | PostDec(operand)
        | RealPart(operand)
        | ImagPart(operand) => count_expr_calls(operand, counts),
        Binary { lhs, rhs, .. }
        | Assign { target: lhs, value: rhs }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            count_expr_calls(lhs, counts);
            count_expr_calls(rhs, counts);
        }
        CompoundAssign { target, value, .. } => {
            count_expr_calls(target, counts);
            count_expr_calls(value, counts);
        }
        Member(base, _) | Arrow(base, _) => count_expr_calls(base, counts),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            count_expr_calls(cond, counts);
            count_expr_calls(then_expr, counts);
            count_expr_calls(else_expr, counts);
        }
        InitList(items) => {
            for e in items {
                count_expr_calls(e, counts);
            }
        }
        DesignatedInit { value, .. } => count_expr_calls(value, counts),
        ArrayDesignator { index, value } => {
            count_expr_calls(index, counts);
            count_expr_calls(value, counts);
        }
        Sizeof(_) => {}
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_)
        | Ident(_) => {}
    }
}

fn inline_stmt(stmt: &mut ast::Stmt, inline_fns: &std::collections::HashMap<String, InlineFn>) {
    use ast::Stmt::*;
    match stmt {
        Return(e) => {
            if let Some(e) = e {
                inline_expr(e, inline_fns);
            }
        }
        Expr(e) => inline_expr(e, inline_fns),
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                inline_expr(e, inline_fns);
            }
            if let Some(e) = vla_dim {
                inline_expr(e, inline_fns);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            inline_expr(cond, inline_fns);
            for s in then_body {
                inline_stmt(s, inline_fns);
            }
            if let Some(body) = else_body {
                for s in body {
                    inline_stmt(s, inline_fns);
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            inline_expr(cond, inline_fns);
            for s in body {
                inline_stmt(s, inline_fns);
            }
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                inline_stmt(s, inline_fns);
            }
            if let Some(e) = cond {
                inline_expr(e, inline_fns);
            }
            if let Some(e) = step {
                inline_expr(e, inline_fns);
            }
            for s in body {
                inline_stmt(s, inline_fns);
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body {
                inline_stmt(s, inline_fns);
            }
        }
        Switch { expr, body } => {
            inline_expr(expr, inline_fns);
            for s in body {
                inline_stmt(s, inline_fns);
            }
        }
        CaseLabel(e) => inline_expr(e, inline_fns),
        Label(_, inner) => inline_stmt(inner, inline_fns),
        DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
    }
}

#[derive(Clone)]
struct InlineFn {
    params: Vec<String>,
    body: ast::Expr,
}

fn inline_expr(expr: &mut ast::Expr, inline_fns: &std::collections::HashMap<String, InlineFn>) {
    use ast::Expr::*;

    match expr {
        Call { name, args } => {
            for a in args.iter_mut() {
                inline_expr(a, inline_fns);
            }
            if let Some(f) = inline_fns.get(name) {
                if f.params.len() == args.len() && args.iter().all(expr_side_effect_free) {
                    let mut subst = std::collections::HashMap::new();
                    for (param, arg) in f.params.iter().zip(args.iter()) {
                        subst.insert(param.as_str(), arg.clone());
                    }
                    *expr = substitute_inline_expr(&f.body, &subst);
                }
            }
        }
        CallIndirect { func_expr, args } => {
            inline_expr(func_expr, inline_fns);
            for a in args {
                inline_expr(a, inline_fns);
            }
        }
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | PostDec(operand)
        | RealPart(operand)
        | ImagPart(operand) => inline_expr(operand, inline_fns),
        Binary { lhs, rhs, .. } | Assign { target: lhs, value: rhs } => {
            inline_expr(lhs, inline_fns);
            inline_expr(rhs, inline_fns);
        }
        CompoundAssign { target, value, .. } => {
            inline_expr(target, inline_fns);
            inline_expr(value, inline_fns);
        }
        Index(a, b) | Comma(a, b) => {
            inline_expr(a, inline_fns);
            inline_expr(b, inline_fns);
        }
        Member(base, _) | Arrow(base, _) => inline_expr(base, inline_fns),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            inline_expr(cond, inline_fns);
            inline_expr(then_expr, inline_fns);
            inline_expr(else_expr, inline_fns);
        }
        InitList(items) => {
            for e in items {
                inline_expr(e, inline_fns);
            }
        }
        DesignatedInit { value, .. } => inline_expr(value, inline_fns),
        ArrayDesignator { index, value } => {
            inline_expr(index, inline_fns);
            inline_expr(value, inline_fns);
        }
        Sizeof(_) => {}
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_)
        | Ident(_) => {}
    }
}

fn substitute_inline_expr(
    expr: &ast::Expr,
    subst: &std::collections::HashMap<&str, ast::Expr>,
) -> ast::Expr {
    use ast::Expr::*;
    match expr {
        Ident(name) => subst.get(name.as_str()).cloned().unwrap_or_else(|| expr.clone()),
        Unary { op, operand } => Unary {
            op: *op,
            operand: Box::new(substitute_inline_expr(operand, subst)),
        },
        Binary { op, lhs, rhs } => Binary {
            op: *op,
            lhs: Box::new(substitute_inline_expr(lhs, subst)),
            rhs: Box::new(substitute_inline_expr(rhs, subst)),
        },
        Cast(ty, operand) => Cast(ty.clone(), Box::new(substitute_inline_expr(operand, subst))),
        Deref(operand) => Deref(Box::new(substitute_inline_expr(operand, subst))),
        AddrOf(operand) => AddrOf(Box::new(substitute_inline_expr(operand, subst))),
        Index(a, b) => Index(
            Box::new(substitute_inline_expr(a, subst)),
            Box::new(substitute_inline_expr(b, subst)),
        ),
        Member(base, field) => Member(Box::new(substitute_inline_expr(base, subst)), field.clone()),
        Arrow(base, field) => Arrow(Box::new(substitute_inline_expr(base, subst)), field.clone()),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => Ternary {
            cond: Box::new(substitute_inline_expr(cond, subst)),
            then_expr: Box::new(substitute_inline_expr(then_expr, subst)),
            else_expr: Box::new(substitute_inline_expr(else_expr, subst)),
        },
        RealPart(e) => RealPart(Box::new(substitute_inline_expr(e, subst))),
        ImagPart(e) => ImagPart(Box::new(substitute_inline_expr(e, subst))),
        Sizeof(_) => expr.clone(),
        _ => expr.clone(),
    }
}

fn expr_side_effect_free(expr: &ast::Expr) -> bool {
    use ast::Expr::*;
    match expr {
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_)
        | Ident(_) => true,
        Unary { operand, .. } | Cast(_, operand) | RealPart(operand) | ImagPart(operand) => {
            expr_side_effect_free(operand)
        }
        Binary { lhs, rhs, .. } | Index(lhs, rhs) => {
            expr_side_effect_free(lhs) && expr_side_effect_free(rhs)
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_side_effect_free(cond)
                && expr_side_effect_free(then_expr)
                && expr_side_effect_free(else_expr)
        }
        Member(base, _) | Arrow(base, _) | AddrOf(base) | Deref(base) => expr_side_effect_free(base),
        Sizeof(_) => true,
        Call { .. }
        | CallIndirect { .. }
        | Assign { .. }
        | PreInc(_)
        | PreDec(_)
        | PostInc(_)
        | PostDec(_)
        | CompoundAssign { .. }
        | InitList(_)
        | Comma(_, _)
        | DesignatedInit { .. }
        | ArrayDesignator { .. } => false,
    }
}

fn expr_mentions_name(expr: &ast::Expr, name: &str) -> bool {
    use ast::Expr::*;
    match expr {
        Ident(n) => n == name,
        Call { name: n, args } => n == name || args.iter().any(|a| expr_mentions_name(a, name)),
        CallIndirect { func_expr, args } => {
            expr_mentions_name(func_expr, name) || args.iter().any(|a| expr_mentions_name(a, name))
        }
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | PostDec(operand)
        | RealPart(operand)
        | ImagPart(operand) => expr_mentions_name(operand, name),
        Binary { lhs, rhs, .. }
        | Assign { target: lhs, value: rhs }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => expr_mentions_name(lhs, name) || expr_mentions_name(rhs, name),
        CompoundAssign { target, value, .. } => {
            expr_mentions_name(target, name) || expr_mentions_name(value, name)
        }
        Member(base, _) | Arrow(base, _) => expr_mentions_name(base, name),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_mentions_name(cond, name)
                || expr_mentions_name(then_expr, name)
                || expr_mentions_name(else_expr, name)
        }
        InitList(items) => items.iter().any(|e| expr_mentions_name(e, name)),
        DesignatedInit { value, .. } => expr_mentions_name(value, name),
        ArrayDesignator { index, value } => {
            expr_mentions_name(index, name) || expr_mentions_name(value, name)
        }
        Sizeof(_) => false,
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_) => {
            false
        }
    }
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
    let fn_names: HashSet<String> = unit.functions.iter().map(|f| f.name.clone()).collect();
    let by_name: HashMap<&str, &ast::Function> = unit
        .functions
        .iter()
        .map(|f| (f.name.as_str(), f))
        .collect();
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
        let Some(f) = by_name.get(name.as_str()) else {
            continue;
        };
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
    unit.functions
        .retain(|f| !f.is_static || reachable.contains(&f.name));
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
        If {
            cond,
            then_body,
            else_body,
        } => {
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
        For {
            init,
            cond,
            step,
            body,
        } => {
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
        Deref(e)
        | AddrOf(e)
        | Cast(_, e)
        | PreInc(e)
        | PreDec(e)
        | PostInc(e)
        | PostDec(e)
        | RealPart(e)
        | ImagPart(e) => {
            collect_expr_refs(e, fns, out);
        }
        Index(a, b) => {
            collect_expr_refs(a, fns, out);
            collect_expr_refs(b, fns, out);
        }
        Member(e, _) | Arrow(e, _) => collect_expr_refs(e, fns, out),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
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
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) => {}
    }
}

#[cfg(test)]
mod tests {
    #[test]
    fn inline_simple_static_return_helper() {
        let src = "static unsigned int mix(unsigned int x, unsigned int k) {
                       return ((x + k) * 3U) ^ (x >> 2);
                   }
                   unsigned int f(unsigned int n, unsigned int acc) {
                       while (n != 0U) {
                           acc += mix(n, acc & 15U) & 31U;
                           --n;
                       }
                       return acc;
                   }";
        let asm = crate::compile_to_asm(src, "inline-simple-static.c", &Default::default())
            .expect("compile inline-simple-static");
        assert!(
            !asm.contains("CJUMP mix."),
            "static helper should be inlined at the call site:\n{}",
            asm
        );
        assert!(
            !asm.contains("mix.:"),
            "unused inlined static helper should be pruned:\n{}",
            asm
        );
    }

    #[test]
    fn do_not_inline_when_argument_has_side_effects() {
        let src = "static int twice(int x) { return x + x; }
                   int f(int x) { return twice(++x); }";
        let asm = crate::compile_to_asm(src, "inline-side-effect.c", &Default::default())
            .expect("compile inline-side-effect");
        assert!(
            asm.contains("CJUMP twice."),
            "side-effecting argument must not be duplicated by inlining:\n{}",
            asm
        );
    }

    #[test]
    fn do_not_inline_many_call_sites() {
        let src = "static int inc(int x) { return x + 1; }
                   int f(int x) {
                       return inc(x) + inc(x + 1) + inc(x + 2) + inc(x + 3) + inc(x + 4);
                   }";
        let asm = crate::compile_to_asm(src, "inline-many-calls.c", &Default::default())
            .expect("compile inline-many-calls");
        assert!(
            asm.contains("CJUMP inc."),
            "helper with many call sites should not be inlined everywhere:\n{}",
            asm
        );
    }

    #[test]
    fn folds_constant_dead_branches_before_lowering() {
        let src = "int f(unsigned int i) {
                       unsigned int acc = 0;
                       if ((3U * 7U) == 22U) {
                           acc += 100000U;
                       } else {
                           acc += (i * 5U + 1U) & 31U;
                       }
                       if ((i & 1U) != 0U || 1U) {
                           acc += 2U;
                       }
                       return acc;
                   }";
        let asm = crate::compile_to_asm(src, "fold-dead-branches.c", &Default::default())
            .expect("compile fold-dead-branches");
        assert!(
            !asm.contains("0x186A0"),
            "constant-false branch body should be removed:\n{}",
            asm
        );
        assert!(
            !asm.contains("IF NE JUMP"),
            "side-effect-free `|| 1` should not leave a branch:\n{}",
            asm
        );
    }

    #[test]
    fn int_to_pointer_cast_does_not_use_frame_sentinel_vreg() {
        let src = "typedef unsigned int uint32_t;
                   uint32_t f(void) {
                       return *(volatile uint32_t *)0x31018064U;
                   }";
        let asm = crate::compile_to_asm(src, "int-to-pointer-mmio.c", &Default::default())
            .expect("compile int-to-pointer-mmio");
        assert!(
            asm.contains("DM (I4,M5)") || asm.contains("DM (I4, M5)"),
            "MMIO load should use an indirect pointer register:\n{}",
            asm
        );
        assert!(
            !asm.contains("DM (-0x3,I6)"),
            "MMIO pointer cast must not become a frame-relative load:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_fold_inside_sizeof_expression() {
        let src = "#include <stddef.h>
                   struct S { int a; int b; };
                   int f(void) { return (int)offsetof(struct S, a); }";
        let asm = crate::compile_to_asm(src, "sizeof-unevaluated.c", &Default::default())
            .expect("compile sizeof-unevaluated");
        assert!(
            asm.contains("R0 = 0x0") || asm.contains("R0=0x0"),
            "offsetof first field should compile as constant zero:\n{}",
            asm
        );
    }
}
