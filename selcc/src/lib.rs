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
use std::collections::HashMap;

type UnsignedRangeEnv = HashMap<String, (u64, u64)>;

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
    simplify_const_local_conditions(&mut unit);
    fold_constant_exprs(&mut unit);
    simplify_loop_body_known_conditions(&mut unit);
    fold_constant_exprs(&mut unit);
    substitute_bool_locals(&mut unit);
    substitute_single_use_pure_locals(&mut unit);
    simplify_signed_char_unsigned_range_compares(&mut unit);
    fold_constant_exprs(&mut unit);
    prune_unused_side_effect_free_local_inits(&mut unit);
    fold_const_static_switch_calls(&mut unit);
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
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | Index(lhs, rhs)
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

    if matches!(expr, ast::Expr::IntLit(..)) {
        return;
    }

    if preserves_suffixed_int_type_context(expr) {
        return;
    }

    if let Some(v) = eval_const_int_expr(expr) {
        let suffix = folded_int_suffix_for_expr(expr);
        *expr = ast::Expr::IntLit(v, suffix);
        return;
    }

    if let ast::Expr::Binary { op, lhs, rhs } = expr {
        match op {
            ast::BinaryOp::LogOr
                if eval_const_int_expr(rhs) == Some(0) && expr_is_boolean_value(lhs) =>
            {
                *expr = (**lhs).clone();
            }
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
                if eval_const_int_expr(rhs).is_some_and(|v| v != 0)
                    && expr_is_boolean_value(lhs) =>
            {
                *expr = (**lhs).clone();
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
    if let ast::Expr::Ternary {
        cond,
        then_expr,
        else_expr,
    } = expr
    {
        if let Some(v) = eval_const_int_expr(cond) {
            *expr = if v != 0 {
                (**then_expr).clone()
            } else {
                (**else_expr).clone()
            };
        }
    }
    simplify_absorbed_boolean(expr);
}

fn substitute_bool_locals(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut env = HashMap::new();
        substitute_bool_locals_in_stmts(&mut f.body, &mut env);
    }
}

fn substitute_single_use_pure_locals(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        substitute_single_use_pure_locals_in_stmts(&mut f.body);
    }
}

fn simplify_signed_char_unsigned_range_compares(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut env = UnsignedRangeEnv::new();
        simplify_signed_char_unsigned_range_compares_in_stmts(&mut f.body, &mut env);
    }
}

fn simplify_loop_body_known_conditions(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        simplify_loop_body_known_conditions_in_stmts(&mut f.body);
    }
}

fn simplify_const_local_conditions(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut env = HashMap::new();
        simplify_const_local_conditions_in_stmts(&mut f.body, &mut env);
    }
}

fn simplify_const_local_conditions_in_stmts(
    stmts: &mut [ast::Stmt],
    env: &mut HashMap<String, i64>,
) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::VarDecl {
                name,
                init: Some(init),
                ..
            } => {
                if let Some(v) = eval_const_int_expr(init) {
                    env.insert(name.clone(), v);
                } else {
                    env.remove(name);
                }
            }
            Stmt::VarDecl { name, .. } => {
                env.remove(name);
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                replace_ident_condition_with_const(cond, env);
                let mut then_env = env.clone();
                simplify_const_local_conditions_in_stmts(then_body, &mut then_env);
                if let Some(body) = else_body {
                    let mut else_env = env.clone();
                    simplify_const_local_conditions_in_stmts(body, &mut else_env);
                }
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                replace_ident_condition_with_const(cond, env);
                let mut body_env = env.clone();
                for name in stmt_assigned_names_in_stmts(body) {
                    body_env.remove(&name);
                }
                simplify_const_local_conditions_in_stmts(body, &mut body_env);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::For {
                init: _,
                cond,
                step: _,
                body,
            } => {
                if let Some(cond) = cond {
                    replace_ident_condition_with_const(cond, env);
                }
                let mut body_env = env.clone();
                for name in stmt_assigned_names_in_stmts(body) {
                    body_env.remove(&name);
                }
                simplify_const_local_conditions_in_stmts(body, &mut body_env);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) => {
                let mut block_env = env.clone();
                simplify_const_local_conditions_in_stmts(body, &mut block_env);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Switch { expr, body } => {
                replace_ident_condition_with_const(expr, env);
                let mut body_env = env.clone();
                simplify_const_local_conditions_in_stmts(body, &mut body_env);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Label(_, inner) => {
                simplify_const_local_conditions_in_stmts(std::slice::from_mut(inner.as_mut()), env);
            }
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                replace_ident_condition_with_const(expr, env);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Return(None)
            | Stmt::DefaultLabel
            | Stmt::Break
            | Stmt::Continue
            | Stmt::Goto(_)
            | Stmt::Asm(_)
            | Stmt::EnumDecl(_) => {}
        }
    }
}

fn replace_ident_condition_with_const(expr: &mut ast::Expr, env: &HashMap<String, i64>) {
    if let ast::Expr::Ident(name) = expr {
        if let Some(v) = env.get(name) {
            *expr = ast::Expr::IntLit(*v, crate::token::IntSuffix::None);
        }
    }
}

fn clear_changed_const_env(env: &mut HashMap<String, i64>, changed: Vec<String>) {
    for name in changed {
        env.remove(&name);
    }
}

fn simplify_loop_body_known_conditions_in_stmts(stmts: &mut [ast::Stmt]) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::For {
                init,
                cond: Some(cond),
                step,
                body,
            } => {
                simplify_loop_body_known_conditions_in_stmts(body);
                if let Some(loop_var) =
                    canonical_counting_loop_var(init.as_deref(), cond, step.as_ref())
                {
                    if !stmt_assigned_names_in_stmts(body).contains(&loop_var) {
                        replace_expr_in_stmts(
                            body,
                            cond,
                            &ast::Expr::IntLit(1, crate::token::IntSuffix::None),
                        );
                    }
                }
            }
            Stmt::For { body, .. } => simplify_loop_body_known_conditions_in_stmts(body),
            Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                simplify_loop_body_known_conditions_in_stmts(then_body);
                if let Some(body) = else_body {
                    simplify_loop_body_known_conditions_in_stmts(body);
                }
            }
            Stmt::While { body, .. }
            | Stmt::DoWhile { body, .. }
            | Stmt::Block(body)
            | Stmt::DeclGroup(body)
            | Stmt::Switch { body, .. } => simplify_loop_body_known_conditions_in_stmts(body),
            Stmt::Label(_, inner) => {
                simplify_loop_body_known_conditions_in_stmts(std::slice::from_mut(inner.as_mut()));
            }
            Stmt::Return(_)
            | Stmt::Expr(_)
            | Stmt::VarDecl { .. }
            | Stmt::CaseLabel(_)
            | Stmt::DefaultLabel
            | Stmt::Break
            | Stmt::Continue
            | Stmt::Goto(_)
            | Stmt::Asm(_)
            | Stmt::EnumDecl(_) => {}
        }
    }
}

fn canonical_counting_loop_var(
    init: Option<&ast::Stmt>,
    cond: &ast::Expr,
    step: Option<&ast::Expr>,
) -> Option<String> {
    let ast::Stmt::VarDecl {
        name,
        init: Some(init_expr),
        ..
    } = init?
    else {
        return None;
    };
    if eval_const_int_expr(init_expr)? != 0 {
        return None;
    }
    let ast::Expr::Binary {
        op: ast::BinaryOp::Lt,
        lhs,
        rhs,
    } = cond
    else {
        return None;
    };
    if !matches!(lhs.as_ref(), ast::Expr::Ident(lhs_name) if lhs_name == name) {
        return None;
    }
    eval_const_int_expr(rhs)?;
    match step? {
        ast::Expr::PreInc(inner) | ast::Expr::PostInc(inner) if matches!(inner.as_ref(), ast::Expr::Ident(step_name) if step_name == name) => {
            Some(name.clone())
        }
        _ => None,
    }
}

fn stmt_assigned_names_in_stmts(stmts: &[ast::Stmt]) -> Vec<String> {
    let mut out = Vec::new();
    for stmt in stmts {
        collect_stmt_assigned_names(stmt, &mut out);
    }
    out
}

fn replace_expr_in_stmts(stmts: &mut [ast::Stmt], needle: &ast::Expr, replacement: &ast::Expr) {
    for stmt in stmts {
        use ast::Stmt;
        match stmt {
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                replace_expr(expr, needle, replacement);
            }
            Stmt::VarDecl { init, vla_dim, .. } => {
                if let Some(expr) = init {
                    replace_expr(expr, needle, replacement);
                }
                if let Some(expr) = vla_dim {
                    replace_expr(expr, needle, replacement);
                }
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                replace_expr(cond, needle, replacement);
                replace_expr_in_stmts(then_body, needle, replacement);
                if let Some(body) = else_body {
                    replace_expr_in_stmts(body, needle, replacement);
                }
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                replace_expr(cond, needle, replacement);
                replace_expr_in_stmts(body, needle, replacement);
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(stmt) = init {
                    replace_expr_in_stmts(std::slice::from_mut(stmt.as_mut()), needle, replacement);
                }
                if let Some(expr) = cond {
                    replace_expr(expr, needle, replacement);
                }
                if let Some(expr) = step {
                    replace_expr(expr, needle, replacement);
                }
                replace_expr_in_stmts(body, needle, replacement);
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) => {
                replace_expr_in_stmts(body, needle, replacement);
            }
            Stmt::Switch { expr, body } => {
                replace_expr(expr, needle, replacement);
                replace_expr_in_stmts(body, needle, replacement);
            }
            Stmt::Label(_, inner) => {
                replace_expr_in_stmts(std::slice::from_mut(inner.as_mut()), needle, replacement);
            }
            Stmt::Return(None)
            | Stmt::DefaultLabel
            | Stmt::Break
            | Stmt::Continue
            | Stmt::Goto(_)
            | Stmt::Asm(_)
            | Stmt::EnumDecl(_) => {}
        }
    }
}

