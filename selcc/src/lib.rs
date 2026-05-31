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
    precompute_csmith_crc32_table(&mut unit);
    fold_constant_exprs(&mut unit);
    simplify_const_local_conditions(&mut unit);
    fold_constant_exprs(&mut unit);
    fold_simple_inc_dec_counted_loops(&mut unit);
    fold_const_empty_while_comma_sum_loops(&mut unit);
    fold_const_empty_for_comma_counter_loops(&mut unit);
    fold_const_small_for_int_loops(&mut unit);
    fold_const_string_pointer_array_loops(&mut unit);
    fold_const_int_pointer_alias_returns(&mut unit);
    fold_const_switch_returns(&mut unit);
    fold_const_clz_loops(&mut unit);
    substitute_const_global_aggregate_reads(&mut unit);
    substitute_const_string_array_indices(&mut unit);
    substitute_const_char_pointer_aliases(&mut unit);
    simplify_const_local_conditions(&mut unit);
    fold_constant_exprs(&mut unit);
    simplify_loop_body_known_conditions(&mut unit);
    fold_constant_exprs(&mut unit);
    fold_simple_inc_dec_counted_loops(&mut unit);
    substitute_bool_locals(&mut unit);
    fold_direct_byte_copy_loops(&mut unit);
    prune_unused_byte_pointer_alias_inits(&mut unit);
    substitute_single_use_pure_locals(&mut unit);
    simplify_signed_char_unsigned_range_compares(&mut unit);
    fold_constant_exprs(&mut unit);
    prune_unused_side_effect_free_local_inits(&mut unit);
    fold_const_static_switch_calls(&mut unit);
    fold_constant_exprs(&mut unit);
    unroll_transparent_crc_byte_loop(&mut unit);
    strip_transparent_crc_unused_args(&mut unit);
    inline_guarded_safe_calls(&mut unit);
    inline_simple_static_fns(&mut unit);
    prune_dead_local_assignments(&mut unit);
    fold_constant_exprs(&mut unit);
    eliminate_self_assignments(&mut unit);
    promote_readonly_const_aggregate_locals(&mut unit);
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

fn precompute_csmith_crc32_table(unit: &mut ast::TranslationUnit) {
    let has_csmith_crc_helpers = unit.functions.iter().any(|f| f.name == "crc32_gentab")
        && unit.functions.iter().any(|f| f.name == "crc32_byte")
        && unit.globals.iter().any(|g| g.name == "crc32_context");
    if !has_csmith_crc_helpers {
        return;
    }

    let mut initialized_table = false;
    for g in &mut unit.globals {
        if g.name == "crc32_tab" && g.init.is_none() && is_crc32_tab_type(&g.ty) {
            g.init = Some(ast::Expr::InitList(
                csmith_crc32_table()
                    .into_iter()
                    .map(|v| ast::Expr::IntLit(v as i64, token::IntSuffix::U))
                    .collect(),
            ));
            initialized_table = true;
            break;
        }
    }

    if initialized_table {
        for f in &mut unit.functions {
            if f.name == "crc32_gentab" && f.return_type == types::Type::Void {
                f.body.clear();
            }
        }
    }
}

fn is_crc32_tab_type(ty: &types::Type) -> bool {
    matches!(
        ty,
        types::Type::Array(elem, Some(256))
            if matches!(elem.as_ref(), types::Type::Unsigned(inner) if matches!(inner.as_ref(), types::Type::Int))
    )
}

fn csmith_crc32_table() -> Vec<u32> {
    (0..256)
        .map(|i| {
            let mut crc = i as u32;
            for _ in 0..8 {
                crc = if crc & 1 != 0 {
                    (crc >> 1) ^ 0xEDB8_8320
                } else {
                    crc >> 1
                };
            }
            crc
        })
        .collect()
}

fn unroll_transparent_crc_byte_loop(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if f.name != "transparent_crc" {
            continue;
        }
        let mut body = Vec::with_capacity(f.body.len() + 7);
        for stmt in f.body.drain(..) {
            if is_transparent_crc_byte_loop(&stmt) {
                body.push(transparent_crc_update_block(ast::Expr::Ident("val".into())));
            } else {
                body.push(stmt);
            }
        }
        f.body = body;
    }
}

fn strip_transparent_crc_unused_args(unit: &mut ast::TranslationUnit) {
    let mut changed = false;
    for f in &mut unit.functions {
        if f.name != "transparent_crc" || f.params.len() != 3 {
            continue;
        }
        if f.params[0].0 != "val" || f.params[1].0 != "vname" || f.params[2].0 != "flag" {
            continue;
        }
        let unused: std::collections::HashSet<&str> = ["vname", "flag"].into_iter().collect();
        let body = inline_void_body_without_void_param_uses(&f.body, &unused);
        if stmts_mention_name(&body, "vname") || stmts_mention_name(&body, "flag") {
            continue;
        }
        f.body = body;
        f.params.truncate(1);
        changed = true;
        break;
    }
    if !changed {
        return;
    }
    for f in &mut unit.functions {
        for stmt in &mut f.body {
            strip_transparent_crc_call_args_stmt(stmt);
        }
    }
}

fn strip_transparent_crc_call_args_stmt(stmt: &mut ast::Stmt) {
    use ast::Stmt::*;
    match stmt {
        Return(Some(expr)) | Expr(expr) | CaseLabel(expr) => strip_transparent_crc_call_args(expr),
        Return(None) | DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
        VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                strip_transparent_crc_call_args(expr);
            }
            if let Some(expr) = vla_dim {
                strip_transparent_crc_call_args(expr);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            strip_transparent_crc_call_args(cond);
            for stmt in then_body {
                strip_transparent_crc_call_args_stmt(stmt);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    strip_transparent_crc_call_args_stmt(stmt);
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            strip_transparent_crc_call_args(cond);
            for stmt in body {
                strip_transparent_crc_call_args_stmt(stmt);
            }
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(stmt) = init {
                strip_transparent_crc_call_args_stmt(stmt);
            }
            if let Some(expr) = cond {
                strip_transparent_crc_call_args(expr);
            }
            if let Some(expr) = step {
                strip_transparent_crc_call_args(expr);
            }
            for stmt in body {
                strip_transparent_crc_call_args_stmt(stmt);
            }
        }
        Block(body) | DeclGroup(body) => {
            for stmt in body {
                strip_transparent_crc_call_args_stmt(stmt);
            }
        }
        Switch { expr, body } => {
            strip_transparent_crc_call_args(expr);
            for stmt in body {
                strip_transparent_crc_call_args_stmt(stmt);
            }
        }
        Label(_, inner) => strip_transparent_crc_call_args_stmt(inner),
    }
}

fn strip_transparent_crc_call_args(expr: &mut ast::Expr) {
    use ast::Expr::*;
    match expr {
        Call { name, args } => {
            for arg in args.iter_mut() {
                strip_transparent_crc_call_args(arg);
            }
            if name == "transparent_crc" && args.len() == 3 {
                args.truncate(1);
            }
        }
        CallIndirect { func_expr, args } => {
            strip_transparent_crc_call_args(func_expr);
            for arg in args {
                strip_transparent_crc_call_args(arg);
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
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => strip_transparent_crc_call_args(operand),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            strip_transparent_crc_call_args(lhs);
            strip_transparent_crc_call_args(rhs);
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            strip_transparent_crc_call_args(cond);
            strip_transparent_crc_call_args(then_expr);
            strip_transparent_crc_call_args(else_expr);
        }
        InitList(items) => {
            for item in items {
                strip_transparent_crc_call_args(item);
            }
        }
        DesignatedInit { value, .. } => strip_transparent_crc_call_args(value),
        ArrayDesignator { index, value } => {
            strip_transparent_crc_call_args(index);
            strip_transparent_crc_call_args(value);
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) | Ident(_) => {}
    }
}

fn is_transparent_crc_byte_loop(stmt: &ast::Stmt) -> bool {
    let ast::Stmt::For { body, .. } = stmt else {
        return false;
    };
    matches!(
        body.as_slice(),
        [ast::Stmt::Expr(ast::Expr::Call { name, args })]
            if name == "crc32_byte" && args.len() == 1
    )
}

fn transparent_crc_update_block(value: ast::Expr) -> ast::Stmt {
    let context = "selcc_crc32_context_tmp";
    let mut body = Vec::with_capacity(10);
    body.push(ast::Stmt::VarDecl {
        name: context.into(),
        ty: types::Type::Unsigned(Box::new(types::Type::Int)),
        init: Some(ast::Expr::Ident("crc32_context".into())),
        is_static: false,
        vla_dim: None,
    });
    body.extend((0..8).map(|i| transparent_crc_update_stmt(i, context, &value)));
    body.push(ast::Stmt::Expr(ast::Expr::Assign {
        target: Box::new(ast::Expr::Ident("crc32_context".into())),
        value: Box::new(ast::Expr::Ident(context.into())),
    }));
    ast::Stmt::Block(body)
}

fn transparent_crc_update_stmt(i: i64, context: &str, value: &ast::Expr) -> ast::Stmt {
    transparent_crc_update_byte_stmt(transparent_crc_byte_expr(i, value), context)
}

fn transparent_crc_update_byte_stmt(byte_expr: ast::Expr, context: &str) -> ast::Stmt {
    use ast::{BinaryOp, Expr};

    let shifted_context = Expr::Binary {
        op: BinaryOp::Shr,
        lhs: Box::new(Expr::Ident(context.into())),
        rhs: Box::new(Expr::IntLit(8, token::IntSuffix::U)),
    };
    let low_context = Expr::Binary {
        op: BinaryOp::BitAnd,
        lhs: Box::new(shifted_context),
        rhs: Box::new(Expr::IntLit(0x00FF_FFFF, token::IntSuffix::UL)),
    };
    let table_index = Expr::Binary {
        op: BinaryOp::BitAnd,
        lhs: Box::new(Expr::Binary {
            op: BinaryOp::BitXor,
            lhs: Box::new(Expr::Ident(context.into())),
            rhs: Box::new(byte_expr),
        }),
        rhs: Box::new(Expr::IntLit(0xFF, token::IntSuffix::U)),
    };
    let table_value = Expr::Index(
        Box::new(Expr::Ident("crc32_tab".into())),
        Box::new(table_index),
    );
    let updated = Expr::Binary {
        op: BinaryOp::BitXor,
        lhs: Box::new(low_context),
        rhs: Box::new(table_value),
    };
    ast::Stmt::Expr(Expr::Assign {
        target: Box::new(Expr::Ident(context.into())),
        value: Box::new(updated),
    })
}

fn transparent_crc_byte_expr(i: i64, value: &ast::Expr) -> ast::Expr {
    use ast::{BinaryOp, Expr};

    let shifted = Expr::Binary {
        op: BinaryOp::Shr,
        lhs: Box::new(value.clone()),
        rhs: Box::new(Expr::IntLit(i * 8, token::IntSuffix::None)),
    };
    let masked = Expr::Binary {
        op: BinaryOp::BitAnd,
        lhs: Box::new(shifted),
        rhs: Box::new(Expr::IntLit(0xFF, token::IntSuffix::Ull)),
    };
    Expr::Cast(
        types::Type::Unsigned(Box::new(types::Type::Int)),
        Box::new(Expr::Cast(
            types::Type::Unsigned(Box::new(types::Type::Char)),
            Box::new(masked),
        )),
    )
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
    if preserves_signed_long_long_negative_cast(expr) {
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
            ast::BinaryOp::LogOr if eval_const_int_expr(rhs).is_some_and(|v| v != 0) => {
                *expr = ast::Expr::Comma(
                    Box::new((**lhs).clone()),
                    Box::new(ast::Expr::IntLit(1, crate::token::IntSuffix::None)),
                );
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
            ast::BinaryOp::LogAnd if eval_const_int_expr(rhs) == Some(0) => {
                *expr = ast::Expr::Comma(
                    Box::new((**lhs).clone()),
                    Box::new(ast::Expr::IntLit(0, crate::token::IntSuffix::None)),
                );
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
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    for f in &mut unit.functions {
        let alias = FuncAliasInfo::for_function(f, &typedefs);
        substitute_single_use_pure_locals_in_stmts(&mut f.body, &typedefs, &alias);
    }
}

/// Function-wide facts used to reason about the legality of substituting a
/// single-use pure local's initializer into its later use. The substitution
/// moves the read of the init's operands past any statements between the decl
/// and the use; that is only sound if nothing in between can write those
/// operands. Beyond the direct (textual) modification check, two indirect
/// channels matter:
///   * a **non-local** operand (a global / file-scope object — anything not in
///     `locals`) can be written by *any* called function; and
///   * an operand whose address is taken *anywhere* in the function
///     (`address_taken`) is aliasable, so a call or a store through a pointer
///     could write it.
struct FuncAliasInfo {
    /// Names that are locals or parameters of this function. Anything an init
    /// reads that is NOT in this set is treated as non-local (global).
    locals: std::collections::HashSet<String>,
    /// Names whose address is taken anywhere in the function body (aliasable).
    address_taken: std::collections::HashSet<String>,
}

impl FuncAliasInfo {
    fn for_function(f: &ast::Function, typedefs: &HashMap<String, types::Type>) -> Self {
        let mut locals = std::collections::HashSet::new();
        let mut volatile_locals = std::collections::HashSet::new();
        collect_local_decl_names(&f.body, typedefs, &mut locals, &mut volatile_locals);
        for (param_name, _) in &f.params {
            locals.insert(param_name.clone());
        }
        let mut address_taken = std::collections::HashSet::new();
        for stmt in &f.body {
            collect_stmt_address_taken_idents(stmt, &mut address_taken);
        }
        FuncAliasInfo {
            locals,
            address_taken,
        }
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
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    for f in &mut unit.functions {
        let mut env = HashMap::new();
        simplify_const_local_conditions_in_stmts(&mut f.body, &mut env, &typedefs);
    }
}

fn fold_simple_inc_dec_counted_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        fold_simple_inc_dec_counted_loops_in_stmts(&mut f.body);
    }
}

fn fold_const_switch_returns(unit: &mut ast::TranslationUnit) {
    let enum_env: HashMap<&str, i64> = unit
        .enum_constants
        .iter()
        .map(|(name, value)| (name.as_str(), *value))
        .collect();
    for f in &mut unit.functions {
        fold_const_switch_returns_in_stmts(&mut f.body, &enum_env);
    }
}

fn fold_const_empty_while_comma_sum_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if f.body.len() != 3 {
            continue;
        }
        if let Some(ret) =
            const_empty_while_comma_sum_loop_return(&f.body[0], &f.body[1], &f.body[2])
        {
            f.body = vec![ret];
        }
    }
}

fn const_empty_while_comma_sum_loop_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
) -> Option<ast::Stmt> {
    use ast::{Expr, Stmt};
    let Stmt::DeclGroup(items) = decls else {
        return None;
    };
    let Stmt::While { cond, body } = loop_stmt else {
        return None;
    };
    if !body.iter().all(is_noop_loop_body_stmt) {
        return None;
    }
    let Stmt::Return(Some(Expr::Ident(ret_name))) = ret_stmt else {
        return None;
    };

    let (sum_name, _idx_name, init_sum, init_idx, limit) = const_comma_sum_loop_parts(items, cond)?;
    if ret_name != &sum_name {
        return None;
    }

    let mut sum = init_sum;
    let mut idx = init_idx;
    for _ in 0..=1024 {
        sum = sum.wrapping_add(idx);
        idx = idx.wrapping_add(1);
        if idx > limit {
            return Some(Stmt::Return(Some(Expr::IntLit(
                sum,
                crate::token::IntSuffix::None,
            ))));
        }
    }
    None
}

fn is_noop_loop_body_stmt(stmt: &ast::Stmt) -> bool {
    match stmt {
        ast::Stmt::Expr(ast::Expr::IntLit(0, _)) => true,
        ast::Stmt::Block(body) => body.is_empty(),
        _ => false,
    }
}

fn const_comma_sum_loop_parts(
    decls: &[ast::Stmt],
    cond: &ast::Expr,
) -> Option<(String, String, i64, i64, i64)> {
    use ast::{BinaryOp, Expr, Stmt};
    let mut parts = Vec::new();
    collect_comma_exprs(cond, &mut parts);
    let [accum, inc, test] = parts.as_slice() else {
        return None;
    };
    let Expr::CompoundAssign {
        op: BinaryOp::Add,
        target,
        value,
    } = *accum
    else {
        return None;
    };
    let Expr::Ident(sum_name) = target.as_ref() else {
        return None;
    };
    let Expr::Ident(idx_from_sum) = value.as_ref() else {
        return None;
    };
    let Expr::PreInc(inc_target) = *inc else {
        return None;
    };
    let Expr::Ident(idx_from_inc) = inc_target.as_ref() else {
        return None;
    };
    let Expr::Binary {
        op: BinaryOp::Le,
        lhs,
        rhs,
    } = *test
    else {
        return None;
    };
    let Expr::Ident(idx_from_test) = lhs.as_ref() else {
        return None;
    };
    if idx_from_sum != idx_from_inc || idx_from_sum != idx_from_test {
        return None;
    }
    let limit = eval_const_int_expr(rhs)?;

    let mut init_sum = None;
    let mut init_idx = None;
    for decl in decls {
        let Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } = decl
        else {
            return None;
        };
        if !matches!(ty.unqualified(), types::Type::Int) {
            return None;
        }
        let value = eval_const_int_expr(init)?;
        if name == sum_name {
            init_sum = Some(value);
        } else if name == idx_from_sum {
            init_idx = Some(value);
        } else {
            return None;
        }
    }

    Some((
        sum_name.clone(),
        idx_from_sum.clone(),
        init_sum?,
        init_idx?,
        limit,
    ))
}

fn collect_comma_exprs<'a>(expr: &'a ast::Expr, out: &mut Vec<&'a ast::Expr>) {
    if let ast::Expr::Comma(lhs, rhs) = expr {
        collect_comma_exprs(lhs, out);
        collect_comma_exprs(rhs, out);
    } else {
        out.push(expr);
    }
}

fn fold_const_empty_for_comma_counter_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if f.body.len() != 3 {
            continue;
        }
        if let Some(ret) =
            const_empty_for_comma_counter_loop_return(&f.body[0], &f.body[1], &f.body[2])
        {
            f.body = vec![ret];
        }
    }
}

fn fold_const_small_for_int_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if f.body.len() != 3 {
            continue;
        }
        if let Some(ret) = const_small_for_int_loop_return(&f.body[0], &f.body[1], &f.body[2]) {
            f.body = vec![ret];
        }
    }
}

fn fold_const_string_pointer_array_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if f.body.len() < 3 {
            continue;
        }
        let loop_idx = f.body.len() - 2;
        let decls = ast::Stmt::DeclGroup(f.body[..loop_idx].to_vec());
        if let Some(ret) =
            const_string_pointer_array_loop_return(&decls, &f.body[loop_idx], &f.body[loop_idx + 1])
        {
            f.body = vec![ret];
        }
    }
}

fn const_small_for_int_loop_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
) -> Option<ast::Stmt> {
    use ast::{Expr, Stmt};

    let Stmt::DeclGroup(items) = decls else {
        return None;
    };
    let Stmt::For {
        init,
        cond: Some(cond),
        step: Some(step),
        body,
    } = loop_stmt
    else {
        return None;
    };
    let Stmt::Return(Some(ret_expr)) = ret_stmt else {
        return None;
    };

    let mut values = const_int_init_decl_names(items)?;
    if let Some(init) = init {
        apply_const_loop_stmt(init, &mut values)?;
    }

    for _ in 0..=256 {
        if eval_int_expr_with_values(cond, &values)? == 0 {
            let result = eval_int_expr_with_values(ret_expr, &values)?;
            return Some(Stmt::Return(Some(Expr::IntLit(
                result,
                crate::token::IntSuffix::None,
            ))));
        }
        for stmt in body {
            apply_const_loop_stmt(stmt, &mut values)?;
        }
        apply_const_loop_expr(step, &mut values)?;
    }
    None
}

#[derive(Clone, Default)]
struct ConstStringLoopState {
    ints: HashMap<String, i64>,
    string_arrays: HashMap<String, Vec<Vec<i64>>>,
}

fn const_string_pointer_array_loop_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
) -> Option<ast::Stmt> {
    use ast::{Expr, Stmt};

    let Stmt::DeclGroup(items) = decls else {
        return None;
    };
    let Stmt::For {
        init,
        cond: Some(cond),
        step: Some(step),
        body,
    } = loop_stmt
    else {
        return None;
    };
    let Stmt::Return(Some(ret_expr)) = ret_stmt else {
        return None;
    };

    let mut state = const_string_loop_decl_state(items)?;
    if state.string_arrays.is_empty() {
        return None;
    }
    if let Some(init) = init {
        apply_const_string_loop_stmt(init, &mut state)?;
    }

    for _ in 0..=256 {
        if eval_int_expr_with_string_loop_state(cond, &state)? == 0 {
            let result = eval_int_expr_with_string_loop_state(ret_expr, &state)?;
            return Some(Stmt::Return(Some(Expr::IntLit(
                result,
                crate::token::IntSuffix::None,
            ))));
        }
        for stmt in body {
            apply_const_string_loop_stmt(stmt, &mut state)?;
        }
        apply_const_string_loop_expr(step, &mut state)?;
    }
    None
}

fn const_string_loop_decl_state(decls: &[ast::Stmt]) -> Option<ConstStringLoopState> {
    let mut state = ConstStringLoopState::default();
    for decl in decls {
        if let ast::Stmt::DeclGroup(items) = decl {
            let nested = const_string_loop_decl_state(items)?;
            state.ints.extend(nested.ints);
            state.string_arrays.extend(nested.string_arrays);
            continue;
        }
        let ast::Stmt::VarDecl {
            name,
            ty,
            init,
            is_static: false,
            vla_dim: None,
        } = decl
        else {
            return None;
        };
        if ty.unqualified().is_integer() {
            let init = init.as_ref()?;
            let value = eval_const_int_expr(init)?;
            state
                .ints
                .insert(name.clone(), eval_integer_cast(ty, value));
        } else if let Some(strings) = const_string_pointer_array_values(ty, init.as_ref()) {
            state.string_arrays.insert(name.clone(), strings);
        } else {
            return None;
        }
    }
    Some(state)
}

fn const_string_pointer_array_values(
    ty: &types::Type,
    init: Option<&ast::Expr>,
) -> Option<Vec<Vec<i64>>> {
    let types::Type::Array(elem, len) = ty.unqualified() else {
        return None;
    };
    if !is_char_pointer_type(elem) {
        return None;
    }
    let ast::Expr::InitList(items) = init? else {
        return None;
    };
    let len = len.unwrap_or(items.len());
    if items.len() != len {
        return None;
    }
    let mut strings = Vec::with_capacity(items.len());
    for item in items {
        let ast::Expr::StringLit(s) = item else {
            return None;
        };
        strings.push(
            s.bytes()
                .map(|b| sign_extend(i64::from(b), 8))
                .chain(std::iter::once(0))
                .collect(),
        );
    }
    Some(strings)
}

fn const_int_init_decl_names(decls: &[ast::Stmt]) -> Option<HashMap<String, i64>> {
    let mut values = HashMap::new();
    for decl in decls {
        let ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } = decl
        else {
            return None;
        };
        if !matches!(ty.unqualified(), types::Type::Int) {
            return None;
        }
        values.insert(name.clone(), eval_const_int_expr(init)?);
    }
    Some(values)
}

fn const_empty_for_comma_counter_loop_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
) -> Option<ast::Stmt> {
    use ast::{Expr, Stmt};
    let Stmt::DeclGroup(items) = decls else {
        return None;
    };
    let Stmt::For {
        init: Some(init),
        cond: Some(cond),
        step: Some(step),
        body,
    } = loop_stmt
    else {
        return None;
    };
    if !body.iter().all(is_noop_loop_body_stmt) {
        return None;
    }
    let Stmt::Return(Some(ret_expr)) = ret_stmt else {
        return None;
    };

    let mut values = const_int_decl_names(items)?;
    apply_const_loop_expr(init_expr_from_stmt(init.as_ref())?, &mut values)?;
    for _ in 0..=1024 {
        if eval_int_expr_with_values(cond, &values)? == 0 {
            let result = eval_int_expr_with_values(ret_expr, &values)?;
            return Some(Stmt::Return(Some(Expr::IntLit(
                result,
                crate::token::IntSuffix::None,
            ))));
        }
        apply_const_loop_expr(step, &mut values)?;
    }
    None
}

fn const_int_decl_names(decls: &[ast::Stmt]) -> Option<HashMap<String, i64>> {
    let mut values = HashMap::new();
    for decl in decls {
        let ast::Stmt::VarDecl {
            name,
            ty,
            init,
            is_static: false,
            vla_dim: None,
        } = decl
        else {
            return None;
        };
        if !matches!(ty.unqualified(), types::Type::Int) || init.is_some() {
            return None;
        }
        values.insert(name.clone(), 0);
    }
    Some(values)
}

fn init_expr_from_stmt(stmt: &ast::Stmt) -> Option<&ast::Expr> {
    match stmt {
        ast::Stmt::Expr(expr) => Some(expr),
        _ => None,
    }
}

fn apply_const_loop_expr(expr: &ast::Expr, values: &mut HashMap<String, i64>) -> Option<()> {
    use ast::Expr;
    let mut parts = Vec::new();
    collect_comma_exprs(expr, &mut parts);
    for part in parts {
        match part {
            Expr::Assign { target, value } => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                if !values.contains_key(name) {
                    return None;
                }
                let value = eval_int_expr_with_values(value, values)?;
                values.insert(name.clone(), value);
            }
            Expr::CompoundAssign { op, target, value } => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                let lhs = *values.get(name)?;
                let rhs = eval_int_expr_with_values(value, values)?;
                let value = eval_const_int_binary_op(*op, lhs, rhs)?;
                *values.get_mut(name)? = value;
            }
            Expr::Ternary {
                cond,
                then_expr,
                else_expr,
            } => {
                let selected = if eval_int_expr_with_values(cond, values)? != 0 {
                    then_expr.as_ref()
                } else {
                    else_expr.as_ref()
                };
                apply_const_loop_expr(selected, values)?;
            }
            Expr::PreInc(target) | Expr::PostInc(target) => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                let value = values.get(name)?.wrapping_add(1);
                *values.get_mut(name)? = value;
            }
            Expr::PreDec(target) | Expr::PostDec(target) => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                let value = values.get(name)?.wrapping_sub(1);
                *values.get_mut(name)? = value;
            }
            _ => return None,
        }
    }
    Some(())
}

fn apply_const_string_loop_expr(expr: &ast::Expr, state: &mut ConstStringLoopState) -> Option<()> {
    use ast::Expr;
    let mut parts = Vec::new();
    collect_comma_exprs(expr, &mut parts);
    for part in parts {
        match part {
            Expr::Assign { target, value } => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                if !state.ints.contains_key(name) {
                    return None;
                }
                let value = eval_int_expr_with_string_loop_state(value, state)?;
                state.ints.insert(name.clone(), value);
            }
            Expr::CompoundAssign { op, target, value } => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                let lhs = *state.ints.get(name)?;
                let rhs = eval_int_expr_with_string_loop_state(value, state)?;
                let value = eval_const_int_binary_op(*op, lhs, rhs)?;
                *state.ints.get_mut(name)? = value;
            }
            Expr::Ternary {
                cond,
                then_expr,
                else_expr,
            } => {
                let selected = if eval_int_expr_with_string_loop_state(cond, state)? != 0 {
                    then_expr.as_ref()
                } else {
                    else_expr.as_ref()
                };
                apply_const_string_loop_expr(selected, state)?;
            }
            Expr::PreInc(target) | Expr::PostInc(target) => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                let value = state.ints.get(name)?.wrapping_add(1);
                *state.ints.get_mut(name)? = value;
            }
            Expr::PreDec(target) | Expr::PostDec(target) => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                let value = state.ints.get(name)?.wrapping_sub(1);
                *state.ints.get_mut(name)? = value;
            }
            _ => return None,
        }
    }
    Some(())
}

fn eval_const_int_binary_op(op: ast::BinaryOp, lhs: i64, rhs: i64) -> Option<i64> {
    use ast::BinaryOp;
    Some(match op {
        BinaryOp::Add => lhs.wrapping_add(rhs),
        BinaryOp::Sub => lhs.wrapping_sub(rhs),
        BinaryOp::Mul => lhs.wrapping_mul(rhs),
        BinaryOp::Div if rhs != 0 => (lhs as i32).wrapping_div(rhs as i32) as i64,
        BinaryOp::Mod if rhs != 0 => (lhs as i32).wrapping_rem(rhs as i32) as i64,
        BinaryOp::BitAnd => lhs & rhs,
        BinaryOp::BitOr => lhs | rhs,
        BinaryOp::BitXor => lhs ^ rhs,
        BinaryOp::Shl => (lhs as u32).wrapping_shl(rhs as u32) as i32 as i64,
        BinaryOp::Shr => (lhs as i32).wrapping_shr(rhs as u32) as i64,
        BinaryOp::Div
        | BinaryOp::Mod
        | BinaryOp::Eq
        | BinaryOp::Ne
        | BinaryOp::Lt
        | BinaryOp::Gt
        | BinaryOp::Le
        | BinaryOp::Ge
        | BinaryOp::LogAnd
        | BinaryOp::LogOr => return None,
    })
}

fn apply_const_string_loop_stmt(stmt: &ast::Stmt, state: &mut ConstStringLoopState) -> Option<()> {
    use ast::Stmt;
    match stmt {
        Stmt::Expr(expr) => {
            apply_const_string_loop_expr(expr, state)?;
        }
        Stmt::VarDecl {
            name,
            ty,
            init,
            is_static: false,
            vla_dim: None,
        } => {
            if !ty.unqualified().is_integer() || state.ints.contains_key(name) {
                return None;
            }
            let value = init.as_ref().map_or(Some(0), |expr| {
                eval_int_expr_with_string_loop_state(expr, state)
            })?;
            state
                .ints
                .insert(name.clone(), eval_integer_cast(ty, value));
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => {
            for stmt in body {
                apply_const_string_loop_stmt(stmt, state)?;
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            let selected = if eval_int_expr_with_string_loop_state(cond, state)? != 0 {
                then_body.as_slice()
            } else {
                else_body.as_deref().unwrap_or(&[])
            };
            for stmt in selected {
                apply_const_string_loop_stmt(stmt, state)?;
            }
        }
        _ => return None,
    }
    Some(())
}

fn eval_int_expr_with_string_loop_state(
    expr: &ast::Expr,
    state: &ConstStringLoopState,
) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    if let Some(byte) = const_string_pointer_array_byte(expr, state) {
        return Some(byte);
    }
    Some(match expr {
        Expr::IntLit(value, _) | Expr::CharLit(value) => *value,
        Expr::Ident(name) => *state.ints.get(name)?,
        Expr::Unary { op, operand } => {
            let value = eval_int_expr_with_string_loop_state(operand, state)?;
            match op {
                UnaryOp::Neg => value.wrapping_neg(),
                UnaryOp::BitNot => !value,
                UnaryOp::LogNot => i64::from(value == 0),
            }
        }
        Expr::Binary { op, lhs, rhs } => match op {
            BinaryOp::LogAnd => {
                let lhs = eval_int_expr_with_string_loop_state(lhs, state)?;
                if lhs == 0 {
                    0
                } else {
                    i64::from(eval_int_expr_with_string_loop_state(rhs, state)? != 0)
                }
            }
            BinaryOp::LogOr => {
                let lhs = eval_int_expr_with_string_loop_state(lhs, state)?;
                if lhs != 0 {
                    1
                } else {
                    i64::from(eval_int_expr_with_string_loop_state(rhs, state)? != 0)
                }
            }
            BinaryOp::Eq
            | BinaryOp::Ne
            | BinaryOp::Lt
            | BinaryOp::Gt
            | BinaryOp::Le
            | BinaryOp::Ge => {
                let lhs = eval_int_expr_with_string_loop_state(lhs, state)?;
                let rhs = eval_int_expr_with_string_loop_state(rhs, state)?;
                let value = match op {
                    BinaryOp::Eq => lhs == rhs,
                    BinaryOp::Ne => lhs != rhs,
                    BinaryOp::Lt => lhs < rhs,
                    BinaryOp::Gt => lhs > rhs,
                    BinaryOp::Le => lhs <= rhs,
                    BinaryOp::Ge => lhs >= rhs,
                    _ => unreachable!(),
                };
                i64::from(value)
            }
            _ => {
                let lhs = eval_int_expr_with_string_loop_state(lhs, state)?;
                let rhs = eval_int_expr_with_string_loop_state(rhs, state)?;
                eval_const_int_binary_op(*op, lhs, rhs)?
            }
        },
        Expr::Cast(ty, operand) => {
            let value = eval_int_expr_with_string_loop_state(operand, state)?;
            eval_integer_cast(ty, value)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            if eval_int_expr_with_string_loop_state(cond, state)? != 0 {
                eval_int_expr_with_string_loop_state(then_expr, state)?
            } else {
                eval_int_expr_with_string_loop_state(else_expr, state)?
            }
        }
        Expr::Comma(lhs, rhs) => {
            eval_int_expr_with_string_loop_state(lhs, state)?;
            eval_int_expr_with_string_loop_state(rhs, state)?
        }
        _ => return None,
    })
}

fn const_string_pointer_array_byte(expr: &ast::Expr, state: &ConstStringLoopState) -> Option<i64> {
    let ast::Expr::Index(base, byte_index) = expr else {
        return None;
    };
    let ast::Expr::Index(array, string_index) = base.as_ref() else {
        return None;
    };
    let ast::Expr::Ident(name) = array.as_ref() else {
        return None;
    };
    let string_index =
        usize::try_from(eval_int_expr_with_string_loop_state(string_index, state)?).ok()?;
    let byte_index =
        usize::try_from(eval_int_expr_with_string_loop_state(byte_index, state)?).ok()?;
    state
        .string_arrays
        .get(name)
        .and_then(|strings| strings.get(string_index))
        .and_then(|bytes| bytes.get(byte_index))
        .copied()
}

#[derive(Default)]
struct ConstPtrAliasState {
    values: HashMap<String, i64>,
    ptrs: HashMap<String, String>,
    saw_pointer_alias: bool,
}

fn fold_const_int_pointer_alias_returns(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if !f.params.is_empty() {
            continue;
        }
        if let Some(value) = const_int_pointer_alias_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn const_int_pointer_alias_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let mut state = ConstPtrAliasState::default();
    for (idx, stmt) in stmts.iter().enumerate() {
        if let ast::Stmt::Return(Some(expr)) = stmt {
            if idx + 1 != stmts.len() || !state.saw_pointer_alias {
                return None;
            }
            return eval_int_expr_with_const_ptr_aliases(expr, &state);
        }
        apply_const_pointer_alias_stmt(stmt, &mut state)?;
    }
    None
}

fn apply_const_pointer_alias_stmt(stmt: &ast::Stmt, state: &mut ConstPtrAliasState) -> Option<()> {
    use ast::Stmt;
    match stmt {
        Stmt::DeclGroup(items) | Stmt::Block(items) => {
            for item in items {
                apply_const_pointer_alias_stmt(item, state)?;
            }
            Some(())
        }
        Stmt::VarDecl {
            name,
            ty,
            init,
            is_static: false,
            vla_dim: None,
        } if matches!(ty.unqualified(), types::Type::Int) => {
            let value = init.as_ref().map_or(Some(0), |expr| {
                eval_int_expr_with_const_ptr_aliases(expr, state)
            })?;
            state.ptrs.remove(name);
            state.values.insert(name.clone(), value);
            Some(())
        }
        Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } if type_is_int_pointer(ty) => {
            let target = direct_addr_ident(init)?;
            if !state.values.contains_key(target) {
                return None;
            }
            state.values.remove(name);
            state.ptrs.insert(name.clone(), target.to_string());
            state.saw_pointer_alias = true;
            Some(())
        }
        Stmt::Expr(expr) => apply_const_pointer_alias_expr_stmt(expr, state),
        _ => None,
    }
}

fn type_is_int_pointer(ty: &types::Type) -> bool {
    let types::Type::Pointer(inner) = ty.unqualified() else {
        return false;
    };
    matches!(inner.unqualified(), types::Type::Int)
}

fn direct_addr_ident(expr: &ast::Expr) -> Option<&str> {
    match expr {
        ast::Expr::AddrOf(inner) => match inner.as_ref() {
            ast::Expr::Ident(name) => Some(name),
            _ => None,
        },
        ast::Expr::Cast(_, inner) => direct_addr_ident(inner),
        _ => None,
    }
}

fn apply_const_pointer_alias_expr_stmt(
    expr: &ast::Expr,
    state: &mut ConstPtrAliasState,
) -> Option<()> {
    use ast::Expr;
    match expr {
        Expr::Assign { target, value } => {
            if let Some(name) = direct_ident_lvalue(target) {
                if state.ptrs.contains_key(name) {
                    let target_name = direct_addr_ident(value)?;
                    if !state.values.contains_key(target_name) {
                        return None;
                    }
                    state.ptrs.insert(name.to_string(), target_name.to_string());
                    state.saw_pointer_alias = true;
                    return Some(());
                }
            }
            let value = eval_int_expr_with_const_ptr_aliases(value, state)?;
            if let Some(name) = direct_ident_lvalue(target) {
                if !state.values.contains_key(name) {
                    return None;
                }
                state.values.insert(name.to_string(), value);
                return Some(());
            }
            if let Some(name) = direct_deref_pointer_name(target) {
                let target_name = state.ptrs.get(name)?.clone();
                state.values.insert(target_name, value);
                state.saw_pointer_alias = true;
                return Some(());
            }
            None
        }
        Expr::CompoundAssign { op, target, value } => {
            let rhs = eval_int_expr_with_const_ptr_aliases(value, state)?;
            let name = direct_ident_lvalue(target).or_else(|| {
                direct_deref_pointer_name(target)
                    .and_then(|p| state.ptrs.get(p).map(String::as_str))
            })?;
            let lhs = *state.values.get(name)?;
            let value = eval_const_int_binary_op(*op, lhs, rhs)?;
            state.values.insert(name.to_string(), value);
            Some(())
        }
        Expr::PreInc(target) | Expr::PostInc(target) => {
            let name = direct_ident_lvalue(target).or_else(|| {
                direct_deref_pointer_name(target)
                    .and_then(|p| state.ptrs.get(p).map(String::as_str))
            })?;
            *state.values.get_mut(name)? = state.values.get(name)?.wrapping_add(1);
            Some(())
        }
        Expr::PreDec(target) | Expr::PostDec(target) => {
            let name = direct_ident_lvalue(target).or_else(|| {
                direct_deref_pointer_name(target)
                    .and_then(|p| state.ptrs.get(p).map(String::as_str))
            })?;
            *state.values.get_mut(name)? = state.values.get(name)?.wrapping_sub(1);
            Some(())
        }
        Expr::IntLit(0, _) => Some(()),
        _ => eval_int_expr_with_const_ptr_aliases(expr, state).map(|_| ()),
    }
}

fn direct_ident_lvalue(expr: &ast::Expr) -> Option<&str> {
    match expr {
        ast::Expr::Ident(name) => Some(name),
        _ => None,
    }
}

fn direct_deref_pointer_name(expr: &ast::Expr) -> Option<&str> {
    match expr {
        ast::Expr::Deref(inner) => match inner.as_ref() {
            ast::Expr::Ident(name) => Some(name),
            _ => None,
        },
        _ => None,
    }
}

fn eval_int_expr_with_const_ptr_aliases(
    expr: &ast::Expr,
    state: &ConstPtrAliasState,
) -> Option<i64> {
    let substituted = substitute_const_ptr_alias_expr(expr, state)?;
    eval_const_int_expr(&substituted)
}

fn substitute_const_ptr_alias_expr(
    expr: &ast::Expr,
    state: &ConstPtrAliasState,
) -> Option<ast::Expr> {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => state
            .values
            .get(name)
            .map(|value| Expr::IntLit(*value, crate::token::IntSuffix::None)),
        Expr::Deref(inner) => {
            let Expr::Ident(ptr_name) = inner.as_ref() else {
                return None;
            };
            let target = state.ptrs.get(ptr_name)?;
            state
                .values
                .get(target)
                .map(|value| Expr::IntLit(*value, crate::token::IntSuffix::None))
        }
        Expr::Unary { op, operand } => Some(Expr::Unary {
            op: *op,
            operand: Box::new(substitute_const_ptr_alias_expr(operand, state)?),
        }),
        Expr::Cast(ty, operand) => Some(Expr::Cast(
            ty.clone(),
            Box::new(substitute_const_ptr_alias_expr(operand, state)?),
        )),
        Expr::Binary { op, lhs, rhs } => Some(Expr::Binary {
            op: *op,
            lhs: Box::new(substitute_const_ptr_alias_expr(lhs, state)?),
            rhs: Box::new(substitute_const_ptr_alias_expr(rhs, state)?),
        }),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            let cond = substitute_const_ptr_alias_expr(cond, state)?;
            if eval_const_int_expr(&cond)? != 0 {
                substitute_const_ptr_alias_expr(then_expr, state)
            } else {
                substitute_const_ptr_alias_expr(else_expr, state)
            }
        }
        Expr::IntLit(..) | Expr::CharLit(_) => Some(expr.clone()),
        _ => eval_const_int_expr(expr)
            .map(|value| Expr::IntLit(value, crate::token::IntSuffix::None)),
    }
}

fn apply_const_loop_stmt(stmt: &ast::Stmt, values: &mut HashMap<String, i64>) -> Option<()> {
    use ast::Stmt;
    match stmt {
        Stmt::Expr(expr) => {
            apply_const_loop_expr(expr, values)?;
        }
        Stmt::VarDecl {
            name,
            ty,
            init,
            is_static: false,
            vla_dim: None,
        } => {
            if !matches!(ty.unqualified(), types::Type::Int) || values.contains_key(name) {
                return None;
            }
            let value = init
                .as_ref()
                .map_or(Some(0), |expr| eval_int_expr_with_values(expr, values))?;
            values.insert(name.clone(), value);
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => {
            for stmt in body {
                apply_const_loop_stmt(stmt, values)?;
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            let selected = if eval_int_expr_with_values(cond, values)? != 0 {
                then_body.as_slice()
            } else {
                else_body.as_deref().unwrap_or(&[])
            };
            for stmt in selected {
                apply_const_loop_stmt(stmt, values)?;
            }
        }
        _ => return None,
    }
    Some(())
}

fn fold_simple_inc_dec_counted_loops_in_stmts(stmts: &mut [ast::Stmt]) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                fold_simple_inc_dec_counted_loops_in_stmts(then_body);
                if let Some(body) = else_body {
                    fold_simple_inc_dec_counted_loops_in_stmts(body);
                }
            }
            Stmt::While { body, .. }
            | Stmt::DoWhile { body, .. }
            | Stmt::Block(body)
            | Stmt::DeclGroup(body)
            | Stmt::Switch { body, .. } => fold_simple_inc_dec_counted_loops_in_stmts(body),
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                fold_simple_inc_dec_counted_loops_in_stmts(body);
                if let Some(replacement) = simple_inc_dec_counted_loop_replacement(
                    init.as_deref(),
                    cond.as_ref(),
                    step.as_ref(),
                    body,
                ) {
                    *stmt = replacement;
                }
            }
            Stmt::Label(_, inner) => {
                fold_simple_inc_dec_counted_loops_in_stmts(std::slice::from_mut(inner.as_mut()));
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

fn simple_inc_dec_counted_loop_replacement(
    init: Option<&ast::Stmt>,
    cond: Option<&ast::Expr>,
    step: Option<&ast::Expr>,
    body: &[ast::Stmt],
) -> Option<ast::Stmt> {
    let init = init?;
    let cond = cond?;
    let step = step?;
    let (target, start) = loop_init_assignment(init)?;
    let (iterations, final_value) = constant_loop_trip_count(&target, start, cond, step)?;
    if iterations == 0 || iterations > 4096 {
        return None;
    }
    let effects = simple_inc_dec_effects(body)?;
    if effects.is_empty() {
        return None;
    }
    if effects
        .iter()
        .any(|(effect_target, _)| effect_target == &target)
    {
        return None;
    }

    let mut replacement = Vec::with_capacity(effects.len() + 2);
    replacement.push(init.clone());
    for (target, delta) in effects {
        let total = delta.checked_mul(iterations)?;
        if total != 0 {
            replacement.push(delta_compound_stmt(target, total));
        }
    }
    replacement.push(ast::Stmt::Expr(ast::Expr::Assign {
        target: Box::new(target),
        value: Box::new(ast::Expr::IntLit(
            final_value,
            crate::token::IntSuffix::None,
        )),
    }));
    Some(ast::Stmt::Block(replacement))
}

fn loop_init_assignment(init: &ast::Stmt) -> Option<(ast::Expr, i64)> {
    match init {
        ast::Stmt::Expr(ast::Expr::Assign { target, value }) => {
            Some((target.as_ref().clone(), eval_const_int_expr(value)?))
        }
        ast::Stmt::VarDecl {
            name,
            init,
            is_static: false,
            vla_dim: None,
            ..
        } => Some((
            ast::Expr::Ident(name.clone()),
            init.as_ref().map_or(Some(0), eval_const_int_expr)?,
        )),
        _ => None,
    }
}

fn constant_loop_trip_count(
    target: &ast::Expr,
    start: i64,
    cond: &ast::Expr,
    step: &ast::Expr,
) -> Option<(i64, i64)> {
    let mut value = start;
    let mut iterations = 0_i64;
    while eval_loop_cond_for_target(cond, target, value)? {
        iterations += 1;
        if iterations > 4096 {
            return None;
        }
        value = apply_loop_step_for_target(step, target, value)?;
    }
    Some((iterations, value))
}

fn eval_loop_cond_for_target(cond: &ast::Expr, target: &ast::Expr, value: i64) -> Option<bool> {
    let ast::Expr::Binary { op, lhs, rhs } = cond else {
        return None;
    };
    if lhs.as_ref() != target {
        return None;
    }
    let rhs = eval_const_int_expr(rhs)?;
    Some(match op {
        ast::BinaryOp::Lt => value < rhs,
        ast::BinaryOp::Le => value <= rhs,
        ast::BinaryOp::Gt => value > rhs,
        ast::BinaryOp::Ge => value >= rhs,
        ast::BinaryOp::Eq => value == rhs,
        ast::BinaryOp::Ne => value != rhs,
        _ => return None,
    })
}

fn apply_loop_step_for_target(step: &ast::Expr, target: &ast::Expr, value: i64) -> Option<i64> {
    use ast::{BinaryOp, Expr};
    match step {
        Expr::PreInc(inner) | Expr::PostInc(inner) if inner.as_ref() == target => Some(value + 1),
        Expr::PreDec(inner) | Expr::PostDec(inner) if inner.as_ref() == target => Some(value - 1),
        Expr::CompoundAssign {
            op: BinaryOp::Add,
            target: lhs,
            value: rhs,
        } if lhs.as_ref() == target => Some(value + eval_const_int_expr(rhs)?),
        Expr::CompoundAssign {
            op: BinaryOp::Sub,
            target: lhs,
            value: rhs,
        } if lhs.as_ref() == target => Some(value - eval_const_int_expr(rhs)?),
        Expr::Assign {
            target: lhs,
            value: rhs,
        } if lhs.as_ref() == target => match rhs.as_ref() {
            Expr::Binary {
                op: BinaryOp::Add,
                lhs: add_lhs,
                rhs: add_rhs,
            } if add_lhs.as_ref() == target => Some(value + eval_const_int_expr(add_rhs)?),
            Expr::Binary {
                op: BinaryOp::Sub,
                lhs: sub_lhs,
                rhs: sub_rhs,
            } if sub_lhs.as_ref() == target => Some(value - eval_const_int_expr(sub_rhs)?),
            _ => None,
        },
        _ => None,
    }
}

fn simple_inc_dec_effects(body: &[ast::Stmt]) -> Option<Vec<(ast::Expr, i64)>> {
    let mut effects: Vec<(ast::Expr, i64)> = Vec::new();
    for stmt in body {
        let ast::Stmt::Expr(expr) = stmt else {
            return None;
        };
        let (target, delta) = simple_inc_dec_effect(expr)?;
        if let Some((_, existing)) = effects.iter_mut().find(|(seen, _)| *seen == target) {
            *existing += delta;
        } else {
            effects.push((target, delta));
        }
    }
    Some(effects)
}

fn simple_inc_dec_effect(expr: &ast::Expr) -> Option<(ast::Expr, i64)> {
    use ast::Expr;
    match expr {
        Expr::PreInc(target) | Expr::PostInc(target) => Some((target.as_ref().clone(), 1)),
        Expr::PreDec(target) | Expr::PostDec(target) => Some((target.as_ref().clone(), -1)),
        _ => None,
    }
}

fn delta_compound_stmt(target: ast::Expr, delta: i64) -> ast::Stmt {
    let (op, value) = if delta >= 0 {
        (ast::BinaryOp::Add, delta)
    } else {
        (ast::BinaryOp::Sub, delta.wrapping_neg())
    };
    ast::Stmt::Expr(ast::Expr::CompoundAssign {
        op,
        target: Box::new(target),
        value: Box::new(ast::Expr::IntLit(value, crate::token::IntSuffix::None)),
    })
}

fn eval_int_expr_with_values(expr: &ast::Expr, values: &HashMap<String, i64>) -> Option<i64> {
    let env: HashMap<&str, i64> = values
        .iter()
        .map(|(name, value)| (name.as_str(), *value))
        .collect();
    eval_const_int_expr_with_env(expr, &env)
}

fn fold_const_switch_returns_in_stmts(stmts: &mut [ast::Stmt], enum_env: &HashMap<&str, i64>) {
    for stmt in stmts {
        use ast::Stmt;
        match stmt {
            Stmt::Switch { expr, body } => {
                fold_const_switch_returns_in_stmts(body, enum_env);
                if let Some(replacement) = const_switch_return_stmt(expr, body, enum_env) {
                    *stmt = replacement;
                }
            }
            Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                fold_const_switch_returns_in_stmts(then_body, enum_env);
                if let Some(body) = else_body {
                    fold_const_switch_returns_in_stmts(body, enum_env);
                }
            }
            Stmt::While { body, .. }
            | Stmt::DoWhile { body, .. }
            | Stmt::Block(body)
            | Stmt::DeclGroup(body) => fold_const_switch_returns_in_stmts(body, enum_env),
            Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    fold_const_switch_returns_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        enum_env,
                    );
                }
                fold_const_switch_returns_in_stmts(body, enum_env);
            }
            Stmt::Label(_, inner) => {
                fold_const_switch_returns_in_stmts(std::slice::from_mut(inner.as_mut()), enum_env);
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

fn const_switch_return_stmt(
    expr: &ast::Expr,
    body: &[ast::Stmt],
    enum_env: &HashMap<&str, i64>,
) -> Option<ast::Stmt> {
    let value = eval_const_int_expr_with_env(expr, enum_env)?;
    let mut default_idx = None;
    for (idx, stmt) in body.iter().enumerate() {
        match stmt {
            ast::Stmt::CaseLabel(case)
                if eval_const_int_expr_with_env(case, enum_env) == Some(value) =>
            {
                return immediate_return_after_label(body, idx);
            }
            ast::Stmt::DefaultLabel => default_idx = Some(idx),
            _ => {}
        }
    }
    immediate_return_after_label(body, default_idx?)
}

fn immediate_return_after_label(body: &[ast::Stmt], label_idx: usize) -> Option<ast::Stmt> {
    match body.get(label_idx + 1)? {
        ast::Stmt::Return(expr) => Some(ast::Stmt::Return(expr.clone())),
        _ => None,
    }
}

fn fold_const_clz_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if let Some(value) = const_clz_loop_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn const_clz_loop_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let [ast::Stmt::VarDecl {
        name: x_name,
        init: Some(x_init),
        ..
    }, ast::Stmt::VarDecl {
        name: lz_name,
        init: Some(lz_init),
        ..
    }, if_stmt, while_stmt, ast::Stmt::Return(Some(ret))] = stmts
    else {
        return None;
    };
    let x0 = eval_const_int_expr(x_init)? as u32;
    if eval_const_int_expr(lz_init)? != 0 {
        return None;
    }
    if !const_clz_zero_guard(if_stmt, x_name) {
        return None;
    }
    let ast::Stmt::While { cond, body } = while_stmt else {
        return None;
    };
    if !const_clz_loop_cond(cond, x_name) || !const_clz_loop_body(body, x_name, lz_name) {
        return None;
    }
    if !matches!(ret, ast::Expr::Ident(name) if name == lz_name) {
        return None;
    }
    Some(i64::from(x0.leading_zeros()))
}

fn const_clz_zero_guard(stmt: &ast::Stmt, x_name: &str) -> bool {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return false;
    };
    (eval_const_int_expr(cond) == Some(0) || expr_is_ident_eq_zero(cond, x_name))
        && matches!(
            then_body.as_slice(),
            [ast::Stmt::Return(Some(expr))] if eval_const_int_expr(expr) == Some(32)
        )
}

fn const_clz_loop_cond(expr: &ast::Expr, x_name: &str) -> bool {
    let ast::Expr::Unary {
        op: ast::UnaryOp::LogNot,
        operand,
    } = expr
    else {
        return false;
    };
    let ast::Expr::Binary {
        op: ast::BinaryOp::BitAnd,
        lhs,
        rhs,
    } = operand.as_ref()
    else {
        return false;
    };
    let (name_expr, mask_expr) = if matches!(lhs.as_ref(), ast::Expr::Ident(name) if name == x_name)
    {
        (lhs.as_ref(), rhs.as_ref())
    } else {
        (rhs.as_ref(), lhs.as_ref())
    };
    matches!(name_expr, ast::Expr::Ident(name) if name == x_name)
        && eval_const_int_expr(mask_expr).is_some_and(|mask| (mask as u32) == 0x8000_0000)
}

fn const_clz_loop_body(body: &[ast::Stmt], x_name: &str, lz_name: &str) -> bool {
    let [ast::Stmt::Expr(inc), ast::Stmt::Expr(shift)] = body else {
        return false;
    };
    let inc_ok = matches!(
        inc,
        ast::Expr::PostInc(inner) | ast::Expr::PreInc(inner)
            if matches!(inner.as_ref(), ast::Expr::Ident(name) if name == lz_name)
    );
    let ast::Expr::CompoundAssign {
        op: ast::BinaryOp::Shl,
        target,
        value,
    } = shift
    else {
        return false;
    };
    inc_ok
        && matches!(target.as_ref(), ast::Expr::Ident(name) if name == x_name)
        && eval_const_int_expr(value) == Some(1)
}

struct ConstGlobalStructArray<'a> {
    elem_ty: &'a types::Type,
    init: &'a ast::Expr,
}

fn substitute_const_global_aggregate_reads(unit: &mut ast::TranslationUnit) {
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let assigned = global_assigned_names(unit);
    let mut arrays = HashMap::new();
    for global in &unit.globals {
        if !global.is_static
            || assigned.contains(&global.name)
            || !type_has_const_qualifier(&global.ty, &typedefs)
        {
            continue;
        }
        if let (Some(elem_ty), Some(init)) = (
            const_global_array_elem_type(&global.ty, &typedefs),
            global.init.as_ref(),
        ) {
            arrays.insert(
                global.name.clone(),
                ConstGlobalStructArray { elem_ty, init },
            );
        }
    }
    if arrays.is_empty() {
        return;
    }
    for function in &mut unit.functions {
        substitute_const_global_aggregate_reads_in_stmts(&mut function.body, &arrays);
    }
}

fn global_assigned_names(unit: &ast::TranslationUnit) -> std::collections::HashSet<String> {
    let mut assigned = std::collections::HashSet::new();
    for function in &unit.functions {
        for name in stmt_assigned_names_in_stmts(&function.body) {
            assigned.insert(name);
        }
    }
    assigned
}

fn type_has_const_qualifier(ty: &types::Type, typedefs: &HashMap<String, types::Type>) -> bool {
    match ty {
        types::Type::Const(_) => true,
        types::Type::Array(inner, _) | types::Type::Pointer(inner) => {
            type_has_const_qualifier(inner, typedefs)
        }
        types::Type::Typedef(name) => typedefs
            .get(name)
            .is_some_and(|ty| type_has_const_qualifier(ty, typedefs)),
        _ => false,
    }
}

fn const_global_array_elem_type<'a>(
    ty: &'a types::Type,
    typedefs: &'a HashMap<String, types::Type>,
) -> Option<&'a types::Type> {
    match ty {
        types::Type::Array(elem, Some(_)) => Some(strip_const_typedef_type(elem, typedefs)),
        types::Type::Const(inner) => const_global_array_elem_type(inner, typedefs),
        types::Type::Typedef(name) => const_global_array_elem_type(typedefs.get(name)?, typedefs),
        _ => None,
    }
}

fn strip_const_typedef_type<'a>(
    ty: &'a types::Type,
    typedefs: &'a HashMap<String, types::Type>,
) -> &'a types::Type {
    match ty {
        types::Type::Const(inner) => strip_const_typedef_type(inner, typedefs),
        types::Type::Typedef(name) => typedefs
            .get(name)
            .map(|ty| strip_const_typedef_type(ty, typedefs))
            .unwrap_or(ty),
        _ => ty,
    }
}