fn replace_expr(expr: &mut ast::Expr, needle: &ast::Expr, replacement: &ast::Expr) {
    if expr == needle {
        *expr = replacement.clone();
        return;
    }
    use ast::Expr;
    match expr {
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => replace_expr(operand, needle, replacement),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            replace_expr(lhs, needle, replacement);
            replace_expr(rhs, needle, replacement);
        }
        Expr::CompoundAssign { target, value, .. } => {
            replace_expr(target, needle, replacement);
            replace_expr(value, needle, replacement);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                replace_expr(arg, needle, replacement);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            replace_expr(func_expr, needle, replacement);
            for arg in args {
                replace_expr(arg, needle, replacement);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            replace_expr(cond, needle, replacement);
            replace_expr(then_expr, needle, replacement);
            replace_expr(else_expr, needle, replacement);
        }
        Expr::InitList(items) => {
            for item in items {
                replace_expr(item, needle, replacement);
            }
        }
        Expr::DesignatedInit { value, .. } => replace_expr(value, needle, replacement),
        Expr::ArrayDesignator { index, value } => {
            replace_expr(index, needle, replacement);
            replace_expr(value, needle, replacement);
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => {}
    }
}

fn substitute_bool_locals_in_stmts(stmts: &mut [ast::Stmt], env: &mut HashMap<String, ast::Expr>) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                substitute_bool_locals_in_expr(expr, env);
            }
            Stmt::Return(None)
            | Stmt::DefaultLabel
            | Stmt::Break
            | Stmt::Continue
            | Stmt::Goto(_)
            | Stmt::Asm(_)
            | Stmt::EnumDecl(_) => {}
            Stmt::VarDecl { name, init, .. } => {
                if let Some(expr) = init {
                    substitute_bool_locals_in_expr(expr, env);
                    if expr_is_boolean_local_value(expr) && expr_side_effect_free(expr) {
                        env.insert(name.clone(), expr.clone());
                    } else {
                        env.remove(name);
                    }
                } else {
                    env.remove(name);
                }
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                substitute_bool_locals_in_expr(cond, env);
                let mut then_env = env.clone();
                substitute_bool_locals_in_stmts(then_body, &mut then_env);
                if let Some(body) = else_body {
                    let mut else_env = env.clone();
                    substitute_bool_locals_in_stmts(body, &mut else_env);
                }
                clear_changed_bool_env(env, stmt_assigned_names(stmt));
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                substitute_bool_locals_in_expr(cond, env);
                let mut body_env = env.clone();
                substitute_bool_locals_in_stmts(body, &mut body_env);
                clear_changed_bool_env(env, stmt_assigned_names(stmt));
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                let mut loop_env = env.clone();
                if let Some(init) = init {
                    substitute_bool_locals_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        &mut loop_env,
                    );
                }
                if let Some(cond) = cond {
                    substitute_bool_locals_in_expr(cond, &loop_env);
                }
                let mut body_env = loop_env.clone();
                substitute_bool_locals_in_stmts(body, &mut body_env);
                if let Some(step) = step {
                    substitute_bool_locals_in_expr(step, &body_env);
                }
                clear_changed_bool_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) => {
                let mut block_env = env.clone();
                substitute_bool_locals_in_stmts(body, &mut block_env);
                clear_changed_bool_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Switch { expr, body } => {
                substitute_bool_locals_in_expr(expr, env);
                let mut body_env = env.clone();
                substitute_bool_locals_in_stmts(body, &mut body_env);
                clear_changed_bool_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Label(_, inner) => {
                substitute_bool_locals_in_stmts(std::slice::from_mut(inner.as_mut()), env);
            }
        }
    }
}

fn substitute_bool_locals_in_expr(expr: &mut ast::Expr, env: &HashMap<String, ast::Expr>) {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => {
            if let Some(replacement) = env.get(name) {
                *expr = replacement.clone();
            }
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => substitute_bool_locals_in_expr(operand, env),
        Expr::AddrOf(_)
        | Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_) => {}
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            substitute_bool_locals_in_expr(lhs, env);
            substitute_bool_locals_in_expr(rhs, env);
        }
        Expr::Assign { value, .. } => substitute_bool_locals_in_expr(value, env),
        Expr::CompoundAssign { value, .. } => substitute_bool_locals_in_expr(value, env),
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_bool_locals_in_expr(arg, env);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            substitute_bool_locals_in_expr(func_expr, env);
            for arg in args {
                substitute_bool_locals_in_expr(arg, env);
            }
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => substitute_bool_locals_in_expr(base, env),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            substitute_bool_locals_in_expr(cond, env);
            substitute_bool_locals_in_expr(then_expr, env);
            substitute_bool_locals_in_expr(else_expr, env);
        }
        Expr::InitList(items) => {
            for item in items {
                substitute_bool_locals_in_expr(item, env);
            }
        }
        Expr::DesignatedInit { value, .. } => substitute_bool_locals_in_expr(value, env),
        Expr::ArrayDesignator { index, value } => {
            substitute_bool_locals_in_expr(index, env);
            substitute_bool_locals_in_expr(value, env);
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_) => {}
    }
}

#[derive(Clone)]
struct PureLocalCandidate {
    decl_idx: usize,
    init: ast::Expr,
}

fn substitute_single_use_pure_locals_in_stmts(stmts: &mut [ast::Stmt]) {
    let candidates = single_use_pure_local_candidates(stmts);
    if !candidates.is_empty() {
        let mut substituted = std::collections::HashSet::new();
        for (idx, stmt) in stmts.iter_mut().enumerate() {
            substitute_single_use_pure_locals_in_stmt_header(
                stmt,
                idx,
                &candidates,
                &mut substituted,
            );
        }
        for (name, candidate) in &candidates {
            if substituted.contains(name) {
                if let ast::Stmt::VarDecl { init, .. } = &mut stmts[candidate.decl_idx] {
                    *init = None;
                }
            }
        }
    }

    for stmt in stmts {
        match stmt {
            ast::Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                substitute_single_use_pure_locals_in_stmts(then_body);
                if let Some(body) = else_body {
                    substitute_single_use_pure_locals_in_stmts(body);
                }
            }
            ast::Stmt::While { body, .. }
            | ast::Stmt::DoWhile { body, .. }
            | ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
                substitute_single_use_pure_locals_in_stmts(body);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    substitute_single_use_pure_locals_in_stmts(std::slice::from_mut(init.as_mut()));
                }
                substitute_single_use_pure_locals_in_stmts(body);
            }
            ast::Stmt::Label(_, inner) => {
                substitute_single_use_pure_locals_in_stmts(std::slice::from_mut(inner.as_mut()));
            }
            ast::Stmt::Return(_)
            | ast::Stmt::Expr(_)
            | ast::Stmt::VarDecl { .. }
            | ast::Stmt::CaseLabel(_)
            | ast::Stmt::DefaultLabel
            | ast::Stmt::Break
            | ast::Stmt::Continue
            | ast::Stmt::Goto(_)
            | ast::Stmt::Asm(_)
            | ast::Stmt::EnumDecl(_) => {}
        }
    }
}

fn single_use_pure_local_candidates(stmts: &[ast::Stmt]) -> HashMap<String, PureLocalCandidate> {
    let mut uses: HashMap<String, u32> = HashMap::new();
    let mut assigned = std::collections::HashSet::new();
    let mut address_taken = std::collections::HashSet::new();
    let mut decl_counts: HashMap<String, u32> = HashMap::new();
    for stmt in stmts {
        collect_same_level_local_facts(stmt, &mut uses, &mut assigned, &mut address_taken);
        if let ast::Stmt::VarDecl { name, .. } = stmt {
            *decl_counts.entry(name.clone()).or_insert(0) += 1;
        }
    }

    let mut candidates = HashMap::new();
    let local_names: std::collections::HashSet<String> = decl_counts.keys().cloned().collect();
    for (idx, stmt) in stmts.iter().enumerate() {
        let ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static,
            vla_dim,
        } = stmt
        else {
            continue;
        };
        if *is_static
            || vla_dim.is_some()
            || !ty.is_scalar()
            || decl_counts.get(name).copied().unwrap_or(0) != 1
            || uses.get(name).copied().unwrap_or(0) != 1
            || assigned.contains(name)
            || address_taken.contains(name)
            || !expr_side_effect_free(init)
            || expr_mentions_name(init, name)
            || local_names
                .iter()
                .any(|other| other != name && expr_mentions_name(init, other))
        {
            continue;
        }
        candidates.insert(
            name.clone(),
            PureLocalCandidate {
                decl_idx: idx,
                init: init.clone(),
            },
        );
    }
    candidates
}

fn collect_same_level_local_facts(
    stmt: &ast::Stmt,
    uses: &mut HashMap<String, u32>,
    assigned: &mut std::collections::HashSet<String>,
    address_taken: &mut std::collections::HashSet<String>,
) {
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
            count_expr_ident_uses(expr, uses);
            collect_expr_assigned_name_set(expr, assigned);
            collect_address_taken_idents(expr, address_taken);
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                count_expr_ident_uses(expr, uses);
                collect_expr_assigned_name_set(expr, assigned);
                collect_address_taken_idents(expr, address_taken);
            }
            if let Some(expr) = vla_dim {
                count_expr_ident_uses(expr, uses);
                collect_expr_assigned_name_set(expr, assigned);
                collect_address_taken_idents(expr, address_taken);
            }
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            count_expr_ident_uses(cond, uses);
            collect_expr_assigned_name_set(cond, assigned);
            collect_address_taken_idents(cond, address_taken);
            for stmt in then_body {
                collect_same_level_local_facts(stmt, uses, assigned, address_taken);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_same_level_local_facts(stmt, uses, assigned, address_taken);
                }
            }
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
            count_expr_ident_uses(cond, uses);
            collect_expr_assigned_name_set(cond, assigned);
            collect_address_taken_idents(cond, address_taken);
            for stmt in body {
                collect_same_level_local_facts(stmt, uses, assigned, address_taken);
            }
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(init) = init {
                collect_same_level_local_facts(init, uses, assigned, address_taken);
            }
            if let Some(expr) = cond {
                count_expr_ident_uses(expr, uses);
                collect_expr_assigned_name_set(expr, assigned);
                collect_address_taken_idents(expr, address_taken);
            }
            if let Some(expr) = step {
                count_expr_ident_uses(expr, uses);
                collect_expr_assigned_name_set(expr, assigned);
                collect_address_taken_idents(expr, address_taken);
            }
            for stmt in body {
                collect_same_level_local_facts(stmt, uses, assigned, address_taken);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_same_level_local_facts(stmt, uses, assigned, address_taken);
            }
        }
        ast::Stmt::Switch { expr, body } => {
            count_expr_ident_uses(expr, uses);
            collect_expr_assigned_name_set(expr, assigned);
            collect_address_taken_idents(expr, address_taken);
            for stmt in body {
                collect_same_level_local_facts(stmt, uses, assigned, address_taken);
            }
        }
        ast::Stmt::Label(_, inner) => {
            collect_same_level_local_facts(inner, uses, assigned, address_taken);
        }
        ast::Stmt::Return(None)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => {}
    }
}

fn substitute_single_use_pure_locals_in_stmt_header(
    stmt: &mut ast::Stmt,
    stmt_idx: usize,
    candidates: &HashMap<String, PureLocalCandidate>,
    substituted: &mut std::collections::HashSet<String>,
) {
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
            substitute_single_use_pure_locals_in_expr(expr, stmt_idx, candidates, substituted);
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                substitute_single_use_pure_locals_in_expr(expr, stmt_idx, candidates, substituted);
            }
            if let Some(expr) = vla_dim {
                substitute_single_use_pure_locals_in_expr(expr, stmt_idx, candidates, substituted);
            }
        }
        ast::Stmt::If { cond, .. }
        | ast::Stmt::While { cond, .. }
        | ast::Stmt::DoWhile { cond, .. } => {
            substitute_single_use_pure_locals_in_expr(cond, stmt_idx, candidates, substituted);
        }
        ast::Stmt::For {
            init, cond, step, ..
        } => {
            if let Some(init) = init {
                substitute_single_use_pure_locals_in_stmt_header(
                    init,
                    stmt_idx,
                    candidates,
                    substituted,
                );
            }
            if let Some(expr) = cond {
                substitute_single_use_pure_locals_in_expr(expr, stmt_idx, candidates, substituted);
            }
            if let Some(expr) = step {
                substitute_single_use_pure_locals_in_expr(expr, stmt_idx, candidates, substituted);
            }
        }
        ast::Stmt::Switch { expr, .. } => {
            substitute_single_use_pure_locals_in_expr(expr, stmt_idx, candidates, substituted);
        }
        ast::Stmt::Label(_, inner) => {
            substitute_single_use_pure_locals_in_stmt_header(
                inner,
                stmt_idx,
                candidates,
                substituted,
            );
        }
        ast::Stmt::Return(None)
        | ast::Stmt::Block(_)
        | ast::Stmt::DeclGroup(_)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => {}
    }
}

fn substitute_single_use_pure_locals_in_expr(
    expr: &mut ast::Expr,
    stmt_idx: usize,
    candidates: &HashMap<String, PureLocalCandidate>,
    substituted: &mut std::collections::HashSet<String>,
) {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => {
            if let Some(candidate) = candidates.get(name) {
                if candidate.decl_idx < stmt_idx {
                    let name = name.clone();
                    *expr = candidate.init.clone();
                    substituted.insert(name);
                }
            }
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => {
            substitute_single_use_pure_locals_in_expr(operand, stmt_idx, candidates, substituted);
        }
        Expr::AddrOf(_)
        | Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_)
        | Expr::Sizeof(_) => {}
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            substitute_single_use_pure_locals_in_expr(lhs, stmt_idx, candidates, substituted);
            substitute_single_use_pure_locals_in_expr(rhs, stmt_idx, candidates, substituted);
        }
        Expr::Assign { value, .. } | Expr::CompoundAssign { value, .. } => {
            substitute_single_use_pure_locals_in_expr(value, stmt_idx, candidates, substituted);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_single_use_pure_locals_in_expr(arg, stmt_idx, candidates, substituted);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            substitute_single_use_pure_locals_in_expr(func_expr, stmt_idx, candidates, substituted);
            for arg in args {
                substitute_single_use_pure_locals_in_expr(arg, stmt_idx, candidates, substituted);
            }
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => {
            substitute_single_use_pure_locals_in_expr(base, stmt_idx, candidates, substituted);
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            substitute_single_use_pure_locals_in_expr(cond, stmt_idx, candidates, substituted);
            substitute_single_use_pure_locals_in_expr(then_expr, stmt_idx, candidates, substituted);
            substitute_single_use_pure_locals_in_expr(else_expr, stmt_idx, candidates, substituted);
        }
        Expr::InitList(items) => {
            for item in items {
                substitute_single_use_pure_locals_in_expr(item, stmt_idx, candidates, substituted);
            }
        }
        Expr::DesignatedInit { value, .. } => {
            substitute_single_use_pure_locals_in_expr(value, stmt_idx, candidates, substituted);
        }
        Expr::ArrayDesignator { index, value } => {
            substitute_single_use_pure_locals_in_expr(index, stmt_idx, candidates, substituted);
            substitute_single_use_pure_locals_in_expr(value, stmt_idx, candidates, substituted);
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_) => {}
    }
}

fn count_expr_ident_uses(expr: &ast::Expr, out: &mut HashMap<String, u32>) {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => {
            *out.entry(name.clone()).or_insert(0) += 1;
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => count_expr_ident_uses(operand, out),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            count_expr_ident_uses(lhs, out);
            count_expr_ident_uses(rhs, out);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                count_expr_ident_uses(arg, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            count_expr_ident_uses(func_expr, out);
            for arg in args {
                count_expr_ident_uses(arg, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            count_expr_ident_uses(cond, out);
            count_expr_ident_uses(then_expr, out);
            count_expr_ident_uses(else_expr, out);
        }
        Expr::Sizeof(arg) => {
            if let ast::SizeofArg::Expr(inner) = arg.as_ref() {
                count_expr_ident_uses(inner, out);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                count_expr_ident_uses(item, out);
            }
        }
        Expr::DesignatedInit { value, .. } => count_expr_ident_uses(value, out),
        Expr::ArrayDesignator { index, value } => {
            count_expr_ident_uses(index, out);
            count_expr_ident_uses(value, out);
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_) => {}
    }
}

fn collect_expr_assigned_name_set(expr: &ast::Expr, out: &mut std::collections::HashSet<String>) {
    for name in {
        let mut names = Vec::new();
        collect_expr_assigned_names(expr, &mut names);
        names
    } {
        out.insert(name);
    }
}

fn collect_address_taken_idents(expr: &ast::Expr, out: &mut std::collections::HashSet<String>) {
    use ast::Expr;
    match expr {
        Expr::AddrOf(inner) => {
            if let Expr::Ident(name) = inner.as_ref() {
                out.insert(name.clone());
            }
            collect_address_taken_idents(inner, out);
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => collect_address_taken_idents(operand, out),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            collect_address_taken_idents(lhs, out);
            collect_address_taken_idents(rhs, out);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                collect_address_taken_idents(arg, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_address_taken_idents(func_expr, out);
            for arg in args {
                collect_address_taken_idents(arg, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_address_taken_idents(cond, out);
            collect_address_taken_idents(then_expr, out);
            collect_address_taken_idents(else_expr, out);
        }
        Expr::Sizeof(arg) => {
            if let ast::SizeofArg::Expr(inner) = arg.as_ref() {
                collect_address_taken_idents(inner, out);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                collect_address_taken_idents(item, out);
            }
        }
        Expr::DesignatedInit { value, .. } => collect_address_taken_idents(value, out),
        Expr::ArrayDesignator { index, value } => {
            collect_address_taken_idents(index, out);
            collect_address_taken_idents(value, out);
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => {}
    }
}

fn simplify_signed_char_unsigned_range_compares_in_stmts(
    stmts: &mut [ast::Stmt],
    env: &mut UnsignedRangeEnv,
) {
    for stmt in stmts {
        let stmt_changed = stmt_assigned_names(stmt);
        match stmt {
            ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
                simplify_signed_char_unsigned_range_compares_in_expr(expr, env);
                clear_changed_unsigned_range_env(env, expr_assigned_names(expr));
            }
            ast::Stmt::VarDecl { init, vla_dim, .. } => {
                if let Some(expr) = init {
                    simplify_signed_char_unsigned_range_compares_in_expr(expr, env);
                }
                if let Some(expr) = vla_dim {
                    simplify_signed_char_unsigned_range_compares_in_expr(expr, env);
                }
                track_var_decl_unsigned_range(stmt, env);
            }
            ast::Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                simplify_signed_char_unsigned_range_compares_in_expr(cond, env);
                clear_changed_unsigned_range_env(env, expr_assigned_names(cond));
                let mut then_env = env.clone();
                simplify_signed_char_unsigned_range_compares_in_stmts(then_body, &mut then_env);
                if let Some(body) = else_body {
                    let mut else_env = env.clone();
                    simplify_signed_char_unsigned_range_compares_in_stmts(body, &mut else_env);
                }
                clear_changed_unsigned_range_env(env, stmt_changed);
            }
            ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
                simplify_signed_char_unsigned_range_compares_in_expr(cond, env);
                clear_changed_unsigned_range_env(env, expr_assigned_names(cond));
                let mut body_env = env.clone();
                simplify_signed_char_unsigned_range_compares_in_stmts(body, &mut body_env);
                clear_changed_unsigned_range_env(env, stmt_changed);
            }
            ast::Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(init) = init {
                    simplify_signed_char_unsigned_range_compares_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        env,
                    );
                }
                clear_changed_unsigned_range_env(env, stmt_changed.clone());
                if let Some(expr) = cond {
                    simplify_signed_char_unsigned_range_compares_in_expr(expr, env);
                    clear_changed_unsigned_range_env(env, expr_assigned_names(expr));
                }
                let mut body_env = env.clone();
                if let Some(expr) = step {
                    simplify_signed_char_unsigned_range_compares_in_expr(expr, &body_env);
                }
                simplify_signed_char_unsigned_range_compares_in_stmts(body, &mut body_env);
                clear_changed_unsigned_range_env(env, stmt_changed);
            }
            ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) => {
                let mut block_env = env.clone();
                simplify_signed_char_unsigned_range_compares_in_stmts(body, &mut block_env);
            }
            ast::Stmt::Switch { expr, body } => {
                simplify_signed_char_unsigned_range_compares_in_expr(expr, env);
                clear_changed_unsigned_range_env(env, expr_assigned_names(expr));
                let mut body_env = env.clone();
                simplify_signed_char_unsigned_range_compares_in_stmts(body, &mut body_env);
                clear_changed_unsigned_range_env(env, stmt_changed);
            }
            ast::Stmt::Label(_, inner) => {
                simplify_signed_char_unsigned_range_compares_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    env,
                );
            }
            ast::Stmt::Return(None)
            | ast::Stmt::DefaultLabel
            | ast::Stmt::Break
            | ast::Stmt::Continue
            | ast::Stmt::Goto(_)
            | ast::Stmt::Asm(_)
            | ast::Stmt::EnumDecl(_) => {}
        }
    }
}