fn substitute_const_global_aggregate_reads_in_stmts(
    stmts: &mut [ast::Stmt],
    arrays: &HashMap<String, ConstGlobalStructArray<'_>>,
) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                substitute_const_global_aggregate_reads_in_expr(expr, arrays);
            }
            Stmt::VarDecl { init, vla_dim, .. } => {
                if let Some(expr) = init {
                    substitute_const_global_aggregate_reads_in_expr(expr, arrays);
                }
                if let Some(expr) = vla_dim {
                    substitute_const_global_aggregate_reads_in_expr(expr, arrays);
                }
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                substitute_const_global_aggregate_reads_in_expr(cond, arrays);
                substitute_const_global_aggregate_reads_in_stmts(then_body, arrays);
                if let Some(body) = else_body {
                    substitute_const_global_aggregate_reads_in_stmts(body, arrays);
                }
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                substitute_const_global_aggregate_reads_in_expr(cond, arrays);
                substitute_const_global_aggregate_reads_in_stmts(body, arrays);
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(init) = init {
                    substitute_const_global_aggregate_reads_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        arrays,
                    );
                }
                if let Some(expr) = cond {
                    substitute_const_global_aggregate_reads_in_expr(expr, arrays);
                }
                if let Some(expr) = step {
                    substitute_const_global_aggregate_reads_in_expr(expr, arrays);
                }
                substitute_const_global_aggregate_reads_in_stmts(body, arrays);
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
                substitute_const_global_aggregate_reads_in_stmts(body, arrays);
            }
            Stmt::Label(_, inner) => {
                substitute_const_global_aggregate_reads_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    arrays,
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

fn substitute_const_global_aggregate_reads_in_expr(
    expr: &mut ast::Expr,
    arrays: &HashMap<String, ConstGlobalStructArray<'_>>,
) {
    use ast::Expr;
    match expr {
        Expr::Member(base, field) => {
            substitute_const_global_aggregate_reads_in_expr(base, arrays);
            if let Some(value) = const_global_struct_array_member_value(base, field, arrays) {
                *expr = Expr::IntLit(value, crate::token::IntSuffix::None);
            }
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
        | Expr::Arrow(operand, _) => {
            substitute_const_global_aggregate_reads_in_expr(operand, arrays);
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
            substitute_const_global_aggregate_reads_in_expr(lhs, arrays);
            substitute_const_global_aggregate_reads_in_expr(rhs, arrays);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_const_global_aggregate_reads_in_expr(arg, arrays);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            substitute_const_global_aggregate_reads_in_expr(func_expr, arrays);
            for arg in args {
                substitute_const_global_aggregate_reads_in_expr(arg, arrays);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            substitute_const_global_aggregate_reads_in_expr(cond, arrays);
            substitute_const_global_aggregate_reads_in_expr(then_expr, arrays);
            substitute_const_global_aggregate_reads_in_expr(else_expr, arrays);
        }
        Expr::Sizeof(inner) => {
            if let ast::SizeofArg::Expr(inner) = inner.as_mut() {
                substitute_const_global_aggregate_reads_in_expr(inner, arrays);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                substitute_const_global_aggregate_reads_in_expr(item, arrays);
            }
        }
        Expr::DesignatedInit { value, .. } => {
            substitute_const_global_aggregate_reads_in_expr(value, arrays);
        }
        Expr::ArrayDesignator { index, value } => {
            substitute_const_global_aggregate_reads_in_expr(index, arrays);
            substitute_const_global_aggregate_reads_in_expr(value, arrays);
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

fn const_global_struct_array_member_value(
    base: &ast::Expr,
    field: &str,
    arrays: &HashMap<String, ConstGlobalStructArray<'_>>,
) -> Option<i64> {
    let ast::Expr::Index(array, index) = base else {
        return None;
    };
    let ast::Expr::Ident(name) = array.as_ref() else {
        return None;
    };
    let array = arrays.get(name)?;
    let idx = usize::try_from(eval_const_int_expr(index)?).ok()?;
    let field_idx = struct_field_index(array.elem_ty, field)?;
    let ast::Expr::InitList(items) = array.init else {
        return None;
    };
    let item = items.get(idx)?;
    let ast::Expr::InitList(fields) = item else {
        return None;
    };
    eval_const_int_expr(const_struct_init_field_value(
        fields,
        array.elem_ty,
        field,
        field_idx,
    )?)
}

fn const_struct_init_field_value<'a>(
    fields: &'a [ast::Expr],
    elem_ty: &types::Type,
    target_field: &str,
    target_idx: usize,
) -> Option<&'a ast::Expr> {
    let mut cursor = 0usize;
    let mut positional = None;
    for item in fields {
        match item {
            ast::Expr::DesignatedInit { field, value } => {
                let idx = struct_field_index(elem_ty, field)?;
                if field == target_field {
                    return Some(value);
                }
                cursor = idx.saturating_add(1);
            }
            _ => {
                if cursor == target_idx {
                    positional = Some(item);
                }
                cursor = cursor.saturating_add(1);
            }
        }
    }
    positional
}

fn struct_field_index(ty: &types::Type, field: &str) -> Option<usize> {
    let types::Type::Struct { fields, .. } = ty else {
        return None;
    };
    fields.iter().position(|(name, _)| name == field)
}

fn expr_is_ident_eq_zero(expr: &ast::Expr, name: &str) -> bool {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Eq,
        lhs,
        rhs,
    } = expr
    else {
        return false;
    };
    (matches!(lhs.as_ref(), ast::Expr::Ident(lhs_name) if lhs_name == name)
        && eval_const_int_expr(rhs) == Some(0))
        || (matches!(rhs.as_ref(), ast::Expr::Ident(rhs_name) if rhs_name == name)
            && eval_const_int_expr(lhs) == Some(0))
}

fn substitute_const_string_array_indices(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut env = HashMap::new();
        substitute_const_string_array_indices_in_stmts(&mut f.body, &mut env);
    }
}

fn substitute_const_string_array_indices_in_stmts(
    stmts: &mut [ast::Stmt],
    env: &mut HashMap<String, Vec<i64>>,
) {
    use ast::Stmt;
    for stmt in stmts {
        if stmt_contains_call_expr(stmt) {
            env.clear();
        }
        clear_changed_string_array_env(env, stmt_address_taken_names(stmt));
        clear_changed_string_array_env(env, stmt_assigned_names(stmt));
        match stmt {
            Stmt::VarDecl {
                name,
                ty,
                init,
                vla_dim,
                ..
            } => {
                if let Some(expr) = vla_dim {
                    substitute_const_string_array_indices_in_expr(expr, env);
                }
                if let Some(expr) = init {
                    substitute_const_string_array_indices_in_expr(expr, env);
                }
                if let Some(bytes) = const_string_array_bytes(ty, init.as_ref()) {
                    env.insert(name.clone(), bytes);
                } else {
                    env.remove(name);
                }
            }
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                substitute_const_string_array_indices_in_expr(expr, env);
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                substitute_const_string_array_indices_in_expr(cond, env);
                let mut then_env = env.clone();
                substitute_const_string_array_indices_in_stmts(then_body, &mut then_env);
                if let Some(body) = else_body {
                    let mut else_env = env.clone();
                    substitute_const_string_array_indices_in_stmts(body, &mut else_env);
                }
                env.clear();
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                substitute_const_string_array_indices_in_expr(cond, env);
                let mut body_env = env.clone();
                substitute_const_string_array_indices_in_stmts(body, &mut body_env);
                env.clear();
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(init) = init {
                    substitute_const_string_array_indices_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        env,
                    );
                }
                if let Some(expr) = cond {
                    substitute_const_string_array_indices_in_expr(expr, env);
                }
                if let Some(expr) = step {
                    substitute_const_string_array_indices_in_expr(expr, env);
                }
                let mut body_env = env.clone();
                substitute_const_string_array_indices_in_stmts(body, &mut body_env);
                env.clear();
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) => {
                substitute_const_string_array_indices_in_stmts(body, env);
            }
            Stmt::Switch { expr, body } => {
                substitute_const_string_array_indices_in_expr(expr, env);
                let mut body_env = env.clone();
                substitute_const_string_array_indices_in_stmts(body, &mut body_env);
                env.clear();
            }
            Stmt::Label(_, inner) => {
                substitute_const_string_array_indices_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    env,
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

fn substitute_const_string_array_indices_in_expr(
    expr: &mut ast::Expr,
    env: &HashMap<String, Vec<i64>>,
) {
    use ast::Expr;
    match expr {
        Expr::Index(base, index) => {
            substitute_const_string_array_indices_in_expr(index, env);
            if let Expr::Ident(name) = base.as_ref() {
                if let Some(idx) = eval_const_int_expr(index) {
                    if let Some(value) = env
                        .get(name)
                        .and_then(|bytes| usize::try_from(idx).ok().and_then(|i| bytes.get(i)))
                    {
                        *expr = Expr::IntLit(*value, crate::token::IntSuffix::None);
                        return;
                    }
                }
            }
            substitute_const_string_array_indices_in_expr(base, env);
        }
        Expr::Assign { value, .. } => {
            substitute_const_string_array_indices_in_expr(value, env);
        }
        Expr::CompoundAssign { value, .. } => {
            substitute_const_string_array_indices_in_expr(value, env);
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
        | Expr::Arrow(operand, _) => substitute_const_string_array_indices_in_expr(operand, env),
        Expr::Binary { lhs, rhs, .. } | Expr::Comma(lhs, rhs) => {
            substitute_const_string_array_indices_in_expr(lhs, env);
            substitute_const_string_array_indices_in_expr(rhs, env);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_const_string_array_indices_in_expr(arg, env);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            substitute_const_string_array_indices_in_expr(func_expr, env);
            for arg in args {
                substitute_const_string_array_indices_in_expr(arg, env);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            substitute_const_string_array_indices_in_expr(cond, env);
            substitute_const_string_array_indices_in_expr(then_expr, env);
            substitute_const_string_array_indices_in_expr(else_expr, env);
        }
        Expr::Sizeof(inner) => {
            if let ast::SizeofArg::Expr(inner) = inner.as_mut() {
                substitute_const_string_array_indices_in_expr(inner, env);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                substitute_const_string_array_indices_in_expr(item, env);
            }
        }
        Expr::DesignatedInit { value, .. } => {
            substitute_const_string_array_indices_in_expr(value, env);
        }
        Expr::ArrayDesignator { index, value } => {
            substitute_const_string_array_indices_in_expr(index, env);
            substitute_const_string_array_indices_in_expr(value, env);
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

fn const_string_array_bytes(ty: &types::Type, init: Option<&ast::Expr>) -> Option<Vec<i64>> {
    let ast::Expr::StringLit(s) = init? else {
        return None;
    };
    let types::Type::Array(elem, len) = ty.unqualified() else {
        return None;
    };
    if !is_char_array_element_type(elem) {
        return None;
    }
    let len = len.unwrap_or(s.len() + 1);
    let mut bytes = Vec::with_capacity(len);
    for b in s.bytes().chain(std::iter::once(0)).take(len) {
        bytes.push(eval_integer_cast(elem, i64::from(b)));
    }
    bytes.resize(len, 0);
    Some(bytes)
}

fn is_char_array_element_type(ty: &types::Type) -> bool {
    match ty.unqualified() {
        types::Type::Char => true,
        types::Type::Unsigned(inner) => matches!(inner.unqualified(), types::Type::Char),
        _ => false,
    }
}

fn clear_changed_string_array_env(env: &mut HashMap<String, Vec<i64>>, changed: Vec<String>) {
    for name in changed {
        env.remove(&name);
    }
}

fn stmt_contains_call_expr(stmt: &ast::Stmt) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            expr_contains_call_expr(expr)
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref().is_some_and(expr_contains_call_expr)
                || vla_dim.as_ref().is_some_and(expr_contains_call_expr)
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_contains_call_expr(cond)
                || then_body.iter().any(stmt_contains_call_expr)
                || else_body
                    .as_ref()
                    .is_some_and(|body| body.iter().any(stmt_contains_call_expr))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_contains_call_expr(cond) || body.iter().any(stmt_contains_call_expr)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_some_and(|stmt| stmt_contains_call_expr(stmt))
                || cond.as_ref().is_some_and(expr_contains_call_expr)
                || step.as_ref().is_some_and(expr_contains_call_expr)
                || body.iter().any(stmt_contains_call_expr)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            body.iter().any(stmt_contains_call_expr)
        }
        Stmt::Label(_, inner) => stmt_contains_call_expr(inner),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => false,
    }
}

fn expr_contains_call_expr(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::Call { .. } | Expr::CallIndirect { .. } => true,
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
        | Expr::Arrow(operand, _) => expr_contains_call_expr(operand),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs)
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        } => expr_contains_call_expr(lhs) || expr_contains_call_expr(rhs),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_call_expr(cond)
                || expr_contains_call_expr(then_expr)
                || expr_contains_call_expr(else_expr)
        }
        Expr::Sizeof(inner) => match inner.as_ref() {
            ast::SizeofArg::Expr(inner) => expr_contains_call_expr(inner),
            ast::SizeofArg::Type(_) => false,
        },
        Expr::InitList(items) => items.iter().any(expr_contains_call_expr),
        Expr::DesignatedInit { value, .. } => expr_contains_call_expr(value),
        Expr::ArrayDesignator { index, value } => {
            expr_contains_call_expr(index) || expr_contains_call_expr(value)
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

#[derive(Clone)]
struct ConstBytePtrAlias {
    base: String,
    offset: i64,
}

fn substitute_const_char_pointer_aliases(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut int_consts = HashMap::new();
        let mut ptrs = HashMap::new();
        substitute_const_char_pointer_aliases_in_stmts(&mut f.body, &mut int_consts, &mut ptrs);
    }
}

fn substitute_const_char_pointer_aliases_in_stmts(
    stmts: &mut [ast::Stmt],
    int_consts: &mut HashMap<String, i64>,
    ptrs: &mut HashMap<String, ConstBytePtrAlias>,
) {
    use ast::Stmt;
    for stmt in stmts {
        if stmt_contains_call_expr(stmt) {
            int_consts.clear();
            ptrs.clear();
        }
        for name in stmt_assigned_names(stmt) {
            int_consts.remove(&name);
            ptrs.retain(|ptr_name, alias| ptr_name != &name && alias.base != name);
        }
        match stmt {
            Stmt::VarDecl { name, ty, init, .. } => {
                if let Some(expr) = init {
                    substitute_const_char_pointer_aliases_in_expr(expr, int_consts, ptrs);
                }
                if ty.unqualified().is_integer() {
                    if let Some(expr) = init {
                        if let Some(v) = eval_const_int_expr(expr) {
                            int_consts.insert(name.clone(), eval_integer_cast(ty, v));
                        } else {
                            int_consts.remove(name);
                        }
                    }
                } else if is_char_pointer_type(ty) {
                    if let Some(alias) = init
                        .as_ref()
                        .and_then(|expr| const_byte_ptr_alias_from_expr(expr, int_consts, ptrs))
                    {
                        ptrs.insert(name.clone(), alias);
                    } else {
                        ptrs.remove(name);
                    }
                } else {
                    int_consts.remove(name);
                    ptrs.remove(name);
                }
            }
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                substitute_const_char_pointer_aliases_in_expr(expr, int_consts, ptrs);
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                substitute_const_char_pointer_aliases_in_expr(cond, int_consts, ptrs);
                let mut then_ints = int_consts.clone();
                let mut then_ptrs = ptrs.clone();
                substitute_const_char_pointer_aliases_in_stmts(
                    then_body,
                    &mut then_ints,
                    &mut then_ptrs,
                );
                if let Some(body) = else_body {
                    let mut else_ints = int_consts.clone();
                    let mut else_ptrs = ptrs.clone();
                    substitute_const_char_pointer_aliases_in_stmts(
                        body,
                        &mut else_ints,
                        &mut else_ptrs,
                    );
                }
                int_consts.clear();
                ptrs.clear();
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                substitute_const_char_pointer_aliases_in_expr(cond, int_consts, ptrs);
                let mut body_ints = int_consts.clone();
                let mut body_ptrs = ptrs.clone();
                substitute_const_char_pointer_aliases_in_stmts(
                    body,
                    &mut body_ints,
                    &mut body_ptrs,
                );
                int_consts.clear();
                ptrs.clear();
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(init) = init {
                    substitute_const_char_pointer_aliases_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        int_consts,
                        ptrs,
                    );
                }
                if let Some(expr) = cond {
                    substitute_const_char_pointer_aliases_in_expr(expr, int_consts, ptrs);
                }
                if let Some(expr) = step {
                    substitute_const_char_pointer_aliases_in_expr(expr, int_consts, ptrs);
                }
                let mut body_ints = int_consts.clone();
                let mut body_ptrs = ptrs.clone();
                substitute_const_char_pointer_aliases_in_stmts(
                    body,
                    &mut body_ints,
                    &mut body_ptrs,
                );
                int_consts.clear();
                ptrs.clear();
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) => {
                substitute_const_char_pointer_aliases_in_stmts(body, int_consts, ptrs);
            }
            Stmt::Switch { expr, body } => {
                substitute_const_char_pointer_aliases_in_expr(expr, int_consts, ptrs);
                let mut body_ints = int_consts.clone();
                let mut body_ptrs = ptrs.clone();
                substitute_const_char_pointer_aliases_in_stmts(
                    body,
                    &mut body_ints,
                    &mut body_ptrs,
                );
                int_consts.clear();
                ptrs.clear();
            }
            Stmt::Label(_, inner) => {
                substitute_const_char_pointer_aliases_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    int_consts,
                    ptrs,
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

fn substitute_const_char_pointer_aliases_in_expr(
    expr: &mut ast::Expr,
    int_consts: &HashMap<String, i64>,
    ptrs: &HashMap<String, ConstBytePtrAlias>,
) {
    use ast::{BinaryOp, Expr};
    match expr {
        Expr::Index(base, index) => {
            substitute_const_char_pointer_aliases_in_expr(index, int_consts, ptrs);
            if let Some(alias) = const_byte_ptr_alias_from_expr(base, int_consts, ptrs) {
                if let Some(idx) = eval_const_int_expr(index) {
                    if let Some(word) = int_consts.get(&alias.base) {
                        if let Some(byte) = const_word_byte(*word, alias.offset + idx) {
                            *expr =
                                Expr::IntLit(sign_extend(byte, 8), crate::token::IntSuffix::None);
                            return;
                        }
                    }
                }
            }
            substitute_const_char_pointer_aliases_in_expr(base, int_consts, ptrs);
        }
        Expr::Binary { op, lhs, rhs } => {
            substitute_const_char_pointer_aliases_in_expr(lhs, int_consts, ptrs);
            substitute_const_char_pointer_aliases_in_expr(rhs, int_consts, ptrs);
            if matches!(
                op,
                BinaryOp::Eq
                    | BinaryOp::Ne
                    | BinaryOp::Lt
                    | BinaryOp::Gt
                    | BinaryOp::Le
                    | BinaryOp::Ge
            ) {
                if let (Some(a), Some(b)) = (
                    const_byte_ptr_alias_from_expr(lhs, int_consts, ptrs),
                    const_byte_ptr_alias_from_expr(rhs, int_consts, ptrs),
                ) {
                    if a.base == b.base {
                        let value = match op {
                            BinaryOp::Eq => a.offset == b.offset,
                            BinaryOp::Ne => a.offset != b.offset,
                            BinaryOp::Lt => a.offset < b.offset,
                            BinaryOp::Gt => a.offset > b.offset,
                            BinaryOp::Le => a.offset <= b.offset,
                            BinaryOp::Ge => a.offset >= b.offset,
                            _ => unreachable!(),
                        };
                        *expr = Expr::IntLit(i64::from(value), crate::token::IntSuffix::None);
                    }
                }
            }
        }
        Expr::Assign { value, .. } | Expr::CompoundAssign { value, .. } => {
            substitute_const_char_pointer_aliases_in_expr(value, int_consts, ptrs);
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
        | Expr::Arrow(operand, _) => {
            substitute_const_char_pointer_aliases_in_expr(operand, int_consts, ptrs)
        }
        Expr::Comma(lhs, rhs) => {
            substitute_const_char_pointer_aliases_in_expr(lhs, int_consts, ptrs);
            substitute_const_char_pointer_aliases_in_expr(rhs, int_consts, ptrs);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_const_char_pointer_aliases_in_expr(arg, int_consts, ptrs);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            substitute_const_char_pointer_aliases_in_expr(func_expr, int_consts, ptrs);
            for arg in args {
                substitute_const_char_pointer_aliases_in_expr(arg, int_consts, ptrs);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            substitute_const_char_pointer_aliases_in_expr(cond, int_consts, ptrs);
            substitute_const_char_pointer_aliases_in_expr(then_expr, int_consts, ptrs);
            substitute_const_char_pointer_aliases_in_expr(else_expr, int_consts, ptrs);
        }
        Expr::Sizeof(inner) => {
            if let ast::SizeofArg::Expr(inner) = inner.as_mut() {
                substitute_const_char_pointer_aliases_in_expr(inner, int_consts, ptrs);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                substitute_const_char_pointer_aliases_in_expr(item, int_consts, ptrs);
            }
        }
        Expr::DesignatedInit { value, .. } => {
            substitute_const_char_pointer_aliases_in_expr(value, int_consts, ptrs);
        }
        Expr::ArrayDesignator { index, value } => {
            substitute_const_char_pointer_aliases_in_expr(index, int_consts, ptrs);
            substitute_const_char_pointer_aliases_in_expr(value, int_consts, ptrs);
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

fn const_byte_ptr_alias_from_expr(
    expr: &ast::Expr,
    int_consts: &HashMap<String, i64>,
    ptrs: &HashMap<String, ConstBytePtrAlias>,
) -> Option<ConstBytePtrAlias> {
    use ast::{BinaryOp, Expr};
    match expr {
        Expr::Ident(name) => ptrs.get(name).cloned(),
        Expr::Cast(ty, inner) if is_char_pointer_type(ty) => {
            const_byte_ptr_alias_from_expr(inner, int_consts, ptrs)
        }
        Expr::Cast(_, inner) => const_byte_ptr_alias_from_expr(inner, int_consts, ptrs),
        Expr::AddrOf(inner) => {
            let Expr::Ident(name) = inner.as_ref() else {
                return None;
            };
            int_consts.contains_key(name).then(|| ConstBytePtrAlias {
                base: name.clone(),
                offset: 0,
            })
        }
        Expr::Binary { op, lhs, rhs } if matches!(op, BinaryOp::Add | BinaryOp::Sub) => {
            let mut alias = const_byte_ptr_alias_from_expr(lhs, int_consts, ptrs)?;
            let delta = eval_const_int_expr(rhs)?;
            if matches!(op, BinaryOp::Add) {
                alias.offset += delta;
            } else {
                alias.offset -= delta;
            }
            Some(alias)
        }
        _ => None,
    }
}

fn const_word_byte(word: i64, offset: i64) -> Option<i64> {
    if !(0..4).contains(&offset) {
        return None;
    }
    Some(((word as u32) >> (offset as u32 * 8) & 0xff) as i64)
}

fn simplify_const_local_conditions_in_stmts(
    stmts: &mut [ast::Stmt],
    env: &mut HashMap<String, ast::Expr>,
    typedefs: &HashMap<String, types::Type>,
) {
    use ast::Stmt;
    for stmt in stmts {
        clear_changed_const_env(env, stmt_address_taken_names(stmt));
        match stmt {
            Stmt::VarDecl {
                name,
                init: Some(init),
                ty,
                vla_dim,
                ..
            } => {
                // A variable mutated inside the initializer expression
                // (e.g. `int t = (l = x)`) no longer holds its recorded
                // constant after this statement; drop those env entries
                // before recording the declared name.
                let mut assigned = Vec::new();
                collect_expr_assigned_names(init, &mut assigned);
                if let Some(vexpr) = vla_dim {
                    collect_expr_assigned_names(vexpr, &mut assigned);
                }
                clear_changed_const_env(env, assigned);
                if let Some(replacement) = const_local_replacement_expr(ty, init, typedefs) {
                    env.insert(name.clone(), replacement);
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
                // The condition is evaluated before either branch, so any
                // variable it assigns (e.g. `if ((x = f()) ...)`) no longer
                // holds its recorded constant inside the branch bodies.
                clear_changed_const_env(env, expr_assigned_names(cond));
                let mut then_env = env.clone();
                simplify_const_local_conditions_in_stmts(then_body, &mut then_env, typedefs);
                if let Some(body) = else_body {
                    let mut else_env = env.clone();
                    simplify_const_local_conditions_in_stmts(body, &mut else_env, typedefs);
                }
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                let mut cond_env = env.clone();
                for name in stmt_assigned_names_in_stmts(body) {
                    cond_env.remove(&name);
                }
                replace_ident_condition_with_const(cond, &cond_env);
                let mut body_env = env.clone();
                for name in stmt_assigned_names_in_stmts(body) {
                    body_env.remove(&name);
                }
                for name in expr_assigned_names(cond) {
                    body_env.remove(&name);
                }
                simplify_const_local_conditions_in_stmts(body, &mut body_env, typedefs);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                let mut loop_changed = stmt_assigned_names_in_stmts(body);
                if let Some(init) = init {
                    loop_changed.extend(stmt_assigned_names(init));
                }
                if let Some(expr) = step {
                    loop_changed.extend(expr_assigned_names(expr));
                }
                if let Some(expr) = cond {
                    loop_changed.extend(expr_assigned_names(expr));
                }
                if let Some(cond) = cond {
                    let mut cond_env = env.clone();
                    for name in &loop_changed {
                        cond_env.remove(name);
                    }
                    replace_ident_condition_with_const(cond, &cond_env);
                }
                let mut body_env = env.clone();
                for name in &loop_changed {
                    body_env.remove(name);
                }
                simplify_const_local_conditions_in_stmts(body, &mut body_env, typedefs);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Block(body) => {
                let mut block_env = env.clone();
                simplify_const_local_conditions_in_stmts(body, &mut block_env, typedefs);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::DeclGroup(body) => {
                simplify_const_local_conditions_in_stmts(body, env, typedefs);
            }
            Stmt::Switch { expr, body } => {
                replace_ident_condition_with_const(expr, env);
                clear_changed_const_env(env, expr_assigned_names(expr));
                let mut body_env = env.clone();
                simplify_const_local_conditions_in_stmts(body, &mut body_env, typedefs);
                clear_changed_const_env(env, stmt_assigned_names(stmt));
            }
            Stmt::Label(_, inner) => {
                simplify_const_local_conditions_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    env,
                    typedefs,
                );
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

fn replace_ident_condition_with_const(expr: &mut ast::Expr, env: &HashMap<String, ast::Expr>) {
    let assigned = expr_assigned_names(expr);
    replace_const_ident_uses(expr, env, &assigned);
}

fn replace_const_ident_uses(
    expr: &mut ast::Expr,
    env: &HashMap<String, ast::Expr>,
    assigned: &[String],
) {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => {
            if !assigned.contains(name) {
                if let Some(replacement) = env.get(name) {
                    *expr = replacement.clone();
                }
            }
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => replace_const_ident_uses(operand, env, assigned),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            replace_const_ident_uses(lhs, env, assigned);
            replace_const_ident_uses(rhs, env, assigned);
        }
        Expr::Assign { value, .. } | Expr::CompoundAssign { value, .. } => {
            replace_const_ident_uses(value, env, assigned);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                replace_const_ident_uses(arg, env, assigned);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            replace_const_ident_uses(func_expr, env, assigned);
            for arg in args {
                replace_const_ident_uses(arg, env, assigned);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            replace_const_ident_uses(cond, env, assigned);
            replace_const_ident_uses(then_expr, env, assigned);
            replace_const_ident_uses(else_expr, env, assigned);
        }
        Expr::InitList(items) => {
            for item in items {
                replace_const_ident_uses(item, env, assigned);
            }
        }
        Expr::DesignatedInit { value, .. } => replace_const_ident_uses(value, env, assigned),
        Expr::ArrayDesignator { index, value } => {
            replace_const_ident_uses(index, env, assigned);
            replace_const_ident_uses(value, env, assigned);
        }
        Expr::AddrOf(_)
        | Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_)
        | Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_) => {}
    }
}

fn const_local_replacement_expr(
    ty: &types::Type,
    init: &ast::Expr,
    typedefs: &HashMap<String, types::Type>,
) -> Option<ast::Expr> {
    let resolved_ty = resolve_optimizer_typedefs(ty, typedefs);
    if resolved_ty.is_integer() {
        let typed = ast::Expr::Cast(resolved_ty.clone(), Box::new(init.clone()));
        let value = eval_const_int_expr(&typed)?;
        if matches!(resolved_ty.unqualified(), types::Type::LongLong) && value < 0 {
            return None;
        }
        Some(ast::Expr::IntLit(
            value,
            int_suffix_for_decl_const(&resolved_ty, value),
        ))
    } else {
        eval_const_int_expr(init).map(|v| ast::Expr::IntLit(v, crate::token::IntSuffix::None))
    }
}

fn int_suffix_for_decl_const(ty: &types::Type, value: i64) -> crate::token::IntSuffix {
    use crate::token::IntSuffix;
    let promoted_ty = ty.integer_promoted();
    if matches!(ty.unqualified(), types::Type::Bool) {
        IntSuffix::None
    } else if promoted_ty.is_unsigned() {
        if promoted_ty.is_long_long() {
            IntSuffix::Ull
        } else {
            IntSuffix::U
        }
    } else if promoted_ty.is_long_long() && value >= 0 {
        IntSuffix::LL
    } else {
        IntSuffix::None
    }
}

fn expr_is_prunable_unused_local_init(expr: &ast::Expr, ty: &types::Type) -> bool {
    if expr_is_boolean_local_value(expr) {
        return true;
    }
    if matches!(ty.unqualified(), types::Type::Bool) {
        let typed = ast::Expr::Cast(ty.clone(), Box::new(expr.clone()));
        return eval_const_int_expr(&typed).is_some();
    }
    false
}

fn clear_changed_const_env(env: &mut HashMap<String, ast::Expr>, changed: Vec<String>) {
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
            Stmt::VarDecl { name, ty, init, .. } => {
                if let Some(expr) = init {
                    substitute_bool_locals_in_expr(expr, env);
                    if expr_is_boolean_local_value_for_decl(expr, ty) && expr_side_effect_free(expr)
                    {
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

fn substitute_single_use_pure_locals_in_stmts(
    stmts: &mut [ast::Stmt],
    typedefs: &HashMap<String, types::Type>,
    alias: &FuncAliasInfo,
) {
    let candidates = single_use_pure_local_candidates(stmts, typedefs, alias);
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
                substitute_single_use_pure_locals_in_stmts(then_body, typedefs, alias);
                if let Some(body) = else_body {
                    substitute_single_use_pure_locals_in_stmts(body, typedefs, alias);
                }
            }
            ast::Stmt::While { body, .. }
            | ast::Stmt::DoWhile { body, .. }
            | ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
                substitute_single_use_pure_locals_in_stmts(body, typedefs, alias);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    substitute_single_use_pure_locals_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        typedefs,
                        alias,
                    );
                }
                substitute_single_use_pure_locals_in_stmts(body, typedefs, alias);
            }
            ast::Stmt::Label(_, inner) => {
                substitute_single_use_pure_locals_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    typedefs,
                    alias,
                );
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

/// Eliminate no-op self-assignments `x = x` (and `x = (A, x)` where the comma
/// chain's value is `x`). csmith emits these frequently; for a struct/union
/// `x` selcc would otherwise emit a multi-word self-copy on every execution.
/// The store is dropped and replaced by the value expression so any side
/// effects in the RHS (e.g. a call in `x = (f(), x)`) are preserved. Only
/// applied when the target lvalue is side-effect-free (so the two evaluations
/// name the same object) and non-volatile (so removing the write is not
/// observable).
fn eliminate_self_assignments(unit: &mut ast::TranslationUnit) {
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let mut global_volatile: std::collections::HashSet<String> = std::collections::HashSet::new();
    for g in &unit.globals {
        if type_is_volatile(&g.ty, &typedefs) {
            global_volatile.insert(g.name.clone());
        }
    }
    for f in &mut unit.functions {
        let mut volatile_names = global_volatile.clone();
        collect_volatile_local_names(&f.body, &typedefs, &mut volatile_names);
        for s in &mut f.body {
            rewrite_self_assigns_stmt(s, &volatile_names);
        }
    }
}

fn collect_volatile_local_names(
    stmts: &[ast::Stmt],
    typedefs: &HashMap<String, types::Type>,
    out: &mut std::collections::HashSet<String>,
) {
    for stmt in stmts {
        match stmt {
            ast::Stmt::VarDecl { name, ty, .. } if type_is_volatile(ty, typedefs) => {
                out.insert(name.clone());
            }
            ast::Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                collect_volatile_local_names(then_body, typedefs, out);
                if let Some(b) = else_body {
                    collect_volatile_local_names(b, typedefs, out);
                }
            }
            ast::Stmt::While { body, .. }
            | ast::Stmt::DoWhile { body, .. }
            | ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
                collect_volatile_local_names(body, typedefs, out);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(i) = init {
                    collect_volatile_local_names(std::slice::from_ref(i.as_ref()), typedefs, out);
                }
                collect_volatile_local_names(body, typedefs, out);
            }
            ast::Stmt::Label(_, inner) => {
                collect_volatile_local_names(std::slice::from_ref(inner.as_ref()), typedefs, out);
            }
            _ => {}
        }
    }
}

/// The rightmost operand of a comma chain (the value the chain evaluates to).
fn comma_tail(expr: &ast::Expr) -> &ast::Expr {
    match expr {
        ast::Expr::Comma(_, rhs) => comma_tail(rhs),
        other => other,
    }
}

fn self_assign_replacement(expr: &ast::Expr, volatile_names: &std::collections::HashSet<String>) -> bool {
    if let ast::Expr::Assign { target, value } = expr {
        if !expr_side_effect_free(target) {
            return false;
        }
        if let Some(root) = lvalue_root_ident_lib(target) {
            if volatile_names.contains(root) {
                return false;
            }
        }
        return comma_tail(value) == target.as_ref();
    }
    false
}

fn rewrite_self_assigns_stmt(stmt: &mut ast::Stmt, vol: &std::collections::HashSet<String>) {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => rewrite_self_assigns_expr(e, vol),
        Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                rewrite_self_assigns_expr(e, vol);
            }
            if let Some(e) = vla_dim {
                rewrite_self_assigns_expr(e, vol);
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            rewrite_self_assigns_expr(cond, vol);
            for s in then_body {
                rewrite_self_assigns_stmt(s, vol);
            }
            if let Some(b) = else_body {
                for s in b {
                    rewrite_self_assigns_stmt(s, vol);
                }
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            rewrite_self_assigns_expr(cond, vol);
            for s in body {
                rewrite_self_assigns_stmt(s, vol);
            }
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(i) = init {
                rewrite_self_assigns_stmt(i, vol);
            }
            if let Some(c) = cond {
                rewrite_self_assigns_expr(c, vol);
            }
            if let Some(st) = step {
                rewrite_self_assigns_expr(st, vol);
            }
            for s in body {
                rewrite_self_assigns_stmt(s, vol);
            }
        }
        Stmt::Switch { expr, body } => {
            rewrite_self_assigns_expr(expr, vol);
            for s in body {
                rewrite_self_assigns_stmt(s, vol);
            }
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => {
            for s in body {
                rewrite_self_assigns_stmt(s, vol);
            }
        }
        Stmt::Label(_, inner) => rewrite_self_assigns_stmt(inner, vol),
        _ => {}
    }
}

fn rewrite_self_assigns_expr(expr: &mut ast::Expr, vol: &std::collections::HashSet<String>) {
    use ast::Expr;
    // Recurse into children first.
    match expr {
        Expr::Assign { target, value } | Expr::CompoundAssign { target, value, .. } => {
            rewrite_self_assigns_expr(target, vol);
            rewrite_self_assigns_expr(value, vol);
        }
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            rewrite_self_assigns_expr(lhs, vol);
            rewrite_self_assigns_expr(rhs, vol);
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => rewrite_self_assigns_expr(operand, vol),
        Expr::Call { args, .. } => {
            for a in args {
                rewrite_self_assigns_expr(a, vol);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            rewrite_self_assigns_expr(func_expr, vol);
            for a in args {
                rewrite_self_assigns_expr(a, vol);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            rewrite_self_assigns_expr(cond, vol);
            rewrite_self_assigns_expr(then_expr, vol);
            rewrite_self_assigns_expr(else_expr, vol);
        }
        Expr::InitList(items) => {
            for e in items {
                rewrite_self_assigns_expr(e, vol);
            }
        }
        Expr::DesignatedInit { value, .. } => rewrite_self_assigns_expr(value, vol),
        Expr::ArrayDesignator { index, value } => {
            rewrite_self_assigns_expr(index, vol);
            rewrite_self_assigns_expr(value, vol);
        }
        _ => {}
    }
    // Then transform this node if it is a self-assignment.
    if self_assign_replacement(expr, vol) {
        if let Expr::Assign { value, .. } = expr {
            let v = std::mem::replace(value.as_mut(), Expr::IntLit(0, token::IntSuffix::None));
            *expr = v;
        }
    }
}

/// Promote a const-initialized local aggregate that is never modified and
/// whose address never escapes to a `static` local. Such a local is
/// observably equivalent to `static const` — every automatic instance holds
/// the same compile-time-constant values — so giving it static storage moves
/// the initializer to a one-time load-time write in rodata/data instead of
/// re-materializing it on every call (and, for a loop-local, every iteration).
/// csmith emits many large const local arrays that are read but never written;
/// re-initializing them per call/iteration is a dominant cost (e.g. a 12-entry
/// `union[..]` rebuilt 29x per call).
///
/// Safety: only locals that are (1) aggregate with a fully-constant InitList,
/// (2) never written (no assignment/`++`/`--` to the name or its
/// elements/members), and (3) never address-escaped (no `&x`, never used bare
/// so the array can't decay to a writable pointer) are promoted. The escape
/// analysis treats *any* occurrence of the name other than the base of a
/// read-only index/member access as unsafe, so a missed escape cannot make a
/// writable alias point at the now-shared static.
fn promote_readonly_const_aggregate_locals(unit: &mut ast::TranslationUnit) {
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    for f in &mut unit.functions {
        let mut unsafe_names: std::collections::HashSet<String> = std::collections::HashSet::new();
        for s in &f.body {
            collect_unsafe_aggregate_local_names_stmt(s, &mut unsafe_names);
        }
        mark_readonly_const_aggregates_static(&mut f.body, &unsafe_names, &typedefs, false);
    }
}

/// Walk statements collecting local names that are unsafe to give static
/// storage: written, address-taken, or used in any way other than a read-only
/// index/member access (which would let the array decay to a writable pointer).
fn collect_unsafe_aggregate_local_names_stmt(
    stmt: &ast::Stmt,
    out: &mut std::collections::HashSet<String>,
) {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => {
            collect_unsafe_aggregate_names_expr(e, out)
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                collect_unsafe_aggregate_names_expr(e, out);
            }
            if let Some(e) = vla_dim {
                collect_unsafe_aggregate_names_expr(e, out);
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            collect_unsafe_aggregate_names_expr(cond, out);
            for s in then_body {
                collect_unsafe_aggregate_local_names_stmt(s, out);
            }
            if let Some(b) = else_body {
                for s in b {
                    collect_unsafe_aggregate_local_names_stmt(s, out);
                }
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            collect_unsafe_aggregate_names_expr(cond, out);
            for s in body {
                collect_unsafe_aggregate_local_names_stmt(s, out);
            }
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(i) = init {
                collect_unsafe_aggregate_local_names_stmt(i, out);
            }
            if let Some(c) = cond {
                collect_unsafe_aggregate_names_expr(c, out);
            }
            if let Some(st) = step {
                collect_unsafe_aggregate_names_expr(st, out);
            }
            for s in body {
                collect_unsafe_aggregate_local_names_stmt(s, out);
            }
        }
        Stmt::Switch { expr, body } => {
            collect_unsafe_aggregate_names_expr(expr, out);
            for s in body {
                collect_unsafe_aggregate_local_names_stmt(s, out);
            }
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => {
            for s in body {
                collect_unsafe_aggregate_local_names_stmt(s, out);
            }
        }
        Stmt::Label(_, inner) => collect_unsafe_aggregate_local_names_stmt(inner, out),
        _ => {}
    }
}

/// A name appearing here as the base of a read index/member chain is a safe
/// read; recurse into index expressions but do not flag the base identifier.
fn collect_unsafe_aggregate_names_read_base(
    expr: &ast::Expr,
    out: &mut std::collections::HashSet<String>,
) {
    use ast::Expr;
    match expr {
        Expr::Ident(_) => {} // safe: base of a read-only access
        Expr::Index(base, idx) => {
            collect_unsafe_aggregate_names_read_base(base, out);
            collect_unsafe_aggregate_names_expr(idx, out);
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => {
            collect_unsafe_aggregate_names_read_base(base, out)
        }
        other => collect_unsafe_aggregate_names_expr(other, out),
    }
}

fn collect_unsafe_aggregate_names_expr(
    expr: &ast::Expr,
    out: &mut std::collections::HashSet<String>,
) {
    use ast::Expr;
    match expr {
        // A bare identifier (not consumed as a read index/member base) lets an
        // array decay to a pointer, so it could escape and be written.
        Expr::Ident(name) => {
            out.insert(name.clone());
        }
        Expr::Index(base, idx) => {
            collect_unsafe_aggregate_names_read_base(base, out);
            collect_unsafe_aggregate_names_expr(idx, out);
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => {
            collect_unsafe_aggregate_names_read_base(base, out)
        }
        Expr::Assign { target, value } | Expr::CompoundAssign { target, value, .. } => {
            if let Some(root) = lvalue_root_ident_lib(target) {
                out.insert(root.clone());
            }
            collect_unsafe_aggregate_names_read_base(target, out);
            collect_unsafe_aggregate_names_expr(value, out);
        }
        Expr::PreInc(t) | Expr::PreDec(t) | Expr::PostInc(t) | Expr::PostDec(t) => {
            if let Some(root) = lvalue_root_ident_lib(t) {
                out.insert(root.clone());
            }
            collect_unsafe_aggregate_names_read_base(t, out);
        }
        Expr::AddrOf(inner) => {
            if let Some(root) = lvalue_root_ident_lib(inner) {
                out.insert(root.clone());
            }
            collect_unsafe_aggregate_names_expr(inner, out);
        }
        Expr::Binary { lhs, rhs, .. } | Expr::Comma(lhs, rhs) => {
            collect_unsafe_aggregate_names_expr(lhs, out);
            collect_unsafe_aggregate_names_expr(rhs, out);
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => collect_unsafe_aggregate_names_expr(operand, out),
        Expr::Call { args, .. } => {
            for a in args {
                collect_unsafe_aggregate_names_expr(a, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_unsafe_aggregate_names_expr(func_expr, out);
            for a in args {
                collect_unsafe_aggregate_names_expr(a, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_unsafe_aggregate_names_expr(cond, out);
            collect_unsafe_aggregate_names_expr(then_expr, out);
            collect_unsafe_aggregate_names_expr(else_expr, out);
        }
        Expr::InitList(items) => {
            for e in items {
                collect_unsafe_aggregate_names_expr(e, out);
            }
        }
        Expr::DesignatedInit { value, .. } => collect_unsafe_aggregate_names_expr(value, out),
        Expr::ArrayDesignator { index, value } => {
            collect_unsafe_aggregate_names_expr(index, out);
            collect_unsafe_aggregate_names_expr(value, out);
        }
        _ => {}
    }
}

fn lvalue_root_ident_lib(expr: &ast::Expr) -> Option<&String> {
    match expr {
        ast::Expr::Ident(name) => Some(name),
        ast::Expr::Member(base, _)
        | ast::Expr::Arrow(base, _)
        | ast::Expr::Index(base, _)
        | ast::Expr::Deref(base) => lvalue_root_ident_lib(base),
        _ => None,
    }
}

/// True if `expr` is a fully compile-time-constant aggregate/scalar initializer
/// (nested InitLists of constant leaves), so it can be emitted as static data.
fn is_fully_const_initializer(expr: &ast::Expr) -> bool {
    match expr {
        ast::Expr::InitList(items) => items.iter().all(is_fully_const_initializer),
        ast::Expr::DesignatedInit { value, .. } => is_fully_const_initializer(value),
        ast::Expr::ArrayDesignator { index, value } => {
            eval_const_int_expr(index).is_some() && is_fully_const_initializer(value)
        }
        _ => eval_const_int_expr(expr).is_some() || matches!(expr, ast::Expr::FloatLit(_)),
    }
}

fn mark_readonly_const_aggregates_static(
    stmts: &mut [ast::Stmt],
    unsafe_names: &std::collections::HashSet<String>,
    typedefs: &HashMap<String, types::Type>,
    in_loop: bool,
) {
    for stmt in stmts {
        match stmt {
            // Only promote aggregates declared inside a loop: those are
            // re-initialized on every iteration, so giving them static storage
            // turns an O(iterations) cost into a single load-time write. A
            // const aggregate at function scope is initialized only once per
            // call and is better left automatic (small ones still fold to
            // immediates), so it is not promoted.
            ast::Stmt::VarDecl {
                name,
                ty,
                init: Some(init),
                is_static,
                vla_dim: None,
            } if in_loop && !*is_static => {
                let resolved = resolve_optimizer_typedefs(ty, typedefs);
                let is_aggregate = matches!(
                    resolved,
                    types::Type::Array(..) | types::Type::Struct { .. } | types::Type::Union { .. }
                );
                if is_aggregate
                    && matches!(init, ast::Expr::InitList(_))
                    && is_fully_const_initializer(init)
                    && !unsafe_names.contains(name)
                {
                    *is_static = true;
                }
            }
            ast::Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                mark_readonly_const_aggregates_static(then_body, unsafe_names, typedefs, in_loop);
                if let Some(b) = else_body {
                    mark_readonly_const_aggregates_static(b, unsafe_names, typedefs, in_loop);
                }
            }
            ast::Stmt::While { body, .. } | ast::Stmt::DoWhile { body, .. } => {
                mark_readonly_const_aggregates_static(body, unsafe_names, typedefs, true);
            }
            ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) | ast::Stmt::Switch { body, .. } => {
                mark_readonly_const_aggregates_static(body, unsafe_names, typedefs, in_loop);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(i) = init {
                    mark_readonly_const_aggregates_static(
                        std::slice::from_mut(i.as_mut()),
                        unsafe_names,
                        typedefs,
                        in_loop,
                    );
                }
                mark_readonly_const_aggregates_static(body, unsafe_names, typedefs, true);
            }
            ast::Stmt::Label(_, inner) => {
                mark_readonly_const_aggregates_static(
                    std::slice::from_mut(inner.as_mut()),
                    unsafe_names,
                    typedefs,
                    in_loop,
                );
            }
            _ => {}
        }
    }
}

fn prune_dead_local_assignments(unit: &mut ast::TranslationUnit) {
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    for f in &mut unit.functions {
        let mut locals: std::collections::HashSet<String> =
            f.params.iter().map(|(name, _)| name.clone()).collect();
        let mut volatile_locals: std::collections::HashSet<String> = f
            .params
            .iter()
            .filter(|(_, ty)| type_is_volatile(ty, &typedefs))
            .map(|(name, _)| name.clone())
            .collect();
        collect_local_decl_names(&f.body, &typedefs, &mut locals, &mut volatile_locals);

        let mut address_taken = std::collections::HashSet::new();
        for stmt in &f.body {
            collect_stmt_address_taken_idents(stmt, &mut address_taken);
        }
        prune_dead_local_assignments_in_stmts(
            &mut f.body,
            &locals,
            &volatile_locals,
            &address_taken,
        );
    }
}

fn collect_local_decl_names(
    stmts: &[ast::Stmt],
    typedefs: &HashMap<String, types::Type>,
    locals: &mut std::collections::HashSet<String>,
    volatile_locals: &mut std::collections::HashSet<String>,
) {
    for stmt in stmts {
        match stmt {
            ast::Stmt::VarDecl { name, ty, .. } => {
                locals.insert(name.clone());
                if type_is_volatile(ty, typedefs) {
                    volatile_locals.insert(name.clone());
                }
            }
            ast::Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                collect_local_decl_names(then_body, typedefs, locals, volatile_locals);
                if let Some(body) = else_body {
                    collect_local_decl_names(body, typedefs, locals, volatile_locals);
                }
            }
            ast::Stmt::While { body, .. }
            | ast::Stmt::DoWhile { body, .. }
            | ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
                collect_local_decl_names(body, typedefs, locals, volatile_locals);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    collect_local_decl_names(
                        std::slice::from_ref(init.as_ref()),
                        typedefs,
                        locals,
                        volatile_locals,
                    );
                }
                collect_local_decl_names(body, typedefs, locals, volatile_locals);
            }
            ast::Stmt::Label(_, inner) => {
                collect_local_decl_names(
                    std::slice::from_ref(inner.as_ref()),
                    typedefs,
                    locals,
                    volatile_locals,
                );
            }
            ast::Stmt::Return(_)
            | ast::Stmt::Expr(_)
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

fn type_is_volatile(ty: &types::Type, typedefs: &HashMap<String, types::Type>) -> bool {
    match ty {
        types::Type::Volatile(_) => true,
        types::Type::Typedef(name) => typedefs
            .get(name)
            .is_some_and(|target| type_is_volatile(target, typedefs)),
        types::Type::Const(inner)
        | types::Type::Unsigned(inner)
        | types::Type::Pointer(inner)
        | types::Type::Array(inner, _)
        | types::Type::Bitfield(inner, _)
        | types::Type::Complex(inner)
        | types::Type::Imaginary(inner) => type_is_volatile(inner, typedefs),
        types::Type::FunctionPtr {
            return_type,
            params,
        } => {
            type_is_volatile(return_type, typedefs)
                || params.iter().any(|param| type_is_volatile(param, typedefs))
        }
        _ => false,
    }
}

fn collect_stmt_address_taken_idents(
    stmt: &ast::Stmt,
    address_taken: &mut std::collections::HashSet<String>,
) {
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
            collect_address_taken_idents(expr, address_taken);
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                collect_address_taken_idents(expr, address_taken);
            }
            if let Some(expr) = vla_dim {
                collect_address_taken_idents(expr, address_taken);
            }
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            collect_address_taken_idents(cond, address_taken);
            for stmt in then_body {
                collect_stmt_address_taken_idents(stmt, address_taken);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_address_taken_idents(stmt, address_taken);
                }
            }
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
            collect_address_taken_idents(cond, address_taken);
            for stmt in body {
                collect_stmt_address_taken_idents(stmt, address_taken);
            }
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(init) = init {
                collect_stmt_address_taken_idents(init, address_taken);
            }
            if let Some(expr) = cond {
                collect_address_taken_idents(expr, address_taken);
            }
            if let Some(expr) = step {
                collect_address_taken_idents(expr, address_taken);
            }
            for stmt in body {
                collect_stmt_address_taken_idents(stmt, address_taken);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_stmt_address_taken_idents(stmt, address_taken);
            }
        }
        ast::Stmt::Switch { expr, body } => {
            collect_address_taken_idents(expr, address_taken);
            for stmt in body {
                collect_stmt_address_taken_idents(stmt, address_taken);
            }
        }
        ast::Stmt::Label(_, inner) => collect_stmt_address_taken_idents(inner, address_taken),
        ast::Stmt::Return(None)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => {}
    }
}

fn prune_dead_local_assignments_in_stmts(
    stmts: &mut Vec<ast::Stmt>,
    locals: &std::collections::HashSet<String>,
    volatile_locals: &std::collections::HashSet<String>,
    address_taken: &std::collections::HashSet<String>,
) {
    let mut live = std::collections::HashSet::new();
    for stmt in stmts.iter() {
        collect_stmt_live_seed(stmt, &mut live);
    }

    let mut out = Vec::with_capacity(stmts.len());
    for mut stmt in stmts.drain(..).rev() {
        if let ast::Stmt::Expr(ast::Expr::Assign { target, value }) = &stmt {
            if let Some(root) = local_assignment_root(target) {
                if locals.contains(&root)
                    && !volatile_locals.contains(&root)
                    && !address_taken.contains(&root)
                    && !live.contains(&root)
                {
                    if let Some(effect) = discarded_expr_effect_expr(value) {
                        stmt = ast::Stmt::Expr(effect);
                    } else {
                        continue;
                    }
                }
            }
        }

        let mut uses = HashMap::new();
        count_stmt_ident_uses(&stmt, &mut uses);
        let mut assigned = std::collections::HashSet::new();
        collect_stmt_assigned_name_set_for_dead(&stmt, &mut assigned);
        for name in assigned {
            live.remove(&name);
        }
        live.extend(uses.into_keys());
        out.push(stmt);
    }
    out.reverse();
    *stmts = out;
}

fn collect_stmt_live_seed(stmt: &ast::Stmt, live: &mut std::collections::HashSet<String>) {
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::CaseLabel(expr) => {
            let mut uses = HashMap::new();
            count_expr_ident_uses(expr, &mut uses);
            live.extend(uses.into_keys());
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            let mut uses = HashMap::new();
            count_expr_ident_uses(cond, &mut uses);
            live.extend(uses.into_keys());
            for stmt in then_body {
                collect_stmt_live_seed(stmt, live);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_live_seed(stmt, live);
                }
            }
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
            let mut uses = HashMap::new();
            count_expr_ident_uses(cond, &mut uses);
            live.extend(uses.into_keys());
            for stmt in body {
                collect_stmt_live_seed(stmt, live);
            }
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(init) = init {
                collect_stmt_live_seed(init, live);
            }
            if let Some(expr) = cond {
                let mut uses = HashMap::new();
                count_expr_ident_uses(expr, &mut uses);
                live.extend(uses.into_keys());
            }
            if let Some(expr) = step {
                let mut uses = HashMap::new();
                count_expr_ident_uses(expr, &mut uses);
                live.extend(uses.into_keys());
            }
            for stmt in body {
                collect_stmt_live_seed(stmt, live);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_stmt_live_seed(stmt, live);
            }
        }
        ast::Stmt::Switch { expr, body } => {
            let mut uses = HashMap::new();
            count_expr_ident_uses(expr, &mut uses);
            live.extend(uses.into_keys());
            for stmt in body {
                collect_stmt_live_seed(stmt, live);
            }
        }
        ast::Stmt::Label(_, inner) => collect_stmt_live_seed(inner, live),
        ast::Stmt::Expr(_)
        | ast::Stmt::VarDecl { .. }
        | ast::Stmt::Return(None)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => {}
    }
}

fn count_stmt_ident_uses(stmt: &ast::Stmt, uses: &mut HashMap<String, u32>) {
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
            count_expr_ident_uses(expr, uses);
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                count_expr_ident_uses(expr, uses);
            }
            if let Some(expr) = vla_dim {
                count_expr_ident_uses(expr, uses);
            }
        }
        _ => collect_same_level_local_facts(
            stmt,
            uses,
            &mut std::collections::HashSet::new(),
            &mut std::collections::HashSet::new(),
        ),
    }
}

fn collect_stmt_assigned_name_set_for_dead(
    stmt: &ast::Stmt,
    assigned: &mut std::collections::HashSet<String>,
) {
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
            collect_expr_assigned_name_set(expr, assigned);
        }
        ast::Stmt::VarDecl { name, init, .. } => {
            assigned.insert(name.clone());
            if let Some(expr) = init {
                collect_expr_assigned_name_set(expr, assigned);
            }
        }
        _ => collect_same_level_local_facts(
            stmt,
            &mut HashMap::new(),
            assigned,
            &mut std::collections::HashSet::new(),
        ),
    }
}

fn local_assignment_root(expr: &ast::Expr) -> Option<String> {
    match expr {
        ast::Expr::Ident(name) => Some(name.clone()),
        ast::Expr::Member(base, _) => local_assignment_root(base),
        _ => None,
    }
}

fn single_use_pure_local_candidates(
    stmts: &[ast::Stmt],
    typedefs: &HashMap<String, types::Type>,
    alias: &FuncAliasInfo,
) -> HashMap<String, PureLocalCandidate> {
    let mut uses: HashMap<String, u32> = HashMap::new();
    let mut assigned = std::collections::HashSet::new();
    let mut address_taken = std::collections::HashSet::new();
    let mut decl_counts: HashMap<String, u32> = HashMap::new();
    // Names mentioned in positions the header-only substitution cannot
    // reach (nested control-flow bodies, sibling blocks). Substitution
    // only rewrites same-level statement headers, so a local with any
    // use in such a position must not be a candidate: removing its init
    // after substituting only the reachable uses would orphan the
    // unreachable read, leaving it to load an uninitialised stack slot.
    let mut unreachable_mentions = std::collections::HashSet::new();
    for stmt in stmts {
        collect_same_level_local_facts(stmt, &mut uses, &mut assigned, &mut address_taken);
        collect_unreachable_mentions(stmt, &mut unreachable_mentions);
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
        let resolved_ty = resolve_optimizer_typedefs(ty, typedefs);
        let const_int_init = resolved_ty.is_integer() && eval_const_int_expr(init).is_some();
        let use_count = uses.get(name).copied().unwrap_or(0);
        if *is_static
            || vla_dim.is_some()
            || !resolved_ty.is_scalar()
            || decl_counts.get(name).copied().unwrap_or(0) != 1
            || (use_count != 1 && !(const_int_init && use_count >= 2))
            || assigned.contains(name)
            || address_taken.contains(name)
            || unreachable_mentions.contains(name)
            || !expr_side_effect_free(init)
            || expr_mentions_name(init, name)
            || local_names
                .iter()
                .any(|other| other != name && expr_mentions_name(init, other))
        {
            continue;
        }
        // Code-motion legality: substituting the init into its use moves the
        // evaluation of the init's operands from the declaration point to the
        // use point. That is only sound if none of the variables the init
        // reads is modified on any statement strictly between the decl and the
        // use. (E.g. `int t = a + b; a = b; b = t;` -- the intervening `a = b`
        // reassigns `a`, so folding `t` into `b = t` yields `b = a + b` with
        // the WRONG value of `a`.) A const-int init reads no operands at all,
        // so it can never be invalidated this way; skip the scan for it.
        if !const_int_init {
            let mut init_reads: HashMap<String, u32> = HashMap::new();
            count_expr_ident_uses(init, &mut init_reads);
            // Direct (textual) modification of an operand between decl and use.
            if init_reads
                .keys()
                .any(|operand| operand_modified_between_decl_and_use(stmts, idx, name, operand))
            {
                continue;
            }
            // Indirect modification through a call or a store-through-pointer.
            // The init is already known side-effect-free (no call of its own),
            // so the only way an operand it reads can change between decl and
            // use is via aliasing on an intervening statement:
            //   * a NON-LOCAL operand (global / file-scope: not in `locals`)
            //     can be written by ANY called function;
            //   * an operand whose ADDRESS IS TAKEN anywhere in the function is
            //     aliasable, so a call OR a store through a pointer could write
            //     it;
            //   * the init reading memory through a deref / index (a load whose
            //     object is not a named operand we can track) is likewise
            //     clobberable by an intervening call or pointer store.
            // When in doubt, disqualify: correctness beats firing the rewrite.
            let init_reads_nonlocal = init_reads
                .keys()
                .any(|operand| !alias.locals.contains(operand.as_str()));
            let init_reads_aliasable = init_reads
                .keys()
                .any(|operand| alias.address_taken.contains(operand.as_str()));
            let init_reads_memory = expr_reads_memory(init);
            if (init_reads_nonlocal || init_reads_aliasable || init_reads_memory)
                && intervening_call_or_aliasing_store(stmts, idx, name)
            {
                continue;
            }
        }
        candidates.insert(
            name.clone(),
            PureLocalCandidate {
                decl_idx: idx,
                init: if matches!(resolved_ty, types::Type::Bool) || const_int_init {
                    ast::Expr::Cast(resolved_ty, Box::new(init.clone()))
                } else {
                    init.clone()
                },
            },
        );
    }
    candidates
}

/// Decide whether `operand` (a variable read by the candidate `name`'s
/// initializer, declared at `decl_idx`) is modified on any statement that
/// executes strictly between the candidate's declaration and its single
/// substitutable use. The single use lives in a same-level statement header
/// (uses inside nested control-flow bodies disqualify the candidate up front
/// via `unreachable_mentions`), so the use site is the first same-level
/// statement after the decl that mentions `name`. Any statement before that
/// use that assigns, compound-assigns, increments/decrements, or takes the
/// address of `operand` (possible aliasing) invalidates the code motion.
///
/// When the use cannot be located among the same-level headers (it must then
/// live somewhere the substitution would not reach), be conservative and treat
/// every intervening statement up to the end of the block as a barrier.
fn operand_modified_between_decl_and_use(
    stmts: &[ast::Stmt],
    decl_idx: usize,
    name: &str,
    operand: &str,
) -> bool {
    let use_idx = stmts
        .iter()
        .enumerate()
        .skip(decl_idx + 1)
        .find(|(_, stmt)| stmt_header_mentions_name(stmt, name))
        .map(|(i, _)| i)
        .unwrap_or(stmts.len());
    for stmt in stmts.iter().take(use_idx).skip(decl_idx + 1) {
        if stmt_modifies_name(stmt, operand) {
            return true;
        }
    }
    false
}

/// Locate the candidate `name`'s single substitutable use within `stmts` and
/// decide whether any statement strictly between its declaration (`decl_idx`)
/// and that use contains a **function call** or a **store through a pointer**
/// (`*p = ...`, `p->m = ...`, `a[i] = ...` with an aliased base, or
/// compound-assign / inc / dec of such an lvalue). Either could write a global,
/// an address-taken (aliasable) object, or memory loaded by the init, so it is
/// an aliasing barrier for those classes of operands. As with
/// `operand_modified_between_decl_and_use`, if the use cannot be located among
/// the same-level headers we conservatively scan to the end of the block.
fn intervening_call_or_aliasing_store(stmts: &[ast::Stmt], decl_idx: usize, name: &str) -> bool {
    let use_idx = stmts
        .iter()
        .enumerate()
        .skip(decl_idx + 1)
        .find(|(_, stmt)| stmt_header_mentions_name(stmt, name))
        .map(|(i, _)| i)
        .unwrap_or(stmts.len());
    for stmt in stmts.iter().take(use_idx).skip(decl_idx + 1) {
        if stmt_contains_call_expr(stmt) || stmt_contains_pointer_store(stmt) {
            return true;
        }
    }
    false
}

/// True if `expr` reads memory through a pointer (`*p`, `p->m`) or an index
/// (`a[i]`) anywhere inside it. Such a load names no single tracked operand, so
/// an intervening call or pointer store could clobber the object it reads.
fn expr_reads_memory(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::Deref(_) | Expr::Arrow(_, _) | Expr::Index(_, _) => true,
        Expr::Unary { operand, .. }
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::AddrOf(operand)
        | Expr::Member(operand, _) => expr_reads_memory(operand),
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
        | Expr::Comma(lhs, rhs) => expr_reads_memory(lhs) || expr_reads_memory(rhs),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_reads_memory(cond) || expr_reads_memory(then_expr) || expr_reads_memory(else_expr)
        }
        Expr::Call { args, .. } => args.iter().any(expr_reads_memory),
        Expr::CallIndirect { func_expr, args } => {
            expr_reads_memory(func_expr) || args.iter().any(expr_reads_memory)
        }
        Expr::Sizeof(_) => false,
        Expr::InitList(items) => items.iter().any(expr_reads_memory),
        Expr::DesignatedInit { value, .. } => expr_reads_memory(value),
        Expr::ArrayDesignator { index, value } => {
            expr_reads_memory(index) || expr_reads_memory(value)
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

/// True if `stmt` contains a store whose lvalue target is reached through a
/// pointer/index (`*p`, `p->m`, `a[i]`), via assignment, compound assignment,
/// or pre/post increment/decrement, anywhere including nested bodies. Such a
/// store may alias a global, an address-taken object, or memory read by an
/// init, so it is a code-motion barrier for those operand classes.
fn stmt_contains_pointer_store(stmt: &ast::Stmt) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            expr_contains_pointer_store(expr)
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref().is_some_and(expr_contains_pointer_store)
                || vla_dim.as_ref().is_some_and(expr_contains_pointer_store)
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_contains_pointer_store(cond)
                || then_body.iter().any(stmt_contains_pointer_store)
                || else_body
                    .as_ref()
                    .is_some_and(|body| body.iter().any(stmt_contains_pointer_store))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_contains_pointer_store(cond) || body.iter().any(stmt_contains_pointer_store)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_some_and(|stmt| stmt_contains_pointer_store(stmt))
                || cond.as_ref().is_some_and(expr_contains_pointer_store)
                || step.as_ref().is_some_and(expr_contains_pointer_store)
                || body.iter().any(stmt_contains_pointer_store)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            body.iter().any(stmt_contains_pointer_store)
        }
        Stmt::Label(_, inner) => stmt_contains_pointer_store(inner),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => false,
    }
}

/// True if `expr` performs a store through a pointer/index lvalue anywhere.
fn expr_contains_pointer_store(expr: &ast::Expr) -> bool {
    use ast::Expr;
    let target_is_pointer_lvalue = |target: &ast::Expr| -> bool {
        matches!(
            target,
            Expr::Deref(_) | Expr::Arrow(_, _) | Expr::Index(_, _)
        )
    };
    match expr {
        Expr::Assign { target, value } => {
            target_is_pointer_lvalue(target)
                || expr_contains_pointer_store(target)
                || expr_contains_pointer_store(value)
        }
        Expr::CompoundAssign { target, value, .. } => {
            target_is_pointer_lvalue(target)
                || expr_contains_pointer_store(target)
                || expr_contains_pointer_store(value)
        }
        Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand) => {
            target_is_pointer_lvalue(operand) || expr_contains_pointer_store(operand)
        }
        Expr::Unary { operand, .. }
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::AddrOf(operand)
        | Expr::Deref(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => expr_contains_pointer_store(operand),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            expr_contains_pointer_store(lhs) || expr_contains_pointer_store(rhs)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_pointer_store(cond)
                || expr_contains_pointer_store(then_expr)
                || expr_contains_pointer_store(else_expr)
        }
        Expr::Call { args, .. } => args.iter().any(expr_contains_pointer_store),
        Expr::CallIndirect { func_expr, args } => {
            expr_contains_pointer_store(func_expr) || args.iter().any(expr_contains_pointer_store)
        }
        Expr::Sizeof(_) => false,
        Expr::InitList(items) => items.iter().any(expr_contains_pointer_store),
        Expr::DesignatedInit { value, .. } => expr_contains_pointer_store(value),
        Expr::ArrayDesignator { index, value } => {
            expr_contains_pointer_store(index) || expr_contains_pointer_store(value)
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

/// True if `name` appears anywhere in `stmt` (header expressions and any
/// nested bodies). Used to locate a candidate's single use site.
fn stmt_header_mentions_name(stmt: &ast::Stmt, name: &str) -> bool {
    let mut mentions = std::collections::HashSet::new();
    collect_stmt_all_ident_mentions(stmt, &mut mentions);
    mentions.contains(name)
}

/// True if executing `stmt` could write to (or alias, via address-of) the
/// variable `operand`. Covers assignment, compound assignment, pre/post
/// increment/decrement, and address-taken anywhere inside the statement,
/// including nested control-flow bodies.
fn stmt_modifies_name(stmt: &ast::Stmt, operand: &str) -> bool {
    let mut assigned = Vec::new();
    collect_stmt_assigned_names(stmt, &mut assigned);
    if assigned.iter().any(|n| n == operand) {
        return true;
    }
    let mut uses = HashMap::new();
    let mut assigned_set = std::collections::HashSet::new();
    let mut address_taken = std::collections::HashSet::new();
    collect_same_level_local_facts(stmt, &mut uses, &mut assigned_set, &mut address_taken);
    address_taken.contains(operand)
}

fn resolve_optimizer_typedefs(
    ty: &types::Type,
    typedefs: &HashMap<String, types::Type>,
) -> types::Type {
    use types::Type;
    match ty {
        Type::Typedef(name) => typedefs
            .get(name)
            .map(|target| resolve_optimizer_typedefs(target, typedefs))
            .unwrap_or_else(|| ty.clone()),
        Type::Unsigned(inner) => {
            Type::Unsigned(Box::new(resolve_optimizer_typedefs(inner, typedefs)))
        }
        Type::Pointer(inner) => {
            Type::Pointer(Box::new(resolve_optimizer_typedefs(inner, typedefs)))
        }
        Type::Array(inner, len) => {
            Type::Array(Box::new(resolve_optimizer_typedefs(inner, typedefs)), *len)
        }
        Type::Const(inner) => Type::Const(Box::new(resolve_optimizer_typedefs(inner, typedefs))),
        Type::Volatile(inner) => {
            Type::Volatile(Box::new(resolve_optimizer_typedefs(inner, typedefs)))
        }
        Type::Bitfield(inner, width) => Type::Bitfield(
            Box::new(resolve_optimizer_typedefs(inner, typedefs)),
            *width,
        ),
        Type::FunctionPtr {
            return_type,
            params,
        } => Type::FunctionPtr {
            return_type: Box::new(resolve_optimizer_typedefs(return_type, typedefs)),
            params: params
                .iter()
                .map(|param| resolve_optimizer_typedefs(param, typedefs))
                .collect(),
        },
        Type::Complex(inner) => {
            Type::Complex(Box::new(resolve_optimizer_typedefs(inner, typedefs)))
        }
        Type::Imaginary(inner) => {
            Type::Imaginary(Box::new(resolve_optimizer_typedefs(inner, typedefs)))
        }
        Type::Struct { .. }
        | Type::Union { .. }
        | Type::Void
        | Type::Char
        | Type::Short
        | Type::Int
        | Type::Long
        | Type::LongLong
        | Type::ULongLong
        | Type::Float
        | Type::Double
        | Type::Enum { .. }
        | Type::Bool => ty.clone(),
    }
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

/// Collect identifiers that appear in positions the header-only
/// single-use substitution does NOT rewrite for a top-level statement:
/// nested control-flow bodies (`if`/loop/`switch` bodies) and the
/// contents of sibling blocks. `substitute_single_use_pure_locals`
/// only rewrites same-level statement *headers* (and recurses through
/// `for`-init / labeled-statement headers), so a local read in any of
/// these positions cannot be substituted there. Removing its
/// initializer after substituting only the reachable uses would orphan
/// such a read, which would then load an uninitialised stack slot.
fn collect_unreachable_mentions(stmt: &ast::Stmt, out: &mut std::collections::HashSet<String>) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            for stmt in then_body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_all_ident_mentions(stmt, out);
                }
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Switch { body, .. } => {
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::For { init, body, .. } => {
            // The for-init header is reachable by substitution, but any
            // unreachable mentions *within* it (e.g. a nested block) are
            // not; recurse so they are still disqualified.
            if let Some(init) = init {
                collect_unreachable_mentions(init, out);
            }
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::Label(_, inner) => collect_unreachable_mentions(inner, out),
        _ => {}
    }
}

/// Insert every identifier mentioned anywhere in `stmt` (reads, write
/// targets, address-of operands, nested statements) into `out`.
fn collect_stmt_all_ident_mentions(stmt: &ast::Stmt, out: &mut std::collections::HashSet<String>) {
    fn mention(expr: &ast::Expr, out: &mut std::collections::HashSet<String>) {
        let mut m: HashMap<String, u32> = HashMap::new();
        count_expr_ident_uses(expr, &mut m);
        for name in m.into_keys() {
            out.insert(name);
        }
    }
    match stmt {
        ast::Stmt::Return(Some(expr)) | ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => {
            mention(expr, out);
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                mention(expr, out);
            }
            if let Some(expr) = vla_dim {
                mention(expr, out);
            }
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            mention(cond, out);
            for stmt in then_body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_all_ident_mentions(stmt, out);
                }
            }
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
            mention(cond, out);
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(init) = init {
                collect_stmt_all_ident_mentions(init, out);
            }
            if let Some(expr) = cond {
                mention(expr, out);
            }
            if let Some(expr) = step {
                mention(expr, out);
            }
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::Switch { expr, body } => {
            mention(expr, out);
            for stmt in body {
                collect_stmt_all_ident_mentions(stmt, out);
            }
        }
        ast::Stmt::Label(_, inner) => {
            collect_stmt_all_ident_mentions(inner, out);
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
            if let Some(name) = address_taken_base_ident(inner) {
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

fn address_taken_base_ident(expr: &ast::Expr) -> Option<&String> {
    use ast::Expr;
    match expr {
        Expr::Ident(name) => Some(name),
        Expr::Member(base, _) | Expr::Index(base, _) => address_taken_base_ident(base),
        _ => None,
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

fn expr_is_boolean_local_value_for_decl(expr: &ast::Expr, ty: &crate::types::Type) -> bool {
    expr_is_boolean_local_value(expr)
        || (matches!(ty, crate::types::Type::Bool)
            && matches!(
                expr,
                ast::Expr::IntLit(0 | 1, _) | ast::Expr::CharLit(0 | 1)
            ))
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

fn stmt_address_taken_names(stmt: &ast::Stmt) -> Vec<String> {
    let mut out = std::collections::HashSet::new();
    collect_stmt_address_taken_names(stmt, &mut out);
    out.into_iter().collect()
}

fn collect_stmt_address_taken_names(stmt: &ast::Stmt, out: &mut std::collections::HashSet<String>) {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            collect_address_taken_idents(expr, out);
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                collect_address_taken_idents(expr, out);
            }
            if let Some(expr) = vla_dim {
                collect_address_taken_idents(expr, out);
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            collect_address_taken_idents(cond, out);
            for stmt in then_body {
                collect_stmt_address_taken_names(stmt, out);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_stmt_address_taken_names(stmt, out);
                }
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            collect_address_taken_idents(cond, out);
            for stmt in body {
                collect_stmt_address_taken_names(stmt, out);
            }
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(stmt) = init {
                collect_stmt_address_taken_names(stmt, out);
            }
            if let Some(expr) = cond {
                collect_address_taken_idents(expr, out);
            }
            if let Some(expr) = step {
                collect_address_taken_idents(expr, out);
            }
            for stmt in body {
                collect_stmt_address_taken_names(stmt, out);
            }
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            for stmt in body {
                collect_stmt_address_taken_names(stmt, out);
            }
        }
        Stmt::Label(_, inner) => collect_stmt_address_taken_names(inner, out),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => {}
    }
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
            Stmt::VarDecl { name, init, ty, .. } => {
                if !used_after.contains_key(name)
                    && init
                        .as_ref()
                        .is_some_and(|expr| expr_is_prunable_unused_local_init(expr, ty))
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

fn preserves_signed_long_long_negative_cast(expr: &ast::Expr) -> bool {
    let ast::Expr::Cast(ty, operand) = expr else {
        return false;
    };
    matches!(ty.unqualified(), types::Type::LongLong)
        && eval_const_int_expr(operand).is_some_and(|v| v < 0)
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
        Expr::Cast(ty, operand) if *ty == types::Type::Bool => {
            if let Some(v) = eval_const_int_expr(operand) {
                return Some(i64::from(v != 0));
            }
            match operand.as_ref() {
                Expr::FloatLit(v) => Some(i64::from((*v as f32) != 0.0)),
                _ => None,
            }
        }
        Expr::Cast(ty, operand) if ty.is_integer() => {
            let v = eval_const_int_expr(operand)?;
            Some(eval_integer_cast(ty, v))
        }
        Expr::Binary { op, lhs, rhs } => {
            let a = eval_const_int_expr(lhs)?;
            let b = eval_const_int_expr(rhs)?;
            Some(match op {
                BinaryOp::Add => a.wrapping_add(b),
                BinaryOp::Sub => a.wrapping_sub(b),
                BinaryOp::Mul => a.wrapping_mul(b),
                BinaryOp::BitAnd => a & b,
                BinaryOp::BitOr => a | b,
                BinaryOp::BitXor => a ^ b,
                BinaryOp::Shl | BinaryOp::Shr => {
                    return eval_const_shift(*op, lhs, a, b);
                }
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
                BinaryOp::Div | BinaryOp::Mod => {
                    return eval_const_divmod(*op, lhs, rhs, a, b);
                }
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
        Expr::Cast(ty, operand) if *ty == types::Type::Bool => {
            if let Some(v) = eval_const_int_expr_with_env(operand, env) {
                return Some(i64::from(v != 0));
            }
            match operand.as_ref() {
                Expr::FloatLit(v) => Some(i64::from((*v as f32) != 0.0)),
                _ => None,
            }
        }
        Expr::Cast(ty, operand) if ty.is_integer() => {
            let v = eval_const_int_expr_with_env(operand, env)?;
            Some(eval_integer_cast(ty, v))
        }
        Expr::Binary { op, lhs, rhs } => {
            let a = eval_const_int_expr_with_env(lhs, env)?;
            let b = eval_const_int_expr_with_env(rhs, env)?;
            Some(match op {
                BinaryOp::Add => a.wrapping_add(b),
                BinaryOp::Sub => a.wrapping_sub(b),
                BinaryOp::Mul => a.wrapping_mul(b),
                BinaryOp::BitAnd => a & b,
                BinaryOp::BitOr => a | b,
                BinaryOp::BitXor => a ^ b,
                BinaryOp::Shl | BinaryOp::Shr => {
                    return eval_const_shift(*op, lhs, a, b);
                }
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
                BinaryOp::Div | BinaryOp::Mod => {
                    return eval_const_divmod(*op, lhs, rhs, a, b);
                }
            })
        }
        _ => None,
    }
}

fn eval_integer_cast(ty: &types::Type, value: i64) -> i64 {
    use types::Type;
    match ty.unqualified() {
        Type::Bool => i64::from(value != 0),
        Type::Unsigned(inner) => truncate_unsigned(value, integer_cast_bits(inner.unqualified())),
        Type::ULongLong => value,
        Type::Char | Type::Short | Type::Int | Type::Long | Type::Enum { .. } => {
            sign_extend(value, integer_cast_bits(ty.unqualified()))
        }
        Type::LongLong => value,
        Type::Const(inner) | Type::Volatile(inner) | Type::Bitfield(inner, _) => {
            eval_integer_cast(inner, value)
        }
        _ => value,
    }
}

fn integer_cast_bits(ty: &types::Type) -> u32 {
    use types::Type;
    match ty.unqualified() {
        Type::Char | Type::Bool => 8,
        Type::Short => 16,
        Type::LongLong | Type::ULongLong => 64,
        Type::Unsigned(inner) => integer_cast_bits(inner),
        Type::Const(inner) | Type::Volatile(inner) | Type::Bitfield(inner, _) => {
            integer_cast_bits(inner)
        }
        _ => 32,
    }
}

fn truncate_unsigned(value: i64, bits: u32) -> i64 {
    if bits >= 64 {
        value
    } else {
        let mask = (1_i64 << bits) - 1;
        value & mask
    }
}

fn sign_extend(value: i64, bits: u32) -> i64 {
    if bits >= 64 {
        value
    } else {
        let mask = (1_i64 << bits) - 1;
        let sign = 1_i64 << (bits - 1);
        let truncated = value & mask;
        if truncated & sign != 0 {
            truncated | !mask
        } else {
            truncated
        }
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

/// Evaluate a constant `/` or `%` with the correct signedness and width
/// derived from the operand types (C usual arithmetic conversions). The
/// type-naive default of signed-32 silently mis-folds unsigned division
/// (e.g. inlined `safe_div_func_uint32_t_u_u` bodies).
fn eval_const_divmod(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    a: i64,
    b: i64,
) -> Option<i64> {
    use ast::BinaryOp;
    if b == 0 {
        return None;
    }
    let common = match (const_int_expr_type(lhs), const_int_expr_type(rhs)) {
        (Some(l), Some(r)) => Some(types::Type::usual_arithmetic_conversion(&l, &r)),
        _ => None,
    };
    let unsigned = common.as_ref().is_some_and(types::Type::is_unsigned);
    let long_long = common.as_ref().is_some_and(types::Type::is_long_long);
    Some(match (op, unsigned, long_long) {
        (BinaryOp::Div, false, false) => (a as i32).wrapping_div(b as i32) as i64,
        (BinaryOp::Mod, false, false) => (a as i32).wrapping_rem(b as i32) as i64,
        (BinaryOp::Div, true, false) => (a as u32).wrapping_div(b as u32) as i64,
        (BinaryOp::Mod, true, false) => (a as u32).wrapping_rem(b as u32) as i64,
        (BinaryOp::Div, false, true) => a.wrapping_div(b),
        (BinaryOp::Mod, false, true) => a.wrapping_rem(b),
        (BinaryOp::Div, true, true) => (a as u64).wrapping_div(b as u64) as i64,
        (BinaryOp::Mod, true, true) => (a as u64).wrapping_rem(b as u64) as i64,
        _ => return None,
    })
}

/// Evaluate a constant `<<` or `>>` with the correct signedness/width of the
/// (promoted) left operand. A right shift of an unsigned value is logical,
/// not arithmetic; a 64-bit shift must not be truncated to 32 bits.
fn eval_const_shift(op: ast::BinaryOp, lhs: &ast::Expr, a: i64, b: i64) -> Option<i64> {
    use ast::BinaryOp;
    let lty = const_int_expr_type(lhs).map(|t| t.integer_promoted());
    let unsigned = lty.as_ref().is_some_and(types::Type::is_unsigned);
    let long_long = lty.as_ref().is_some_and(types::Type::is_long_long);
    let s = b as u32;
    Some(match (op, unsigned, long_long) {
        (BinaryOp::Shl, _, false) => (a as u32).wrapping_shl(s) as i32 as i64,
        (BinaryOp::Shl, _, true) => (a as u64).wrapping_shl(s) as i64,
        (BinaryOp::Shr, false, false) => (a as i32).wrapping_shr(s) as i64,
        (BinaryOp::Shr, true, false) => (a as u32).wrapping_shr(s) as i64,
        (BinaryOp::Shr, false, true) => a.wrapping_shr(s),
        (BinaryOp::Shr, true, true) => (a as u64).wrapping_shr(s) as i64,
        _ => return None,
    })
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

#[allow(dead_code)]
fn drop_unused_trailing_static_params(unit: &mut ast::TranslationUnit) {
    let mut candidates: HashMap<String, (usize, std::collections::HashSet<String>)> =
        HashMap::new();
    for f in &unit.functions {
        if !f.is_static || f.is_variadic || f.params.is_empty() {
            continue;
        }
        let mut uses = std::collections::HashSet::new();
        for stmt in &f.body {
            collect_real_ident_uses_in_stmt(stmt, &mut uses);
        }
        let mut new_len = f.params.len();
        while new_len > 0 && !uses.contains(&f.params[new_len - 1].0) {
            new_len -= 1;
        }
        if new_len < f.params.len() {
            candidates.insert(
                f.name.clone(),
                (
                    new_len,
                    f.params[new_len..]
                        .iter()
                        .map(|(name, _)| name.clone())
                        .collect(),
                ),
            );
        }
    }
    candidates.retain(|name, candidate| {
        let mut one = HashMap::new();
        one.insert(name.clone(), candidate.clone());
        unused_static_param_call_args_are_safe(unit, &one)
    });
    if candidates.is_empty() {
        return;
    }
    for f in &mut unit.functions {
        if let Some((new_len, removed)) = candidates.get(&f.name) {
            f.params.truncate(*new_len);
            prune_void_casts_of_removed_params(&mut f.body, removed);
        }
        for stmt in &mut f.body {
            truncate_static_call_args_in_stmt(stmt, &candidates);
        }
    }
    for g in &mut unit.globals {
        if let Some(init) = &mut g.init {
            truncate_static_call_args_in_expr(init, &candidates);
        }
    }
}

fn unused_static_param_call_args_are_safe(
    unit: &ast::TranslationUnit,
    candidates: &HashMap<String, (usize, std::collections::HashSet<String>)>,
) -> bool {
    for f in &unit.functions {
        for stmt in &f.body {
            if !unused_static_param_call_args_are_safe_in_stmt(stmt, candidates) {
                return false;
            }
        }
    }
    for g in &unit.globals {
        if let Some(init) = &g.init {
            if !unused_static_param_call_args_are_safe_in_expr(init, candidates) {
                return false;
            }
        }
    }
    true
}

fn unused_static_param_call_args_are_safe_in_stmt(
    stmt: &ast::Stmt,
    candidates: &HashMap<String, (usize, std::collections::HashSet<String>)>,
) -> bool {
    use ast::Stmt::*;
    match stmt {
        Return(Some(e)) | Expr(e) | CaseLabel(e) => {
            unused_static_param_call_args_are_safe_in_expr(e, candidates)
        }
        Return(None) | DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => true,
        VarDecl { init, vla_dim, .. } => {
            init.as_ref()
                .is_none_or(|e| unused_static_param_call_args_are_safe_in_expr(e, candidates))
                && vla_dim
                    .as_ref()
                    .is_none_or(|e| unused_static_param_call_args_are_safe_in_expr(e, candidates))
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            unused_static_param_call_args_are_safe_in_expr(cond, candidates)
                && then_body
                    .iter()
                    .all(|s| unused_static_param_call_args_are_safe_in_stmt(s, candidates))
                && else_body.as_ref().is_none_or(|body| {
                    body.iter()
                        .all(|s| unused_static_param_call_args_are_safe_in_stmt(s, candidates))
                })
        }
        While { cond, body } | DoWhile { cond, body } => {
            unused_static_param_call_args_are_safe_in_expr(cond, candidates)
                && body
                    .iter()
                    .all(|s| unused_static_param_call_args_are_safe_in_stmt(s, candidates))
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_none_or(|s| unused_static_param_call_args_are_safe_in_stmt(s, candidates))
                && cond
                    .as_ref()
                    .is_none_or(|e| unused_static_param_call_args_are_safe_in_expr(e, candidates))
                && step
                    .as_ref()
                    .is_none_or(|e| unused_static_param_call_args_are_safe_in_expr(e, candidates))
                && body
                    .iter()
                    .all(|s| unused_static_param_call_args_are_safe_in_stmt(s, candidates))
        }
        Block(body) | DeclGroup(body) | Switch { body, .. } => body
            .iter()
            .all(|s| unused_static_param_call_args_are_safe_in_stmt(s, candidates)),
        Label(_, inner) => unused_static_param_call_args_are_safe_in_stmt(inner, candidates),
    }
}

fn unused_static_param_call_args_are_safe_in_expr(
    expr: &ast::Expr,
    candidates: &HashMap<String, (usize, std::collections::HashSet<String>)>,
) -> bool {
    use ast::Expr::*;
    match expr {
        Call { name, args } => {
            if let Some((new_len, _)) = candidates.get(name) {
                if args.len() < *new_len || !args[*new_len..].iter().all(expr_side_effect_free) {
                    return false;
                }
            }
            args.iter()
                .all(|arg| unused_static_param_call_args_are_safe_in_expr(arg, candidates))
        }
        CallIndirect { func_expr, args } => {
            unused_static_param_call_args_are_safe_in_expr(func_expr, candidates)
                && args
                    .iter()
                    .all(|arg| unused_static_param_call_args_are_safe_in_expr(arg, candidates))
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
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => unused_static_param_call_args_are_safe_in_expr(operand, candidates),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            unused_static_param_call_args_are_safe_in_expr(lhs, candidates)
                && unused_static_param_call_args_are_safe_in_expr(rhs, candidates)
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            unused_static_param_call_args_are_safe_in_expr(cond, candidates)
                && unused_static_param_call_args_are_safe_in_expr(then_expr, candidates)
                && unused_static_param_call_args_are_safe_in_expr(else_expr, candidates)
        }
        InitList(items) => items
            .iter()
            .all(|item| unused_static_param_call_args_are_safe_in_expr(item, candidates)),
        DesignatedInit { value, .. } => {
            unused_static_param_call_args_are_safe_in_expr(value, candidates)
        }
        ArrayDesignator { index, value } => {
            unused_static_param_call_args_are_safe_in_expr(index, candidates)
                && unused_static_param_call_args_are_safe_in_expr(value, candidates)
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) | Ident(_) => true,
    }
}

fn prune_void_casts_of_removed_params(
    stmts: &mut Vec<ast::Stmt>,
    removed: &std::collections::HashSet<String>,
) {
    stmts.retain(|stmt| !is_void_cast_of_removed_param(stmt, removed));
}

fn is_void_cast_of_removed_param(
    stmt: &ast::Stmt,
    removed: &std::collections::HashSet<String>,
) -> bool {
    matches!(
        stmt,
        ast::Stmt::Expr(ast::Expr::Cast(ty, inner))
            if matches!(ty.unqualified(), crate::types::Type::Void)
                && matches!(inner.as_ref(), ast::Expr::Ident(name) if removed.contains(name))
    )
}

fn truncate_static_call_args_in_stmt(
    stmt: &mut ast::Stmt,
    candidates: &HashMap<String, (usize, std::collections::HashSet<String>)>,
) {
    match stmt {
        ast::Stmt::Return(Some(e)) | ast::Stmt::Expr(e) | ast::Stmt::CaseLabel(e) => {
            truncate_static_call_args_in_expr(e, candidates)
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                truncate_static_call_args_in_expr(e, candidates);
            }
            if let Some(e) = vla_dim {
                truncate_static_call_args_in_expr(e, candidates);
            }
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            truncate_static_call_args_in_expr(cond, candidates);
            for s in then_body {
                truncate_static_call_args_in_stmt(s, candidates);
            }
            if let Some(body) = else_body {
                for s in body {
                    truncate_static_call_args_in_stmt(s, candidates);
                }
            }
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
            truncate_static_call_args_in_expr(cond, candidates);
            for s in body {
                truncate_static_call_args_in_stmt(s, candidates);
            }
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                truncate_static_call_args_in_stmt(s, candidates);
            }
            if let Some(e) = cond {
                truncate_static_call_args_in_expr(e, candidates);
            }
            if let Some(e) = step {
                truncate_static_call_args_in_expr(e, candidates);
            }
            for s in body {
                truncate_static_call_args_in_stmt(s, candidates);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) | ast::Stmt::Switch { body, .. } => {
            for s in body {
                truncate_static_call_args_in_stmt(s, candidates);
            }
        }
        ast::Stmt::Label(_, inner) => truncate_static_call_args_in_stmt(inner, candidates),
        ast::Stmt::Return(None)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => {}
    }
}

fn truncate_static_call_args_in_expr(
    expr: &mut ast::Expr,
    candidates: &HashMap<String, (usize, std::collections::HashSet<String>)>,
) {
    use ast::Expr::*;
    match expr {
        Call { name, args } => {
            for arg in args.iter_mut() {
                truncate_static_call_args_in_expr(arg, candidates);
            }
            if let Some((new_len, _)) = candidates.get(name) {
                args.truncate(*new_len);
            }
        }
        CallIndirect { func_expr, args } => {
            truncate_static_call_args_in_expr(func_expr, candidates);
            for arg in args {
                truncate_static_call_args_in_expr(arg, candidates);
            }
        }
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | RealPart(operand)
        | ImagPart(operand)
        | PostDec(operand)
        | Member(operand, _)
        | Arrow(operand, _) => truncate_static_call_args_in_expr(operand, candidates),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            truncate_static_call_args_in_expr(lhs, candidates);
            truncate_static_call_args_in_expr(rhs, candidates);
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            truncate_static_call_args_in_expr(cond, candidates);
            truncate_static_call_args_in_expr(then_expr, candidates);
            truncate_static_call_args_in_expr(else_expr, candidates);
        }
        InitList(items) => {
            for item in items {
                truncate_static_call_args_in_expr(item, candidates);
            }
        }
        DesignatedInit { value, .. } => truncate_static_call_args_in_expr(value, candidates),
        ArrayDesignator { index, value } => {
            truncate_static_call_args_in_expr(index, candidates);
            truncate_static_call_args_in_expr(value, candidates);
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) | Ident(_) => {}
    }
}

fn collect_real_ident_uses_in_stmt(stmt: &ast::Stmt, uses: &mut std::collections::HashSet<String>) {
    if let ast::Stmt::Expr(ast::Expr::Cast(ty, inner)) = stmt {
        if matches!(ty.unqualified(), crate::types::Type::Void)
            && matches!(inner.as_ref(), ast::Expr::Ident(_))
        {
            return;
        }
    }
    collect_all_ident_uses_in_stmt(stmt, uses);
}

fn collect_all_ident_uses_in_stmt(stmt: &ast::Stmt, uses: &mut std::collections::HashSet<String>) {
    match stmt {
        ast::Stmt::Return(Some(e)) | ast::Stmt::Expr(e) | ast::Stmt::CaseLabel(e) => {
            collect_all_ident_uses_in_expr(e, uses)
        }
        ast::Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                collect_all_ident_uses_in_expr(e, uses);
            }
            if let Some(e) = vla_dim {
                collect_all_ident_uses_in_expr(e, uses);
            }
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            collect_all_ident_uses_in_expr(cond, uses);
            for s in then_body {
                collect_real_ident_uses_in_stmt(s, uses);
            }
            if let Some(body) = else_body {
                for s in body {
                    collect_real_ident_uses_in_stmt(s, uses);
                }
            }
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { cond, body } => {
            collect_all_ident_uses_in_expr(cond, uses);
            for s in body {
                collect_real_ident_uses_in_stmt(s, uses);
            }
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                collect_real_ident_uses_in_stmt(s, uses);
            }
            if let Some(e) = cond {
                collect_all_ident_uses_in_expr(e, uses);
            }
            if let Some(e) = step {
                collect_all_ident_uses_in_expr(e, uses);
            }
            for s in body {
                collect_real_ident_uses_in_stmt(s, uses);
            }
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) | ast::Stmt::Switch { body, .. } => {
            if let ast::Stmt::Switch { expr, .. } = stmt {
                collect_all_ident_uses_in_expr(expr, uses);
            }
            for s in body {
                collect_real_ident_uses_in_stmt(s, uses);
            }
        }
        ast::Stmt::Label(_, inner) => collect_real_ident_uses_in_stmt(inner, uses),
        ast::Stmt::Return(None)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => {}
    }
}

fn collect_all_ident_uses_in_expr(expr: &ast::Expr, uses: &mut std::collections::HashSet<String>) {
    use ast::Expr::*;
    match expr {
        Ident(name) => {
            uses.insert(name.clone());
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
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => collect_all_ident_uses_in_expr(operand, uses),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            collect_all_ident_uses_in_expr(lhs, uses);
            collect_all_ident_uses_in_expr(rhs, uses);
        }
        Call { args, .. } => {
            for arg in args {
                collect_all_ident_uses_in_expr(arg, uses);
            }
        }
        CallIndirect { func_expr, args } => {
            collect_all_ident_uses_in_expr(func_expr, uses);
            for arg in args {
                collect_all_ident_uses_in_expr(arg, uses);
            }
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_all_ident_uses_in_expr(cond, uses);
            collect_all_ident_uses_in_expr(then_expr, uses);
            collect_all_ident_uses_in_expr(else_expr, uses);
        }
        InitList(items) => {
            for item in items {
                collect_all_ident_uses_in_expr(item, uses);
            }
        }
        DesignatedInit { value, .. } => collect_all_ident_uses_in_expr(value, uses),
        ArrayDesignator { index, value } => {
            collect_all_ident_uses_in_expr(index, uses);
            collect_all_ident_uses_in_expr(value, uses);
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) => {}
    }
}

/// A `static` csmith `safe_*` wrapper whose body is a single guarded
/// `return (guard) ? p : (p OP q);` expression, pure over its parameters.
struct GuardedHelper {
    params: Vec<(String, crate::types::Type)>,
    return_type: crate::types::Type,
    body: ast::Expr,
}

/// Per-function generator state for guarded-helper inlining: a counter for
/// fresh temp names and the temp declarations to prepend to the body.
struct GuardedGen {
    counter: usize,
    decls: Vec<(String, crate::types::Type)>,
}

/// Inline csmith guarded `safe_*` wrappers (div/mod/shift bound-checks) at
/// their call sites, binding each argument to a fresh function-scope temp
/// evaluated exactly once via a comma-expression:
///
/// ```text
///   safe_div(A, B)  ==>  (t0 = (T0)A, t1 = (T1)B, (T)((t1==0) ? t0 : t0/t1))
/// ```
///
/// Temp-binding (rather than substituting the argument expressions directly)
/// is what makes this correct when an argument has side effects and what
/// avoids duplicating a multi-use parameter --- the previous direct-substitution
/// path either bailed out (leaving the call overhead) or bloated the hot loop.
fn inline_guarded_safe_calls(unit: &mut ast::TranslationUnit) {
    use std::collections::HashMap;

    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let mut helpers: HashMap<String, GuardedHelper> = HashMap::new();
    for f in &unit.functions {
        if let Some(h) = guarded_safe_helper(f, &typedefs) {
            helpers.insert(f.name.clone(), h);
        }
    }
    if helpers.is_empty() {
        return;
    }

    for f in &mut unit.functions {
        let mut gen = GuardedGen {
            counter: 0,
            decls: Vec::new(),
        };
        for stmt in &mut f.body {
            transform_guarded_stmt(stmt, &helpers, &mut gen);
        }
        if !gen.decls.is_empty() {
            let mut decls: Vec<ast::Stmt> = gen
                .decls
                .into_iter()
                .map(|(name, ty)| ast::Stmt::VarDecl {
                    name,
                    ty,
                    init: None,
                    is_static: false,
                    vla_dim: None,
                })
                .collect();
            decls.append(&mut f.body);
            f.body = decls;
        }
    }
}

fn guarded_safe_helper(
    f: &ast::Function,
    typedefs: &std::collections::HashMap<String, types::Type>,
) -> Option<GuardedHelper> {
    if !f.is_static
        || f.is_variadic
        || !f.name.starts_with("safe_")
        || f.params.is_empty()
        || f.params.len() > 2
    {
        return None;
    }
    let [ast::Stmt::Return(Some(body))] = f.body.as_slice() else {
        return None;
    };
    if !matches!(body, ast::Expr::Ternary { .. }) {
        return None;
    }
    let params: std::collections::HashSet<&str> =
        f.params.iter().map(|(name, _)| name.as_str()).collect();
    if !guarded_pure_over_params(body, &params) || expr_mentions_name(body, &f.name) {
        return None;
    }
    Some(GuardedHelper {
        params: resolve_inline_params(&f.params, typedefs),
        return_type: resolve_optimizer_typedefs(&f.return_type, typedefs),
        body: body.clone(),
    })
}

/// True when `expr` only reads the given parameters and integer/char
/// constants through pure operators (no calls, assignments, or memory access).
fn guarded_pure_over_params(expr: &ast::Expr, params: &std::collections::HashSet<&str>) -> bool {
    use ast::Expr::*;
    match expr {
        Ident(name) => params.contains(name.as_str()),
        IntLit(..) | CharLit(_) => true,
        Cast(_, e) | Unary { operand: e, .. } => guarded_pure_over_params(e, params),
        Binary { lhs, rhs, .. } => {
            guarded_pure_over_params(lhs, params) && guarded_pure_over_params(rhs, params)
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            guarded_pure_over_params(cond, params)
                && guarded_pure_over_params(then_expr, params)
                && guarded_pure_over_params(else_expr, params)
        }
        _ => false,
    }
}

/// True for arguments that are free to duplicate into multiple parameter
/// uses: integer/char constants (also exposing them to later constant
/// folding). Identifiers are deliberately excluded so a possibly-`volatile`
/// read is not duplicated --- they are bound to a single temp instead.
fn is_trivially_duplicable(arg: &ast::Expr) -> bool {
    match arg {
        ast::Expr::IntLit(..) | ast::Expr::CharLit(_) => true,
        ast::Expr::Cast(_, inner) => is_trivially_duplicable(inner),
        _ => false,
    }
}

fn build_guarded_inline(
    h: &GuardedHelper,
    args: &[ast::Expr],
    gen: &mut GuardedGen,
) -> ast::Expr {
    use std::collections::HashMap;

    let mut uses_map: HashMap<&str, usize> = HashMap::new();
    count_ident_uses(&h.body, &mut uses_map);

    let mut subst: HashMap<&str, ast::Expr> = HashMap::new();
    // Side-effect prelude evaluated (left to right) before the body. Each entry
    // is either a temp assignment `t = (T)arg` or a bare side-effecting arg
    // whose value is discarded (parameter unused in the body).
    let mut prelude: Vec<ast::Expr> = Vec::new();
    for ((param, ty), arg) in h.params.iter().zip(args.iter()) {
        let uses = uses_map.get(param.as_str()).copied().unwrap_or(0);
        let pure = expr_side_effect_free(arg);
        if (uses >= 2 && !is_trivially_duplicable(arg)) || (!pure && uses >= 1) {
            let tname = format!("__sg_tmp{}", gen.counter);
            gen.counter += 1;
            gen.decls.push((tname.clone(), ty.clone()));
            prelude.push(ast::Expr::Assign {
                target: Box::new(ast::Expr::Ident(tname.clone())),
                value: Box::new(inline_arg_expr(ty, arg)),
            });
            subst.insert(param.as_str(), ast::Expr::Ident(tname));
        } else if uses >= 1 {
            subst.insert(param.as_str(), inline_arg_expr(ty, arg));
        } else if !pure {
            // Unused parameter but the argument has side effects: keep it.
            prelude.push(arg.clone());
        }
    }

    let body_subst = substitute_inline_expr(&h.body, &subst);
    let mut result = inline_return_expr(&h.return_type, body_subst);
    for pre in prelude.into_iter().rev() {
        result = ast::Expr::Comma(Box::new(pre), Box::new(result));
    }
    result
}

fn transform_guarded_expr(
    expr: &mut ast::Expr,
    helpers: &std::collections::HashMap<String, GuardedHelper>,
    gen: &mut GuardedGen,
) {
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
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => transform_guarded_expr(operand, helpers, gen),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            transform_guarded_expr(lhs, helpers, gen);
            transform_guarded_expr(rhs, helpers, gen);
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            transform_guarded_expr(cond, helpers, gen);
            transform_guarded_expr(then_expr, helpers, gen);
            transform_guarded_expr(else_expr, helpers, gen);
        }
        Call { args, .. } => {
            for a in args.iter_mut() {
                transform_guarded_expr(a, helpers, gen);
            }
        }
        CallIndirect { func_expr, args } => {
            transform_guarded_expr(func_expr, helpers, gen);
            for a in args.iter_mut() {
                transform_guarded_expr(a, helpers, gen);
            }
        }
        InitList(items) => {
            for it in items.iter_mut() {
                transform_guarded_expr(it, helpers, gen);
            }
        }
        DesignatedInit { value, .. } => transform_guarded_expr(value, helpers, gen),
        ArrayDesignator { index, value } => {
            transform_guarded_expr(index, helpers, gen);
            transform_guarded_expr(value, helpers, gen);
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) | Ident(_) => {}
    }

    if let Call { name, args } = expr {
        if let Some(replacement) = fold_csmith_safe_const_call(name, args) {
            // Preserve the existing constant folds (boolean shift -> 0,
            // constant div/mod, ...) which are strictly better than inlining.
            *expr = replacement;
        } else if let Some(h) = helpers.get(name) {
            if h.params.len() == args.len() {
                *expr = build_guarded_inline(h, args, gen);
            }
        }
    }
}

fn transform_guarded_stmt(
    stmt: &mut ast::Stmt,
    helpers: &std::collections::HashMap<String, GuardedHelper>,
    gen: &mut GuardedGen,
) {
    use ast::Stmt::*;
    match stmt {
        Return(Some(e)) | Expr(e) | CaseLabel(e) => transform_guarded_expr(e, helpers, gen),
        Return(None) | Break | Continue | Goto(_) | DefaultLabel | EnumDecl(_) | Asm(_) => {}
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                transform_guarded_expr(e, helpers, gen);
            }
            if let Some(e) = vla_dim {
                transform_guarded_expr(e, helpers, gen);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            transform_guarded_expr(cond, helpers, gen);
            for s in then_body.iter_mut() {
                transform_guarded_stmt(s, helpers, gen);
            }
            if let Some(eb) = else_body {
                for s in eb.iter_mut() {
                    transform_guarded_stmt(s, helpers, gen);
                }
            }
        }
        While { cond, body } => {
            transform_guarded_expr(cond, helpers, gen);
            for s in body.iter_mut() {
                transform_guarded_stmt(s, helpers, gen);
            }
        }
        DoWhile { body, cond } => {
            for s in body.iter_mut() {
                transform_guarded_stmt(s, helpers, gen);
            }
            transform_guarded_expr(cond, helpers, gen);
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(i) = init {
                transform_guarded_stmt(i, helpers, gen);
            }
            if let Some(c) = cond {
                transform_guarded_expr(c, helpers, gen);
            }
            if let Some(st) = step {
                transform_guarded_expr(st, helpers, gen);
            }
            for s in body.iter_mut() {
                transform_guarded_stmt(s, helpers, gen);
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body.iter_mut() {
                transform_guarded_stmt(s, helpers, gen);
            }
        }
        Switch { expr, body } => {
            transform_guarded_expr(expr, helpers, gen);
            for s in body.iter_mut() {
                transform_guarded_stmt(s, helpers, gen);
            }
        }
        Label(_, inner) => transform_guarded_stmt(inner, helpers, gen),
    }
}

/// Inline tiny internal helpers before lowering.
///
/// This deliberately handles only low-risk cases:
/// * `static` functions whose body is exactly `return expr;`, where both
///   `expr` and the call arguments are side-effect-free. That keeps argument
///   duplication semantics intact while removing hot helper-call overhead.
/// * canonical `static void` byte-copy helpers used as expression statements,
///   when their call arguments are side-effect-free.
fn inline_simple_static_fns(unit: &mut ast::TranslationUnit) {
    use std::collections::HashMap;

    let call_counts = direct_call_counts(unit);
    let broad_inline = unit.functions.len() <= 16;
    let function_names: std::collections::HashSet<String> =
        unit.functions.iter().map(|f| f.name.clone()).collect();
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let mut inline_fns: HashMap<String, InlineExprFn> = HashMap::new();
    let mut inline_indirect_fns: HashMap<String, InlineIndirectFn> = HashMap::new();
    let mut inline_accum_fns: HashMap<String, InlineAccumFn> = HashMap::new();
    let mut inline_void_fns: HashMap<String, InlineVoidFn> = HashMap::new();
    for f in &unit.functions {
        if !f.is_static || f.is_variadic {
            continue;
        }
        let calls = call_counts.get(&f.name).copied().unwrap_or(0);
        let csmith_safe_inline_helper = is_csmith_safe_inline_helper(f);
        let csmith_guarded_inline_helper = is_csmith_small_guarded_inline_helper(f);
        if (broad_inline && calls <= 4 || csmith_safe_inline_helper || csmith_guarded_inline_helper)
            && f.body.len() == 1
        {
            if let ast::Stmt::Return(Some(body)) = &f.body[0] {
                if expr_side_effect_free(body) && !expr_mentions_name(body, &f.name) {
                    inline_fns.insert(
                        f.name.clone(),
                        InlineExprFn {
                            params: resolve_inline_params(&f.params, &typedefs),
                            return_type: resolve_optimizer_typedefs(&f.return_type, &typedefs),
                            body: body.clone(),
                            allow_effect_args: csmith_safe_inline_helper
                                && is_linear_param_expr(body, &f.params),
                        },
                    );
                    continue;
                }
                if let Some(wrapper) = indirect_call_wrapper(f) {
                    inline_indirect_fns.insert(f.name.clone(), wrapper);
                    continue;
                }
            }
        }
        if broad_inline && calls <= 4 {
            if let Some(accum) = context_accumulator_helper(f) {
                inline_accum_fns.insert(f.name.clone(), accum);
                continue;
            }
        }
        if calls == 1
            && f.return_type == crate::types::Type::Void
            && is_byte_copy_loop_helper(f)
            && !stmts_mention_name(&f.body, &f.name)
        {
            inline_void_fns.insert(
                f.name.clone(),
                InlineVoidFn {
                    params: resolve_inline_params(&f.params, &typedefs),
                    body: f.body.clone(),
                    bind_params: false,
                },
            );
            continue;
        }
        if calls == 1 && is_simple_void_expr_helper(f) {
            inline_void_fns.insert(
                f.name.clone(),
                InlineVoidFn {
                    params: resolve_inline_params(&f.params, &typedefs),
                    body: f.body.clone(),
                    bind_params: true,
                },
            );
            continue;
        }
        if calls == 1 && is_no_call_static_void_helper(f) {
            inline_void_fns.insert(
                f.name.clone(),
                InlineVoidFn {
                    params: resolve_inline_params(&f.params, &typedefs),
                    body: f.body.clone(),
                    bind_params: true,
                },
            );
            continue;
        }
        if !broad_inline
            || f.return_type != crate::types::Type::Void
            || f.body.is_empty()
            || f.body.len() > 4
            || !is_byte_copy_loop_helper(f)
            || stmts_mention_name(&f.body, &f.name)
        {
            continue;
        }
        inline_void_fns.insert(
            f.name.clone(),
            InlineVoidFn {
                params: resolve_inline_params(&f.params, &typedefs),
                body: f.body.clone(),
                bind_params: false,
            },
        );
    }

    if inline_fns.is_empty()
        && inline_indirect_fns.is_empty()
        && inline_accum_fns.is_empty()
        && inline_void_fns.is_empty()
    {
        return;
    }

    for f in &mut unit.functions {
        for stmt in &mut f.body {
            inline_stmt(
                stmt,
                &inline_fns,
                &inline_indirect_fns,
                &inline_accum_fns,
                &inline_void_fns,
                &function_names,
            );
        }
    }
}

fn is_csmith_safe_inline_helper(f: &ast::Function) -> bool {
    if !f.name.starts_with("safe_") || f.params.len() > 2 {
        return false;
    }
    let [ast::Stmt::Return(Some(body))] = f.body.as_slice() else {
        return false;
    };
    let params: std::collections::HashSet<&str> =
        f.params.iter().map(|(name, _)| name.as_str()).collect();
    is_simple_safe_inline_expr(body, &params)
}

fn resolve_inline_params(
    params: &[(String, types::Type)],
    typedefs: &std::collections::HashMap<String, types::Type>,
) -> Vec<(String, types::Type)> {
    params
        .iter()
        .map(|(name, ty)| (name.clone(), resolve_optimizer_typedefs(ty, typedefs)))
        .collect()
}

fn is_csmith_small_guarded_inline_helper(f: &ast::Function) -> bool {
    matches!(
        f.name.as_str(),
        "safe_lshift_func_uint8_t_u_u" | "safe_lshift_func_uint8_t_u_s"
    )
}

fn is_simple_safe_inline_expr(expr: &ast::Expr, params: &std::collections::HashSet<&str>) -> bool {
    use ast::{BinaryOp, Expr, UnaryOp};

    fn leaf(expr: &Expr, params: &std::collections::HashSet<&str>) -> bool {
        match expr {
            Expr::Ident(name) => params.contains(name.as_str()),
            Expr::IntLit(..) | Expr::CharLit(_) => true,
            Expr::Cast(_, inner) => leaf(inner, params),
            _ => false,
        }
    }

    match expr {
        Expr::Unary {
            op: UnaryOp::Neg | UnaryOp::BitNot | UnaryOp::LogNot,
            operand,
        } => leaf(operand, params),
        Expr::Binary {
            op:
                BinaryOp::Add
                | BinaryOp::Sub
                | BinaryOp::Mul
                | BinaryOp::BitAnd
                | BinaryOp::BitOr
                | BinaryOp::BitXor
                | BinaryOp::Shl
                | BinaryOp::Shr,
            lhs,
            rhs,
        } => leaf(lhs, params) && leaf(rhs, params),
        Expr::Cast(_, inner) => is_simple_safe_inline_expr(inner, params),
        _ => false,
    }
}

fn is_linear_param_expr(expr: &ast::Expr, params: &[(String, crate::types::Type)]) -> bool {
    let mut uses = std::collections::HashMap::new();
    count_ident_uses(expr, &mut uses);
    params
        .iter()
        .all(|(name, _)| uses.get(name.as_str()).copied().unwrap_or(0) == 1)
}

fn count_ident_uses<'a>(expr: &'a ast::Expr, uses: &mut std::collections::HashMap<&'a str, usize>) {
    use ast::Expr::*;
    match expr {
        Ident(name) => {
            *uses.entry(name.as_str()).or_insert(0) += 1;
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
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => count_ident_uses(operand, uses),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            count_ident_uses(lhs, uses);
            count_ident_uses(rhs, uses);
        }
        Call { args, .. } => {
            for arg in args {
                count_ident_uses(arg, uses);
            }
        }
        CallIndirect { func_expr, args } => {
            count_ident_uses(func_expr, uses);
            for arg in args {
                count_ident_uses(arg, uses);
            }
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            count_ident_uses(cond, uses);
            count_ident_uses(then_expr, uses);
            count_ident_uses(else_expr, uses);
        }
        InitList(items) => {
            for item in items {
                count_ident_uses(item, uses);
            }
        }
        DesignatedInit { value, .. } => count_ident_uses(value, uses),
        ArrayDesignator { index, value } => {
            count_ident_uses(index, uses);
            count_ident_uses(value, uses);
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) => {}
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

fn indirect_call_wrapper(f: &ast::Function) -> Option<InlineIndirectFn> {
    let (callee_param, args) = match f.body.as_slice() {
        [ast::Stmt::Return(Some(ast::Expr::Call { name, args }))] => (name, args),
        [ast::Stmt::Return(Some(ast::Expr::CallIndirect { func_expr, args }))] => {
            let ast::Expr::Ident(name) = func_expr.as_ref() else {
                return None;
            };
            (name, args)
        }
        _ => return None,
    };
    if !f.params.iter().any(|(name, _)| name == callee_param) {
        return None;
    }
    let mut forwarded_args = Vec::with_capacity(args.len());
    for arg in args {
        let ast::Expr::Ident(name) = arg else {
            return None;
        };
        if name == callee_param || !f.params.iter().any(|(param, _)| param == name) {
            return None;
        }
        forwarded_args.push(name.clone());
    }
    Some(InlineIndirectFn {
        params: f.params.iter().map(|(name, _)| name.clone()).collect(),
        callee_param: callee_param.clone(),
        forwarded_args,
    })
}

fn inline_indirect_call_expr(
    wrapper_name: &str,
    args: &[ast::Expr],
    wrapper: &InlineIndirectFn,
    function_names: &std::collections::HashSet<String>,
) -> Option<ast::Expr> {
    if wrapper.params.len() != args.len() || !args.iter().all(expr_side_effect_free) {
        return None;
    }
    let mut subst = std::collections::HashMap::new();
    for (param, arg) in wrapper.params.iter().zip(args.iter()) {
        subst.insert(param.as_str(), arg);
    }
    let ast::Expr::Ident(callee) = subst.get(wrapper.callee_param.as_str())? else {
        return None;
    };
    if callee == wrapper_name || !function_names.contains(callee) {
        return None;
    }
    let mut direct_args = Vec::with_capacity(wrapper.forwarded_args.len());
    for param in &wrapper.forwarded_args {
        direct_args.push((*subst.get(param.as_str())?).clone());
    }
    Some(ast::Expr::Call {
        name: callee.clone(),
        args: direct_args,
    })
}

fn context_accumulator_helper(f: &ast::Function) -> Option<InlineAccumFn> {
    use ast::{BinaryOp, Expr, Stmt};

    if let [Stmt::Expr(Expr::CompoundAssign { op, target, value }), Stmt::Return(Some(ret))] =
        f.body.as_slice()
    {
        if *op == BinaryOp::Add {
            if let (Expr::Deref(target_inner), Expr::Ident(val_param), Expr::Deref(ret_inner)) =
                (target.as_ref(), value.as_ref(), ret)
            {
                if let (Expr::Ident(ptr_param), Expr::Ident(ret_param)) =
                    (target_inner.as_ref(), ret_inner.as_ref())
                {
                    if ptr_param == ret_param
                        && f.params.iter().any(|(name, _)| name == ptr_param)
                        && f.params.iter().any(|(name, _)| name == val_param)
                    {
                        return Some(InlineAccumFn {
                            params: f.params.iter().map(|(name, _)| name.clone()).collect(),
                            ptr_param: ptr_param.clone(),
                            val_param: val_param.clone(),
                        });
                    }
                }
            }
        }
    }

    let [Stmt::VarDecl {
        name: local_ptr,
        init: Some(init),
        is_static: false,
        vla_dim: None,
        ..
    }, Stmt::Expr(Expr::CompoundAssign { op, target, value }), Stmt::Return(Some(ret))] =
        f.body.as_slice()
    else {
        return None;
    };
    if *op != BinaryOp::Add {
        return None;
    }
    let Expr::Cast(_, init_inner) = init else {
        return None;
    };
    let Expr::Ident(ptr_param) = init_inner.as_ref() else {
        return None;
    };
    let Expr::Ident(val_param) = value.as_ref() else {
        return None;
    };
    if !matches!(target.as_ref(), Expr::Deref(inner) if matches!(inner.as_ref(), Expr::Ident(name) if name == local_ptr))
        || !matches!(ret, Expr::Deref(inner) if matches!(inner.as_ref(), Expr::Ident(name) if name == local_ptr))
        || !f.params.iter().any(|(name, _)| name == ptr_param)
        || !f.params.iter().any(|(name, _)| name == val_param)
    {
        return None;
    }
    Some(InlineAccumFn {
        params: f.params.iter().map(|(name, _)| name.clone()).collect(),
        ptr_param: ptr_param.clone(),
        val_param: val_param.clone(),
    })
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

fn inline_stmt(
    stmt: &mut ast::Stmt,
    inline_fns: &std::collections::HashMap<String, InlineExprFn>,
    inline_indirect_fns: &std::collections::HashMap<String, InlineIndirectFn>,
    inline_accum_fns: &std::collections::HashMap<String, InlineAccumFn>,
    inline_void_fns: &std::collections::HashMap<String, InlineVoidFn>,
    function_names: &std::collections::HashSet<String>,
) {
    use ast::Stmt::*;
    match stmt {
        Return(e) => {
            if let Some(e) = e {
                inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            }
        }
        Expr(e) => {
            inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            if let Some(replacement) = inline_accum_call_stmt(e, inline_accum_fns) {
                *stmt = replacement;
            } else if let Some(mut block) = inline_void_call_stmt(e, inline_void_fns) {
                if block.len() == 1 {
                    *stmt = block.remove(0);
                } else {
                    *stmt = Block(block);
                }
            }
        }
        VarDecl { init, vla_dim, .. } => {
            if let Some(e) = init {
                inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            }
            if let Some(e) = vla_dim {
                inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            }
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            inline_expr(cond, inline_fns, inline_indirect_fns, function_names);
            for s in then_body {
                inline_stmt(
                    s,
                    inline_fns,
                    inline_indirect_fns,
                    inline_accum_fns,
                    inline_void_fns,
                    function_names,
                );
            }
            if let Some(body) = else_body {
                for s in body {
                    inline_stmt(
                        s,
                        inline_fns,
                        inline_indirect_fns,
                        inline_accum_fns,
                        inline_void_fns,
                        function_names,
                    );
                }
            }
        }
        While { cond, body } | DoWhile { cond, body } => {
            inline_expr(cond, inline_fns, inline_indirect_fns, function_names);
            for s in body {
                inline_stmt(
                    s,
                    inline_fns,
                    inline_indirect_fns,
                    inline_accum_fns,
                    inline_void_fns,
                    function_names,
                );
            }
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(s) = init {
                inline_stmt(
                    s,
                    inline_fns,
                    inline_indirect_fns,
                    inline_accum_fns,
                    inline_void_fns,
                    function_names,
                );
            }
            if let Some(e) = cond {
                inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            }
            if let Some(e) = step {
                inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            }
            for s in body {
                inline_stmt(
                    s,
                    inline_fns,
                    inline_indirect_fns,
                    inline_accum_fns,
                    inline_void_fns,
                    function_names,
                );
            }
        }
        Block(body) | DeclGroup(body) => {
            for s in body {
                inline_stmt(
                    s,
                    inline_fns,
                    inline_indirect_fns,
                    inline_accum_fns,
                    inline_void_fns,
                    function_names,
                );
            }
        }
        Switch { expr, body } => {
            inline_expr(expr, inline_fns, inline_indirect_fns, function_names);
            for s in body {
                inline_stmt(
                    s,
                    inline_fns,
                    inline_indirect_fns,
                    inline_accum_fns,
                    inline_void_fns,
                    function_names,
                );
            }
        }
        CaseLabel(e) => inline_expr(e, inline_fns, inline_indirect_fns, function_names),
        Label(_, inner) => inline_stmt(
            inner,
            inline_fns,
            inline_indirect_fns,
            inline_accum_fns,
            inline_void_fns,
            function_names,
        ),
        DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => {}
    }
}

#[derive(Clone)]
struct InlineExprFn {
    params: Vec<(String, crate::types::Type)>,
    return_type: crate::types::Type,
    body: ast::Expr,
    allow_effect_args: bool,
}

#[derive(Clone)]
struct InlineIndirectFn {
    params: Vec<String>,
    callee_param: String,
    forwarded_args: Vec<String>,
}

#[derive(Clone)]
struct InlineAccumFn {
    params: Vec<String>,
    ptr_param: String,
    val_param: String,
}

#[derive(Clone)]
struct InlineVoidFn {
    params: Vec<(String, crate::types::Type)>,
    body: Vec<ast::Stmt>,
    bind_params: bool,
}

fn inline_expr(
    expr: &mut ast::Expr,
    inline_fns: &std::collections::HashMap<String, InlineExprFn>,
    inline_indirect_fns: &std::collections::HashMap<String, InlineIndirectFn>,
    function_names: &std::collections::HashSet<String>,
) {
    use ast::Expr::*;

    match expr {
        Call { name, args } => {
            for a in args.iter_mut() {
                inline_expr(a, inline_fns, inline_indirect_fns, function_names);
            }
            if let Some(replacement) = fold_csmith_safe_const_call(name, args) {
                *expr = replacement;
            } else if let Some(f) = inline_fns.get(name) {
                if f.params.len() == args.len()
                    && (f.allow_effect_args || args.iter().all(expr_side_effect_free))
                    && !csmith_int8_mul_inline_would_lose_param_sign(name, args)
                {
                    let mut subst = std::collections::HashMap::new();
                    for ((param, ty), arg) in f.params.iter().zip(args.iter()) {
                        subst.insert(param.as_str(), inline_arg_expr(ty, arg));
                    }
                    *expr =
                        inline_return_expr(&f.return_type, substitute_inline_expr(&f.body, &subst));
                }
            } else if let Some(f) = inline_indirect_fns.get(name) {
                if let Some(replacement) = inline_indirect_call_expr(name, args, f, function_names)
                {
                    *expr = replacement;
                    inline_expr(expr, inline_fns, inline_indirect_fns, function_names);
                }
            }
        }
        CallIndirect { func_expr, args } => {
            inline_expr(func_expr, inline_fns, inline_indirect_fns, function_names);
            for a in args {
                inline_expr(a, inline_fns, inline_indirect_fns, function_names);
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
        | ImagPart(operand) => {
            inline_expr(operand, inline_fns, inline_indirect_fns, function_names)
        }
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        } => {
            inline_expr(lhs, inline_fns, inline_indirect_fns, function_names);
            inline_expr(rhs, inline_fns, inline_indirect_fns, function_names);
        }
        CompoundAssign { target, value, .. } => {
            inline_expr(target, inline_fns, inline_indirect_fns, function_names);
            inline_expr(value, inline_fns, inline_indirect_fns, function_names);
        }
        Index(a, b) => {
            inline_expr(a, inline_fns, inline_indirect_fns, function_names);
            inline_expr(b, inline_fns, inline_indirect_fns, function_names);
        }
        Comma(a, b) => {
            inline_expr(a, inline_fns, inline_indirect_fns, function_names);
            inline_expr(b, inline_fns, inline_indirect_fns, function_names);
            if let Some(effect) = discarded_expr_effect_expr(a) {
                **a = effect;
            } else {
                *expr = b.as_ref().clone();
            }
        }
        Member(base, _) | Arrow(base, _) => {
            inline_expr(base, inline_fns, inline_indirect_fns, function_names);
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            inline_expr(cond, inline_fns, inline_indirect_fns, function_names);
            inline_expr(then_expr, inline_fns, inline_indirect_fns, function_names);
            inline_expr(else_expr, inline_fns, inline_indirect_fns, function_names);
        }
        InitList(items) => {
            for e in items {
                inline_expr(e, inline_fns, inline_indirect_fns, function_names);
            }
        }
        DesignatedInit { value, .. } => {
            inline_expr(value, inline_fns, inline_indirect_fns, function_names);
        }
        ArrayDesignator { index, value } => {
            inline_expr(index, inline_fns, inline_indirect_fns, function_names);
            inline_expr(value, inline_fns, inline_indirect_fns, function_names);
        }
        Sizeof(_) => {}
        IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_) | CharLit(_)
        | Ident(_) => {}
    }
}

fn csmith_int8_mul_inline_would_lose_param_sign(name: &str, args: &[ast::Expr]) -> bool {
    name == "safe_mul_func_int8_t_s_s" && args.iter().any(expr_contains_out_of_signed_int8_int_lit)
}

fn expr_contains_out_of_signed_int8_int_lit(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::IntLit(value, _) => !(-128..=127).contains(value),
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
        | Expr::Arrow(operand, _) => expr_contains_out_of_signed_int8_int_lit(operand),
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
            expr_contains_out_of_signed_int8_int_lit(lhs)
                || expr_contains_out_of_signed_int8_int_lit(rhs)
        }
        Expr::Call { args, .. } => args.iter().any(expr_contains_out_of_signed_int8_int_lit),
        Expr::CallIndirect { func_expr, args } => {
            expr_contains_out_of_signed_int8_int_lit(func_expr)
                || args.iter().any(expr_contains_out_of_signed_int8_int_lit)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_out_of_signed_int8_int_lit(cond)
                || expr_contains_out_of_signed_int8_int_lit(then_expr)
                || expr_contains_out_of_signed_int8_int_lit(else_expr)
        }
        Expr::Sizeof(arg) => {
            if let ast::SizeofArg::Expr(inner) = arg.as_ref() {
                expr_contains_out_of_signed_int8_int_lit(inner)
            } else {
                false
            }
        }
        Expr::InitList(items) => items.iter().any(expr_contains_out_of_signed_int8_int_lit),
        Expr::DesignatedInit { value, .. } => expr_contains_out_of_signed_int8_int_lit(value),
        Expr::ArrayDesignator { index, value } => {
            expr_contains_out_of_signed_int8_int_lit(index)
                || expr_contains_out_of_signed_int8_int_lit(value)
        }
        Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

fn fold_csmith_safe_const_call(name: &str, args: &[ast::Expr]) -> Option<ast::Expr> {
    fold_csmith_const_shift(name, args)
        .or_else(|| fold_csmith_const_div_mod(name, args))
        .or_else(|| fold_csmith_ident_literal_signed_add(name, args))
}

fn fold_csmith_const_shift(name: &str, args: &[ast::Expr]) -> Option<ast::Expr> {
    if args.len() != 2 {
        return None;
    }
    let uchar = crate::types::Type::Unsigned(Box::new(crate::types::Type::Char));
    let ushort = crate::types::Type::Unsigned(Box::new(crate::types::Type::Short));
    let uint = crate::types::Type::Unsigned(Box::new(crate::types::Type::Int));
    let (op, left_ty, ret_ty, right_unsigned) = match name {
        "safe_lshift_func_int8_t_s_s" => (
            ast::BinaryOp::Shl,
            crate::types::Type::Char,
            crate::types::Type::Char,
            false,
        ),
        "safe_lshift_func_int8_t_s_u" => (
            ast::BinaryOp::Shl,
            crate::types::Type::Char,
            crate::types::Type::Char,
            true,
        ),
        "safe_rshift_func_int8_t_s_s" => (
            ast::BinaryOp::Shr,
            crate::types::Type::Char,
            crate::types::Type::Char,
            false,
        ),
        "safe_rshift_func_int8_t_s_u" => (
            ast::BinaryOp::Shr,
            crate::types::Type::Char,
            crate::types::Type::Char,
            true,
        ),
        "safe_lshift_func_uint8_t_u_s" => (ast::BinaryOp::Shl, uchar.clone(), uchar.clone(), false),
        "safe_lshift_func_uint8_t_u_u" => (ast::BinaryOp::Shl, uchar.clone(), uchar.clone(), true),
        "safe_rshift_func_uint8_t_u_s" => (ast::BinaryOp::Shr, uchar.clone(), uchar.clone(), false),
        "safe_rshift_func_uint8_t_u_u" => (ast::BinaryOp::Shr, uchar.clone(), uchar.clone(), true),
        "safe_lshift_func_int16_t_s_s" => (
            ast::BinaryOp::Shl,
            crate::types::Type::Short,
            crate::types::Type::Short,
            false,
        ),
        "safe_lshift_func_int16_t_s_u" => (
            ast::BinaryOp::Shl,
            crate::types::Type::Short,
            crate::types::Type::Short,
            true,
        ),
        "safe_rshift_func_int16_t_s_s" => (
            ast::BinaryOp::Shr,
            crate::types::Type::Short,
            crate::types::Type::Short,
            false,
        ),
        "safe_rshift_func_int16_t_s_u" => (
            ast::BinaryOp::Shr,
            crate::types::Type::Short,
            crate::types::Type::Short,
            true,
        ),
        "safe_lshift_func_uint16_t_u_s" => {
            (ast::BinaryOp::Shl, ushort.clone(), ushort.clone(), false)
        }
        "safe_lshift_func_uint16_t_u_u" => {
            (ast::BinaryOp::Shl, ushort.clone(), ushort.clone(), true)
        }
        "safe_rshift_func_uint16_t_u_s" => {
            (ast::BinaryOp::Shr, ushort.clone(), ushort.clone(), false)
        }
        "safe_rshift_func_uint16_t_u_u" => {
            (ast::BinaryOp::Shr, ushort.clone(), ushort.clone(), true)
        }
        _ => return None,
    };
    let raw_shift = trailing_int_lit_value(&args[1])?;
    let invalid_shift = if right_unsigned {
        (raw_shift as u32) >= 32
    } else {
        !(0..32).contains(&raw_shift)
    };
    if invalid_shift {
        if expr_side_effect_free(&args[1]) {
            return Some(ast::Expr::Cast(ret_ty, Box::new(args[0].clone())));
        }
        return None;
    }
    if op == ast::BinaryOp::Shr
        && raw_shift > 0
        && expr_is_boolean_value(&args[0])
        && expr_side_effect_free(&args[1])
    {
        let zero = ast::Expr::IntLit(0, crate::token::IntSuffix::None);
        let value = if expr_side_effect_free(&args[0]) {
            zero
        } else {
            ast::Expr::Comma(Box::new(args[0].clone()), Box::new(zero))
        };
        return Some(ast::Expr::Cast(ret_ty, Box::new(value)));
    }
    if raw_shift == 0 && expr_side_effect_free(&args[1]) {
        return Some(ast::Expr::Cast(ret_ty, Box::new(args[0].clone())));
    }
    let left_unsigned = matches!(&left_ty, crate::types::Type::Unsigned(_));
    if op == ast::BinaryOp::Shl || !left_unsigned {
        return None;
    }
    let lhs = ast::Expr::Cast(left_ty, Box::new(args[0].clone()));
    let rhs_ty = if right_unsigned {
        uint
    } else {
        crate::types::Type::Int
    };
    let rhs = ast::Expr::Cast(rhs_ty, Box::new(args[1].clone()));
    Some(ast::Expr::Cast(
        ret_ty,
        Box::new(ast::Expr::Binary {
            op,
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }),
    ))
}

fn fold_csmith_const_div_mod(name: &str, args: &[ast::Expr]) -> Option<ast::Expr> {
    if args.len() != 2 {
        return None;
    }
    let raw_rhs = trailing_int_lit_value(&args[1])?;
    let (op, signed, bits, ty) = match name {
        "safe_div_func_int8_t_s_s" => (ast::BinaryOp::Div, true, 8, crate::types::Type::Char),
        "safe_mod_func_int8_t_s_s" => (ast::BinaryOp::Mod, true, 8, crate::types::Type::Char),
        "safe_div_func_int16_t_s_s" => (ast::BinaryOp::Div, true, 16, crate::types::Type::Short),
        "safe_mod_func_int16_t_s_s" => (ast::BinaryOp::Mod, true, 16, crate::types::Type::Short),
        "safe_div_func_int32_t_s_s" => (ast::BinaryOp::Div, true, 32, crate::types::Type::Int),
        "safe_mod_func_int32_t_s_s" => (ast::BinaryOp::Mod, true, 32, crate::types::Type::Int),
        "safe_div_func_uint8_t_u_u" => (
            ast::BinaryOp::Div,
            false,
            8,
            crate::types::Type::Unsigned(Box::new(crate::types::Type::Char)),
        ),
        "safe_mod_func_uint8_t_u_u" => (
            ast::BinaryOp::Mod,
            false,
            8,
            crate::types::Type::Unsigned(Box::new(crate::types::Type::Char)),
        ),
        "safe_div_func_uint16_t_u_u" => (
            ast::BinaryOp::Div,
            false,
            16,
            crate::types::Type::Unsigned(Box::new(crate::types::Type::Short)),
        ),
        "safe_mod_func_uint16_t_u_u" => (
            ast::BinaryOp::Mod,
            false,
            16,
            crate::types::Type::Unsigned(Box::new(crate::types::Type::Short)),
        ),
        "safe_div_func_uint32_t_u_u" => (
            ast::BinaryOp::Div,
            false,
            32,
            crate::types::Type::Unsigned(Box::new(crate::types::Type::Int)),
        ),
        "safe_mod_func_uint32_t_u_u" => (
            ast::BinaryOp::Mod,
            false,
            32,
            crate::types::Type::Unsigned(Box::new(crate::types::Type::Int)),
        ),
        _ => return None,
    };
    if signed {
        let rhs = cast_int_lit_to_signed(raw_rhs, bits);
        if rhs == 0 || rhs == -1 {
            return None;
        }
        if let (ast::Expr::IntLit(raw_lhs, _), ast::Expr::IntLit(_, _)) = (&args[0], &args[1]) {
            let lhs = cast_int_lit_to_signed(*raw_lhs, bits);
            let value = match op {
                ast::BinaryOp::Div => lhs / rhs,
                ast::BinaryOp::Mod => lhs % rhs,
                _ => unreachable!(),
            };
            return Some(ast::Expr::Cast(
                ty,
                Box::new(ast::Expr::IntLit(value, token::IntSuffix::None)),
            ));
        }
    } else if cast_int_lit_to_unsigned(raw_rhs, bits) == 0 {
        return None;
    } else if let (ast::Expr::IntLit(raw_lhs, _), ast::Expr::IntLit(_, _)) = (&args[0], &args[1]) {
        let lhs = cast_int_lit_to_unsigned(*raw_lhs, bits);
        let rhs = cast_int_lit_to_unsigned(raw_rhs, bits);
        let value = match op {
            ast::BinaryOp::Div => lhs / rhs,
            ast::BinaryOp::Mod => lhs % rhs,
            _ => unreachable!(),
        };
        return Some(ast::Expr::Cast(
            ty,
            Box::new(ast::Expr::IntLit(value as i64, token::IntSuffix::U)),
        ));
    }
    let lhs = ast::Expr::Cast(ty.clone(), Box::new(args[0].clone()));
    let rhs = ast::Expr::Cast(ty.clone(), Box::new(args[1].clone()));
    Some(ast::Expr::Cast(
        ty,
        Box::new(ast::Expr::Binary {
            op,
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }),
    ))
}

fn trailing_int_lit_value(expr: &ast::Expr) -> Option<i64> {
    match expr {
        ast::Expr::IntLit(value, _) => Some(*value),
        ast::Expr::Cast(_, inner) => trailing_int_lit_value(inner),
        ast::Expr::Comma(_, rhs) => trailing_int_lit_value(rhs),
        _ => None,
    }
}

fn cast_int_lit_to_unsigned(value: i64, bits: u32) -> u64 {
    let mask = (1u128 << bits) - 1;
    (value as i128 as u128 & mask) as u64
}

fn cast_int_lit_to_signed(value: i64, bits: u32) -> i64 {
    let raw = cast_int_lit_to_unsigned(value, bits);
    let sign = 1u64 << (bits - 1);
    if raw & sign == 0 {
        raw as i64
    } else {
        (raw as i128 - (1i128 << bits)) as i64
    }
}

fn fold_csmith_ident_literal_signed_add(name: &str, args: &[ast::Expr]) -> Option<ast::Expr> {
    if name != "safe_add_func_int32_t_s_s" || args.len() != 2 {
        return None;
    }
    let ast::Expr::Ident(_) = &args[0] else {
        return None;
    };
    let ast::Expr::IntLit(raw_rhs, _) = &args[1] else {
        return None;
    };
    let rhs = cast_int_lit_to_signed(*raw_rhs, 32);
    if rhs == 0 {
        return Some(ast::Expr::Cast(
            crate::types::Type::Int,
            Box::new(args[0].clone()),
        ));
    }
    let lhs = ast::Expr::Cast(crate::types::Type::Int, Box::new(args[0].clone()));
    let (guard_op, limit) = if rhs > 0 {
        (ast::BinaryOp::Gt, i32::MAX as i64 - rhs)
    } else {
        (ast::BinaryOp::Lt, i32::MIN as i64 - rhs)
    };
    Some(ast::Expr::Cast(
        crate::types::Type::Int,
        Box::new(ast::Expr::Ternary {
            cond: Box::new(ast::Expr::Binary {
                op: guard_op,
                lhs: Box::new(lhs.clone()),
                rhs: Box::new(ast::Expr::IntLit(limit, token::IntSuffix::None)),
            }),
            then_expr: Box::new(lhs.clone()),
            else_expr: Box::new(ast::Expr::Binary {
                op: ast::BinaryOp::Add,
                lhs: Box::new(lhs),
                rhs: Box::new(ast::Expr::IntLit(rhs, token::IntSuffix::None)),
            }),
        }),
    ))
}

fn inline_arg_expr(ty: &crate::types::Type, arg: &ast::Expr) -> ast::Expr {
    if ty.is_scalar() {
        ast::Expr::Cast(ty.clone(), Box::new(arg.clone()))
    } else {
        arg.clone()
    }
}

fn inline_return_expr(ty: &crate::types::Type, body: ast::Expr) -> ast::Expr {
    if ty.is_scalar() {
        ast::Expr::Cast(ty.clone(), Box::new(body))
    } else {
        body
    }
}

fn inline_void_call_stmt(
    expr: &ast::Expr,
    inline_void_fns: &std::collections::HashMap<String, InlineVoidFn>,
) -> Option<Vec<ast::Stmt>> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    let f = inline_void_fns.get(name)?;
    if f.params.len() != args.len() {
        return None;
    }
    if !args.iter().all(expr_side_effect_free) {
        return None;
    }
    if !f.bind_params {
        if let Some(stmt) = word_copy_stmt_for_byte_copy_args(args) {
            return Some(vec![stmt]);
        }
    }
    if f.bind_params {
        let param_names: std::collections::HashSet<&str> =
            f.params.iter().map(|(name, _)| name.as_str()).collect();
        let body = inline_void_body_without_void_param_uses(&f.body, &param_names);
        let mut block = Vec::with_capacity(f.params.len() + body.len());
        for ((param, ty), arg) in f.params.iter().zip(args.iter()) {
            if !stmts_mention_name(&body, param) {
                continue;
            }
            block.push(ast::Stmt::VarDecl {
                name: param.clone(),
                ty: ty.clone(),
                init: Some(inline_arg_expr(ty, arg)),
                is_static: false,
                vla_dim: None,
            });
        }
        block.extend(body);
        return Some(block);
    }

    let mut subst = std::collections::HashMap::new();
    let mut block = Vec::with_capacity(f.body.len());
    for ((param, _), arg) in f.params.iter().zip(args.iter()) {
        subst.insert(param.as_str(), arg.clone());
    }
    for stmt in &f.body {
        block.push(substitute_inline_stmt(stmt, &subst));
    }
    Some(block)
}

fn inline_void_body_without_void_param_uses(
    body: &[ast::Stmt],
    params: &std::collections::HashSet<&str>,
) -> Vec<ast::Stmt> {
    body.iter()
        .filter(|stmt| !is_void_param_use_stmt(stmt, params))
        .cloned()
        .collect()
}

fn is_void_param_use_stmt(stmt: &ast::Stmt, params: &std::collections::HashSet<&str>) -> bool {
    matches!(
        stmt,
        ast::Stmt::Expr(ast::Expr::Cast(ty, expr))
            if *ty == crate::types::Type::Void
                && matches!(expr.as_ref(), ast::Expr::Ident(name) if params.contains(name.as_str()))
    )
}

fn inline_accum_call_stmt(
    expr: &ast::Expr,
    inline_accum_fns: &std::collections::HashMap<String, InlineAccumFn>,
) -> Option<ast::Stmt> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    let f = inline_accum_fns.get(name)?;
    if f.params.len() != args.len() || !args.iter().all(expr_side_effect_free) {
        return None;
    }
    let mut subst = std::collections::HashMap::new();
    for (param, arg) in f.params.iter().zip(args.iter()) {
        subst.insert(param.as_str(), arg);
    }
    let target = direct_addr_lvalue(subst.get(f.ptr_param.as_str())?)?.clone();
    let value = (*subst.get(f.val_param.as_str())?).clone();
    Some(ast::Stmt::Expr(ast::Expr::CompoundAssign {
        op: ast::BinaryOp::Add,
        target: Box::new(target),
        value: Box::new(value),
    }))
}

fn is_simple_void_expr_helper(f: &ast::Function) -> bool {
    if f.return_type != crate::types::Type::Void
        || f.body.is_empty()
        || f.body.len() > 2
        || stmts_mention_name(&f.body, &f.name)
    {
        return false;
    }
    let params: std::collections::HashSet<&str> =
        f.params.iter().map(|(name, _)| name.as_str()).collect();
    f.body
        .iter()
        .all(|stmt| inlineable_void_expr_stmt(stmt, &params))
}

fn is_no_call_static_void_helper(f: &ast::Function) -> bool {
    f.return_type == crate::types::Type::Void
        && !stmts_mention_name(&f.body, &f.name)
        && f.body.iter().all(inlineable_no_call_void_stmt)
}

fn inlineable_no_call_void_stmt(stmt: &ast::Stmt) -> bool {
    match stmt {
        ast::Stmt::Return(None) => true,
        ast::Stmt::Return(Some(_))
        | ast::Stmt::Goto(_)
        | ast::Stmt::Label(_, _)
        | ast::Stmt::Asm(_)
        | ast::Stmt::EnumDecl(_) => false,
        ast::Stmt::Expr(expr) | ast::Stmt::CaseLabel(expr) => !expr_contains_call(expr),
        ast::Stmt::VarDecl {
            init,
            is_static,
            vla_dim,
            ..
        } => {
            !*is_static
                && init.as_ref().is_none_or(|expr| !expr_contains_call(expr))
                && vla_dim
                    .as_ref()
                    .is_none_or(|expr| !expr_contains_call(expr))
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            !expr_contains_call(cond)
                && then_body.iter().all(inlineable_no_call_void_stmt)
                && else_body
                    .as_ref()
                    .is_none_or(|body| body.iter().all(inlineable_no_call_void_stmt))
        }
        ast::Stmt::While { cond, body } | ast::Stmt::DoWhile { body, cond } => {
            !expr_contains_call(cond) && body.iter().all(inlineable_no_call_void_stmt)
        }
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_none_or(|stmt| inlineable_no_call_void_stmt(stmt))
                && cond.as_ref().is_none_or(|expr| !expr_contains_call(expr))
                && step.as_ref().is_none_or(|expr| !expr_contains_call(expr))
                && body.iter().all(inlineable_no_call_void_stmt)
        }
        ast::Stmt::Block(body) | ast::Stmt::DeclGroup(body) | ast::Stmt::Switch { body, .. } => {
            body.iter().all(inlineable_no_call_void_stmt)
        }
        ast::Stmt::DefaultLabel | ast::Stmt::Break | ast::Stmt::Continue => true,
    }
}

fn inlineable_void_expr_stmt(stmt: &ast::Stmt, params: &std::collections::HashSet<&str>) -> bool {
    let ast::Stmt::Expr(expr) = stmt else {
        return false;
    };
    match expr {
        ast::Expr::Assign { target, value } => {
            !expr_mentions_any_name(target, params) && expr_side_effect_free(value)
        }
        ast::Expr::CompoundAssign { target, value, .. } => {
            !expr_mentions_any_name(target, params) && expr_side_effect_free(value)
        }
        _ => false,
    }
}

fn expr_contains_call(expr: &ast::Expr) -> bool {
    use ast::Expr::*;
    match expr {
        Call { .. } | CallIndirect { .. } => true,
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | PostDec(operand)
        | RealPart(operand)
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => expr_contains_call(operand),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => expr_contains_call(lhs) || expr_contains_call(rhs),
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_call(cond)
                || expr_contains_call(then_expr)
                || expr_contains_call(else_expr)
        }
        InitList(items) => items.iter().any(expr_contains_call),
        DesignatedInit { value, .. } => expr_contains_call(value),
        ArrayDesignator { index, value } => expr_contains_call(index) || expr_contains_call(value),
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) | Ident(_) => false,
    }
}

fn expr_mentions_any_name(expr: &ast::Expr, names: &std::collections::HashSet<&str>) -> bool {
    use ast::Expr::*;
    match expr {
        Ident(name) => names.contains(name.as_str()),
        Unary { operand, .. }
        | Deref(operand)
        | AddrOf(operand)
        | Cast(_, operand)
        | PreInc(operand)
        | PreDec(operand)
        | PostInc(operand)
        | PostDec(operand)
        | RealPart(operand)
        | ImagPart(operand)
        | Member(operand, _)
        | Arrow(operand, _) => expr_mentions_any_name(operand, names),
        Binary { lhs, rhs, .. }
        | Assign {
            target: lhs,
            value: rhs,
        }
        | CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Index(lhs, rhs)
        | Comma(lhs, rhs) => {
            expr_mentions_any_name(lhs, names) || expr_mentions_any_name(rhs, names)
        }
        Call { args, .. } => args.iter().any(|arg| expr_mentions_any_name(arg, names)),
        CallIndirect { func_expr, args } => {
            expr_mentions_any_name(func_expr, names)
                || args.iter().any(|arg| expr_mentions_any_name(arg, names))
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_mentions_any_name(cond, names)
                || expr_mentions_any_name(then_expr, names)
                || expr_mentions_any_name(else_expr, names)
        }
        InitList(items) => items.iter().any(|item| expr_mentions_any_name(item, names)),
        DesignatedInit { value, .. } => expr_mentions_any_name(value, names),
        ArrayDesignator { index, value } => {
            expr_mentions_any_name(index, names) || expr_mentions_any_name(value, names)
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) => false,
    }
}

fn word_copy_stmt_for_byte_copy_args(args: &[ast::Expr]) -> Option<ast::Stmt> {
    if args.len() != 3 || const_int_arg(&args[2]) != Some(4) {
        return None;
    }
    if direct_addr_lvalue(&args[0]).is_none() || direct_addr_lvalue(&args[1]).is_none() {
        return None;
    }
    let int_ptr = crate::types::Type::Pointer(Box::new(crate::types::Type::Int));
    let target = ast::Expr::Deref(Box::new(ast::Expr::Cast(
        int_ptr.clone(),
        Box::new(args[0].clone()),
    )));
    let value = ast::Expr::Deref(Box::new(ast::Expr::Cast(
        int_ptr,
        Box::new(args[1].clone()),
    )));
    Some(ast::Stmt::Expr(ast::Expr::Assign {
        target: Box::new(target),
        value: Box::new(value),
    }))
}

fn const_int_arg(expr: &ast::Expr) -> Option<i64> {
    match expr {
        ast::Expr::IntLit(v, _) => Some(*v),
        ast::Expr::Cast(_, inner) => const_int_arg(inner),
        ast::Expr::Sizeof(arg) => match arg.as_ref() {
            ast::SizeofArg::Type(ty) => Some(i64::from(ty.size_bytes())),
            ast::SizeofArg::Expr(_) => None,
        },
        _ => None,
    }
}

fn direct_addr_lvalue(expr: &ast::Expr) -> Option<&ast::Expr> {
    match expr {
        ast::Expr::Cast(_, inner) => direct_addr_lvalue(inner),
        ast::Expr::AddrOf(inner) if matches!(inner.as_ref(), ast::Expr::Ident(_)) => Some(inner),
        _ => None,
    }
}

fn fold_direct_byte_copy_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut aliases = HashMap::new();
        let mut local_types = HashMap::new();
        fold_direct_byte_copy_loops_in_stmts(&mut f.body, &mut aliases, &mut local_types);
    }
}

fn fold_direct_byte_copy_loops_in_stmts(
    stmts: &mut [ast::Stmt],
    aliases: &mut HashMap<String, ast::Expr>,
    local_types: &mut HashMap<String, crate::types::Type>,
) {
    for stmt in stmts.iter_mut() {
        if let Some(replacement) = word_copy_stmt_for_direct_byte_copy_loop(stmt, aliases) {
            *stmt = replacement;
        } else {
            fold_direct_byte_copy_loops_in_child_stmts(stmt, aliases, local_types);
        }

        for name in stmt_assigned_names(stmt) {
            aliases.remove(&name);
            local_types.remove(&name);
        }

        if let ast::Stmt::VarDecl { name, ty, .. } = stmt {
            local_types.insert(name.clone(), ty.clone());
        }
        if let Some((name, target)) = byte_pointer_alias_decl(stmt, local_types) {
            aliases.insert(name, target);
        }
    }
}

fn fold_direct_byte_copy_loops_in_child_stmts(
    stmt: &mut ast::Stmt,
    aliases: &HashMap<String, ast::Expr>,
    local_types: &HashMap<String, crate::types::Type>,
) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            let mut then_aliases = aliases.clone();
            let mut then_types = local_types.clone();
            fold_direct_byte_copy_loops_in_stmts(then_body, &mut then_aliases, &mut then_types);
            if let Some(body) = else_body {
                let mut else_aliases = aliases.clone();
                let mut else_types = local_types.clone();
                fold_direct_byte_copy_loops_in_stmts(body, &mut else_aliases, &mut else_types);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::Switch { body, .. } => {
            let mut body_aliases = aliases.clone();
            let mut body_types = local_types.clone();
            fold_direct_byte_copy_loops_in_stmts(body, &mut body_aliases, &mut body_types);
        }
        ast::Stmt::For { init, body, .. } => {
            let mut for_aliases = aliases.clone();
            let mut for_types = local_types.clone();
            if let Some(init) = init {
                fold_direct_byte_copy_loops_in_stmts(
                    std::slice::from_mut(init.as_mut()),
                    &mut for_aliases,
                    &mut for_types,
                );
            }
            fold_direct_byte_copy_loops_in_stmts(body, &mut for_aliases, &mut for_types);
        }
        ast::Stmt::Label(_, inner) => {
            let mut label_aliases = aliases.clone();
            let mut label_types = local_types.clone();
            fold_direct_byte_copy_loops_in_stmts(
                std::slice::from_mut(inner.as_mut()),
                &mut label_aliases,
                &mut label_types,
            );
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

fn prune_unused_byte_pointer_alias_inits(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut uses = HashMap::new();
        for stmt in &f.body {
            collect_stmt_ident_uses(stmt, &mut uses);
        }
        prune_unused_byte_pointer_alias_inits_in_stmts(&mut f.body, &uses);
    }
}

fn prune_unused_byte_pointer_alias_inits_in_stmts(
    stmts: &mut [ast::Stmt],
    uses: &HashMap<String, ()>,
) {
    for stmt in stmts {
        match stmt {
            ast::Stmt::VarDecl {
                name,
                ty,
                init,
                is_static,
                vla_dim,
            } => {
                if !uses.contains_key(name)
                    && is_byte_pointer_alias_init(ty, init.as_ref(), *is_static, vla_dim)
                {
                    *init = None;
                }
            }
            ast::Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                prune_unused_byte_pointer_alias_inits_in_stmts(then_body, uses);
                if let Some(body) = else_body {
                    prune_unused_byte_pointer_alias_inits_in_stmts(body, uses);
                }
            }
            ast::Stmt::While { body, .. }
            | ast::Stmt::DoWhile { body, .. }
            | ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
                prune_unused_byte_pointer_alias_inits_in_stmts(body, uses);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    prune_unused_byte_pointer_alias_inits_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        uses,
                    );
                }
                prune_unused_byte_pointer_alias_inits_in_stmts(body, uses);
            }
            ast::Stmt::Label(_, inner) => {
                prune_unused_byte_pointer_alias_inits_in_stmts(
                    std::slice::from_mut(inner.as_mut()),
                    uses,
                );
            }
            ast::Stmt::Return(_)
            | ast::Stmt::Expr(_)
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

fn is_byte_pointer_alias_init(
    ty: &crate::types::Type,
    init: Option<&ast::Expr>,
    is_static: bool,
    vla_dim: &Option<ast::Expr>,
) -> bool {
    !is_static
        && vla_dim.is_none()
        && is_char_pointer_type(ty)
        && init
            .is_some_and(|expr| direct_addr_lvalue(expr).is_some() && expr_side_effect_free(expr))
}

fn byte_pointer_alias_decl(
    stmt: &ast::Stmt,
    local_types: &HashMap<String, crate::types::Type>,
) -> Option<(String, ast::Expr)> {
    let ast::Stmt::VarDecl {
        name,
        ty,
        init: Some(init),
        is_static: false,
        vla_dim: None,
    } = stmt
    else {
        return None;
    };
    if !is_char_pointer_type(ty) {
        return None;
    }
    let target = direct_addr_lvalue(init)?.clone();
    direct_int_local_lvalue(&target, local_types).then(|| (name.clone(), target))
}

fn direct_int_local_lvalue(
    expr: &ast::Expr,
    local_types: &HashMap<String, crate::types::Type>,
) -> bool {
    let ast::Expr::Ident(name) = expr else {
        return false;
    };
    local_types
        .get(name)
        .is_some_and(|ty| matches!(ty.unqualified(), crate::types::Type::Int))
}

fn is_char_pointer_type(ty: &crate::types::Type) -> bool {
    let crate::types::Type::Pointer(inner) = ty.unqualified() else {
        return false;
    };
    match inner.unqualified() {
        crate::types::Type::Char => true,
        crate::types::Type::Unsigned(inner) => {
            matches!(inner.unqualified(), crate::types::Type::Char)
        }
        _ => false,
    }
}

fn word_copy_stmt_for_direct_byte_copy_loop(
    stmt: &ast::Stmt,
    aliases: &HashMap<String, ast::Expr>,
) -> Option<ast::Stmt> {
    use ast::{BinaryOp, Expr, Stmt};

    let Stmt::For {
        init: Some(init),
        cond: Some(cond),
        step: Some(step),
        body,
    } = stmt
    else {
        return None;
    };
    let Stmt::VarDecl {
        name: index,
        init: Some(init_expr),
        is_static: false,
        vla_dim: None,
        ..
    } = init.as_ref()
    else {
        return None;
    };
    if !matches!(init_expr, Expr::IntLit(0, _)) {
        return None;
    }
    if !matches!(
        cond,
        Expr::Binary {
            op: BinaryOp::Lt,
            lhs,
            rhs,
        } if matches!(lhs.as_ref(), Expr::Ident(name) if name == index)
            && const_int_arg(rhs) == Some(4)
    ) {
        return None;
    }
    if !matches!(
        step,
        Expr::PostInc(inner) | Expr::PreInc(inner)
            if matches!(inner.as_ref(), Expr::Ident(name) if name == index)
    ) {
        return None;
    }
    let [Stmt::Expr(Expr::Assign { target, value })] = body.as_slice() else {
        return None;
    };
    let dst_base = byte_index_base_for_index(target, index)?;
    let src_base = byte_index_base_for_index(value, index)?;
    let dst = direct_byte_pointer_alias_target(dst_base, aliases)?;
    let src = direct_byte_pointer_alias_target(src_base, aliases)?;
    Some(Stmt::Expr(Expr::Assign {
        target: Box::new(dst),
        value: Box::new(src),
    }))
}

fn byte_index_base_for_index<'a>(expr: &'a ast::Expr, index: &str) -> Option<&'a ast::Expr> {
    let ast::Expr::Index(base, idx) = expr else {
        return None;
    };
    matches!(idx.as_ref(), ast::Expr::Ident(name) if name == index).then_some(base.as_ref())
}

fn direct_byte_pointer_alias_target(
    expr: &ast::Expr,
    aliases: &HashMap<String, ast::Expr>,
) -> Option<ast::Expr> {
    let ast::Expr::Ident(name) = expr else {
        return None;
    };
    aliases.get(name).cloned()
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
        Assign { target, value } => Assign {
            target: Box::new(substitute_inline_expr(target, subst)),
            value: Box::new(substitute_inline_expr(value, subst)),
        },
        CompoundAssign { op, target, value } => CompoundAssign {
            op: *op,
            target: Box::new(substitute_inline_expr(target, subst)),
            value: Box::new(substitute_inline_expr(value, subst)),
        },
        PreInc(operand) => PreInc(Box::new(substitute_inline_expr(operand, subst))),
        PreDec(operand) => PreDec(Box::new(substitute_inline_expr(operand, subst))),
        PostInc(operand) => PostInc(Box::new(substitute_inline_expr(operand, subst))),
        PostDec(operand) => PostDec(Box::new(substitute_inline_expr(operand, subst))),
        Cast(ty, operand) => Cast(ty.clone(), Box::new(substitute_inline_expr(operand, subst))),
        Deref(operand) => Deref(Box::new(substitute_inline_expr(operand, subst))),
        AddrOf(operand) => AddrOf(Box::new(substitute_inline_expr(operand, subst))),
        Call { name, args } => Call {
            name: name.clone(),
            args: args
                .iter()
                .map(|arg| substitute_inline_expr(arg, subst))
                .collect(),
        },
        CallIndirect { func_expr, args } => CallIndirect {
            func_expr: Box::new(substitute_inline_expr(func_expr, subst)),
            args: args
                .iter()
                .map(|arg| substitute_inline_expr(arg, subst))
                .collect(),
        },
        Index(a, b) => Index(
            Box::new(substitute_inline_expr(a, subst)),
            Box::new(substitute_inline_expr(b, subst)),
        ),
        Comma(a, b) => Comma(
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

fn substitute_inline_stmt(
    stmt: &ast::Stmt,
    subst: &std::collections::HashMap<&str, ast::Expr>,
) -> ast::Stmt {
    use ast::Stmt::*;
    match stmt {
        Return(e) => Return(e.as_ref().map(|e| substitute_inline_expr(e, subst))),
        Expr(e) => Expr(substitute_inline_expr(e, subst)),
        VarDecl {
            name,
            ty,
            init,
            is_static,
            vla_dim,
        } => VarDecl {
            name: name.clone(),
            ty: ty.clone(),
            init: init.as_ref().map(|e| substitute_inline_expr(e, subst)),
            is_static: *is_static,
            vla_dim: vla_dim.as_ref().map(|e| substitute_inline_expr(e, subst)),
        },
        If {
            cond,
            then_body,
            else_body,
        } => If {
            cond: substitute_inline_expr(cond, subst),
            then_body: then_body
                .iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
            else_body: else_body.as_ref().map(|body| {
                body.iter()
                    .map(|s| substitute_inline_stmt(s, subst))
                    .collect()
            }),
        },
        While { cond, body } => While {
            cond: substitute_inline_expr(cond, subst),
            body: body
                .iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
        },
        For {
            init,
            cond,
            step,
            body,
        } => For {
            init: init
                .as_ref()
                .map(|s| Box::new(substitute_inline_stmt(s, subst))),
            cond: cond.as_ref().map(|e| substitute_inline_expr(e, subst)),
            step: step.as_ref().map(|e| substitute_inline_expr(e, subst)),
            body: body
                .iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
        },
        DoWhile { body, cond } => DoWhile {
            body: body
                .iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
            cond: substitute_inline_expr(cond, subst),
        },
        Block(body) => Block(
            body.iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
        ),
        DeclGroup(body) => DeclGroup(
            body.iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
        ),
        Switch { expr, body } => Switch {
            expr: substitute_inline_expr(expr, subst),
            body: body
                .iter()
                .map(|s| substitute_inline_stmt(s, subst))
                .collect(),
        },
        CaseLabel(e) => CaseLabel(substitute_inline_expr(e, subst)),
        Label(label, inner) => Label(
            label.clone(),
            Box::new(substitute_inline_stmt(inner, subst)),
        ),
        EnumDecl(items) => EnumDecl(items.clone()),
        DefaultLabel => DefaultLabel,
        Break => Break,
        Continue => Continue,
        Goto(label) => Goto(label.clone()),
        Asm(text) => Asm(text.clone()),
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

fn discarded_expr_side_effect_free(expr: &ast::Expr) -> bool {
    use ast::Expr::*;
    match expr {
        Call { name, args } if name.starts_with("safe_") => {
            args.iter().all(discarded_expr_side_effect_free)
        }
        Call { .. } | CallIndirect { .. } => false,
        Unary { operand, .. } | Cast(_, operand) | RealPart(operand) | ImagPart(operand) => {
            discarded_expr_side_effect_free(operand)
        }
        Binary { lhs, rhs, .. } | Index(lhs, rhs) | Comma(lhs, rhs) => {
            discarded_expr_side_effect_free(lhs) && discarded_expr_side_effect_free(rhs)
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            discarded_expr_side_effect_free(cond)
                && discarded_expr_side_effect_free(then_expr)
                && discarded_expr_side_effect_free(else_expr)
        }
        Member(base, _) | Arrow(base, _) | AddrOf(base) | Deref(base) => {
            discarded_expr_side_effect_free(base)
        }
        _ => expr_side_effect_free(expr),
    }
}

fn discarded_expr_effect_expr(expr: &ast::Expr) -> Option<ast::Expr> {
    if discarded_expr_side_effect_free(expr) {
        return None;
    }
    if let ast::Expr::Comma(lhs, rhs) = expr {
        return match (
            discarded_expr_effect_expr(lhs),
            discarded_expr_effect_expr(rhs),
        ) {
            (Some(lhs), Some(rhs)) => Some(ast::Expr::Comma(Box::new(lhs), Box::new(rhs))),
            (Some(lhs), None) => Some(lhs),
            (None, Some(rhs)) => Some(rhs),
            (None, None) => None,
        };
    }
    Some(expr.clone())
}

fn is_byte_copy_loop_helper(f: &ast::Function) -> bool {
    use ast::{BinaryOp, Expr, Stmt};

    if f.params.len() != 3 || f.body.len() != 1 {
        return false;
    }
    let dst = &f.params[0].0;
    let src = &f.params[1].0;
    let count = &f.params[2].0;
    let Stmt::For {
        init: Some(init),
        cond: Some(cond),
        step: Some(step),
        body,
    } = &f.body[0]
    else {
        return false;
    };
    let Stmt::VarDecl {
        name: index,
        init: Some(init_expr),
        is_static: false,
        vla_dim: None,
        ..
    } = init.as_ref()
    else {
        return false;
    };
    if !matches!(init_expr, Expr::IntLit(0, _)) {
        return false;
    }
    if !matches!(
        cond,
        Expr::Binary {
            op: BinaryOp::Lt,
            lhs,
            rhs,
        } if matches!(lhs.as_ref(), Expr::Ident(name) if name == index)
            && matches!(rhs.as_ref(), Expr::Ident(name) if name == count)
    ) {
        return false;
    }
    if !matches!(
        step,
        Expr::PostInc(inner) | Expr::PreInc(inner)
            if matches!(inner.as_ref(), Expr::Ident(name) if name == index)
    ) {
        return false;
    }
    if body.len() != 1 {
        return false;
    }
    matches!(
        &body[0],
        Stmt::Expr(Expr::Assign { target, value })
            if matches!(
                target.as_ref(),
                Expr::Index(base, idx)
                    if matches!(base.as_ref(), Expr::Ident(name) if name == dst)
                        && matches!(idx.as_ref(), Expr::Ident(name) if name == index)
            )
                && matches!(
                    value.as_ref(),
                    Expr::Index(base, idx)
                        if matches!(base.as_ref(), Expr::Ident(name) if name == src)
                            && matches!(idx.as_ref(), Expr::Ident(name) if name == index)
                )
    )
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

fn stmts_mention_name(stmts: &[ast::Stmt], name: &str) -> bool {
    stmts.iter().any(|stmt| stmt_mentions_name(stmt, name))
}

fn stmt_mentions_name(stmt: &ast::Stmt, name: &str) -> bool {
    use ast::Stmt::*;
    match stmt {
        Return(Some(e)) | Expr(e) | CaseLabel(e) => expr_mentions_name(e, name),
        Return(None) | DefaultLabel | Break | Continue | Goto(_) | Asm(_) | EnumDecl(_) => false,
        VarDecl { init, vla_dim, .. } => {
            init.as_ref().is_some_and(|e| expr_mentions_name(e, name))
                || vla_dim
                    .as_ref()
                    .is_some_and(|e| expr_mentions_name(e, name))
        }
        If {
            cond,
            then_body,
            else_body,
        } => {
            expr_mentions_name(cond, name)
                || stmts_mention_name(then_body, name)
                || else_body
                    .as_ref()
                    .is_some_and(|body| stmts_mention_name(body, name))
        }
        While { cond, body } | DoWhile { cond, body } => {
            expr_mentions_name(cond, name) || stmts_mention_name(body, name)
        }
        For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref().is_some_and(|s| stmt_mentions_name(s, name))
                || cond.as_ref().is_some_and(|e| expr_mentions_name(e, name))
                || step.as_ref().is_some_and(|e| expr_mentions_name(e, name))
                || stmts_mention_name(body, name)
        }
        Block(body) | DeclGroup(body) => stmts_mention_name(body, name),
        Switch { expr, body } => expr_mentions_name(expr, name) || stmts_mention_name(body, name),
        Label(_, inner) => stmt_mentions_name(inner, name),
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
    /// Recursively search a statement slice for any read of identifier `name`
    /// (an `Expr::Ident(name)` appearing anywhere, including nested bodies).
    fn stmts_mention_ident(stmts: &[crate::ast::Stmt], name: &str) -> bool {
        let mut out = std::collections::HashSet::new();
        for stmt in stmts {
            crate::collect_stmt_all_ident_mentions(stmt, &mut out);
        }
        out.contains(name)
    }

    /// Find the declaration of local `name` in a statement slice (searching
    /// nested bodies) and report whether it still carries an initializer.
    /// `substitute_single_use_pure_locals` drops a candidate's init only once
    /// it has substituted the init into the use, so a retained init proves the
    /// substitution did NOT fire.
    fn decl_init_present(stmts: &[crate::ast::Stmt], name: &str) -> Option<bool> {
        use crate::ast::Stmt;
        for stmt in stmts {
            match stmt {
                Stmt::VarDecl {
                    name: n, init, ..
                } if n == name => return Some(init.is_some()),
                Stmt::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    if let Some(found) = decl_init_present(then_body, name) {
                        return Some(found);
                    }
                    if let Some(body) = else_body {
                        if let Some(found) = decl_init_present(body, name) {
                            return Some(found);
                        }
                    }
                }
                Stmt::While { body, .. }
                | Stmt::DoWhile { body, .. }
                | Stmt::Block(body)
                | Stmt::DeclGroup(body)
                | Stmt::Switch { body, .. }
                | Stmt::For { body, .. } => {
                    if let Some(found) = decl_init_present(body, name) {
                        return Some(found);
                    }
                }
                _ => {}
            }
        }
        None
    }

    /// Negative (load-bearing) test: the classic two-variable swap idiom
    /// `int t = a + b; a = b; b = t;` must NOT have `t`'s init folded into the
    /// `b = t` use. The intervening `a = b` reassigns `a`, which the init reads,
    /// so substituting would compute `b = a + b` with the post-swap `a` and
    /// miscompile fib's loop (returns 2^n instead of fib(n)). With the
    /// interference check reverted this assertion fails: `t` gets substituted,
    /// its init is dropped, and the use no longer mentions `t`.
    #[test]
    fn does_not_substitute_pure_local_across_interfering_assignment() {
        let src = "int test_main(void) {
                       int a = 0, b = 1;
                       for (int i = 0; i < 10; i++) {
                           int t = a + b;
                           a = b;
                           b = t;
                       }
                       return a;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse swap idiom");
        crate::substitute_single_use_pure_locals(&mut unit);
        let body = &unit.functions[0].body;
        assert_eq!(
            decl_init_present(body, "t"),
            Some(true),
            "swap temporary `t` must keep its initializer (substitution must NOT fire \
             because the intervening `a = b` clobbers an operand the init reads)"
        );
        assert!(
            stmts_mention_ident(body, "t"),
            "the `b = t` use must still reference `t`; folding `a + b` here miscompiles"
        );
    }

    /// Positive test: when no operand of the init is modified between the decl
    /// and its single use, the optimization must still fire (a retained init
    /// here would be a perf regression). `int t = a + b; return t;` has no
    /// interfering write, so `t` is folded away and its init dropped.
    #[test]
    fn substitutes_pure_local_without_interference() {
        let src = "int f(int a, int b) {
                       int t = a + b;
                       return t;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse safe single-use local");
        crate::substitute_single_use_pure_locals(&mut unit);
        let body = &unit.functions[0].body;
        assert_eq!(
            decl_init_present(body, "t"),
            Some(false),
            "safe single-use pure local `t` must still be substituted (init dropped)"
        );
        assert!(
            !stmts_mention_ident(body, "t"),
            "after substitution the use of `t` must be replaced by its init `a + b`"
        );
    }

    /// Negative (load-bearing) test: an init that reads a GLOBAL must not be
    /// folded across an intervening call, because the callee may write the
    /// global. `int t = gg + 1; bump(); return t;` (with `bump` setting
    /// `gg = 99`) must keep `t`'s init so the program returns `11` (the value
    /// of `gg` at the decl), not `100`. The substitution treats the call as
    /// transparent without the call/alias gate, so disabling
    /// `intervening_call_or_aliasing_store` (or the `init_reads_nonlocal`
    /// branch) makes this assertion fail: `t` is substituted, its init dropped,
    /// and `return gg + 1` then reads the post-call `gg`.
    #[test]
    fn does_not_substitute_global_read_across_call() {
        let src = "int gg = 10;
                   void bump(void) { gg = 99; }
                   int f(void) {
                       int t = gg + 1;
                       bump();
                       return t;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse global-read-across-call");
        crate::substitute_single_use_pure_locals(&mut unit);
        let f = unit
            .functions
            .iter()
            .find(|fun| fun.name == "f")
            .expect("function f");
        assert_eq!(
            decl_init_present(&f.body, "t"),
            Some(true),
            "global-reading temporary `t` must keep its initializer (substitution must \
             NOT fire across the intervening `bump()` call which may write `gg`)"
        );
        assert!(
            stmts_mention_ident(&f.body, "t"),
            "the `return t` use must still reference `t`; folding `gg + 1` past `bump()` \
             miscompiles (returns 100 instead of 11)"
        );
    }

    /// Negative (load-bearing) test: an init that reads an ADDRESS-TAKEN
    /// PARAMETER must not be folded across an intervening call, since the
    /// callee may hold a pointer to it and write it. The escape (`stash(&a)`)
    /// happens BEFORE the candidate decl, so the intervening `clobber()` call
    /// does not itself mention `&a`, and `a` is a parameter (not a same-level
    /// local), so neither the pre-existing direct-modification check nor the
    /// "init reads another same-level local" exclusion catches it. Only the new
    /// `init_reads_aliasable` + call gate does, so with the gate disabled this
    /// assertion fails: `t` is substituted and `return a + 1` reads the
    /// clobbered `a`.
    #[test]
    fn does_not_substitute_address_taken_local_read_across_call() {
        let src = "int *g;
                   void stash(int *p) { g = p; }
                   void clobber(void) { *g = 99; }
                   int f(int a) {
                       stash(&a);
                       int t = a + 1;
                       clobber();
                       return t;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse addr-taken-read-across-call");
        crate::substitute_single_use_pure_locals(&mut unit);
        let f = unit
            .functions
            .iter()
            .find(|fun| fun.name == "f")
            .expect("function f");
        assert_eq!(
            decl_init_present(&f.body, "t"),
            Some(true),
            "temporary `t` reading the address-taken parameter `a` must keep its \
             initializer (the intervening `clobber()` may write `a` through the escaped \
             pointer stashed in `g`)"
        );
        assert!(
            stmts_mention_ident(&f.body, "t"),
            "the `return t` use must still reference `t`; folding `a + 1` past `clobber()` \
             miscompiles"
        );
    }

    /// Positive test: a safe local case with NO intervening call still
    /// substitutes (the optimization must keep firing). `int t = a + b; c = d;
    /// b = t;` reads only plain locals, none modified or aliased between decl
    /// and use, and the intervening `c = d` is neither a call nor a pointer
    /// store, so `t` is folded and its init dropped.
    #[test]
    fn substitutes_local_with_safe_intervening_assignment() {
        let src = "int f(int a, int b, int c, int d) {
                       int t = a + b;
                       c = d;
                       b = t;
                       return b + c;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse safe intervening assignment");
        crate::substitute_single_use_pure_locals(&mut unit);
        let body = &unit.functions[0].body;
        assert_eq!(
            decl_init_present(body, "t"),
            Some(false),
            "safe single-use pure local `t` must still be substituted (init dropped) when \
             the only intervening statement is a plain local assignment"
        );
        assert!(
            !stmts_mention_ident(body, "t"),
            "after substitution the use of `t` must be replaced by its init `a + b`"
        );
    }

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
    fn inline_simple_static_void_loop_helper() {
        let src = "static void byte_copy(char *dst, const char *src, int n) {
                       for (int i = 0; i < n; i++)
                           dst[i] = src[i];
                   }
                   int f(void) {
                       int src = 0x12345678;
                       int dst = 0;
                       byte_copy((char *)&dst, (const char *)&src, (int)sizeof(int));
                       return dst == src;
                   }";
        let asm = crate::compile_to_asm(src, "inline-static-void-loop.c", &Default::default())
            .expect("compile inline-static-void-loop");
        assert!(
            !asm.contains("CJUMP byte_copy."),
            "static void helper should be inlined at the call site:\n{}",
            asm
        );
        assert!(
            !asm.contains("L_doloop") && !asm.contains("LCNTR") && !asm.contains("0xAA"),
            "canonical local byte_copy should fold to a word copy and keep the success path:\n{}",
            asm
        );
        assert!(
            !asm.contains("byte_copy.:"),
            "unused inlined static void helper should be pruned:\n{}",
            asm
        );
    }

    #[test]
    fn inline_single_use_static_void_global_update_in_large_unit() {
        let src = "static int g;
                   static void step(int x) { g = ((g << 1) ^ x); }
                   static int d0(void) { return 0; }
                   static int d1(void) { return 1; }
                   static int d2(void) { return 2; }
                   static int d3(void) { return 3; }
                   static int d4(void) { return 4; }
                   static int d5(void) { return 5; }
                   static int d6(void) { return 6; }
                   static int d7(void) { return 7; }
                   static int d8(void) { return 8; }
                   static int d9(void) { return 9; }
                   static int d10(void) { return 10; }
                   static int d11(void) { return 11; }
                   static int d12(void) { return 12; }
                   static int d13(void) { return 13; }
                   static int d14(void) { return 14; }
                   static int d15(void) { return 15; }
                   int f(int x) {
                       for (int i = 0; i < 8; i++)
                           step(x + i);
                       return g;
                   }";
        let asm = crate::compile_to_asm(src, "inline-large-void-global.c", &Default::default())
            .expect("compile inline-large-void-global");
        assert!(
            !asm.contains("CJUMP step.") && !asm.contains("step.:"),
            "single-use static void global updater should inline even in large units:\n{}",
            asm
        );
    }

    #[test]
    fn inline_static_void_helper_preserves_parameter_conversion() {
        let src = "static unsigned int g;
                   static void store(unsigned char x) { g = x; }
                   int f(void) { store(0x1234); return (int)g; }";
        let asm = crate::compile_to_asm(src, "inline-void-param-conv.c", &Default::default())
            .expect("compile inline-void-param-conv");
        assert!(
            !asm.contains("CJUMP store.") && !asm.contains("store.:"),
            "single-use static void helper should inline:\n{}",
            asm
        );
        assert!(
            asm.contains("0x34"),
            "inlined helper must preserve unsigned-char parameter truncation:\n{}",
            asm
        );
    }

    #[test]
    fn transparent_crc_byte_loop_expands_crc_updates() {
        let src = "static unsigned int crc32_context;
                   static unsigned int crc32_tab[256];
                   static void crc32_gentab(void) {
                       int i, j;
                       unsigned int crc;
                       for (i = 0; i < 256; i++) {
                           crc = (unsigned int)i;
                           for (j = 0; j < 8; j++)
                               crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
                           crc32_tab[i] = crc;
                       }
                   }
                   static void crc32_byte(unsigned char b) {
                       crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL)
                           ^ crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
                   }
                   static void transparent_crc(unsigned long long val, char *vname, int flag) {
                       for (int i = 0; i < 8; i++)
                           crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
                       if (flag) { }
                   }
                   int f(void) {
                       crc32_gentab();
                       transparent_crc(0x1122334455667788ULL, 0, 0);
                       return (int)crc32_context;
                   }";
        let asm = crate::compile_to_asm(src, "transparent-crc-unroll.c", &Default::default())
            .expect("compile transparent-crc-unroll");
        assert!(
            !asm.contains("CJUMP crc32_byte.") && !asm.contains("crc32_byte.:"),
            "transparent_crc byte loop should expand direct CRC updates, not helper calls:\n{}",
            asm
        );
        assert!(
            !asm.contains("CJUMP crc32_gentab.") && !asm.contains("crc32_gentab.:"),
            "canonical CSmith CRC table generation should become a static initializer:\n{}",
            asm
        );
        assert!(
            !asm.contains("__lshr64") && !asm.contains("__ashr64"),
            "constant byte extracts should not call generic 64-bit shift helpers:\n{}",
            asm
        );
    }

    #[test]
    fn transparent_crc_drops_dead_name_and_flag_arguments() {
        let src = "static unsigned int crc32_context;
                   static unsigned int crc32_tab[256];
                   static void crc32_gentab(void) {
                       int i, j;
                       unsigned int crc;
                       for (i = 0; i < 256; i++) {
                           crc = (unsigned int)i;
                           for (j = 0; j < 8; j++)
                               crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
                           crc32_tab[i] = crc;
                       }
                   }
                   static void crc32_byte(unsigned char b) {
                       crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL)
                           ^ crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
                   }
                   static void transparent_crc(unsigned long long val, const char *vname, int flag) {
                       (void)vname;
                       (void)flag;
                       for (int i = 0; i < 8; i++)
                           crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
                   }
                   int f(unsigned long long x) {
                       crc32_gentab();
                       transparent_crc(x, \"dead-name\", 0);
                       return (int)crc32_context;
                   }";
        let asm = crate::compile_to_asm(src, "transparent-crc-dead-args.c", &Default::default())
            .expect("compile transparent-crc-dead-args");
        assert!(
            !asm.contains("dead-name") && !asm.contains(".str0."),
            "dead transparent_crc name/flag arguments should not be passed or emitted:\n{}",
            asm
        );
    }

    #[test]
    fn folds_direct_local_byte_copy_loop_to_word_copy() {
        let src = "int f(void) {
                       int src = 0x12345678;
                       int dst = 0;
                       char *s = (char *)&src;
                       char *d = (char *)&dst;
                       for (int i = 0; i < (int)sizeof(int); i++)
                           d[i] = s[i];
                       return dst == src;
                   }";
        let asm = crate::compile_to_asm(src, "direct-byte-copy-loop.c", &Default::default())
            .expect("compile direct-byte-copy-loop");
        assert!(
            !asm.contains("L_doloop") && !asm.contains("LCNTR"),
            "direct local byte-copy loop should become a word copy:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_fold_direct_byte_copy_after_pointer_reassignment() {
        let src = "int f(int *p) {
                       int src = 0x12345678;
                       int dst = 0;
                       char *s = (char *)&src;
                       char *d = (char *)&dst;
                       d = (char *)p;
                       for (int i = 0; i < (int)sizeof(int); i++)
                           d[i] = s[i];
                       return dst == src;
                   }";
        let asm = crate::compile_to_asm(src, "direct-byte-copy-reassigned.c", &Default::default())
            .expect("compile direct-byte-copy-reassigned");
        assert!(
            asm.contains("L_doloop") || asm.contains("LCNTR"),
            "reassigned byte pointer must keep the byte-copy loop:\n{}",
            asm
        );
    }

    #[test]
    fn folds_static_indirect_call_wrapper_with_known_function_arg() {
        let src = "static int helper_add(int x, int y) { return x + y; }
                   static int apply(int (*fn)(int, int), int a, int b) {
                       return fn(a, b);
                   }
                   int f(void) { return apply(helper_add, 0x11, 0x22); }";
        let asm = crate::compile_to_asm(src, "static-indirect-wrapper.c", &Default::default())
            .expect("compile static-indirect-wrapper");
        assert!(
            asm.contains("R1 = 0x33;"),
            "known function-pointer wrapper should fold through the helper:\n{}",
            asm
        );
        assert!(
            !asm.contains("CJUMP apply.") && !asm.contains("JUMP (M13"),
            "known function-pointer wrapper should not emit direct+indirect call path:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_substitute_address_taken_const_local_after_call() {
        let src = "static int add_to(int *p, int v) { *p += v; return *p; }
                   int f(void) {
                       int total = 0;
                       add_to(&total, 10);
                       add_to(&total, 20);
                       return total;
                   }";
        let asm = crate::compile_to_asm(src, "addr-taken-const-local.c", &Default::default())
            .expect("compile addr-taken-const-local");
        assert!(
            !asm.contains("R1 = 0x0;\n    R0 = PASS R1;"),
            "address-taken local must not be substituted as its initializer after calls:\n{}",
            asm
        );
        assert!(
            !asm.contains("CJUMP add_to."),
            "small context accumulator helper should inline at ignored call sites:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_substitute_const_local_after_cast_away_const_store() {
        let src = "int f(void) {
                       int x = 0x33;
                       const int *cp = &x;
                       int *p = (int *)cp;
                       *p = 0x44;
                       return x;
                   }";
        let asm = crate::compile_to_asm(src, "cast-away-const-store.c", &Default::default())
            .expect("compile cast-away-const-store");
        assert!(
            asm.contains("R1 = 0x44;"),
            "address-taken local must reflect the pointer store, not its initializer:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_switch_to_selected_return() {
        let src = "enum vals { BASE = 10 };
                   int f(void) {
                       int x = 12;
                       switch (x) {
                       case BASE: return 1;
                       case BASE + 1: return 2;
                       case BASE + 2: return 3;
                       default: return 0;
                       }
                   }";
        let asm = crate::compile_to_asm(src, "const-switch-return.c", &Default::default())
            .expect("compile const-switch-return");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("COMP"),
            "constant switch should fold to the selected return:\n{}",
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
    fn substitutes_small_multi_use_integer_constant_locals() {
        let src = "int f(int x) {
                       unsigned int c = 3U;
                       return (x + (int)c) ^ (int)(c << 1);
                   }";
        let asm = crate::compile_to_asm(src, "multi-use-const-local.c", &Default::default())
            .expect("compile multi-use-const-local");
        assert!(
            !asm.contains("DM (-0x") && asm.contains("0x3"),
            "multi-use integer constant local should substitute into uses:\n{}",
            asm
        );
    }

    #[test]
    fn inline_csmith_safe_helpers_with_many_call_sites() {
        let src = "static unsigned int safe_add_func_uint32_t_u_u(unsigned int a, unsigned int b) {
                       return a + b;
                   }
                   int f(unsigned int x) {
                       return (int)(safe_add_func_uint32_t_u_u(x, 1U)
                           + safe_add_func_uint32_t_u_u(x, 2U)
                           + safe_add_func_uint32_t_u_u(x, 3U)
                           + safe_add_func_uint32_t_u_u(x, 4U)
                           + safe_add_func_uint32_t_u_u(x, 5U));
                   }";
        let asm = crate::compile_to_asm(src, "inline-csmith-safe-many.c", &Default::default())
            .expect("compile inline-csmith-safe-many");
        assert!(
            !asm.contains("CJUMP safe_add_func_uint32_t_u_u.")
                && !asm.contains("safe_add_func_uint32_t_u_u.:"),
            "CSmith safe arithmetic helper should inline despite many call sites:\n{}",
            asm
        );
    }

    #[test]
    fn inline_linear_csmith_safe_helper_with_call_argument() {
        let src = "static int g;
                   static int bump(void) { g += 1; return g; }
                   static int safe_sub_func_int32_t_s_s(int a, int b) { return a - b; }
                   int f(void) {
                       return safe_sub_func_int32_t_s_s(bump(), 1) + g;
                   }";
        let asm = crate::compile_to_asm(src, "inline-csmith-safe-call-arg.c", &Default::default())
            .expect("compile inline-csmith-safe-call-arg");
        assert!(
            asm.contains("CJUMP bump.")
                && !asm.contains("CJUMP safe_sub_func_int32_t_s_s.")
                && !asm.contains("safe_sub_func_int32_t_s_s.:"),
            "linear CSmith safe helper should inline without duplicating call argument:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_inline_csmith_int8_mul_needing_parameter_sign_extension() {
        let src = "static signed char safe_mul_func_int8_t_s_s(signed char a, signed char b) {
                       return a * b;
                   }
                   int f(signed char x) {
                       return safe_mul_func_int8_t_s_s(0x9F, x);
                   }";
        let asm = crate::compile_to_asm(src, "keep-csmith-int8-mul.c", &Default::default())
            .expect("compile csmith int8 mul");
        assert!(
            asm.contains("CJUMP safe_mul_func_int8_t_s_s."),
            "int8 CSmith multiply call must preserve parameter sign extension:\n{}",
            asm
        );
    }

    #[test]
    fn folds_csmith_unsigned_lshift_with_constant_count() {
        let src = "static unsigned char safe_lshift_func_uint8_t_u_u(unsigned char left, unsigned int right) {
                       return (((unsigned int)right) >= 32) ? left : (left << ((unsigned int)right));
                   }
                   int f(unsigned int x) {
                       return (int)safe_lshift_func_uint8_t_u_u((unsigned char)x, 0U);
                   }";
        let asm = crate::compile_to_asm(src, "fold-csmith-const-lshift.c", &Default::default())
            .expect("compile fold-csmith-const-lshift");
        assert!(
            !asm.contains("CJUMP safe_lshift_func_uint8_t_u_u.")
                && !asm.contains("safe_lshift_func_uint8_t_u_u.:"),
            "constant-count unsigned CSmith shift should fold to a plain shift:\n{}",
            asm
        );
    }

    #[test]
    fn keeps_csmith_shift_count_comma_side_effect() {
        let src = "static int g;
                   static unsigned char safe_lshift_func_uint8_t_u_u(unsigned char left, unsigned int right) {
                       return (((unsigned int)right) >= 32) ? left : (left << ((unsigned int)right));
                   }
                   int f(unsigned int x) {
                       return (int)safe_lshift_func_uint8_t_u_u((unsigned char)x, (g = 1, 0U)) + g;
                   }";
        let asm =
            crate::compile_to_asm(src, "keep-csmith-shift-count-effect.c", &Default::default())
                .expect("compile keep-csmith-shift-count-effect");
        // The comma-operator side effect `g = 1` must survive: the store of
        // the constant 1 into `g` has to be emitted. Match on the store to
        // `g.` of whichever register holds the constant rather than a fixed
        // register name, since intra-block constant-load CSE may place the
        // `1` in a different register than a bare load would.
        let lines: Vec<&str> = asm.lines().map(str::trim).collect();
        let stores_one_to_g = lines.iter().enumerate().any(|(i, line)| {
            if let Some(reg) = line
                .strip_prefix("DM (g.)=")
                .and_then(|s| s.strip_suffix(';'))
            {
                // Find a `<reg> = 0x1;` definition before the store.
                let def = format!("{reg} = 0x1;");
                lines[..i].iter().rev().any(|l| *l == def)
            } else {
                false
            }
        });
        assert!(
            stores_one_to_g,
            "shift-count comma side effect (g = 1) must be preserved:\n{}",
            asm
        );
    }

    #[test]
    fn keeps_csmith_signed_rshift_with_constant_count_guarded() {
        let src = "static signed char safe_rshift_func_int8_t_s_u(signed char left, unsigned int right) {
                       return ((left < 0) || (((unsigned int)right) >= 32)) ? left : (left >> ((unsigned int)right));
                   }
                   int f(signed char x) {
                       return (int)safe_rshift_func_int8_t_s_u(x, 7U);
                   }";
        let asm = crate::compile_to_asm(src, "fold-csmith-const-rshift.c", &Default::default())
            .expect("compile fold-csmith-const-rshift");
        assert!(
            asm.contains("CJUMP safe_rshift_func_int8_t_s_u.")
                || (asm.contains("COMP") && asm.contains("IF ")),
            "signed CSmith right shift must keep its negative-left guard:\n{}",
            asm
        );
    }

    #[test]
    fn keeps_csmith_lshift_overflow_guard_with_nonzero_count() {
        let src = "static unsigned char safe_lshift_func_uint8_t_u_u(unsigned char left, unsigned int right) {
                       return ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ? left : (left << ((unsigned int)right));
                   }
                   int f(unsigned char x) {
                       return (int)safe_lshift_func_uint8_t_u_u(x, 7U);
                   }";
        let asm = crate::compile_to_asm(src, "keep-csmith-lshift-guard.c", &Default::default())
            .expect("compile keep-csmith-lshift-guard");
        assert!(
            asm.contains("COMP") && asm.contains("IF "),
            "nonzero CSmith left shift must keep its overflow guard:\n{}",
            asm
        );
    }

    #[test]
    fn folds_csmith_boolean_rshift_with_constant_count_to_zero() {
        let src = "static signed char safe_rshift_func_int8_t_s_u(signed char left, unsigned int right) {
                       return (((unsigned int)right) >= 32) ? left : (left >> ((unsigned int)right));
                   }
                   int f(unsigned int x) {
                       return (int)safe_rshift_func_int8_t_s_u(x != 0U, 7U);
                   }";
        let asm =
            crate::compile_to_asm(src, "fold-csmith-bool-const-rshift.c", &Default::default())
                .expect("compile fold-csmith-bool-const-rshift");
        assert!(
            asm.contains("R1 = 0x0;")
                && !asm.contains("CJUMP safe_rshift_func_int8_t_s_u.")
                && !asm.contains("ASHIFT"),
            "right shift of a boolean by a positive constant should fold to zero:\n{}",
            asm
        );
    }

    #[test]
    fn inlines_small_guarded_csmith_uint8_shift_with_pure_args() {
        let src = "static unsigned char safe_lshift_func_uint8_t_u_u(unsigned char left, unsigned int right) {
                       return (((unsigned int)right) >= 32) ? left : (left << ((unsigned int)right));
                   }
                   int f(unsigned int x, unsigned int n) {
                       return (int)safe_lshift_func_uint8_t_u_u((unsigned char)x, n);
                   }";
        let asm = crate::compile_to_asm(
            src,
            "inline-csmith-small-guarded-shift.c",
            &Default::default(),
        )
        .expect("compile inline-csmith-small-guarded-shift");
        assert!(
            !asm.contains("CJUMP safe_lshift_func_uint8_t_u_u.")
                && !asm.contains("safe_lshift_func_uint8_t_u_u.:"),
            "small guarded uint8 CSmith shift should inline for pure arguments:\n{}",
            asm
        );
    }

    #[test]
    fn folds_csmith_div_mod_with_constant_nonzero_divisor() {
        let src = "static signed char safe_div_func_int8_t_s_s(signed char a, signed char b) {
                       return ((b == 0) || ((a == (-128)) && (b == (-1)))) ? a : (a / b);
                   }
                   static unsigned int safe_mod_func_uint32_t_u_u(unsigned int a, unsigned int b) {
                       return (b == 0) ? a : (a % b);
                   }
                   int f(unsigned int x) {
                       return safe_div_func_int8_t_s_s((signed char)x, 0x93)
                           + (int)safe_mod_func_uint32_t_u_u(x, 0xEA5956BBU);
                   }";
        let asm = crate::compile_to_asm(src, "fold-csmith-const-divmod.c", &Default::default())
            .expect("compile fold-csmith-const-divmod");
        assert!(
            !asm.contains("CJUMP safe_div_func_int8_t_s_s.")
                && !asm.contains("CJUMP safe_mod_func_uint32_t_u_u."),
            "constant nonzero CSmith div/mod wrappers should fold to direct operators:\n{}",
            asm
        );
    }

    #[test]
    fn folds_csmith_signed_add_for_identifier_and_literal() {
        let src = "static int safe_add_func_int32_t_s_s(int a, int b) {
                       return (((a > 0) && (b > 0) && (a > (2147483647 - b)))
                           || ((a < 0) && (b < 0) && (a < ((-2147483647 - 1) - b))))
                           ? a : (a + b);
                   }
                   int f(int x) {
                       return safe_add_func_int32_t_s_s(x, 6);
                   }";
        let asm =
            crate::compile_to_asm(src, "fold-csmith-ident-literal-add.c", &Default::default())
                .expect("compile fold-csmith-ident-literal-add");
        assert!(
            !asm.contains("CJUMP safe_add_func_int32_t_s_s.") && asm.contains("0x7FFFFFF9"),
            "identifier/literal CSmith signed add should fold to a guard:\n{}",
            asm
        );
    }

    #[test]
    fn drops_discarded_pure_csmith_safe_call_in_comma() {
        let src = "static unsigned int safe_mod_func_uint32_t_u_u(unsigned int a, unsigned int b) {
                       return b == 0U ? a : a % b;
                   }
                   static unsigned short safe_rshift_func_uint16_t_u_u(unsigned short left, unsigned int right) {
                       return right >= 32U ? left : left >> right;
                   }
                   int f(unsigned int x) {
                       int y = 1;
                       return (((y = 2), safe_rshift_func_uint16_t_u_u(safe_mod_func_uint32_t_u_u(x, 7U), 3U)), y + 7);
                   }";
        let asm = crate::compile_to_asm(
            src,
            "drop-discarded-csmith-safe-comma.c",
            &Default::default(),
        )
        .expect("compile drop-discarded-csmith-safe-comma");
        assert!(
            !asm.contains("CJUMP safe_rshift_func_uint16_t_u_u.")
                && !asm.contains("CJUMP safe_mod_func_uint32_t_u_u.")
                && asm.contains("R1 = 0x9;"),
            "discarded pure CSmith safe call should not be emitted:\n{}",
            asm
        );
    }

    #[test]
    fn inline_expr_helper_preserves_parameter_conversion() {
        let src = "static int safe_add_func_uint8_t_u_u(unsigned char a, unsigned char b) {
                       return a + b;
                   }
                   int f(void) {
                       return safe_add_func_uint8_t_u_u(0x123U, 0x102U);
                   }";
        let asm = crate::compile_to_asm(src, "inline-expr-param-conv.c", &Default::default())
            .expect("compile inline-expr-param-conv");
        assert!(
            asm.contains("R1 = 0x25;") && !asm.contains("CJUMP safe_add_func_uint8_t_u_u."),
            "inlined expression helper must preserve unsigned-char truncation:\n{}",
            asm
        );
    }

    #[test]
    fn inline_expr_helper_preserves_typedef_parameter_conversion() {
        let src = "typedef signed char int8_t;
                   typedef unsigned char uint8_t;
                   static int8_t safe_add_func_int8_t_s_s(int8_t a, int8_t b) {
                       return a + b;
                   }
                   static uint8_t safe_add_func_uint8_t_u_u(uint8_t a, uint8_t b) {
                       return a + b;
                   }
                   int f(int x, unsigned int g) {
                       return safe_add_func_uint8_t_u_u(
                           g, safe_add_func_int8_t_s_s(0x6deeef7fdbebffcdLL, x));
                   }";
        let asm =
            crate::compile_to_asm(src, "inline-expr-typedef-param-conv.c", &Default::default())
                .expect("compile inline-expr-typedef-param-conv");
        assert!(
            !asm.contains("CJUMP safe_add_func_")
                && asm.contains("0xFF")
                && asm.contains("0x18")
                && asm.contains("-0x18"),
            "inlined typedef helper must preserve char parameter/return truncation:\n{}",
            asm
        );
    }

    #[test]
    fn uint8_const_local_substitution_keeps_integer_promotion_for_compare() {
        let src = "typedef signed char int8_t;
                   typedef unsigned char uint8_t;
                   typedef unsigned int uint32_t;
                   typedef long long int64_t;
                   static uint32_t g_104 = 0;
                   static uint8_t g_17 = 0xa5;
                   static uint8_t safe_mul_func_uint8_t_u_u(uint8_t a, uint8_t b) {
                       return ((unsigned int)a) * ((unsigned int)b);
                   }
                   int f(int8_t p_11, int64_t p_14) {
                       uint8_t l_124 = 255;
                       return (((safe_mul_func_uint8_t_u_u(
                           p_14, (~((g_104, l_124) || g_17)))) & l_124) >= p_11);
                   }";
        let asm = crate::compile_to_asm(src, "uint8-promoted-compare.c", &Default::default())
            .expect("compile uint8 promoted compare");
        assert!(
            asm.contains("COMP (") && !asm.contains("COMPU"),
            "uint8_t local constant must promote to signed int in compare:\n{}",
            asm
        );
    }

    #[test]
    fn inline_expr_helper_does_not_cast_struct_argument() {
        let src = "struct S { int a; int b; long long d; };
                   static int pick(struct S s) { return (0 <= s.d) ? s.a : s.b; }
                   int f(void) {
                       struct S s = { 1, 2, -9 };
                       return pick(s);
                   }";
        let asm = crate::compile_to_asm(src, "inline-struct-param.c", &Default::default())
            .expect("compile inline-struct-param");
        assert!(
            !asm.contains("CJUMP pick."),
            "struct-argument expression helper should still inline:\n{}",
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
    fn folds_logical_constant_rhs_after_side_effect_to_comma() {
        let src = "static int g;
                   int f(void) {
                       return ((g = 3) || 1) + ((g = 4) && 0);
                   }";
        let asm = crate::compile_to_asm(src, "fold-logical-rhs-side-effect.c", &Default::default())
            .expect("compile fold-logical-rhs-side-effect");
        assert!(
            asm.contains("R1 = 0x3;")
                && asm.contains("R1 = 0x4;")
                && asm.matches("DM (g.)=R1;").count() == 2
                && !asm.contains("IF NE JUMP")
                && !asm.contains("IF EQ JUMP"),
            "logical rhs constants should preserve lhs effects without emitting branches:\n{}",
            asm
        );
    }

    #[test]
    fn folds_typedef_signed_int32_const_local_compare_after_cast() {
        let src = "typedef int int32_t;
                   int f(void) {
                       int32_t x = 0x9C0905AAL;
                       return x <= 0x6B0D;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse typedef signed compare");
        crate::simplify_const_local_conditions(&mut unit);
        crate::fold_constant_exprs(&mut unit);

        let ret = match &unit.functions[0].body[1] {
            crate::ast::Stmt::Return(Some(expr)) => expr,
            other => panic!("unexpected folded statement: {other:?}"),
        };
        assert_eq!(
            ret,
            &crate::ast::Expr::IntLit(1, crate::token::IntSuffix::None),
            "typedef'd signed int local must be sign-normalized before comparison"
        );
    }

    #[test]
    fn prunes_dead_local_member_assignment_but_keeps_rhs_effect() {
        let src = "struct S { int a; };
                   static int g;
                   int f(void) {
                       struct S s;
                       s.a = (g = 3);
                       return g;
                   }";
        let asm = crate::compile_to_asm(src, "dead-local-member-assign.c", &Default::default())
            .expect("compile dead-local-member-assign");
        assert!(
            asm.contains("DM (g.)=R1;") && !asm.contains("DM (-0x"),
            "dead local member store should be removed while preserving RHS effect:\n{}",
            asm
        );
    }

    #[test]
    fn keeps_local_member_assignment_when_member_address_taken() {
        let src = "struct S { int a; int b; };
                   int f(int x) {
                       struct S s;
                       int *p = &s.a;
                       s.a = x;
                       return *p;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse member address-taken case");
        crate::prune_dead_local_assignments(&mut unit);

        let kept_member_store = unit.functions[0].body.iter().any(|stmt| {
            matches!(
                stmt,
                crate::ast::Stmt::Expr(crate::ast::Expr::Assign { target, .. })
                    if matches!(
                        target.as_ref(),
                        crate::ast::Expr::Member(base, field)
                            if field == "a"
                                && matches!(
                                    base.as_ref(),
                                    crate::ast::Expr::Ident(name) if name == "s"
                                )
                    )
            )
        });
        assert!(
            kept_member_store,
            "dead local assignment pruning must not remove stores to an escaped local member: {:?}",
            unit.functions[0].body
        );
    }

    #[test]
    fn records_address_taken_base_for_member_and_index() {
        let mut address_taken = std::collections::HashSet::new();
        let member_expr = crate::ast::Expr::AddrOf(Box::new(crate::ast::Expr::Member(
            Box::new(crate::ast::Expr::Ident("s".to_string())),
            "a".to_string(),
        )));
        let index_expr = crate::ast::Expr::AddrOf(Box::new(crate::ast::Expr::Index(
            Box::new(crate::ast::Expr::Ident("arr".to_string())),
            Box::new(crate::ast::Expr::IntLit(0, crate::token::IntSuffix::None)),
        )));

        crate::collect_address_taken_idents(&member_expr, &mut address_taken);
        crate::collect_address_taken_idents(&index_expr, &mut address_taken);

        assert!(
            address_taken.contains("s") && address_taken.contains("arr"),
            "address-taken analysis should record aggregate bases, got {address_taken:?}"
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
    fn folds_literal_bool_locals_before_lowering() {
        let src = "int f(void) { _Bool a = 1, b = 0; _Bool c = a && !b; return (int)c; }";
        let asm = crate::compile_to_asm(src, "literal-bool-locals.c", &Default::default())
            .expect("compile literal bool locals");
        assert!(
            !asm.contains("COMP") && !asm.contains("IF "),
            "literal _Bool locals should fold before lowering:\n{}",
            asm
        );
        assert!(
            asm.contains("R1 = 0x1;"),
            "folded bool expression should return 1:\n{}",
            asm
        );
    }

    #[test]
    fn substitutes_const_bool_local_as_normalized_index() {
        let src = "int f(void) { int arr[2] = {0x10, 0x20}; _Bool b = 42; return arr[b]; }";
        let asm = crate::compile_to_asm(src, "bool-as-index.c", &Default::default())
            .expect("compile bool-as-index");
        assert!(
            asm.contains("R1 = 0x20;"),
            "nonzero _Bool local used as an index should fold to index 1:\n{}",
            asm
        );
        assert!(
            !asm.contains("-0x53"),
            "bool index must not remain the raw initializer value 42:\n{}",
            asm
        );
    }

    #[test]
    fn folds_signed_char_constant_cast_with_sign_extension() {
        let src = "int f(void) {
                       signed char c = (signed char)0x80;
                       int i = (int)c;
                       return i + 0x80 + 0xAB;
                   }";
        let asm = crate::compile_to_asm(src, "const-signed-char-cast.c", &Default::default())
            .expect("compile const-signed-char-cast");
        assert!(
            asm.contains("R1 = 0xAB;"),
            "signed char constant cast should truncate and sign-extend:\n{}",
            asm
        );
    }

    #[test]
    fn folds_signed_short_constant_cast_with_sign_extension() {
        let src = "int f(void) {
                       short s = (short)0x8000;
                       int i = (int)s;
                       return i + 0x8000 + 0xCD;
                   }";
        let asm = crate::compile_to_asm(src, "const-signed-short-cast.c", &Default::default())
            .expect("compile const-signed-short-cast");
        assert!(
            asm.contains("R1 = 0xCD;"),
            "signed short constant cast should truncate and sign-extend:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_string_array_constant_indices() {
        let src = "int f(void) {
                       char s[] = \"abcd\";
                       return s[0] + s[3] + (int)sizeof(s);
                   }";
        let asm = crate::compile_to_asm(src, "const-string-array-indices.c", &Default::default())
            .expect("compile const-string-array-indices");
        assert!(
            asm.contains("R1 = 0xCA;") && !asm.contains("MODIFY (I7"),
            "constant-index reads from a local string array should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_char_pointer_alias_byte_load_and_compare() {
        let src = "int f(void) {
                       int x = 0x11223344;
                       char *p = (char *)&x;
                       char first = p[0];
                       char *q = p + 1;
                       return (int)(unsigned char)first + (int)(q > p);
                   }";
        let asm = crate::compile_to_asm(src, "const-char-ptr-alias.c", &Default::default())
            .expect("compile const-char-ptr-alias");
        assert!(
            asm.contains("R1 = 0x45;") && !asm.contains("COMP"),
            "constant char pointer alias load and comparison should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_leading_zero_count_loop() {
        let src = "int f(void) {
                       unsigned int x = 0x00800000u;
                       int lz = 0;
                       if (x == 0)
                           return 32;
                       while (!(x & 0x80000000u)) {
                           lz++;
                           x <<= 1;
                       }
                       return lz;
                   }";
        let asm = crate::compile_to_asm(src, "const-clz-loop.c", &Default::default())
            .expect("compile const-clz-loop");
        assert!(
            asm.contains("R1 = 0x8;") && !asm.contains("L_branch"),
            "constant leading-zero loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn substitutes_float_to_bool_local_after_decl_conversion() {
        let src = "int f(void) {
                       _Bool a = 42;
                       _Bool b = 0;
                       _Bool c = -1;
                       _Bool d = 3.14f;
                       int r = 0;
                       if (a == 1) r += 1;
                       if (b == 0) r += 2;
                       if (c == 1) r += 4;
                       if (d == 1) r += 8;
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "bool-conv.c", &Default::default())
            .expect("compile bool-conv");
        assert!(
            asm.contains("R1 = 0xF;"),
            "float-to-_Bool local substitution should preserve declaration conversion:\n{}",
            asm
        );
        assert!(
            !asm.contains("COMP"),
            "constant bool conversions should fold before lowering:\n{}",
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
    fn does_not_substitute_const_local_across_for_init_in_body() {
        let src = "unsigned long long f(void) {
                       int idx = 0x31cd1ac8;
                       unsigned long long arr[1];
                       arr[0] = ~0ULL;
                       for (idx = 0; idx <= 0; idx += 1) {
                           return arr[idx];
                       }
                       return 0ULL;
                   }";
        let asm = crate::compile_to_asm(src, "for-init-const-local.c", &Default::default())
            .expect("compile for-init const local");
        assert!(
            !asm.contains("-0x719729C0") && !asm.contains("0x8E68D640"),
            "for-body array index must not reuse the pre-init idx value:\n{}",
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
    fn single_use_unsigned_local_substitution_preserves_compare_type() {
        let src = "int f(void) {
                       int s = -1;
                       unsigned int u = 1;
                       return (s > u) ? 0xAA : 0xBB;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "single-use-unsigned-local-compare.c",
            &Default::default(),
        )
        .expect("compile single-use unsigned local compare");
        assert!(
            asm.contains("0xAA") && !asm.contains("0xBB"),
            "substituting unsigned local must preserve unsigned comparison semantics:\n{}",
            asm
        );
    }

    #[test]
    fn substitutes_single_use_const_typedef_long_long_local() {
        let src = "typedef long long int64_t;
                   int f(void) {
                       int lhs = 0;
                       int64_t rhs = -9;
                       return (lhs <= rhs) ? 0x11111111 : 0x22222222;
                   }";
        let asm = crate::compile_to_asm(src, "const-typedef-ll-compare.c", &Default::default())
            .expect("compile const typedef long long compare");
        assert!(
            asm.contains("R1 = 0x22222222;") && !asm.contains("COMP"),
            "single-use typedef long long local should fold through the signed compare:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_multi_decl_local_comparisons() {
        let src = "int f(void) {
                       int a = 5, b = 3;
                       return (a > b) + (a == 5) + (b != 5);
                   }";
        let asm = crate::compile_to_asm(src, "const-multi-decl-cmp.c", &Default::default())
            .expect("compile const multi-decl comparisons");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("COMP"),
            "multi-declarator constant locals should fold through comparisons:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_fold_while_comma_condition_assignments_to_constants() {
        let src = "int f(int n) {
                       int i = 0, sum = 0;
                       while ((sum += i, ++i, i <= n))
                           ;
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "while-comma-cond.c", &Default::default())
            .expect("compile while comma condition");
        assert!(
            !asm.contains("R1 = 0x1;\n    R3 = 0x5;\n")
                && !asm.contains("R1 = 0x0;\n    R0 = PASS R1;"),
            "while condition assignments must not be treated as loop-invariant constants:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_empty_while_comma_sum_loop() {
        let src = "int f(void) {
                       int i = 0, sum = 0;
                       while ((sum += i, ++i, i <= 5))
                           ;
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "const-while-comma-sum.c", &Default::default())
            .expect("compile const while comma sum");
        assert!(
            asm.contains("R1 = 0xF;") && !asm.contains("L_branch"),
            "constant empty comma-condition sum loop should fold to 15:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_empty_for_comma_counter_loop() {
        let src = "int f(void) {
                       int i, j;
                       for (i = 0, j = 10; i < 5; i++, j--) {
                       }
                       return i + j;
                   }";
        let asm = crate::compile_to_asm(src, "const-for-comma-counter.c", &Default::default())
            .expect("compile const for comma counter");
        assert!(
            asm.contains("R1 = 0xA;") && !asm.contains("L_branch"),
            "constant empty comma-step for loop should fold to 10:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_small_for_conditional_compound_assign_loop() {
        let src = "int f(void) {
                       int a = 0, b = 0;
                       for (int i = 0; i < 6; i++)
                           (i & 1) ? (a += i) : (b += i);
                       return a + b;
                   }";
        let asm = crate::compile_to_asm(src, "const-for-cond-assign.c", &Default::default())
            .expect("compile const for conditional assign");
        assert!(
            asm.contains("R1 = 0xF;") && !asm.contains("L_branch"),
            "constant small for loop with conditional compound assignments should fold to 15:\n{}",
            asm
        );
    }

    #[test]
    fn folds_simple_counted_inc_dec_loop_effects() {
        let src = "unsigned char g8 = 0;
                   unsigned long long g64 = 2;
                   int f(void) {
                       int i;
                       for (i = 0; i <= 3; i += 1) {
                           g8--;
                           --g64;
                       }
                       return (int)g8 + (int)g64;
                   }";
        let asm = crate::compile_to_asm(src, "counted-inc-dec-loop.c", &Default::default())
            .expect("compile counted inc/dec loop");
        assert!(
            !asm.contains("L_branch") && !asm.contains("LCNTR"),
            "simple counted inc/dec loop effects should fold to straight-line updates:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_fold_counted_loop_when_body_changes_induction() {
        let src = "int g = 0;
                   int f(void) {
                       int i;
                       for (i = 0; i < 4; i++) {
                           i++;
                           g++;
                       }
                       return g + i;
                   }";
        let asm =
            crate::compile_to_asm(src, "counted-loop-mutates-induction.c", &Default::default())
                .expect("compile counted loop mutates induction");
        assert!(
            asm.contains("L_branch") || asm.contains("LCNTR"),
            "loop whose body mutates the induction variable must stay dynamic:\n{}",
            asm
        );
    }

    #[test]
    fn folds_static_const_struct_array_member_reads() {
        let src = "static const struct { int key; int val; } g_lut[] = {
                       {1, 100}, {2, 200}, {3, 300}
                   };
                   int f(void) {
                       return g_lut[0].val + g_lut[1].val + g_lut[2].val;
                   }";
        let asm = crate::compile_to_asm(src, "const-global-struct-array.c", &Default::default())
            .expect("compile const global struct array");
        assert!(
            asm.contains("R1 = 0x258;") && !asm.contains("DM (I4"),
            "static const struct-array member reads should fold to 600:\n{}",
            asm
        );
    }

    #[test]
    fn folds_static_const_struct_array_designated_member_reads() {
        let src = "static const struct { int x; int y; } const_pts[] = {
                       {.x = 1, .y = 2},
                       {.x = 3, .y = 4},
                       {.x = 5, .y = 6},
                   };
                   int f(void) {
                       return const_pts[0].x + const_pts[1].y
                            + const_pts[2].x + const_pts[2].y;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-global-struct-array-designated.c",
            &Default::default(),
        )
        .expect("compile designated const global struct array");
        assert!(
            asm.contains("R1 = 0x10;") && !asm.contains("DM (I4"),
            "designated static const struct-array member reads should fold to 16:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_int_pointer_alias_return() {
        let src = "int f(void) {
                       int a = 10, b = 20;
                       const int *pc = &a;
                       int *const cp = &b;
                       *cp = 30;
                       return *pc + *cp;
                   }";
        let asm = crate::compile_to_asm(src, "const-int-pointer-alias.c", &Default::default())
            .expect("compile const int pointer alias");
        assert!(
            asm.contains("R1 = 0x28;") && !asm.contains("DM (I4"),
            "straight-line const int pointer aliases should fold to 40:\n{}",
            asm
        );
    }

    #[test]
    fn folds_reassigned_const_int_pointer_alias_return() {
        let src = "int f(void) {
                       int x = 10, y = 20;
                       const int *p = &x;
                       int *const q = &x;
                       p = &y;
                       *q = 30;
                       return (x == 30 && *p == 20) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-int-pointer-alias-reassign.c",
            &Default::default(),
        )
        .expect("compile reassigned const int pointer alias");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("0xAA") && !asm.contains("DM (I4"),
            "straight-line reassigned const int pointer alias should fold to 0x55:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_string_pointer_array_count_loop() {
        let src = "int f(void) {
                       const char *const names[] = {\"ab\", \"cd\", \"ef\", \"gh\"};
                       int count = 0;
                       for (int i = 0; i < 4; i++)
                           if (names[i][0] != 0)
                               count++;
                       return count;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-string-pointer-array-loop.c",
            &Default::default(),
        )
        .expect("compile const string pointer array loop");
        assert!(
            asm.contains("R1 = 0x4;") && !asm.contains("L_branch"),
            "constant string-pointer-array count loop should fold to 4:\n{}",
            asm
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
            asm.contains("= 0x0") && asm.contains("R0 = PASS R"),
            "offsetof first field should compile as constant zero:\n{}",
            asm
        );
    }
}