fn simplify_signed_char_unsigned_range_compares_in_expr(
    expr: &mut ast::Expr,
    env: &UnsignedRangeEnv,
) {
    use ast::Expr;
    match expr {
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => {
            simplify_signed_char_unsigned_range_compares_in_expr(operand, env);
        }
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            simplify_signed_char_unsigned_range_compares_in_expr(lhs, env);
            simplify_signed_char_unsigned_range_compares_in_expr(rhs, env);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                simplify_signed_char_unsigned_range_compares_in_expr(arg, env);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            simplify_signed_char_unsigned_range_compares_in_expr(func_expr, env);
            for arg in args {
                simplify_signed_char_unsigned_range_compares_in_expr(arg, env);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            simplify_signed_char_unsigned_range_compares_in_expr(cond, env);
            simplify_signed_char_unsigned_range_compares_in_expr(then_expr, env);
            simplify_signed_char_unsigned_range_compares_in_expr(else_expr, env);
        }
        Expr::InitList(items) => {
            for item in items {
                simplify_signed_char_unsigned_range_compares_in_expr(item, env);
            }
        }
        Expr::DesignatedInit { value, .. } => {
            simplify_signed_char_unsigned_range_compares_in_expr(value, env);
        }
        Expr::ArrayDesignator { index, value } => {
            simplify_signed_char_unsigned_range_compares_in_expr(index, env);
            simplify_signed_char_unsigned_range_compares_in_expr(value, env);
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => {}
    }

    let Expr::Binary { op, lhs, rhs } = expr else {
        return;
    };
    if let Some(value) = eval_unsigned_range_compare(*op, lhs, rhs, env) {
        *expr = ast::Expr::IntLit(i64::from(value), crate::token::IntSuffix::None);
        return;
    }
    if *op != ast::BinaryOp::Gt {
        return;
    }
    let Some(char_operand) = signed_char_cast_operand(lhs) else {
        return;
    };
    if !expr_side_effect_free(char_operand) || !expr_side_effect_free(rhs) {
        return;
    }
    let Some((min, max)) = unsigned_integer_range(rhs) else {
        return;
    };
    if min < 0x7f || max > 0xff || !expr_has_unsigned_integer_suffix(rhs) {
        return;
    }
    let sign_source = signed_char_sign_source(char_operand).clone();

    *expr = ast::Expr::Binary {
        op: ast::BinaryOp::Ne,
        lhs: Box::new(ast::Expr::Binary {
            op: ast::BinaryOp::BitAnd,
            lhs: Box::new(sign_source),
            rhs: Box::new(ast::Expr::IntLit(0x80, crate::token::IntSuffix::U)),
        }),
        rhs: Box::new(ast::Expr::IntLit(0, crate::token::IntSuffix::U)),
    };
}

fn signed_char_sign_source(expr: &ast::Expr) -> &ast::Expr {
    let ast::Expr::Binary {
        op: ast::BinaryOp::BitAnd,
        lhs,
        rhs,
    } = expr
    else {
        return expr;
    };
    if exact_unsigned_value(rhs).is_some_and(|mask| (mask & 0x80) != 0) {
        lhs
    } else if exact_unsigned_value(lhs).is_some_and(|mask| (mask & 0x80) != 0) {
        rhs
    } else {
        expr
    }
}

fn signed_char_cast_operand(expr: &ast::Expr) -> Option<&ast::Expr> {
    let ast::Expr::Cast(ty, operand) = expr else {
        return None;
    };
    matches!(ty.unqualified(), crate::types::Type::Char).then_some(operand.as_ref())
}

fn track_var_decl_unsigned_range(stmt: &ast::Stmt, env: &mut UnsignedRangeEnv) {
    let ast::Stmt::VarDecl {
        name,
        init: Some(init),
        is_static,
        ..
    } = stmt
    else {
        return;
    };
    if *is_static {
        env.remove(name);
        return;
    }
    if let Some(range) = unsigned_integer_range_with_env(init, env) {
        env.insert(name.clone(), range);
    } else {
        env.remove(name);
    }
}

fn clear_changed_unsigned_range_env(env: &mut UnsignedRangeEnv, changed: Vec<String>) {
    for name in changed {
        env.remove(&name);
    }
}

fn expr_assigned_names(expr: &ast::Expr) -> Vec<String> {
    let mut names = Vec::new();
    collect_expr_assigned_names(expr, &mut names);
    names
}

fn unsigned_integer_range(expr: &ast::Expr) -> Option<(u64, u64)> {
    unsigned_integer_range_with_env(expr, &UnsignedRangeEnv::new())
}

fn unsigned_integer_range_with_env(expr: &ast::Expr, env: &UnsignedRangeEnv) -> Option<(u64, u64)> {
    use ast::Expr;
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) if *v >= 0 => Some((*v as u64, *v as u64)),
        Expr::Ident(name) => env.get(name).copied(),
        Expr::Cast(_, inner) => unsigned_integer_range_with_env(inner, env),
        Expr::Ternary {
            then_expr,
            else_expr,
            ..
        } => {
            let (t_min, t_max) = unsigned_integer_range_with_env(then_expr, env)?;
            let (e_min, e_max) = unsigned_integer_range_with_env(else_expr, env)?;
            Some((t_min.min(e_min), t_max.max(e_max)))
        }
        Expr::Binary {
            op: ast::BinaryOp::BitAnd,
            lhs,
            rhs,
        } => bitand_unsigned_range(lhs, rhs, env),
        _ => None,
    }
}

fn bitand_unsigned_range(
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    env: &UnsignedRangeEnv,
) -> Option<(u64, u64)> {
    if let Some(mask) = exact_unsigned_value_with_env(rhs, env) {
        if is_low_bits_mask(mask) && expr_has_unsigned_integer_suffix(rhs) {
            if let Some(lhs_range) = unsigned_integer_range_with_env(lhs, env) {
                if lhs_range.1 <= mask {
                    return Some(lhs_range);
                }
            }
            return Some((0, mask));
        }
    }
    if let Some(mask) = exact_unsigned_value_with_env(lhs, env) {
        if is_low_bits_mask(mask) && expr_has_unsigned_integer_suffix(lhs) {
            if let Some(rhs_range) = unsigned_integer_range_with_env(rhs, env) {
                if rhs_range.1 <= mask {
                    return Some(rhs_range);
                }
            }
            return Some((0, mask));
        }
    }

    let lhs_range = unsigned_integer_range_with_env(lhs, env)?;
    let rhs_range = unsigned_integer_range_with_env(rhs, env)?;
    if let Some(mask) = exact_unsigned_value_with_env(rhs, env) {
        if is_low_bits_mask(mask) && lhs_range.1 <= mask {
            return Some(lhs_range);
        }
    }
    if let Some(mask) = exact_unsigned_value_with_env(lhs, env) {
        if is_low_bits_mask(mask) && rhs_range.1 <= mask {
            return Some(rhs_range);
        }
    }
    Some((0, lhs_range.1.min(rhs_range.1)))
}

fn eval_unsigned_range_compare(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    env: &UnsignedRangeEnv,
) -> Option<bool> {
    use ast::BinaryOp;
    if !matches!(
        op,
        BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge
    ) || !expr_has_unsigned_integer_suffix(lhs) && !expr_has_unsigned_integer_suffix(rhs)
        || !expr_side_effect_free(lhs)
        || !expr_side_effect_free(rhs)
    {
        return None;
    }

    let (l_min, l_max) = unsigned_integer_range_with_env(lhs, env)?;
    let (r_min, r_max) = unsigned_integer_range_with_env(rhs, env)?;
    match op {
        BinaryOp::Eq if l_min == l_max && r_min == r_max && l_min == r_min => Some(true),
        BinaryOp::Eq if l_max < r_min || r_max < l_min => Some(false),
        BinaryOp::Ne if l_max < r_min || r_max < l_min => Some(true),
        BinaryOp::Ne if l_min == l_max && r_min == r_max && l_min == r_min => Some(false),
        BinaryOp::Lt if l_max < r_min => Some(true),
        BinaryOp::Lt if l_min >= r_max => Some(false),
        BinaryOp::Gt if l_min > r_max => Some(true),
        BinaryOp::Gt if l_max <= r_min => Some(false),
        BinaryOp::Le if l_max <= r_min => Some(true),
        BinaryOp::Le if l_min > r_max => Some(false),
        BinaryOp::Ge if l_min >= r_max => Some(true),
        BinaryOp::Ge if l_max < r_min => Some(false),
        _ => None,
    }
}

fn exact_unsigned_value(expr: &ast::Expr) -> Option<u64> {
    exact_unsigned_value_with_env(expr, &UnsignedRangeEnv::new())
}

fn exact_unsigned_value_with_env(expr: &ast::Expr, env: &UnsignedRangeEnv) -> Option<u64> {
    let (min, max) = unsigned_integer_range_with_env(expr, env)?;
    (min == max).then_some(min)
}

fn is_low_bits_mask(v: u64) -> bool {
    v != 0 && (v & (v + 1)) == 0
}

fn expr_has_unsigned_integer_suffix(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::IntLit(_, suffix) => matches!(
            suffix,
            crate::token::IntSuffix::U | crate::token::IntSuffix::UL | crate::token::IntSuffix::Ull
        ),
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => expr_has_unsigned_integer_suffix(operand),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            expr_has_unsigned_integer_suffix(lhs) || expr_has_unsigned_integer_suffix(rhs)
        }
        Expr::Call { args, .. } => args.iter().any(expr_has_unsigned_integer_suffix),
        Expr::CallIndirect { func_expr, args } => {
            expr_has_unsigned_integer_suffix(func_expr)
                || args.iter().any(expr_has_unsigned_integer_suffix)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_has_unsigned_integer_suffix(cond)
                || expr_has_unsigned_integer_suffix(then_expr)
                || expr_has_unsigned_integer_suffix(else_expr)
        }
        Expr::InitList(items) => items.iter().any(expr_has_unsigned_integer_suffix),
        Expr::DesignatedInit { value, .. } => expr_has_unsigned_integer_suffix(value),
        Expr::ArrayDesignator { index, value } => {
            expr_has_unsigned_integer_suffix(index) || expr_has_unsigned_integer_suffix(value)
        }
        Expr::Sizeof(_)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

fn simplify_absorbed_boolean(expr: &mut ast::Expr) {
    let ast::Expr::Binary {
        op: ast::BinaryOp::LogOr,
        lhs,
        rhs,
    } = expr
    else {
        return;
    };
    if let ast::Expr::Binary {
        op: ast::BinaryOp::LogAnd,
        lhs: and_lhs,
        ..
    } = rhs.as_ref()
    {
        if lhs.as_ref() == and_lhs.as_ref()
            && expr_is_boolean_value(lhs)
            && expr_side_effect_free(lhs)
        {
            *expr = (**lhs).clone();
        }
    }
}

fn expr_is_boolean_value(expr: &ast::Expr) -> bool {
    matches!(
        expr,
        ast::Expr::Binary {
            op: ast::BinaryOp::Eq
                | ast::BinaryOp::Ne
                | ast::BinaryOp::Lt
                | ast::BinaryOp::Gt
                | ast::BinaryOp::Le
                | ast::BinaryOp::Ge
                | ast::BinaryOp::LogAnd
                | ast::BinaryOp::LogOr,
            ..
        } | ast::Expr::Unary {
            op: ast::UnaryOp::LogNot,
            ..
        } | ast::Expr::IntLit(0 | 1, _)
            | ast::Expr::CharLit(0 | 1)
    )
}

fn expr_is_boolean_local_value(expr: &ast::Expr) -> bool {
    matches!(
        expr,
        ast::Expr::Binary {
            op: ast::BinaryOp::Eq
                | ast::BinaryOp::Ne
                | ast::BinaryOp::Lt
                | ast::BinaryOp::Gt
                | ast::BinaryOp::Le
                | ast::BinaryOp::Ge
                | ast::BinaryOp::LogAnd
                | ast::BinaryOp::LogOr,
            ..
        } | ast::Expr::Unary {
            op: ast::UnaryOp::LogNot,
            ..
        }
    )
}

fn clear_changed_bool_env(env: &mut HashMap<String, ast::Expr>, changed: Vec<String>) {
    for name in changed {
        env.remove(&name);
    }
}

fn stmt_assigned_names(stmt: &ast::Stmt) -> Vec<String> {
    let mut out = Vec::new();
    collect_stmt_assigned_names(stmt, &mut out);
    out
}

fn collect_stmt_assigned_names(stmt: &ast::Stmt, out: &mut Vec<String>) {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            collect_expr_assigned_names(expr, out);
        }
        Stmt::VarDecl { name, init, .. } => {
            out.push(name.clone());
            if let Some(expr) = init {
                collect_expr_assigned_names(expr, out);
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            collect_expr_assigned_names(cond, out);
            for stmt in then_body {
                collect_stmt_assigned_names(stmt, out);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_assigned_names(stmt, out);
                }
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            collect_expr_assigned_names(cond, out);
            for stmt in body {
                collect_stmt_assigned_names(stmt, out);
            }
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(stmt) = init {
                collect_stmt_assigned_names(stmt, out);
            }
            if let Some(expr) = cond {
                collect_expr_assigned_names(expr, out);
            }
            if let Some(expr) = step {
                collect_expr_assigned_names(expr, out);
            }
            for stmt in body {
                collect_stmt_assigned_names(stmt, out);
            }
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            for stmt in body {
                collect_stmt_assigned_names(stmt, out);
            }
        }
        Stmt::Label(_, inner) => collect_stmt_assigned_names(inner, out),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => {}
    }
}

fn collect_expr_assigned_names(expr: &ast::Expr, out: &mut Vec<String>) {
    use ast::Expr;
    match expr {
        Expr::Assign { target, value } => {
            collect_lvalue_names(target, out);
            collect_expr_assigned_names(value, out);
        }
        Expr::CompoundAssign { target, value, .. } => {
            collect_lvalue_names(target, out);
            collect_expr_assigned_names(value, out);
        }
        Expr::PreInc(target)
        | Expr::PreDec(target)
        | Expr::PostInc(target)
        | Expr::PostDec(target) => {
            collect_lvalue_names(target, out);
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => collect_expr_assigned_names(operand, out),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            collect_expr_assigned_names(lhs, out);
            collect_expr_assigned_names(rhs, out);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                collect_expr_assigned_names(arg, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_expr_assigned_names(func_expr, out);
            for arg in args {
                collect_expr_assigned_names(arg, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_expr_assigned_names(cond, out);
            collect_expr_assigned_names(then_expr, out);
            collect_expr_assigned_names(else_expr, out);
        }
        Expr::InitList(items) => {
            for item in items {
                collect_expr_assigned_names(item, out);
            }
        }
        Expr::DesignatedInit { value, .. } => collect_expr_assigned_names(value, out),
        Expr::ArrayDesignator { index, value } => {
            collect_expr_assigned_names(index, out);
            collect_expr_assigned_names(value, out);
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => {}
    }
}

fn collect_lvalue_names(expr: &ast::Expr, out: &mut Vec<String>) {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => out.push(name.clone()),
        Expr::Member(base, _) | Expr::Arrow(base, _) | Expr::Deref(base) => {
            collect_lvalue_names(base, out);
        }
        Expr::Index(base, index) => {
            collect_lvalue_names(base, out);
            collect_expr_assigned_names(index, out);
        }
        _ => collect_expr_assigned_names(expr, out),
    }
}

fn prune_unused_side_effect_free_local_inits(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut used = HashMap::new();
        prune_unused_side_effect_free_local_inits_in_stmts(&mut f.body, &mut used);
    }
}

fn prune_unused_side_effect_free_local_inits_in_stmts(
    stmts: &mut [ast::Stmt],
    used_after: &mut HashMap<String, ()>,
) {
    for stmt in stmts.iter_mut().rev() {
        use ast::Stmt;
        match stmt {
            Stmt::VarDecl { name, init, .. } => {
                if !used_after.contains_key(name)
                    && init.as_ref().is_some_and(expr_is_boolean_local_value)
                    && init.as_ref().is_some_and(expr_side_effect_free)
                {
                    *init = None;
                } else if let Some(expr) = init {
                    collect_expr_ident_uses(expr, used_after);
                }
                used_after.remove(name);
            }
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                collect_expr_ident_uses(expr, used_after);
                for name in stmt_assigned_names(stmt) {
                    used_after.remove(&name);
                }
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                let mut then_used = used_after.clone();
                prune_unused_side_effect_free_local_inits_in_stmts(then_body, &mut then_used);
                let mut else_used = used_after.clone();
                if let Some(body) = else_body {
                    prune_unused_side_effect_free_local_inits_in_stmts(body, &mut else_used);
                }
                used_after.extend(then_used);
                used_after.extend(else_used);
                collect_expr_ident_uses(cond, used_after);
                for name in stmt_assigned_names(stmt) {
                    used_after.remove(&name);
                }
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                let mut body_used = HashMap::new();
                prune_unused_side_effect_free_local_inits_in_stmts(body, &mut body_used);
                collect_expr_ident_uses(cond, used_after);
                for stmt in body {
                    collect_stmt_ident_uses(stmt, used_after);
                }
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                let mut body_used = HashMap::new();
                if let Some(step) = step.as_ref() {
                    collect_expr_ident_uses(step, &mut body_used);
                }
                prune_unused_side_effect_free_local_inits_in_stmts(body, &mut body_used);
                if let Some(cond) = cond {
                    collect_expr_ident_uses(cond, used_after);
                }
                if let Some(step) = step {
                    collect_expr_ident_uses(step, used_after);
                }
                for stmt in body {
                    collect_stmt_ident_uses(stmt, used_after);
                }
                if let Some(init) = init {
                    prune_unused_side_effect_free_local_inits_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        used_after,
                    );
                }
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) => {
                let mut block_used = used_after.clone();
                prune_unused_side_effect_free_local_inits_in_stmts(body, &mut block_used);
                used_after.extend(block_used);
                for name in stmt_assigned_names(stmt) {
                    used_after.remove(&name);
                }
            }
            Stmt::Switch { expr, body } => {
                prune_unused_side_effect_free_local_inits_in_stmts(body, used_after);
                collect_expr_ident_uses(expr, used_after);
                for name in stmt_assigned_names(stmt) {
                    used_after.remove(&name);
                }
            }
            Stmt::Label(_, inner) => {
                prune_unused_side_effect_free_local_inits_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    used_after,
                );
            }
            Stmt::Return(None)
            | Stmt::DefaultLabel
            | Stmt::Break
            | Stmt::Continue
            | Stmt::Goto(_)
            | Stmt::Asm(_)
            | Stmt::EnumDecl(_) => {}
        }
    }
}

fn collect_expr_ident_uses(expr: &ast::Expr, out: &mut HashMap<String, ()>) {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => {
            out.insert(name.clone(), ());
        }
        Expr::Assign { value, .. } | Expr::CompoundAssign { value, .. } => {
            collect_expr_ident_uses(value, out);
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => collect_expr_ident_uses(operand, out),
        Expr::AddrOf(operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand) => collect_expr_ident_uses(operand, out),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            collect_expr_ident_uses(lhs, out);
            collect_expr_ident_uses(rhs, out);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                collect_expr_ident_uses(arg, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_expr_ident_uses(func_expr, out);
            for arg in args {
                collect_expr_ident_uses(arg, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_expr_ident_uses(cond, out);
            collect_expr_ident_uses(then_expr, out);
            collect_expr_ident_uses(else_expr, out);
        }
        Expr::InitList(items) => {
            for item in items {
                collect_expr_ident_uses(item, out);
            }
        }
        Expr::DesignatedInit { value, .. } => collect_expr_ident_uses(value, out),
        Expr::ArrayDesignator { index, value } => {
            collect_expr_ident_uses(index, out);
            collect_expr_ident_uses(value, out);
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_) => {}
    }
}

fn collect_stmt_ident_uses(stmt: &ast::Stmt, out: &mut HashMap<String, ()>) {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            collect_expr_ident_uses(expr, out);
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                collect_expr_ident_uses(expr, out);
            }
            if let Some(expr) = vla_dim {
                collect_expr_ident_uses(expr, out);
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            collect_expr_ident_uses(cond, out);
            for stmt in then_body {
                collect_stmt_ident_uses(stmt, out);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_ident_uses(stmt, out);
                }
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            collect_expr_ident_uses(cond, out);
            for stmt in body {
                collect_stmt_ident_uses(stmt, out);
            }
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(stmt) = init {
                collect_stmt_ident_uses(stmt, out);
            }
            if let Some(expr) = cond {
                collect_expr_ident_uses(expr, out);
            }
            if let Some(expr) = step {
                collect_expr_ident_uses(expr, out);
            }
            for stmt in body {
                collect_stmt_ident_uses(stmt, out);
            }
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_stmt_ident_uses(stmt, out);
            }
        }
        Stmt::Switch { expr, body } => {
            collect_expr_ident_uses(expr, out);
            for stmt in body {
                collect_stmt_ident_uses(stmt, out);
            }
        }
        Stmt::Label(_, inner) => collect_stmt_ident_uses(inner, out),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => {}
    }
}

fn preserves_suffixed_int_type_context(expr: &ast::Expr) -> bool {
    matches!(expr, ast::Expr::Unary { .. } | ast::Expr::Cast(..))
        && expr_contains_suffixed_int_lit(expr)
}

fn folded_int_suffix_for_expr(expr: &ast::Expr) -> crate::token::IntSuffix {
    use crate::token::IntSuffix;
    let Some(ty) = const_int_expr_type(expr) else {
        return IntSuffix::None;
    };
    if matches!(
        expr,
        ast::Expr::Binary {
            op: ast::BinaryOp::Eq
                | ast::BinaryOp::Ne
                | ast::BinaryOp::Lt
                | ast::BinaryOp::Gt
                | ast::BinaryOp::Le
                | ast::BinaryOp::Ge
                | ast::BinaryOp::LogAnd
                | ast::BinaryOp::LogOr,
            ..
        } | ast::Expr::Unary {
            op: ast::UnaryOp::LogNot,
            ..
        }
    ) {
        return IntSuffix::None;
    }
    if ty.is_unsigned() {
        if ty.is_long_long() {
            IntSuffix::Ull
        } else {
            IntSuffix::U
        }
    } else if ty.is_long_long() {
        IntSuffix::LL
    } else {
        IntSuffix::None
    }
}

fn expr_contains_suffixed_int_lit(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::IntLit(_, suffix) => *suffix != crate::token::IntSuffix::None,
        Expr::Unary { operand, .. } | Expr::Cast(_, operand) => {
            expr_contains_suffixed_int_lit(operand)
        }
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            expr_contains_suffixed_int_lit(lhs) || expr_contains_suffixed_int_lit(rhs)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_suffixed_int_lit(cond)
                || expr_contains_suffixed_int_lit(then_expr)
                || expr_contains_suffixed_int_lit(else_expr)
        }
        Expr::Call { args, .. } => args.iter().any(expr_contains_suffixed_int_lit),
        Expr::CallIndirect { func_expr, args } => {
            expr_contains_suffixed_int_lit(func_expr)
                || args.iter().any(expr_contains_suffixed_int_lit)
        }
        Expr::Member(base, _)
        | Expr::Arrow(base, _)
        | Expr::Deref(base)
        | Expr::AddrOf(base)
        | Expr::PreInc(base)
        | Expr::PreDec(base)
        | Expr::PostInc(base)
        | Expr::PostDec(base)
        | Expr::RealPart(base)
        | Expr::ImagPart(base) => expr_contains_suffixed_int_lit(base),
        Expr::Sizeof(inner) => match inner.as_ref() {
            ast::SizeofArg::Expr(inner) => expr_contains_suffixed_int_lit(inner),
            ast::SizeofArg::Type(_) => false,
        },
        Expr::InitList(items) => items.iter().any(expr_contains_suffixed_int_lit),
        Expr::DesignatedInit { value, .. } => expr_contains_suffixed_int_lit(value),
        Expr::ArrayDesignator { index, value } => {
            expr_contains_suffixed_int_lit(index) || expr_contains_suffixed_int_lit(value)
        }
        Expr::Ident(_)
        | Expr::CharLit(_)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_) => false,
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
                BinaryOp::Eq
                | BinaryOp::Ne
                | BinaryOp::Lt
                | BinaryOp::Gt
                | BinaryOp::Le
                | BinaryOp::Ge => {
                    return eval_const_comparison(*op, lhs, rhs, a, b);
                }
                BinaryOp::LogAnd => i64::from(a != 0 && b != 0),
                BinaryOp::LogOr => i64::from(a != 0 || b != 0),
                BinaryOp::Div | BinaryOp::Mod => return None,
            })
        }
        _ => None,
    }
}

fn eval_const_int_expr_with_env(
    expr: &ast::Expr,
    env: &std::collections::HashMap<&str, i64>,
) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Ident(name) => env.get(name.as_str()).copied(),
        Expr::Unary { op, operand } => {
            let v = eval_const_int_expr_with_env(operand, env)?;
            Some(match op {
                UnaryOp::Neg => v.wrapping_neg(),
                UnaryOp::BitNot => !v,
                UnaryOp::LogNot => i64::from(v == 0),
            })
        }
        Expr::Cast(ty, operand) if ty.is_integer() => eval_const_int_expr_with_env(operand, env),
        Expr::Binary { op, lhs, rhs } => {
            let a = eval_const_int_expr_with_env(lhs, env)?;
            let b = eval_const_int_expr_with_env(rhs, env)?;
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
                BinaryOp::Eq
                | BinaryOp::Ne
                | BinaryOp::Lt
                | BinaryOp::Gt
                | BinaryOp::Le
                | BinaryOp::Ge => {
                    return eval_const_comparison(*op, lhs, rhs, a, b);
                }
                BinaryOp::LogAnd => i64::from(a != 0 && b != 0),
                BinaryOp::LogOr => i64::from(a != 0 || b != 0),
                BinaryOp::Div | BinaryOp::Mod => return None,
            })
        }
        _ => None,
    }
}

fn eval_const_comparison(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    a: i64,
    b: i64,
) -> Option<i64> {
    let Some(lty) = const_int_expr_type(lhs) else {
        return Some(eval_signed_comparison(op, a, b));
    };
    let Some(rty) = const_int_expr_type(rhs) else {
        return Some(eval_signed_comparison(op, a, b));
    };
    let common = types::Type::usual_arithmetic_conversion(&lty, &rty);
    if common.is_unsigned() {
        if common.is_long_long() {
            return Some(eval_u64_comparison(op, a as u64, b as u64));
        }
        return Some(eval_u32_comparison(op, a as u32, b as u32));
    }
    Some(eval_signed_comparison(op, a, b))
}

fn eval_signed_comparison(op: ast::BinaryOp, a: i64, b: i64) -> i64 {
    use ast::BinaryOp;
    match op {
        BinaryOp::Eq => i64::from(a == b),
        BinaryOp::Ne => i64::from(a != b),
        BinaryOp::Lt => i64::from(a < b),
        BinaryOp::Gt => i64::from(a > b),
        BinaryOp::Le => i64::from(a <= b),
        BinaryOp::Ge => i64::from(a >= b),
        _ => unreachable!(),
    }
}

fn eval_u32_comparison(op: ast::BinaryOp, a: u32, b: u32) -> i64 {
    use ast::BinaryOp;
    match op {
        BinaryOp::Eq => i64::from(a == b),
        BinaryOp::Ne => i64::from(a != b),
        BinaryOp::Lt => i64::from(a < b),
        BinaryOp::Gt => i64::from(a > b),
        BinaryOp::Le => i64::from(a <= b),
        BinaryOp::Ge => i64::from(a >= b),
        _ => unreachable!(),
    }
}

fn eval_u64_comparison(op: ast::BinaryOp, a: u64, b: u64) -> i64 {
    use ast::BinaryOp;
    match op {
        BinaryOp::Eq => i64::from(a == b),
        BinaryOp::Ne => i64::from(a != b),
        BinaryOp::Lt => i64::from(a < b),
        BinaryOp::Gt => i64::from(a > b),
        BinaryOp::Le => i64::from(a <= b),
        BinaryOp::Ge => i64::from(a >= b),
        _ => unreachable!(),
    }
}

fn const_int_expr_type(expr: &ast::Expr) -> Option<types::Type> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::IntLit(v, suffix) => Some(int_literal_type_for_fold(*v, *suffix)),
        Expr::CharLit(_) => Some(types::Type::Int),
        Expr::Unary { op, operand } => {
            if *op == UnaryOp::LogNot {
                Some(types::Type::Int)
            } else {
                const_int_expr_type(operand).map(|t| t.integer_promoted())
            }
        }
        Expr::Cast(ty, _) if ty.is_integer() => Some(ty.clone()),
        Expr::Binary { op, lhs, rhs } => {
            if matches!(
                op,
                BinaryOp::Eq
                    | BinaryOp::Ne
                    | BinaryOp::Lt
                    | BinaryOp::Gt
                    | BinaryOp::Le
                    | BinaryOp::Ge
                    | BinaryOp::LogAnd
                    | BinaryOp::LogOr
            ) {
                return Some(types::Type::Int);
            }
            let l = const_int_expr_type(lhs)?;
            let r = const_int_expr_type(rhs)?;
            Some(types::Type::usual_arithmetic_conversion(&l, &r))
        }
        _ => None,
    }
}

fn int_literal_type_for_fold(val: i64, suffix: crate::token::IntSuffix) -> types::Type {
    use crate::token::IntSuffix;
    use types::Type;
    match suffix {
        IntSuffix::None => {
            if val >= i32::MIN as i64 && val <= i32::MAX as i64 {
                Type::Int
            } else {
                Type::LongLong
            }
        }
        IntSuffix::U => {
            if val as u64 <= u32::MAX as u64 {
                Type::Unsigned(Box::new(Type::Int))
            } else {
                Type::ULongLong
            }
        }
        IntSuffix::L => {
            if val >= i32::MIN as i64 && val <= i32::MAX as i64 {
                Type::Int
            } else if val as u64 <= u32::MAX as u64 {
                Type::Unsigned(Box::new(Type::Int))
            } else {
                Type::LongLong
            }
        }
        IntSuffix::UL => {
            if val as u64 <= u32::MAX as u64 {
                Type::Unsigned(Box::new(Type::Int))
            } else {
                Type::ULongLong
            }
        }
        IntSuffix::LL => {
            if val < 0 {
                Type::ULongLong
            } else {
                Type::LongLong
            }
        }
        IntSuffix::Ull => Type::ULongLong,
    }
}

/// Constant-evaluate calls to tiny internal switch-return helpers.
///
/// This intentionally does not inline a dynamic switch. It only replaces
/// `static f(constant_args...)` when `f` is a single switch whose case/default
/// bodies immediately return integer constants.
fn fold_const_static_switch_calls(unit: &mut ast::TranslationUnit) {
    use std::collections::HashMap;

    let helpers: HashMap<String, ConstSwitchFn> = unit
        .functions
        .iter()
        .filter_map(|f| const_switch_fn(f).map(|helper| (f.name.clone(), helper)))
        .collect();
    if helpers.is_empty() {
        return;
    }

    for f in &mut unit.functions {
        for stmt in &mut f.body {
            fold_const_switch_calls_in_stmt(stmt, &helpers);
        }
    }
    for g in &mut unit.globals {
        if let Some(init) = &mut g.init {
            fold_const_switch_calls_in_expr(init, &helpers);
        }
    }
}

#[derive(Clone)]
struct ConstSwitchFn {
    params: Vec<String>,
    switch_expr: ast::Expr,
    cases: Vec<(i64, ast::Expr)>,
    default: Option<ast::Expr>,
}

fn const_switch_fn(f: &ast::Function) -> Option<ConstSwitchFn> {
    if !f.is_static || f.is_variadic || f.body.len() != 1 {
        return None;
    }
    let ast::Stmt::Switch { expr, body } = &f.body[0] else {
        return None;
    };
    let arms = parse_const_switch_return_arms(body)?;
    Some(ConstSwitchFn {
        params: f.params.iter().map(|(name, _)| name.clone()).collect(),
        switch_expr: expr.clone(),
        cases: arms.cases,
        default: arms.default,
    })
}

struct ConstSwitchArms {
    cases: Vec<(i64, ast::Expr)>,
    default: Option<ast::Expr>,
}

fn parse_const_switch_return_arms(body: &[ast::Stmt]) -> Option<ConstSwitchArms> {
    let mut cases = Vec::new();
    let mut default = None;
    let mut pending_labels: Vec<Option<i64>> = Vec::new();

    for stmt in body {
        match stmt {
            ast::Stmt::CaseLabel(expr) => {
                pending_labels.push(Some(eval_const_int_expr(expr)?));
            }
            ast::Stmt::DefaultLabel => {
                pending_labels.push(None);
            }
            ast::Stmt::Return(Some(expr)) => {
                let ret = eval_const_int_expr(expr)?;
                let ret_expr = ast::Expr::IntLit(ret, folded_int_suffix_for_expr(expr));
                if pending_labels.is_empty() {
                    return None;
                }
                for label in pending_labels.drain(..) {
                    match label {
                        Some(value) => cases.push((value, ret_expr.clone())),
                        None if default.is_none() => default = Some(ret_expr.clone()),
                        None => return None,
                    }
                }
            }
            _ => return None,
        }
    }

    if !pending_labels.is_empty() || cases.is_empty() {
        return None;
    }
    Some(ConstSwitchArms { cases, default })
}

fn fold_const_switch_calls_in_stmt(
    stmt: &mut ast::Stmt,
    helpers: &std::collections::HashMap<String, ConstSwitchFn>,
) {
    use ast::Stmt::*;
    match stmt {
        Return(Some(e)) | Expr(e) | CaseLabel(e) => fold_const_switch_calls_in_expr(e, helpers),
        Return(None) | DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                fold_const_switch_calls_in_expr(e, helpers);
            }
            if let Some(e) = vla_dim {
                fold_const_switch_calls_in_expr(e, helpers);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            fold_const_switch_calls_in_expr(cond, helpers);
            for s in then_body {
                fold_const_switch_calls_in_stmt(s, helpers);
            }
            if let Some(body) = else_body {
                for s in body {
                    fold_const_switch_calls_in_stmt(s, helpers);
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            fold_const_switch_calls_in_expr(cond, helpers);
            for s in body {
                fold_const_switch_calls_in_stmt(s, helpers);
            }
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                fold_const_switch_calls_in_stmt(s, helpers);
            }
            if let Some(e) = cond {
                fold_const_switch_calls_in_expr(e, helpers);
            }
            if let Some(e) = step {
                fold_const_switch_calls_in_expr(e, helpers);
            }
            for s in body {
                fold_const_switch_calls_in_stmt(s, helpers);
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body {
                fold_const_switch_calls_in_stmt(s, helpers);
            }
        }
        Switch { expr, body } => {
            fold_const_switch_calls_in_expr(expr, helpers);
            for s in body {
                fold_const_switch_calls_in_stmt(s, helpers);
            }
        }
        Label(_, inner) => fold_const_switch_calls_in_stmt(inner, helpers),
    }
}

fn fold_const_switch_calls_in_expr(
    expr: &mut ast::Expr,
    helpers: &std::collections::HashMap<String, ConstSwitchFn>,
) {
    use ast::Expr::*;
    match expr {
        Call { name, args } => {
            for arg in args.iter_mut() {
                fold_const_switch_calls_in_expr(arg, helpers);
            }
            if let Some(helper) = helpers.get(name) {
                if let Some(value) = eval_const_switch_call(helper, args) {
                    *expr = value;
                }
            }
        }
        CallIndirect { func_expr, args } => {
            fold_const_switch_calls_in_expr(func_expr, helpers);
            for arg in args {
                fold_const_switch_calls_in_expr(arg, helpers);
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
        | ImagPart(operand) => fold_const_switch_calls_in_expr(operand, helpers),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            fold_const_switch_calls_in_expr(lhs, helpers);
            fold_const_switch_calls_in_expr(rhs, helpers);
        }
        CompoundAssign { target, value, .. } => {
            fold_const_switch_calls_in_expr(target, helpers);
            fold_const_switch_calls_in_expr(value, helpers);
        }
        Member(base, _) | Arrow(base, _) => fold_const_switch_calls_in_expr(base, helpers),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            fold_const_switch_calls_in_expr(cond, helpers);
            fold_const_switch_calls_in_expr(then_expr, helpers);
            fold_const_switch_calls_in_expr(else_expr, helpers);
        }
        InitList(items) => {
            for item in items {
                fold_const_switch_calls_in_expr(item, helpers);
            }
        }
        DesignatedInit { value, .. } => fold_const_switch_calls_in_expr(value, helpers),
        ArrayDesignator { index, value } => {
            fold_const_switch_calls_in_expr(index, helpers);
            fold_const_switch_calls_in_expr(value, helpers);
        }
        Sizeof(_) => {}
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_)
        | Ident(_) => {}
    }
}

fn eval_const_switch_call(helper: &ConstSwitchFn, args: &[ast::Expr]) -> Option<ast::Expr> {
    if helper.params.len() != args.len() {
        return None;
    }

    let mut env = std::collections::HashMap::new();
    for (param, arg) in helper.params.iter().zip(args) {
        env.insert(param.as_str(), eval_const_int_expr(arg)?);
    }

    let switch_value = eval_const_int_expr_with_env(&helper.switch_expr, &env)?;
    helper
        .cases
        .iter()
        .find_map(|(case, value)| (*case == switch_value).then(|| value.clone()))
        .or_else(|| helper.default.clone())
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
        | Assign {
            target: lhs,
            value: rhs,
        }
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
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        } => {
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
        Ident(name) => subst
            .get(name.as_str())
            .cloned()
            .unwrap_or_else(|| expr.clone()),
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
        Member(base, _) | Arrow(base, _) | AddrOf(base) | Deref(base) => {
            expr_side_effect_free(base)
        }
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
        | Assign {
            target: lhs,
            value: rhs,
        }
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
    fn folds_constant_call_to_static_switch_return_helper() {
        let src = "static unsigned int pick(unsigned int x) {
                       switch (x & 7U) {
                       case 0: return 11U;
                       case 1: return 17U;
                       case 2: return 23U;
                       case 3: return 29U;
                       default: return 43U;
                       }
                   }
                   unsigned int f(void) { return pick(3U); }";
        let mut unit = crate::parse::parse(src).expect("parse const switch helper");
        crate::fold_constant_exprs(&mut unit);
        crate::fold_const_static_switch_calls(&mut unit);
        crate::fold_constant_exprs(&mut unit);

        let ret = match &unit.functions[1].body[0] {
            crate::ast::Stmt::Return(Some(expr)) => expr,
            other => panic!("unexpected folded statement: {other:?}"),
        };
        assert_eq!(
            ret,
            &crate::ast::Expr::IntLit(29, crate::token::IntSuffix::U),
            "constant helper call should fold to the matching return value"
        );
    }

    #[test]
    fn does_not_fold_static_switch_helper_with_nonconstant_arg() {
        let src = "static unsigned int pick(unsigned int x) {
                       switch (x & 7U) {
                       case 0: return 11U;
                       default: return 43U;
                       }
                   }
                   unsigned int f(unsigned int x) { return pick(x); }";
        let mut unit = crate::parse::parse(src).expect("parse dynamic switch helper");
        crate::fold_constant_exprs(&mut unit);
        crate::fold_const_static_switch_calls(&mut unit);

        let ret = match &unit.functions[1].body[0] {
            crate::ast::Stmt::Return(Some(expr)) => expr,
            other => panic!("unexpected folded statement: {other:?}"),
        };
        assert!(
            matches!(ret, crate::ast::Expr::Call { name, .. } if name == "pick"),
            "dynamic helper call must remain a call, got {ret:?}"
        );
    }

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
    fn substitutes_boolean_locals_before_lowering() {
        let src = "int f(unsigned int x) {
                       int p = ((x & 7U) == 3U);
                       int q = ((x & 7U) != 3U);
                       int r = (p && 1) || (q && 0) || (p && q);
                       return r + (int)(x & 31U);
                   }";
        let asm = crate::compile_to_asm(src, "bool-locals.c", &Default::default())
            .expect("compile bool-locals");
        let branch_count = asm.matches("IF ").count();
        assert!(
            branch_count <= 4,
            "boolean local identities should not lower as nested branches:\n{}",
            asm
        );
    }

    #[test]
    fn folds_loop_body_condition_known_true_from_for_header() {
        let src = "int f(void) {
                       unsigned int acc = 0;
                       for (unsigned int i = 0; i < 8192U; ++i) {
                           acc += (i < 8192U) ? 2U : 99U;
                       }
                       return (int)acc;
                   }";
        let asm = crate::compile_to_asm(src, "loop-known-condition.c", &Default::default())
            .expect("compile loop-known-condition");
        assert!(
            !asm.contains("0x63"),
            "loop body copy of the for condition should fold to the true arm:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_if_condition_in_loop() {
        let src = "int f(void) {
                       unsigned int acc = 0;
                       unsigned int flag = 1U;
                       for (unsigned int i = 0; i < 16U; ++i) {
                           if (flag) {
                               acc += i;
                           } else {
                               acc += 99U;
                           }
                       }
                       return (int)acc;
                   }";
        let asm = crate::compile_to_asm(src, "const-local-condition.c", &Default::default())
            .expect("compile const-local-condition");
        assert!(
            !asm.contains("0x63"),
            "constant local condition should fold away the else arm:\n{}",
            asm
        );
    }

    #[test]
    fn folds_unsigned_mask_range_if_condition_in_loop() {
        let src = "int f(void) {
                       unsigned int acc = 0;
                       for (unsigned int i = 0; i < 4096U; ++i) {
                           unsigned int x = i & 31U;
                           if (x < 64U) {
                               acc += x + 1U;
                           } else {
                               acc += 999U;
                           }
                       }
                       return (int)(acc & 0xffffU);
                   }";
        let asm = crate::compile_to_asm(src, "value-range-mask-if.c", &Default::default())
            .expect("compile value-range mask if");
        assert!(
            !asm.contains("0x3E7"),
            "unsigned mask range should fold away the else arm:\n{}",
            asm
        );
        assert!(
            asm.contains("LCNTR"),
            "folded loop should remain eligible for hardware DO lowering:\n{}",
            asm
        );
    }

    #[test]
    fn constant_folding_preserves_high_hex_ll_suffix() {
        let src = "typedef unsigned int uint32_t;
                   static uint32_t g_62 = 0xE87A7CF8U;
                   int f(int x) {
                       return 0xEFA42B4837182ABBLL <= (((x, 1) > -1), g_62);
                   }";
        let asm = crate::compile_to_asm(src, "high-hex-ll-compare.c", &Default::default())
            .expect("compile high-hex-ll-compare");
        assert!(
            asm.contains("COMPU"),
            "high-bit hexadecimal LL literal should compare as unsigned long long:\n{}",
            asm
        );
    }

    #[test]
    fn constant_folding_uses_unsigned_common_type_for_suffixed_compare() {
        let src = "int f(void) { return 252UL <= (-1L); }";
        let mut unit = crate::parse::parse(src).expect("parse unsigned compare");
        crate::fold_constant_exprs(&mut unit);
        let ret = match &unit.functions[0].body[0] {
            crate::ast::Stmt::Return(Some(expr)) => expr,
            other => panic!("unexpected folded statement: {other:?}"),
        };
        assert_eq!(
            ret,
            &crate::ast::Expr::IntLit(1, crate::token::IntSuffix::None),
            "unsigned long comparison must fold using usual arithmetic conversions"
        );
    }

    #[test]
    fn constant_folding_preserves_unsigned_suffix_through_bitand() {
        let src = "int f(signed char x, unsigned int y) {
                       return x > (((-8L) || y) & 1UL);
                   }";
        let asm = crate::compile_to_asm(src, "fold-unsigned-bitand-compare.c", &Default::default())
            .expect("compile fold-unsigned-bitand-compare");
        assert!(
            asm.contains("COMPU"),
            "folded `& 1UL` must keep unsigned comparison semantics:\n{}",
            asm
        );
    }

    #[test]
    fn simplifies_signed_char_unsigned_range_compare_to_sign_bit() {
        let src = "int f(unsigned int i) {
                       signed char c = (signed char)(i & 255U);
                       unsigned long mask = (i & 1U) ? 255UL : 127UL;
                       return c > (mask & 255UL);
                   }";
        let asm = crate::compile_to_asm(src, "signed-char-range-compare.c", &Default::default())
            .expect("compile signed-char range compare");
        assert!(
            asm.contains("0x80"),
            "comparison should become a sign-bit test:\n{}",
            asm
        );
        assert!(
            !asm.contains("0x7F") && !asm.contains("0x18"),
            "range compare should not materialize mask branches or sign-extension shifts:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_simplify_signed_char_unsigned_compare_with_small_rhs() {
        let src = "int f(unsigned int i) {
                       signed char c = (signed char)(i & 255U);
                       unsigned long mask = i & 1UL;
                       return c > mask;
                   }";
        let asm = crate::compile_to_asm(src, "signed-char-small-rhs.c", &Default::default())
            .expect("compile signed-char small rhs compare");
        assert!(
            asm.contains("COMPU") && !asm.contains("0x80"),
            "small unsigned RHS can be beaten by positive signed-char values, so keep compare:\n{}",
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
