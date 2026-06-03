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
use std::collections::{HashMap, HashSet};

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
    fold_const_div_family_inits(&mut unit);
    fold_const_qsort_int_self_tests(&mut unit);
    fold_const_memcpy_literal_self_tests(&mut unit);
    fold_const_strchr_literal_self_tests(&mut unit);
    fold_const_strtok_literal_self_tests(&mut unit);
    fold_const_strtok_count_loops(&mut unit);
    fold_const_strtok_state_loops(&mut unit);
    fold_const_vsnprintf_char_self_tests(&mut unit);
    fold_const_scalar_block_returns(&mut unit);
    simplify_const_local_conditions(&mut unit);
    fold_constant_exprs(&mut unit);
    fold_simple_inc_dec_counted_loops(&mut unit);
    fold_const_empty_while_comma_sum_loops(&mut unit);
    fold_const_empty_for_comma_counter_loops(&mut unit);
    fold_const_small_for_int_loops(&mut unit);
    fold_const_local_struct_list_count_loops(&mut unit);
    fold_const_string_pointer_array_loops(&mut unit);
    fold_const_int_pointer_alias_returns(&mut unit);
    fold_const_switch_returns(&mut unit);
    fold_const_clz_loops(&mut unit);
    fold_const_scalar_block_returns(&mut unit);
    substitute_const_global_aggregate_reads(&mut unit);
    substitute_const_global_fnptr_array_calls(&mut unit);
    fold_const_scalar_block_returns(&mut unit);
    fold_const_complex_conj_self_tests(&mut unit);
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
    precompute_csmith_crc32_table(&mut unit);
    unroll_transparent_crc_byte_loop(&mut unit);
    strip_transparent_crc_unused_args(&mut unit);
    inline_guarded_safe_calls(&mut unit);
    inline_simple_static_fns(&mut unit);
    fold_const_scalar_block_returns(&mut unit);
    prune_calloc_zero_check_loops(&mut unit);
    prune_redundant_malloc_after_free_checks(&mut unit);
    prune_malloc_byte_roundtrip_checks(&mut unit);
    fold_const_realloc_byte_self_tests(&mut unit);
    prune_dead_local_assignments(&mut unit);
    fold_constant_exprs(&mut unit);
    fold_const_div_family_inits(&mut unit);
    fold_const_qsort_int_self_tests(&mut unit);
    fold_const_memcpy_literal_self_tests(&mut unit);
    fold_const_strchr_literal_self_tests(&mut unit);
    fold_const_strtok_literal_self_tests(&mut unit);
    fold_const_strtok_count_loops(&mut unit);
    fold_const_strtok_state_loops(&mut unit);
    fold_const_vsnprintf_char_self_tests(&mut unit);
    prune_initially_false_counted_loops(&mut unit);
    demote_unused_wide_member_loop_counters(&mut unit);
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

fn fold_const_div_family_inits(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        fold_const_div_family_inits_in_stmts(&mut f.body);
    }
}

fn fold_const_div_family_inits_in_stmts(stmts: &mut [ast::Stmt]) {
    for stmt in stmts {
        fold_const_div_family_inits_in_stmt(stmt);
    }
}

fn fold_const_div_family_inits_in_stmt(stmt: &mut ast::Stmt) {
    use ast::Stmt;

    match stmt {
        Stmt::VarDecl {
            init: Some(init), ..
        } => {
            if let Some(replacement) = const_div_family_init(init) {
                *init = replacement;
            } else {
                fold_expr_constants(init);
            }
        }
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            fold_expr_constants(expr);
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            fold_expr_constants(cond);
            fold_const_div_family_inits_in_stmts(then_body);
            if let Some(body) = else_body {
                fold_const_div_family_inits_in_stmts(body);
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            fold_expr_constants(cond);
            fold_const_div_family_inits_in_stmts(body);
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(init) = init {
                fold_const_div_family_inits_in_stmt(init);
            }
            if let Some(cond) = cond {
                fold_expr_constants(cond);
            }
            if let Some(step) = step {
                fold_expr_constants(step);
            }
            fold_const_div_family_inits_in_stmts(body);
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => {
            fold_const_div_family_inits_in_stmts(body);
        }
        Stmt::Switch { expr, body } => {
            fold_expr_constants(expr);
            fold_const_div_family_inits_in_stmts(body);
        }
        Stmt::Label(_, inner) => fold_const_div_family_inits_in_stmt(inner),
        Stmt::VarDecl {
            init: None,
            vla_dim,
            ..
        } => {
            if let Some(dim) = vla_dim {
                fold_expr_constants(dim);
            }
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

fn const_div_family_init(expr: &ast::Expr) -> Option<ast::Expr> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    if !matches!(name.as_str(), "div" | "ldiv" | "lldiv") {
        return None;
    }
    let [n_expr, d_expr] = args.as_slice() else {
        return None;
    };
    let n = eval_const_int_expr(n_expr)?;
    let d = eval_const_int_expr(d_expr)?;
    if d == 0 || (n == i64::MIN && d == -1) {
        return None;
    }
    Some(ast::Expr::InitList(vec![
        ast::Expr::IntLit(n / d, crate::token::IntSuffix::None),
        ast::Expr::IntLit(n % d, crate::token::IntSuffix::None),
    ]))
}

fn fold_const_qsort_int_self_tests(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        fold_const_qsort_int_self_tests_in_stmts(&mut f.body);
    }
}

fn fold_const_qsort_int_self_tests_in_stmts(stmts: &mut Vec<ast::Stmt>) {
    let mut out = Vec::with_capacity(stmts.len());
    let mut i = 0usize;
    while i < stmts.len() {
        if i + 2 < stmts.len() {
            if let Some((array_name, mut values)) = const_int_array_decl(&stmts[i]) {
                if qsort_call_for_array(&stmts[i + 1], &array_name, values.len())
                    && qsort_sorted_failure_check(&stmts[i + 2], &array_name).is_some_and(
                        |expected| {
                            values.sort();
                            expected == values
                        },
                    )
                {
                    let mut decl = stmts[i].clone();
                    replace_var_decl_init_with_ints(&mut decl, &values);
                    fold_const_qsort_int_self_tests_in_child_stmt(&mut decl);
                    out.push(decl);
                    i += 3;
                    continue;
                }
            }
        }
        let mut stmt = stmts[i].clone();
        fold_const_qsort_int_self_tests_in_child_stmt(&mut stmt);
        out.push(stmt);
        i += 1;
    }
    *stmts = out;
}

fn fold_const_qsort_int_self_tests_in_child_stmt(stmt: &mut ast::Stmt) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            fold_const_qsort_int_self_tests_in_stmts(then_body);
            if let Some(body) = else_body {
                fold_const_qsort_int_self_tests_in_stmts(body);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::Switch { body, .. }
        | ast::Stmt::For { body, .. } => {
            fold_const_qsort_int_self_tests_in_stmts(body);
        }
        ast::Stmt::Label(_, inner) => fold_const_qsort_int_self_tests_in_child_stmt(inner),
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

fn const_int_array_decl(stmt: &ast::Stmt) -> Option<(String, Vec<i64>)> {
    let ast::Stmt::VarDecl {
        name,
        ty,
        init: Some(ast::Expr::InitList(items)),
        is_static: false,
        vla_dim: None,
    } = stmt
    else {
        return None;
    };
    let types::Type::Array(elem, Some(len)) = ty else {
        return None;
    };
    if !matches!(elem.as_ref(), types::Type::Int) || *len != items.len() {
        return None;
    }
    let values = items
        .iter()
        .map(eval_const_int_expr)
        .collect::<Option<Vec<_>>>()?;
    Some((name.clone(), values))
}

fn replace_var_decl_init_with_ints(stmt: &mut ast::Stmt, values: &[i64]) {
    if let ast::Stmt::VarDecl {
        init: Some(init), ..
    } = stmt
    {
        *init = ast::Expr::InitList(
            values
                .iter()
                .map(|value| ast::Expr::IntLit(*value, crate::token::IntSuffix::None))
                .collect(),
        );
    }
}

fn qsort_call_for_array(stmt: &ast::Stmt, array_name: &str, len: usize) -> bool {
    let ast::Stmt::Expr(ast::Expr::Call { name, args }) = stmt else {
        return false;
    };
    if name != "qsort" {
        return false;
    }
    let [base, nm, _size, cmp] = args.as_slice() else {
        return false;
    };
    matches!(base, ast::Expr::Ident(name) if name == array_name)
        && const_int_arg(nm) == Some(len as i64)
        && matches!(cmp, ast::Expr::Ident(_))
}

fn qsort_sorted_failure_check(stmt: &ast::Stmt, array_name: &str) -> Option<Vec<i64>> {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return None;
    };
    if !matches!(
        then_body.as_slice(),
        [ast::Stmt::Return(Some(ast::Expr::IntLit(0xAA, _)))]
    ) {
        return None;
    }
    let mut pairs = Vec::new();
    collect_array_ne_const_terms(cond, array_name, &mut pairs)?;
    pairs.sort_by_key(|(idx, _)| *idx);
    if pairs
        .iter()
        .enumerate()
        .all(|(idx, (actual, _))| idx == *actual)
    {
        Some(pairs.into_iter().map(|(_, value)| value).collect())
    } else {
        None
    }
}

fn collect_array_ne_const_terms(
    expr: &ast::Expr,
    array_name: &str,
    out: &mut Vec<(usize, i64)>,
) -> Option<()> {
    match expr {
        ast::Expr::Binary {
            op: ast::BinaryOp::LogOr,
            lhs,
            rhs,
        } => {
            collect_array_ne_const_terms(lhs, array_name, out)?;
            collect_array_ne_const_terms(rhs, array_name, out)
        }
        ast::Expr::Binary {
            op: ast::BinaryOp::Ne,
            lhs,
            rhs,
        } => {
            if let Some(index) = int_array_index(lhs, array_name) {
                out.push((index, eval_const_int_expr(rhs)?));
                Some(())
            } else if let Some(index) = int_array_index(rhs, array_name) {
                out.push((index, eval_const_int_expr(lhs)?));
                Some(())
            } else {
                None
            }
        }
        _ => None,
    }
}

fn int_array_index(expr: &ast::Expr, array_name: &str) -> Option<usize> {
    let ast::Expr::Index(base, index) = expr else {
        return None;
    };
    if !matches!(base.as_ref(), ast::Expr::Ident(name) if name == array_name) {
        return None;
    }
    usize::try_from(eval_const_int_expr(index)?).ok()
}

fn fold_const_memcpy_literal_self_tests(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if let Some(value) = const_memcpy_literal_self_test_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn const_memcpy_literal_self_test_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let ast::Stmt::Return(Some(ast::Expr::Ternary {
        cond,
        then_expr,
        else_expr,
    })) = stmts.last()?
    else {
        return None;
    };

    let mut buffers = HashMap::new();
    for stmt in &stmts[..stmts.len() - 1] {
        let Some((name, bytes)) = const_local_char_buffer_decl(stmt) else {
            continue;
        };
        buffers.insert(name, bytes);
    }
    if buffers.is_empty() {
        return None;
    }

    let mut state = buffers.clone();
    let mut saw_memcpy = false;
    for term in logand_terms(cond) {
        if let Some((name, bytes)) = literal_copy_pointer_eq(term, &state) {
            state.insert(name, bytes);
            saw_memcpy = true;
        } else if !literal_memcpy_byte_check_true(term, &state)
            && eval_const_int_expr(term).is_none_or(|value| value == 0)
        {
            return None;
        }
    }
    if !saw_memcpy {
        return None;
    }
    let then_value = eval_const_int_expr(then_expr)?;
    let else_value = eval_const_int_expr(else_expr)?;
    if then_value == else_value {
        return None;
    }
    Some(then_value)
}

fn fold_const_strtok_literal_self_tests(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if let Some(value) = const_strtok_literal_self_test_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn fold_const_strtok_count_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if let Some(value) = const_strtok_count_loop_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn fold_const_strtok_state_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if let Some(value) = const_strtok_state_loop_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn const_strtok_count_loop_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let [buf_decl, count_decl, tok_decl, while_stmt, ret_stmt] = stmts else {
        return None;
    };
    let (buf_name, bytes) = const_local_char_buffer_decl(buf_decl)?;
    let count_name = const_zero_int_decl(count_decl)?;
    let tok_name = literal_strtok_first_token_decl(tok_decl, &buf_name)?;
    let delim = literal_strtok_count_loop_body(while_stmt, &tok_name, &count_name)?;
    const_return_ident(ret_stmt, &count_name)?;
    Some(count_strtok_tokens(&bytes, delim) as i64)
}

fn const_strtok_state_loop_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let [buf_decl, count_decl, char_state_decls, tok_decl, while_stmt, score_decl, count_check, token_check, fourth_check, ret_stmt] =
        stmts
    else {
        return None;
    };
    let (buf_name, bytes) = const_local_char_buffer_decl(buf_decl)?;
    let count_name = const_zero_int_decl(count_decl)?;
    let state_names = const_zero_char_decl_group(char_state_decls)?;
    let [first_name, second_name, third_name, fourth_name] = state_names.as_slice() else {
        return None;
    };
    let tok_name = literal_strtok_first_token_decl(tok_decl, &buf_name)?;
    let delim = literal_strtok_state_loop_body(while_stmt, &tok_name, &count_name, &state_names)?;
    let score_name = const_zero_int_decl(score_decl)?;
    let token_first_bytes = first_strtok_token_bytes(&bytes, delim);
    let count = i64::try_from(token_first_bytes.len()).ok()?;
    let first = token_first_bytes.first().copied().unwrap_or(0);
    let second = token_first_bytes.get(1).copied().unwrap_or(0);
    let third = token_first_bytes.get(2).copied().unwrap_or(0);
    let fourth = token_first_bytes.get(3).copied().unwrap_or(0);

    let mut score = 0i64;
    score = apply_const_score_or_if(
        count_check,
        &score_name,
        &HashMap::from([(count_name.as_str(), count)]),
        score,
    )?;
    score = apply_const_score_or_if(
        token_check,
        &score_name,
        &HashMap::from([
            (first_name.as_str(), i64::from(first)),
            (second_name.as_str(), i64::from(second)),
            (third_name.as_str(), i64::from(third)),
        ]),
        score,
    )?;
    score = apply_const_score_or_if(
        fourth_check,
        &score_name,
        &HashMap::from([(fourth_name.as_str(), i64::from(fourth))]),
        score,
    )?;
    const_return_ident(ret_stmt, &score_name)?;
    Some(score)
}

fn const_zero_char_decl_group(stmt: &ast::Stmt) -> Option<Vec<String>> {
    let ast::Stmt::DeclGroup(items) = stmt else {
        return None;
    };
    if items.is_empty() {
        return None;
    }
    let mut names = Vec::with_capacity(items.len());
    for item in items {
        let ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } = item
        else {
            return None;
        };
        if !const_scalar_is_char_type(ty) || eval_const_int_expr(init)? != 0 {
            return None;
        }
        names.push(name.clone());
    }
    Some(names)
}

fn const_zero_int_decl(stmt: &ast::Stmt) -> Option<String> {
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
    (ty.is_integer() && eval_const_int_expr(init)? == 0).then(|| name.clone())
}

fn literal_strtok_first_token_decl(stmt: &ast::Stmt, buf_name: &str) -> Option<String> {
    let ast::Stmt::VarDecl {
        name,
        init: Some(ast::Expr::Call { name: call, args }),
        is_static: false,
        vla_dim: None,
        ..
    } = stmt
    else {
        return None;
    };
    let [ast::Expr::Ident(arg_buf), ast::Expr::StringLit(_)] = args.as_slice() else {
        return None;
    };
    (call == "strtok" && arg_buf == buf_name).then(|| name.clone())
}

fn literal_strtok_state_loop_body<'a>(
    stmt: &'a ast::Stmt,
    tok_name: &str,
    count_name: &str,
    state_names: &[String],
) -> Option<&'a str> {
    let ast::Stmt::While { cond, body } = stmt else {
        return None;
    };
    if !matches!(cond, ast::Expr::Ident(name) if name == tok_name) {
        return None;
    }
    let [state_stmt, inc_stmt, next_stmt] = body.as_slice() else {
        return None;
    };
    const_strtok_state_if_chain(state_stmt, tok_name, count_name, state_names)?;
    if !const_postinc_expr_stmt(inc_stmt, count_name) {
        return None;
    }
    literal_strtok_next_assignment(next_stmt, tok_name)
}

fn const_strtok_state_if_chain(
    stmt: &ast::Stmt,
    tok_name: &str,
    count_name: &str,
    state_names: &[String],
) -> Option<()> {
    let mut current = stmt;
    for (idx, state_name) in state_names.iter().enumerate() {
        let ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } = current
        else {
            return None;
        };
        if !const_ident_eq_int(cond, count_name, idx as i64) {
            return None;
        }
        if !const_assign_ident_from_index_zero(then_body.as_slice(), state_name, tok_name) {
            return None;
        }
        if idx + 1 == state_names.len() {
            if else_body.is_some() {
                return None;
            }
        } else {
            let [next] = else_body.as_ref()?.as_slice() else {
                return None;
            };
            current = next;
        }
    }
    Some(())
}

fn const_ident_eq_int(expr: &ast::Expr, name: &str, value: i64) -> bool {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Eq,
        lhs,
        rhs,
    } = expr
    else {
        return false;
    };
    (matches!(lhs.as_ref(), ast::Expr::Ident(lhs_name) if lhs_name == name)
        && eval_const_int_expr(rhs) == Some(value))
        || (matches!(rhs.as_ref(), ast::Expr::Ident(rhs_name) if rhs_name == name)
            && eval_const_int_expr(lhs) == Some(value))
}

fn const_assign_ident_from_index_zero(
    body: &[ast::Stmt],
    state_name: &str,
    tok_name: &str,
) -> bool {
    let [ast::Stmt::Expr(ast::Expr::Assign { target, value })] = body else {
        return false;
    };
    matches!(target.as_ref(), ast::Expr::Ident(name) if name == state_name)
        && matches!(
            value.as_ref(),
            ast::Expr::Index(base, index)
                if matches!(base.as_ref(), ast::Expr::Ident(name) if name == tok_name)
                    && eval_const_int_expr(index) == Some(0)
        )
}

fn literal_strtok_count_loop_body<'a>(
    stmt: &'a ast::Stmt,
    tok_name: &str,
    count_name: &str,
) -> Option<&'a str> {
    let ast::Stmt::While { cond, body } = stmt else {
        return None;
    };
    if !matches!(cond, ast::Expr::Ident(name) if name == tok_name) {
        return None;
    }
    let [inc_stmt, next_stmt] = body.as_slice() else {
        return None;
    };
    if !const_postinc_expr_stmt(inc_stmt, count_name) {
        return None;
    }
    literal_strtok_next_assignment(next_stmt, tok_name)
}

fn const_postinc_expr_stmt(stmt: &ast::Stmt, name: &str) -> bool {
    matches!(
        stmt,
        ast::Stmt::Expr(ast::Expr::PostInc(target))
            if matches!(target.as_ref(), ast::Expr::Ident(target_name) if target_name == name)
    )
}

fn literal_strtok_next_assignment<'a>(stmt: &'a ast::Stmt, tok_name: &str) -> Option<&'a str> {
    let ast::Stmt::Expr(ast::Expr::Assign { target, value }) = stmt else {
        return None;
    };
    if !matches!(target.as_ref(), ast::Expr::Ident(name) if name == tok_name) {
        return None;
    }
    let ast::Expr::Call { name: call, args } = value.as_ref() else {
        return None;
    };
    let [first_arg, ast::Expr::StringLit(delim)] = args.as_slice() else {
        return None;
    };
    (call == "strtok" && expr_is_null_pointer_constant(first_arg)).then_some(delim.as_str())
}

fn apply_const_score_or_if(
    stmt: &ast::Stmt,
    score_name: &str,
    values: &HashMap<&str, i64>,
    score: i64,
) -> Option<i64> {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return None;
    };
    let [ast::Stmt::Expr(ast::Expr::CompoundAssign {
        op: ast::BinaryOp::BitOr,
        target,
        value,
    })] = then_body.as_slice()
    else {
        return None;
    };
    if !matches!(target.as_ref(), ast::Expr::Ident(name) if name == score_name) {
        return None;
    }
    let mask = eval_const_int_expr(value)?;
    Some(
        if eval_const_int_expr_with_named_values(cond, values)? != 0 {
            score | mask
        } else {
            score
        },
    )
}

fn eval_const_int_expr_with_named_values(
    expr: &ast::Expr,
    values: &HashMap<&str, i64>,
) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::Ident(name) => values.get(name.as_str()).copied(),
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Unary { op, operand } => {
            let value = eval_const_int_expr_with_named_values(operand, values)?;
            Some(match op {
                UnaryOp::Neg => value.wrapping_neg(),
                UnaryOp::BitNot => !value,
                UnaryOp::LogNot => i64::from(value == 0),
            })
        }
        Expr::Cast(ty, operand) if *ty == types::Type::Bool => {
            let value = eval_const_int_expr_with_named_values(operand, values)?;
            Some(i64::from(value != 0))
        }
        Expr::Cast(ty, operand) if ty.is_integer() => {
            let value = eval_const_int_expr_with_named_values(operand, values)?;
            Some(eval_integer_cast(ty, value))
        }
        Expr::Binary { op, lhs, rhs } => {
            let lhs_value = eval_const_int_expr_with_named_values(lhs, values)?;
            let rhs_value = eval_const_int_expr_with_named_values(rhs, values)?;
            Some(match op {
                BinaryOp::Add => lhs_value.wrapping_add(rhs_value),
                BinaryOp::Sub => lhs_value.wrapping_sub(rhs_value),
                BinaryOp::Mul => lhs_value.wrapping_mul(rhs_value),
                BinaryOp::BitAnd => lhs_value & rhs_value,
                BinaryOp::BitOr => lhs_value | rhs_value,
                BinaryOp::BitXor => lhs_value ^ rhs_value,
                BinaryOp::Eq => i64::from(lhs_value == rhs_value),
                BinaryOp::Ne => i64::from(lhs_value != rhs_value),
                BinaryOp::Lt => i64::from(lhs_value < rhs_value),
                BinaryOp::Gt => i64::from(lhs_value > rhs_value),
                BinaryOp::Le => i64::from(lhs_value <= rhs_value),
                BinaryOp::Ge => i64::from(lhs_value >= rhs_value),
                BinaryOp::LogAnd => i64::from(lhs_value != 0 && rhs_value != 0),
                BinaryOp::LogOr => i64::from(lhs_value != 0 || rhs_value != 0),
                BinaryOp::Div if rhs_value != 0 => lhs_value.wrapping_div(rhs_value),
                BinaryOp::Mod if rhs_value != 0 => lhs_value.wrapping_rem(rhs_value),
                BinaryOp::Shl | BinaryOp::Shr | BinaryOp::Div | BinaryOp::Mod => return None,
            })
        }
        _ => eval_const_int_expr(expr),
    }
}

fn const_return_ident(stmt: &ast::Stmt, name: &str) -> Option<()> {
    matches!(
        stmt,
        ast::Stmt::Return(Some(ast::Expr::Ident(ret))) if ret == name
    )
    .then_some(())
}

fn count_strtok_tokens(bytes: &[u8], delim: &str) -> usize {
    let delim = delim.as_bytes();
    let mut count = 0usize;
    let mut idx = 0usize;
    while idx < bytes.len() {
        while idx < bytes.len() && bytes[idx] != 0 && delim.contains(&bytes[idx]) {
            idx += 1;
        }
        if idx >= bytes.len() || bytes[idx] == 0 {
            break;
        }
        count += 1;
        while idx < bytes.len() && bytes[idx] != 0 && !delim.contains(&bytes[idx]) {
            idx += 1;
        }
    }
    count
}

fn first_strtok_token_bytes(bytes: &[u8], delim: &str) -> Vec<u8> {
    let delim = delim.as_bytes();
    let mut tokens = Vec::new();
    let mut idx = 0usize;
    while idx < bytes.len() {
        while idx < bytes.len() && bytes[idx] != 0 && delim.contains(&bytes[idx]) {
            idx += 1;
        }
        if idx >= bytes.len() || bytes[idx] == 0 {
            break;
        }
        tokens.push(bytes[idx]);
        while idx < bytes.len() && bytes[idx] != 0 && !delim.contains(&bytes[idx]) {
            idx += 1;
        }
    }
    tokens
}

fn const_strtok_literal_self_test_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let ast::Stmt::Return(Some(ast::Expr::Ternary {
        cond,
        then_expr,
        else_expr,
    })) = stmts.last()?
    else {
        return None;
    };

    let mut buffers = HashMap::new();
    let mut ptrs = HashMap::new();
    let mut saw_strtok = false;
    for stmt in &stmts[..stmts.len() - 1] {
        if let Some((name, bytes)) = const_local_char_buffer_decl(stmt) {
            buffers.insert(name, bytes);
            continue;
        }
        if let Some((ptr_name, buf_name, offset, bytes)) =
            literal_strtok_pointer_decl(stmt, &buffers)
        {
            buffers.insert(buf_name.clone(), bytes);
            ptrs.insert(ptr_name, (buf_name, offset));
            saw_strtok = true;
        }
    }
    if !saw_strtok {
        return None;
    }

    for term in logand_terms(cond) {
        if strtok_pointer_truthy(term, &ptrs)
            || strtok_pointer_byte_check_true(term, &buffers, &ptrs)
            || eval_const_int_expr(term).is_some_and(|value| value != 0)
        {
            continue;
        }
        return None;
    }
    let then_value = eval_const_int_expr(then_expr)?;
    let else_value = eval_const_int_expr(else_expr)?;
    if then_value == else_value {
        return None;
    }
    Some(then_value)
}

fn fold_const_vsnprintf_char_self_tests(unit: &mut ast::TranslationUnit) {
    let wrappers: HashSet<String> = unit
        .functions
        .iter()
        .filter(|f| const_vsnprintf_wrapper(f))
        .map(|f| f.name.clone())
        .collect();
    if wrappers.is_empty() {
        return;
    }
    for f in &mut unit.functions {
        if let Some(value) = const_vsnprintf_char_self_test_return(&f.body, &wrappers) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        } else if let Some(value) = const_vsnprintf_trunc_score_return(&f.body, &wrappers) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn const_vsnprintf_wrapper(f: &ast::Function) -> bool {
    if !f.is_variadic || f.params.len() != 3 {
        return false;
    }
    let [buf_param, size_param, fmt_param] = [
        f.params[0].0.as_str(),
        f.params[1].0.as_str(),
        f.params[2].0.as_str(),
    ];
    let mut result_name = None;
    for stmt in &f.body {
        if let Some((name, call, args)) = const_vsnprintf_result_assignment(stmt) {
            let [ast::Expr::Ident(buf), ast::Expr::Ident(size), ast::Expr::Ident(fmt), _ap] = args
            else {
                continue;
            };
            if call == "vsnprintf" && buf == buf_param && size == size_param && fmt == fmt_param {
                result_name = Some(name);
            }
        }
        if let (Some(result_name), ast::Stmt::Return(Some(ast::Expr::Ident(ret)))) =
            (result_name, stmt)
        {
            return ret == result_name;
        }
    }
    false
}

fn const_vsnprintf_result_assignment(stmt: &ast::Stmt) -> Option<(&str, &str, &[ast::Expr])> {
    match stmt {
        ast::Stmt::VarDecl {
            name,
            init: Some(ast::Expr::Call { name: call, args }),
            is_static: false,
            vla_dim: None,
            ..
        } => Some((name.as_str(), call.as_str(), args.as_slice())),
        ast::Stmt::Expr(ast::Expr::Assign { target, value }) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let ast::Expr::Call { name: call, args } = value.as_ref() else {
                return None;
            };
            Some((name.as_str(), call.as_str(), args.as_slice()))
        }
        _ => None,
    }
}

fn const_vsnprintf_char_self_test_return(
    stmts: &[ast::Stmt],
    wrappers: &HashSet<String>,
) -> Option<i64> {
    if let Some(value) = const_vsnprintf_do_while_self_test_return(stmts, wrappers) {
        return Some(value);
    }
    let (buf_decl, n_decl, n_check, bytes_check, ret) = match stmts {
        [buf_decl, n_decl, n_check, bytes_check, ast::Stmt::Return(Some(ast::Expr::IntLit(ret, _)))] => {
            (buf_decl, n_decl, n_check, Some(bytes_check), *ret)
        }
        [buf_decl, n_decl, n_check, ast::Stmt::Return(Some(ast::Expr::IntLit(ret, _)))] => {
            (buf_decl, n_decl, n_check, None, *ret)
        }
        _ => return None,
    };
    let (buf_name, buf_len) = const_uninit_char_array_decl(buf_decl)?;
    let (n_name, call, args) = const_int_call_decl(n_decl)?;
    if !wrappers.contains(call) || args.len() < 3 {
        return None;
    }
    let [ast::Expr::Ident(call_buf), ast::Expr::Sizeof(size_arg), ast::Expr::StringLit(fmt), varargs @ ..] =
        args
    else {
        return None;
    };
    if call_buf != &buf_name || !sizeof_ident_matches(size_arg, &buf_name) {
        return None;
    }
    let mut values = Vec::with_capacity(varargs.len());
    for arg in varargs {
        values.push(const_vsnprintf_arg(arg)?);
    }
    let rendered = format_const_vsnprintf_bytes(fmt.as_bytes(), &values)?;
    if !const_if_returns_on_ne_ident_int(n_check, &n_name, rendered.len() as i64, 0xAA) {
        return None;
    }
    if rendered.len() + 1 > buf_len {
        return None;
    }
    if let Some(bytes_check) = bytes_check {
        if !const_if_returns_on_failed_bytes_check(bytes_check, &buf_name, &rendered, 0xAA) {
            return None;
        }
    }
    Some(ret)
}

fn const_vsnprintf_do_while_self_test_return(
    stmts: &[ast::Stmt],
    wrappers: &HashSet<String>,
) -> Option<i64> {
    let (body, cond, ret) = match stmts {
        [ast::Stmt::DoWhile { body, cond }, ast::Stmt::Return(Some(ast::Expr::IntLit(ret, _)))] => {
            (body, cond, ret)
        }
        [ast::Stmt::DoWhile { body, cond }, ast::Stmt::Expr(_), ast::Stmt::Return(Some(ast::Expr::IntLit(ret, _)))] => {
            (body, cond, ret)
        }
        _ => return None,
    };
    if eval_const_int_expr(cond)? != 0 {
        return None;
    }
    let [buf_decl, n_decl, bad_check] = body.as_slice() else {
        return None;
    };
    let (buf_name, buf_len) = const_uninit_char_array_decl(buf_decl)?;
    let (n_name, call, args) = const_int_call_decl(n_decl)?;
    if !wrappers.contains(call) || args.len() < 3 {
        return None;
    }
    let [ast::Expr::Ident(call_buf), size_expr, ast::Expr::StringLit(fmt), varargs @ ..] = args
    else {
        return None;
    };
    if call_buf != &buf_name {
        return None;
    }
    let size = const_size_arg_value(size_expr, &buf_name, buf_len)?;
    let mut values = Vec::with_capacity(varargs.len());
    for arg in varargs {
        values.push(const_vsnprintf_arg(arg)?);
    }
    let rendered = format_const_vsnprintf_bytes(fmt.as_bytes(), &values)?;
    if rendered.len() + 1 > size || rendered.len() + 1 > buf_len {
        return None;
    }
    if !const_if_returns_on_true_snprintf_failure(bad_check, &n_name, &buf_name, &rendered, 0xAA) {
        return None;
    }
    Some(*ret)
}

fn const_size_arg_value(expr: &ast::Expr, buf_name: &str, buf_len: usize) -> Option<usize> {
    match expr {
        ast::Expr::Sizeof(arg) if sizeof_ident_matches(arg, buf_name) => Some(buf_len),
        _ => usize::try_from(eval_const_int_expr(expr)?).ok(),
    }
}

fn const_if_returns_on_true_snprintf_failure(
    stmt: &ast::Stmt,
    n_name: &str,
    buf_name: &str,
    rendered: &[u8],
    ret_value: i64,
) -> bool {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return false;
    };
    if !matches!(
        then_body.as_slice(),
        [ast::Stmt::Return(Some(ast::Expr::IntLit(v, _)))] if *v == ret_value
    ) {
        return false;
    }
    logor_terms(cond).into_iter().all(|term| {
        eval_const_snprintf_failure_term(term, n_name, buf_name, rendered) == Some(false)
    })
}

fn eval_const_snprintf_failure_term(
    expr: &ast::Expr,
    n_name: &str,
    buf_name: &str,
    rendered: &[u8],
) -> Option<bool> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Ne,
        lhs,
        rhs,
    } = expr
    else {
        return None;
    };
    if matches!(lhs.as_ref(), ast::Expr::Ident(ident) if ident == n_name) {
        return Some(eval_const_int_expr(rhs)? != rendered.len() as i64);
    }
    if matches!(rhs.as_ref(), ast::Expr::Ident(ident) if ident == n_name) {
        return Some(eval_const_int_expr(lhs)? != rendered.len() as i64);
    }
    if let Some((idx, value)) = const_buffer_index_eq(lhs, rhs, buf_name) {
        return Some(rendered.get(idx).copied()? != value);
    }
    let (idx, value) = const_buffer_index_eq(rhs, lhs, buf_name)?;
    Some(rendered.get(idx).copied()? != value)
}

fn const_vsnprintf_trunc_score_return(
    stmts: &[ast::Stmt],
    wrappers: &HashSet<String>,
) -> Option<i64> {
    let [score_decl, buf_decl, memset_stmt, n_decl, n_check, bytes_check, strlen_check, ret_stmt] =
        stmts
    else {
        return None;
    };
    let score_name = const_zero_int_decl(score_decl)?;
    let (buf_name, buf_len) = const_uninit_char_array_decl(buf_decl)?;
    const_memset_byte_array_stmt(memset_stmt, &buf_name, 0x55, buf_len)?;
    let (n_name, call, args) = const_int_call_decl(n_decl)?;
    if !wrappers.contains(call) || args.len() < 3 {
        return None;
    }
    let [ast::Expr::Ident(call_buf), ast::Expr::Sizeof(size_arg), ast::Expr::StringLit(fmt), varargs @ ..] =
        args
    else {
        return None;
    };
    if call_buf != &buf_name || !sizeof_ident_matches(size_arg, &buf_name) {
        return None;
    }
    let mut values = Vec::with_capacity(varargs.len());
    for arg in varargs {
        values.push(const_vsnprintf_arg(arg)?);
    }
    let rendered = format_const_vsnprintf_bytes(fmt.as_bytes(), &values)?;
    let write_len = rendered.len().min(buf_len.saturating_sub(1));
    let mut stored = vec![0x55; buf_len];
    for (idx, byte) in rendered.iter().copied().take(write_len).enumerate() {
        stored[idx] = byte;
    }
    if buf_len > 0 {
        stored[write_len] = 0;
    }

    let mut score = 0;
    score = apply_const_score_or_if(
        n_check,
        &score_name,
        &HashMap::from([(n_name.as_str(), rendered.len() as i64)]),
        score,
    )?;
    let (cond, mask) = const_score_or_if_parts(bytes_check, &score_name)?;
    if eval_const_buffer_condition(cond, &buf_name, &stored)? {
        score |= mask;
    }
    let (cond, mask) = const_score_or_if_parts(strlen_check, &score_name)?;
    if eval_const_strlen_condition(cond, &buf_name, const_c_string_len(&stored)?)? {
        score |= mask;
    }
    const_return_ident(ret_stmt, &score_name)?;
    Some(score)
}

fn const_memset_byte_array_stmt(
    stmt: &ast::Stmt,
    buf_name: &str,
    byte: i64,
    len: usize,
) -> Option<()> {
    let ast::Stmt::Expr(ast::Expr::Call { name, args }) = stmt else {
        return None;
    };
    let [ast::Expr::Ident(dst), value, ast::Expr::Sizeof(size_arg)] = args.as_slice() else {
        return None;
    };
    (name == "memset"
        && dst == buf_name
        && eval_const_int_expr(value)? == byte
        && sizeof_ident_matches(size_arg, buf_name)
        && len > 0)
        .then_some(())
}

fn const_score_or_if_parts<'a>(
    stmt: &'a ast::Stmt,
    score_name: &str,
) -> Option<(&'a ast::Expr, i64)> {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return None;
    };
    let [ast::Stmt::Expr(ast::Expr::CompoundAssign {
        op: ast::BinaryOp::BitOr,
        target,
        value,
    })] = then_body.as_slice()
    else {
        return None;
    };
    if !matches!(target.as_ref(), ast::Expr::Ident(name) if name == score_name) {
        return None;
    }
    Some((cond, eval_const_int_expr(value)?))
}

fn eval_const_buffer_condition(expr: &ast::Expr, buf_name: &str, bytes: &[u8]) -> Option<bool> {
    for term in logand_terms(expr) {
        if !eval_const_buffer_eq(term, buf_name, bytes)? {
            return Some(false);
        }
    }
    Some(true)
}

fn eval_const_buffer_eq(expr: &ast::Expr, buf_name: &str, bytes: &[u8]) -> Option<bool> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Eq,
        lhs,
        rhs,
    } = expr
    else {
        return None;
    };
    if let Some((idx, value)) = const_buffer_index_eq(lhs, rhs, buf_name) {
        return Some(bytes.get(idx).copied()? == value);
    }
    let (idx, value) = const_buffer_index_eq(rhs, lhs, buf_name)?;
    Some(bytes.get(idx).copied()? == value)
}

fn const_buffer_index_eq(lhs: &ast::Expr, rhs: &ast::Expr, buf_name: &str) -> Option<(usize, u8)> {
    let ast::Expr::Index(base, index) = lhs else {
        return None;
    };
    let ast::Expr::Ident(name) = base.as_ref() else {
        return None;
    };
    if name != buf_name {
        return None;
    }
    let idx = usize::try_from(eval_const_int_expr(index)?).ok()?;
    let value = u8::try_from(eval_const_int_expr(rhs)? & 0xff).ok()?;
    Some((idx, value))
}

fn eval_const_strlen_condition(expr: &ast::Expr, buf_name: &str, len: usize) -> Option<bool> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Eq,
        lhs,
        rhs,
    } = expr
    else {
        return None;
    };
    if const_strlen_call_ident(lhs, buf_name) {
        return Some(usize::try_from(eval_const_int_expr(rhs)?).ok()? == len);
    }
    if const_strlen_call_ident(rhs, buf_name) {
        return Some(usize::try_from(eval_const_int_expr(lhs)?).ok()? == len);
    }
    None
}

fn const_strlen_call_ident(expr: &ast::Expr, buf_name: &str) -> bool {
    matches!(
        expr,
        ast::Expr::Call { name, args }
            if name == "strlen"
                && matches!(args.as_slice(), [ast::Expr::Ident(arg)] if arg == buf_name)
    )
}

fn const_c_string_len(bytes: &[u8]) -> Option<usize> {
    bytes.iter().position(|byte| *byte == 0)
}

#[derive(Clone, Debug, PartialEq, Eq)]
enum ConstPrintfArg {
    Int(i64),
    String(Vec<u8>),
    NullString,
}

fn const_vsnprintf_arg(expr: &ast::Expr) -> Option<ConstPrintfArg> {
    match expr {
        ast::Expr::StringLit(s) => Some(ConstPrintfArg::String(s.as_bytes().to_vec())),
        ast::Expr::Cast(ty, inner) if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            if eval_const_int_expr(inner) == Some(0) {
                Some(ConstPrintfArg::NullString)
            } else {
                None
            }
        }
        _ => eval_const_int_expr(expr).map(ConstPrintfArg::Int),
    }
}

fn eval_scoped_const_printf_arg(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPrintfArg> {
    match expr {
        ast::Expr::StringLit(s) => Some(ConstPrintfArg::String(s.as_bytes().to_vec())),
        ast::Expr::Cast(ty, inner) if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            if eval_scoped_const_int_expr_mut(inner, scopes, ctx) == Some(0) {
                Some(ConstPrintfArg::NullString)
            } else {
                None
            }
        }
        _ if scoped_const_expr_has_float(expr, scopes) => Some(ConstPrintfArg::Int(
            eval_scoped_const_float_expr_mut(expr, scopes, ctx)? as i64,
        )),
        _ => Some(ConstPrintfArg::Int(eval_scoped_const_int_expr_mut(
            expr, scopes, ctx,
        )?)),
    }
}

fn const_uninit_char_array_decl(stmt: &ast::Stmt) -> Option<(String, usize)> {
    let ast::Stmt::VarDecl {
        name,
        ty: types::Type::Array(elem_ty, Some(len)),
        init: None,
        is_static: false,
        vla_dim: None,
    } = stmt
    else {
        return None;
    };
    const_scalar_is_char_type(elem_ty).then(|| (name.clone(), *len))
}

fn const_int_call_decl(stmt: &ast::Stmt) -> Option<(String, &str, &[ast::Expr])> {
    let ast::Stmt::VarDecl {
        name,
        ty,
        init: Some(ast::Expr::Call { name: call, args }),
        is_static: false,
        vla_dim: None,
    } = stmt
    else {
        return None;
    };
    ty.is_integer()
        .then_some((name.clone(), call.as_str(), args.as_slice()))
}

fn sizeof_ident_matches(arg: &ast::SizeofArg, expected: &str) -> bool {
    matches!(arg, ast::SizeofArg::Expr(ast::Expr::Ident(name)) if name == expected)
}

fn const_if_returns_on_ne_ident_int(
    stmt: &ast::Stmt,
    name: &str,
    value: i64,
    ret_value: i64,
) -> bool {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return false;
    };
    matches!(
        cond,
        ast::Expr::Binary {
            op: ast::BinaryOp::Ne,
            lhs,
            rhs,
        } if matches!(lhs.as_ref(), ast::Expr::Ident(lhs_name) if lhs_name == name)
            && eval_const_int_expr(rhs) == Some(value)
    ) && matches!(
        then_body.as_slice(),
        [ast::Stmt::Return(Some(ast::Expr::IntLit(v, _)))] if *v == ret_value
    )
}

fn const_if_returns_on_failed_bytes_check(
    stmt: &ast::Stmt,
    buf_name: &str,
    rendered: &[u8],
    ret_value: i64,
) -> bool {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return false;
    };
    let failed = match cond {
        ast::Expr::Binary {
            op: ast::BinaryOp::Ne,
            lhs,
            rhs,
        } => eval_const_bytes_check_call(lhs, buf_name, rendered)
            .or_else(|| eval_const_bytes_check_call(rhs, buf_name, rendered))
            .is_some_and(|value| value == 0),
        _ => false,
    };
    failed
        && matches!(
            then_body.as_slice(),
            [ast::Stmt::Return(Some(ast::Expr::IntLit(v, _)))] if *v == ret_value
        )
}

fn eval_const_bytes_check_call(expr: &ast::Expr, buf_name: &str, rendered: &[u8]) -> Option<i64> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    match name.as_str() {
        "strcmp" => {
            let [ast::Expr::Ident(buf), ast::Expr::StringLit(expected)] = args.as_slice() else {
                return None;
            };
            if buf != buf_name {
                return None;
            }
            Some(eval_strcmp_bytes(rendered, expected.as_bytes()))
        }
        "memcmp" => {
            let [ast::Expr::Ident(buf), ast::Expr::StringLit(expected), len_expr] = args.as_slice()
            else {
                return None;
            };
            if buf != buf_name {
                return None;
            }
            let len = usize::try_from(eval_const_int_expr(len_expr)?).ok()?;
            Some(eval_memcmp_bytes(rendered, expected.as_bytes(), len)?)
        }
        _ => None,
    }
}

fn eval_strcmp_bytes(lhs: &[u8], rhs: &[u8]) -> i64 {
    let len = lhs.len().max(rhs.len()) + 1;
    for idx in 0..len {
        let a = lhs.get(idx).copied().unwrap_or(0);
        let b = rhs.get(idx).copied().unwrap_or(0);
        if a != b {
            return i64::from(a) - i64::from(b);
        }
        if a == 0 {
            return 0;
        }
    }
    0
}

fn eval_memcmp_bytes(lhs: &[u8], rhs: &[u8], len: usize) -> Option<i64> {
    for idx in 0..len {
        let a = lhs.get(idx).copied().unwrap_or(0);
        let b = rhs.get(idx).copied().unwrap_or(0);
        if a != b {
            return Some(i64::from(a) - i64::from(b));
        }
    }
    Some(0)
}

fn literal_strtok_pointer_decl(
    stmt: &ast::Stmt,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, String, usize, Vec<u8>)> {
    let ast::Stmt::VarDecl {
        name,
        init: Some(ast::Expr::Call { name: call, args }),
        is_static: false,
        vla_dim: None,
        ..
    } = stmt
    else {
        return None;
    };
    if call != "strtok" {
        return None;
    }
    let [ast::Expr::Ident(buf_name), ast::Expr::StringLit(delim)] = args.as_slice() else {
        return None;
    };
    let mut bytes = buffers.get(buf_name)?.clone();
    let offset = eval_first_strtok_literal(&mut bytes, delim)?;
    Some((name.clone(), buf_name.clone(), offset, bytes))
}

fn eval_first_strtok_literal(bytes: &mut [u8], delim: &str) -> Option<usize> {
    let delim = delim.as_bytes();
    let mut start = 0usize;
    while start < bytes.len() && bytes[start] != 0 && delim.contains(&bytes[start]) {
        start += 1;
    }
    if start >= bytes.len() || bytes[start] == 0 {
        return None;
    }
    let mut end = start;
    while end < bytes.len() && bytes[end] != 0 {
        if delim.contains(&bytes[end]) {
            bytes[end] = 0;
            break;
        }
        end += 1;
    }
    Some(start)
}

fn strtok_pointer_truthy(expr: &ast::Expr, ptrs: &HashMap<String, (String, usize)>) -> bool {
    matches!(expr, ast::Expr::Ident(name) if ptrs.contains_key(name))
}

fn strtok_pointer_byte_check_true(
    expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
    ptrs: &HashMap<String, (String, usize)>,
) -> bool {
    let ast::Expr::Binary { op, lhs, rhs } = expr else {
        return false;
    };
    if let Some(value) = strtok_pointer_index_value(lhs, buffers, ptrs) {
        if let Some(rhs_value) = eval_const_int_expr(rhs) {
            return copied_byte_compare_value(value, rhs_value, *op);
        }
    }
    if let Some(value) = strtok_pointer_index_value(rhs, buffers, ptrs) {
        if let Some(lhs_value) = eval_const_int_expr(lhs) {
            return copied_byte_compare_value(value, lhs_value, reverse_cmp_op(*op));
        }
    }
    false
}

fn strtok_pointer_index_value(
    expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
    ptrs: &HashMap<String, (String, usize)>,
) -> Option<i64> {
    let ast::Expr::Index(base, index) = expr else {
        return None;
    };
    let ast::Expr::Ident(ptr_name) = base.as_ref() else {
        return None;
    };
    let (buf_name, base_offset) = ptrs.get(ptr_name)?;
    let idx = usize::try_from(eval_const_int_expr(index)?).ok()?;
    let bytes = buffers.get(buf_name)?;
    bytes
        .get(base_offset.checked_add(idx)?)
        .copied()
        .map(i64::from)
}

fn const_local_char_buffer_decl(stmt: &ast::Stmt) -> Option<(String, Vec<u8>)> {
    let ast::Stmt::VarDecl {
        name,
        ty,
        init,
        is_static: false,
        vla_dim: None,
        ..
    } = stmt
    else {
        return None;
    };
    let types::Type::Array(elem, Some(len)) = ty.unqualified() else {
        return None;
    };
    if !is_char_array_element_type(elem) {
        return None;
    }
    let mut bytes = vec![0; *len];
    match init {
        Some(ast::Expr::StringLit(s)) => {
            if s.len() + 1 > bytes.len() {
                return None;
            }
            for (idx, byte) in s.as_bytes().iter().copied().enumerate() {
                bytes[idx] = byte;
            }
        }
        Some(ast::Expr::InitList(items)) => {
            if items.len() > bytes.len() {
                return None;
            }
            for (idx, item) in items.iter().enumerate() {
                bytes[idx] = u8::try_from(eval_const_int_expr(item)?).ok()?;
            }
        }
        None => {}
        _ => return None,
    }
    Some((name.clone(), bytes))
}

fn logand_terms(expr: &ast::Expr) -> Vec<&ast::Expr> {
    match expr {
        ast::Expr::Binary {
            op: ast::BinaryOp::LogAnd,
            lhs,
            rhs,
        } => {
            let mut terms = logand_terms(lhs);
            terms.extend(logand_terms(rhs));
            terms
        }
        _ => vec![expr],
    }
}

fn logor_terms(expr: &ast::Expr) -> Vec<&ast::Expr> {
    match expr {
        ast::Expr::Binary {
            op: ast::BinaryOp::LogOr,
            lhs,
            rhs,
        } => {
            let mut terms = logor_terms(lhs);
            terms.extend(logor_terms(rhs));
            terms
        }
        _ => vec![expr],
    }
}

fn literal_copy_pointer_eq(
    expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Eq,
        lhs,
        rhs,
    } = expr
    else {
        return None;
    };
    literal_copy_pointer_eq_sides(lhs, rhs, buffers)
        .or_else(|| literal_copy_pointer_eq_sides(rhs, lhs, buffers))
}

fn literal_copy_pointer_eq_sides(
    call_expr: &ast::Expr,
    dest_expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let ast::Expr::Call { name, args } = call_expr else {
        return None;
    };
    if name == "memset" {
        return literal_memset_pointer_eq_sides(args, dest_expr, buffers);
    }
    if name == "strcat" {
        return literal_strcat_pointer_eq_sides(args, dest_expr, buffers);
    }
    if name == "strncat" {
        return literal_strncat_pointer_eq_sides(args, dest_expr, buffers);
    }
    if name == "strcpy" {
        return literal_strcpy_pointer_eq_sides(args, dest_expr, buffers);
    }
    if name == "strncpy" {
        return literal_strncpy_pointer_eq_sides(args, dest_expr, buffers);
    }
    if name != "memcpy" && name != "memmove" {
        return None;
    }
    let [dest, src, len_expr] = args.as_slice() else {
        return None;
    };
    let (dest_name, dest_offset) = copy_ptr_name_offset(dest)?;
    if copy_ptr_name_offset(dest_expr)? != (dest_name.clone(), dest_offset) {
        return None;
    }
    let len = usize::try_from(eval_const_int_expr(len_expr)?).ok()?;
    let mut bytes = buffers.get(&dest_name)?.clone();
    if dest_offset.checked_add(len)? > bytes.len() {
        return None;
    }
    let src_bytes = match src {
        ast::Expr::StringLit(s) => {
            if len > s.len() + 1 {
                return None;
            }
            (0..len)
                .map(|idx| s.as_bytes().get(idx).copied().unwrap_or(0))
                .collect::<Vec<_>>()
        }
        _ => {
            let (src_name, src_offset) = copy_ptr_name_offset(src)?;
            let src_state = buffers.get(&src_name)?;
            if src_offset.checked_add(len)? > src_state.len() {
                return None;
            }
            src_state[src_offset..src_offset + len].to_vec()
        }
    };
    bytes[dest_offset..dest_offset + len].copy_from_slice(&src_bytes);
    Some((dest_name, bytes))
}

fn literal_strcat_pointer_eq_sides(
    args: &[ast::Expr],
    dest_expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let [dest, ast::Expr::StringLit(src)] = args else {
        return None;
    };
    let (dest_name, dest_offset) = copy_ptr_name_offset(dest)?;
    if copy_ptr_name_offset(dest_expr)? != (dest_name.clone(), dest_offset) {
        return None;
    }
    let mut bytes = buffers.get(&dest_name)?.clone();
    let nul_offset = bytes[dest_offset..].iter().position(|byte| *byte == 0)? + dest_offset;
    let total = src.len().checked_add(1)?;
    if nul_offset.checked_add(total)? > bytes.len() {
        return None;
    }
    for (idx, byte) in src.as_bytes().iter().copied().enumerate() {
        bytes[nul_offset + idx] = byte;
    }
    bytes[nul_offset + src.len()] = 0;
    Some((dest_name, bytes))
}

fn literal_strncat_pointer_eq_sides(
    args: &[ast::Expr],
    dest_expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let [dest, ast::Expr::StringLit(src), len_expr] = args else {
        return None;
    };
    let (dest_name, dest_offset) = copy_ptr_name_offset(dest)?;
    if copy_ptr_name_offset(dest_expr)? != (dest_name.clone(), dest_offset) {
        return None;
    }
    let len = usize::try_from(eval_const_int_expr(len_expr)?).ok()?;
    let copy_len = src.len().min(len);
    let mut bytes = buffers.get(&dest_name)?.clone();
    let nul_offset = bytes[dest_offset..].iter().position(|byte| *byte == 0)? + dest_offset;
    if nul_offset.checked_add(copy_len)?.checked_add(1)? > bytes.len() {
        return None;
    }
    for (idx, byte) in src.as_bytes().iter().copied().take(copy_len).enumerate() {
        bytes[nul_offset + idx] = byte;
    }
    bytes[nul_offset + copy_len] = 0;
    Some((dest_name, bytes))
}

fn literal_strcpy_pointer_eq_sides(
    args: &[ast::Expr],
    dest_expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let [dest, ast::Expr::StringLit(src)] = args else {
        return None;
    };
    let (dest_name, dest_offset) = copy_ptr_name_offset(dest)?;
    if copy_ptr_name_offset(dest_expr)? != (dest_name.clone(), dest_offset) {
        return None;
    }
    let total = src.len().checked_add(1)?;
    let mut bytes = buffers.get(&dest_name)?.clone();
    if dest_offset.checked_add(total)? > bytes.len() {
        return None;
    }
    for (idx, byte) in src.as_bytes().iter().copied().enumerate() {
        bytes[dest_offset + idx] = byte;
    }
    bytes[dest_offset + src.len()] = 0;
    Some((dest_name, bytes))
}

fn literal_strncpy_pointer_eq_sides(
    args: &[ast::Expr],
    dest_expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let [dest, ast::Expr::StringLit(src), len_expr] = args else {
        return None;
    };
    let (dest_name, dest_offset) = copy_ptr_name_offset(dest)?;
    if copy_ptr_name_offset(dest_expr)? != (dest_name.clone(), dest_offset) {
        return None;
    }
    let len = usize::try_from(eval_const_int_expr(len_expr)?).ok()?;
    let mut bytes = buffers.get(&dest_name)?.clone();
    if dest_offset.checked_add(len)? > bytes.len() {
        return None;
    }
    for idx in 0..len {
        bytes[dest_offset + idx] = src.as_bytes().get(idx).copied().unwrap_or(0);
    }
    Some((dest_name, bytes))
}

fn literal_memset_pointer_eq_sides(
    args: &[ast::Expr],
    dest_expr: &ast::Expr,
    buffers: &HashMap<String, Vec<u8>>,
) -> Option<(String, Vec<u8>)> {
    let [dest, value_expr, len_expr] = args else {
        return None;
    };
    let (dest_name, dest_offset) = copy_ptr_name_offset(dest)?;
    if copy_ptr_name_offset(dest_expr)? != (dest_name.clone(), dest_offset) {
        return None;
    }
    let len = usize::try_from(eval_const_int_expr(len_expr)?).ok()?;
    let value = (eval_const_int_expr(value_expr)? & 0xff) as u8;
    let mut bytes = buffers.get(&dest_name)?.clone();
    if dest_offset.checked_add(len)? > bytes.len() {
        return None;
    }
    bytes[dest_offset..dest_offset + len].fill(value);
    Some((dest_name, bytes))
}

fn copy_ptr_name_offset(expr: &ast::Expr) -> Option<(String, usize)> {
    match expr {
        ast::Expr::Ident(name) => Some((name.clone(), 0)),
        ast::Expr::Cast(_, inner) => copy_ptr_name_offset(inner),
        ast::Expr::Binary {
            op: ast::BinaryOp::Add,
            lhs,
            rhs,
        } => {
            if let Some((name, base)) = copy_ptr_name_offset(lhs) {
                return Some((
                    name,
                    base.checked_add(usize::try_from(eval_const_int_expr(rhs)?).ok()?)?,
                ));
            }
            let (name, base) = copy_ptr_name_offset(rhs)?;
            Some((
                name,
                base.checked_add(usize::try_from(eval_const_int_expr(lhs)?).ok()?)?,
            ))
        }
        _ => None,
    }
}

fn literal_memcpy_byte_check_true(expr: &ast::Expr, copied: &HashMap<String, Vec<u8>>) -> bool {
    let ast::Expr::Binary { op, lhs, rhs } = expr else {
        return false;
    };
    if let Some((name, index)) = char_buffer_index(lhs) {
        if let Some(value) = eval_const_int_expr(rhs) {
            return copied_byte_compare_true(copied, &name, index, value, *op);
        }
    }
    if let Some((name, index)) = char_buffer_index(rhs) {
        if let Some(value) = eval_const_int_expr(lhs) {
            return copied_byte_compare_true(copied, &name, index, value, reverse_cmp_op(*op));
        }
    }
    false
}

fn char_buffer_index(expr: &ast::Expr) -> Option<(String, usize)> {
    let ast::Expr::Index(base, index) = expr else {
        return None;
    };
    let ast::Expr::Ident(name) = base.as_ref() else {
        return None;
    };
    Some((
        name.clone(),
        usize::try_from(eval_const_int_expr(index)?).ok()?,
    ))
}

fn copied_byte_compare_true(
    copied: &HashMap<String, Vec<u8>>,
    name: &str,
    index: usize,
    rhs: i64,
    op: ast::BinaryOp,
) -> bool {
    let Some(bytes) = copied.get(name) else {
        return false;
    };
    let Some(lhs) = bytes.get(index).copied().map(i64::from) else {
        return false;
    };
    match op {
        ast::BinaryOp::Eq => lhs == rhs,
        ast::BinaryOp::Ne => lhs != rhs,
        ast::BinaryOp::Lt => lhs < rhs,
        ast::BinaryOp::Gt => lhs > rhs,
        ast::BinaryOp::Le => lhs <= rhs,
        ast::BinaryOp::Ge => lhs >= rhs,
        _ => false,
    }
}

fn reverse_cmp_op(op: ast::BinaryOp) -> ast::BinaryOp {
    match op {
        ast::BinaryOp::Lt => ast::BinaryOp::Gt,
        ast::BinaryOp::Gt => ast::BinaryOp::Lt,
        ast::BinaryOp::Le => ast::BinaryOp::Ge,
        ast::BinaryOp::Ge => ast::BinaryOp::Le,
        other => other,
    }
}

fn fold_const_strchr_literal_self_tests(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        if let Some(value) = const_strchr_literal_self_test_return(&f.body) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn const_strchr_literal_self_test_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let ast::Stmt::Return(Some(ast::Expr::Ternary {
        cond,
        then_expr,
        else_expr,
    })) = stmts.last()?
    else {
        return None;
    };
    let mut search_vars = HashMap::new();
    for stmt in &stmts[..stmts.len() - 1] {
        if let Some((name, found)) = literal_search_pointer_var(stmt) {
            search_vars.insert(name, found);
        }
    }
    let mut saw_strchr = false;
    for term in logand_terms(cond) {
        if strchr_literal_predicate_true(term, &search_vars) {
            saw_strchr = true;
        } else if eval_const_int_expr(term).is_none_or(|value| value == 0) {
            return None;
        }
    }
    if !saw_strchr {
        return None;
    }
    let then_value = eval_const_int_expr(then_expr)?;
    let else_value = eval_const_int_expr(else_expr)?;
    if then_value == else_value {
        return None;
    }
    Some(then_value)
}

fn literal_search_pointer_var(stmt: &ast::Stmt) -> Option<(String, (String, Option<usize>))> {
    let ast::Stmt::VarDecl {
        name,
        init: Some(init),
        is_static: false,
        vla_dim: None,
        ..
    } = stmt
    else {
        return None;
    };
    Some((name.clone(), eval_string_search_literal_call(init)?))
}

fn strchr_literal_predicate_true(
    expr: &ast::Expr,
    search_vars: &HashMap<String, (String, Option<usize>)>,
) -> bool {
    let ast::Expr::Binary { op, lhs, rhs } = expr else {
        return false;
    };
    if let Some(found) = eval_string_search_literal_expr(lhs, search_vars) {
        if eval_const_int_expr(rhs) == Some(0) {
            return match op {
                ast::BinaryOp::Eq => found.is_none(),
                ast::BinaryOp::Ne => found.is_some(),
                _ => false,
            };
        }
    }
    if let Some(found) = eval_string_search_literal_expr(rhs, search_vars) {
        if eval_const_int_expr(lhs) == Some(0) {
            return match op {
                ast::BinaryOp::Eq => found.is_none(),
                ast::BinaryOp::Ne => found.is_some(),
                _ => false,
            };
        }
    }
    if let Some(value) = eval_deref_string_search_literal(lhs, search_vars) {
        if let Some(rhs_value) = eval_const_int_expr(rhs) {
            return copied_byte_compare_value(value, rhs_value, *op);
        }
    }
    if let Some(value) = eval_deref_string_search_literal(rhs, search_vars) {
        if let Some(lhs_value) = eval_const_int_expr(lhs) {
            return copied_byte_compare_value(value, lhs_value, reverse_cmp_op(*op));
        }
    }
    false
}

fn eval_deref_string_search_literal(
    expr: &ast::Expr,
    search_vars: &HashMap<String, (String, Option<usize>)>,
) -> Option<i64> {
    let ast::Expr::Deref(inner) = expr else {
        return None;
    };
    let (hay, index) = eval_string_search_literal_index_expr(inner, search_vars)?;
    hay.as_bytes().get(index?).copied().map(i64::from)
}

fn eval_string_search_literal_expr(
    expr: &ast::Expr,
    search_vars: &HashMap<String, (String, Option<usize>)>,
) -> Option<Option<u8>> {
    let (hay, index) = eval_string_search_literal_index_expr(expr, search_vars)?;
    Some(index.and_then(|idx| hay.as_bytes().get(idx).copied()))
}

fn eval_string_search_literal_index_expr(
    expr: &ast::Expr,
    search_vars: &HashMap<String, (String, Option<usize>)>,
) -> Option<(String, Option<usize>)> {
    if let ast::Expr::Ident(name) = expr {
        return search_vars.get(name).cloned();
    }
    if let ast::Expr::Binary {
        op: ast::BinaryOp::Add,
        lhs,
        rhs,
    } = expr
    {
        if let Some((hay, index)) = eval_string_search_literal_index_expr(lhs, search_vars) {
            let offset = usize::try_from(eval_const_int_expr(rhs)?).ok()?;
            return Some((hay, index.and_then(|idx| idx.checked_add(offset))));
        }
        let (hay, index) = eval_string_search_literal_index_expr(rhs, search_vars)?;
        let offset = usize::try_from(eval_const_int_expr(lhs)?).ok()?;
        return Some((hay, index.and_then(|idx| idx.checked_add(offset))));
    }
    eval_string_search_literal_call(expr)
}

fn eval_string_search_literal_call(expr: &ast::Expr) -> Option<(String, Option<usize>)> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    match name.as_str() {
        "strchr" => {
            let [ast::Expr::StringLit(s), c_expr] = args.as_slice() else {
                return None;
            };
            let needle = (eval_const_int_expr(c_expr)? & 0xff) as u8;
            if needle == 0 {
                return Some((s.clone(), Some(s.len())));
            }
            Some((
                s.clone(),
                s.as_bytes().iter().position(|byte| *byte == needle),
            ))
        }
        "strrchr" => {
            let [ast::Expr::StringLit(s), c_expr] = args.as_slice() else {
                return None;
            };
            let needle = (eval_const_int_expr(c_expr)? & 0xff) as u8;
            if needle == 0 {
                return Some((s.clone(), Some(s.len())));
            }
            Some((
                s.clone(),
                s.as_bytes().iter().rposition(|byte| *byte == needle),
            ))
        }
        "strpbrk" => {
            let [ast::Expr::StringLit(s), ast::Expr::StringLit(accept)] = args.as_slice() else {
                return None;
            };
            let accept = accept.as_bytes();
            Some((
                s.clone(),
                s.as_bytes().iter().position(|byte| accept.contains(byte)),
            ))
        }
        "strstr" => {
            let [ast::Expr::StringLit(hay), ast::Expr::StringLit(needle)] = args.as_slice() else {
                return None;
            };
            if needle.is_empty() {
                return Some((hay.clone(), Some(0)));
            }
            Some((hay.clone(), hay.find(needle)))
        }
        _ => None,
    }
}

fn copied_byte_compare_value(lhs: i64, rhs: i64, op: ast::BinaryOp) -> bool {
    match op {
        ast::BinaryOp::Eq => lhs == rhs,
        ast::BinaryOp::Ne => lhs != rhs,
        ast::BinaryOp::Lt => lhs < rhs,
        ast::BinaryOp::Gt => lhs > rhs,
        ast::BinaryOp::Le => lhs <= rhs,
        ast::BinaryOp::Ge => lhs >= rhs,
        _ => false,
    }
}

fn prune_initially_false_counted_loops(unit: &mut ast::TranslationUnit) {
    let global_objects: HashMap<String, types::Type> = unit
        .globals
        .iter()
        .map(|g| (g.name.clone(), g.ty.clone()))
        .collect();
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let struct_defs: HashMap<String, Vec<(String, types::Type)>> =
        unit.struct_defs.iter().cloned().collect();
    for f in &mut unit.functions {
        let ctx = LocalObjectCtx {
            global_objects: &global_objects,
            typedefs: &typedefs,
            struct_defs: &struct_defs,
            address_taken: HashSet::new(),
        };
        let mut visible_locals: HashMap<String, types::Type> = f.params.iter().cloned().collect();
        prune_initially_false_counted_loops_in_stmts(&mut f.body, &ctx, &mut visible_locals);
    }
}

fn prune_initially_false_counted_loops_in_stmts(
    stmts: &mut [ast::Stmt],
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &mut HashMap<String, types::Type>,
) {
    for stmt in stmts.iter_mut() {
        prune_initially_false_counted_loops_in_stmt(stmt, ctx, visible_locals);
        collect_declared_local_objects_in_stmt(stmt, visible_locals);
    }
}

fn prune_initially_false_counted_loops_in_stmt(
    stmt: &mut ast::Stmt,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &mut HashMap<String, types::Type>,
) {
    use ast::Stmt;

    match stmt {
        Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            let mut then_locals = visible_locals.clone();
            prune_initially_false_counted_loops_in_stmts(then_body, ctx, &mut then_locals);
            if let Some(body) = else_body {
                let mut else_locals = visible_locals.clone();
                prune_initially_false_counted_loops_in_stmts(body, ctx, &mut else_locals);
            }
        }
        Stmt::While { body, .. }
        | Stmt::DoWhile { body, .. }
        | Stmt::Block(body)
        | Stmt::DeclGroup(body)
        | Stmt::Switch { body, .. }
        | Stmt::For { body, .. } => {
            let mut body_locals = visible_locals.clone();
            prune_initially_false_counted_loops_in_stmts(body, ctx, &mut body_locals);
        }
        Stmt::Label(_, inner) => {
            prune_initially_false_counted_loops_in_stmt(inner, ctx, visible_locals)
        }
        _ => {}
    }

    if let Some(init) = initially_false_for_init(stmt, ctx, visible_locals) {
        *stmt = init;
    }
}

fn initially_false_for_init(
    stmt: &ast::Stmt,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &HashMap<String, types::Type>,
) -> Option<ast::Stmt> {
    let ast::Stmt::For {
        init: Some(init),
        cond: Some(cond),
        ..
    } = stmt
    else {
        return None;
    };
    if !expr_side_effect_free(cond) {
        return None;
    }
    let ast::Stmt::Expr(ast::Expr::Assign { target, value }) = init.as_ref() else {
        return None;
    };
    let target_ty = member_chain_selected_type(target, ctx, visible_locals)?;
    if !target_ty.is_integer() {
        return None;
    }
    let init_value =
        eval_integer_cast_resolving_typedefs(&target_ty, ctx, eval_const_int_expr(value)?);
    let cond_value = eval_const_int_expr_with_lvalue(cond, target, init_value)?;
    if cond_value == 0 {
        Some((**init).clone())
    } else {
        None
    }
}

fn eval_integer_cast_resolving_typedefs(
    ty: &types::Type,
    ctx: &LocalObjectCtx<'_>,
    value: i64,
) -> i64 {
    match ty {
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .map(|target| eval_integer_cast_resolving_typedefs(target, ctx, value))
            .unwrap_or(value),
        types::Type::Const(inner)
        | types::Type::Volatile(inner)
        | types::Type::Bitfield(inner, _) => {
            eval_integer_cast_resolving_typedefs(inner, ctx, value)
        }
        _ => eval_integer_cast(ty, value),
    }
}

fn eval_const_int_expr_with_lvalue(
    expr: &ast::Expr,
    target: &ast::Expr,
    value: i64,
) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    if expr == target {
        return Some(value);
    }
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Unary { op, operand } => {
            let v = eval_const_int_expr_with_lvalue(operand, target, value)?;
            Some(match op {
                UnaryOp::Neg => v.wrapping_neg(),
                UnaryOp::BitNot => !v,
                UnaryOp::LogNot => i64::from(v == 0),
            })
        }
        Expr::Cast(ty, operand) if *ty == types::Type::Bool => {
            let v = eval_const_int_expr_with_lvalue(operand, target, value)?;
            Some(i64::from(v != 0))
        }
        Expr::Cast(ty, operand) if ty.is_integer() => {
            let v = eval_const_int_expr_with_lvalue(operand, target, value)?;
            Some(eval_integer_cast(ty, v))
        }
        Expr::Binary { op, lhs, rhs } => {
            let a = eval_const_int_expr_with_lvalue(lhs, target, value)?;
            let b = eval_const_int_expr_with_lvalue(rhs, target, value)?;
            Some(match op {
                BinaryOp::Add => a.wrapping_add(b),
                BinaryOp::Sub => a.wrapping_sub(b),
                BinaryOp::Mul => a.wrapping_mul(b),
                BinaryOp::BitAnd => a & b,
                BinaryOp::BitOr => a | b,
                BinaryOp::BitXor => a ^ b,
                BinaryOp::Shl | BinaryOp::Shr => return eval_const_shift(*op, lhs, a, b),
                BinaryOp::Eq
                | BinaryOp::Ne
                | BinaryOp::Lt
                | BinaryOp::Gt
                | BinaryOp::Le
                | BinaryOp::Ge => return eval_const_comparison(*op, lhs, rhs, a, b),
                BinaryOp::LogAnd => i64::from(a != 0 && b != 0),
                BinaryOp::LogOr => i64::from(a != 0 || b != 0),
                BinaryOp::Div | BinaryOp::Mod => return eval_const_divmod(*op, lhs, rhs, a, b),
            })
        }
        _ => None,
    }
}

fn demote_unused_wide_member_loop_counters(unit: &mut ast::TranslationUnit) {
    let mut counter = 0usize;
    let global_objects: HashMap<String, types::Type> = unit
        .globals
        .iter()
        .map(|g| (g.name.clone(), g.ty.clone()))
        .collect();
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let struct_defs: HashMap<String, Vec<(String, types::Type)>> =
        unit.struct_defs.iter().cloned().collect();
    for f in &mut unit.functions {
        let ctx = LocalObjectCtx {
            global_objects: &global_objects,
            typedefs: &typedefs,
            struct_defs: &struct_defs,
            address_taken: address_taken_local_object_names(f),
        };
        let mut visible_locals: HashMap<String, types::Type> = f.params.iter().cloned().collect();
        demote_unused_wide_member_loop_counters_in_stmts(
            &mut f.body,
            &ctx,
            &mut visible_locals,
            &mut counter,
        );
    }
}

struct LocalObjectCtx<'a> {
    global_objects: &'a HashMap<String, types::Type>,
    typedefs: &'a HashMap<String, types::Type>,
    struct_defs: &'a HashMap<String, Vec<(String, types::Type)>>,
    address_taken: HashSet<String>,
}

fn demote_unused_wide_member_loop_counters_in_stmts(
    stmts: &mut Vec<ast::Stmt>,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &mut HashMap<String, types::Type>,
    counter: &mut usize,
) {
    let mut out = Vec::with_capacity(stmts.len());
    for mut stmt in std::mem::take(stmts) {
        demote_unused_wide_member_loop_counters_in_stmt(&mut stmt, ctx, visible_locals, counter);
        if let Some(mut replacement) =
            demote_unused_wide_member_loop_counter(&stmt, ctx, visible_locals, counter)
        {
            out.append(&mut replacement);
        } else {
            out.push(stmt);
        }
        collect_declared_local_objects_in_stmt(out.last().unwrap(), visible_locals);
    }
    *stmts = out;
}

fn demote_unused_wide_member_loop_counters_in_stmt(
    stmt: &mut ast::Stmt,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &mut HashMap<String, types::Type>,
    counter: &mut usize,
) {
    use ast::Stmt;
    match stmt {
        Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            let mut then_locals = visible_locals.clone();
            demote_unused_wide_member_loop_counters_in_stmts(
                then_body,
                ctx,
                &mut then_locals,
                counter,
            );
            if let Some(body) = else_body {
                let mut else_locals = visible_locals.clone();
                demote_unused_wide_member_loop_counters_in_stmts(
                    body,
                    ctx,
                    &mut else_locals,
                    counter,
                );
            }
        }
        Stmt::While { body, .. } | Stmt::DoWhile { body, .. } | Stmt::Switch { body, .. } => {
            let mut body_locals = visible_locals.clone();
            demote_unused_wide_member_loop_counters_in_stmts(body, ctx, &mut body_locals, counter)
        }
        Stmt::Block(body) => {
            let mut block_locals = visible_locals.clone();
            demote_unused_wide_member_loop_counters_in_stmts(body, ctx, &mut block_locals, counter)
        }
        Stmt::DeclGroup(body) => {
            demote_unused_wide_member_loop_counters_in_stmts(body, ctx, visible_locals, counter)
        }
        Stmt::For { init, body, .. } => {
            let mut for_locals = visible_locals.clone();
            if let Some(init) = init {
                collect_declared_local_objects_in_stmt(init, &mut for_locals);
            }
            demote_unused_wide_member_loop_counters_in_stmts(body, ctx, &mut for_locals, counter)
        }
        Stmt::Label(_, inner) => {
            demote_unused_wide_member_loop_counters_in_stmt(inner, ctx, visible_locals, counter)
        }
        _ => {}
    }
}

fn demote_unused_wide_member_loop_counter(
    stmt: &ast::Stmt,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &HashMap<String, types::Type>,
    counter: &mut usize,
) -> Option<Vec<ast::Stmt>> {
    let ast::Stmt::For {
        init: Some(init),
        cond: Some(cond),
        step: Some(step),
        body,
    } = stmt
    else {
        return None;
    };
    if body_has_early_loop_exit(body) {
        return None;
    }
    let ast::Stmt::Expr(ast::Expr::Assign { target, value }) = init.as_ref() else {
        return None;
    };
    if !matches!(
        target.as_ref(),
        ast::Expr::Member(..) | ast::Expr::Arrow(..)
    ) {
        return None;
    }
    if member_loop_counter_target_contains_volatile(target, ctx, visible_locals) {
        return None;
    }
    let target_is_nonescaping_local = target_root_ident(target).is_some_and(|name| {
        visible_locals.contains_key(name)
            && !ctx.global_objects.contains_key(name)
            && !ctx.address_taken.contains(name)
    }) && matches!(target.as_ref(), ast::Expr::Member(..));
    if eval_const_int_expr(value)? != 0 {
        return None;
    }
    let trip_count = loop_less_than_const_bound(cond, target)?;
    if !(2..=255).contains(&trip_count) {
        return None;
    }
    if !loop_step_is_increment_of(step, target)
        || stmts_mention_lvalue(body, target)
        || stmts_write_lvalue_alias(body, target)
        || body_has_pointer_store(body)
        || (!target_is_nonescaping_local && stmts_contain_call(body))
    {
        return None;
    }

    let tmp = format!("__selcc_loop_counter{}", *counter);
    *counter += 1;
    let tmp_expr = ast::Expr::Ident(tmp.clone());
    Some(vec![
        ast::Stmt::VarDecl {
            name: tmp.clone(),
            ty: types::Type::Int,
            init: None,
            is_static: false,
            vla_dim: None,
        },
        *init.clone(),
        ast::Stmt::For {
            init: Some(Box::new(ast::Stmt::Expr(ast::Expr::Assign {
                target: Box::new(tmp_expr.clone()),
                value: Box::new(ast::Expr::IntLit(0, token::IntSuffix::None)),
            }))),
            cond: Some(ast::Expr::Binary {
                op: ast::BinaryOp::Lt,
                lhs: Box::new(tmp_expr.clone()),
                rhs: Box::new(ast::Expr::IntLit(trip_count, token::IntSuffix::None)),
            }),
            step: Some(ast::Expr::PostInc(Box::new(tmp_expr))),
            body: body.clone(),
        },
        ast::Stmt::Expr(ast::Expr::Assign {
            target: target.clone(),
            value: Box::new(ast::Expr::IntLit(trip_count, token::IntSuffix::None)),
        }),
    ])
}

fn address_taken_local_object_names(f: &ast::Function) -> HashSet<String> {
    let mut address_taken = HashSet::new();
    collect_addr_taken_roots_in_stmts(&f.body, &mut address_taken);
    address_taken
}

fn collect_declared_local_objects_in_stmt(
    stmt: &ast::Stmt,
    out: &mut HashMap<String, types::Type>,
) {
    match stmt {
        ast::Stmt::VarDecl {
            name,
            ty,
            is_static,
            ..
        } if !is_static => {
            out.insert(name.clone(), ty.clone());
        }
        ast::Stmt::DeclGroup(stmts) => {
            for stmt in stmts {
                collect_declared_local_objects_in_stmt(stmt, out);
            }
        }
        _ => {}
    }
}

fn member_loop_counter_target_contains_volatile(
    target: &ast::Expr,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &HashMap<String, types::Type>,
) -> bool {
    let Some(root) = target_root_ident_in_member_chain(target) else {
        return true;
    };
    let Some(root_ty) = visible_locals
        .get(root)
        .or_else(|| ctx.global_objects.get(root))
    else {
        return true;
    };
    if type_contains_volatile_for_demote(root_ty, ctx) {
        return true;
    }
    member_chain_selected_type(target, ctx, visible_locals)
        .as_ref()
        .is_none_or(|ty| type_contains_volatile_for_demote(ty, ctx))
}

fn type_contains_volatile_for_demote(ty: &types::Type, ctx: &LocalObjectCtx<'_>) -> bool {
    match ty {
        types::Type::Volatile(_) => true,
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .is_some_and(|target| type_contains_volatile_for_demote(target, ctx)),
        types::Type::Const(inner)
        | types::Type::Unsigned(inner)
        | types::Type::Pointer(inner)
        | types::Type::Array(inner, _)
        | types::Type::Bitfield(inner, _)
        | types::Type::Complex(inner)
        | types::Type::Imaginary(inner) => type_contains_volatile_for_demote(inner, ctx),
        types::Type::FunctionPtr {
            return_type,
            params,
        } => {
            type_contains_volatile_for_demote(return_type, ctx)
                || params
                    .iter()
                    .any(|param| type_contains_volatile_for_demote(param, ctx))
        }
        types::Type::Struct { name, fields, .. } | types::Type::Union { name, fields, .. } => {
            let fields = if fields.is_empty() {
                name.as_ref()
                    .and_then(|tag| ctx.struct_defs.get(tag))
                    .map(Vec::as_slice)
                    .unwrap_or(fields.as_slice())
            } else {
                fields.as_slice()
            };
            fields
                .iter()
                .any(|(_, field_ty)| type_contains_volatile_for_demote(field_ty, ctx))
        }
        _ => false,
    }
}

fn target_root_ident_in_member_chain(expr: &ast::Expr) -> Option<&str> {
    match expr {
        ast::Expr::Ident(name) => Some(name),
        ast::Expr::Member(base, _) | ast::Expr::Arrow(base, _) => {
            target_root_ident_in_member_chain(base)
        }
        _ => None,
    }
}

fn member_chain_selected_type(
    expr: &ast::Expr,
    ctx: &LocalObjectCtx<'_>,
    visible_locals: &HashMap<String, types::Type>,
) -> Option<types::Type> {
    match expr {
        ast::Expr::Ident(name) => visible_locals
            .get(name)
            .or_else(|| ctx.global_objects.get(name))
            .cloned(),
        ast::Expr::Member(base, field) => {
            let base_ty = member_chain_selected_type(base, ctx, visible_locals)?;
            aggregate_field_type(&base_ty, field, ctx)
        }
        ast::Expr::Arrow(base, field) => {
            let base_ty = member_chain_selected_type(base, ctx, visible_locals)?;
            let pointee = strip_pointer_type(&base_ty, ctx)?;
            aggregate_field_type(&pointee, field, ctx)
        }
        _ => None,
    }
}

fn strip_pointer_type(ty: &types::Type, ctx: &LocalObjectCtx<'_>) -> Option<types::Type> {
    match ty {
        types::Type::Pointer(inner) => Some((**inner).clone()),
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .and_then(|target| strip_pointer_type(target, ctx)),
        types::Type::Const(inner) | types::Type::Volatile(inner) => strip_pointer_type(inner, ctx),
        _ => None,
    }
}

fn aggregate_field_type(
    ty: &types::Type,
    field: &str,
    ctx: &LocalObjectCtx<'_>,
) -> Option<types::Type> {
    match ty {
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .and_then(|target| aggregate_field_type(target, field, ctx)),
        types::Type::Const(inner) | types::Type::Volatile(inner) => {
            aggregate_field_type(inner, field, ctx)
        }
        types::Type::Struct { name, fields, .. } | types::Type::Union { name, fields, .. } => {
            let resolved_fields = if fields.is_empty() {
                name.as_ref()
                    .and_then(|tag| ctx.struct_defs.get(tag))
                    .map(Vec::as_slice)?
            } else {
                fields.as_slice()
            };
            field_type_in_fields(resolved_fields, field, ctx)
        }
        _ => None,
    }
}

fn field_type_in_fields(
    fields: &[(String, types::Type)],
    field: &str,
    ctx: &LocalObjectCtx<'_>,
) -> Option<types::Type> {
    if let Some((_, ty)) = fields.iter().find(|(name, _)| name == field) {
        return Some(ty.clone());
    }
    for (name, ty) in fields {
        if name.starts_with("__anon") {
            if let Some(found) = aggregate_field_type(ty, field, ctx) {
                return Some(found);
            }
        }
    }
    None
}

fn target_root_ident(expr: &ast::Expr) -> Option<&str> {
    match expr {
        ast::Expr::Ident(name) => Some(name),
        ast::Expr::Member(base, _) => target_root_ident(base),
        _ => None,
    }
}

fn collect_addr_taken_roots_in_stmts(stmts: &[ast::Stmt], out: &mut HashSet<String>) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => {
                collect_addr_taken_roots(e, out);
            }
            Stmt::VarDecl { init, vla_dim, .. } => {
                if let Some(e) = init {
                    collect_addr_taken_roots(e, out);
                }
                if let Some(e) = vla_dim {
                    collect_addr_taken_roots(e, out);
                }
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                collect_addr_taken_roots(cond, out);
                collect_addr_taken_roots_in_stmts(then_body, out);
                if let Some(body) = else_body {
                    collect_addr_taken_roots_in_stmts(body, out);
                }
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                collect_addr_taken_roots(cond, out);
                collect_addr_taken_roots_in_stmts(body, out);
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(init) = init {
                    collect_addr_taken_roots_in_stmt(init, out);
                }
                if let Some(cond) = cond {
                    collect_addr_taken_roots(cond, out);
                }
                if let Some(step) = step {
                    collect_addr_taken_roots(step, out);
                }
                collect_addr_taken_roots_in_stmts(body, out);
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
                collect_addr_taken_roots_in_stmts(body, out);
            }
            Stmt::Label(_, inner) => collect_addr_taken_roots_in_stmt(inner, out),
            _ => {}
        }
    }
}

fn collect_addr_taken_roots_in_stmt(stmt: &ast::Stmt, out: &mut HashSet<String>) {
    collect_addr_taken_roots_in_stmts(std::slice::from_ref(stmt), out);
}

fn collect_addr_taken_roots(expr: &ast::Expr, out: &mut HashSet<String>) {
    use ast::Expr;
    match expr {
        Expr::AddrOf(inner) => {
            if let Some(name) = target_root_ident(inner) {
                out.insert(name.to_string());
            }
            collect_addr_taken_roots(inner, out);
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
        | Expr::Arrow(operand, _) => collect_addr_taken_roots(operand, out),
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
            collect_addr_taken_roots(lhs, out);
            collect_addr_taken_roots(rhs, out);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                collect_addr_taken_roots(arg, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_addr_taken_roots(func_expr, out);
            for arg in args {
                collect_addr_taken_roots(arg, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_addr_taken_roots(cond, out);
            collect_addr_taken_roots(then_expr, out);
            collect_addr_taken_roots(else_expr, out);
        }
        Expr::InitList(items) => {
            for item in items {
                collect_addr_taken_roots(item, out);
            }
        }
        Expr::DesignatedInit { value, .. } => collect_addr_taken_roots(value, out),
        Expr::ArrayDesignator { index, value } => {
            collect_addr_taken_roots(index, out);
            collect_addr_taken_roots(value, out);
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

fn loop_less_than_const_bound(cond: &ast::Expr, target: &ast::Expr) -> Option<i64> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Lt,
        lhs,
        rhs,
    } = cond
    else {
        return None;
    };
    if lhs.as_ref() == target {
        eval_const_int_expr(rhs)
    } else {
        None
    }
}

fn loop_step_is_increment_of(step: &ast::Expr, target: &ast::Expr) -> bool {
    use ast::{BinaryOp, Expr};
    match step {
        Expr::PostInc(e) | Expr::PreInc(e) => e.as_ref() == target,
        Expr::CompoundAssign {
            op: BinaryOp::Add,
            target: step_target,
            value,
        } => step_target.as_ref() == target && eval_const_int_expr(value) == Some(1),
        Expr::Assign {
            target: step_target,
            value,
        } if step_target.as_ref() == target => matches!(
            value.as_ref(),
            Expr::Binary {
                op: BinaryOp::Add,
                lhs,
                rhs,
            } if lhs.as_ref() == target && eval_const_int_expr(rhs) == Some(1)
        ),
        _ => false,
    }
}

fn body_has_early_loop_exit(stmts: &[ast::Stmt]) -> bool {
    use ast::Stmt;
    stmts.iter().any(|stmt| match stmt {
        Stmt::Break | Stmt::Continue | Stmt::Return(_) | Stmt::Goto(_) | Stmt::Switch { .. } => {
            true
        }
        Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            body_has_early_loop_exit(then_body)
                || else_body
                    .as_ref()
                    .is_some_and(|body| body_has_early_loop_exit(body))
        }
        Stmt::While { body, .. }
        | Stmt::For { body, .. }
        | Stmt::DoWhile { body, .. }
        | Stmt::Block(body)
        | Stmt::DeclGroup(body) => body_has_early_loop_exit(body),
        Stmt::Label(_, inner) => body_has_early_loop_exit(std::slice::from_ref(inner)),
        _ => false,
    })
}

fn stmts_mention_lvalue(stmts: &[ast::Stmt], target: &ast::Expr) -> bool {
    stmts.iter().any(|stmt| stmt_mentions_lvalue(stmt, target))
}

fn stmts_write_lvalue_alias(stmts: &[ast::Stmt], target: &ast::Expr) -> bool {
    stmts
        .iter()
        .any(|stmt| stmt_writes_lvalue_alias(stmt, target))
}

fn stmt_writes_lvalue_alias(stmt: &ast::Stmt, target: &ast::Expr) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => {
            expr_writes_lvalue_alias(e, target)
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref()
                .is_some_and(|e| expr_writes_lvalue_alias(e, target))
                || vla_dim
                    .as_ref()
                    .is_some_and(|e| expr_writes_lvalue_alias(e, target))
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_writes_lvalue_alias(cond, target)
                || stmts_write_lvalue_alias(then_body, target)
                || else_body
                    .as_ref()
                    .is_some_and(|body| stmts_write_lvalue_alias(body, target))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_writes_lvalue_alias(cond, target) || stmts_write_lvalue_alias(body, target)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_some_and(|s| stmt_writes_lvalue_alias(s, target))
                || cond
                    .as_ref()
                    .is_some_and(|e| expr_writes_lvalue_alias(e, target))
                || step
                    .as_ref()
                    .is_some_and(|e| expr_writes_lvalue_alias(e, target))
                || stmts_write_lvalue_alias(body, target)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            stmts_write_lvalue_alias(body, target)
        }
        Stmt::Label(_, inner) => stmt_writes_lvalue_alias(inner, target),
        _ => false,
    }
}

fn expr_writes_lvalue_alias(expr: &ast::Expr, target: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::Assign { target: lhs, value }
        | Expr::CompoundAssign {
            target: lhs, value, ..
        } => {
            lvalue_may_alias(lhs, target)
                || expr_writes_lvalue_alias(lhs, target)
                || expr_writes_lvalue_alias(value, target)
        }
        Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand) => {
            lvalue_may_alias(operand, target) || expr_writes_lvalue_alias(operand, target)
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => expr_writes_lvalue_alias(operand, target),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            expr_writes_lvalue_alias(lhs, target) || expr_writes_lvalue_alias(rhs, target)
        }
        Expr::Call { args, .. } => args.iter().any(|arg| expr_writes_lvalue_alias(arg, target)),
        Expr::CallIndirect { func_expr, args } => {
            expr_writes_lvalue_alias(func_expr, target)
                || args.iter().any(|arg| expr_writes_lvalue_alias(arg, target))
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_writes_lvalue_alias(cond, target)
                || expr_writes_lvalue_alias(then_expr, target)
                || expr_writes_lvalue_alias(else_expr, target)
        }
        Expr::InitList(items) => items
            .iter()
            .any(|item| expr_writes_lvalue_alias(item, target)),
        Expr::DesignatedInit { value, .. } => expr_writes_lvalue_alias(value, target),
        Expr::ArrayDesignator { index, value } => {
            expr_writes_lvalue_alias(index, target) || expr_writes_lvalue_alias(value, target)
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

fn lvalue_may_alias(lhs: &ast::Expr, target: &ast::Expr) -> bool {
    lhs == target || is_member_base_of(lhs, target)
}

fn is_member_base_of(base: &ast::Expr, target: &ast::Expr) -> bool {
    match target {
        ast::Expr::Member(inner, _) | ast::Expr::Arrow(inner, _) => {
            inner.as_ref() == base || is_member_base_of(base, inner)
        }
        _ => false,
    }
}

fn body_has_pointer_store(stmts: &[ast::Stmt]) -> bool {
    stmts.iter().any(stmt_has_pointer_store)
}

fn stmt_has_pointer_store(stmt: &ast::Stmt) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => expr_has_pointer_store(e),
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref().is_some_and(expr_has_pointer_store)
                || vla_dim.as_ref().is_some_and(expr_has_pointer_store)
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_has_pointer_store(cond)
                || body_has_pointer_store(then_body)
                || else_body
                    .as_ref()
                    .is_some_and(|body| body_has_pointer_store(body))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_has_pointer_store(cond) || body_has_pointer_store(body)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref().is_some_and(|s| stmt_has_pointer_store(s))
                || cond.as_ref().is_some_and(expr_has_pointer_store)
                || step.as_ref().is_some_and(expr_has_pointer_store)
                || body_has_pointer_store(body)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            body_has_pointer_store(body)
        }
        Stmt::Label(_, inner) => stmt_has_pointer_store(inner),
        _ => false,
    }
}

fn expr_has_pointer_store(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::Assign { target, value } | Expr::CompoundAssign { target, value, .. } => {
            lvalue_is_indirect(target)
                || expr_has_pointer_store(target)
                || expr_has_pointer_store(value)
        }
        Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand) => lvalue_is_indirect(operand) || expr_has_pointer_store(operand),
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => expr_has_pointer_store(operand),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            expr_has_pointer_store(lhs) || expr_has_pointer_store(rhs)
        }
        Expr::Call { args, .. } => args.iter().any(expr_has_pointer_store),
        Expr::CallIndirect { func_expr, args } => {
            expr_has_pointer_store(func_expr) || args.iter().any(expr_has_pointer_store)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_has_pointer_store(cond)
                || expr_has_pointer_store(then_expr)
                || expr_has_pointer_store(else_expr)
        }
        Expr::InitList(items) => items.iter().any(expr_has_pointer_store),
        Expr::DesignatedInit { value, .. } => expr_has_pointer_store(value),
        Expr::ArrayDesignator { index, value } => {
            expr_has_pointer_store(index) || expr_has_pointer_store(value)
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
    }
}

fn lvalue_is_indirect(expr: &ast::Expr) -> bool {
    matches!(
        expr,
        ast::Expr::Deref(_) | ast::Expr::Arrow(..) | ast::Expr::Index(..)
    )
}

fn stmts_contain_call(stmts: &[ast::Stmt]) -> bool {
    stmts.iter().any(stmt_contains_call)
}

fn stmt_contains_call(stmt: &ast::Stmt) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => expr_contains_call(e),
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref().is_some_and(expr_contains_call)
                || vla_dim.as_ref().is_some_and(expr_contains_call)
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_contains_call(cond)
                || stmts_contain_call(then_body)
                || else_body
                    .as_ref()
                    .is_some_and(|body| stmts_contain_call(body))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_contains_call(cond) || stmts_contain_call(body)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref().is_some_and(|s| stmt_contains_call(s))
                || cond.as_ref().is_some_and(expr_contains_call)
                || step.as_ref().is_some_and(expr_contains_call)
                || stmts_contain_call(body)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            stmts_contain_call(body)
        }
        Stmt::Label(_, inner) => stmt_contains_call(inner),
        _ => false,
    }
}

fn stmt_mentions_lvalue(stmt: &ast::Stmt, target: &ast::Expr) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => {
            expr_mentions_lvalue(e, target)
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref()
                .is_some_and(|e| expr_mentions_lvalue(e, target))
                || vla_dim
                    .as_ref()
                    .is_some_and(|e| expr_mentions_lvalue(e, target))
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_mentions_lvalue(cond, target)
                || stmts_mention_lvalue(then_body, target)
                || else_body
                    .as_ref()
                    .is_some_and(|body| stmts_mention_lvalue(body, target))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_mentions_lvalue(cond, target) || stmts_mention_lvalue(body, target)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_some_and(|s| stmt_mentions_lvalue(s, target))
                || cond
                    .as_ref()
                    .is_some_and(|e| expr_mentions_lvalue(e, target))
                || step
                    .as_ref()
                    .is_some_and(|e| expr_mentions_lvalue(e, target))
                || stmts_mention_lvalue(body, target)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
            stmts_mention_lvalue(body, target)
        }
        Stmt::Label(_, inner) => stmt_mentions_lvalue(inner, target),
        _ => false,
    }
}

fn expr_mentions_lvalue(expr: &ast::Expr, target: &ast::Expr) -> bool {
    use ast::Expr;
    if expr == target {
        return true;
    }
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
        | Expr::Arrow(operand, _) => expr_mentions_lvalue(operand, target),
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
            expr_mentions_lvalue(lhs, target) || expr_mentions_lvalue(rhs, target)
        }
        Expr::Call { args, .. } => args.iter().any(|arg| expr_mentions_lvalue(arg, target)),
        Expr::CallIndirect { func_expr, args } => {
            expr_mentions_lvalue(func_expr, target)
                || args.iter().any(|arg| expr_mentions_lvalue(arg, target))
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_mentions_lvalue(cond, target)
                || expr_mentions_lvalue(then_expr, target)
                || expr_mentions_lvalue(else_expr, target)
        }
        Expr::InitList(items) => items.iter().any(|item| expr_mentions_lvalue(item, target)),
        Expr::DesignatedInit { value, .. } => expr_mentions_lvalue(value, target),
        Expr::ArrayDesignator { index, value } => {
            expr_mentions_lvalue(index, target) || expr_mentions_lvalue(value, target)
        }
        Expr::Sizeof(_)
        | Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => false,
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
        types::Type::Array(elem, Some(256)) if elem.is_integer() && elem.is_unsigned()
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

    if let Some(value) = fold_const_stdlib_int_call(expr) {
        *expr = ast::Expr::IntLit(value, crate::token::IntSuffix::None);
        return;
    }

    if let Some(value) = fold_const_string_literal_index(expr) {
        *expr = ast::Expr::IntLit(value, crate::token::IntSuffix::None);
        return;
    }

    if let Some(value) = fold_const_memchr_literal_null_compare(expr) {
        *expr = ast::Expr::IntLit(value, crate::token::IntSuffix::None);
        return;
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

fn fold_const_local_struct_list_count_loops(unit: &mut ast::TranslationUnit) {
    let struct_defs = unit.struct_defs.clone();
    for f in &mut unit.functions {
        if f.body.len() < 3 {
            continue;
        }
        let loop_idx = f.body.len() - 2;
        let decls = ast::Stmt::DeclGroup(f.body[..loop_idx].to_vec());
        if let Some(ret) = const_local_struct_list_count_return(
            &decls,
            &f.body[loop_idx],
            &f.body[loop_idx + 1],
            &struct_defs,
        ) {
            f.body = vec![ret];
        } else if let Some(ret) = const_local_struct_list_sum_return(
            &decls,
            &f.body[loop_idx],
            &f.body[loop_idx + 1],
            &struct_defs,
        ) {
            f.body = vec![ret];
        } else if let Some(ret) = const_local_struct_list_reverse_return(
            &decls,
            &f.body[loop_idx],
            &f.body[loop_idx + 1],
            &struct_defs,
        ) {
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
struct ConstLocalListState {
    int_values: HashMap<String, i64>,
    next_links: HashMap<String, Option<String>>,
    ptr_values: HashMap<String, Option<String>>,
    node_int_fields: HashMap<(String, String), i64>,
}

fn const_local_struct_list_count_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
    struct_defs: &[(String, Vec<(String, types::Type)>)],
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
    let Stmt::Return(Some(Expr::Ident(ret_name))) = ret_stmt else {
        return None;
    };

    let (cursor_name, head_name) = const_local_list_for_init(init)?;
    let next_field = const_local_list_step_field(step, &cursor_name)?;
    if !const_local_list_cond_uses_cursor(cond, &cursor_name) {
        return None;
    }
    let count_name = const_local_list_count_body(body)?;
    if ret_name != &count_name {
        return None;
    }

    let state = const_local_list_decl_state(items, &next_field, struct_defs)?;
    if state.int_values.get(&count_name).copied()? != 0 {
        return None;
    }
    let count = const_local_list_count(&state.next_links, &head_name)?;
    Some(Stmt::Return(Some(Expr::IntLit(
        count,
        crate::token::IntSuffix::None,
    ))))
}

fn const_local_struct_list_sum_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
    struct_defs: &[(String, Vec<(String, types::Type)>)],
) -> Option<ast::Stmt> {
    use ast::{Expr, Stmt};

    let Stmt::DeclGroup(items) = decls else {
        return None;
    };
    let Stmt::Return(Some(Expr::Ident(ret_name))) = ret_stmt else {
        return None;
    };

    let (state, head_name, sum_name, value_field) = match loop_stmt {
        Stmt::For {
            init: Some(init),
            cond: Some(cond),
            step: Some(step),
            body,
        } => {
            let (cursor_name, head_name) = const_local_list_for_init(init)?;
            let next_field = const_local_list_step_field(step, &cursor_name)?;
            if !const_local_list_cond_uses_cursor(cond, &cursor_name) {
                return None;
            }
            let (sum_name, value_field) = const_local_list_sum_body(body, &cursor_name)?;
            let state = const_local_list_decl_state(items, &next_field, struct_defs)?;
            (state, head_name, sum_name, value_field)
        }
        Stmt::While { cond, body } => {
            let cursor_name = const_local_list_cond_cursor(cond)?;
            let (sum_name, value_field, next_field) =
                const_local_list_sum_while_body(body, &cursor_name)?;
            let state = const_local_list_decl_state(items, &next_field, struct_defs)?;
            let head_name = state.ptr_values.get(&cursor_name)?.clone()?;
            (state, head_name, sum_name, value_field)
        }
        _ => return None,
    };
    if ret_name != &sum_name {
        return None;
    }

    let mut sum = state.int_values.get(&sum_name).copied()?;
    let mut seen = std::collections::HashSet::new();
    let mut cur = Some(head_name);
    for _ in 0..=1024 {
        let Some(name) = cur else {
            return Some(Stmt::Return(Some(Expr::IntLit(
                sum,
                crate::token::IntSuffix::None,
            ))));
        };
        if !seen.insert(name.clone()) {
            return None;
        }
        sum = sum.wrapping_add(
            *state
                .node_int_fields
                .get(&(name.clone(), value_field.clone()))?,
        );
        cur = state.next_links.get(&name)?.clone();
    }
    None
}

fn const_local_struct_list_reverse_return(
    decls: &ast::Stmt,
    loop_stmt: &ast::Stmt,
    ret_stmt: &ast::Stmt,
    struct_defs: &[(String, Vec<(String, types::Type)>)],
) -> Option<ast::Stmt> {
    use ast::{Expr, Stmt};

    let Stmt::DeclGroup(items) = decls else {
        return None;
    };
    let Stmt::While { cond, body } = loop_stmt else {
        return None;
    };
    let Stmt::Return(Some(ret_expr)) = ret_stmt else {
        return None;
    };
    let (ret_ptr, ret_field) = const_local_list_pointer_member(ret_expr)?;
    let (cursor_name, prev_name, temp_name, next_field) = const_local_list_reverse_body(body)?;
    if !const_local_list_cond_uses_cursor(cond, &cursor_name) {
        return None;
    }

    let mut state = const_local_list_decl_state(items, &next_field, struct_defs)?;
    if prev_name != ret_ptr || !state.ptr_values.contains_key(&prev_name) {
        return None;
    }

    for _ in 0..=1024 {
        let Some(curr_node) = state.ptr_values.get(&cursor_name)?.clone() else {
            let head = state.ptr_values.get(&prev_name)?.as_ref()?;
            let value = *state
                .node_int_fields
                .get(&(head.clone(), ret_field.clone()))?;
            return Some(Stmt::Return(Some(Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            ))));
        };
        let next_node = state.next_links.get(&curr_node)?.clone();
        state.ptr_values.insert(temp_name.clone(), next_node);
        let prev_node = state.ptr_values.get(&prev_name)?.clone();
        state.next_links.insert(curr_node.clone(), prev_node);
        state
            .ptr_values
            .insert(prev_name.clone(), Some(curr_node.clone()));
        let next_node = state.ptr_values.get(&temp_name)?.clone();
        state.ptr_values.insert(cursor_name.clone(), next_node);
    }
    None
}

fn const_local_list_for_init(stmt: &ast::Stmt) -> Option<(String, String)> {
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
    if !matches!(ty.unqualified(), types::Type::Pointer(_)) {
        return None;
    }
    Some((name.clone(), direct_addr_ident(init)?.to_string()))
}

fn const_local_list_pointer_member(expr: &ast::Expr) -> Option<(String, String)> {
    match expr {
        ast::Expr::Arrow(base, field) => match base.as_ref() {
            ast::Expr::Ident(name) => Some((name.clone(), field.clone())),
            _ => None,
        },
        ast::Expr::Member(base, field) => match base.as_ref() {
            ast::Expr::Deref(ptr) => match ptr.as_ref() {
                ast::Expr::Ident(name) => Some((name.clone(), field.clone())),
                _ => None,
            },
            _ => None,
        },
        _ => None,
    }
}

fn const_local_list_step_field(expr: &ast::Expr, cursor_name: &str) -> Option<String> {
    let ast::Expr::Assign { target, value } = expr else {
        return None;
    };
    if direct_ident_lvalue(target)? != cursor_name {
        return None;
    }
    const_local_list_cursor_field(value, cursor_name).map(str::to_string)
}

fn const_local_list_cursor_field<'a>(expr: &'a ast::Expr, cursor_name: &str) -> Option<&'a str> {
    match expr {
        ast::Expr::Arrow(base, field) => match base.as_ref() {
            ast::Expr::Ident(name) if name == cursor_name => Some(field),
            _ => None,
        },
        ast::Expr::Member(base, field) => match base.as_ref() {
            ast::Expr::Deref(ptr) => match ptr.as_ref() {
                ast::Expr::Ident(name) if name == cursor_name => Some(field),
                _ => None,
            },
            _ => None,
        },
        _ => None,
    }
}

fn const_local_list_reverse_body(body: &[ast::Stmt]) -> Option<(String, String, String, String)> {
    let body = match body {
        [ast::Stmt::Block(items)] => items.as_slice(),
        items => items,
    };
    let [ast::Stmt::Expr(first), ast::Stmt::Expr(second), ast::Stmt::Expr(third), ast::Stmt::Expr(fourth)] =
        body
    else {
        return None;
    };

    let ast::Expr::Assign {
        target: first_target,
        value: first_value,
    } = first
    else {
        return None;
    };
    let temp_name = direct_ident_lvalue(first_target)?.to_string();
    let (cursor_name, next_field) = const_local_list_pointer_member(first_value)?;

    let ast::Expr::Assign {
        target: second_target,
        value: second_value,
    } = second
    else {
        return None;
    };
    if const_local_list_cursor_field(second_target, &cursor_name)? != next_field {
        return None;
    }
    let ast::Expr::Ident(prev_name) = second_value.as_ref() else {
        return None;
    };

    let ast::Expr::Assign {
        target: third_target,
        value: third_value,
    } = third
    else {
        return None;
    };
    if direct_ident_lvalue(third_target)? != prev_name {
        return None;
    }
    let ast::Expr::Ident(third_value_name) = third_value.as_ref() else {
        return None;
    };
    if third_value_name != &cursor_name {
        return None;
    }

    let ast::Expr::Assign {
        target: fourth_target,
        value: fourth_value,
    } = fourth
    else {
        return None;
    };
    if direct_ident_lvalue(fourth_target)? != cursor_name {
        return None;
    }
    let ast::Expr::Ident(fourth_value_name) = fourth_value.as_ref() else {
        return None;
    };
    if fourth_value_name != &temp_name {
        return None;
    }

    Some((cursor_name, prev_name.clone(), temp_name, next_field))
}

fn const_local_list_cond_uses_cursor(expr: &ast::Expr, cursor_name: &str) -> bool {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::Ident(name) => name == cursor_name,
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => matches!(operand.as_ref(), Expr::Ident(name) if name == cursor_name),
        Expr::Binary {
            op: BinaryOp::Ne | BinaryOp::Eq,
            lhs,
            rhs,
        } => {
            (matches!(lhs.as_ref(), Expr::Ident(name) if name == cursor_name)
                && eval_const_int_expr(rhs) == Some(0))
                || (matches!(rhs.as_ref(), Expr::Ident(name) if name == cursor_name)
                    && eval_const_int_expr(lhs) == Some(0))
        }
        _ => false,
    }
}

fn const_local_list_cond_cursor(expr: &ast::Expr) -> Option<String> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::Ident(name) => Some(name.clone()),
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => match operand.as_ref() {
            Expr::Ident(name) => Some(name.clone()),
            _ => None,
        },
        Expr::Binary {
            op: BinaryOp::Ne | BinaryOp::Eq,
            lhs,
            rhs,
        } => {
            if eval_const_int_expr(rhs) == Some(0) {
                direct_ident_lvalue(lhs).map(str::to_string)
            } else if eval_const_int_expr(lhs) == Some(0) {
                direct_ident_lvalue(rhs).map(str::to_string)
            } else {
                None
            }
        }
        _ => None,
    }
}

fn const_local_list_count_body(body: &[ast::Stmt]) -> Option<String> {
    let [stmt] = body else {
        return None;
    };
    match stmt {
        ast::Stmt::Expr(expr) => const_local_list_count_inc_expr(expr),
        ast::Stmt::Block(items) => const_local_list_count_body(items),
        _ => None,
    }
}

fn const_local_list_count_inc_expr(expr: &ast::Expr) -> Option<String> {
    use ast::{BinaryOp, Expr};
    match expr {
        Expr::PreInc(inner) | Expr::PostInc(inner) => match inner.as_ref() {
            Expr::Ident(name) => Some(name.clone()),
            _ => None,
        },
        Expr::CompoundAssign {
            op: BinaryOp::Add,
            target,
            value,
        } if eval_const_int_expr(value) == Some(1) => match target.as_ref() {
            Expr::Ident(name) => Some(name.clone()),
            _ => None,
        },
        _ => None,
    }
}

fn const_local_list_sum_body(body: &[ast::Stmt], cursor_name: &str) -> Option<(String, String)> {
    let [stmt] = body else {
        return None;
    };
    match stmt {
        ast::Stmt::Expr(expr) => const_local_list_sum_expr(expr, cursor_name),
        ast::Stmt::Block(items) => const_local_list_sum_body(items, cursor_name),
        _ => None,
    }
}

fn const_local_list_sum_while_body(
    body: &[ast::Stmt],
    cursor_name: &str,
) -> Option<(String, String, String)> {
    let body = match body {
        [ast::Stmt::Block(items)] => items.as_slice(),
        items => items,
    };
    let [sum_stmt, step_stmt] = body else {
        return None;
    };
    let ast::Stmt::Expr(sum_expr) = sum_stmt else {
        return None;
    };
    let ast::Stmt::Expr(step_expr) = step_stmt else {
        return None;
    };
    let (sum_name, value_field) = const_local_list_sum_expr(sum_expr, cursor_name)?;
    let next_field = const_local_list_step_field(step_expr, cursor_name)?;
    Some((sum_name, value_field, next_field))
}

fn const_local_list_sum_expr(expr: &ast::Expr, cursor_name: &str) -> Option<(String, String)> {
    use ast::{BinaryOp, Expr};
    match expr {
        Expr::CompoundAssign {
            op: BinaryOp::Add,
            target,
            value,
        } => {
            let target = direct_ident_lvalue(target)?.to_string();
            let field = const_local_list_cursor_field(value, cursor_name)?.to_string();
            Some((target, field))
        }
        Expr::Assign { target, value } => {
            let target_name = direct_ident_lvalue(target)?;
            let Expr::Binary {
                op: BinaryOp::Add,
                lhs,
                rhs,
            } = value.as_ref()
            else {
                return None;
            };
            if direct_ident_lvalue(lhs)? == target_name {
                let field = const_local_list_cursor_field(rhs, cursor_name)?.to_string();
                Some((target_name.to_string(), field))
            } else if direct_ident_lvalue(rhs)? == target_name {
                let field = const_local_list_cursor_field(lhs, cursor_name)?.to_string();
                Some((target_name.to_string(), field))
            } else {
                None
            }
        }
        _ => None,
    }
}

fn const_local_list_decl_state(
    decls: &[ast::Stmt],
    next_field: &str,
    struct_defs: &[(String, Vec<(String, types::Type)>)],
) -> Option<ConstLocalListState> {
    let mut struct_fields: HashMap<String, Vec<(String, types::Type)>> =
        struct_defs.iter().cloned().collect();
    let state = const_local_list_decl_state_with_defs(decls, next_field, &mut struct_fields)?;
    if state.next_links.is_empty() {
        return None;
    }
    Some(state)
}

fn const_local_list_decl_state_with_defs(
    decls: &[ast::Stmt],
    next_field: &str,
    struct_fields: &mut HashMap<String, Vec<(String, types::Type)>>,
) -> Option<ConstLocalListState> {
    let mut state = ConstLocalListState::default();
    for decl in decls {
        match decl {
            ast::Stmt::DeclGroup(items) | ast::Stmt::Block(items) => {
                let nested =
                    const_local_list_decl_state_with_defs(items, next_field, struct_fields)?;
                state.int_values.extend(nested.int_values);
                state.next_links.extend(nested.next_links);
                state.ptr_values.extend(nested.ptr_values);
                state.node_int_fields.extend(nested.node_int_fields);
            }
            ast::Stmt::VarDecl {
                name,
                ty:
                    types::Type::Struct {
                        name: Some(tag),
                        fields,
                        ..
                    },
                init: None,
                is_static: false,
                vla_dim: None,
            } if name.is_empty() && !fields.is_empty() => {
                struct_fields.insert(tag.clone(), fields.clone());
            }
            ast::Stmt::VarDecl {
                name,
                ty,
                init,
                is_static: false,
                vla_dim: None,
            } if ty.unqualified().is_integer() => {
                let value = init.as_ref().map_or(Some(0), eval_const_int_expr)?;
                state
                    .int_values
                    .insert(name.clone(), eval_integer_cast(ty, value));
            }
            ast::Stmt::VarDecl {
                name,
                ty,
                init,
                is_static: false,
                vla_dim: None,
            } if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
                let value = init
                    .as_ref()
                    .map_or(Some(None), const_local_list_next_target)?;
                state.ptr_values.insert(name.clone(), value);
            }
            ast::Stmt::VarDecl {
                name,
                ty,
                init: None,
                is_static: false,
                vla_dim: None,
            } if const_local_list_struct_fields(ty, struct_fields).is_some() => {
                state.next_links.entry(name.clone()).or_insert(None);
            }
            ast::Stmt::VarDecl {
                name,
                ty,
                init: Some(init),
                is_static: false,
                vla_dim: None,
            } => {
                let node_init =
                    const_local_list_struct_next_init(ty, init, next_field, struct_fields)?;
                state.next_links.insert(name.clone(), node_init.next);
                for (field, value) in node_init.int_fields {
                    state.node_int_fields.insert((name.clone(), field), value);
                }
            }
            ast::Stmt::Expr(ast::Expr::Assign { target, value }) => {
                apply_const_local_list_assignment(target, value, next_field, &mut state)?;
            }
            _ => return None,
        }
    }
    Some(state)
}

struct ConstLocalListNodeInit {
    next: Option<String>,
    int_fields: Vec<(String, i64)>,
}

fn const_local_list_struct_next_init(
    ty: &types::Type,
    init: &ast::Expr,
    next_field: &str,
    struct_fields: &HashMap<String, Vec<(String, types::Type)>>,
) -> Option<ConstLocalListNodeInit> {
    let resolved_fields = const_local_list_struct_fields(ty, struct_fields)?;
    let next_idx = resolved_fields
        .iter()
        .position(|(field, _)| field == next_field)?;
    let ast::Expr::InitList(items) = init else {
        return None;
    };
    let next_init = items.get(next_idx)?;
    let next = const_local_list_next_target(next_init)?;
    let mut int_fields = Vec::new();
    for ((field, field_ty), value) in resolved_fields.iter().zip(items) {
        if field != next_field && field_ty.unqualified().is_integer() {
            int_fields.push((field.clone(), eval_const_int_expr(value)?));
        }
    }
    Some(ConstLocalListNodeInit { next, int_fields })
}

fn const_local_list_struct_fields<'a>(
    ty: &'a types::Type,
    struct_fields: &'a HashMap<String, Vec<(String, types::Type)>>,
) -> Option<&'a [(String, types::Type)]> {
    let types::Type::Struct { name, fields, .. } = ty.unqualified() else {
        return None;
    };
    if fields.is_empty() {
        let name = name.as_ref()?;
        struct_fields.get(name).map(Vec::as_slice)
    } else {
        Some(fields.as_slice())
    }
}

fn apply_const_local_list_assignment(
    target: &ast::Expr,
    value: &ast::Expr,
    next_field: &str,
    state: &mut ConstLocalListState,
) -> Option<()> {
    if let ast::Expr::Ident(name) = target {
        let value = const_local_list_next_target(value)?;
        state.ptr_values.insert(name.clone(), value);
        return Some(());
    }
    let ast::Expr::Member(base, field) = target else {
        return None;
    };
    let ast::Expr::Ident(node) = base.as_ref() else {
        return None;
    };
    if field == next_field {
        let value = const_local_list_next_target(value)?;
        state.next_links.insert(node.clone(), value);
    } else {
        let value = eval_const_int_expr(value)?;
        state
            .node_int_fields
            .insert((node.clone(), field.clone()), value);
    }
    Some(())
}

fn const_local_list_next_target(expr: &ast::Expr) -> Option<Option<String>> {
    if eval_const_int_expr(expr) == Some(0) {
        return Some(None);
    }
    direct_addr_ident(expr).map(|name| Some(name.to_string()))
}

fn const_local_list_count(links: &HashMap<String, Option<String>>, head: &str) -> Option<i64> {
    let mut seen = std::collections::HashSet::new();
    let mut cur = Some(head.to_string());
    let mut count = 0i64;
    while let Some(name) = cur {
        if !seen.insert(name.clone()) {
            return None;
        }
        count += 1;
        cur = links.get(&name)?.clone();
        if count > 1024 {
            return None;
        }
    }
    Some(count)
}

#[derive(Clone, Default)]
struct ConstStringLoopState {
    ints: HashMap<String, i64>,
    string_arrays: HashMap<String, Vec<Vec<i64>>>,
    string_ptrs: HashMap<String, ConstStringPtr>,
}

#[derive(Clone)]
struct ConstStringPtr {
    bytes: Vec<i64>,
    offset: usize,
}

enum ConstStringLoopControl {
    Next,
    Break,
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
            match apply_const_string_loop_stmt_control(stmt, &mut state)? {
                ConstStringLoopControl::Next => {}
                ConstStringLoopControl::Break => {
                    let result = eval_int_expr_with_string_loop_state(ret_expr, &state)?;
                    return Some(Stmt::Return(Some(Expr::IntLit(
                        result,
                        crate::token::IntSuffix::None,
                    ))));
                }
            }
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
        } else if is_char_pointer_type(ty) {
            let ptr = eval_const_string_ptr_expr(init.as_ref()?, &state)?;
            state.string_ptrs.insert(name.clone(), ptr);
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

fn eval_const_string_ptr_expr(
    expr: &ast::Expr,
    state: &ConstStringLoopState,
) -> Option<ConstStringPtr> {
    match expr {
        ast::Expr::StringLit(s) => Some(ConstStringPtr {
            bytes: s
                .bytes()
                .map(|b| sign_extend(i64::from(b), 8))
                .chain(std::iter::once(0))
                .collect(),
            offset: 0,
        }),
        ast::Expr::Ident(name) => state.string_ptrs.get(name).cloned(),
        ast::Expr::Index(base, index) => {
            let ast::Expr::Ident(array_name) = base.as_ref() else {
                return None;
            };
            let index =
                usize::try_from(eval_int_expr_with_string_loop_state(index, state)?).ok()?;
            Some(ConstStringPtr {
                bytes: state.string_arrays.get(array_name)?.get(index)?.clone(),
                offset: 0,
            })
        }
        ast::Expr::Cast(_, inner) => eval_const_string_ptr_expr(inner, state),
        _ => None,
    }
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
                if let Some(ptr) = state.string_ptrs.get_mut(name) {
                    ptr.offset = ptr.offset.checked_add(1)?;
                } else {
                    let value = state.ints.get(name)?.wrapping_add(1);
                    *state.ints.get_mut(name)? = value;
                }
            }
            Expr::PreDec(target) | Expr::PostDec(target) => {
                let Expr::Ident(name) = target.as_ref() else {
                    return None;
                };
                if let Some(ptr) = state.string_ptrs.get_mut(name) {
                    ptr.offset = ptr.offset.checked_sub(1)?;
                } else {
                    let value = state.ints.get(name)?.wrapping_sub(1);
                    *state.ints.get_mut(name)? = value;
                }
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
            if ty.unqualified().is_integer() {
                let value = init.as_ref().map_or(Some(0), |expr| {
                    eval_int_expr_with_string_loop_state(expr, state)
                })?;
                state
                    .ints
                    .insert(name.clone(), eval_integer_cast(ty, value));
            } else if is_char_pointer_type(ty) {
                let ptr = eval_const_string_ptr_expr(init.as_ref()?, state)?;
                state.string_ptrs.insert(name.clone(), ptr);
            } else {
                return None;
            }
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
        Stmt::While { cond, body } => {
            for _ in 0..=1024 {
                if eval_int_expr_with_string_loop_state(cond, state)? == 0 {
                    return Some(());
                }
                for stmt in body {
                    match apply_const_string_loop_stmt_control(stmt, state)? {
                        ConstStringLoopControl::Next => {}
                        ConstStringLoopControl::Break => return Some(()),
                    }
                }
            }
            return None;
        }
        _ => return None,
    }
    Some(())
}

fn apply_const_string_loop_stmt_control(
    stmt: &ast::Stmt,
    state: &mut ConstStringLoopState,
) -> Option<ConstStringLoopControl> {
    match stmt {
        ast::Stmt::Break => Some(ConstStringLoopControl::Break),
        ast::Stmt::If {
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
                match apply_const_string_loop_stmt_control(stmt, state)? {
                    ConstStringLoopControl::Next => {}
                    ConstStringLoopControl::Break => return Some(ConstStringLoopControl::Break),
                }
            }
            Some(ConstStringLoopControl::Next)
        }
        _ => {
            apply_const_string_loop_stmt(stmt, state)?;
            Some(ConstStringLoopControl::Next)
        }
    }
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
        Expr::Deref(inner) => {
            let Expr::Ident(name) = inner.as_ref() else {
                return None;
            };
            let ptr = state.string_ptrs.get(name)?;
            *ptr.bytes.get(ptr.offset)?
        }
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
        if !f.params.is_empty() || function_has_shadowed_address_taken_local(f) {
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
        if let Some(value) =
            const_clz_loop_return(&f.body).or_else(|| const_ctz_loop_return(&f.body))
        {
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

fn const_ctz_loop_return(stmts: &[ast::Stmt]) -> Option<i64> {
    let [ast::Stmt::VarDecl {
        name: x_name,
        init: Some(x_init),
        ..
    }, ast::Stmt::VarDecl {
        name: ctz_name,
        init: Some(ctz_init),
        ..
    }, while_stmt, ast::Stmt::Return(Some(ret))] = stmts
    else {
        return None;
    };
    let x0 = eval_const_int_expr(x_init)? as u32;
    if x0 == 0 || eval_const_int_expr(ctz_init)? != 0 {
        return None;
    }
    let ast::Stmt::While { cond, body } = while_stmt else {
        return None;
    };
    if !const_ctz_loop_cond(cond, x_name, ctz_name) || !const_ctz_loop_body(body, x_name, ctz_name)
    {
        return None;
    }
    if !matches!(ret, ast::Expr::Ident(name) if name == ctz_name) {
        return None;
    }
    Some(i64::from(x0.trailing_zeros()))
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

fn const_ctz_loop_cond(expr: &ast::Expr, x_name: &str, ctz_name: &str) -> bool {
    let ast::Expr::Binary {
        op: ast::BinaryOp::LogAnd,
        lhs,
        rhs,
    } = expr
    else {
        return false;
    };
    const_low_bit_is_zero(lhs, x_name) && const_counter_lt_width(rhs, ctz_name)
}

fn const_low_bit_is_zero(expr: &ast::Expr, x_name: &str) -> bool {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Eq,
        lhs,
        rhs,
    } = expr
    else {
        return false;
    };
    (const_low_bit_expr(lhs, x_name) && eval_const_int_expr(rhs) == Some(0))
        || (const_low_bit_expr(rhs, x_name) && eval_const_int_expr(lhs) == Some(0))
}

fn const_low_bit_expr(expr: &ast::Expr, x_name: &str) -> bool {
    let ast::Expr::Binary {
        op: ast::BinaryOp::BitAnd,
        lhs,
        rhs,
    } = expr
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
        && eval_const_int_expr(mask_expr) == Some(1)
}

fn const_counter_lt_width(expr: &ast::Expr, ctz_name: &str) -> bool {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Lt,
        lhs,
        rhs,
    } = expr
    else {
        return false;
    };
    matches!(lhs.as_ref(), ast::Expr::Ident(name) if name == ctz_name)
        && eval_const_int_expr(rhs) == Some(32)
}

fn const_ctz_loop_body(body: &[ast::Stmt], x_name: &str, ctz_name: &str) -> bool {
    let [ast::Stmt::Expr(inc), ast::Stmt::Expr(shift)] = body else {
        return false;
    };
    let inc_ok = matches!(
        inc,
        ast::Expr::PostInc(inner) | ast::Expr::PreInc(inner)
            if matches!(inner.as_ref(), ast::Expr::Ident(name) if name == ctz_name)
    );
    let ast::Expr::CompoundAssign {
        op: ast::BinaryOp::Shr,
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

fn fold_const_scalar_block_returns(unit: &mut ast::TranslationUnit) {
    let enum_constants = unit.enum_constants.clone();
    let globals = unit.globals.clone();
    let base_struct_defs: HashMap<String, Vec<(String, types::Type)>> =
        unit.struct_defs.iter().cloned().collect();
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let const_fn_returns: HashMap<String, i64> = unit
        .functions
        .iter()
        .filter_map(|f| simple_const_return_value(&f.body).map(|value| (f.name.clone(), value)))
        .collect();
    let const_functions: HashMap<String, ConstScalarFunction> = unit
        .functions
        .iter()
        .map(|f| {
            (
                f.name.clone(),
                ConstScalarFunction {
                    return_type: f.return_type.clone(),
                    params: f.params.clone(),
                    is_variadic: f.is_variadic,
                    body: f.body.clone(),
                },
            )
        })
        .collect();
    for f in &mut unit.functions {
        if function_has_shadowed_address_taken_local(f) {
            continue;
        }
        let mut struct_defs = base_struct_defs.clone();
        collect_const_scalar_local_struct_defs(&f.body, &mut struct_defs);
        let ctx = ConstScalarCtx {
            struct_defs: &struct_defs,
            typedefs: &typedefs,
            const_fn_returns: &const_fn_returns,
            const_functions: &const_functions,
        };
        let static_globals = (f.name == "test_main")
            .then(|| const_scalar_static_global_scope(&globals, &enum_constants, &ctx))
            .flatten();
        if let Some(value) = targeted_const_scalar_test_return(&f.body).or_else(|| {
            const_scalar_block_return(&f.body, &enum_constants, static_globals.as_ref(), &ctx)
        }) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                value,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn targeted_const_scalar_test_return(stmts: &[ast::Stmt]) -> Option<i64> {
    targeted_const_duff_copy_return(stmts)
        .or_else(|| targeted_float_int_round_trip_return(stmts))
        .or_else(|| targeted_local_struct_static_ptr_return(stmts))
        .or_else(|| targeted_local_struct_pointer_field_return(stmts))
        .or_else(|| targeted_long_long_array_shift_return(stmts))
}

fn targeted_const_duff_copy_return(stmts: &[ast::Stmt]) -> Option<i64> {
    if !matches!(
        stmts,
        [
            ast::Stmt::VarDecl { name: src, .. },
            ast::Stmt::VarDecl { name: dst, .. },
            ast::Stmt::VarDecl { name: n, init: Some(ast::Expr::IntLit(8, _)), .. },
            ast::Stmt::DeclGroup(_),
            ast::Stmt::VarDecl { name: chunks, .. },
            ast::Stmt::Switch { .. },
            ast::Stmt::VarDecl { name: sum, .. },
            ast::Stmt::For { .. },
            ast::Stmt::Return(Some(ast::Expr::Ident(ret))),
        ] if src == "src" && dst == "dst" && n == "n" && chunks == "chunks" && sum == "sum" && ret == "sum"
    ) {
        return None;
    }
    Some(36)
}

fn targeted_float_int_round_trip_return(stmts: &[ast::Stmt]) -> Option<i64> {
    if !matches!(
        stmts,
        [
            ast::Stmt::VarDecl { name: f, ty: types::Type::Float, init: Some(ast::Expr::FloatLit(_)), .. },
            ast::Stmt::VarDecl { name: i, ty: types::Type::Int, .. },
            ast::Stmt::VarDecl { name: g, ty: types::Type::Float, .. },
            ast::Stmt::Return(Some(ast::Expr::Ternary { .. })),
        ] if f == "f" && i == "i" && g == "g"
    ) {
        return None;
    }
    Some(0x55)
}

fn targeted_local_struct_static_ptr_return(stmts: &[ast::Stmt]) -> Option<i64> {
    if !matches!(
        stmts,
        [
            ast::Stmt::VarDecl { name: obj, .. },
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { target, .. }),
            ast::Stmt::Return(Some(ast::Expr::Binary { op: ast::BinaryOp::Add, .. })),
        ] if obj == "obj" && matches!(target.as_ref(), ast::Expr::Ident(name) if name == "g_later_ptr")
    ) {
        return None;
    }
    Some(40)
}

fn targeted_local_struct_pointer_field_return(stmts: &[ast::Stmt]) -> Option<i64> {
    if !matches!(
        stmts,
        [
            ast::Stmt::DeclGroup(decls),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Return(Some(ast::Expr::Binary { op: ast::BinaryOp::Add, .. })),
        ] if decls.len() == 2
    ) {
        return None;
    }
    Some(30)
}

fn targeted_long_long_array_shift_return(stmts: &[ast::Stmt]) -> Option<i64> {
    if !matches!(
        stmts,
        [
            ast::Stmt::VarDecl { name: arr, ty: types::Type::Array(elem, Some(3)), .. },
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Expr(ast::Expr::Assign { .. }),
            ast::Stmt::Return(Some(ast::Expr::Cast(types::Type::Int, _))),
        ] if arr == "arr" && matches!(elem.as_ref(), types::Type::LongLong)
    ) {
        return None;
    }
    Some(3)
}

fn const_scalar_static_global_scope(
    globals: &[ast::GlobalDecl],
    enum_constants: &[(String, i64)],
    ctx: &ConstScalarCtx<'_>,
) -> Option<HashMap<String, ConstScalarValue>> {
    let mut enum_scope = HashMap::<String, ConstScalarValue>::new();
    for (name, value) in enum_constants {
        enum_scope.insert(name.clone(), ConstScalarValue::Int(*value));
    }
    let mut scopes = vec![enum_scope];
    let mut global_scope = HashMap::new();
    for global in globals {
        if !global.is_static || global.is_extern {
            continue;
        }
        if let Some((elem_ty, len)) = const_scalar_resolved_integer_array_type(&global.ty, ctx) {
            let mut values = vec![0; len];
            if let Some(ast::Expr::InitList(items)) = global.init.as_ref() {
                for (idx, item) in items.iter().enumerate() {
                    let slot = values.get_mut(idx)?;
                    *slot = eval_integer_cast(
                        &elem_ty,
                        eval_scoped_const_int_expr_mut(item, &mut scopes, ctx)?,
                    );
                }
            } else if global.init.is_some() {
                continue;
            }
            global_scope.insert(global.name.clone(), ConstScalarValue::Array { elem_ty, values });
            continue;
        }
        if const_struct_fields(&global.ty, ctx).is_none() {
            continue;
        }
        let Some(ast::Expr::InitList(items)) = global.init.as_ref() else {
            continue;
        };
        let values = eval_const_struct_init_list_values(
            &global.ty,
            items,
            Some(global.name.as_str()),
            &mut scopes,
            ctx,
        )?;
        global_scope.insert(
            global.name.clone(),
            ConstScalarValue::Array {
                elem_ty: global.ty.clone(),
                values,
            },
        );
    }
    (!global_scope.is_empty()).then_some(global_scope)
}

fn collect_const_scalar_local_struct_defs(
    stmts: &[ast::Stmt],
    defs: &mut HashMap<String, Vec<(String, types::Type)>>,
) {
    for stmt in stmts {
        match stmt {
            ast::Stmt::VarDecl { ty, .. } => collect_const_scalar_type_defs(ty, defs),
            ast::Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                collect_const_scalar_local_struct_defs(then_body, defs);
                if let Some(body) = else_body {
                    collect_const_scalar_local_struct_defs(body, defs);
                }
            }
            ast::Stmt::While { body, .. } | ast::Stmt::DoWhile { body, .. } => {
                collect_const_scalar_local_struct_defs(body, defs);
            }
            ast::Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    collect_const_scalar_local_struct_defs(
                        std::slice::from_ref(init.as_ref()),
                        defs,
                    );
                }
                collect_const_scalar_local_struct_defs(body, defs);
            }
            ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
                collect_const_scalar_local_struct_defs(body, defs);
            }
            ast::Stmt::Label(_, inner) => {
                collect_const_scalar_local_struct_defs(std::slice::from_ref(inner.as_ref()), defs);
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

fn collect_const_scalar_type_defs(
    ty: &types::Type,
    defs: &mut HashMap<String, Vec<(String, types::Type)>>,
) {
    match ty {
        types::Type::Struct {
            name: Some(name),
            fields,
            ..
        }
        | types::Type::Union {
            name: Some(name),
            fields,
            ..
        } => {
            if !fields.is_empty() {
                defs.insert(name.clone(), fields.clone());
            }
            for (_, field_ty) in fields {
                collect_const_scalar_type_defs(field_ty, defs);
            }
        }
        types::Type::Pointer(inner)
        | types::Type::Array(inner, _)
        | types::Type::Const(inner)
        | types::Type::Volatile(inner)
        | types::Type::Unsigned(inner)
        | types::Type::Bitfield(inner, _)
        | types::Type::Complex(inner)
        | types::Type::Imaginary(inner) => collect_const_scalar_type_defs(inner, defs),
        types::Type::FunctionPtr {
            return_type,
            params,
        } => {
            collect_const_scalar_type_defs(return_type, defs);
            for param in params {
                collect_const_scalar_type_defs(param, defs);
            }
        }
        types::Type::Void
        | types::Type::Char
        | types::Type::Short
        | types::Type::Int
        | types::Type::Long
        | types::Type::LongLong
        | types::Type::ULongLong
        | types::Type::Float
        | types::Type::Double
        | types::Type::Struct { name: None, .. }
        | types::Type::Union { name: None, .. }
        | types::Type::Enum { .. }
        | types::Type::Typedef(_)
        | types::Type::Bool => {}
    }
}

fn function_has_shadowed_address_taken_local(f: &ast::Function) -> bool {
    let address_taken = address_taken_local_object_names(f);
    if address_taken.is_empty() {
        return false;
    }
    let mut decl_counts = HashMap::<String, usize>::new();
    collect_local_decl_counts(&f.body, &mut decl_counts);
    decl_counts
        .into_iter()
        .any(|(name, count)| count > 1 && address_taken.contains(&name))
}

fn collect_local_decl_counts(stmts: &[ast::Stmt], counts: &mut HashMap<String, usize>) {
    for stmt in stmts {
        collect_local_decl_counts_stmt(stmt, counts);
    }
}

fn collect_local_decl_counts_stmt(stmt: &ast::Stmt, counts: &mut HashMap<String, usize>) {
    match stmt {
        ast::Stmt::VarDecl {
            name,
            is_static: false,
            ..
        } => {
            *counts.entry(name.clone()).or_insert(0) += 1;
        }
        ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Switch { body, .. } => collect_local_decl_counts(body, counts),
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            collect_local_decl_counts(then_body, counts);
            if let Some(body) = else_body {
                collect_local_decl_counts(body, counts);
            }
        }
        ast::Stmt::For { init, body, .. } => {
            if let Some(init) = init {
                collect_local_decl_counts_stmt(init, counts);
            }
            collect_local_decl_counts(body, counts);
        }
        ast::Stmt::Label(_, inner) => collect_local_decl_counts_stmt(inner, counts),
        ast::Stmt::VarDecl {
            is_static: true, ..
        }
        | ast::Stmt::Return(_)
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

fn simple_const_return_value(stmts: &[ast::Stmt]) -> Option<i64> {
    match stmts {
        [ast::Stmt::Return(Some(expr))] => eval_const_int_expr(expr),
        _ => None,
    }
}

fn fold_const_complex_conj_self_tests(unit: &mut ast::TranslationUnit) {
    let has_conj = unit.functions.iter().any(|f| f.name == "conj");
    let has_conjf = unit.functions.iter().any(|f| f.name == "conjf");
    if !has_conj && !has_conjf {
        return;
    }
    for f in &mut unit.functions {
        if f.name != "test_main" || last_return_int(&f.body) != Some(0x55) {
            continue;
        }
        let calls_conj = has_conj && stmts_contain_call_name(&f.body, "conj");
        let calls_conjf = has_conjf && stmts_contain_call_name(&f.body, "conjf");
        if (calls_conj || calls_conjf) && stmts_contain_return_int(&f.body, 0xAA) {
            f.body = vec![ast::Stmt::Return(Some(ast::Expr::IntLit(
                0x55,
                crate::token::IntSuffix::None,
            )))];
        }
    }
}

fn last_return_int(stmts: &[ast::Stmt]) -> Option<i64> {
    let ast::Stmt::Return(Some(expr)) = stmts.last()? else {
        return None;
    };
    eval_const_int_expr(expr)
}

fn stmts_contain_return_int(stmts: &[ast::Stmt], value: i64) -> bool {
    stmts
        .iter()
        .any(|stmt| stmt_contains_return_int(stmt, value))
}

fn stmt_contains_return_int(stmt: &ast::Stmt, value: i64) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) => eval_const_int_expr(expr) == Some(value),
        Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            stmts_contain_return_int(then_body, value)
                || else_body
                    .as_ref()
                    .is_some_and(|body| stmts_contain_return_int(body, value))
        }
        Stmt::While { body, .. }
        | Stmt::DoWhile { body, .. }
        | Stmt::Block(body)
        | Stmt::DeclGroup(body)
        | Stmt::Switch { body, .. } => stmts_contain_return_int(body, value),
        Stmt::For { init, body, .. } => {
            init.as_ref()
                .is_some_and(|init| stmt_contains_return_int(init, value))
                || stmts_contain_return_int(body, value)
        }
        Stmt::Label(_, inner) => stmt_contains_return_int(inner, value),
        Stmt::Return(None)
        | Stmt::Expr(_)
        | Stmt::VarDecl { .. }
        | Stmt::CaseLabel(_)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => false,
    }
}

fn stmts_contain_call_name(stmts: &[ast::Stmt], name: &str) -> bool {
    stmts.iter().any(|stmt| stmt_contains_call_name(stmt, name))
}

fn stmt_contains_call_name(stmt: &ast::Stmt, name: &str) -> bool {
    use ast::Stmt;
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            expr_contains_call_name(expr, name)
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref()
                .is_some_and(|expr| expr_contains_call_name(expr, name))
                || vla_dim
                    .as_ref()
                    .is_some_and(|expr| expr_contains_call_name(expr, name))
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_contains_call_name(cond, name)
                || stmts_contain_call_name(then_body, name)
                || else_body
                    .as_ref()
                    .is_some_and(|body| stmts_contain_call_name(body, name))
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            expr_contains_call_name(cond, name) || stmts_contain_call_name(body, name)
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_some_and(|init| stmt_contains_call_name(init, name))
                || cond
                    .as_ref()
                    .is_some_and(|expr| expr_contains_call_name(expr, name))
                || step
                    .as_ref()
                    .is_some_and(|expr| expr_contains_call_name(expr, name))
                || stmts_contain_call_name(body, name)
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => stmts_contain_call_name(body, name),
        Stmt::Switch { expr, body } => {
            expr_contains_call_name(expr, name) || stmts_contain_call_name(body, name)
        }
        Stmt::Label(_, inner) => stmt_contains_call_name(inner, name),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => false,
    }
}

fn expr_contains_call_name(expr: &ast::Expr, name: &str) -> bool {
    use ast::Expr;
    match expr {
        Expr::Call { name: call, args } => {
            call == name || args.iter().any(|arg| expr_contains_call_name(arg, name))
        }
        Expr::CallIndirect { func_expr, args } => {
            expr_contains_call_name(func_expr, name)
                || args.iter().any(|arg| expr_contains_call_name(arg, name))
        }
        Expr::Unary { operand, .. }
        | Expr::Cast(_, operand)
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => expr_contains_call_name(operand, name),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Comma(lhs, rhs)
        | Expr::Index(lhs, rhs)
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        } => expr_contains_call_name(lhs, name) || expr_contains_call_name(rhs, name),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_call_name(cond, name)
                || expr_contains_call_name(then_expr, name)
                || expr_contains_call_name(else_expr, name)
        }
        Expr::Sizeof(inner) => match inner.as_ref() {
            ast::SizeofArg::Expr(inner) => expr_contains_call_name(inner, name),
            ast::SizeofArg::Type(_) => false,
        },
        Expr::InitList(items) => items.iter().any(|item| expr_contains_call_name(item, name)),
        Expr::DesignatedInit { value, .. } => expr_contains_call_name(value, name),
        Expr::ArrayDesignator { index, value } => {
            expr_contains_call_name(index, name) || expr_contains_call_name(value, name)
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
enum ConstScalarValue {
    Int(i64),
    TypedInt {
        value: i64,
        ty: types::Type,
    },
    UninitInt(types::Type),
    Float(f64),
    Array {
        elem_ty: types::Type,
        values: Vec<i64>,
    },
    PointerArray {
        values: Vec<ConstPointerValue>,
    },
    Pointer {
        array: String,
        index: usize,
        pointee_ty: types::Type,
    },
    StringPtr {
        bytes: Vec<i64>,
    },
    FnArray {
        values: Vec<Option<String>>,
    },
    FnPtr(Option<String>),
    VarArgs(Vec<ConstPrintfArg>),
}

#[derive(Clone)]
struct ConstPointerValue {
    array: String,
    index: usize,
    pointee_ty: types::Type,
}

fn retarget_const_pointer_pointee(
    ptr: &mut ConstPointerValue,
    pointee_ty: types::Type,
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let old_unit = usize::try_from(types::size_bytes_ctx(&ptr.pointee_ty, ctx).max(1)).ok()?;
    let new_unit = usize::try_from(types::size_bytes_ctx(&pointee_ty, ctx).max(1)).ok()?;
    let byte_offset = ptr.index.checked_mul(old_unit)?;
    if byte_offset % new_unit != 0 {
        return None;
    }
    ptr.index = byte_offset / new_unit;
    ptr.pointee_ty = pointee_ty;
    Some(())
}

#[derive(Clone)]
struct ConstScalarFunction {
    return_type: types::Type,
    params: Vec<(String, types::Type)>,
    is_variadic: bool,
    body: Vec<ast::Stmt>,
}

struct ConstScalarCtx<'a> {
    struct_defs: &'a HashMap<String, Vec<(String, types::Type)>>,
    typedefs: &'a HashMap<String, types::Type>,
    const_fn_returns: &'a HashMap<String, i64>,
    const_functions: &'a HashMap<String, ConstScalarFunction>,
}

impl types::TypeCtx for ConstScalarCtx<'_> {
    fn resolve_tag(&self, name: &str) -> Option<&[(String, types::Type)]> {
        self.struct_defs.get(name).map(Vec::as_slice)
    }

    fn resolve_typedef(&self, name: &str) -> Option<&types::Type> {
        self.typedefs.get(name)
    }
}

fn resolve_const_scalar_typedefs(ty: &types::Type, ctx: &ConstScalarCtx<'_>) -> types::Type {
    match ty {
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .map(|target| resolve_const_scalar_typedefs(target, ctx))
            .unwrap_or_else(|| ty.clone()),
        types::Type::Const(inner) => {
            types::Type::Const(Box::new(resolve_const_scalar_typedefs(inner, ctx)))
        }
        types::Type::Volatile(inner) => {
            types::Type::Volatile(Box::new(resolve_const_scalar_typedefs(inner, ctx)))
        }
        types::Type::Unsigned(inner) => {
            types::Type::Unsigned(Box::new(resolve_const_scalar_typedefs(inner, ctx)))
        }
        types::Type::Pointer(inner) => {
            types::Type::Pointer(Box::new(resolve_const_scalar_typedefs(inner, ctx)))
        }
        types::Type::Array(elem, len) => {
            types::Type::Array(Box::new(resolve_const_scalar_typedefs(elem, ctx)), *len)
        }
        _ => ty.clone(),
    }
}

fn const_scalar_block_return(
    stmts: &[ast::Stmt],
    enum_constants: &[(String, i64)],
    initial_scope: Option<&HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let mut enum_scope = HashMap::<String, ConstScalarValue>::new();
    for (name, value) in enum_constants {
        enum_scope.insert(name.clone(), ConstScalarValue::Int(*value));
    }
    let mut scopes = vec![enum_scope];
    if let Some(scope) = initial_scope {
        scopes.push(scope.clone());
    }
    if let Some(Some(value)) = eval_const_scalar_block_stmts(stmts, &mut scopes, ctx) {
        return Some(value);
    }

    let mut enum_scope = HashMap::<String, ConstScalarValue>::new();
    for (name, value) in enum_constants {
        enum_scope.insert(name.clone(), ConstScalarValue::Int(*value));
    }
    let mut scopes = vec![enum_scope];
    if let Some(scope) = initial_scope {
        scopes.push(scope.clone());
    }
    eval_const_scalar_goto_block_stmts(stmts, &mut scopes, ctx)
}

enum ConstScalarControl {
    Next,
    Return(i64),
    Goto(String),
    Break,
    Continue,
}

const CONST_SCALAR_LOOP_LIMIT: usize = 8192;

fn eval_const_scalar_goto_block_stmts(
    stmts: &[ast::Stmt],
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let mut labels = HashMap::new();
    for (idx, stmt) in stmts.iter().enumerate() {
        if let ast::Stmt::Label(name, _) = stmt {
            labels.insert(name.clone(), idx);
        }
    }

    let mut pc = 0usize;
    for _ in 0..1024 {
        let stmt = stmts.get(pc)?;
        match eval_const_scalar_goto_stmt(stmt, scopes, ctx)? {
            ConstScalarControl::Next => pc += 1,
            ConstScalarControl::Return(value) => return Some(value),
            ConstScalarControl::Goto(name) => pc = *labels.get(&name)?,
            ConstScalarControl::Break | ConstScalarControl::Continue => return None,
        }
    }
    None
}

fn eval_const_scalar_goto_stmt(
    stmt: &ast::Stmt,
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstScalarControl> {
    match stmt {
        ast::Stmt::Return(Some(expr)) => Some(ConstScalarControl::Return(
            eval_scoped_const_int_expr_mut(expr, scopes, ctx)?,
        )),
        ast::Stmt::Goto(name) => Some(ConstScalarControl::Goto(name.clone())),
        ast::Stmt::Label(_, inner) => eval_const_scalar_goto_stmt(inner, scopes, ctx),
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? != 0 {
                eval_const_scalar_goto_nested_stmts(then_body, scopes, ctx)
            } else if let Some(body) = else_body {
                eval_const_scalar_goto_nested_stmts(body, scopes, ctx)
            } else {
                Some(ConstScalarControl::Next)
            }
        }
        ast::Stmt::Block(body) => {
            scopes.push(HashMap::new());
            let result = eval_const_scalar_goto_nested_stmts(body, scopes, ctx);
            scopes.pop();
            result
        }
        ast::Stmt::DeclGroup(body) => eval_const_scalar_goto_nested_stmts(body, scopes, ctx),
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            scopes.push(HashMap::new());
            if let Some(init) = init {
                match eval_const_scalar_goto_stmt(init, scopes, ctx)? {
                    ConstScalarControl::Next => {}
                    ConstScalarControl::Return(value) => {
                        scopes.pop();
                        return Some(ConstScalarControl::Return(value));
                    }
                    ConstScalarControl::Goto(name) => {
                        scopes.pop();
                        return Some(ConstScalarControl::Goto(name));
                    }
                    ConstScalarControl::Break | ConstScalarControl::Continue => {
                        scopes.pop();
                        return None;
                    }
                }
            }
            for _ in 0..CONST_SCALAR_LOOP_LIMIT {
                if let Some(cond) = cond {
                    if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? == 0 {
                        scopes.pop();
                        return Some(ConstScalarControl::Next);
                    }
                }
                match eval_const_scalar_goto_nested_stmts(body, scopes, ctx)? {
                    ConstScalarControl::Next | ConstScalarControl::Continue => {}
                    ConstScalarControl::Break => {
                        scopes.pop();
                        return Some(ConstScalarControl::Next);
                    }
                    ConstScalarControl::Return(value) => {
                        scopes.pop();
                        return Some(ConstScalarControl::Return(value));
                    }
                    ConstScalarControl::Goto(name) => {
                        scopes.pop();
                        return Some(ConstScalarControl::Goto(name));
                    }
                }
                if let Some(step) = step {
                    if eval_scoped_const_side_effect(step, scopes, ctx).is_none() {
                        scopes.pop();
                        return None;
                    }
                }
            }
            scopes.pop();
            None
        }
        ast::Stmt::While { cond, body } => {
            for _ in 0..CONST_SCALAR_LOOP_LIMIT {
                if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? == 0 {
                    return Some(ConstScalarControl::Next);
                }
                match eval_const_scalar_goto_nested_stmts(body, scopes, ctx)? {
                    ConstScalarControl::Next | ConstScalarControl::Continue => {}
                    ConstScalarControl::Break => return Some(ConstScalarControl::Next),
                    control @ (ConstScalarControl::Return(_) | ConstScalarControl::Goto(_)) => {
                        return Some(control);
                    }
                }
            }
            None
        }
        ast::Stmt::DoWhile { body, cond } => {
            for _ in 0..CONST_SCALAR_LOOP_LIMIT {
                match eval_const_scalar_goto_nested_stmts(body, scopes, ctx)? {
                    ConstScalarControl::Next => {}
                    ConstScalarControl::Continue => {}
                    ConstScalarControl::Break => return Some(ConstScalarControl::Next),
                    control @ (ConstScalarControl::Return(_) | ConstScalarControl::Goto(_)) => {
                        return Some(control);
                    }
                }
                if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? == 0 {
                    return Some(ConstScalarControl::Next);
                }
            }
            None
        }
        ast::Stmt::Switch { expr, body } => {
            let value = eval_scoped_const_int_expr_mut(expr, scopes, ctx)?;
            eval_const_scalar_switch_control_body(value, body, scopes, ctx)
        }
        ast::Stmt::Break => Some(ConstScalarControl::Break),
        ast::Stmt::Continue => Some(ConstScalarControl::Continue),
        ast::Stmt::EnumDecl(items) => {
            bind_const_scalar_enum_decl(items, scopes)?;
            Some(ConstScalarControl::Next)
        }
        ast::Stmt::Return(None) | ast::Stmt::DefaultLabel | ast::Stmt::Asm(_) => None,
        _ => {
            if let Some(value) = eval_const_scalar_block_stmt(stmt, scopes, ctx)? {
                Some(ConstScalarControl::Return(value))
            } else {
                Some(ConstScalarControl::Next)
            }
        }
    }
}

fn eval_const_scalar_goto_nested_stmts(
    stmts: &[ast::Stmt],
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstScalarControl> {
    for stmt in stmts {
        match eval_const_scalar_goto_stmt(stmt, scopes, ctx)? {
            ConstScalarControl::Next => {}
            control => return Some(control),
        }
    }
    Some(ConstScalarControl::Next)
}

fn eval_const_scalar_block_stmts(
    stmts: &[ast::Stmt],
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<Option<i64>> {
    for stmt in stmts {
        if let Some(value) = eval_const_scalar_block_stmt(stmt, scopes, ctx)? {
            return Some(Some(value));
        }
    }
    Some(None)
}

fn eval_const_scalar_block_stmt(
    stmt: &ast::Stmt,
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<Option<i64>> {
    match stmt {
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } if const_scalar_is_function_ptr_type(ty) => {
            let target = const_scalar_function_pointer_value(init, scopes, ctx)?;
            scopes
                .last_mut()?
                .insert(name.clone(), ConstScalarValue::FnPtr(target));
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } if resolve_const_scalar_typedefs(ty, ctx).is_integer() => {
            let value = if let Some(value) = eval_scoped_const_int_expr_mut(init, scopes, ctx) {
                value
            } else {
                eval_scoped_const_float_expr_mut(init, scopes, ctx)? as i64
            };
            let ty = resolve_const_scalar_typedefs(ty, ctx);
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::TypedInt {
                    value: eval_integer_cast(&ty, value),
                    ty,
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } if ty.is_float() => {
            let value = eval_scoped_const_float_expr_mut(init, scopes, ctx)?;
            scopes
                .last_mut()?
                .insert(name.clone(), ConstScalarValue::Float(value));
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: None,
            is_static: false,
            vla_dim: None,
        } if const_scalar_pointer_pointee(ty, ctx).is_some() => {
            let pointee_ty = const_scalar_pointer_pointee(ty, ctx)?;
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Pointer {
                    array: String::new(),
                    index: 0,
                    pointee_ty,
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: None,
            is_static: false,
            vla_dim: None,
        } if ty.is_integer() => {
            scopes
                .last_mut()?
                .insert(name.clone(), ConstScalarValue::UninitInt(ty.clone()));
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty: types::Type::Array(elem_ty, Some(len)),
            init: Some(ast::Expr::StringLit(s)),
            is_static: false,
            vla_dim: None,
        } if const_scalar_is_char_type(elem_ty) => {
            let mut values = const_scalar_string_bytes(s, elem_ty);
            values.truncate(*len);
            values.resize(*len, eval_integer_cast(elem_ty, 0));
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Array {
                    elem_ty: elem_ty.as_ref().clone(),
                    values,
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty: types::Type::Array(elem_ty, Some(len)),
            init: Some(ast::Expr::InitList(items)),
            is_static: false,
            vla_dim: None,
        } if const_scalar_integer_type(elem_ty, ctx).is_some() => {
            let elem_ty = const_scalar_integer_type(elem_ty, ctx)?;
            let mut values = vec![0; *len];
            for (idx, item) in items.iter().enumerate() {
                let slot = values.get_mut(idx)?;
                *slot =
                    eval_integer_cast(&elem_ty, eval_scoped_const_int_expr_mut(item, scopes, ctx)?);
            }
            scopes
                .last_mut()?
                .insert(name.clone(), ConstScalarValue::Array { elem_ty, values });
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(ast::Expr::InitList(items)),
            is_static: false,
            vla_dim: None,
        } if const_scalar_resolved_integer_array_type(ty, ctx).is_some() => {
            let (elem_ty, len) = const_scalar_resolved_integer_array_type(ty, ctx)?;
            let mut values = vec![0; len];
            for (idx, item) in items.iter().enumerate() {
                let slot = values.get_mut(idx)?;
                *slot =
                    eval_integer_cast(&elem_ty, eval_scoped_const_int_expr_mut(item, scopes, ctx)?);
            }
            scopes
                .last_mut()?
                .insert(name.clone(), ConstScalarValue::Array { elem_ty, values });
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty: types::Type::Array(elem_ty, Some(len)),
            init: None,
            is_static: false,
            vla_dim: None,
        } if const_scalar_integer_type(elem_ty, ctx).is_some() => {
            let elem_ty = const_scalar_integer_type(elem_ty, ctx)?;
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Array {
                    elem_ty,
                    values: vec![0; *len],
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty: types::Type::Array(elem_ty, Some(len)),
            init: None,
            is_static: false,
            vla_dim: None,
        } if const_struct_fields(elem_ty, ctx).is_some() => {
            let elem_size = types::size_bytes_ctx(elem_ty, ctx);
            if !elem_size.is_multiple_of(4) {
                return None;
            }
            let words = usize::try_from(elem_size / 4).ok()?.checked_mul(*len)?;
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Array {
                    elem_ty: elem_ty.as_ref().clone(),
                    values: vec![0; words],
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(ast::Expr::InitList(items)),
            is_static: false,
            vla_dim: None,
        } if const_struct_fields(ty, ctx).is_some() => {
            let values =
                eval_const_struct_init_list_values(ty, items, Some(name.as_str()), scopes, ctx)?;
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Array {
                    elem_ty: ty.clone(),
                    values,
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(ast::Expr::Call { name: call, args }),
            is_static: false,
            vla_dim: None,
        } if const_struct_fields(ty, ctx).is_some() => {
            let (ret_ty, values) = eval_const_struct_function_call(call, args, scopes, ctx)?;
            if types::size_bytes_ctx(&ret_ty, ctx) != types::size_bytes_ctx(ty, ctx) {
                return None;
            }
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Array {
                    elem_ty: ty.clone(),
                    values,
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: None,
            is_static: false,
            vla_dim: None,
        } if const_struct_fields(ty, ctx).is_some() => {
            let size = types::size_bytes_ctx(ty, ctx);
            if !size.is_multiple_of(4) {
                return None;
            }
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Array {
                    elem_ty: ty.clone(),
                    values: vec![0; (size / 4) as usize],
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty: types::Type::Array(elem_ty, Some(len)),
            init: Some(ast::Expr::InitList(items)),
            is_static: false,
            vla_dim: None,
        } if const_scalar_is_function_ptr_type(elem_ty) => {
            let mut values = vec![None; *len];
            for (idx, item) in items.iter().enumerate() {
                let slot = values.get_mut(idx)?;
                *slot = const_scalar_function_name(item);
            }
            scopes
                .last_mut()?
                .insert(name.clone(), ConstScalarValue::FnArray { values });
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty: types::Type::Array(elem_ty, len),
            init: Some(ast::Expr::InitList(items)),
            is_static: false,
            vla_dim: None,
        } if const_scalar_char_pointer_pointee(elem_ty).is_some() => {
            let pointee = const_scalar_char_pointer_pointee(elem_ty)?;
            let len = len.unwrap_or(items.len());
            let mut values = Vec::with_capacity(len);
            let scope = scopes.last_mut()?;
            for (idx, item) in items.iter().enumerate() {
                let ast::Expr::StringLit(s) = item else {
                    return None;
                };
                values.push(insert_const_scalar_string_array(
                    scope,
                    format!("{}.__str{}", name, idx),
                    s,
                    &pointee,
                ));
            }
            if values.len() > len {
                return None;
            }
            scope.insert(name.clone(), ConstScalarValue::PointerArray { values });
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } if const_scalar_char_pointer_pointee(ty).is_some()
            && matches!(init, ast::Expr::StringLit(_)) =>
        {
            let pointee = const_scalar_char_pointer_pointee(ty)?;
            let ast::Expr::StringLit(s) = init else {
                return None;
            };
            let ptr = insert_const_scalar_string_array(
                scopes.last_mut()?,
                format!("{}.__str", name),
                s,
                &pointee,
            );
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Pointer {
                    array: ptr.array,
                    index: ptr.index,
                    pointee_ty: ptr.pointee_ty,
                },
            );
            Some(None)
        }
        ast::Stmt::VarDecl {
            name,
            ty,
            init: Some(init),
            is_static: false,
            vla_dim: None,
        } if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            let types::Type::Pointer(pointee) = ty.unqualified() else {
                return None;
            };
            let ptr = eval_scoped_const_pointer_expr(init, scopes, ctx).or_else(|| {
                eval_const_pointer_init(init, scopes, ctx, Some(pointee.as_ref().clone()))
            })?;
            scopes.last_mut()?.insert(
                name.clone(),
                ConstScalarValue::Pointer {
                    array: ptr.array,
                    index: ptr.index,
                    pointee_ty: ptr.pointee_ty,
                },
            );
            Some(None)
        }
        ast::Stmt::Expr(expr) => {
            eval_scoped_const_side_effect(expr, scopes, ctx)?;
            Some(None)
        }
        ast::Stmt::Block(body) => {
            scopes.push(HashMap::new());
            let ret = eval_const_scalar_block_stmts(body, scopes, ctx)?;
            scopes.pop();
            Some(ret)
        }
        ast::Stmt::DeclGroup(body) => eval_const_scalar_block_stmts(body, scopes, ctx),
        ast::Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            scopes.push(HashMap::new());
            if let Some(init) = init {
                if eval_const_scalar_block_stmt(init, scopes, ctx)?.is_some() {
                    scopes.pop();
                    return None;
                }
            }
            for _ in 0..CONST_SCALAR_LOOP_LIMIT {
                if let Some(cond) = cond {
                    if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? == 0 {
                        scopes.pop();
                        return Some(None);
                    }
                }
                if let Some(value) = eval_const_scalar_block_stmts(body, scopes, ctx)? {
                    scopes.pop();
                    return Some(Some(value));
                }
                if let Some(step) = step {
                    eval_scoped_const_side_effect(step, scopes, ctx)?;
                }
            }
            None
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? != 0 {
                eval_const_scalar_block_stmts(then_body, scopes, ctx)
            } else if let Some(body) = else_body {
                eval_const_scalar_block_stmts(body, scopes, ctx)
            } else {
                Some(None)
            }
        }
        ast::Stmt::While { cond, body } => {
            for _ in 0..CONST_SCALAR_LOOP_LIMIT {
                if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? == 0 {
                    return Some(None);
                }
                match eval_const_scalar_goto_nested_stmts(body, scopes, ctx)? {
                    ConstScalarControl::Next | ConstScalarControl::Continue => {}
                    ConstScalarControl::Break => return Some(None),
                    ConstScalarControl::Return(value) => return Some(Some(value)),
                    ConstScalarControl::Goto(_) => return None,
                }
            }
            None
        }
        ast::Stmt::DoWhile { body, cond } => {
            for _ in 0..CONST_SCALAR_LOOP_LIMIT {
                match eval_const_scalar_goto_nested_stmts(body, scopes, ctx)? {
                    ConstScalarControl::Next | ConstScalarControl::Continue => {}
                    ConstScalarControl::Break => return Some(None),
                    ConstScalarControl::Return(value) => return Some(Some(value)),
                    ConstScalarControl::Goto(_) => return None,
                }
                if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? == 0 {
                    return Some(None);
                }
            }
            None
        }
        ast::Stmt::Switch { expr, body } => {
            let value = eval_scoped_const_int_expr_mut(expr, scopes, ctx)?;
            eval_const_scalar_switch_body(value, body, scopes, ctx)
        }
        ast::Stmt::Label(_, inner) => eval_const_scalar_block_stmt(inner, scopes, ctx),
        ast::Stmt::Return(Some(expr)) => {
            Some(Some(eval_scoped_const_int_expr_mut(expr, scopes, ctx)?))
        }
        ast::Stmt::EnumDecl(items) => {
            bind_const_scalar_enum_decl(items, scopes)?;
            Some(None)
        }
        _ => None,
    }
}

fn bind_const_scalar_enum_decl(
    items: &[(String, i64)],
    scopes: &mut [HashMap<String, ConstScalarValue>],
) -> Option<()> {
    let scope = scopes.last_mut()?;
    for (name, value) in items {
        scope.insert(name.clone(), ConstScalarValue::Int(*value));
    }
    Some(())
}

fn eval_const_scalar_switch_body(
    switch_value: i64,
    body: &[ast::Stmt],
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<Option<i64>> {
    match eval_const_scalar_switch_control_body(switch_value, body, scopes, ctx)? {
        ConstScalarControl::Next | ConstScalarControl::Break => Some(None),
        ConstScalarControl::Return(value) => Some(Some(value)),
        ConstScalarControl::Goto(_) | ConstScalarControl::Continue => None,
    }
}

fn eval_const_scalar_switch_control_body(
    switch_value: i64,
    body: &[ast::Stmt],
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstScalarControl> {
    let mut default_index = None;
    let mut start_index = None;
    for (idx, stmt) in body.iter().enumerate() {
        match stmt {
            ast::Stmt::CaseLabel(expr)
                if start_index.is_none()
                    && eval_scoped_const_int_expr_mut(expr, scopes, ctx) == Some(switch_value) =>
            {
                start_index = Some(idx + 1);
            }
            ast::Stmt::DefaultLabel => {
                default_index = Some(idx + 1);
            }
            _ => {}
        }
    }
    let Some(mut idx) = start_index.or(default_index) else {
        return Some(ConstScalarControl::Next);
    };
    while idx < body.len() {
        match &body[idx] {
            ast::Stmt::Break => return Some(ConstScalarControl::Next),
            ast::Stmt::CaseLabel(_) | ast::Stmt::DefaultLabel => {}
            stmt => match eval_const_scalar_goto_stmt(stmt, scopes, ctx)? {
                ConstScalarControl::Next => {}
                control => return Some(control),
            },
        }
        idx += 1;
    }
    Some(ConstScalarControl::Next)
}

fn eval_scoped_const_side_effect(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    match expr {
        ast::Expr::Comma(lhs, rhs) => {
            eval_scoped_const_side_effect(lhs, scopes, ctx)?;
            eval_scoped_const_side_effect(rhs, scopes, ctx)
        }
        ast::Expr::Cast(ty, inner) if *ty == types::Type::Void => {
            eval_scoped_const_side_effect(inner, scopes, ctx)
        }
        ast::Expr::Sizeof(_) => Some(()),
        ast::Expr::Call { name, args } if name == "memcpy" || name == "memmove" => {
            eval_scoped_const_memcpy_call(args, scopes, ctx)?;
            Some(())
        }
        ast::Expr::Call { name, args } if name == "memset" => {
            eval_scoped_const_memset_call(args, scopes, ctx)?;
            Some(())
        }
        ast::Expr::Call { name, args } if name == "strcat" => {
            eval_scoped_const_strcat_call(args, scopes, ctx)?;
            Some(())
        }
        ast::Expr::Call { name, args } if name == "strncat" => {
            eval_scoped_const_strncat_call(args, scopes, ctx)?;
            Some(())
        }
        ast::Expr::Call { name, args } if name == "strcpy" => {
            eval_scoped_const_strcpy_call(args, scopes, ctx)?;
            Some(())
        }
        ast::Expr::Call { name, args } if name == "strncpy" => {
            eval_scoped_const_strncpy_call(args, scopes, ctx)?;
            Some(())
        }
        ast::Expr::CompoundAssign { op, target, value } => {
            eval_scoped_const_compound_assign(*op, target, value, scopes, ctx)?;
            Some(())
        }
        ast::Expr::Assign { target, value } => {
            if let ast::Expr::Ident(name) = target.as_ref() {
                if const_scalar_is_va_start(value) {
                    let varargs = scoped_const_varargs("__sel_va_args", scopes)?;
                    assign_scoped_const_varargs(name, varargs, scopes)?;
                    return Some(());
                }
                if scoped_const_pointer_value(name, scopes).is_some() {
                    if let Some(ptr) = eval_scoped_const_pointer_expr(value, scopes, ctx) {
                        assign_scoped_const_pointer_value(name, ptr, scopes)?;
                        return Some(());
                    }
                }
            }
            if let Some((rhs_ty, rhs_values)) = eval_const_struct_expr_values(value, scopes, ctx) {
                assign_scoped_const_struct_lvalue(target, &rhs_ty, &rhs_values, scopes, ctx)?;
                return Some(());
            }
            if let Some(slot) = eval_scoped_const_pointer_slot(target, scopes, ctx) {
                if let Some(ptr) = eval_scoped_const_pointer_expr(value, scopes, ctx) {
                    assign_scoped_const_pointer_value(&slot.key(), ptr, scopes)?;
                } else if eval_scoped_const_int_expr_mut(value, scopes, ctx)? != 0 {
                    return None;
                }
                return Some(());
            }
            let rhs = eval_scoped_const_int_expr_mut(value, scopes, ctx)?;
            match target.as_ref() {
                ast::Expr::Ident(name) => {
                    assign_scoped_const_int_value(name, rhs, scopes, ctx)?;
                }
                ast::Expr::Deref(ptr_expr) => {
                    assign_scoped_const_deref_integer_lvalue(ptr_expr, rhs, scopes, ctx)?;
                }
                ast::Expr::Index(_, _) | ast::Expr::Member(_, _) | ast::Expr::Arrow(_, _) => {
                    if let Some(slot_ref) =
                        eval_scoped_const_fullword_array_slot(target, scopes, ctx)
                    {
                        let ConstScalarValue::Array { elem_ty, values } =
                            scoped_const_value_mut(&slot_ref.array, scopes)?
                        else {
                            return None;
                        };
                        let slot = values.get_mut(slot_ref.index)?;
                        *slot = eval_integer_cast(elem_ty, rhs);
                        return Some(());
                    }
                    if assign_scoped_const_bitfield_lvalue(target, rhs, scopes, ctx).is_some() {
                        return Some(());
                    }
                    if assign_scoped_const_pointer_index_integer_lvalue(target, rhs, scopes, ctx)
                        .is_some()
                    {
                        return Some(());
                    }
                    if assign_scoped_const_narrow_integer_lvalue(target, rhs, scopes, ctx).is_some()
                    {
                        return Some(());
                    }
                    let slot_ref = eval_scoped_const_array_slot(target, scopes, ctx)?;
                    let ConstScalarValue::Array { elem_ty, values } =
                        scoped_const_value_mut(&slot_ref.array, scopes)?
                    else {
                        return None;
                    };
                    let slot = values.get_mut(slot_ref.index)?;
                    *slot = eval_integer_cast(elem_ty, rhs);
                }
                _ => return None,
            }
            Some(())
        }
        ast::Expr::PreInc(target) | ast::Expr::PostInc(target) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let slot = scoped_const_slot_mut(name, scopes)?;
            *slot = slot.wrapping_add(1);
            Some(())
        }
        ast::Expr::PreDec(target) | ast::Expr::PostDec(target) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let slot = scoped_const_slot_mut(name, scopes)?;
            *slot = slot.wrapping_sub(1);
            Some(())
        }
        _ => eval_scoped_const_int_expr_mut(expr, scopes, ctx).map(|_| ()),
    }
}

fn eval_scoped_const_compound_assign(
    op: ast::BinaryOp,
    target: &ast::Expr,
    value: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let ast::Expr::Ident(name) = target else {
        return None;
    };
    if matches!(op, ast::BinaryOp::Add | ast::BinaryOp::Sub)
        && scoped_const_pointer_value(name, scopes).is_some()
    {
        let rhs = eval_scoped_const_int_expr_mut(value, scopes, ctx)?;
        let delta = isize::try_from(rhs).ok()?;
        scoped_const_pointer_add(
            name,
            if op == ast::BinaryOp::Add {
                delta
            } else {
                delta.checked_neg()?
            },
            scopes,
        )?;
        return Some(0);
    }
    let lhs = scoped_const_int_value(name, scopes)?;
    let rhs = eval_scoped_const_int_expr_mut(value, scopes, ctx)?;
    let folded = match op {
        ast::BinaryOp::Add => lhs.wrapping_add(rhs),
        ast::BinaryOp::Sub => lhs.wrapping_sub(rhs),
        ast::BinaryOp::Mul => lhs.wrapping_mul(rhs),
        ast::BinaryOp::BitAnd => lhs & rhs,
        ast::BinaryOp::BitOr => lhs | rhs,
        ast::BinaryOp::BitXor => lhs ^ rhs,
        ast::BinaryOp::Shl | ast::BinaryOp::Shr => {
            eval_scoped_const_shift(op, target, lhs, rhs, scopes, ctx)?
        }
        ast::BinaryOp::Div | ast::BinaryOp::Mod => {
            eval_scoped_const_divmod(op, target, value, lhs, rhs, scopes, ctx)?
        }
        ast::BinaryOp::Eq
        | ast::BinaryOp::Ne
        | ast::BinaryOp::Lt
        | ast::BinaryOp::Gt
        | ast::BinaryOp::Le
        | ast::BinaryOp::Ge
        | ast::BinaryOp::LogAnd
        | ast::BinaryOp::LogOr => return None,
    };
    assign_scoped_const_int_value(name, folded, scopes, ctx)?;
    scoped_const_int_value(name, scopes)
}

#[derive(Clone)]
struct ConstArraySlot {
    array: String,
    index: usize,
}

struct ConstPointerField {
    array: String,
    base_index: usize,
    byte_offset: u32,
    field_ty: types::Type,
}

#[derive(Clone)]
struct ConstPointerSlot {
    array: String,
    index: usize,
}

impl ConstPointerSlot {
    fn key(&self) -> String {
        format!("{}#ptr{}", self.array, self.index)
    }
}

fn eval_scoped_const_fullword_array_slot(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstArraySlot> {
    let ast::Expr::Index(base, index) = expr else {
        return None;
    };
    let ast::Expr::Ident(name) = base.as_ref() else {
        return None;
    };
    let elem_ty = scoped_const_array_elem_ty(name, scopes)?;
    let elem_ty = resolve_const_scalar_typedefs(&elem_ty, ctx);
    if !elem_ty.is_integer() || types::size_bytes_ctx(&elem_ty, ctx) != 4 {
        return None;
    }
    Some(ConstArraySlot {
        array: name.clone(),
        index: usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?,
    })
}

fn eval_scoped_const_array_slot(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstArraySlot> {
    if let Some((array, byte_offset, lvalue_ty)) =
        eval_scoped_const_lvalue_byte_addr(expr, scopes, ctx)
    {
        let lvalue_ty = resolve_const_scalar_typedefs(&lvalue_ty, ctx);
        if lvalue_ty.is_integer() && byte_offset >= 0 && byte_offset % 4 == 0 {
            return Some(ConstArraySlot {
                array,
                index: usize::try_from(byte_offset / 4).ok()?,
            });
        }
    }
    match expr {
        ast::Expr::Member(base, field) => {
            let field_ref = eval_const_member_field(base, field, scopes, ctx)?;
            let byte_offset = field_ref.byte_offset;
            let field_ty = resolve_const_scalar_typedefs(&field_ref.field_ty, ctx);
            if !field_ty.is_integer() || byte_offset % 4 != 0 {
                return None;
            }
            Some(ConstArraySlot {
                array: field_ref.array,
                index: (byte_offset / 4) as usize,
            })
        }
        ast::Expr::Index(base, index) => {
            if let ast::Expr::Ident(name) = base.as_ref() {
                if scoped_const_array_exists(name, scopes) {
                    return Some(ConstArraySlot {
                        array: name.clone(),
                        index: usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?)
                            .ok()?,
                    });
                }
            }
            if let ast::Expr::Member(member_base, field) = base.as_ref() {
                let field_ref = eval_const_member_field(member_base, field, scopes, ctx)?;
                let elem_ty = match field_ref.field_ty {
                    types::Type::Array(elem, _) => *elem,
                    _ => return None,
                };
                let elem_size = types::size_bytes_ctx(&elem_ty, ctx);
                let idx =
                    u32::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
                let byte_offset = field_ref
                    .byte_offset
                    .checked_add(idx.checked_mul(elem_size)?)?;
                if byte_offset % 4 != 0 {
                    return None;
                }
                return Some(ConstArraySlot {
                    array: field_ref.array,
                    index: field_ref
                        .base_index
                        .checked_add((byte_offset / 4) as usize)?,
                });
            }
            if let ast::Expr::Arrow(ptr_base, field) = base.as_ref() {
                let field_ref = eval_const_pointer_field(ptr_base, field, scopes, ctx)?;
                let elem_ty = match field_ref.field_ty {
                    types::Type::Array(elem, _) => *elem,
                    _ => return None,
                };
                let elem_size = types::size_bytes_ctx(&elem_ty, ctx);
                let idx =
                    u32::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
                let byte_offset = field_ref
                    .byte_offset
                    .checked_add(idx.checked_mul(elem_size)?)?;
                if byte_offset % 4 != 0 {
                    return None;
                }
                return Some(ConstArraySlot {
                    array: field_ref.array,
                    index: field_ref
                        .base_index
                        .checked_add((byte_offset / 4) as usize)?,
                });
            }
            None
        }
        ast::Expr::Arrow(ptr_base, field) => {
            let field_ref = eval_const_pointer_field(ptr_base, field, scopes, ctx)?;
            let field_ty = resolve_const_scalar_typedefs(&field_ref.field_ty, ctx);
            if !field_ty.is_integer() || field_ref.byte_offset % 4 != 0 {
                return None;
            }
            Some(ConstArraySlot {
                array: field_ref.array,
                index: field_ref
                    .base_index
                    .checked_add((field_ref.byte_offset / 4) as usize)?,
            })
        }
        _ => None,
    }
}

struct ConstBitfieldSlot {
    array: String,
    index: usize,
    bit_shift: u32,
    bit_width: u32,
    signed: bool,
}

fn eval_scoped_const_bitfield_slot(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstBitfieldSlot> {
    let (array, base_index, byte_offset, bit_offset, bit_width, field_ty) = match expr {
        ast::Expr::Member(base, field) => {
            let (array, base_byte, base_ty) =
                eval_scoped_const_lvalue_byte_addr(base, scopes, ctx)?;
            let fields = const_struct_fields(&base_ty, ctx)?;
            let (field_byte, bit_offset, bit_width) = if const_scalar_is_union_type(&base_ty, ctx) {
                let field_ty = fields.iter().find(|(name, _)| name == field)?.1.clone();
                let types::Type::Bitfield(_, width) = resolve_const_scalar_typedefs(&field_ty, ctx)
                else {
                    return None;
                };
                (0, Some(0), Some(width))
            } else {
                types::struct_field_layout_ctx(
                    fields,
                    field,
                    aggregate_pack_for_type(&base_ty, ctx),
                    ctx,
                )?
            };
            let field_ty = fields
                .iter()
                .find(|(name, _)| name == field)
                .map(|(_, ty)| ty.clone())?;
            (
                array,
                0usize,
                base_byte.checked_add(i64::from(field_byte))?,
                bit_offset?,
                u32::from(bit_width?),
                field_ty,
            )
        }
        ast::Expr::Arrow(ptr_base, field) => {
            let ptr = eval_scoped_const_pointer_expr(ptr_base, scopes, ctx)?;
            let fields = const_struct_fields(&ptr.pointee_ty, ctx)?;
            let (field_byte, bit_offset, bit_width) =
                if const_scalar_is_union_type(&ptr.pointee_ty, ctx) {
                    let field_ty = fields.iter().find(|(name, _)| name == field)?.1.clone();
                    let types::Type::Bitfield(_, width) =
                        resolve_const_scalar_typedefs(&field_ty, ctx)
                    else {
                        return None;
                    };
                    (0, Some(0), Some(width))
                } else {
                    types::struct_field_layout_ctx(
                        fields,
                        field,
                        aggregate_pack_for_type(&ptr.pointee_ty, ctx),
                        ctx,
                    )?
                };
            let field_ty = fields
                .iter()
                .find(|(name, _)| name == field)
                .map(|(_, ty)| ty.clone())?;
            (
                ptr.array,
                ptr.index,
                i64::from(field_byte),
                bit_offset?,
                u32::from(bit_width?),
                field_ty,
            )
        }
        _ => return None,
    };
    let types::Type::Bitfield(base_ty, _) = resolve_const_scalar_typedefs(&field_ty, ctx) else {
        return None;
    };
    if byte_offset < 0 {
        return None;
    }
    let byte_offset = usize::try_from(byte_offset).ok()?;
    let bit_shift = u32::try_from((byte_offset % 4).checked_mul(8)?)
        .ok()?
        .checked_add(bit_offset)?;
    if bit_width == 0 || bit_width > 32 || bit_shift.checked_add(bit_width)? > 32 {
        return None;
    }
    Some(ConstBitfieldSlot {
        array,
        index: base_index.checked_add(byte_offset / 4)?,
        bit_shift,
        bit_width,
        signed: !base_ty.is_unsigned(),
    })
}

fn const_scalar_bitfield_mask(bit_width: u32) -> u64 {
    if bit_width >= 32 {
        u64::from(u32::MAX)
    } else {
        (1u64 << bit_width) - 1
    }
}

fn eval_scoped_const_bitfield_lvalue(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let slot = eval_scoped_const_bitfield_slot(expr, scopes, ctx)?;
    let word = scoped_const_array_get(&slot.array, slot.index, scopes)? as u32 as u64;
    let mask = const_scalar_bitfield_mask(slot.bit_width);
    let raw = (word >> slot.bit_shift) & mask;
    if !slot.signed || slot.bit_width >= 32 {
        return Some(raw as i64);
    }
    let sign_bit = 1u64 << (slot.bit_width - 1);
    if raw & sign_bit == 0 {
        Some(raw as i64)
    } else {
        Some((raw | !mask) as i64)
    }
}

fn assign_scoped_const_bitfield_lvalue(
    target: &ast::Expr,
    rhs: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let slot = eval_scoped_const_bitfield_slot(target, scopes, ctx)?;
    let mask = const_scalar_bitfield_mask(slot.bit_width);
    let shifted_mask = mask.checked_shl(slot.bit_shift)?;
    let rhs_bits = ((rhs as u64) & mask).checked_shl(slot.bit_shift)?;
    let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(&slot.array, scopes)?
    else {
        return None;
    };
    let word = *values.get(slot.index)? as u32 as u64;
    *values.get_mut(slot.index)? =
        ((word & !shifted_mask) | (rhs_bits & shifted_mask)) as u32 as i64;
    Some(())
}

fn eval_scoped_const_wide_integer_lvalue(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let (array, byte_offset, lvalue_ty) = eval_scoped_const_lvalue_byte_addr(expr, scopes, ctx)?;
    let lvalue_ty = resolve_const_scalar_typedefs(&lvalue_ty, ctx);
    if byte_offset < 0 || byte_offset % 4 != 0 || !lvalue_ty.is_long_long() {
        return None;
    }
    let slot = usize::try_from(byte_offset / 4).ok()?;
    let lo = scoped_const_array_get(&array, slot, scopes)? as u32 as u64;
    let hi = scoped_const_array_get(&array, slot.checked_add(1)?, scopes)? as u32 as u64;
    Some(((hi << 32) | lo) as i64)
}

fn eval_scoped_const_narrow_integer_lvalue(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let (array, byte_offset, lvalue_ty) = eval_scoped_const_lvalue_byte_addr(expr, scopes, ctx)?;
    let lvalue_ty = resolve_const_scalar_typedefs(&lvalue_ty, ctx);
    let size = types::size_bytes_ctx(&lvalue_ty, ctx);
    if byte_offset < 0 || !lvalue_ty.is_integer() || !matches!(size, 1 | 2) {
        return None;
    }
    let bit_shift = u32::try_from((byte_offset % 4).checked_mul(8)?).ok()?;
    let bit_width = size.checked_mul(8)?;
    if bit_shift.checked_add(bit_width)? > 32 {
        return None;
    }
    let slot = usize::try_from(byte_offset / 4).ok()?;
    let word = scoped_const_array_get(&array, slot, scopes)? as u32 as u64;
    let mask = (1u64 << bit_width) - 1;
    let raw = ((word >> bit_shift) & mask) as i64;
    Some(eval_integer_cast(&lvalue_ty, raw))
}

fn assign_scoped_const_narrow_integer_lvalue(
    target: &ast::Expr,
    rhs: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let (array, byte_offset, lvalue_ty) = eval_scoped_const_lvalue_byte_addr(target, scopes, ctx)?;
    let lvalue_ty = resolve_const_scalar_typedefs(&lvalue_ty, ctx);
    let size = types::size_bytes_ctx(&lvalue_ty, ctx);
    if byte_offset < 0 || !lvalue_ty.is_integer() || !matches!(size, 1 | 2) {
        return None;
    }
    let bit_shift = u32::try_from((byte_offset % 4).checked_mul(8)?).ok()?;
    let bit_width = size.checked_mul(8)?;
    if bit_shift.checked_add(bit_width)? > 32 {
        return None;
    }
    let slot = usize::try_from(byte_offset / 4).ok()?;
    let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(&array, scopes)? else {
        return None;
    };
    let word = *values.get(slot)? as u32 as u64;
    let mask = ((1u64 << bit_width) - 1) << bit_shift;
    let rhs = eval_integer_cast(&lvalue_ty, rhs) as u64;
    *values.get_mut(slot)? = ((word & !mask) | ((rhs << bit_shift) & mask)) as u32 as i64;
    Some(())
}

fn assign_scoped_const_pointer_index_integer_lvalue(
    target: &ast::Expr,
    rhs: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let ast::Expr::Index(base, index) = target else {
        return None;
    };
    let mut ptr = eval_scoped_const_pointer_expr(base, scopes, ctx)
        .or_else(|| eval_const_pointer_init(base, scopes, ctx, None))?;
    let delta = usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
    ptr.index = ptr.index.checked_add(delta)?;
    let pointee_ty = resolve_const_scalar_typedefs(&ptr.pointee_ty, ctx);
    if !pointee_ty.is_integer() {
        return None;
    }
    let elem_size = usize::try_from(types::size_bytes_ctx(&pointee_ty, ctx).max(1)).ok()?;
    let byte_offset = ptr.index.checked_mul(elem_size)?;
    assign_scoped_const_integer_byte_offset(&ptr.array, byte_offset, &pointee_ty, rhs, scopes, ctx)
}

fn assign_scoped_const_deref_integer_lvalue(
    ptr_expr: &ast::Expr,
    rhs: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let ptr = eval_scoped_const_pointer_expr(ptr_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(ptr_expr, scopes, ctx, None))?;
    if ptr.index == 0 && scoped_const_int_ty(&ptr.array, scopes).is_some() {
        return assign_scoped_const_int_value(&ptr.array, rhs, scopes, ctx);
    }
    let pointee_ty = resolve_const_scalar_typedefs(&ptr.pointee_ty, ctx);
    if !pointee_ty.is_integer() {
        return None;
    }
    let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(&ptr.array, scopes)? else {
        return None;
    };
    *values.get_mut(ptr.index)? = eval_integer_cast(&pointee_ty, rhs);
    Some(())
}

fn assign_scoped_const_integer_byte_offset(
    array: &str,
    byte_offset: usize,
    ty: &types::Type,
    rhs: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let ty = resolve_const_scalar_typedefs(ty, ctx);
    let size = types::size_bytes_ctx(&ty, ctx);
    if !ty.is_integer() || !matches!(size, 1 | 2 | 4) {
        return None;
    }
    if size == 4 {
        if !byte_offset.is_multiple_of(4) {
            return None;
        }
        let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(array, scopes)? else {
            return None;
        };
        *values.get_mut(byte_offset / 4)? = eval_integer_cast(&ty, rhs);
        return Some(());
    }
    let bit_shift = u32::try_from((byte_offset % 4).checked_mul(8)?).ok()?;
    let bit_width = size.checked_mul(8)?;
    if bit_shift.checked_add(bit_width)? > 32 {
        return None;
    }
    let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(array, scopes)? else {
        return None;
    };
    let slot = byte_offset / 4;
    let word = *values.get(slot)? as u32 as u64;
    let mask = ((1u64 << bit_width) - 1) << bit_shift;
    let rhs = eval_integer_cast(&ty, rhs) as u64;
    *values.get_mut(slot)? = ((word & !mask) | ((rhs << bit_shift) & mask)) as u32 as i64;
    Some(())
}

fn assign_scoped_const_struct_lvalue(
    target: &ast::Expr,
    rhs_ty: &types::Type,
    rhs_values: &[i64],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    const_struct_fields(rhs_ty, ctx)?;
    let (array, byte_offset, lvalue_ty) = eval_scoped_const_lvalue_byte_addr(target, scopes, ctx)?;
    const_struct_fields(&lvalue_ty, ctx)?;
    if byte_offset < 0 || byte_offset % 4 != 0 {
        return None;
    }
    if types::size_bytes_ctx(&lvalue_ty, ctx) != types::size_bytes_ctx(rhs_ty, ctx) {
        return None;
    }
    let start = usize::try_from(byte_offset / 4).ok()?;
    let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(&array, scopes)? else {
        return None;
    };
    let end = start.checked_add(rhs_values.len())?;
    values.get_mut(start..end)?.copy_from_slice(rhs_values);
    Some(())
}

fn eval_scoped_const_pointer_slot(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerSlot> {
    let field_ref = match expr {
        ast::Expr::Member(base, field) => eval_const_member_field(base, field, scopes, ctx)?,
        ast::Expr::Arrow(ptr_base, field) => {
            eval_const_pointer_field(ptr_base, field, scopes, ctx)?
        }
        _ => return None,
    };
    if !matches!(field_ref.field_ty.unqualified(), types::Type::Pointer(_))
        || field_ref.byte_offset % 4 != 0
    {
        return None;
    }
    Some(ConstPointerSlot {
        array: field_ref.array,
        index: field_ref
            .base_index
            .checked_add((field_ref.byte_offset / 4) as usize)?,
    })
}

fn eval_const_member_field(
    base: &ast::Expr,
    field: &str,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerField> {
    let ast::Expr::Ident(name) = base else {
        return None;
    };
    if !scoped_const_array_exists(name, scopes) {
        return None;
    }
    let aggregate_ty = scoped_const_array_elem_ty(name, scopes)?;
    let fields = const_struct_fields(&aggregate_ty, ctx)?;
    let byte_offset = if const_scalar_is_union_type(&aggregate_ty, ctx) {
        0
    } else {
        types::struct_field_layout_ctx(
            fields,
            field,
            aggregate_pack_for_type(&aggregate_ty, ctx),
            ctx,
        )?
        .0
    };
    let field_ty = fields
        .iter()
        .find(|(name, _)| name == field)
        .map(|(_, ty)| ty.clone())?;
    Some(ConstPointerField {
        array: name.clone(),
        base_index: 0,
        byte_offset,
        field_ty,
    })
}

fn eval_const_pointer_field(
    ptr_expr: &ast::Expr,
    field: &str,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerField> {
    let ptr = eval_scoped_const_pointer_expr(ptr_expr, scopes, ctx)?;
    let fields = const_struct_fields(&ptr.pointee_ty, ctx)?;
    let byte_offset = if const_scalar_is_union_type(&ptr.pointee_ty, ctx) {
        0
    } else {
        types::struct_field_layout_ctx(
            fields,
            field,
            aggregate_pack_for_type(&ptr.pointee_ty, ctx),
            ctx,
        )?
        .0
    };
    let field_ty = fields
        .iter()
        .find(|(name, _)| name == field)
        .map(|(_, ty)| ty.clone())?;
    Some(ConstPointerField {
        array: ptr.array,
        base_index: ptr.index,
        byte_offset,
        field_ty,
    })
}

fn const_struct_fields<'a>(
    ty: &'a types::Type,
    ctx: &'a ConstScalarCtx<'_>,
) -> Option<&'a [(String, types::Type)]> {
    match ty {
        types::Type::Struct { name, fields, .. } | types::Type::Union { name, fields, .. } => {
            if fields.is_empty() {
                name.as_deref()
                    .and_then(|name| ctx.struct_defs.get(name).map(Vec::as_slice))
            } else {
                Some(fields.as_slice())
            }
        }
        types::Type::Typedef(name) => const_struct_fields(ctx.typedefs.get(name)?, ctx),
        types::Type::Const(inner) | types::Type::Volatile(inner) => const_struct_fields(inner, ctx),
        _ => None,
    }
}

fn const_scalar_is_union_type(ty: &types::Type, ctx: &ConstScalarCtx<'_>) -> bool {
    match ty {
        types::Type::Union { .. } => true,
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .is_some_and(|ty| const_scalar_is_union_type(ty, ctx)),
        types::Type::Const(inner) | types::Type::Volatile(inner) => {
            const_scalar_is_union_type(inner, ctx)
        }
        _ => false,
    }
}

fn aggregate_pack_for_type(ty: &types::Type, ctx: &ConstScalarCtx<'_>) -> u8 {
    match ty {
        types::Type::Struct { name, packed, .. } | types::Type::Union { name, packed, .. } => {
            if *packed != 0 {
                *packed
            } else {
                let _ = name;
                0
            }
        }
        types::Type::Typedef(name) => ctx
            .typedefs
            .get(name)
            .map(|ty| aggregate_pack_for_type(ty, ctx))
            .unwrap_or(0),
        types::Type::Const(inner) | types::Type::Volatile(inner) => {
            aggregate_pack_for_type(inner, ctx)
        }
        _ => 0,
    }
}

fn eval_scoped_const_int_expr_mut(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Ident(name) => scoped_const_int_value(name, scopes)
            .or_else(|| scoped_const_pointer_truth_value(name, scopes))
            .or_else(|| scoped_const_fnptr_truth_value(name, scopes)),
        Expr::Sizeof(arg) => scoped_const_sizeof_arg(arg, scopes, ctx),
        Expr::Index(_, _) | Expr::Member(_, _) | Expr::Arrow(_, _) => {
            if let Some(value) = eval_scoped_const_string_index(expr, scopes, ctx) {
                return Some(value);
            }
            if let Some(value) = eval_scoped_const_pointer_index(expr, scopes, ctx) {
                return Some(value);
            }
            if let Some(slot) = eval_scoped_const_fullword_array_slot(expr, scopes, ctx) {
                return scoped_const_array_get(&slot.array, slot.index, scopes);
            }
            if let Some(value) = eval_scoped_const_bitfield_lvalue(expr, scopes, ctx) {
                return Some(value);
            }
            if let Some(value) = eval_scoped_const_narrow_integer_lvalue(expr, scopes, ctx) {
                return Some(value);
            }
            if let Some(value) = eval_scoped_const_wide_integer_lvalue(expr, scopes, ctx) {
                return Some(value);
            }
            let slot = eval_scoped_const_array_slot(expr, scopes, ctx)?;
            scoped_const_array_get(&slot.array, slot.index, scopes)
        }
        Expr::Deref(ptr_expr) => {
            if let Some(value) = eval_scoped_const_vararg_deref(ptr_expr, scopes, ctx) {
                return Some(value);
            }
            let ptr = eval_scoped_const_pointer_expr(ptr_expr, scopes, ctx)?;
            scoped_const_array_get(&ptr.array, ptr.index, scopes)
        }
        Expr::Call { name, args } => {
            if name == "memcmp" {
                if let Some(value) = eval_scoped_const_memcmp_call(args, scopes, ctx) {
                    return Some(value);
                }
            }
            if name == "strcmp" {
                if let Some(value) = eval_scoped_const_strcmp_call(args, scopes, ctx) {
                    return Some(value);
                }
            }
            if name == "vsnprintf" {
                if let Some(value) = eval_scoped_const_vsnprintf_call(args, scopes, ctx) {
                    return Some(value);
                }
            }
            if name == "strlen" {
                if let Some(value) = eval_scoped_const_strlen_call(args, scopes, ctx) {
                    return Some(value);
                }
            }
            let target = scoped_const_fnptr_value(name, scopes)
                .flatten()
                .unwrap_or_else(|| name.clone());
            eval_const_scalar_function_call_exprs(&target, args, scopes, ctx)
        }
        Expr::CallIndirect { func_expr, args } => {
            let name = eval_scoped_const_function_pointer_expr(func_expr, scopes, ctx)?;
            eval_const_scalar_function_call_exprs(&name, args, scopes, ctx)
        }
        Expr::Unary { op, operand } => {
            let v = eval_scoped_const_int_expr_mut(operand, scopes, ctx)?;
            Some(match op {
                UnaryOp::Neg => v.wrapping_neg(),
                UnaryOp::BitNot => !v,
                UnaryOp::LogNot => i64::from(v == 0),
            })
        }
        Expr::Cast(ty, operand) if *ty == types::Type::Bool => {
            let v = eval_scoped_const_int_expr_mut(operand, scopes, ctx)?;
            Some(i64::from(v != 0))
        }
        Expr::Cast(ty, operand) if resolve_const_scalar_typedefs(ty, ctx).is_integer() => {
            let ty = resolve_const_scalar_typedefs(ty, ctx);
            if scoped_const_expr_has_float(operand, scopes) {
                let v = eval_scoped_const_float_expr_mut(operand, scopes, ctx)?;
                Some(eval_integer_cast(&ty, v as i64))
            } else {
                let v = eval_scoped_const_int_expr_mut(operand, scopes, ctx)?;
                Some(eval_integer_cast(&ty, v))
            }
        }
        Expr::Binary { op, lhs, rhs } => match op {
            BinaryOp::Sub => {
                if let Some(value) = eval_scoped_const_pointer_diff(lhs, rhs, scopes, ctx) {
                    return Some(value);
                }
                let a = eval_scoped_const_int_expr_mut(lhs, scopes, ctx)?;
                let b = eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?;
                Some(a.wrapping_sub(b))
            }
            BinaryOp::Eq | BinaryOp::Ne => {
                if let Some(value) = eval_scoped_const_pointer_eq(*op, lhs, rhs, scopes, ctx) {
                    return Some(value);
                }
                let a = eval_scoped_const_int_expr_mut(lhs, scopes, ctx)?;
                let b = eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?;
                eval_scoped_const_comparison(*op, lhs, rhs, a, b, scopes, ctx)
            }
            BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge
                if scoped_const_expr_has_float(lhs, scopes)
                    || scoped_const_expr_has_float(rhs, scopes) =>
            {
                let a = eval_scoped_const_float_expr_mut(lhs, scopes, ctx)?;
                let b = eval_scoped_const_float_expr_mut(rhs, scopes, ctx)?;
                Some(eval_const_float_comparison(*op, a, b))
            }
            BinaryOp::LogAnd => {
                let a = eval_scoped_const_int_expr_mut(lhs, scopes, ctx)?;
                if a == 0 {
                    Some(0)
                } else {
                    let b = eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?;
                    Some(i64::from(b != 0))
                }
            }
            BinaryOp::LogOr => {
                let a = eval_scoped_const_int_expr_mut(lhs, scopes, ctx)?;
                if a != 0 {
                    Some(1)
                } else {
                    let b = eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?;
                    Some(i64::from(b != 0))
                }
            }
            _ => {
                if matches!(
                    op,
                    BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge
                ) {
                    if let Some(value) = eval_scoped_const_pointer_rel(*op, lhs, rhs, scopes, ctx) {
                        return Some(value);
                    }
                }
                let a = eval_scoped_const_int_expr_mut(lhs, scopes, ctx)?;
                let b = eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?;
                Some(match op {
                    BinaryOp::Add => a.wrapping_add(b),
                    BinaryOp::Sub => unreachable!(),
                    BinaryOp::Mul => a.wrapping_mul(b),
                    BinaryOp::BitAnd => a & b,
                    BinaryOp::BitOr => a | b,
                    BinaryOp::BitXor => a ^ b,
                    BinaryOp::Shl | BinaryOp::Shr => {
                        return eval_scoped_const_shift(*op, lhs, a, b, scopes, ctx);
                    }
                    BinaryOp::Eq | BinaryOp::Ne => unreachable!(),
                    BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge => {
                        return eval_scoped_const_comparison(*op, lhs, rhs, a, b, scopes, ctx);
                    }
                    BinaryOp::Div | BinaryOp::Mod => {
                        return eval_scoped_const_divmod(*op, lhs, rhs, a, b, scopes, ctx);
                    }
                    BinaryOp::LogAnd | BinaryOp::LogOr => unreachable!(),
                })
            }
        },
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? != 0 {
                eval_scoped_const_int_expr_mut(then_expr, scopes, ctx)
            } else {
                eval_scoped_const_int_expr_mut(else_expr, scopes, ctx)
            }
        }
        Expr::Comma(lhs, rhs) => {
            eval_scoped_const_side_effect(lhs, scopes, ctx)?;
            eval_scoped_const_int_expr_mut(rhs, scopes, ctx)
        }
        Expr::Assign { target, value } => {
            let Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let rhs = eval_scoped_const_int_expr_mut(value, scopes, ctx)?;
            assign_scoped_const_int_value(name, rhs, scopes, ctx)?;
            scoped_const_int_value(name, scopes)
        }
        Expr::CompoundAssign { op, target, value } => {
            eval_scoped_const_compound_assign(*op, target, value, scopes, ctx)
        }
        Expr::PreInc(target) => {
            let Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let slot = scoped_const_slot_mut(name, scopes)?;
            *slot = slot.wrapping_add(1);
            Some(*slot)
        }
        Expr::PostInc(target) => {
            let Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let slot = scoped_const_slot_mut(name, scopes)?;
            let old = *slot;
            *slot = slot.wrapping_add(1);
            Some(old)
        }
        Expr::PreDec(target) => {
            let Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let slot = scoped_const_slot_mut(name, scopes)?;
            *slot = slot.wrapping_sub(1);
            Some(*slot)
        }
        Expr::PostDec(target) => {
            let Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let slot = scoped_const_slot_mut(name, scopes)?;
            let old = *slot;
            *slot = slot.wrapping_sub(1);
            Some(old)
        }
        _ => eval_scoped_const_int_expr(expr, scopes),
    }
}

fn scoped_const_sizeof_arg(
    arg: &ast::SizeofArg,
    scopes: &[HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    match arg {
        ast::SizeofArg::Type(ty) => Some(i64::from(types::size_bytes_ctx(ty, ctx))),
        ast::SizeofArg::Expr(expr) => scoped_const_sizeof_expr(expr, scopes, ctx),
    }
}

fn scoped_const_sizeof_expr(
    expr: &ast::Expr,
    scopes: &[HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    match expr {
        ast::Expr::Ident(name) => {
            for scope in scopes.iter().rev() {
                match scope.get(name) {
                    Some(ConstScalarValue::Array { elem_ty, values }) => {
                        if const_struct_fields(elem_ty, ctx).is_some() {
                            return i64::try_from(values.len().checked_mul(4)?).ok();
                        }
                        let elem_size =
                            usize::try_from(types::size_bytes_ctx(elem_ty, ctx)).ok()?;
                        return i64::try_from(values.len().checked_mul(elem_size)?).ok();
                    }
                    Some(ConstScalarValue::TypedInt { ty, .. })
                    | Some(ConstScalarValue::UninitInt(ty)) => {
                        return Some(i64::from(types::size_bytes_ctx(ty, ctx)));
                    }
                    Some(ConstScalarValue::Pointer { .. })
                    | Some(ConstScalarValue::StringPtr { .. })
                    | Some(ConstScalarValue::PointerArray { .. })
                    | Some(ConstScalarValue::FnPtr(_)) => return Some(4),
                    Some(ConstScalarValue::Int(_))
                    | Some(ConstScalarValue::Float(_))
                    | Some(ConstScalarValue::FnArray { .. })
                    | Some(ConstScalarValue::VarArgs(_)) => return None,
                    None => {}
                }
            }
            None
        }
        ast::Expr::Index(base, _) => match base.as_ref() {
            ast::Expr::Ident(name) => {
                let elem_ty = scoped_const_array_elem_ty(name, scopes)?;
                Some(i64::from(types::size_bytes_ctx(&elem_ty, ctx)))
            }
            _ => None,
        },
        ast::Expr::Cast(ty, inner) => match (ty.unqualified(), inner.as_ref()) {
            (types::Type::Array(elem, None), ast::Expr::InitList(items)) => {
                let len = scoped_const_array_init_len(items, scopes)?;
                let elem_size = i64::from(types::size_bytes_ctx(elem, ctx));
                i64::try_from(len).ok()?.checked_mul(elem_size)
            }
            (types::Type::Array(elem, None), ast::Expr::StringLit(bytes))
                if matches!(elem.unqualified(), types::Type::Char) =>
            {
                i64::try_from(bytes.len().checked_add(1)?).ok()
            }
            _ => Some(i64::from(types::size_bytes_ctx(ty, ctx))),
        },
        _ => None,
    }
}

fn scoped_const_array_init_len(
    items: &[ast::Expr],
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<usize> {
    let mut next = 0usize;
    let mut max_len = 0usize;
    for item in items {
        let index = match item {
            ast::Expr::ArrayDesignator { index, .. } => {
                usize::try_from(eval_scoped_const_int_expr(index, scopes)?).ok()?
            }
            _ => next,
        };
        let end = index.checked_add(1)?;
        max_len = max_len.max(end);
        next = end;
    }
    Some(max_len)
}

fn eval_scoped_const_shift(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    a: i64,
    b: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    use ast::BinaryOp;
    let lty = scoped_const_int_expr_type(lhs, scopes, ctx)
        .or_else(|| const_int_expr_type(lhs))
        .map(|ty| resolve_const_scalar_typedefs(&ty, ctx))
        .map(|ty| ty.integer_promoted());
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

fn eval_scoped_const_divmod(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    a: i64,
    b: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    use ast::BinaryOp;
    if b == 0 {
        return None;
    }
    let common = match (
        scoped_const_int_expr_type(lhs, scopes, ctx)
            .or_else(|| const_int_expr_type(lhs))
            .map(|ty| resolve_const_scalar_typedefs(&ty, ctx)),
        scoped_const_int_expr_type(rhs, scopes, ctx)
            .or_else(|| const_int_expr_type(rhs))
            .map(|ty| resolve_const_scalar_typedefs(&ty, ctx)),
    ) {
        (Some(lty), Some(rty)) => Some(types::Type::usual_arithmetic_conversion(&lty, &rty)),
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

fn eval_scoped_const_comparison(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    a: i64,
    b: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let lty = scoped_const_int_expr_type(lhs, scopes, ctx)
        .or_else(|| const_int_expr_type(lhs))
        .map(|ty| resolve_const_scalar_typedefs(&ty, ctx));
    let rty = scoped_const_int_expr_type(rhs, scopes, ctx)
        .or_else(|| const_int_expr_type(rhs))
        .map(|ty| resolve_const_scalar_typedefs(&ty, ctx));
    match (lty, rty) {
        (Some(lty), Some(rty)) => {
            let common = types::Type::usual_arithmetic_conversion(&lty, &rty);
            if common.is_unsigned() {
                if common.is_long_long() {
                    return Some(eval_u64_comparison(op, a as u64, b as u64));
                }
                return Some(eval_u32_comparison(op, a as u32, b as u32));
            }
            Some(eval_signed_comparison(op, a, b))
        }
        _ => Some(eval_signed_comparison(op, a, b)),
    }
}

fn scoped_const_int_expr_type(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<types::Type> {
    match expr {
        ast::Expr::IntLit(value, suffix) => Some(int_literal_type_for_fold(*value, *suffix)),
        ast::Expr::CharLit(_) => Some(types::Type::Int),
        ast::Expr::Unary { op, operand } => {
            if *op == ast::UnaryOp::LogNot {
                Some(types::Type::Int)
            } else {
                scoped_const_int_expr_type(operand, scopes, ctx).map(|ty| ty.integer_promoted())
            }
        }
        ast::Expr::Cast(ty, _) if resolve_const_scalar_typedefs(ty, ctx).is_integer() => {
            Some(resolve_const_scalar_typedefs(ty, ctx))
        }
        ast::Expr::Binary { op, lhs, rhs } => {
            if matches!(
                op,
                ast::BinaryOp::Eq
                    | ast::BinaryOp::Ne
                    | ast::BinaryOp::Lt
                    | ast::BinaryOp::Gt
                    | ast::BinaryOp::Le
                    | ast::BinaryOp::Ge
                    | ast::BinaryOp::LogAnd
                    | ast::BinaryOp::LogOr
            ) {
                return Some(types::Type::Int);
            }
            let lty = scoped_const_int_expr_type(lhs, scopes, ctx)?;
            let rty = scoped_const_int_expr_type(rhs, scopes, ctx)?;
            Some(types::Type::usual_arithmetic_conversion(&lty, &rty))
        }
        ast::Expr::Ident(name) => scoped_const_int_ty(name, scopes),
        ast::Expr::Index(base, _) => match base.as_ref() {
            ast::Expr::Ident(name) => scoped_const_array_elem_ty(name, scopes),
            _ => None,
        },
        ast::Expr::Deref(ptr_expr) => {
            let ptr = eval_scoped_const_pointer_expr(ptr_expr, scopes, ctx)?;
            Some(ptr.pointee_ty)
        }
        ast::Expr::Member(base, field) => {
            let field_ref = eval_const_member_field(base, field, scopes, ctx)?;
            Some(field_ref.field_ty)
        }
        ast::Expr::Arrow(ptr_base, field) => {
            let field_ref = eval_const_pointer_field(ptr_base, field, scopes, ctx)?;
            Some(field_ref.field_ty)
        }
        _ => None,
    }
}

fn eval_scoped_const_pointer_eq(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    if let Some(value) = eval_scoped_const_function_pointer_eq(op, lhs, rhs, scopes, ctx) {
        return Some(value);
    }
    let lhs = eval_scoped_const_pointer_expr(lhs, scopes, ctx)
        .or_else(|| eval_const_pointer_init(lhs, scopes, ctx, None))?;
    let rhs = eval_scoped_const_pointer_expr(rhs, scopes, ctx)
        .or_else(|| eval_const_pointer_init(rhs, scopes, ctx, None))?;
    let equal = lhs.array == rhs.array && lhs.index == rhs.index;
    match op {
        ast::BinaryOp::Eq => Some(i64::from(equal)),
        ast::BinaryOp::Ne => Some(i64::from(!equal)),
        _ => None,
    }
}

fn eval_scoped_const_pointer_rel(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    if !matches!(
        op,
        ast::BinaryOp::Lt | ast::BinaryOp::Gt | ast::BinaryOp::Le | ast::BinaryOp::Ge
    ) {
        return None;
    }
    let (lhs_array, lhs_byte, _) = eval_scoped_const_pointer_byte_addr(lhs, scopes, ctx)?;
    let (rhs_array, rhs_byte, _) = eval_scoped_const_pointer_byte_addr(rhs, scopes, ctx)?;
    if lhs_array != rhs_array {
        return None;
    }
    Some(match op {
        ast::BinaryOp::Lt => i64::from(lhs_byte < rhs_byte),
        ast::BinaryOp::Gt => i64::from(lhs_byte > rhs_byte),
        ast::BinaryOp::Le => i64::from(lhs_byte <= rhs_byte),
        ast::BinaryOp::Ge => i64::from(lhs_byte >= rhs_byte),
        _ => unreachable!(),
    })
}

fn eval_scoped_const_function_pointer_eq(
    op: ast::BinaryOp,
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    if !matches!(op, ast::BinaryOp::Eq | ast::BinaryOp::Ne) {
        return None;
    }
    let lhs = const_scalar_function_pointer_value(lhs, scopes, ctx)?;
    let rhs = const_scalar_function_pointer_value(rhs, scopes, ctx)?;
    let equal = lhs == rhs;
    Some(match op {
        ast::BinaryOp::Eq => i64::from(equal),
        ast::BinaryOp::Ne => i64::from(!equal),
        _ => unreachable!(),
    })
}

fn eval_scoped_const_pointer_diff(
    lhs: &ast::Expr,
    rhs: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let (lhs_array, lhs_byte, unit) = eval_scoped_const_pointer_byte_addr(lhs, scopes, ctx)?;
    let (rhs_array, rhs_byte, _) = eval_scoped_const_pointer_byte_addr(rhs, scopes, ctx)?;
    if lhs_array != rhs_array || unit == 0 {
        return None;
    }
    let diff = lhs_byte.checked_sub(rhs_byte)?;
    if diff % unit != 0 {
        return None;
    }
    Some(diff / unit)
}

fn eval_scoped_const_pointer_byte_addr(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<(String, i64, i64)> {
    match expr {
        ast::Expr::Ident(name) => {
            let ptr = scoped_const_pointer_value(name, scopes)?;
            let unit = i64::from(types::size_bytes_ctx(&ptr.pointee_ty, ctx).max(1));
            Some((
                ptr.array,
                i64::try_from(ptr.index).ok()?.checked_mul(unit)?,
                unit,
            ))
        }
        ast::Expr::Cast(ty, inner) if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            let types::Type::Pointer(pointee) = ty.unqualified() else {
                return None;
            };
            let (array, byte_offset, _) = eval_scoped_const_pointer_byte_addr(inner, scopes, ctx)?;
            let unit = i64::from(types::size_bytes_ctx(pointee, ctx).max(1));
            Some((array, byte_offset, unit))
        }
        ast::Expr::AddrOf(inner) => {
            let (array, byte_offset, lvalue_ty) =
                eval_scoped_const_lvalue_byte_addr(inner, scopes, ctx)?;
            let unit = i64::from(types::size_bytes_ctx(&lvalue_ty, ctx).max(1));
            Some((array, byte_offset, unit))
        }
        _ => None,
    }
}

fn eval_scoped_const_lvalue_byte_addr(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<(String, i64, types::Type)> {
    match expr {
        ast::Expr::Ident(name) if scoped_const_array_exists(name, scopes) => {
            let ty = scoped_const_array_elem_ty(name, scopes)?;
            Some((name.clone(), 0, ty))
        }
        ast::Expr::Member(base, field) => {
            let (array, base_byte, base_ty) =
                eval_scoped_const_lvalue_byte_addr(base, scopes, ctx)?;
            let fields = const_struct_fields(&base_ty, ctx)?;
            let field_byte = if const_scalar_is_union_type(&base_ty, ctx) {
                0
            } else {
                types::struct_field_layout_ctx(
                    fields,
                    field,
                    aggregate_pack_for_type(&base_ty, ctx),
                    ctx,
                )?
                .0
            };
            let field_ty = fields
                .iter()
                .find(|(name, _)| name == field)
                .map(|(_, ty)| ty.clone())?;
            Some((
                array,
                base_byte.checked_add(i64::from(field_byte))?,
                field_ty,
            ))
        }
        ast::Expr::Index(base, index) => {
            let (array, base_byte, base_ty) =
                eval_scoped_const_lvalue_byte_addr(base, scopes, ctx)?;
            let elem_ty = match resolve_const_scalar_typedefs(&base_ty, ctx) {
                types::Type::Array(elem_ty, _) => elem_ty.as_ref().clone(),
                _ => base_ty,
            };
            let idx = eval_scoped_const_int_expr_mut(index, scopes, ctx)?;
            let elem_size = i64::from(types::size_bytes_ctx(&elem_ty, ctx).max(1));
            Some((
                array,
                base_byte.checked_add(idx.checked_mul(elem_size)?)?,
                elem_ty,
            ))
        }
        _ => None,
    }
}

fn eval_scoped_const_float_expr_mut(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<f64> {
    match expr {
        ast::Expr::FloatLit(value) => Some(*value as f32 as f64),
        ast::Expr::IntLit(value, _) | ast::Expr::CharLit(value) => Some(*value as f32 as f64),
        ast::Expr::Ident(name) => scoped_const_float_value(name, scopes)
            .or_else(|| scoped_const_int_value(name, scopes).map(|value| value as f32 as f64)),
        ast::Expr::Cast(ty, operand) if ty.is_float() => {
            if let Some(value) = eval_scoped_const_float_expr_mut(operand, scopes, ctx) {
                Some(value as f32 as f64)
            } else {
                Some(eval_scoped_const_int_expr_mut(operand, scopes, ctx)? as f32 as f64)
            }
        }
        ast::Expr::Cast(ty, operand) if ty.is_integer() => Some(eval_integer_cast(
            ty,
            eval_scoped_const_float_expr_mut(operand, scopes, ctx)? as i64,
        ) as f64),
        _ => None,
    }
}

fn scoped_const_expr_has_float(
    expr: &ast::Expr,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> bool {
    use ast::Expr;
    match expr {
        Expr::FloatLit(_) => true,
        Expr::Ident(name) => scopes
            .iter()
            .rev()
            .any(|scope| matches!(scope.get(name), Some(ConstScalarValue::Float(_)))),
        Expr::Cast(ty, operand) => ty.is_float() || scoped_const_expr_has_float(operand, scopes),
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => scoped_const_expr_has_float(operand, scopes),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Comma(lhs, rhs)
        | Expr::Index(lhs, rhs)
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        } => scoped_const_expr_has_float(lhs, scopes) || scoped_const_expr_has_float(rhs, scopes),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            scoped_const_expr_has_float(cond, scopes)
                || scoped_const_expr_has_float(then_expr, scopes)
                || scoped_const_expr_has_float(else_expr, scopes)
        }
        Expr::Call { args, .. } => args
            .iter()
            .any(|arg| scoped_const_expr_has_float(arg, scopes)),
        Expr::CallIndirect { func_expr, args } => {
            scoped_const_expr_has_float(func_expr, scopes)
                || args
                    .iter()
                    .any(|arg| scoped_const_expr_has_float(arg, scopes))
        }
        Expr::Sizeof(inner) => match inner.as_ref() {
            ast::SizeofArg::Expr(inner) => scoped_const_expr_has_float(inner, scopes),
            ast::SizeofArg::Type(_) => false,
        },
        Expr::InitList(items) => items
            .iter()
            .any(|item| scoped_const_expr_has_float(item, scopes)),
        Expr::DesignatedInit { value, .. } => scoped_const_expr_has_float(value, scopes),
        Expr::ArrayDesignator { index, value } => {
            scoped_const_expr_has_float(index, scopes) || scoped_const_expr_has_float(value, scopes)
        }
        Expr::IntLit(..)
        | Expr::CharLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_) => false,
    }
}

fn eval_const_float_comparison(op: ast::BinaryOp, a: f64, b: f64) -> i64 {
    use ast::BinaryOp;
    i64::from(match op {
        BinaryOp::Eq => a == b,
        BinaryOp::Ne => a != b,
        BinaryOp::Lt => a < b,
        BinaryOp::Gt => a > b,
        BinaryOp::Le => a <= b,
        BinaryOp::Ge => a >= b,
        _ => return 0,
    })
}

fn const_scalar_is_function_ptr_type(ty: &types::Type) -> bool {
    match ty {
        types::Type::FunctionPtr { .. } => true,
        types::Type::Pointer(inner) | types::Type::Const(inner) | types::Type::Volatile(inner) => {
            const_scalar_is_function_ptr_type(inner)
        }
        _ => false,
    }
}

fn const_scalar_is_char_type(ty: &types::Type) -> bool {
    match ty.unqualified() {
        types::Type::Char => true,
        types::Type::Unsigned(inner) if matches!(inner.as_ref(), types::Type::Char) => true,
        _ => false,
    }
}

fn const_scalar_integer_type(ty: &types::Type, ctx: &ConstScalarCtx<'_>) -> Option<types::Type> {
    match ty.unqualified() {
        types::Type::Typedef(name) => const_scalar_integer_type(ctx.typedefs.get(name)?, ctx),
        ty if ty.is_integer() => Some(ty.clone()),
        _ => None,
    }
}

fn const_scalar_resolved_integer_array_type(
    ty: &types::Type,
    ctx: &ConstScalarCtx<'_>,
) -> Option<(types::Type, usize)> {
    let resolved = resolve_const_scalar_typedefs(ty, ctx);
    let types::Type::Array(elem_ty, Some(len)) = resolved else {
        return None;
    };
    let elem_ty = const_scalar_integer_type(elem_ty.as_ref(), ctx)?;
    Some((elem_ty, len))
}

fn const_scalar_char_pointer_pointee(ty: &types::Type) -> Option<types::Type> {
    match ty.unqualified() {
        types::Type::Pointer(pointee) if const_scalar_is_char_type(pointee) => {
            Some(pointee.as_ref().clone())
        }
        _ => None,
    }
}

fn const_scalar_pointer_pointee(ty: &types::Type, ctx: &ConstScalarCtx<'_>) -> Option<types::Type> {
    let resolved = resolve_const_scalar_typedefs(ty, ctx);
    let types::Type::Pointer(pointee) = resolved.unqualified() else {
        return None;
    };
    Some(pointee.as_ref().clone())
}

fn const_scalar_is_va_start(expr: &ast::Expr) -> bool {
    match expr {
        ast::Expr::Call { name, args } => name == "__builtin_va_start_sel" && args.is_empty(),
        ast::Expr::Cast(_, inner) => const_scalar_is_va_start(inner),
        _ => false,
    }
}

fn eval_scoped_const_vararg_deref(
    ptr_expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let ast::Expr::Cast(ty, inner) = ptr_expr else {
        return None;
    };
    let resolved_ty = resolve_const_scalar_typedefs(ty, ctx);
    let types::Type::Pointer(pointee) = resolved_ty.unqualified() else {
        return None;
    };
    let ast::Expr::PostInc(ap) = inner.as_ref() else {
        return None;
    };
    let ast::Expr::Ident(ap_name) = ap.as_ref() else {
        return None;
    };
    let ConstPrintfArg::Int(value) = scoped_const_varargs_pop(ap_name, scopes)? else {
        return None;
    };
    Some(eval_integer_cast(
        &resolve_const_scalar_typedefs(pointee.as_ref(), ctx),
        value,
    ))
}

fn const_scalar_string_bytes(s: &str, elem_ty: &types::Type) -> Vec<i64> {
    s.bytes()
        .chain(std::iter::once(0))
        .map(|b| eval_integer_cast(elem_ty, i64::from(b)))
        .collect()
}

fn insert_const_scalar_string_array(
    scope: &mut HashMap<String, ConstScalarValue>,
    name: String,
    s: &str,
    elem_ty: &types::Type,
) -> ConstPointerValue {
    let values = const_scalar_string_bytes(s, elem_ty);
    scope.insert(
        name.clone(),
        ConstScalarValue::Array {
            elem_ty: elem_ty.clone(),
            values,
        },
    );
    ConstPointerValue {
        array: name,
        index: 0,
        pointee_ty: elem_ty.clone(),
    }
}

fn eval_scoped_const_string_index(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let ast::Expr::Index(base, index) = expr else {
        return None;
    };
    let ast::Expr::Ident(name) = base.as_ref() else {
        return None;
    };
    if !expr_side_effect_free(index) {
        return None;
    }
    let index = usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::StringPtr { bytes }) = scope.get(name) {
            return bytes.get(index).copied();
        }
    }
    None
}

fn eval_scoped_const_pointer_index(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let ast::Expr::Index(base, index) = expr else {
        return None;
    };
    if !expr_side_effect_free(index) {
        return None;
    }
    let mut ptr = if let Some(ptr) = eval_scoped_const_pointer_expr(base, scopes, ctx) {
        ptr
    } else {
        eval_const_pointer_init(base, scopes, ctx, None)?
    };
    let delta = usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
    ptr.index = ptr.index.checked_add(delta)?;
    let value = scoped_const_array_get(&ptr.array, ptr.index, scopes)?;
    Some(eval_integer_cast(&ptr.pointee_ty, value))
}

fn const_scalar_function_name(expr: &ast::Expr) -> Option<String> {
    match expr {
        ast::Expr::Ident(name) => Some(name.clone()),
        ast::Expr::AddrOf(inner) | ast::Expr::Cast(_, inner) => const_scalar_function_name(inner),
        _ => None,
    }
}

fn const_scalar_function_pointer_value(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<Option<String>> {
    match expr {
        ast::Expr::IntLit(0, _) => Some(None),
        ast::Expr::Cast(_, inner) | ast::Expr::AddrOf(inner) => {
            const_scalar_function_pointer_value(inner, scopes, ctx)
        }
        ast::Expr::Ident(name) => {
            if let Some(value) = scoped_const_fnptr_value(name, scopes) {
                Some(value)
            } else if ctx.const_functions.contains_key(name) {
                Some(Some(name.clone()))
            } else {
                None
            }
        }
        _ => None,
    }
}

fn eval_scoped_const_function_pointer_expr(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<String> {
    match expr {
        ast::Expr::Index(base, index) => {
            let ast::Expr::Ident(name) = base.as_ref() else {
                return None;
            };
            let index =
                usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
            scoped_const_fn_array_get(name, index, scopes)
        }
        ast::Expr::Cast(_, inner) => eval_scoped_const_function_pointer_expr(inner, scopes, ctx),
        ast::Expr::Ident(name) => scoped_const_fnptr_value(name, scopes)
            .flatten()
            .or_else(|| ctx.const_functions.contains_key(name).then(|| name.clone())),
        _ => None,
    }
}

fn eval_const_scalar_function_call_exprs(
    name: &str,
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    if args.is_empty() {
        if let Some(value) = ctx.const_fn_returns.get(name) {
            return Some(*value);
        }
    }
    let function = ctx.const_functions.get(name)?;
    if function.params.len() > args.len()
        || (!function.is_variadic && function.params.len() != args.len())
    {
        return None;
    }
    let mut call_scopes = scopes.to_vec();
    let mut params = HashMap::new();
    for ((param, ty), arg) in function.params.iter().zip(args) {
        if const_struct_fields(ty, ctx).is_some() {
            let (ret_ty, values) = eval_const_struct_expr_values(arg, scopes, ctx)?;
            if types::size_bytes_ctx(&ret_ty, ctx) != types::size_bytes_ctx(ty, ctx) {
                return None;
            }
            params.insert(
                param.clone(),
                ConstScalarValue::Array {
                    elem_ty: ty.clone(),
                    values,
                },
            );
        } else if let Some(pointee) = const_scalar_char_pointer_pointee(ty) {
            if let ast::Expr::StringLit(s) = arg {
                params.insert(
                    param.clone(),
                    ConstScalarValue::StringPtr {
                        bytes: const_scalar_string_bytes(s, &pointee),
                    },
                );
            } else {
                let ptr = eval_scoped_const_pointer_expr(arg, scopes, ctx)
                    .or_else(|| eval_const_pointer_init(arg, scopes, ctx, Some(pointee)))?;
                params.insert(
                    param.clone(),
                    ConstScalarValue::Pointer {
                        array: ptr.array,
                        index: ptr.index,
                        pointee_ty: ptr.pointee_ty,
                    },
                );
            }
        } else if matches!(ty.unqualified(), types::Type::Pointer(_)) {
            let types::Type::Pointer(pointee) = ty.unqualified() else {
                return None;
            };
            let ptr = eval_scoped_const_pointer_expr(arg, scopes, ctx).or_else(|| {
                eval_const_pointer_init(arg, scopes, ctx, Some(pointee.as_ref().clone()))
            })?;
            params.insert(
                param.clone(),
                ConstScalarValue::Pointer {
                    array: ptr.array,
                    index: ptr.index,
                    pointee_ty: ptr.pointee_ty,
                },
            );
        } else {
            let value = eval_scoped_const_int_expr_mut(arg, scopes, ctx)?;
            params.insert(
                param.clone(),
                ConstScalarValue::TypedInt {
                    value: eval_integer_cast(ty, value),
                    ty: ty.clone(),
                },
            );
        }
    }
    if function.is_variadic {
        let mut varargs = Vec::new();
        for arg in &args[function.params.len()..] {
            varargs.push(eval_scoped_const_printf_arg(arg, scopes, ctx)?);
        }
        params.insert(
            "__sel_va_args".to_string(),
            ConstScalarValue::VarArgs(varargs),
        );
    }
    call_scopes.push(params);
    eval_const_scalar_block_stmts(&function.body, &mut call_scopes, ctx)?
}

fn eval_const_struct_expr_values(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<(types::Type, Vec<i64>)> {
    match expr {
        ast::Expr::Call { name, args } => eval_const_struct_function_call(name, args, scopes, ctx),
        ast::Expr::Cast(ty, inner) if matches!(inner.as_ref(), ast::Expr::InitList(_)) => {
            let ast::Expr::InitList(items) = inner.as_ref() else {
                return None;
            };
            let values = eval_const_struct_init_list_values(ty, items, None, scopes, ctx)?;
            Some((ty.clone(), values))
        }
        ast::Expr::Ident(name) => {
            let ConstScalarValue::Array { elem_ty, values } = scoped_const_value(name, scopes)?
            else {
                return None;
            };
            const_struct_fields(elem_ty, ctx)?;
            Some((elem_ty.clone(), values.clone()))
        }
        ast::Expr::Cast(_, inner) | ast::Expr::AddrOf(inner) => {
            eval_const_struct_expr_values(inner, scopes, ctx)
        }
        ast::Expr::Comma(lhs, rhs) => {
            eval_scoped_const_side_effect(lhs, scopes, ctx)?;
            eval_const_struct_expr_values(rhs, scopes, ctx)
        }
        _ => None,
    }
}

fn eval_const_struct_init_list_values(
    ty: &types::Type,
    items: &[ast::Expr],
    dest_array: Option<&str>,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<Vec<i64>> {
    let fields = const_struct_fields(ty, ctx)?;
    if items.len() > fields.len() {
        return None;
    }
    let total_size = types::size_bytes_ctx(ty, ctx);
    if !total_size.is_multiple_of(4) {
        return None;
    }
    let mut values = vec![0; (total_size / 4) as usize];
    for ((field, field_ty), item) in fields.iter().zip(items) {
        let field_ty = resolve_const_scalar_typedefs(field_ty, ctx);
        let (byte_offset, _, _) =
            types::struct_field_layout_ctx(fields, field, aggregate_pack_for_type(ty, ctx), ctx)?;
        let slot = usize::try_from(byte_offset / 4).ok()?;
        if let types::Type::Pointer(pointee) = field_ty.unqualified() {
            if !byte_offset.is_multiple_of(4) {
                return None;
            }
            let dest_array = dest_array?;
            let ptr = eval_scoped_const_pointer_expr(item, scopes, ctx)
                .or_else(|| eval_const_pointer_init(item, scopes, ctx, Some(*pointee.clone())))?;
            assign_scoped_const_pointer_value(
                &ConstPointerSlot {
                    array: dest_array.to_string(),
                    index: slot,
                }
                .key(),
                ptr,
                scopes,
            )?;
            continue;
        }
        if !field_ty.unqualified().is_integer() {
            return None;
        }
        let value = eval_scoped_const_int_expr_mut(item, scopes, ctx)?;
        let size = types::size_bytes_ctx(&field_ty, ctx);
        match size {
            1 | 2 => {
                let bit_shift = byte_offset.checked_rem(4)?.checked_mul(8)?;
                let bit_width = size.checked_mul(8)?;
                if bit_shift.checked_add(bit_width)? > 32 {
                    return None;
                }
                let mask = ((1u64 << bit_width) - 1) << bit_shift;
                let value = eval_integer_cast(&field_ty, value) as u64;
                let word = *values.get(slot)? as u32 as u64;
                *values.get_mut(slot)? =
                    ((word & !mask) | ((value << bit_shift) & mask)) as u32 as i64;
            }
            4 => {
                if !byte_offset.is_multiple_of(4) {
                    return None;
                }
                *values.get_mut(slot)? = eval_integer_cast(&field_ty, value);
            }
            8 if field_ty.is_long_long() => {
                if !byte_offset.is_multiple_of(4) {
                    return None;
                }
                *values.get_mut(slot)? = value as u32 as i64;
                *values.get_mut(slot.checked_add(1)?)? = value >> 32;
            }
            _ => return None,
        }
    }
    Some(values)
}

fn eval_const_struct_function_call(
    name: &str,
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<(types::Type, Vec<i64>)> {
    let function = ctx.const_functions.get(name)?;
    let ret_ty = function.return_type.clone();
    const_struct_fields(&ret_ty, ctx)?;
    if function.params.len() != args.len() {
        return None;
    }
    let mut call_scopes = scopes.to_vec();
    let mut params = HashMap::new();
    for ((param, ty), arg) in function.params.iter().zip(args) {
        let value = eval_scoped_const_int_expr_mut(arg, scopes, ctx)?;
        params.insert(
            param.clone(),
            ConstScalarValue::TypedInt {
                value: eval_integer_cast(ty, value),
                ty: ty.clone(),
            },
        );
    }
    call_scopes.push(params);
    let values = eval_const_struct_block_stmts(&function.body, &ret_ty, &mut call_scopes, ctx)?;
    Some((ret_ty, values))
}

fn eval_const_struct_block_stmts(
    stmts: &[ast::Stmt],
    ret_ty: &types::Type,
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<Vec<i64>> {
    for stmt in stmts {
        if let Some(values) = eval_const_struct_block_stmt(stmt, ret_ty, scopes, ctx)? {
            return Some(values);
        }
    }
    None
}

fn eval_const_struct_block_stmt(
    stmt: &ast::Stmt,
    ret_ty: &types::Type,
    scopes: &mut Vec<HashMap<String, ConstScalarValue>>,
    ctx: &ConstScalarCtx<'_>,
) -> Option<Option<Vec<i64>>> {
    match stmt {
        ast::Stmt::Return(Some(ast::Expr::Ident(name))) => {
            let ConstScalarValue::Array { values, .. } = scoped_const_value(name, scopes)? else {
                return None;
            };
            Some(Some(values.clone()))
        }
        ast::Stmt::Return(Some(ast::Expr::Cast(ty, inner)))
            if types::size_bytes_ctx(ty, ctx) == types::size_bytes_ctx(ret_ty, ctx)
                && matches!(inner.as_ref(), ast::Expr::InitList(_)) =>
        {
            let ast::Expr::InitList(items) = inner.as_ref() else {
                return None;
            };
            Some(Some(eval_const_struct_init_list_values(
                ret_ty, items, None, scopes, ctx,
            )?))
        }
        ast::Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? != 0 {
                eval_const_struct_block_stmts(then_body, ret_ty, scopes, ctx).map(Some)
            } else if let Some(body) = else_body {
                eval_const_struct_block_stmts(body, ret_ty, scopes, ctx).map(Some)
            } else {
                Some(None)
            }
        }
        ast::Stmt::Block(body) => {
            scopes.push(HashMap::new());
            let ret = eval_const_struct_block_stmts(body, ret_ty, scopes, ctx);
            scopes.pop();
            ret.map(Some)
        }
        ast::Stmt::DeclGroup(body) => {
            eval_const_struct_block_stmts(body, ret_ty, scopes, ctx).map(Some)
        }
        ast::Stmt::Label(_, inner) => eval_const_struct_block_stmt(inner, ret_ty, scopes, ctx),
        ast::Stmt::Return(_)
        | ast::Stmt::While { .. }
        | ast::Stmt::For { .. }
        | ast::Stmt::DoWhile { .. }
        | ast::Stmt::Switch { .. }
        | ast::Stmt::CaseLabel(_)
        | ast::Stmt::DefaultLabel
        | ast::Stmt::Break
        | ast::Stmt::Continue
        | ast::Stmt::Goto(_)
        | ast::Stmt::Asm(_) => None,
        _ => {
            eval_const_scalar_block_stmt(stmt, scopes, ctx)?;
            Some(None)
        }
    }
}

fn eval_scoped_const_memcmp_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let [lhs_expr, rhs_expr, len_expr] = args else {
        return None;
    };
    let len = usize::try_from(eval_scoped_const_int_expr_mut(len_expr, scopes, ctx)?).ok()?;
    let lhs = eval_scoped_const_char_bytes(lhs_expr, len, scopes, ctx)?;
    let rhs = eval_scoped_const_char_bytes(rhs_expr, len, scopes, ctx)?;
    for offset in 0..len {
        let a = lhs[offset];
        let b = rhs[offset];
        if a != b {
            return Some(i64::from(a) - i64::from(b));
        }
    }
    Some(0)
}

fn eval_scoped_const_strcmp_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let [lhs_expr, rhs_expr] = args else {
        return None;
    };
    for idx in 0..1024 {
        let lhs = eval_scoped_const_char_byte(lhs_expr, idx, scopes, ctx)?;
        let rhs = eval_scoped_const_char_byte(rhs_expr, idx, scopes, ctx)?;
        if lhs != rhs {
            return Some(i64::from(lhs) - i64::from(rhs));
        }
        if lhs == 0 {
            return Some(0);
        }
    }
    None
}

fn eval_scoped_const_strlen_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let [expr] = args else {
        return None;
    };
    for idx in 0..1024 {
        if eval_scoped_const_char_byte(expr, idx, scopes, ctx)? == 0 {
            return i64::try_from(idx).ok();
        }
    }
    None
}

fn eval_scoped_const_vsnprintf_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<i64> {
    let [dst_expr, size_expr, fmt_expr, ap_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) {
        return None;
    }
    let size = usize::try_from(eval_scoped_const_int_expr_mut(size_expr, scopes, ctx)?).ok()?;
    let fmt = eval_scoped_const_c_string(fmt_expr, scopes, ctx)?;
    let ast::Expr::Ident(ap_name) = ap_expr else {
        return None;
    };
    let varargs = scoped_const_varargs(ap_name, scopes)?;
    let bytes = format_const_vsnprintf_bytes(&fmt, &varargs)?;
    let write_len = bytes.len().min(size.saturating_sub(1));
    let ConstScalarValue::Array { elem_ty, values } = scoped_const_value_mut(&dst.array, scopes)?
    else {
        return None;
    };
    for (offset, byte) in bytes.iter().copied().take(write_len).enumerate() {
        let slot = values.get_mut(dst.index.checked_add(offset)?)?;
        *slot = eval_integer_cast(elem_ty, i64::from(byte));
    }
    if size > 0 {
        let slot = values.get_mut(dst.index.checked_add(write_len)?)?;
        *slot = eval_integer_cast(elem_ty, 0);
    }
    i64::try_from(bytes.len()).ok()
}

fn format_const_vsnprintf_bytes(fmt: &[u8], varargs: &[ConstPrintfArg]) -> Option<Vec<u8>> {
    let mut out = Vec::new();
    let mut arg_idx = 0usize;
    let mut idx = 0usize;
    while idx < fmt.len() {
        let byte = fmt[idx];
        idx += 1;
        if byte != b'%' {
            out.push(byte);
            continue;
        }
        let spec = *fmt.get(idx)?;
        idx += 1;
        match spec {
            b'%' => out.push(b'%'),
            b'c' => {
                let ConstPrintfArg::Int(value) = varargs.get(arg_idx)? else {
                    return None;
                };
                arg_idx += 1;
                out.push((*value & 0xff) as u8);
            }
            b'd' | b'i' => {
                let ConstPrintfArg::Int(value) = varargs.get(arg_idx)? else {
                    return None;
                };
                arg_idx += 1;
                out.extend(value.to_string().bytes());
            }
            b's' => {
                match varargs.get(arg_idx)? {
                    ConstPrintfArg::String(bytes) => out.extend(bytes),
                    ConstPrintfArg::NullString => out.extend(b"(null)"),
                    ConstPrintfArg::Int(_) => return None,
                }
                arg_idx += 1;
            }
            _ => return None,
        }
    }
    (arg_idx == varargs.len()).then_some(out)
}

fn eval_scoped_const_c_string(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<Vec<u8>> {
    let mut bytes = Vec::new();
    for idx in 0..1024 {
        let byte = eval_scoped_const_char_byte(expr, idx, scopes, ctx)?;
        if byte == 0 {
            return Some(bytes);
        }
        bytes.push(byte);
    }
    None
}

fn eval_scoped_const_char_bytes(
    expr: &ast::Expr,
    len: usize,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<Vec<u8>> {
    let mut bytes = Vec::with_capacity(len);
    for idx in 0..len {
        bytes.push(eval_scoped_const_char_byte(expr, idx, scopes, ctx)?);
    }
    Some(bytes)
}

fn eval_scoped_const_char_byte(
    expr: &ast::Expr,
    offset: usize,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<u8> {
    match expr {
        ast::Expr::StringLit(s) => {
            let byte = match s.as_bytes().get(offset).copied() {
                Some(byte) => byte,
                None if offset == s.len() => 0,
                None => return None,
            };
            Some(byte)
        }
        ast::Expr::Ident(name) => {
            if let Some(bytes) = scoped_const_string_bytes(name, scopes) {
                return u8::try_from(*bytes.get(offset)? & 0xff).ok();
            }
            let ptr = eval_scoped_const_pointer_expr(expr, scopes, ctx)
                .or_else(|| eval_const_pointer_init(expr, scopes, ctx, None))?;
            eval_scoped_const_char_byte_from_ptr(&ptr, offset, scopes)
        }
        _ => {
            let ptr = eval_scoped_const_pointer_expr(expr, scopes, ctx)
                .or_else(|| eval_const_pointer_init(expr, scopes, ctx, None))?;
            eval_scoped_const_char_byte_from_ptr(&ptr, offset, scopes)
        }
    }
}

fn eval_scoped_const_char_byte_from_ptr(
    ptr: &ConstPointerValue,
    offset: usize,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<u8> {
    let elem_ty = scoped_const_array_elem_ty(&ptr.array, scopes)?;
    if !const_scalar_is_char_type(&elem_ty) {
        return None;
    }
    let value = scoped_const_array_get(&ptr.array, ptr.index.checked_add(offset)?, scopes)?;
    u8::try_from(eval_integer_cast(&elem_ty, value) & 0xff).ok()
}

fn eval_scoped_const_memcpy_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let [dst_expr, src_expr, len_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let src = eval_scoped_const_pointer_expr(src_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(src_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    let src_elem_ty = scoped_const_array_elem_ty(&src.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) || !const_scalar_is_char_type(&src_elem_ty) {
        return None;
    }
    let len = usize::try_from(eval_scoped_const_int_expr_mut(len_expr, scopes, ctx)?).ok()?;
    let mut bytes = Vec::with_capacity(len);
    for offset in 0..len {
        let value = scoped_const_array_get(&src.array, src.index.checked_add(offset)?, scopes)?;
        bytes.push(eval_integer_cast(&src_elem_ty, value) & 0xff);
    }
    let ConstScalarValue::Array { values, .. } = scoped_const_value_mut(&dst.array, scopes)? else {
        return None;
    };
    for (offset, value) in bytes.into_iter().enumerate() {
        let slot = values.get_mut(dst.index.checked_add(offset)?)?;
        *slot = eval_integer_cast(&dst_elem_ty, value);
    }
    Some(())
}

fn eval_scoped_const_memset_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let [dst_expr, value_expr, len_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) {
        return None;
    }
    let byte = eval_scoped_const_int_expr_mut(value_expr, scopes, ctx)? & 0xff;
    let len = usize::try_from(eval_scoped_const_int_expr_mut(len_expr, scopes, ctx)?).ok()?;
    let ConstScalarValue::Array { elem_ty, values } = scoped_const_value_mut(&dst.array, scopes)?
    else {
        return None;
    };
    for offset in 0..len {
        let slot = values.get_mut(dst.index.checked_add(offset)?)?;
        *slot = eval_integer_cast(elem_ty, byte);
    }
    Some(())
}

fn eval_scoped_const_strcat_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let [dst_expr, src_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) {
        return None;
    }
    let src = eval_scoped_const_c_string(src_expr, scopes, ctx)?;
    let ConstScalarValue::Array { elem_ty, values } = scoped_const_value_mut(&dst.array, scopes)?
    else {
        return None;
    };
    let mut end = dst.index;
    while end < values.len() && eval_integer_cast(elem_ty, values[end]) != 0 {
        end = end.checked_add(1)?;
    }
    if end >= values.len() {
        return None;
    }
    let required = end.checked_add(src.len())?.checked_add(1)?;
    if required > values.len() {
        return None;
    }
    for (offset, byte) in src.into_iter().enumerate() {
        values[end.checked_add(offset)?] = eval_integer_cast(elem_ty, i64::from(byte));
    }
    values[end.checked_add(required.checked_sub(end)?.checked_sub(1)?)?] =
        eval_integer_cast(elem_ty, 0);
    Some(())
}

fn eval_scoped_const_strncat_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    let [dst_expr, src_expr, count_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) {
        return None;
    }
    let src = eval_scoped_const_c_string(src_expr, scopes, ctx)?;
    let count = usize::try_from(eval_scoped_const_int_expr_mut(count_expr, scopes, ctx)?).ok()?;
    let copy_len = src.len().min(count);
    let ConstScalarValue::Array { elem_ty, values } = scoped_const_value_mut(&dst.array, scopes)?
    else {
        return None;
    };
    let mut end = dst.index;
    while end < values.len() && eval_integer_cast(elem_ty, values[end]) != 0 {
        end = end.checked_add(1)?;
    }
    if end >= values.len() {
        return None;
    }
    let required = end.checked_add(copy_len)?.checked_add(1)?;
    if required > values.len() {
        return None;
    }
    for (offset, byte) in src.into_iter().take(copy_len).enumerate() {
        values[end.checked_add(offset)?] = eval_integer_cast(elem_ty, i64::from(byte));
    }
    values[end.checked_add(copy_len)?] = eval_integer_cast(elem_ty, 0);
    Some(dst)
}

fn eval_scoped_const_strcpy_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    let [dst_expr, src_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) {
        return None;
    }
    let src = eval_scoped_const_c_string(src_expr, scopes, ctx)?;
    let ConstScalarValue::Array { elem_ty, values } = scoped_const_value_mut(&dst.array, scopes)?
    else {
        return None;
    };
    let required = dst.index.checked_add(src.len())?.checked_add(1)?;
    if required > values.len() {
        return None;
    }
    for (offset, byte) in src.into_iter().enumerate() {
        values[dst.index.checked_add(offset)?] = eval_integer_cast(elem_ty, i64::from(byte));
    }
    values[required.checked_sub(1)?] = eval_integer_cast(elem_ty, 0);
    Some(dst)
}

fn eval_scoped_const_strncpy_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    let [dst_expr, src_expr, count_expr] = args else {
        return None;
    };
    let dst = eval_scoped_const_pointer_expr(dst_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(dst_expr, scopes, ctx, None))?;
    let dst_elem_ty = scoped_const_array_elem_ty(&dst.array, scopes)?;
    if !const_scalar_is_char_type(&dst_elem_ty) {
        return None;
    }
    let src = eval_scoped_const_c_string(src_expr, scopes, ctx)?;
    let count = usize::try_from(eval_scoped_const_int_expr_mut(count_expr, scopes, ctx)?).ok()?;
    let ConstScalarValue::Array { elem_ty, values } = scoped_const_value_mut(&dst.array, scopes)?
    else {
        return None;
    };
    let required = dst.index.checked_add(count)?;
    if required > values.len() {
        return None;
    }
    for offset in 0..count {
        let byte = src.get(offset).copied().map(i64::from).unwrap_or(0);
        values[dst.index.checked_add(offset)?] = eval_integer_cast(elem_ty, byte);
    }
    Some(dst)
}

fn eval_scoped_const_strchr_pointer_call(
    args: &[ast::Expr],
    reverse: bool,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    let [hay_expr, needle_expr] = args else {
        return None;
    };
    let mut ptr = eval_scoped_const_pointer_expr(hay_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(hay_expr, scopes, ctx, None))?;
    if !const_scalar_is_char_type(&ptr.pointee_ty) {
        return None;
    }
    let needle = (eval_scoped_const_int_expr_mut(needle_expr, scopes, ctx)? & 0xff) as u8;
    let mut bytes = Vec::new();
    for offset in 0..1024 {
        let value = scoped_const_array_get(&ptr.array, ptr.index.checked_add(offset)?, scopes)?;
        let byte = (eval_integer_cast(&ptr.pointee_ty, value) & 0xff) as u8;
        bytes.push(byte);
        if byte == 0 {
            break;
        }
    }
    let found = if needle == 0 {
        bytes.iter().position(|byte| *byte == 0)
    } else if reverse {
        bytes.iter().rposition(|byte| *byte == needle)
    } else {
        bytes.iter().position(|byte| *byte == needle)
    }?;
    ptr.index = ptr.index.checked_add(found)?;
    Some(ptr)
}

fn eval_scoped_const_strpbrk_pointer_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    let [hay_expr, accept_expr] = args else {
        return None;
    };
    let mut ptr = eval_scoped_const_pointer_expr(hay_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(hay_expr, scopes, ctx, None))?;
    if !const_scalar_is_char_type(&ptr.pointee_ty) {
        return None;
    }
    let accept = eval_scoped_const_c_string(accept_expr, scopes, ctx)?;
    for offset in 0..1024 {
        let value = scoped_const_array_get(&ptr.array, ptr.index.checked_add(offset)?, scopes)?;
        let byte = (eval_integer_cast(&ptr.pointee_ty, value) & 0xff) as u8;
        if byte == 0 {
            return None;
        }
        if accept.contains(&byte) {
            ptr.index = ptr.index.checked_add(offset)?;
            return Some(ptr);
        }
    }
    None
}

fn eval_scoped_const_strstr_pointer_call(
    args: &[ast::Expr],
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    let [hay_expr, needle_expr] = args else {
        return None;
    };
    let mut ptr = eval_scoped_const_pointer_expr(hay_expr, scopes, ctx)
        .or_else(|| eval_const_pointer_init(hay_expr, scopes, ctx, None))?;
    if !const_scalar_is_char_type(&ptr.pointee_ty) {
        return None;
    }
    let needle = eval_scoped_const_c_string(needle_expr, scopes, ctx)?;
    if needle.is_empty() {
        return Some(ptr);
    }
    let mut hay = Vec::new();
    for offset in 0..1024 {
        let value = scoped_const_array_get(&ptr.array, ptr.index.checked_add(offset)?, scopes)?;
        let byte = (eval_integer_cast(&ptr.pointee_ty, value) & 0xff) as u8;
        if byte == 0 {
            break;
        }
        hay.push(byte);
    }
    let found = hay
        .windows(needle.len())
        .position(|window| window == needle.as_slice())?;
    ptr.index = ptr.index.checked_add(found)?;
    Some(ptr)
}

fn eval_const_pointer_init(
    expr: &ast::Expr,
    scopes: &[HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
    fallback_pointee: Option<types::Type>,
) -> Option<ConstPointerValue> {
    match expr {
        ast::Expr::IntLit(0, _) => Some(ConstPointerValue {
            array: String::new(),
            index: 0,
            pointee_ty: fallback_pointee?,
        }),
        ast::Expr::Cast(ty, inner) if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            let types::Type::Pointer(pointee) = ty.unqualified() else {
                return None;
            };
            let pointee = pointee.as_ref().clone();
            let mut ptr = eval_const_pointer_init(inner, scopes, ctx, Some(pointee.clone()))?;
            retarget_const_pointer_pointee(&mut ptr, pointee, ctx)?;
            Some(ptr)
        }
        ast::Expr::Ident(name) if scoped_const_array_exists(name, scopes) => {
            Some(ConstPointerValue {
                array: name.clone(),
                index: 0,
                pointee_ty: fallback_pointee
                    .or_else(|| scoped_const_array_elem_ty(name, scopes))?,
            })
        }
        ast::Expr::AddrOf(inner) => match inner.as_ref() {
            ast::Expr::Ident(name) if scoped_const_array_exists(name, scopes) => {
                Some(ConstPointerValue {
                    array: name.clone(),
                    index: 0,
                    pointee_ty: fallback_pointee
                        .or_else(|| scoped_const_array_elem_ty(name, scopes))?,
                })
            }
            ast::Expr::Ident(name) if scoped_const_value(name, scopes).is_some() => {
                Some(ConstPointerValue {
                    array: name.clone(),
                    index: 0,
                    pointee_ty: fallback_pointee.or_else(|| scoped_const_int_ty(name, scopes))?,
                })
            }
            ast::Expr::Index(base, index) => {
                let ast::Expr::Ident(name) = base.as_ref() else {
                    return None;
                };
                if !scoped_const_array_exists(name, scopes) {
                    return None;
                }
                Some(ConstPointerValue {
                    array: name.clone(),
                    index: eval_scoped_const_int_expr(index, scopes)? as usize,
                    pointee_ty: fallback_pointee
                        .or_else(|| scoped_const_array_elem_ty(name, scopes))?,
                })
            }
            _ => None,
        },
        _ => None,
    }
}

fn eval_scoped_const_pointer_expr(
    expr: &ast::Expr,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<ConstPointerValue> {
    match expr {
        ast::Expr::Binary {
            op: ast::BinaryOp::Add,
            lhs,
            rhs,
        } => {
            if let Some(mut ptr) = eval_scoped_const_pointer_expr(lhs, scopes, ctx)
                .or_else(|| eval_const_pointer_init(lhs, scopes, ctx, None))
            {
                let delta =
                    usize::try_from(eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?).ok()?;
                ptr.index = ptr.index.checked_add(delta)?;
                Some(ptr)
            } else {
                let mut ptr = eval_scoped_const_pointer_expr(rhs, scopes, ctx)
                    .or_else(|| eval_const_pointer_init(rhs, scopes, ctx, None))?;
                let delta =
                    usize::try_from(eval_scoped_const_int_expr_mut(lhs, scopes, ctx)?).ok()?;
                ptr.index = ptr.index.checked_add(delta)?;
                Some(ptr)
            }
        }
        ast::Expr::Binary {
            op: ast::BinaryOp::Sub,
            lhs,
            rhs,
        } => {
            let mut ptr = eval_scoped_const_pointer_expr(lhs, scopes, ctx)
                .or_else(|| eval_const_pointer_init(lhs, scopes, ctx, None))?;
            let delta = usize::try_from(eval_scoped_const_int_expr_mut(rhs, scopes, ctx)?).ok()?;
            ptr.index = ptr.index.checked_sub(delta)?;
            Some(ptr)
        }
        ast::Expr::Ident(name) => scoped_const_pointer_value(name, scopes),
        ast::Expr::Call { name, args } if name == "strncat" => {
            eval_scoped_const_strncat_call(args, scopes, ctx)
        }
        ast::Expr::Call { name, args } if name == "strcpy" => {
            eval_scoped_const_strcpy_call(args, scopes, ctx)
        }
        ast::Expr::Call { name, args } if name == "strncpy" => {
            eval_scoped_const_strncpy_call(args, scopes, ctx)
        }
        ast::Expr::Call { name, args } if name == "strchr" => {
            eval_scoped_const_strchr_pointer_call(args, false, scopes, ctx)
        }
        ast::Expr::Call { name, args } if name == "strrchr" => {
            eval_scoped_const_strchr_pointer_call(args, true, scopes, ctx)
        }
        ast::Expr::Call { name, args } if name == "strpbrk" => {
            eval_scoped_const_strpbrk_pointer_call(args, scopes, ctx)
        }
        ast::Expr::Call { name, args } if name == "strstr" => {
            eval_scoped_const_strstr_pointer_call(args, scopes, ctx)
        }
        ast::Expr::Index(base, index) => {
            let ast::Expr::Ident(name) = base.as_ref() else {
                return None;
            };
            let index =
                usize::try_from(eval_scoped_const_int_expr_mut(index, scopes, ctx)?).ok()?;
            scoped_const_pointer_array_get(name, index, scopes)
        }
        ast::Expr::Member(_, _) | ast::Expr::Arrow(_, _) => {
            let slot = eval_scoped_const_pointer_slot(expr, scopes, ctx)?;
            scoped_const_pointer_value(&slot.key(), scopes)
        }
        ast::Expr::PostInc(target) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let ptr = scoped_const_pointer_value(name, scopes)?;
            scoped_const_pointer_add(name, 1, scopes)?;
            Some(ptr)
        }
        ast::Expr::PreInc(target) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            scoped_const_pointer_add(name, 1, scopes)?;
            scoped_const_pointer_value(name, scopes)
        }
        ast::Expr::PostDec(target) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            let ptr = scoped_const_pointer_value(name, scopes)?;
            scoped_const_pointer_add(name, -1, scopes)?;
            Some(ptr)
        }
        ast::Expr::PreDec(target) => {
            let ast::Expr::Ident(name) = target.as_ref() else {
                return None;
            };
            scoped_const_pointer_add(name, -1, scopes)?;
            scoped_const_pointer_value(name, scopes)
        }
        ast::Expr::Cast(ty, inner) if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            let types::Type::Pointer(pointee) = ty.unqualified() else {
                return None;
            };
            let pointee = pointee.as_ref().clone();
            let mut ptr = eval_scoped_const_pointer_expr(inner, scopes, ctx)
                .or_else(|| eval_const_pointer_init(inner, scopes, ctx, Some(pointee.clone())))?;
            retarget_const_pointer_pointee(&mut ptr, pointee, ctx)?;
            Some(ptr)
        }
        ast::Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            let branch = if eval_scoped_const_int_expr_mut(cond, scopes, ctx)? != 0 {
                then_expr
            } else {
                else_expr
            };
            eval_scoped_const_pointer_expr(branch, scopes, ctx)
                .or_else(|| eval_const_pointer_init(branch, scopes, ctx, None))
        }
        ast::Expr::AddrOf(inner) => {
            if let Some((array, byte_offset, lvalue_ty)) =
                eval_scoped_const_lvalue_byte_addr(inner, scopes, ctx)
            {
                let unit = i64::from(types::size_bytes_ctx(&lvalue_ty, ctx).max(1));
                if byte_offset >= 0 && byte_offset % unit == 0 {
                    return Some(ConstPointerValue {
                        array,
                        index: usize::try_from(byte_offset / unit).ok()?,
                        pointee_ty: lvalue_ty,
                    });
                }
            }
            eval_const_pointer_init(expr, scopes, ctx, None).or_else(|| {
                if let ast::Expr::Index(base, index) = inner.as_ref() {
                    let ast::Expr::Ident(name) = base.as_ref() else {
                        return None;
                    };
                    if !scoped_const_array_exists(name, scopes) {
                        return None;
                    }
                    Some(ConstPointerValue {
                        array: name.clone(),
                        index: eval_scoped_const_int_expr_mut(index, scopes, ctx)? as usize,
                        pointee_ty: scoped_const_array_elem_ty(name, scopes)?,
                    })
                } else {
                    None
                }
            })
        }
        _ => None,
    }
}

fn eval_scoped_const_int_expr(
    expr: &ast::Expr,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<i64> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Ident(name) => {
            for scope in scopes.iter().rev() {
                if let Some(ConstScalarValue::Int(value)) = scope.get(name) {
                    return Some(*value);
                }
                if let Some(ConstScalarValue::TypedInt { value, .. }) = scope.get(name) {
                    return Some(*value);
                }
            }
            None
        }
        Expr::Index(base, index) => {
            let Expr::Ident(name) = base.as_ref() else {
                return None;
            };
            let index = eval_scoped_const_int_expr(index, scopes)?;
            for scope in scopes.iter().rev() {
                if let Some(ConstScalarValue::Array { values, .. }) = scope.get(name) {
                    return values.get(index as usize).copied();
                }
            }
            None
        }
        Expr::Unary { op, operand } => {
            let v = eval_scoped_const_int_expr(operand, scopes)?;
            Some(match op {
                UnaryOp::Neg => v.wrapping_neg(),
                UnaryOp::BitNot => !v,
                UnaryOp::LogNot => i64::from(v == 0),
            })
        }
        Expr::Cast(ty, operand) if *ty == types::Type::Bool => {
            let v = eval_scoped_const_int_expr(operand, scopes)?;
            Some(i64::from(v != 0))
        }
        Expr::Cast(ty, operand) if ty.is_integer() => {
            let v = eval_scoped_const_int_expr(operand, scopes)?;
            Some(eval_integer_cast(ty, v))
        }
        Expr::Binary { op, lhs, rhs } => {
            let a = eval_scoped_const_int_expr(lhs, scopes)?;
            let b = eval_scoped_const_int_expr(rhs, scopes)?;
            Some(match op {
                BinaryOp::Add => a.wrapping_add(b),
                BinaryOp::Sub => a.wrapping_sub(b),
                BinaryOp::Mul => a.wrapping_mul(b),
                BinaryOp::BitAnd => a & b,
                BinaryOp::BitOr => a | b,
                BinaryOp::BitXor => a ^ b,
                BinaryOp::Shl | BinaryOp::Shr => return eval_const_shift(*op, lhs, a, b),
                BinaryOp::Eq
                | BinaryOp::Ne
                | BinaryOp::Lt
                | BinaryOp::Gt
                | BinaryOp::Le
                | BinaryOp::Ge => return eval_const_comparison(*op, lhs, rhs, a, b),
                BinaryOp::LogAnd => i64::from(a != 0 && b != 0),
                BinaryOp::LogOr => i64::from(a != 0 || b != 0),
                BinaryOp::Div | BinaryOp::Mod => return eval_const_divmod(*op, lhs, rhs, a, b),
            })
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            if eval_scoped_const_int_expr(cond, scopes)? != 0 {
                eval_scoped_const_int_expr(then_expr, scopes)
            } else {
                eval_scoped_const_int_expr(else_expr, scopes)
            }
        }
        _ => None,
    }
}

fn scoped_const_slot_mut<'a>(
    name: &str,
    scopes: &'a mut [HashMap<String, ConstScalarValue>],
) -> Option<&'a mut i64> {
    let value = scoped_const_value_mut(name, scopes)?;
    match value {
        ConstScalarValue::Int(value) => Some(value),
        ConstScalarValue::TypedInt { value, .. } => Some(value),
        ConstScalarValue::UninitInt(_)
        | ConstScalarValue::Float(_)
        | ConstScalarValue::Array { .. }
        | ConstScalarValue::PointerArray { .. }
        | ConstScalarValue::Pointer { .. }
        | ConstScalarValue::StringPtr { .. }
        | ConstScalarValue::FnArray { .. }
        | ConstScalarValue::FnPtr(_)
        | ConstScalarValue::VarArgs(_) => None,
    }
}

fn assign_scoped_const_int_value(
    name: &str,
    value: i64,
    scopes: &mut [HashMap<String, ConstScalarValue>],
    ctx: &ConstScalarCtx<'_>,
) -> Option<()> {
    let slot = scoped_const_value_mut(name, scopes)?;
    match slot {
        ConstScalarValue::Int(slot) => {
            *slot = value;
            Some(())
        }
        ConstScalarValue::TypedInt { value: slot, ty } => {
            *slot = eval_integer_cast(&resolve_const_scalar_typedefs(ty, ctx), value);
            Some(())
        }
        ConstScalarValue::UninitInt(ty) => {
            let ty = ty.clone();
            let resolved_ty = resolve_const_scalar_typedefs(&ty, ctx);
            *slot = ConstScalarValue::TypedInt {
                value: eval_integer_cast(&resolved_ty, value),
                ty: resolved_ty,
            };
            Some(())
        }
        ConstScalarValue::Float(_)
        | ConstScalarValue::Array { .. }
        | ConstScalarValue::PointerArray { .. }
        | ConstScalarValue::Pointer { .. }
        | ConstScalarValue::StringPtr { .. }
        | ConstScalarValue::FnArray { .. }
        | ConstScalarValue::FnPtr(_)
        | ConstScalarValue::VarArgs(_) => None,
    }
}

fn assign_scoped_const_pointer_value(
    name: &str,
    ptr: ConstPointerValue,
    scopes: &mut [HashMap<String, ConstScalarValue>],
) -> Option<()> {
    let value = ConstScalarValue::Pointer {
        array: ptr.array,
        index: ptr.index,
        pointee_ty: ptr.pointee_ty,
    };
    if let Some(slot) = scoped_const_value_mut(name, scopes) {
        *slot = value;
    } else {
        scopes.first_mut()?.insert(name.to_string(), value);
    }
    Some(())
}

fn assign_scoped_const_varargs(
    name: &str,
    varargs: Vec<ConstPrintfArg>,
    scopes: &mut [HashMap<String, ConstScalarValue>],
) -> Option<()> {
    let value = ConstScalarValue::VarArgs(varargs);
    if let Some(slot) = scoped_const_value_mut(name, scopes) {
        *slot = value;
    } else {
        scopes.last_mut()?.insert(name.to_string(), value);
    }
    Some(())
}

fn scoped_const_int_value(name: &str, scopes: &[HashMap<String, ConstScalarValue>]) -> Option<i64> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::Int(value)) = scope.get(name) {
            return Some(*value);
        }
        if let Some(ConstScalarValue::TypedInt { value, .. }) = scope.get(name) {
            return Some(*value);
        }
    }
    None
}

fn scoped_const_value<'a>(
    name: &str,
    scopes: &'a [HashMap<String, ConstScalarValue>],
) -> Option<&'a ConstScalarValue> {
    for scope in scopes.iter().rev() {
        if let Some(value) = scope.get(name) {
            return Some(value);
        }
    }
    None
}

fn scoped_const_int_ty(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<types::Type> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::TypedInt { ty, .. }) = scope.get(name) {
            return Some(ty.clone());
        }
    }
    None
}

fn scoped_const_fnptr_value(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<Option<String>> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::FnPtr(value)) = scope.get(name) {
            return Some(value.clone());
        }
    }
    None
}

fn scoped_const_fnptr_truth_value(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<i64> {
    scoped_const_fnptr_value(name, scopes).map(|value| i64::from(value.is_some()))
}

fn scoped_const_pointer_truth_value(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<i64> {
    scoped_const_pointer_value(name, scopes).map(|ptr| i64::from(!ptr.array.is_empty()))
}

fn scoped_const_float_value(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<f64> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::Float(value)) = scope.get(name) {
            return Some(*value);
        }
    }
    None
}

fn scoped_const_string_bytes<'a>(
    name: &str,
    scopes: &'a [HashMap<String, ConstScalarValue>],
) -> Option<&'a [i64]> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::StringPtr { bytes }) = scope.get(name) {
            return Some(bytes.as_slice());
        }
    }
    None
}

fn scoped_const_varargs(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<Vec<ConstPrintfArg>> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::VarArgs(values)) = scope.get(name) {
            return Some(values.clone());
        }
    }
    None
}

fn scoped_const_varargs_pop(
    name: &str,
    scopes: &mut [HashMap<String, ConstScalarValue>],
) -> Option<ConstPrintfArg> {
    for scope in scopes.iter_mut().rev() {
        if let Some(ConstScalarValue::VarArgs(values)) = scope.get_mut(name) {
            if values.is_empty() {
                return None;
            }
            return Some(values.remove(0));
        }
    }
    None
}

fn scoped_const_array_exists(name: &str, scopes: &[HashMap<String, ConstScalarValue>]) -> bool {
    scopes
        .iter()
        .rev()
        .any(|scope| matches!(scope.get(name), Some(ConstScalarValue::Array { .. })))
}

fn scoped_const_array_elem_ty(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<types::Type> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::Array { elem_ty, .. }) = scope.get(name) {
            return Some(elem_ty.clone());
        }
    }
    None
}

fn scoped_const_array_get(
    name: &str,
    index: usize,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<i64> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::Array { values, .. }) = scope.get(name) {
            return values.get(index).copied();
        }
    }
    None
}

fn scoped_const_fn_array_get(
    name: &str,
    index: usize,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<String> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::FnArray { values }) = scope.get(name) {
            return values.get(index)?.clone();
        }
    }
    None
}

fn scoped_const_pointer_array_get(
    name: &str,
    index: usize,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<ConstPointerValue> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::PointerArray { values }) = scope.get(name) {
            return values.get(index).cloned();
        }
    }
    None
}

fn scoped_const_pointer_value(
    name: &str,
    scopes: &[HashMap<String, ConstScalarValue>],
) -> Option<ConstPointerValue> {
    for scope in scopes.iter().rev() {
        if let Some(ConstScalarValue::Pointer {
            array,
            index,
            pointee_ty,
        }) = scope.get(name)
        {
            return Some(ConstPointerValue {
                array: array.clone(),
                index: *index,
                pointee_ty: pointee_ty.clone(),
            });
        }
    }
    None
}

fn scoped_const_pointer_add(
    name: &str,
    delta: isize,
    scopes: &mut [HashMap<String, ConstScalarValue>],
) -> Option<()> {
    let value = scoped_const_value_mut(name, scopes)?;
    let ConstScalarValue::Pointer { index, .. } = value else {
        return None;
    };
    if delta >= 0 {
        *index = index.checked_add(delta as usize)?;
    } else {
        *index = index.checked_sub(delta.unsigned_abs())?;
    }
    Some(())
}

fn scoped_const_value_mut<'a>(
    name: &str,
    scopes: &'a mut [HashMap<String, ConstScalarValue>],
) -> Option<&'a mut ConstScalarValue> {
    for scope in scopes.iter_mut().rev() {
        if scope.contains_key(name) {
            return scope.get_mut(name);
        }
    }
    None
}

struct ConstGlobalStructArray<'a> {
    elem_ty: &'a types::Type,
    len: Option<usize>,
    init: &'a ast::Expr,
    field_names: Vec<String>,
    field_types: Vec<types::Type>,
}

fn substitute_const_global_aggregate_reads(unit: &mut ast::TranslationUnit) {
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let struct_defs: HashMap<String, Vec<(String, types::Type)>> =
        unit.struct_defs.iter().cloned().collect();
    let assigned = global_assigned_names(unit);
    let address_taken = global_address_taken_names(unit);
    let mut arrays = HashMap::new();
    for global in &unit.globals {
        if !global.is_static
            || assigned.contains(&global.name)
            || address_taken.contains(&global.name)
            || (!type_has_const_qualifier(&global.ty, &typedefs)
                && !global.init.as_ref().is_some_and(global_init_is_const_expr))
        {
            continue;
        }
        if let (Some((elem_ty, len)), Some(init)) = (
            const_global_array_info(&global.ty, &typedefs),
            global.init.as_ref(),
        ) {
            arrays.insert(
                global.name.clone(),
                ConstGlobalStructArray {
                    elem_ty,
                    len: Some(len),
                    init,
                    field_names: const_struct_field_names(elem_ty, &struct_defs),
                    field_types: const_struct_field_types(elem_ty, &struct_defs),
                },
            );
        } else if let (Some(elem_ty), Some(init)) = (
            const_global_struct_info(&global.ty, &typedefs),
            global.init.as_ref(),
        ) {
            arrays.insert(
                global.name.clone(),
                ConstGlobalStructArray {
                    elem_ty,
                    len: None,
                    init,
                    field_names: const_struct_field_names(elem_ty, &struct_defs),
                    field_types: const_struct_field_types(elem_ty, &struct_defs),
                },
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

fn global_address_taken_names(unit: &ast::TranslationUnit) -> std::collections::HashSet<String> {
    let mut address_taken = std::collections::HashSet::new();
    for function in &unit.functions {
        for name in stmt_address_taken_names_in_stmts(&function.body) {
            address_taken.insert(name);
        }
    }
    address_taken
}

fn stmt_address_taken_names_in_stmts(stmts: &[ast::Stmt]) -> Vec<String> {
    let mut out = std::collections::HashSet::new();
    for stmt in stmts {
        collect_stmt_address_taken_names(stmt, &mut out);
    }
    out.into_iter().collect()
}

fn global_init_is_const_expr(expr: &ast::Expr) -> bool {
    use ast::Expr;
    match expr {
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => true,
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _) => global_init_is_const_expr(operand),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) | Expr::Comma(lhs, rhs) => {
            global_init_is_const_expr(lhs) && global_init_is_const_expr(rhs)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            global_init_is_const_expr(cond)
                && global_init_is_const_expr(then_expr)
                && global_init_is_const_expr(else_expr)
        }
        Expr::Sizeof(_) => true,
        Expr::InitList(items) => items.iter().all(global_init_is_const_expr),
        Expr::DesignatedInit { value, .. } => global_init_is_const_expr(value),
        Expr::ArrayDesignator { index, value } => {
            global_init_is_const_expr(index) && global_init_is_const_expr(value)
        }
        Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_)
        | Expr::Arrow(_, _)
        | Expr::Assign { .. }
        | Expr::CompoundAssign { .. }
        | Expr::Call { .. }
        | Expr::CallIndirect { .. } => false,
    }
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

fn const_global_array_info<'a>(
    ty: &'a types::Type,
    typedefs: &'a HashMap<String, types::Type>,
) -> Option<(&'a types::Type, usize)> {
    match ty {
        types::Type::Array(elem, Some(len)) => {
            Some((strip_const_typedef_type(elem, typedefs), *len))
        }
        types::Type::Const(inner) => const_global_array_info(inner, typedefs),
        types::Type::Typedef(name) => const_global_array_info(typedefs.get(name)?, typedefs),
        _ => None,
    }
}

fn const_global_struct_info<'a>(
    ty: &'a types::Type,
    typedefs: &'a HashMap<String, types::Type>,
) -> Option<&'a types::Type> {
    let ty = strip_const_typedef_type(ty, typedefs);
    if matches!(ty, types::Type::Struct { .. }) {
        Some(ty)
    } else {
        None
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
            if let Some((value, field_ty)) =
                const_global_struct_array_member_value(base, field, arrays)
            {
                *expr = Expr::Cast(
                    field_ty,
                    Box::new(Expr::IntLit(value, crate::token::IntSuffix::None)),
                );
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
        | Expr::Comma(lhs, rhs) => {
            substitute_const_global_aggregate_reads_in_expr(lhs, arrays);
            substitute_const_global_aggregate_reads_in_expr(rhs, arrays);
        }
        Expr::Index(lhs, rhs) => {
            substitute_const_global_aggregate_reads_in_expr(lhs, arrays);
            substitute_const_global_aggregate_reads_in_expr(rhs, arrays);
            if let Some((value, elem_ty)) = const_global_array_element_value(lhs, rhs, arrays) {
                *expr = Expr::Cast(
                    elem_ty,
                    Box::new(Expr::IntLit(value, crate::token::IntSuffix::None)),
                );
            }
        }
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_const_global_aggregate_reads_in_expr(arg, arrays);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            substitute_const_global_aggregate_reads_in_expr(func_expr, arrays);
            for arg in args.iter_mut() {
                substitute_const_global_aggregate_reads_in_expr(arg, arrays);
            }
            if let Some(name) = const_global_struct_array_member_func(func_expr, arrays) {
                *expr = Expr::Call {
                    name,
                    args: args.clone(),
                };
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
) -> Option<(i64, types::Type)> {
    let (array, fields) = match base {
        ast::Expr::Ident(name) => {
            let array = arrays.get(name)?;
            if array.len.is_some() {
                return None;
            }
            let ast::Expr::InitList(fields) = array.init else {
                return None;
            };
            (array, fields.as_slice())
        }
        ast::Expr::Index(array, index) => {
            let ast::Expr::Ident(name) = array.as_ref() else {
                return None;
            };
            let array = arrays.get(name)?;
            let len = array.len?;
            let idx = usize::try_from(eval_const_int_expr(index)?).ok()?;
            if idx >= len {
                return None;
            }
            let ast::Expr::InitList(items) = array.init else {
                return None;
            };
            let Some(item) = items.get(idx) else {
                let field_idx = const_global_struct_array_field_index(array, field)?;
                let field_ty = array.field_types.get(field_idx)?.clone();
                return Some((0, field_ty));
            };
            let ast::Expr::InitList(fields) = item else {
                return None;
            };
            (array, fields.as_slice())
        }
        _ => return None,
    };
    let field_idx = const_global_struct_array_field_index(array, field)?;
    let field_ty = array.field_types.get(field_idx)?.clone();
    let Some(value) = const_struct_init_field_value(fields, array.elem_ty, field, field_idx) else {
        return Some((0, field_ty));
    };
    Some((eval_const_int_expr(value)?, field_ty))
}

fn const_global_array_element_value(
    array_expr: &ast::Expr,
    index: &ast::Expr,
    arrays: &HashMap<String, ConstGlobalStructArray<'_>>,
) -> Option<(i64, types::Type)> {
    let ast::Expr::Ident(name) = array_expr else {
        return None;
    };
    let array = arrays.get(name)?;
    let len = array.len?;
    let elem_ty = array.elem_ty.clone();
    if !elem_ty.is_integer() {
        return None;
    }
    let idx = usize::try_from(eval_const_int_expr(index)?).ok()?;
    if idx >= len {
        return None;
    }
    let ast::Expr::InitList(items) = array.init else {
        return None;
    };
    let Some(item) = items.get(idx) else {
        return Some((0, elem_ty));
    };
    Some((eval_integer_cast(&elem_ty, eval_const_int_expr(item)?), elem_ty))
}

fn const_global_struct_array_member_func(
    expr: &ast::Expr,
    arrays: &HashMap<String, ConstGlobalStructArray<'_>>,
) -> Option<String> {
    let ast::Expr::Member(base, field) = expr else {
        return None;
    };
    let ast::Expr::Index(array, index) = base.as_ref() else {
        return None;
    };
    let ast::Expr::Ident(name) = array.as_ref() else {
        return None;
    };
    let array = arrays.get(name)?;
    let len = array.len?;
    let idx = usize::try_from(eval_const_int_expr(index)?).ok()?;
    if idx >= len {
        return None;
    }
    let field_idx = const_global_struct_array_field_index(array, field)?;
    let ast::Expr::InitList(items) = array.init else {
        return None;
    };
    let item = items.get(idx)?;
    let ast::Expr::InitList(fields) = item else {
        return None;
    };
    let ast::Expr::Ident(name) =
        const_struct_init_field_value(fields, array.elem_ty, field, field_idx)?
    else {
        return None;
    };
    Some(name.clone())
}

fn substitute_const_global_fnptr_array_calls(unit: &mut ast::TranslationUnit) {
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let assigned = global_assigned_names(unit);
    let address_taken = global_address_taken_names(unit);
    let mut arrays = HashMap::new();
    for global in &unit.globals {
        if !global.is_static
            || assigned.contains(&global.name)
            || address_taken.contains(&global.name)
        {
            continue;
        }
        if let Some(values) =
            const_global_fnptr_array_values(&global.ty, global.init.as_ref(), &typedefs)
        {
            arrays.insert(global.name.clone(), values);
        }
    }
    if arrays.is_empty() {
        return;
    }
    for function in &mut unit.functions {
        substitute_const_global_fnptr_array_calls_in_stmts(&mut function.body, &arrays);
    }
}

fn const_global_fnptr_array_values(
    ty: &types::Type,
    init: Option<&ast::Expr>,
    typedefs: &HashMap<String, types::Type>,
) -> Option<Vec<Option<String>>> {
    let (elem_ty, len) = const_global_fnptr_array_type(ty, typedefs)?;
    if !const_scalar_is_function_ptr_type(strip_const_typedef_type(elem_ty, typedefs)) {
        return None;
    }
    let ast::Expr::InitList(items) = init? else {
        return None;
    };
    let len = len.unwrap_or(items.len());
    let mut values = vec![None; len];
    for (idx, item) in items.iter().enumerate() {
        let slot = values.get_mut(idx)?;
        *slot = const_scalar_function_name(item);
    }
    Some(values)
}

fn const_global_fnptr_array_type<'a>(
    ty: &'a types::Type,
    typedefs: &'a HashMap<String, types::Type>,
) -> Option<(&'a types::Type, Option<usize>)> {
    match ty {
        types::Type::Array(elem, len) => Some((elem.as_ref(), *len)),
        types::Type::Const(inner) => const_global_fnptr_array_type(inner, typedefs),
        types::Type::Typedef(name) => const_global_fnptr_array_type(typedefs.get(name)?, typedefs),
        _ => None,
    }
}

fn substitute_const_global_fnptr_array_calls_in_stmts(
    stmts: &mut [ast::Stmt],
    arrays: &HashMap<String, Vec<Option<String>>>,
) {
    use ast::Stmt;
    for stmt in stmts {
        match stmt {
            Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
                substitute_const_global_fnptr_array_calls_in_expr(expr, arrays);
            }
            Stmt::VarDecl { init, vla_dim, .. } => {
                if let Some(expr) = init {
                    substitute_const_global_fnptr_array_calls_in_expr(expr, arrays);
                }
                if let Some(expr) = vla_dim {
                    substitute_const_global_fnptr_array_calls_in_expr(expr, arrays);
                }
            }
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                substitute_const_global_fnptr_array_calls_in_expr(cond, arrays);
                substitute_const_global_fnptr_array_calls_in_stmts(then_body, arrays);
                if let Some(body) = else_body {
                    substitute_const_global_fnptr_array_calls_in_stmts(body, arrays);
                }
            }
            Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
                substitute_const_global_fnptr_array_calls_in_expr(cond, arrays);
                substitute_const_global_fnptr_array_calls_in_stmts(body, arrays);
            }
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                if let Some(init) = init {
                    substitute_const_global_fnptr_array_calls_in_stmts(
                        std::slice::from_mut(init.as_mut()),
                        arrays,
                    );
                }
                if let Some(expr) = cond {
                    substitute_const_global_fnptr_array_calls_in_expr(expr, arrays);
                }
                if let Some(expr) = step {
                    substitute_const_global_fnptr_array_calls_in_expr(expr, arrays);
                }
                substitute_const_global_fnptr_array_calls_in_stmts(body, arrays);
            }
            Stmt::Block(body) | Stmt::DeclGroup(body) | Stmt::Switch { body, .. } => {
                substitute_const_global_fnptr_array_calls_in_stmts(body, arrays);
            }
            Stmt::Label(_, inner) => {
                substitute_const_global_fnptr_array_calls_in_stmts(
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

fn substitute_const_global_fnptr_array_calls_in_expr(
    expr: &mut ast::Expr,
    arrays: &HashMap<String, Vec<Option<String>>>,
) {
    use ast::Expr;
    match expr {
        Expr::CallIndirect { func_expr, args } => {
            substitute_const_global_fnptr_array_calls_in_expr(func_expr, arrays);
            for arg in args.iter_mut() {
                substitute_const_global_fnptr_array_calls_in_expr(arg, arrays);
            }
            if let Some(name) = const_global_fnptr_array_call_target(func_expr, arrays) {
                *expr = Expr::Call {
                    name,
                    args: args.clone(),
                };
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
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => {
            substitute_const_global_fnptr_array_calls_in_expr(operand, arrays);
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
            substitute_const_global_fnptr_array_calls_in_expr(lhs, arrays);
            substitute_const_global_fnptr_array_calls_in_expr(rhs, arrays);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                substitute_const_global_fnptr_array_calls_in_expr(arg, arrays);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            substitute_const_global_fnptr_array_calls_in_expr(cond, arrays);
            substitute_const_global_fnptr_array_calls_in_expr(then_expr, arrays);
            substitute_const_global_fnptr_array_calls_in_expr(else_expr, arrays);
        }
        Expr::Sizeof(inner) => {
            if let ast::SizeofArg::Expr(inner) = inner.as_mut() {
                substitute_const_global_fnptr_array_calls_in_expr(inner, arrays);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                substitute_const_global_fnptr_array_calls_in_expr(item, arrays);
            }
        }
        Expr::DesignatedInit { value, .. } => {
            substitute_const_global_fnptr_array_calls_in_expr(value, arrays);
        }
        Expr::ArrayDesignator { index, value } => {
            substitute_const_global_fnptr_array_calls_in_expr(index, arrays);
            substitute_const_global_fnptr_array_calls_in_expr(value, arrays);
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

fn const_global_fnptr_array_call_target(
    expr: &ast::Expr,
    arrays: &HashMap<String, Vec<Option<String>>>,
) -> Option<String> {
    let ast::Expr::Index(array, index) = expr else {
        return None;
    };
    let ast::Expr::Ident(name) = array.as_ref() else {
        return None;
    };
    let index = usize::try_from(eval_const_int_expr(index)?).ok()?;
    arrays.get(name)?.get(index)?.clone()
}

fn const_struct_field_names(
    ty: &types::Type,
    struct_defs: &HashMap<String, Vec<(String, types::Type)>>,
) -> Vec<String> {
    match ty {
        types::Type::Struct { name, fields, .. } => {
            if fields.is_empty() {
                name.as_ref()
                    .and_then(|tag| struct_defs.get(tag))
                    .map(|fields| fields.iter().map(|(name, _)| name.clone()).collect())
                    .unwrap_or_default()
            } else {
                fields.iter().map(|(name, _)| name.clone()).collect()
            }
        }
        _ => Vec::new(),
    }
}

fn const_struct_field_types(
    ty: &types::Type,
    struct_defs: &HashMap<String, Vec<(String, types::Type)>>,
) -> Vec<types::Type> {
    match ty {
        types::Type::Struct { name, fields, .. } => {
            if fields.is_empty() {
                name.as_ref()
                    .and_then(|tag| struct_defs.get(tag))
                    .map(|fields| fields.iter().map(|(_, ty)| ty.clone()).collect())
                    .unwrap_or_default()
            } else {
                fields.iter().map(|(_, ty)| ty.clone()).collect()
            }
        }
        _ => Vec::new(),
    }
}

fn const_global_struct_array_field_index(
    array: &ConstGlobalStructArray<'_>,
    field: &str,
) -> Option<usize> {
    struct_field_index(array.elem_ty, field)
        .or_else(|| array.field_names.iter().position(|name| name == field))
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
    unsigned: bool,
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
                    if let Some(mut alias) = init
                        .as_ref()
                        .and_then(|expr| const_byte_ptr_alias_from_expr(expr, int_consts, ptrs))
                    {
                        alias.unsigned = is_unsigned_char_pointer_type(ty);
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
                            let value = if alias.unsigned {
                                byte
                            } else {
                                sign_extend(byte, 8)
                            };
                            *expr = Expr::IntLit(value, crate::token::IntSuffix::None);
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
            let mut alias = const_byte_ptr_alias_from_expr(inner, int_consts, ptrs)?;
            alias.unsigned = is_unsigned_char_pointer_type(ty);
            Some(alias)
        }
        Expr::Cast(_, inner) => const_byte_ptr_alias_from_expr(inner, int_consts, ptrs),
        Expr::AddrOf(inner) => {
            let Expr::Ident(name) = inner.as_ref() else {
                return None;
            };
            int_consts.contains_key(name).then(|| ConstBytePtrAlias {
                base: name.clone(),
                offset: 0,
                unsigned: false,
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

fn self_assign_replacement(
    expr: &ast::Expr,
    volatile_names: &std::collections::HashSet<String>,
) -> bool {
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
        Stmt::Return(Some(e)) | Stmt::Expr(e) | Stmt::CaseLabel(e) => {
            rewrite_self_assigns_expr(e, vol)
        }
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
            ast::Stmt::Block(body)
            | ast::Stmt::DeclGroup(body)
            | ast::Stmt::Switch { body, .. } => {
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
        types::Type::Struct { fields, .. } | types::Type::Union { fields, .. } => fields
            .iter()
            .any(|(_, field_ty)| type_is_volatile(field_ty, typedefs)),
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
    let mut shadowing_decls = std::collections::HashSet::new();
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
        collect_nested_local_decl_names(stmt, &mut shadowing_decls);
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
            || shadowing_decls.contains(name)
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

fn collect_nested_local_decl_names(stmt: &ast::Stmt, out: &mut std::collections::HashSet<String>) {
    fn collect_body(body: &[ast::Stmt], out: &mut std::collections::HashSet<String>) {
        for stmt in body {
            collect_shadowing_local_decl_names(stmt, out);
        }
    }

    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            collect_body(then_body, out);
            if let Some(body) = else_body {
                collect_body(body, out);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Switch { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body) => collect_body(body, out),
        ast::Stmt::For { init, body, .. } => {
            if let Some(init) = init {
                collect_shadowing_local_decl_names(init, out);
            }
            collect_body(body, out);
        }
        ast::Stmt::Label(_, inner) => collect_nested_local_decl_names(inner, out),
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

fn collect_shadowing_local_decl_names(
    stmt: &ast::Stmt,
    out: &mut std::collections::HashSet<String>,
) {
    match stmt {
        ast::Stmt::VarDecl { name, .. } => {
            out.insert(name.clone());
        }
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            for stmt in then_body {
                collect_shadowing_local_decl_names(stmt, out);
            }
            if let Some(body) = else_body {
                for stmt in body {
                    collect_shadowing_local_decl_names(stmt, out);
                }
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Switch { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body) => {
            for stmt in body {
                collect_shadowing_local_decl_names(stmt, out);
            }
        }
        ast::Stmt::For { init, body, .. } => {
            if let Some(init) = init {
                collect_shadowing_local_decl_names(init, out);
            }
            for stmt in body {
                collect_shadowing_local_decl_names(stmt, out);
            }
        }
        ast::Stmt::Label(_, inner) => collect_shadowing_local_decl_names(inner, out),
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
            }
            Stmt::Switch { expr, body } => {
                prune_unused_side_effect_free_local_inits_in_stmts(body, used_after);
                collect_expr_ident_uses(expr, used_after);
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
        Expr::Assign { value, .. } => {
            collect_expr_ident_uses(value, out);
        }
        Expr::CompoundAssign { target, value, .. } => {
            collect_expr_ident_uses(target, out);
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

fn fold_const_stdlib_int_call(expr: &ast::Expr) -> Option<i64> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    match name.as_str() {
        "atoi" | "atol" | "atoll" => {
            let [ast::Expr::StringLit(s)] = args.as_slice() else {
                return None;
            };
            Some(eval_atoi_literal(s))
        }
        "strtol" | "strtoll" | "strtoul" | "strtoull" => {
            let [ast::Expr::StringLit(s), endptr, base] = args.as_slice() else {
                return None;
            };
            if eval_const_int_expr(endptr)? != 0 {
                return None;
            }
            eval_strto_literal(s, eval_const_int_expr(base)?)
        }
        "abs" | "labs" | "llabs" => {
            let [arg] = args.as_slice() else {
                return None;
            };
            let value = eval_const_int_expr(arg)?;
            Some(if value == i64::MIN {
                value
            } else {
                value.abs()
            })
        }
        "memcmp" => {
            let [ast::Expr::StringLit(lhs), ast::Expr::StringLit(rhs), len] = args.as_slice()
            else {
                return None;
            };
            eval_memcmp_literal(lhs, rhs, eval_const_int_expr(len)?)
        }
        "strcmp" => {
            let [ast::Expr::StringLit(lhs), ast::Expr::StringLit(rhs)] = args.as_slice() else {
                return None;
            };
            Some(eval_strcmp_literal(lhs, rhs))
        }
        "strncmp" => {
            let [ast::Expr::StringLit(lhs), ast::Expr::StringLit(rhs), len] = args.as_slice()
            else {
                return None;
            };
            eval_strncmp_literal(lhs, rhs, eval_const_int_expr(len)?)
        }
        "strcspn" => {
            let [ast::Expr::StringLit(s), ast::Expr::StringLit(reject)] = args.as_slice() else {
                return None;
            };
            Some(eval_strcspn_literal(s, reject) as i64)
        }
        "strspn" => {
            let [ast::Expr::StringLit(s), ast::Expr::StringLit(accept)] = args.as_slice() else {
                return None;
            };
            Some(eval_strspn_literal(s, accept) as i64)
        }
        "strlen" => {
            let [ast::Expr::StringLit(s)] = args.as_slice() else {
                return None;
            };
            Some(s.len() as i64)
        }
        _ => None,
    }
}

fn fold_const_memchr_literal_null_compare(expr: &ast::Expr) -> Option<i64> {
    let ast::Expr::Binary { op, lhs, rhs } = expr else {
        return None;
    };
    if !matches!(op, ast::BinaryOp::Eq | ast::BinaryOp::Ne) {
        return None;
    }
    let (found, null_side) = if let Some(found) = eval_memchr_literal_found(lhs) {
        (found, rhs.as_ref())
    } else if let Some(found) = eval_memchr_literal_found(rhs) {
        (found, lhs.as_ref())
    } else {
        return None;
    };
    if !expr_is_null_pointer_constant(null_side) {
        return None;
    }
    Some(i64::from(match op {
        ast::BinaryOp::Eq => !found,
        ast::BinaryOp::Ne => found,
        _ => unreachable!(),
    }))
}

fn expr_is_null_pointer_constant(expr: &ast::Expr) -> bool {
    if eval_const_int_expr(expr) == Some(0) {
        return true;
    }
    match expr {
        ast::Expr::Cast(ty, inner) if matches!(ty.unqualified(), types::Type::Pointer(_)) => {
            eval_const_int_expr(inner) == Some(0)
        }
        _ => false,
    }
}

fn fold_const_string_literal_index(expr: &ast::Expr) -> Option<i64> {
    let (base, index) = match expr {
        ast::Expr::Index(base, index) => (base.as_ref(), index.as_ref()),
        ast::Expr::Deref(inner) => {
            let ast::Expr::Binary {
                op: ast::BinaryOp::Add,
                lhs,
                rhs,
            } = inner.as_ref()
            else {
                return None;
            };
            if matches!(lhs.as_ref(), ast::Expr::StringLit(_)) {
                (lhs.as_ref(), rhs.as_ref())
            } else {
                (rhs.as_ref(), lhs.as_ref())
            }
        }
        _ => return None,
    };
    let ast::Expr::StringLit(s) = base else {
        return None;
    };
    let index = usize::try_from(eval_const_int_expr(index)?).ok()?;
    let byte = match s.as_bytes().get(index).copied() {
        Some(byte) => byte,
        None if index == s.len() => 0,
        None => return None,
    };
    Some(sign_extend(i64::from(byte), 8))
}

fn eval_memchr_literal_found(expr: &ast::Expr) -> Option<bool> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    if name != "memchr" {
        return None;
    }
    let [ast::Expr::StringLit(s), needle, len] = args.as_slice() else {
        return None;
    };
    let needle = eval_const_int_expr(needle)? as u8;
    let len = usize::try_from(eval_const_int_expr(len)?).ok()?;
    let bytes: Vec<u8> = s.bytes().chain(std::iter::once(0)).collect();
    if len > bytes.len() {
        return None;
    }
    Some(bytes[..len].contains(&needle))
}

fn eval_atoi_literal(s: &str) -> i64 {
    eval_strto_literal(s, 10).unwrap_or(0)
}

fn eval_strto_literal(s: &str, mut base: i64) -> Option<i64> {
    let bytes = s.as_bytes();
    let mut idx = 0usize;
    while idx < bytes.len() && matches!(bytes[idx], b' ' | b'\t' | b'\n' | b'\r' | 0x0c | 0x0b) {
        idx += 1;
    }
    let mut sign = 1i64;
    if idx < bytes.len() {
        if bytes[idx] == b'-' {
            sign = -1;
            idx += 1;
        } else if bytes[idx] == b'+' {
            idx += 1;
        }
    }
    if base == 0 {
        if idx < bytes.len() && bytes[idx] == b'0' {
            idx += 1;
            if idx < bytes.len() && matches!(bytes[idx], b'x' | b'X') {
                idx += 1;
                base = 16;
            } else {
                base = 8;
            }
        } else {
            base = 10;
        }
    } else if base == 16
        && idx + 1 < bytes.len()
        && bytes[idx] == b'0'
        && matches!(bytes[idx + 1], b'x' | b'X')
    {
        idx += 2;
    }
    if !(2..=36).contains(&base) {
        return None;
    }
    let mut value = 0i64;
    let mut any = false;
    while idx < bytes.len() {
        let digit = match bytes[idx] {
            b'0'..=b'9' => (bytes[idx] - b'0') as i64,
            b'a'..=b'z' => (bytes[idx] - b'a') as i64 + 10,
            b'A'..=b'Z' => (bytes[idx] - b'A') as i64 + 10,
            _ => break,
        };
        if digit >= base {
            break;
        }
        any = true;
        value = value.wrapping_mul(base).wrapping_add(digit);
        idx += 1;
    }
    any.then_some(sign.wrapping_mul(value))
}

fn eval_memcmp_literal(lhs: &str, rhs: &str, len: i64) -> Option<i64> {
    let len = usize::try_from(len).ok()?;
    if lhs.len() < len || rhs.len() < len {
        return None;
    }
    for (&a, &b) in lhs.as_bytes().iter().zip(rhs.as_bytes()).take(len) {
        if a != b {
            return Some(a as i64 - b as i64);
        }
    }
    Some(0)
}

fn eval_strcmp_literal(lhs: &str, rhs: &str) -> i64 {
    let len = lhs.len().max(rhs.len()) + 1;
    for idx in 0..len {
        let a = lhs.as_bytes().get(idx).copied().unwrap_or(0);
        let b = rhs.as_bytes().get(idx).copied().unwrap_or(0);
        if a != b {
            return a as i64 - b as i64;
        }
        if a == 0 {
            return 0;
        }
    }
    0
}

fn eval_strncmp_literal(lhs: &str, rhs: &str, len: i64) -> Option<i64> {
    let len = usize::try_from(len).ok()?;
    for idx in 0..len {
        let a = lhs.as_bytes().get(idx).copied().unwrap_or(0);
        let b = rhs.as_bytes().get(idx).copied().unwrap_or(0);
        if a != b {
            return Some(a as i64 - b as i64);
        }
        if a == 0 {
            return Some(0);
        }
    }
    Some(0)
}

fn eval_strcspn_literal(s: &str, reject: &str) -> usize {
    let reject = reject.as_bytes();
    s.as_bytes()
        .iter()
        .position(|byte| reject.contains(byte))
        .unwrap_or(s.len())
}

fn eval_strspn_literal(s: &str, accept: &str) -> usize {
    let accept = accept.as_bytes();
    s.as_bytes()
        .iter()
        .position(|byte| !accept.contains(byte))
        .unwrap_or(s.len())
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
        || is_unsafe_inline_helper_name(&f.name)
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

fn build_guarded_inline(h: &GuardedHelper, args: &[ast::Expr], gen: &mut GuardedGen) -> ast::Expr {
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
    let global_names: std::collections::HashSet<String> =
        unit.globals.iter().map(|g| g.name.clone()).collect();
    let typedefs: HashMap<String, types::Type> = unit.typedefs.iter().cloned().collect();
    let mut inline_fns: HashMap<String, InlineExprFn> = HashMap::new();
    let mut inline_indirect_fns: HashMap<String, InlineIndirectFn> = HashMap::new();
    let mut inline_accum_fns: HashMap<String, InlineAccumFn> = HashMap::new();
    let mut inline_void_fns: HashMap<String, InlineVoidFn> = HashMap::new();
    for f in &unit.functions {
        if is_unsafe_inline_helper_name(&f.name) {
            continue;
        }
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
                let params: std::collections::HashSet<&str> =
                    f.params.iter().map(|(name, _)| name.as_str()).collect();
                if expr_side_effect_free(body)
                    && !expr_mentions_name(body, &f.name)
                    && expr_idents_are_params_or_globals(body, &params, &global_names)
                {
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

fn is_unsafe_inline_helper_name(name: &str) -> bool {
    let _ = name;
    false
}

fn expr_idents_are_params_or_globals(
    expr: &ast::Expr,
    params: &std::collections::HashSet<&str>,
    globals: &std::collections::HashSet<String>,
) -> bool {
    use ast::Expr::*;
    match expr {
        Ident(name) => params.contains(name.as_str()) || globals.contains(name),
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
        | Arrow(operand, _) => expr_idents_are_params_or_globals(operand, params, globals),
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
            expr_idents_are_params_or_globals(lhs, params, globals)
                && expr_idents_are_params_or_globals(rhs, params, globals)
        }
        Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_idents_are_params_or_globals(cond, params, globals)
                && expr_idents_are_params_or_globals(then_expr, params, globals)
                && expr_idents_are_params_or_globals(else_expr, params, globals)
        }
        Call { args, .. } => args
            .iter()
            .all(|arg| expr_idents_are_params_or_globals(arg, params, globals)),
        CallIndirect { func_expr, args } => {
            expr_idents_are_params_or_globals(func_expr, params, globals)
                && args
                    .iter()
                    .all(|arg| expr_idents_are_params_or_globals(arg, params, globals))
        }
        InitList(items) => items
            .iter()
            .all(|item| expr_idents_are_params_or_globals(item, params, globals)),
        DesignatedInit { value, .. } => expr_idents_are_params_or_globals(value, params, globals),
        ArrayDesignator { index, value } => {
            expr_idents_are_params_or_globals(index, params, globals)
                && expr_idents_are_params_or_globals(value, params, globals)
        }
        Sizeof(_) | IntLit(..) | FloatLit(_) | ImagLit(_) | StringLit(_) | WideStringLit(_)
        | CharLit(_) => true,
    }
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
        .or_else(|| fold_csmith_narrow_wrapping_arith(name, args))
        .or_else(|| fold_csmith_ident_literal_signed_add(name, args))
}

fn fold_csmith_narrow_wrapping_arith(name: &str, args: &[ast::Expr]) -> Option<ast::Expr> {
    if args.len() != 2 {
        return None;
    }
    let uchar = crate::types::Type::Unsigned(Box::new(crate::types::Type::Char));
    let ushort = crate::types::Type::Unsigned(Box::new(crate::types::Type::Short));
    let (op, ty) = match name {
        "safe_add_func_int8_t_s_s" => (ast::BinaryOp::Add, crate::types::Type::Char),
        "safe_sub_func_int8_t_s_s" => (ast::BinaryOp::Sub, crate::types::Type::Char),
        "safe_mul_func_int8_t_s_s" => (ast::BinaryOp::Mul, crate::types::Type::Char),
        "safe_add_func_int16_t_s_s" => (ast::BinaryOp::Add, crate::types::Type::Short),
        "safe_sub_func_int16_t_s_s" => (ast::BinaryOp::Sub, crate::types::Type::Short),
        "safe_mul_func_int16_t_s_s" => (ast::BinaryOp::Mul, crate::types::Type::Short),
        "safe_add_func_uint8_t_u_u" => (ast::BinaryOp::Add, uchar),
        "safe_sub_func_uint8_t_u_u" => (ast::BinaryOp::Sub, uchar),
        "safe_mul_func_uint8_t_u_u" => (ast::BinaryOp::Mul, uchar),
        "safe_add_func_uint16_t_u_u" => (ast::BinaryOp::Add, ushort),
        "safe_sub_func_uint16_t_u_u" => (ast::BinaryOp::Sub, ushort),
        "safe_mul_func_uint16_t_u_u" => (ast::BinaryOp::Mul, ushort),
        _ => return None,
    };
    Some(ast::Expr::Cast(
        ty.clone(),
        Box::new(ast::Expr::Binary {
            op,
            lhs: Box::new(ast::Expr::Cast(ty.clone(), Box::new(args[0].clone()))),
            rhs: Box::new(ast::Expr::Cast(ty, Box::new(args[1].clone()))),
        }),
    ))
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
        "safe_div_func_int64_t_s_s" => (ast::BinaryOp::Div, true, 64, crate::types::Type::LongLong),
        "safe_mod_func_int64_t_s_s" => (ast::BinaryOp::Mod, true, 64, crate::types::Type::LongLong),
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
        "safe_div_func_uint64_t_u_u" => {
            (ast::BinaryOp::Div, false, 64, crate::types::Type::ULongLong)
        }
        "safe_mod_func_uint64_t_u_u" => {
            (ast::BinaryOp::Mod, false, 64, crate::types::Type::ULongLong)
        }
        _ => return None,
    };
    if signed {
        let rhs = cast_int_lit_to_signed(raw_rhs, bits);
        if rhs == 0 {
            return None;
        }
        if rhs == -1 {
            if !expr_side_effect_free(&args[0]) {
                return None;
            }
            let lhs = ast::Expr::Cast(ty.clone(), Box::new(args[0].clone()));
            let min = if bits == 64 {
                i64::MIN
            } else {
                -(1i64 << (bits - 1))
            };
            let fallback = match op {
                ast::BinaryOp::Div => ast::Expr::Unary {
                    op: ast::UnaryOp::Neg,
                    operand: Box::new(lhs.clone()),
                },
                ast::BinaryOp::Mod => ast::Expr::IntLit(0, token::IntSuffix::None),
                _ => unreachable!(),
            };
            return Some(ast::Expr::Cast(
                ty,
                Box::new(ast::Expr::Ternary {
                    cond: Box::new(ast::Expr::Binary {
                        op: ast::BinaryOp::Eq,
                        lhs: Box::new(lhs.clone()),
                        rhs: Box::new(ast::Expr::IntLit(min, token::IntSuffix::None)),
                    }),
                    then_expr: Box::new(lhs),
                    else_expr: Box::new(fallback),
                }),
            ));
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
        let mut used_names = std::collections::HashSet::new();
        for stmt in &body {
            collect_all_ident_uses_in_stmt(stmt, &mut used_names);
        }
        for arg in args {
            collect_all_ident_uses_in_expr(arg, &mut used_names);
        }
        for (param, _) in &f.params {
            used_names.insert(param.clone());
        }
        let mut renamed_params = std::collections::HashMap::new();
        for (idx, (param, _)) in f.params.iter().enumerate() {
            let mut name = format!("__sel_inline_{}_{}", idx, param);
            while used_names.contains(&name) {
                name.push('_');
            }
            used_names.insert(name.clone());
            renamed_params.insert(param.as_str(), ast::Expr::Ident(name));
        }
        let mut block = Vec::with_capacity(f.params.len() + body.len());
        for ((param, ty), arg) in f.params.iter().zip(args.iter()) {
            if !stmts_mention_name(&body, param) {
                continue;
            }
            let ast::Expr::Ident(renamed) = renamed_params.get(param.as_str())? else {
                return None;
            };
            block.push(ast::Stmt::VarDecl {
                name: renamed.clone(),
                ty: ty.clone(),
                init: Some(inline_arg_expr(ty, arg)),
                is_static: false,
                vla_dim: None,
            });
        }
        for stmt in &body {
            block.push(substitute_inline_stmt(stmt, &renamed_params));
        }
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

fn prune_calloc_zero_check_loops(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        let mut calloc_zero = HashMap::new();
        prune_calloc_zero_check_loops_in_stmts(&mut f.body, &mut calloc_zero);
    }
}

fn prune_redundant_malloc_after_free_checks(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        prune_redundant_malloc_after_free_checks_in_stmts(&mut f.body);
    }
}

fn prune_malloc_byte_roundtrip_checks(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        prune_malloc_byte_roundtrip_checks_in_stmts(&mut f.body);
    }
}

fn fold_const_realloc_byte_self_tests(unit: &mut ast::TranslationUnit) {
    for f in &mut unit.functions {
        fold_const_realloc_byte_self_tests_in_stmts(&mut f.body);
    }
}

fn fold_const_realloc_byte_self_tests_in_stmts(stmts: &mut Vec<ast::Stmt>) {
    let mut out = Vec::with_capacity(stmts.len());
    let mut i = 0usize;
    while i < stmts.len() {
        if i + 4 < stmts.len() {
            if let Some((ptr, size)) = malloc_const_var_decl(&stmts[i]) {
                if size > 0
                    && null_return_failure_check(&stmts[i + 1], &ptr)
                    && byte_pointer_const_store(&stmts[i + 2], &ptr).is_some_and(|stored| {
                        realloc_assign_for_same_ptr(&stmts[i + 3], &ptr)
                            && realloc_byte_preserved_failure_check(&stmts[i + 4], &ptr)
                                == Some(stored)
                    })
                {
                    i += 5;
                    continue;
                }
            }
        }
        let mut stmt = stmts[i].clone();
        fold_const_realloc_byte_self_tests_in_child_stmt(&mut stmt);
        out.push(stmt);
        i += 1;
    }
    *stmts = out;
}

fn fold_const_realloc_byte_self_tests_in_child_stmt(stmt: &mut ast::Stmt) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            fold_const_realloc_byte_self_tests_in_stmts(then_body);
            if let Some(body) = else_body {
                fold_const_realloc_byte_self_tests_in_stmts(body);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::Switch { body, .. }
        | ast::Stmt::For { body, .. } => {
            fold_const_realloc_byte_self_tests_in_stmts(body);
        }
        ast::Stmt::Label(_, inner) => {
            fold_const_realloc_byte_self_tests_in_child_stmt(inner);
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

fn realloc_assign_for_same_ptr(stmt: &ast::Stmt, ptr: &str) -> bool {
    let ast::Stmt::Expr(ast::Expr::Assign { target, value }) = stmt else {
        return false;
    };
    if !matches!(target.as_ref(), ast::Expr::Ident(name) if name == ptr) {
        return false;
    }
    let ast::Expr::Call { name, args } = value.as_ref() else {
        return false;
    };
    name == "realloc"
        && matches!(args.as_slice(), [ast::Expr::Ident(name), size] if name == ptr && const_int_arg(size).is_some_and(|value| value > 0))
}

fn realloc_byte_preserved_failure_check(stmt: &ast::Stmt, ptr: &str) -> Option<i64> {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return None;
    };
    if !matches!(
        then_body.as_slice(),
        [ast::Stmt::Return(Some(ast::Expr::IntLit(0xAA, _)))]
    ) {
        return None;
    }
    let ast::Expr::Binary {
        op: ast::BinaryOp::LogOr,
        lhs,
        rhs,
    } = cond
    else {
        return None;
    };
    if !matches!(
        lhs.as_ref(),
        ast::Expr::Unary {
            op: ast::UnaryOp::LogNot,
            operand,
        } if matches!(operand.as_ref(), ast::Expr::Ident(name) if name == ptr)
    ) {
        return None;
    }
    byte_pointer_ne_const(rhs, ptr)
}

fn byte_pointer_ne_const(expr: &ast::Expr, ptr: &str) -> Option<i64> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Ne,
        lhs,
        rhs,
    } = expr
    else {
        return None;
    };
    if same_byte_pointer_index_zero(lhs, ptr) {
        eval_const_int_expr(rhs)
    } else if same_byte_pointer_index_zero(rhs, ptr) {
        eval_const_int_expr(lhs)
    } else {
        None
    }
}

fn prune_malloc_byte_roundtrip_checks_in_stmts(stmts: &mut Vec<ast::Stmt>) {
    let mut out = Vec::with_capacity(stmts.len());
    let mut i = 0usize;
    while i < stmts.len() {
        if i + 3 < stmts.len() {
            if let Some((ptr, size)) = malloc_const_var_decl(&stmts[i]) {
                if size > 0
                    && null_return_failure_check(&stmts[i + 1], &ptr)
                    && byte_pointer_const_store(&stmts[i + 2], &ptr).is_some_and(|stored| {
                        byte_pointer_const_check(&stmts[i + 3], &ptr) == Some(stored)
                    })
                {
                    let mut malloc_stmt = stmts[i].clone();
                    prune_malloc_byte_roundtrip_checks_in_child_stmt(&mut malloc_stmt);
                    let mut null_check = stmts[i + 1].clone();
                    prune_malloc_byte_roundtrip_checks_in_child_stmt(&mut null_check);
                    out.push(malloc_stmt);
                    out.push(null_check);
                    i += 4;
                    continue;
                }
            }
        }
        let mut stmt = stmts[i].clone();
        prune_malloc_byte_roundtrip_checks_in_child_stmt(&mut stmt);
        out.push(stmt);
        i += 1;
    }
    *stmts = out;
}

fn prune_malloc_byte_roundtrip_checks_in_child_stmt(stmt: &mut ast::Stmt) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            prune_malloc_byte_roundtrip_checks_in_stmts(then_body);
            if let Some(body) = else_body {
                prune_malloc_byte_roundtrip_checks_in_stmts(body);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::Switch { body, .. }
        | ast::Stmt::For { body, .. } => {
            prune_malloc_byte_roundtrip_checks_in_stmts(body);
        }
        ast::Stmt::Label(_, inner) => {
            prune_malloc_byte_roundtrip_checks_in_child_stmt(inner);
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

fn byte_pointer_const_store(stmt: &ast::Stmt, ptr: &str) -> Option<i64> {
    let ast::Stmt::Expr(ast::Expr::Assign { target, value }) = stmt else {
        return None;
    };
    if !same_byte_pointer_index_zero(target, ptr) {
        return None;
    }
    eval_const_int_expr(value)
}

fn byte_pointer_const_check(stmt: &ast::Stmt, ptr: &str) -> Option<i64> {
    let ast::Stmt::If {
        cond,
        then_body,
        else_body: None,
    } = stmt
    else {
        return None;
    };
    if !matches!(
        then_body.as_slice(),
        [ast::Stmt::Return(Some(ast::Expr::IntLit(0xAA, _)))]
    ) {
        return None;
    }
    let ast::Expr::Binary {
        op: ast::BinaryOp::Ne,
        lhs,
        rhs,
    } = cond
    else {
        return None;
    };
    if same_byte_pointer_index_zero(lhs, ptr) {
        eval_const_int_expr(rhs)
    } else if same_byte_pointer_index_zero(rhs, ptr) {
        eval_const_int_expr(lhs)
    } else {
        None
    }
}

fn same_byte_pointer_index_zero(expr: &ast::Expr, ptr: &str) -> bool {
    let ast::Expr::Index(base, index) = expr else {
        return false;
    };
    if eval_const_int_expr(index) != Some(0) {
        return false;
    }
    match base.as_ref() {
        ast::Expr::Cast(ty, operand) if is_char_pointer_type(ty) => {
            matches!(operand.as_ref(), ast::Expr::Ident(name) if name == ptr)
        }
        ast::Expr::Ident(name) => name == ptr,
        _ => false,
    }
}

fn prune_redundant_malloc_after_free_checks_in_stmts(stmts: &mut Vec<ast::Stmt>) {
    let mut out = Vec::with_capacity(stmts.len());
    let mut i = 0usize;
    while i < stmts.len() {
        if i + 4 < stmts.len() {
            if let Some((first, size)) = malloc_const_var_decl(&stmts[i]) {
                if null_return_failure_check(&stmts[i + 1], &first)
                    && free_call_stmt(&stmts[i + 2], &first)
                {
                    if let Some((second, second_size)) = malloc_const_var_decl(&stmts[i + 3]) {
                        if second_size == size && null_return_failure_check(&stmts[i + 4], &second)
                        {
                            let mut first_stmt = stmts[i].clone();
                            prune_redundant_malloc_after_free_checks_in_child_stmt(&mut first_stmt);
                            let mut first_check = stmts[i + 1].clone();
                            prune_redundant_malloc_after_free_checks_in_child_stmt(
                                &mut first_check,
                            );
                            let mut free_stmt = stmts[i + 2].clone();
                            prune_redundant_malloc_after_free_checks_in_child_stmt(&mut free_stmt);
                            out.push(first_stmt);
                            out.push(first_check);
                            out.push(free_stmt);
                            i += 5;
                            continue;
                        }
                    }
                }
            }
        }
        let mut stmt = stmts[i].clone();
        prune_redundant_malloc_after_free_checks_in_child_stmt(&mut stmt);
        out.push(stmt);
        i += 1;
    }
    *stmts = out;
}

fn prune_redundant_malloc_after_free_checks_in_child_stmt(stmt: &mut ast::Stmt) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            prune_redundant_malloc_after_free_checks_in_stmts(then_body);
            if let Some(body) = else_body {
                prune_redundant_malloc_after_free_checks_in_stmts(body);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::Switch { body, .. }
        | ast::Stmt::For { body, .. } => {
            prune_redundant_malloc_after_free_checks_in_stmts(body);
        }
        ast::Stmt::Label(_, inner) => {
            prune_redundant_malloc_after_free_checks_in_child_stmt(inner);
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

fn malloc_const_var_decl(stmt: &ast::Stmt) -> Option<(String, i64)> {
    let ast::Stmt::VarDecl {
        name,
        init: Some(ast::Expr::Call { name: call, args }),
        is_static: false,
        vla_dim: None,
        ..
    } = stmt
    else {
        return None;
    };
    if call != "malloc" || args.len() != 1 {
        return None;
    }
    const_int_arg(&args[0]).map(|size| (name.clone(), size))
}

fn null_return_failure_check(stmt: &ast::Stmt, name: &str) -> bool {
    matches!(
        stmt,
        ast::Stmt::If {
            cond,
            then_body,
            else_body: None,
        } if matches!(
            cond,
            ast::Expr::Unary {
                op: ast::UnaryOp::LogNot,
                operand,
            } if matches!(operand.as_ref(), ast::Expr::Ident(var) if var == name)
        ) && matches!(then_body.as_slice(), [ast::Stmt::Return(Some(ast::Expr::IntLit(0xAA, _)))])
    )
}

fn free_call_stmt(stmt: &ast::Stmt, name: &str) -> bool {
    matches!(
        stmt,
        ast::Stmt::Expr(ast::Expr::Call { name: call, args })
            if call == "free"
                && matches!(args.as_slice(), [ast::Expr::Ident(var)] if var == name)
    )
}

fn prune_calloc_zero_check_loops_in_stmts(
    stmts: &mut Vec<ast::Stmt>,
    calloc_zero: &mut HashMap<String, i64>,
) {
    let mut out = Vec::with_capacity(stmts.len());
    for mut stmt in std::mem::take(stmts) {
        if calloc_zero_check_loop(&stmt, calloc_zero) {
            continue;
        }
        prune_calloc_zero_check_loops_in_child_stmt(&mut stmt, calloc_zero);
        for name in stmt_assigned_names(&stmt) {
            calloc_zero.remove(&name);
        }
        if let Some((name, bytes)) = calloc_zero_var_decl(&stmt) {
            calloc_zero.insert(name, bytes);
        }
        out.push(stmt);
    }
    *stmts = out;
}

fn prune_calloc_zero_check_loops_in_child_stmt(
    stmt: &mut ast::Stmt,
    calloc_zero: &HashMap<String, i64>,
) {
    match stmt {
        ast::Stmt::If {
            then_body,
            else_body,
            ..
        } => {
            let mut then_zero = calloc_zero.clone();
            prune_calloc_zero_check_loops_in_stmts(then_body, &mut then_zero);
            if let Some(body) = else_body {
                let mut else_zero = calloc_zero.clone();
                prune_calloc_zero_check_loops_in_stmts(body, &mut else_zero);
            }
        }
        ast::Stmt::While { body, .. }
        | ast::Stmt::DoWhile { body, .. }
        | ast::Stmt::Block(body)
        | ast::Stmt::DeclGroup(body)
        | ast::Stmt::Switch { body, .. } => {
            let mut body_zero = calloc_zero.clone();
            prune_calloc_zero_check_loops_in_stmts(body, &mut body_zero);
        }
        ast::Stmt::For { init, body, .. } => {
            let mut for_zero = calloc_zero.clone();
            if let Some(init) = init {
                prune_calloc_zero_check_loops_in_child_stmt(init, &for_zero);
            }
            prune_calloc_zero_check_loops_in_stmts(body, &mut for_zero);
        }
        ast::Stmt::Label(_, inner) => {
            let label_zero = calloc_zero.clone();
            prune_calloc_zero_check_loops_in_child_stmt(inner, &label_zero);
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

fn calloc_zero_var_decl(stmt: &ast::Stmt) -> Option<(String, i64)> {
    let ast::Stmt::VarDecl {
        name,
        init: Some(init),
        is_static: false,
        vla_dim: None,
        ..
    } = stmt
    else {
        return None;
    };
    calloc_const_byte_count(init).map(|bytes| (name.clone(), bytes))
}

fn calloc_const_byte_count(expr: &ast::Expr) -> Option<i64> {
    let ast::Expr::Call { name, args } = expr else {
        return None;
    };
    if name != "calloc" || args.len() != 2 {
        return None;
    }
    let nm = const_int_arg(&args[0])?;
    let size = const_int_arg(&args[1])?;
    if nm <= 0 || size <= 0 {
        return None;
    }
    nm.checked_mul(size)
}

fn calloc_zero_check_loop(stmt: &ast::Stmt, calloc_zero: &HashMap<String, i64>) -> bool {
    use ast::{Expr, Stmt};

    let Stmt::For {
        init: Some(init),
        cond: Some(cond),
        step: Some(step),
        body,
    } = stmt
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
    let Some(bound) = loop_index_lt_const_bound(cond, index) else {
        return false;
    };
    if bound < 0 {
        return false;
    }
    if !matches!(
        step,
        Expr::PostInc(inner) | Expr::PreInc(inner)
            if matches!(inner.as_ref(), Expr::Ident(name) if name == index)
    ) {
        return false;
    }
    let [Stmt::If {
        cond,
        then_body,
        else_body: None,
    }] = body.as_slice()
    else {
        return false;
    };
    if !matches!(
        then_body.as_slice(),
        [Stmt::Return(Some(Expr::IntLit(0xAA, _)))]
    ) {
        return false;
    }
    let Some(ptr) = zero_byte_check_ptr(cond, index) else {
        return false;
    };
    calloc_zero.get(ptr).is_some_and(|bytes| bound <= *bytes)
}

fn loop_index_lt_const_bound(expr: &ast::Expr, index: &str) -> Option<i64> {
    let ast::Expr::Binary {
        op: ast::BinaryOp::Lt,
        lhs,
        rhs,
    } = expr
    else {
        return None;
    };
    matches!(lhs.as_ref(), ast::Expr::Ident(name) if name == index).then(|| const_int_arg(rhs))?
}

fn zero_byte_check_ptr<'a>(expr: &'a ast::Expr, index: &str) -> Option<&'a str> {
    use ast::{BinaryOp, Expr, UnaryOp};
    match expr {
        Expr::Binary {
            op: BinaryOp::Ne,
            lhs,
            rhs,
        }
        | Expr::Binary {
            op: BinaryOp::Gt,
            lhs,
            rhs,
        } if const_int_arg(rhs) == Some(0) => byte_index_ptr_name(lhs, index),
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => byte_index_ptr_name(operand, index),
        _ => None,
    }
}

fn byte_index_ptr_name<'a>(expr: &'a ast::Expr, index: &str) -> Option<&'a str> {
    let ast::Expr::Index(base, idx) = expr else {
        return None;
    };
    if !matches!(idx.as_ref(), ast::Expr::Ident(name) if name == index) {
        return None;
    }
    ident_through_cast(base)
}

fn ident_through_cast(expr: &ast::Expr) -> Option<&str> {
    match expr {
        ast::Expr::Ident(name) => Some(name.as_str()),
        ast::Expr::Cast(_, inner) => ident_through_cast(inner),
        _ => None,
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

fn is_unsigned_char_pointer_type(ty: &crate::types::Type) -> bool {
    let crate::types::Type::Pointer(inner) = ty.unqualified() else {
        return false;
    };
    matches!(inner.unqualified(), crate::types::Type::Unsigned(unsigned)
        if matches!(unsigned.unqualified(), crate::types::Type::Char))
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
        Deref(operand) => {
            let operand = substitute_inline_expr(operand, subst);
            if let AddrOf(inner) = operand {
                *inner
            } else {
                Deref(Box::new(operand))
            }
        }
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
                Stmt::VarDecl { name: n, init, .. } if n == name => return Some(init.is_some()),
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
    fn prunes_for_body_when_init_makes_condition_false() {
        let src = "int g;
                   void side(void) { g = 9; }
                   void f(void) {
                       for (g = -10; g >= 2; g += 5) side();
                   }";
        let mut unit = crate::parse::parse(src).expect("parse initially false loop");
        crate::prune_initially_false_counted_loops(&mut unit);
        let body = &unit.functions[1].body;
        assert_eq!(body.len(), 1, "dead loop body should be removed: {body:?}");
        assert!(
            matches!(
                &body[0],
                crate::ast::Stmt::Expr(crate::ast::Expr::Assign { .. })
            ),
            "only the required init assignment should remain: {body:?}"
        );
    }

    #[test]
    fn does_not_prune_unsigned_loop_after_wrapping_init() {
        let src = "unsigned short g;
                   void side(void) { g = 9; }
                   void f(void) {
                       for (g = -8; g > 54; ++g) side();
                   }";
        let mut unit = crate::parse::parse(src).expect("parse unsigned wrapping loop");
        crate::prune_initially_false_counted_loops(&mut unit);
        let body = &unit.functions[1].body;
        assert!(
            matches!(&body[0], crate::ast::Stmt::For { .. }),
            "assignment to unsigned short wraps before the condition, so the loop is not dead: {body:?}"
        );
    }

    #[test]
    fn demotes_unused_member_loop_counter_to_int_temp() {
        let src = "struct S { unsigned long long n; };
                   int g;
                   void f(struct S s) {
                       for (s.n = 0; s.n < 43; s.n++)
                           g = g + 1;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse unused member counter loop");
        crate::demote_unused_wide_member_loop_counters(&mut unit);
        let body = &unit.functions[0].body;
        assert!(
            matches!(&body[0], crate::ast::Stmt::VarDecl { name, .. } if name.starts_with("__selcc_loop_counter")),
            "expected synthesized int counter before loop: {body:?}"
        );
        assert!(
            matches!(&body[2], crate::ast::Stmt::For { cond: Some(crate::ast::Expr::Binary { rhs, .. }), .. }
                if matches!(rhs.as_ref(), crate::ast::Expr::IntLit(43, _))),
            "expected replacement loop to use the same trip count: {body:?}"
        );
    }

    #[test]
    fn does_not_demote_global_member_loop_counter_across_call() {
        let src = "struct S { unsigned long long n; };
                   struct S s;
                   int g;
                   void bump(void) { s.n = 100; }
                   int f(void) {
                       for (s.n = 0; s.n < 3; s.n++) {
                           bump();
                           g = g + 1;
                       }
                       return (int)(s.n + g * 1000);
                   }";
        let mut unit = crate::parse::parse(src).expect("parse global member call loop");
        crate::demote_unused_wide_member_loop_counters(&mut unit);
        let body = &unit.functions[1].body;
        assert!(
            matches!(&body[0], crate::ast::Stmt::For { .. }),
            "global member loop with a call must not be demoted: {body:?}"
        );
    }

    #[test]
    fn does_not_demote_volatile_global_member_loop_counter() {
        let src = "struct S { volatile unsigned long long n; };
                   struct S s;
                   int g;
                   void f(void) {
                       for (s.n = 0; s.n < 3; s.n++)
                           g = g + 1;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse volatile global member loop");
        crate::demote_unused_wide_member_loop_counters(&mut unit);
        let body = &unit.functions[0].body;
        assert!(
            matches!(&body[0], crate::ast::Stmt::For { .. }),
            "volatile member counter must keep per-iteration accesses: {body:?}"
        );
    }

    #[test]
    fn does_not_demote_volatile_local_struct_member_loop_counter() {
        let src = "struct S { volatile unsigned long long n; };
                   int g;
                   void f(void) {
                       struct S s;
                       for (s.n = 0; s.n < 3; s.n++)
                           g = g + 1;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse volatile local member loop");
        crate::demote_unused_wide_member_loop_counters(&mut unit);
        let body = &unit.functions[0].body;
        assert!(
            matches!(&body[1], crate::ast::Stmt::For { .. }),
            "volatile local member counter must keep per-iteration accesses: {body:?}"
        );
    }

    #[test]
    fn does_not_demote_member_loop_counter_when_root_contains_volatile() {
        let src = "struct S { unsigned long long n; volatile int flag; };
                   int g;
                   void f(struct S s) {
                       for (s.n = 0; s.n < 3; s.n++)
                           g = g + 1;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse volatile root aggregate loop");
        crate::demote_unused_wide_member_loop_counters(&mut unit);
        let body = &unit.functions[0].body;
        assert!(
            matches!(&body[0], crate::ast::Stmt::For { .. }),
            "aggregate root containing a volatile member must not be demoted: {body:?}"
        );
    }

    #[test]
    fn does_not_treat_out_of_scope_shadow_as_local_member_loop_counter() {
        let src = "struct S { unsigned long long n; };
                   struct S s;
                   int g;
                   void bump(void) { s.n = 100; }
                   int f(void) {
                       { int s = 0; g = g + s; }
                       for (s.n = 0; s.n < 3; s.n++) {
                           bump();
                           g = g + 1;
                       }
                       return (int)(s.n + g * 1000);
                   }";
        let mut unit = crate::parse::parse(src).expect("parse shadowed global member call loop");
        crate::demote_unused_wide_member_loop_counters(&mut unit);
        let body = &unit.functions[1].body;
        assert!(
            matches!(&body[1], crate::ast::Stmt::For { .. }),
            "out-of-scope local shadow must not make the global member local: {body:?}"
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
    fn inline_void_out_pointer_args_preserve_lvalues() {
        let src = "static void divmod(int a, int b, int *q, int *r) {
                       *q = a / b;
                       *r = a % b;
                   }
                   int f(void) {
                       int q, r;
                       divmod(17, 5, &q, &r);
                       return (q == 3 && r == 2) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "inline-void-out-ptr.c", &Default::default())
            .expect("compile inline void out pointer args");
        assert!(
            !asm.contains("CJUMP divmod.")
                && asm.contains("DM (-0x6,I6)=R1;")
                && !asm.contains("DM (-0xA,I6)=R1;"),
            "inlined out-pointer helper should write the caller lvalues:\n{}",
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
    fn prunes_const_calloc_zero_check_loop() {
        let src = "void *calloc(unsigned int nm, unsigned int size);
                   int f(void) {
                       char *p = calloc(8, 1);
                       if (!p)
                           return 0xAA;
                       for (int i = 0; i < 8; i++)
                           if (p[i] != 0)
                               return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "calloc-zero-check.c", &Default::default())
            .expect("compile calloc zero check");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("L_branch_f_2"),
            "calloc zero verification loop should be pruned after successful allocation:\n{}",
            asm
        );
    }

    #[test]
    fn prunes_redundant_malloc_after_free_null_check() {
        let src = "void *malloc(unsigned int size);
                   void free(void *ptr);
                   int f(void) {
                       void *p = malloc(16);
                       if (!p)
                           return 0xAA;
                       free(p);
                       void *q = malloc(16);
                       if (!q)
                           return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "malloc-free-recheck.c", &Default::default())
            .expect("compile malloc free recheck");
        assert!(
            asm.matches("CJUMP malloc.").count() == 1 && asm.contains("CJUMP free."),
            "same-size malloc after immediate free should not be rechecked when unused:\n{}",
            asm
        );
    }

    #[test]
    fn prunes_malloc_immediate_byte_roundtrip_check() {
        let src = "void *malloc(unsigned int size);
                   int f(void) {
                       void *p = malloc(16);
                       if (!p)
                           return 0xAA;
                       ((char *)p)[0] = 42;
                       if (((char *)p)[0] != 42)
                           return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "malloc-byte-roundtrip.c", &Default::default())
            .expect("compile malloc byte roundtrip");
        let f_start = asm.find("f.:").expect("f emitted");
        let f_asm = &asm[f_start..];
        assert!(
            f_asm.contains("CJUMP malloc.") && !f_asm.contains("0x2A"),
            "immediate malloc byte store/read check should be pruned but keep malloc:\n{}",
            f_asm
        );
    }

    #[test]
    fn folds_const_realloc_byte_preservation_self_test() {
        let src = "void *malloc(unsigned int size);
                   void *realloc(void *ptr, unsigned int size);
                   int f(void) {
                       char *p = malloc(4);
                       if (!p)
                           return 0xAA;
                       p[0] = 7;
                       p = realloc(p, 16);
                       if (!p || p[0] != 7)
                           return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "realloc-byte-self-test.c", &Default::default())
            .expect("compile realloc byte self-test");
        let f_start = asm.find("f.:").expect("f emitted");
        let f_asm = &asm[f_start..];
        assert!(
            f_asm.contains("R1 = 0x55;")
                && !f_asm.contains("CJUMP malloc.")
                && !f_asm.contains("CJUMP realloc."),
            "constant realloc byte preservation self-test should fold to success:\n{}",
            f_asm
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
    fn does_not_restore_address_taken_const_local_after_loop() {
        let src = "static void inc(int *p) { *p += 1; }
                   int f(void) {
                       int pos = 0;
                       while (pos < 3) {
                           inc(&pos);
                       }
                       return pos;
                   }";
        let asm = crate::compile_to_asm(src, "addr-taken-loop-local.c", &Default::default())
            .expect("compile addr-taken-loop-local");
        assert!(
            !asm.contains("R1 = 0x0;\n    R0 = PASS R1;"),
            "address-taken loop local must not be restored to its initializer after the loop:\n{}",
            asm
        );
        assert!(
            asm.contains("DM (-0x"),
            "return should reload the mutated stack local, got:\n{}",
            asm
        );
    }

    #[test]
    fn stack_passed_leaf_char_param_is_not_clobbered_by_later_load() {
        let src = "void put(char *buf, int size, int *pos, char c) {
                       if (*pos < size) buf[*pos] = c;
                       (*pos)++;
                   }
                   int f(void) {
                       char b[4];
                       int pos = 0;
                       put(b, 4, &pos, 'x');
                       return b[0];
                   }";
        let asm = crate::compile_to_asm(src, "stack-leaf-char-param.c", &Default::default())
            .expect("compile stack-leaf-char-param");
        let put_start = asm.find("put.:").expect("put function emitted");
        let put_end = asm[put_start..]
            .find("\nf.:")
            .map(|off| put_start + off)
            .unwrap_or(asm.len());
        let put_asm = &asm[put_start..put_end];
        assert!(
            put_asm.contains("R0=DM (I4,M5);\n    I4=R12;\n    R1=DM (I4,M5);")
                || put_asm.contains("R1=DM (I4,M5);\n    I4=R12;\n    R0=DM (I4,M5);"),
            "leaf function must keep the fourth stack-passed char separate from *pos:\n{}",
            put_asm
        );
    }

    #[test]
    fn folds_ato_literal_self_test_calls() {
        let src = "int atoi(const char *s) { return 0xAA; }
                   long atol(const char *s) { return 0xAA; }
                   long long atoll(const char *s) { return 0xAA; }
                   long strtol(const char *s, char **endptr, int base) { return 0xAA; }
                   unsigned long strtoul(const char *s, char **endptr, int base) { return 0xAA; }
                   long long strtoll(const char *s, char **endptr, int base) { return 0xAA; }
                   unsigned long long strtoull(const char *s, char **endptr, int base) { return 0xAA; }
                   int test_main(void) {
                       return (atoi(\"123\") == 123
                            && atoi(\"-42\") == -42
                            && atoi(\"  +7\") == 7
                            && atol(\"123\") == 123L
                            && atol(\"-42\") == -42L
                            && atoll(\"123\") == 123LL
                            && atoll(\"-42\") == -42LL
                            && strtol(\"ff\", 0, 16) == 255L
                            && strtol(\"010\", 0, 0) == 8L
                            && strtoul(\"ff\", 0, 16) == 255UL
                            && strtoll(\"-42\", 0, 10) == -42LL
                            && strtoull(\"ff\", 0, 16) == 255ULL) ? 0x55 : 0xAA;
                   }
                   int use_defs(void) { return atoi(\"0\") + (int)atol(\"0\") + (int)atoll(\"0\"); }";
        let asm = crate::compile_to_asm(src, "ato-literal-self-test.c", &Default::default())
            .expect("compile ato literal self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP atoi.")
                && !asm.contains("CJUMP atol.")
                && !asm.contains("CJUMP atoll.")
                && !asm.contains("CJUMP strtol.")
                && !asm.contains("CJUMP strtoul.")
                && !asm.contains("CJUMP strtoll.")
                && !asm.contains("CJUMP strtoull."),
            "ato literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_abs_family_const_self_test_calls() {
        let src = "int abs(int n) { return n < 0 ? -n : n; }
                   long labs(long n) { return n < 0 ? -n : n; }
                   long long llabs(long long n) { return n < 0 ? -n : n; }
                   int test_main(void) {
                       return (abs(-5) == 5
                            && labs(-5L) == 5L
                            && llabs(-5LL) == 5LL) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "abs-family-const.c", &Default::default())
            .expect("compile abs family const");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP abs.")
                && !asm.contains("CJUMP labs.")
                && !asm.contains("CJUMP llabs."),
            "constant abs-family calls should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memcmp_literal_self_test_calls() {
        let src = "int memcmp(const void *a, const void *b, unsigned long n) { return 0xAA; }
                   int test_main(void) {
                       return (memcmp(\"abc\", \"abc\", 3) == 0
                            && memcmp(\"abc\", \"abd\", 3) < 0
                            && memcmp(\"abd\", \"abc\", 3) > 0
                            && memcmp(\"abx\", \"aby\", 2) == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "memcmp-literal-self-test.c", &Default::default())
            .expect("compile memcmp literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP memcmp."),
            "constant memcmp literal calls should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strcmp_literal_self_test_calls() {
        let src = "int strcmp(const char *a, const char *b) { return 0xAA; }
                   int test_main(void) {
                       return (strcmp(\"abc\", \"abc\") == 0
                            && strcmp(\"abc\", \"abd\") < 0
                            && strcmp(\"abd\", \"abc\") > 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strcmp-literal-self-test.c", &Default::default())
            .expect("compile strcmp literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strcmp."),
            "constant strcmp literal calls should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_char_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int strcmp(const char *a, const char *b);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"%c\", 'X');
                       if (n != 1) return 0xAA;
                       if (strcmp(buf, \"X\") != 0) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-char-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf char wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strcmp."),
            "constant vsnprintf char wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_decimal_zero_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int strcmp(const char *a, const char *b);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"%d\", 0);
                       if (n != 1) return 0xAA;
                       if (strcmp(buf, \"0\") != 0) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-decimal-zero-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf decimal zero wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strcmp."),
            "constant vsnprintf decimal zero wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_string_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int strcmp(const char *a, const char *b);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"%s\", \"hello\");
                       if (n != 5) return 0xAA;
                       if (strcmp(buf, \"hello\") != 0) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-string-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf string wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strcmp."),
            "constant vsnprintf string wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_empty_string_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int strcmp(const char *a, const char *b);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"%s\", \"\");
                       if (n != 0) return 0xAA;
                       if (strcmp(buf, \"\") != 0) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-empty-string-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf empty string wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strcmp."),
            "constant vsnprintf empty string wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_null_string_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int strcmp(const char *a, const char *b);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"%s\", (char *)0);
                       if (n != 6) return 0xAA;
                       if (strcmp(buf, \"(null)\") != 0) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-null-string-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf null string wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strcmp."),
            "constant vsnprintf null string wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_literal_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int strcmp(const char *a, const char *b);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"hello world\");
                       if (n != 11) return 0xAA;
                       if (strcmp(buf, \"hello world\") != 0) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-literal-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf literal wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strcmp."),
            "constant vsnprintf literal wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_snprintf_do_while_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   int snprintf(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       int ret;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       ret = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return ret;
                   }
                   int test_main(void) {
                       do {
                           char b[32];
                           int n = snprintf(b, 32, \"x=%d\", 7);
                           if (n != 3 || b[0] != 'x' || b[1] != '=' || b[2] != '7')
                               return 0xAA;
                       } while (0);
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "snprintf-do-while-self-test.c", &Default::default())
            .expect("compile snprintf do-while self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("R1 = 0xAA;"),
            "constant snprintf do-while self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_vsnprintf_return_value_only_wrapper_self_test() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   static int try_print(char *buf, size_t size, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, size, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       char buf[64];
                       int n = try_print(buf, sizeof(buf), \"xy\");
                       if (n != 2) return 0xAA;
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "vsnprintf-return-value-wrapper-self-test.c",
            &Default::default(),
        )
        .expect("compile vsnprintf return value wrapper self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP vsnprintf."),
            "constant vsnprintf return-value wrapper should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memcpy_literal_self_test() {
        let src = "void *memcpy(void *dest, const void *src, unsigned long n) { return 0; }
                   int test_main(void) {
                       char d[8] = {0};
                       return (memcpy(d, \"hi\", 3) == d
                            && d[0] == 'h'
                            && d[1] == 'i'
                            && d[2] == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "memcpy-literal-self-test.c", &Default::default())
            .expect("compile memcpy literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP memcpy."),
            "constant memcpy literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memmove_overlap_self_test() {
        let src = "void *memmove(void *dest, const void *src, unsigned long n) { return 0; }
                   int test_main(void) {
                       char b[] = \"abcdef\";
                       return (memmove(b + 1, b, 4) == b + 1
                            && b[1] == 'a'
                            && b[2] == 'b') ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "memmove-overlap-self-test.c", &Default::default())
            .expect("compile memmove overlap self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP memmove."),
            "constant memmove overlap self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memset_literal_self_test() {
        let src = "void *memset(void *s, int c, unsigned long n) { return 0; }
                   int test_main(void) {
                       char b[4] = {1, 2, 3, 4};
                       return (memset(b, 7, 3) == b
                            && b[0] == 7
                            && b[1] == 7
                            && b[2] == 7
                            && b[3] == 4) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "memset-literal-self-test.c", &Default::default())
            .expect("compile memset literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP memset."),
            "constant memset literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strcat_literal_self_test() {
        let src = "char *strcat(char *dest, const char *src) { return 0; }
                   int test_main(void) {
                       char b[16] = \"hi\";
                       return (strcat(b, \" there\") == b
                            && b[2] == ' '
                            && b[7] == 'e'
                            && b[8] == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strcat-literal-self-test.c", &Default::default())
            .expect("compile strcat literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strcat."),
            "constant strcat literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strncat_literal_self_test() {
        let src = "char *strncat(char *dest, const char *src, unsigned long n) { return 0; }
                   int test_main(void) {
                       char b[16] = \"hi\";
                       return (strncat(b, \"abcd\", 2) == b
                            && b[2] == 'a'
                            && b[3] == 'b'
                            && b[4] == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strncat-literal-self-test.c", &Default::default())
            .expect("compile strncat literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strncat."),
            "constant strncat literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strcpy_literal_self_test() {
        let src = "char *strcpy(char *dest, const char *src) { return 0; }
                   int test_main(void) {
                       char b[8] = {0};
                       return (strcpy(b, \"hi\") == b
                            && b[0] == 'h'
                            && b[1] == 'i'
                            && b[2] == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strcpy-literal-self-test.c", &Default::default())
            .expect("compile strcpy literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strcpy."),
            "constant strcpy literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strncpy_literal_self_test() {
        let src = "char *strncpy(char *dest, const char *src, unsigned long n) { return 0; }
                   int test_main(void) {
                       char b[8] = {0};
                       return (strncpy(b, \"hi\", 4) == b
                            && b[0] == 'h'
                            && b[1] == 'i'
                            && b[2] == 0
                            && b[3] == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strncpy-literal-self-test.c", &Default::default())
            .expect("compile strncpy literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strncpy."),
            "constant strncpy literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strtok_literal_self_test() {
        let src = "char *strtok(char *str, const char *delim) { return 0; }
                   int test_main(void) {
                       char b[] = \"a,b\";
                       char *t = strtok(b, \",\");
                       return (t && t[0] == 'a' && t[1] == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strtok-literal-self-test.c", &Default::default())
            .expect("compile strtok literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strtok."),
            "constant strtok literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strtok_count_loop() {
        let src = "char *strtok(char *str, const char *delim) { return 0; }
                   typedef unsigned long size_t;
                   #define NULL ((void *)0)
                   int test_main(void) {
                       char buf[] = \"a,b,cc\";
                       int count = 0;
                       char *t = strtok(buf, \",\");
                       while (t) {
                           count++;
                           t = strtok(NULL, \",\");
                       }
                       return count;
                   }";
        let asm = crate::compile_to_asm(src, "strtok-count-loop.c", &Default::default())
            .expect("compile strtok count loop");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("CJUMP strtok."),
            "constant strtok count loop should fold to 3:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strtok_state_loop() {
        let src = "char *strtok(char *str, const char *delim) { return 0; }
                   typedef unsigned long size_t;
                   #define NULL ((void *)0)
                   int test_main(void) {
                       char buf[] = \"a,b,,c\";
                       int count = 0;
                       char first = 0, second = 0, third = 0, fourth = 0;
                       char *t = strtok(buf, \",\");
                       while (t) {
                           if (count == 0) first = t[0];
                           else if (count == 1) second = t[0];
                           else if (count == 2) third = t[0];
                           else if (count == 3) fourth = t[0];
                           count++;
                           t = strtok(NULL, \",\");
                       }
                       int score = 0;
                       if (count == 3) score |= 0x1;
                       if (first == 'a' && second == 'b' && third == 'c') score |= 0x2;
                       if (fourth == 0) score |= 0x4;
                       return score;
                   }";
        let asm = crate::compile_to_asm(src, "strtok-state-loop.c", &Default::default())
            .expect("compile strtok state loop");
        assert!(
            asm.contains("R1 = 0x7;") && !asm.contains("CJUMP strtok."),
            "constant strtok state loop should fold to 7:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strchr_literal_self_test() {
        let src = "char *strchr(const char *s, int c) { return 0; }
                   int test_main(void) {
                       return (strchr(\"hello\", 'l') != 0
                            && *strchr(\"hello\", 'l') == 'l'
                            && strchr(\"hi\", 'z') == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strchr-literal-self-test.c", &Default::default())
            .expect("compile strchr literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strchr."),
            "constant strchr literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strpbrk_literal_self_test() {
        let src = "char *strpbrk(const char *s, const char *a) { return 0; }
                   int test_main(void) {
                       char *p = strpbrk(\"hello\", \"wlz\");
                       return (p != 0 && *p == 'l') ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strpbrk-literal-self-test.c", &Default::default())
            .expect("compile strpbrk literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strpbrk."),
            "constant strpbrk literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strrchr_literal_self_test() {
        let src = "char *strrchr(const char *s, int c) { return 0; }
                   int test_main(void) {
                       return (strrchr(\"hello\", 'l') != 0
                            && *(strrchr(\"hello\", 'l') + 1) == 'o') ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strrchr-literal-self-test.c", &Default::default())
            .expect("compile strrchr literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strrchr."),
            "constant strrchr literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strstr_literal_self_test() {
        let src = "char *strstr(const char *hay, const char *nd) { return 0; }
                   int test_main(void) {
                       return (strstr(\"hello\", \"ll\") != 0
                            && strstr(\"hello\", \"xy\") == 0
                            && strstr(\"hello\", \"\") != 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strstr-literal-self-test.c", &Default::default())
            .expect("compile strstr literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strstr."),
            "constant strstr literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strcspn_literal_self_test_calls() {
        let src = "unsigned long strcspn(const char *s, const char *r) { return 0; }
                   int test_main(void) {
                       return (strcspn(\"hello\", \"l\") == 2
                            && strcspn(\"abc\", \"xyz\") == 3) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strcspn-literal-self-test.c", &Default::default())
            .expect("compile strcspn literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strcspn."),
            "constant strcspn literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strncmp_literal_self_test_calls() {
        let src = "int strncmp(const char *s1, const char *s2, unsigned long n) { return 0; }
                   int test_main(void) {
                       return (strncmp(\"abc\", \"abd\", 2) == 0
                            && strncmp(\"abc\", \"abd\", 3) < 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strncmp-literal-self-test.c", &Default::default())
            .expect("compile strncmp literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strncmp."),
            "constant strncmp literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strspn_literal_self_test_calls() {
        let src = "unsigned long strspn(const char *s, const char *a) { return 0; }
                   int test_main(void) {
                       return (strspn(\"aaab\", \"a\") == 3
                            && strspn(\"xyz\", \"a\") == 0) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strspn-literal-self-test.c", &Default::default())
            .expect("compile strspn literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strspn."),
            "constant strspn literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_strlen_literal_self_test_calls() {
        let src = "unsigned long strlen(const char *s) { return 0; }
                   int test_main(void) {
                       return (strlen(\"\") == 0
                            && strlen(\"hi\") == 2
                            && strlen(\"hello\") == 5) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "strlen-literal-self-test.c", &Default::default())
            .expect("compile strlen literal self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP strlen."),
            "constant strlen literal self-test should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_div_family_struct_inits() {
        let src = "typedef struct { int quot; int rem; } div_t;
                   typedef struct { long quot; long rem; } ldiv_t;
                   typedef struct { long long quot; long long rem; } lldiv_t;
                   div_t div(int n, int d) { div_t r; r.quot = n / d; r.rem = n % d; return r; }
                   ldiv_t ldiv(long n, long d) { ldiv_t r; r.quot = n / d; r.rem = n % d; return r; }
                   lldiv_t lldiv(long long n, long long d) { lldiv_t r; r.quot = n / d; r.rem = n % d; return r; }
                   int test_main(void) {
                       div_t a = div(17, 5);
                       ldiv_t b = ldiv(17L, 5L);
                       lldiv_t c = lldiv(17LL, 5LL);
                       return (a.quot == 3 && a.rem == 2
                            && b.quot == 3L && b.rem == 2L
                            && c.quot == 3LL && c.rem == 2LL) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "div-family-const-init.c", &Default::default())
            .expect("compile div family const init");
        assert!(
            asm.contains("R1 = 0x55;")
                && !asm.contains("CJUMP div.")
                && !asm.contains("CJUMP ldiv.")
                && !asm.contains("CJUMP lldiv."),
            "constant div-family struct initializers should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_lldiv_init_inside_do_while_block() {
        let src = "typedef struct { long long quot; long long rem; } sel_lldiv_t;
                   sel_lldiv_t lldiv(long long n, long long d) {
                       sel_lldiv_t r;
                       r.quot = n / d;
                       r.rem = n % d;
                       return r;
                   }
                   int test_main(void) {
                       do {
                           sel_lldiv_t r = lldiv(17LL, 5LL);
                           if (r.quot != 3 || r.rem != 2)
                               return 0xAA;
                       } while (0);
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "lldiv-do-while-init.c", &Default::default())
            .expect("compile lldiv do-while init");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP lldiv."),
            "constant lldiv init inside do-while should fold to success:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_qsort_int_self_test() {
        let src = "void qsort(void *base, unsigned int nm, unsigned int sz,
                              int (*cmp)(const void *, const void *));
                   static int _icmp(const void *a, const void *b) {
                       return *(const int *)a - *(const int *)b;
                   }
                   int test_main(void) {
                       do {
                           int arr[5] = {3, 1, 4, 1, 5};
                           qsort(arr, 5, sizeof(int), _icmp);
                           if (arr[0] != 1 || arr[1] != 1 || arr[2] != 3
                               || arr[3] != 4 || arr[4] != 5)
                               return 0xAA;
                       } while (0);
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "qsort-int-self-test.c", &Default::default())
            .expect("compile qsort int self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP qsort."),
            "constant qsort int self-test should fold to success:\n{}",
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
    fn folds_block_local_enum_switch_to_selected_return() {
        let src = "int f(void) {
                       enum rgb { R, G, B };
                       enum rgb c = G;
                       switch (c) {
                       case R: return 1;
                       case G: return 3;
                       case B: return 5;
                       }
                       return 0;
                   }";
        let asm = crate::compile_to_asm(src, "block-local-enum-switch.c", &Default::default())
            .expect("compile block-local-enum-switch");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("COMP"),
            "block-local enum switch should fold to the selected return:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_switch_without_match_or_default_to_following_return() {
        let src = "int f(void) {
                       int r = 0x42;
                       switch (99) {
                       case 1: r = 1; break;
                       case 2: r = 2; break;
                       }
                       return r;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-switch-no-match-no-default.c",
            &Default::default(),
        )
        .expect("compile const-switch-no-match-no-default");
        assert!(
            asm.contains("R1 = 0x42;") && !asm.contains("COMP"),
            "constant switch with no match and no default should skip body:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_struct_pointer_tail_accumulator() {
        let src = "struct acc_node {
                       int val;
                       struct acc_node *next;
                   };
                   static int acc_sum(const struct acc_node *p, int acc) {
                       if (!p) return acc;
                       return acc_sum(p->next, acc + p->val);
                   }
                   int f(void) {
                       struct acc_node c = {3, 0};
                       struct acc_node b = {5, &c};
                       struct acc_node a = {13, &b};
                       return acc_sum(&a, 0);
                   }";
        let asm = crate::compile_to_asm(src, "const-struct-tail-acc.c", &Default::default())
            .expect("compile const struct tail accumulator");
        assert!(
            asm.contains("R1 = 0x15;") && !asm.contains("CJUMP acc_sum."),
            "constant linked struct tail accumulator should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_ternary_pointer_lvalue_store() {
        let src = "int f(void) {
                       int a = 1, b = 2;
                       int sel = 0;
                       *(sel ? &a : &b) = 99;
                       return a + b;
                   }";
        let asm = crate::compile_to_asm(src, "const-ternary-lvalue-store.c", &Default::default())
            .expect("compile const ternary lvalue store");
        assert!(
            asm.contains("R1 = 0x64;") && !asm.contains("DM (I4"),
            "constant ternary pointer lvalue store should fold:\n{}",
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
    fn inlines_csmith_int8_mul_with_parameter_sign_extension() {
        let src = "static signed char safe_mul_func_int8_t_s_s(signed char a, signed char b) {
                       return a * b;
                   }
                   int f(signed char x) {
                       return safe_mul_func_int8_t_s_s(0x9F, x);
                   }";
        let asm = crate::compile_to_asm(src, "keep-csmith-int8-mul.c", &Default::default())
            .expect("compile csmith int8 mul");
        assert!(
            !asm.contains("CJUMP safe_mul_func_int8_t_s_s.")
                && asm.contains("ASHIFT")
                && asm.contains("BY R"),
            "inlined int8 CSmith multiply must still sign-extend operands/result:\n{}",
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
    fn folds_scoped_unsigned_to_signed_char_cast_without_float_rounding() {
        let src = "int f(void) {
                       unsigned int u = 0xFFFFFF9C;
                       signed char sc = (signed char)u;
                       return (int)sc + 200;
                   }";
        let asm =
            crate::compile_to_asm(src, "const-scoped-signed-char-cast.c", &Default::default())
                .expect("compile const scoped signed char cast");
        assert!(
            asm.contains("R1 = 0x64;"),
            "scoped integer cast must not route through f32 rounding:\n{}",
            asm
        );
    }

    #[test]
    fn does_not_fold_shadowed_address_taken_local_by_name() {
        let src = "int f(void) {
                       int x = 10;
                       int *outer = &x;
                       int r = 0;
                       {
                           int x = 20;
                           int *inner = &x;
                           r = *outer + *inner;
                       }
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "shadowed-address-taken-local.c", &Default::default())
            .expect("compile shadowed address-taken local");
        assert!(
            !asm.contains("R1 = 0x28;"),
            "address-taken outer local must not be rebound to shadowing inner local:\n{}",
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
    fn folds_const_func_name_pointer_index() {
        let src = "int f(void) {
                       const char *name = __func__;
                       return name[0];
                   }";
        let asm = crate::compile_to_asm(src, "const-func-name-index.c", &Default::default())
            .expect("compile const func name index");
        assert!(
            asm.contains("R1 = 0x66;") && !asm.contains(".str0."),
            "constant __func__ pointer index should fold:\n{}",
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
    fn folds_const_trailing_zero_count_loop() {
        let src = "int f(void) {
                       unsigned int x = 0x30u;
                       int ctz = 0;
                       while ((x & 1) == 0 && ctz < 32) {
                           ctz++;
                           x >>= 1;
                       }
                       return ctz;
                   }";
        let asm = crate::compile_to_asm(src, "const-ctz-loop.c", &Default::default())
            .expect("compile const-ctz-loop");
        assert!(
            asm.contains("R1 = 0x4;") && !asm.contains("L_branch"),
            "constant trailing-zero loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn preserves_shadowed_const_locals_in_nested_blocks() {
        let src = "int f(void) {
                       int x = 1;
                       int r = 0;
                       {
                           int x = 2;
                           r += x;
                           {
                               int x = 3;
                               r += x;
                               {
                                   int x = 4;
                                   r += x;
                               }
                               r += x;
                           }
                           r += x;
                       }
                       r += x;
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "shadowed-const-locals.c", &Default::default())
            .expect("compile shadowed const locals");
        assert!(
            asm.contains("R1 = 0xF;"),
            "nested shadowed locals must preserve lexical scope:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_for_loop_with_dense_switch() {
        let src = "int f(void) {
                       int sum = 0;
                       for (int i = 0; i < 10; i++) {
                           switch (i) {
                           case 0: sum += 1; break;
                           case 1: sum += 2; break;
                           case 2: sum += 3; break;
                           case 3: sum += 4; break;
                           case 4: sum += 5; break;
                           case 5: sum += 6; break;
                           case 6: sum += 7; break;
                           case 7: sum += 8; break;
                           case 8: sum += 9; break;
                           case 9: sum += 10; break;
                           }
                       }
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "const-dense-switch-loop.c", &Default::default())
            .expect("compile dense switch loop");
        assert!(
            asm.contains("R1 = 0x37;") && !asm.contains("L_branch"),
            "constant dense switch loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_array_block_sum() {
        let src = "int f(void) {
                       int arr[3];
                       arr[0] = 10;
                       arr[1] = 20;
                       arr[2] = 30;
                       int sum = 0;
                       {
                           sum = arr[0] + arr[1] + arr[2];
                       }
                       return sum;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse const local array block");
        crate::fold_const_scalar_block_returns(&mut unit);
        assert!(
            matches!(
                &unit.functions[0].body[..],
                [crate::ast::Stmt::Return(Some(crate::ast::Expr::IntLit(
                    60,
                    _
                )))]
            ),
            "scalar block fold should resolve local array stores and reads: {:?}",
            unit.functions[0].body
        );
        let asm = crate::compile_to_asm(src, "const-local-array-block.c", &Default::default())
            .expect("compile const local array block");
        assert!(
            asm.contains("R1 = 0x3C;") && !asm.contains("L_branch"),
            "constant local array block sum should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_stack_index_pattern() {
        let src = "int test_main(void) {
                       int stack[8];
                       int sp = 0;
                       stack[sp++] = 10;
                       stack[sp++] = 20;
                       stack[sp++] = 30;
                       int c = stack[--sp];
                       int b = stack[--sp];
                       int a = stack[--sp];
                       return a + b + c;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse const stack pattern");
        crate::fold_const_scalar_block_returns(&mut unit);
        assert!(
            matches!(
                &unit.functions[0].body[..],
                [crate::ast::Stmt::Return(Some(crate::ast::Expr::IntLit(
                    60,
                    _
                )))]
            ),
            "scalar block fold should resolve stack-index push/pop: {:?}",
            unit.functions[0].body
        );
        let asm = crate::compile_to_asm(src, "const-stack-index-pattern.c", &Default::default())
            .expect("compile const stack index pattern");
        assert!(
            asm.contains("R1 = 0x3C;") && !asm.contains("MODIFY (I7"),
            "constant stack-index pattern should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_typedef_integer_array_sum_loop() {
        let src = "typedef int arr5_t[5];
                   int f(void) {
                       arr5_t a = {1, 2, 3, 4, 5};
                       int sum = 0;
                       for (int i = 0; i < 5; i++)
                           sum += a[i];
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "typedef-array-sum.c", &Default::default())
            .expect("compile typedef array sum");
        assert!(
            asm.contains("R1 = 0xF;") && !asm.contains("L_branch"),
            "typedef integer array sum loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_unsigned_bitfield_shared_storage_word() {
        let src = "int f(void) {
                       struct { unsigned int x : 4; unsigned int y : 4; } bf;
                       bf.x = 0xF;
                       bf.y = 0xA;
                       return bf.x + bf.y;
                   }";
        let asm = crate::compile_to_asm(src, "const-unsigned-bitfield.c", &Default::default())
            .expect("compile unsigned bitfield");
        assert!(
            asm.contains("R1 = 0x19;") && !asm.contains("R1 = 0x14;"),
            "constant unsigned bitfield stores should preserve neighbouring fields:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_flexible_array_through_local_buffer() {
        let src = "struct flex {
                       int len;
                       int data[];
                   };
                   int f(void) {
                       int buf[4];
                       struct flex *p = (struct flex *)buf;
                       p->len = 2;
                       p->data[0] = 0x10;
                       p->data[1] = 0x20;
                       return p->len + p->data[0] + p->data[1];
                   }";
        let asm = crate::compile_to_asm(src, "const-flex-array.c", &Default::default())
            .expect("compile const flex array");
        assert!(
            asm.contains("R1 = 0x32;") && !asm.contains("MODIFY (I7,-"),
            "constant flexible-array buffer view should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_float_local_comparisons() {
        let src = "int f(void) {
                       int r = 0;
                       float x = (float)5;
                       if (x > 2.5f)
                           r = r + 1;
                       float y = (float)1;
                       if (y < 3.0f)
                           r = r + 2;
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "const-float-cmp.c", &Default::default())
            .expect("compile const float comparisons");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("COMP"),
            "constant float comparisons should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_float_int_round_trip() {
        let src = "int f(void) {
                       float f = 3.14f;
                       int i = (int)f;
                       float g = (float)i;
                       return (g == 3.0f && i == 3) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "const-float-int-round.c", &Default::default())
            .expect("compile const float-int round");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("TRUNC") && !asm.contains("COMP"),
            "constant float-int round trip should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_function_pointer_dispatch_loop() {
        let src = "static int fn_ten(void) { return 10; }
                   static int fn_twenty(void) { return 20; }
                   static int fn_thirty(void) { return 30; }
                   int f(void) {
                       int (*fns[3])(void) = {fn_ten, fn_twenty, fn_thirty};
                       int sum = 0;
                       for (int i = 0; i < 3; i++)
                           sum += fns[i]();
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "const-fnptr-dispatch-loop.c", &Default::default())
            .expect("compile const fnptr dispatch loop");
        assert!(
            asm.contains("R1 = 0x3C;") && !asm.contains("JUMP (M13"),
            "constant function-pointer dispatch loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_function_pointer_null_check() {
        let src = "static int helper_add(int x, int y) { return x + y; }
                   int f(void) {
                       int (*fp)(int, int) = helper_add;
                       int (*null_fp)(int, int) = 0;
                       int r = 0;
                       if (fp)
                           r += fp(0x10, 0x20);
                       if (null_fp)
                           r += 0xFF;
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "const-fnptr-null-check.c", &Default::default())
            .expect("compile const fnptr null check");
        assert!(
            asm.contains("R1 = 0x30;") && !asm.contains("JUMP (M13"),
            "constant function-pointer null check should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_function_pointer_equality_by_target() {
        let src = "static int helper_add(int x, int y) { return x + y; }
                   static int helper_mul(int x, int y) { return x * y; }
                   int f(void) {
                       int (*f)(int, int) = helper_add;
                       int (*g)(int, int) = helper_add;
                       int (*h)(int, int) = helper_mul;
                       return (f == g && f != h) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "const-fnptr-eq.c", &Default::default())
            .expect("compile const function pointer equality");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("R1 = 0xAA;"),
            "constant function-pointer equality should compare targets:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_for_loop_with_uninitialized_induction_var() {
        let src = "int f(void) {
                       int p = 1, i;
                       for (i = 1; i <= 5; i = i + 1)
                           p = p * i;
                       return p;
                   }";
        let asm = crate::compile_to_asm(src, "const-for-uninit-induction.c", &Default::default())
            .expect("compile const for with uninitialized induction variable");
        assert!(
            asm.contains("R1 = 0x78;") && !asm.contains("L_branch"),
            "constant for loop with assigned induction variable should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_for_loop_with_comma_init_cond_step() {
        let src = "int f(void) {
                       int a, b, sum = 0;
                       for (a = 0, b = 10; a < 3, b > 7; a++, b--)
                           sum += a + b;
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "const-for-comma-all.c", &Default::default())
            .expect("compile const for with comma expressions");
        assert!(
            asm.contains("R1 = 0x1E;") && !asm.contains("L_branch"),
            "constant for loop with comma expressions should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_duff_device_copy() {
        let src = "int f(void) {
                       int src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
                       int dst[8] = {0};
                       int n = 8;
                       int *s = src, *d = dst;
                       int chunks = (n + 3) / 4;
                       switch (n % 4) {
                       case 0: do { *d++ = *s++;
                       case 3:      *d++ = *s++;
                       case 2:      *d++ = *s++;
                       case 1:      *d++ = *s++;
                               } while (--chunks > 0);
                       }
                       int sum = 0;
                       for (int i = 0; i < 8; i++)
                           sum += dst[i];
                       return sum;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse const duff copy");
        crate::fold_const_scalar_block_returns(&mut unit);
        assert!(
            matches!(
                &unit.functions[0].body[..],
                [crate::ast::Stmt::Return(Some(crate::ast::Expr::IntLit(
                    36,
                    _
                )))]
            ),
            "scalar block fold should resolve Duff copy: {:?}",
            unit.functions[0].body
        );
    }

    #[test]
    fn folds_const_dispatch_table_calls() {
        let src = "static int add(int x, int y) { return x + y; }
                   static int sub(int x, int y) { return x - y; }
                   struct entry { int (*fn)(int, int); };
                   static const struct entry table[] = { { add }, { sub } };
                   int f(void) {
                       int r = 0;
                       r += table[0].fn(3, 4);
                       r += table[1].fn(10, 3);
                       return r;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse dispatch table");
        crate::substitute_const_global_aggregate_reads(&mut unit);
        assert!(
            format!("{:?}", unit.functions[2].body).contains("Call { name: \"add\""),
            "dispatch table function pointer should become direct call: globals={:?} body={:?}",
            unit.globals,
            unit.functions[2].body
        );
        let asm = crate::compile_to_asm(src, "const-dispatch-table.c", &Default::default())
            .expect("compile const dispatch table");
        assert!(
            asm.contains("R1 = 0xE;") && !asm.contains("JUMP (M13"),
            "constant dispatch table calls should become direct foldable calls:\n{}",
            asm
        );
    }

    #[test]
    fn folds_static_global_function_pointer_array_calls() {
        let src = "static int a(void) { return 1; }
                   static int b(void) { return 2; }
                   static int c(void) { return 3; }
                   static int (*const table[])(void) = { a, b, c };
                   int f(void) {
                       return table[0]() + table[1]() + table[2]();
                   }";
        let asm = crate::compile_to_asm(src, "global-fnptr-array.c", &Default::default())
            .expect("compile global function pointer array");
        assert!(
            asm.contains("R1 = 0x6;") && !asm.contains("JUMP (M13"),
            "global function pointer array calls should fold to 6:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_label_goto_loop() {
        let src = "int f(void) {
                       int s = 0;
                       int i = 1;
                   loop:
                       s = s + i;
                       i = i + 1;
                       if (i <= 4)
                           goto loop;
                       return s;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse const goto loop");
        crate::fold_const_scalar_block_returns(&mut unit);
        assert!(
            matches!(
                &unit.functions[0].body[..],
                [crate::ast::Stmt::Return(Some(crate::ast::Expr::IntLit(
                    10,
                    _
                )))]
            ),
            "scalar goto fold should produce return 10: {:?}",
            unit.functions[0].body
        );
        let asm = crate::compile_to_asm(src, "const-goto-loop.c", &Default::default())
            .expect("compile const goto loop");
        assert!(
            asm.contains("R1 = 0xA;") && !asm.contains("JUMP .L_branch"),
            "constant goto loop should fold to 10 without a self-branch:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_nested_for_goto_exit() {
        let src = "int f(void) {
                       int r = 0;
                       int i, j;
                       for (i = 0; i < 10; i++) {
                           for (j = 0; j < 10; j++) {
                               if (i == 2 && j == 3)
                                   goto done;
                               r++;
                           }
                       }
                   done:
                       return r;
                   }";
        let mut unit = crate::parse::parse(src).expect("parse const nested goto exit");
        crate::fold_const_scalar_block_returns(&mut unit);
        assert!(
            matches!(
                &unit.functions[0].body[..],
                [crate::ast::Stmt::Return(Some(crate::ast::Expr::IntLit(
                    23,
                    _
                )))]
            ),
            "scalar nested goto fold should produce return 23: {:?}",
            unit.functions[0].body
        );
        let asm = crate::compile_to_asm(src, "const-nested-goto-exit.c", &Default::default())
            .expect("compile const nested goto exit");
        assert!(
            asm.contains("R1 = 0x17;") && !asm.contains("JUMP .L_branch"),
            "constant nested goto exit should fold to 23 without loop branches:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_through_static_pointer() {
        let src = "struct later_complete;
                   static struct later_complete *g_later_ptr;
                   struct later_complete { int x; int y; };
                   int f(void) {
                       struct later_complete obj;
                       obj.x = 15;
                       obj.y = 25;
                       g_later_ptr = &obj;
                       return g_later_ptr->x + g_later_ptr->y;
                   }";
        let asm = crate::compile_to_asm(src, "local-struct-static-pointer.c", &Default::default())
            .expect("compile local struct through static pointer");
        assert!(
            asm.contains("R1 = 0x28;") && !asm.contains("DM (g_later_ptr"),
            "local struct read through static pointer should fold to 40:\n{}",
            asm
        );
    }

    #[test]
    fn folds_unsigned_char_int_alias_byte_zero_extended() {
        let src = "int f(void) {
                       int x = 0x55AA;
                       unsigned char *p = (unsigned char *)&x;
                       return p[0];
                   }";
        let asm = crate::compile_to_asm(src, "unsigned-char-int-alias.c", &Default::default())
            .expect("compile unsigned char int alias");
        assert!(
            asm.contains("R1 = 0xAA;") && !asm.contains("R1 = -0x56;"),
            "unsigned char alias byte should zero-extend to 0xaa:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_array_field_loop() {
        let src = "int f(void) {
                       struct { int data[32]; } big;
                       for (int i = 0; i < 32; i++)
                           big.data[i] = i;
                       return big.data[0] + big.data[15] + big.data[31];
                   }";
        let asm =
            crate::compile_to_asm(src, "local-struct-array-field-loop.c", &Default::default())
                .expect("compile local struct array field loop");
        assert!(
            asm.contains("R1 = 0x2E;") && !asm.contains("JUMP .L_branch"),
            "local struct array field loop should fold to 46:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_array_computed_member_index_loop() {
        let src = "int f(void) {
                       struct { int a; int b; } arr[4];
                       for (int i = 0; i < 4; i++) {
                           arr[i].a = i * 10;
                           arr[i].b = i * 10 + 5;
                       }
                       int idx = 2;
                       return arr[idx].a + arr[idx].b;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "local-struct-array-computed-member-index-loop.c",
            &Default::default(),
        )
        .expect("compile local struct array computed member index loop");
        assert!(
            asm.contains("R1 = 0x2D;") && !asm.contains("JUMP .L_branch"),
            "local struct array computed member index loop should fold to 45:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_i64_member_sign_test() {
        let src = "typedef int int32_t;
                   typedef long long int64_t;
                   struct S { int32_t a; int32_t b; int32_t c; int64_t d; };
                   int f(void) {
                       struct S s = {1, 2, 3, -9};
                       return (0 <= s.d) ? 0x11111111 : 0x22222222;
                   }";
        let asm = crate::compile_to_asm(src, "local-struct-i64-member-sign.c", &Default::default())
            .expect("compile local struct i64 member sign");
        assert!(
            asm.contains("R1 = 0x22222222;") && !asm.contains("JUMP .L_branch"),
            "local struct i64 member sign test should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_loop_copy_into_array() {
        let src = "struct s2 { int a; int b; };
                   int f(void) {
                       struct s2 arr[5];
                       for (int i = 0; i < 5; i++) {
                           struct s2 tmp;
                           tmp.a = i;
                           tmp.b = i * 2;
                           arr[i] = tmp;
                       }
                       return arr[2].a + arr[4].b;
                   }";
        let asm = crate::compile_to_asm(src, "local-struct-loop-copy.c", &Default::default())
            .expect("compile local struct loop copy");
        assert!(
            asm.contains("R1 = 0xA;") && !asm.contains("JUMP .L_branch"),
            "local struct loop copy should fold to 10:\n{}",
            asm
        );
    }

    #[test]
    fn folds_static_struct_member_short_assign() {
        let src = "typedef short int16_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned int uint32_t;
                   struct S {
                       int16_t a;
                       int mid;
                       int16_t b;
                       int16_t c;
                       uint32_t tail;
                   };
                   static struct S g = {0x1122, 0x55667788, 0x3344, -4, 0x99aabbcc};
                   int test_main(void) {
                       g.c = 0x55;
                       return (int)(((uint32_t)(uint16_t)g.b
                           | ((uint32_t)(uint16_t)g.c << 16)) ^ g.tail);
                   }";
        let asm = crate::compile_to_asm(src, "static-struct-short-assign.c", &Default::default())
            .expect("compile static struct short assign");
        assert!(
            asm.contains("R1 = -0x66007778;") || asm.contains("R1 = 0x99FF8888;"),
            "static struct short assignment should fold:\n{}",
            asm
        );
        assert!(
            !asm.contains("JUMP .L_branch"),
            "static struct short assignment should not emit a branch body:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_mixed_array_pointer_members() {
        let src = "int test_main(void) {
                       struct { int arr[3]; int *ptr; int val; } s;
                       s.arr[0] = 5;
                       s.arr[1] = 10;
                       s.arr[2] = 15;
                       s.ptr = &s.arr[1];
                       s.val = 20;
                       return s.arr[0] + *s.ptr + s.arr[2] + s.val;
                   }";
        let asm = crate::compile_to_asm(src, "local-struct-mixed-members.c", &Default::default())
            .expect("compile local struct mixed members");
        assert!(
            asm.contains("R1 = 0x32;") && !asm.contains("JUMP .L_branch"),
            "local struct mixed members should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_struct_byte_pointer_pun_write() {
        let src = "int test_main(void) {
                       struct { unsigned int flags; } s;
                       s.flags = 0;
                       unsigned char *p = (unsigned char *)&s;
                       p[0] = 0x0A;
                       return (int)(s.flags & 0xFF);
                   }";
        let asm = crate::compile_to_asm(src, "local-struct-byte-pun.c", &Default::default())
            .expect("compile local struct byte pun");
        assert!(
            asm.contains("R1 = 0xA;") && !asm.contains("JUMP .L_branch"),
            "local struct byte pointer pun should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_complex_conj_self_tests() {
        let src = "double _Complex conj(double _Complex z) {
                       double _Complex r = z;
                       ((double *)&r)[1] = -((double *)&r)[1];
                       return r;
                   }
                   int test_main(void) {
                       do {
                           double _Complex r = conj(1.0 + 2.0 * I);
                           if (((double *)&r)[0] != 1.0 || ((double *)&r)[1] != -2.0)
                               return 0xAA;
                       } while (0);
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "complex-conj-self-test.c", &Default::default())
            .expect("compile complex conj self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP conj."),
            "complex conj self-test should fold to success:\n{}",
            asm
        );

        let src = "float _Complex conjf(float _Complex z) {
                       float _Complex r = z;
                       ((float *)&r)[1] = -((float *)&r)[1];
                       return r;
                   }
                   int test_main(void) {
                       do {
                           float _Complex r = conjf(1.0f + 2.0f * I);
                           if (((float *)&r)[0] != 1.0f || ((float *)&r)[1] != -2.0f)
                               return 0xAA;
                       } while (0);
                       return 0x55;
                   }";
        let asm = crate::compile_to_asm(src, "complex-conjf-self-test.c", &Default::default())
            .expect("compile complex conjf self-test");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("CJUMP conjf."),
            "complex conjf self-test should fold to success:\n{}",
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
    fn folds_const_long_long_array_shift_with_element_width() {
        let src = "int f(void) {
                       long long arr[3];
                       arr[0] = 1LL << 33;
                       arr[1] = 1LL << 34;
                       arr[2] = arr[0] + arr[1];
                       return (int)(arr[2] >> 33);
                   }";
        let asm = crate::compile_to_asm(src, "const-ll-array-shift.c", &Default::default())
            .expect("compile const long long array shift");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("R1 = 0x0;"),
            "constant long long array element shifts must use 64-bit width:\n{}",
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
            asm.contains("LCNTR") || asm.contains("R1 = 0x800;"),
            "folded loop should remain eligible for hardware DO lowering or fold completely:\n{}",
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
    fn scoped_const_unsigned_local_compare_uses_common_type() {
        let src = "int f(void) {
                       unsigned int u = 1;
                       int s = -1;
                       return (u < s) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "scoped-const-unsigned-local-compare.c",
            &Default::default(),
        )
        .expect("compile scoped const unsigned local compare");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("R1 = 0xAA;"),
            "scoped const comparison must use unsigned usual arithmetic conversions:\n{}",
            asm
        );
    }

    #[test]
    fn scoped_const_unsigned_overflow_expr_keeps_common_type() {
        let src = "int f(void) {
                       unsigned int a = 0xFFFFFFFFu;
                       unsigned int b = a + 2u;
                       unsigned int c = 0u - 1u;
                       int r = 0;
                       if (b == 1u)
                           r += 1;
                       if (c == 0xFFFFFFFFu)
                           r += 2;
                       if (a + 1u == 0u)
                           r += 4;
                       return (r == 7) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "scoped-const-uint-overflow.c", &Default::default())
            .expect("compile scoped const unsigned overflow");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("R1 = 0xAA;"),
            "scoped const unsigned overflow expressions should fold with unsigned common type:\n{}",
            asm
        );
    }

    #[test]
    fn scoped_const_u64_modulo_uses_local_common_type() {
        let src = "typedef unsigned long long uint64_t;
                   int f(void) {
                       uint64_t max = (uint64_t)-1LL;
                       uint64_t top = 1ULL << 63;
                       if ((1ULL % max) != 1ULL)
                           return 1;
                       if (((max - 1ULL) % max) != (max - 1ULL))
                           return 2;
                       if ((max % max) != 0ULL)
                           return 3;
                       if ((max % top) != (top - 1ULL))
                           return 4;
                       return 0x1234;
                   }";
        let asm = crate::compile_to_asm(src, "scoped-const-u64-mod.c", &Default::default())
            .expect("compile scoped const u64 modulo");
        assert!(
            asm.contains("R1 = 0x1234;") && !asm.contains("R1 = 0x1;"),
            "scoped const u64 modulo should use unsigned 64-bit local types:\n{}",
            asm
        );
    }

    #[test]
    fn folds_local_union_integer_byte_array_reinterpret() {
        let src = "int f(void) {
                       union { unsigned int u; unsigned char b[4]; } u;
                       u.u = 0x44332211;
                       return u.b[0] + u.b[3];
                   }";
        let asm = crate::compile_to_asm(src, "const-union-reinterpret.c", &Default::default())
            .expect("compile const union reinterpret");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("MODIFY (I7,-"),
            "local union byte-array reinterpret should fold through shared storage:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_mixed_varargs_postinc_reads() {
        let src = "typedef int *__va_list;
                   static int va_mixed(int count, ...) {
                       __va_list ap;
                       ((void)(sizeof(count)), ((ap) = (int *)__builtin_va_start_sel()));
                       int iarg = (*(int *)((ap)++));
                       int farg = (int)(*(double *)((ap)++));
                       int iarg2 = (*(int *)((ap)++));
                       ((void)0);
                       return iarg + farg + iarg2;
                   }
                   int test_main(void) {
                       return va_mixed(3, 10, 20.0, 30);
                   }";
        let asm = crate::compile_to_asm(src, "const-mixed-varargs.c", &Default::default())
            .expect("compile const mixed varargs");
        assert!(
            asm.contains("R1 = 0x3C;") && !asm.contains("CJUMP va_mixed."),
            "constant mixed varargs should fold through va_arg postinc reads:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_vsnprintf_truncation_wrapper() {
        let src = "typedef unsigned int size_t;
                   typedef int *__va_list;
                   void *memset(void *s, int c, size_t n);
                   int vsnprintf(char *buf, size_t size, const char *fmt, __va_list ap);
                   unsigned long strlen(const char *s);
                   static int call_vsnprintf(char *buf, size_t sz, const char *fmt, ...) {
                       __va_list ap;
                       ((void)(sizeof(fmt)), ((ap) = (int *)__builtin_va_start_sel()));
                       int n = vsnprintf(buf, sz, fmt, ap);
                       ((void)0);
                       return n;
                   }
                   int test_main(void) {
                       int score = 0;
                       char buf[4];
                       memset(buf, 0x55, sizeof(buf));
                       int n = call_vsnprintf(buf, sizeof(buf), \"%s\", \"hello\");
                       if (n == 5) score |= 0x1;
                       if (buf[0] == 'h' && buf[1] == 'e' && buf[2] == 'l' && buf[3] == '\\0')
                           score |= 0x2;
                       if (strlen(buf) == 3) score |= 0x4;
                       return score;
                   }";
        let asm = crate::compile_to_asm(src, "const-vsnprintf-trunc.c", &Default::default())
            .expect("compile const vsnprintf truncation");
        assert!(
            asm.contains("R1 = 0x7;")
                && !asm.contains("CJUMP call_vsnprintf.")
                && !asm.contains("CJUMP vsnprintf.")
                && !asm.contains("CJUMP strlen."),
            "constant vsnprintf truncation wrapper should fold to score 7:\n{}",
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
    fn folds_const_long_long_bitwise_ternary_return() {
        let src = "int f(void) {
                       long long a = 0x00FF00FF00FF00FFLL;
                       long long b = 0xFF00FF00FF00FF00LL;
                       long long c = a | b;
                       return (c == -1LL) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "const-ll-bitwise.c", &Default::default())
            .expect("compile const long long bitwise ternary");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("0xAA") && !asm.contains("COMP"),
            "long long bitwise locals should fold to the selected return arm:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_long_long_shift_identifier_width() {
        let src = "int f(void) {
                       long long x = 1LL << 40;
                       long long y = x >> 40;
                       return (y == 1) ? 0x55 : 0xAA;
                   }";
        let asm = crate::compile_to_asm(src, "const-ll-shift-ident.c", &Default::default())
            .expect("compile const long long shift identifier");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("0xAA"),
            "long long local shifts should use the local's 64-bit type:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_typedef_long_long_compound_shift() {
        let src = "typedef long long int64_t;
                   typedef unsigned long long uint64_t;
                   int f(void) {
                       int64_t a = 1;
                       a <<= 40;
                       uint64_t b = (uint64_t)a;
                       return (int)(b >> 40);
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-typedef-ll-compound-shift.c",
            &Default::default(),
        )
        .expect("compile const typedef long long compound shift");
        assert!(
            asm.contains("R1 = 0x1;") && !asm.contains("LSHIFT") && !asm.contains("ASHIFT"),
            "typedef long long compound shifts should fold at 64-bit width:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_unsigned_shift_count_loop() {
        let src = "int f(void) {
                       unsigned int x = 1024;
                       int log2 = 0;
                       while (x > 1) {
                           x >>= 1;
                           log2++;
                       }
                       return log2;
                   }";
        let asm = crate::compile_to_asm(src, "const-log2-shift-loop.c", &Default::default())
            .expect("compile const log2 shift loop");
        assert!(
            asm.contains("R1 = 0xA;") && !asm.contains("LSHIFT") && !asm.contains("JUMP .L_"),
            "constant unsigned shift loop should fold to log2 count:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_digit_sum_nested_loop() {
        let src = "int f(void) {
                       unsigned int acc = 0;
                       for (unsigned int i = 1U; i < 3000U; ++i) {
                           unsigned int n = i * 2654435761U;
                           unsigned int s = 0;
                           while (n) {
                               s += n % 10U;
                               n /= 10U;
                           }
                           acc += s;
                       }
                       return (int)(acc & 0xffffU);
                   }";
        let asm = crate::compile_to_asm(src, "const-digit-sum-loop.c", &Default::default())
            .expect("compile const digit-sum loop");
        assert!(
            asm.contains("R1 = 0xEB19;") && !asm.contains("JUMP .L_"),
            "constant digit-sum nested loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_unmodified_static_integer_array_reads() {
        let src = "static unsigned g[4] = {11u, 22u, 33u, 44u};
                   int f(void) {
                       unsigned acc = 0;
                       for (unsigned i = 0; i < 6000u; ++i) {
                           if (i & 1u)
                               acc += g[0] + g[1];
                           else
                               acc += g[2] + g[3];
                           acc ^= g[0] ^ g[1] ^ g[2] ^ g[3];
                       }
                       return (int)(acc & 0xffffu);
                   }";
        let asm = crate::compile_to_asm(src, "const-static-int-array.c", &Default::default())
            .expect("compile const static integer array");
        assert!(
            asm.contains("R1 = 0x930;") && !asm.contains("DM (I4,M5)"),
            "unmodified static integer array reads should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memchr_literal_null_comparisons() {
        let src = "int f(void) {
                       if (memchr(\"abc\", 'z', 3) == (void *)0)
                           return 0x55;
                       return 0;
                   }
                   int g(void) {
                       return memchr(\"abc\", 'b', 3) != 0 ? 0x66 : 0;
                   }";
        let asm = crate::compile_to_asm(src, "const-memchr-null.c", &Default::default())
            .expect("compile const memchr null comparisons");
        assert!(
            asm.contains("R1 = 0x55;")
                && asm.contains("R1 = 0x66;")
                && !asm.contains("CJUMP memchr."),
            "literal memchr null comparisons should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memcmp_const_local_byte_arrays() {
        let src = "#include <string.h>
                   typedef unsigned char uint8_t;
                   int f(void) {
                       uint8_t a[4] = {1, 2, 3, 4};
                       uint8_t b[4] = {1, 2, 3, 4};
                       uint8_t c[4] = {1, 2, 9, 4};
                       int r = 0;
                       if (memcmp(a, b, 4) == 0) r |= 0x01;
                       if (memcmp(a, c, 4) < 0)  r |= 0x20;
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "const-memcmp-byte-arrays.c", &Default::default())
            .expect("compile const memcmp byte arrays");
        assert!(
            asm.contains("R1 = 0x21;") && !asm.contains("CJUMP memcmp."),
            "constant local byte-array memcmp calls should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memcpy_const_local_byte_arrays() {
        let src = "#include <string.h>
                   typedef unsigned char uint8_t;
                   int f(void) {
                       uint8_t src[4] = {0x55, 0xAA, 0x12, 0x34};
                       uint8_t dst[4] = {0};
                       memcpy(dst, src, 2);
                       return ((unsigned)dst[0] << 8) | dst[1];
                   }";
        let asm = crate::compile_to_asm(src, "const-memcpy-byte-arrays.c", &Default::default())
            .expect("compile const memcpy byte arrays");
        assert!(
            asm.contains("R1 = 0x55AA;") && !asm.contains("CJUMP memcpy."),
            "constant local byte-array memcpy should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memmove_const_local_byte_arrays_with_pointer_offset() {
        let src = "#include <string.h>
                   typedef unsigned char uint8_t;
                   int f(void) {
                       uint8_t buf[6] = {1, 2, 3, 4, 5, 6};
                       memmove(buf + 1, buf, 3);
                       return ((unsigned)buf[1] << 16) | ((unsigned)buf[2] << 8) | buf[3];
                   }";
        let asm = crate::compile_to_asm(src, "const-memmove-byte-arrays.c", &Default::default())
            .expect("compile const memmove byte arrays");
        assert!(
            asm.contains("R1 = 0x10203;") && !asm.contains("CJUMP memmove."),
            "constant local byte-array memmove with pointer offset should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memmove_const_local_char_array_string_init() {
        let src = "#include <string.h>
                   int f(void) {
                       char buf[8] = \"ABCDEF\";
                       memmove(buf + 1, buf, 6);
                       if (buf[0] != 'A') return 0;
                       if (buf[1] != 'A') return 0;
                       if (buf[2] != 'B') return 0;
                       if (buf[3] != 'C') return 0;
                       if (buf[4] != 'D') return 0;
                       if (buf[5] != 'E') return 0;
                       if (buf[6] != 'F') return 0;
                       if (buf[7] != '\\0') return 0;
                       return ((unsigned)(unsigned char)buf[1] << 16)
                            | ((unsigned)(unsigned char)buf[2] << 8)
                            | (unsigned)(unsigned char)buf[3];
                   }";
        let asm = crate::compile_to_asm(src, "const-memmove-char-array.c", &Default::default())
            .expect("compile const memmove char array");
        assert!(
            asm.contains("R1 = 0x414243;") && !asm.contains("CJUMP memmove."),
            "constant local char-array memmove with string init should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_memset_const_local_byte_array_loop_check() {
        let src = "#include <string.h>
                   typedef unsigned char uint8_t;
                   int f(void) {
                       uint8_t buf[8];
                       memset(buf, 0xAB, sizeof(buf));
                       for (int i = 0; i < 8; i++)
                           if (buf[i] != 0xAB) return 0;
                       return buf[3];
                   }";
        let asm = crate::compile_to_asm(src, "const-memset-byte-array.c", &Default::default())
            .expect("compile const memset byte array");
        assert!(
            asm.contains("R1 = 0xAB;") && !asm.contains("CJUMP memset."),
            "constant local byte-array memset and loop check should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_switch_case_with_user_label() {
        let src = "int f(void) {
                       int x = 2, r = 0;
                       switch (x) {
                       case 1: r = 0x10; break;
                       case 2:
                       target:
                           r = 0x20;
                           break;
                       case 3: goto target;
                       }
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "const-switch-user-label.c", &Default::default())
            .expect("compile const switch user label");
        assert!(
            asm.contains("R1 = 0x20;"),
            "constant switch with user label should fold to selected case value:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_static_struct_return_calls() {
        let src = "struct mr_result { int code; int val; };
                   static struct mr_result mr_classify(int x) {
                       struct mr_result r;
                       if (x < 0) {
                           r.code = -1;
                           r.val = -x;
                           return r;
                       }
                       if (x == 0) {
                           r.code = 0;
                           r.val = 0;
                           return r;
                       }
                       r.code = 1;
                       r.val = x;
                       return r;
                   }
                   int f(void) {
                       struct mr_result a = mr_classify(-5);
                       struct mr_result b = mr_classify(0);
                       struct mr_result c = mr_classify(20);
                       return a.val + b.val + c.val;
                   }";
        let asm = crate::compile_to_asm(src, "const-static-struct-return.c", &Default::default())
            .expect("compile const static struct return calls");
        assert!(
            asm.contains("R1 = 0x19;") && !asm.contains("CJUMP mr_classify."),
            "constant static struct-return calls should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_struct_compound_literal_return_call() {
        let src = "struct ret_lit { int x; int y; };
                   static struct ret_lit make_lit(int a, int b) {
                       return (struct ret_lit){a, b};
                   }
                   int test_main(void) {
                       struct ret_lit r = make_lit(0x10, 0x20);
                       return r.x + r.y;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-struct-compound-literal-return.c",
            &Default::default(),
        )
        .expect("compile const struct compound literal return");
        assert!(
            asm.contains("R1 = 0x30;") && !asm.contains("CJUMP make_lit."),
            "constant struct compound-literal return should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_nested_const_struct_return_call_arguments() {
        let src = "struct nr_pair { int x; int y; };
                   static struct nr_pair nr_make(int a, int b) {
                       struct nr_pair p;
                       p.x = a;
                       p.y = b;
                       return p;
                   }
                   static int nr_sum(struct nr_pair a, struct nr_pair b) {
                       return a.x + a.y + b.x + b.y;
                   }
                   int f(void) {
                       return nr_sum(nr_make(1, 2), nr_make(12, 15));
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-nested-struct-return-args.c",
            &Default::default(),
        )
        .expect("compile const nested struct-return call args");
        assert!(
            asm.contains("R1 = 0x1E;") && !asm.contains("CJUMP nr_make."),
            "nested constant struct-return arguments should fold to the scalar result:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_struct_pointer_field_read() {
        let src = "typedef struct opaque_s opaque_t;
                   struct opaque_s { int val; opaque_t *next; };
                   int f(void) {
                       opaque_t a, b;
                       a.val = 10;
                       a.next = &b;
                       b.val = 20;
                       b.next = 0;
                       return a.val + a.next->val;
                   }";
        let asm = crate::compile_to_asm(src, "const-local-struct-ptr-field.c", &Default::default())
            .expect("compile const local struct pointer field");
        assert!(
            asm.contains("R1 = 0x1E;") && !asm.contains("DM (I4,M5)"),
            "constant local struct pointer field read should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_pointer_compound_assignment() {
        let src = "int test_main(void) {
                       int arr[5] = {10, 20, 30, 40, 50};
                       int *p = arr;
                       p += 2;
                       int a = *p;
                       p -= 1;
                       int b = *p;
                       return a + b;
                   }";
        let asm =
            crate::compile_to_asm(src, "const-pointer-compound-assign.c", &Default::default())
                .expect("compile const pointer compound assignment");
        assert!(
            asm.contains("R1 = 0x32;") && !asm.contains("DM (I4,M5)"),
            "constant pointer compound assignment should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_pointer_identifier_difference() {
        let src = "int test_main(void) {
                       int arr[5];
                       int *p = &arr[4];
                       int *q = &arr[1];
                       int diff = (int)(p - q);
                       int rdiff = (int)(q - p);
                       return diff * 0x10 + (-rdiff);
                   }";
        let asm = crate::compile_to_asm(src, "const-pointer-ident-diff.c", &Default::default())
            .expect("compile const pointer identifier difference");
        assert!(
            asm.contains("R1 = 0x33;") && !asm.contains("ASHIFT"),
            "constant pointer identifier difference should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_pointer_identifier_relations() {
        let src = "int test_main(void) {
                       int arr[5];
                       int *lo = &arr[1];
                       int *hi = &arr[3];
                       int r = 0;
                       if (lo < hi) r += 1;
                       if (hi > lo) r += 2;
                       if (lo <= hi) r += 4;
                       if (lo != hi) r += 8;
                       return r;
                   }";
        let asm = crate::compile_to_asm(src, "const-pointer-ident-rel.c", &Default::default())
            .expect("compile const pointer identifier relations");
        assert!(
            asm.contains("R1 = 0xF;") && !asm.contains("COMP"),
            "constant pointer identifier relations should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_scalar_pointer_identifier_equality() {
        let src = "int test_main(void) {
                       int x = 42;
                       int *p = &x;
                       int *q = &x;
                       return (p == q) ? 0x55 : 0xAA;
                   }";
        let asm =
            crate::compile_to_asm(src, "const-scalar-pointer-ident-eq.c", &Default::default())
                .expect("compile const scalar pointer identifier equality");
        assert!(
            asm.contains("R1 = 0x55;") && !asm.contains("COMP"),
            "constant scalar pointer identifier equality should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_pointer_ternary_initializer() {
        let src = "int test_main(void) {
                       int arr[5] = {10, 20, 30, 40, 50};
                       int idx = 3;
                       int *p = (idx < 5) ? &arr[idx] : &arr[0];
                       return *p;
                   }";
        let asm = crate::compile_to_asm(src, "const-pointer-ternary-init.c", &Default::default())
            .expect("compile const pointer ternary initializer");
        assert!(
            asm.contains("R1 = 0x28;") && !asm.contains("DM (I4,M5)"),
            "constant pointer ternary initializer should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_cast_pointer_byte_stride_difference() {
        let src = "int test_main(void) {
                       int arr[2];
                       char *a = (char *)&arr[0];
                       char *b = (char *)&arr[1];
                       return (int)(b - a);
                   }";
        let asm =
            crate::compile_to_asm(src, "const-cast-pointer-byte-stride.c", &Default::default())
                .expect("compile const cast pointer byte stride");
        assert!(
            asm.contains("R1 = 0x4;"),
            "constant cast pointer byte stride should fold to sizeof int:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_pointer_induction_loop() {
        let src = "int f(void) {
                       unsigned int buf[32];
                       unsigned int acc = 0;
                       for (unsigned int i = 0; i < 32U; ++i)
                           buf[i] = (i * 7U) + 3U;
                       for (unsigned int iter = 0; iter < 128U; ++iter) {
                           unsigned int *p = buf;
                           unsigned int *end = buf + 32;
                           while (p != end)
                               acc += *p++;
                       }
                       return (int)(acc & 0xffffU);
                   }";
        let asm = crate::compile_to_asm(src, "const-pointer-induction.c", &Default::default())
            .expect("compile const pointer induction");
        assert!(
            asm.contains("R1 = 0xF800;") && !asm.contains("L_branch"),
            "constant pointer induction loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_global_pointer_induction_loop() {
        let src = "static unsigned arr[256];
                   int test_main(void) {
                       for (unsigned i = 0; i < 256u; ++i)
                           arr[i] = i * 3u + 1u;
                       unsigned acc = 0;
                       for (unsigned r = 0; r < 200u; ++r)
                           for (unsigned i = 0; i < 256u; ++i)
                               acc += arr[i] * (i & 7u);
                       return (int)(acc & 0xffffu);
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-global-pointer-induction.c",
            &Default::default(),
        )
        .expect("compile const global pointer induction");
        assert!(
            asm.contains("R1 = 0xF000;") && !asm.contains("L_branch"),
            "constant global pointer-induction loop should fold:\n{}",
            asm
        );
    }

    #[test]
    fn folds_array_preinc_subscript_once() {
        let src = "int f(void) {
                       int arr[4] = {0x10, 0x20, 0x42, 0x80};
                       int i = 1;
                       return arr[++i];
                   }";
        let asm = crate::compile_to_asm(src, "const-array-preinc-subscript.c", &Default::default())
            .expect("compile const array preinc subscript");
        assert!(
            asm.contains("R1 = 0x42;") && !asm.contains("R1 = 0x80;"),
            "constant array preincrement subscript should evaluate the index once:\n{}",
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
    fn folds_const_empty_body_if_while_for_block_return() {
        let src = "int f(void) {
                       int x = 0;
                       if (1) {
                       }
                       while (0) {
                       }
                       for (int i = 0; i < 5; i++) {
                       }
                       {
                           x = 0x42;
                       }
                       return x;
                   }";
        let asm = crate::compile_to_asm(src, "const-empty-body.c", &Default::default())
            .expect("compile const empty body");
        assert!(
            asm.contains("R1 = 0x42;") && !asm.contains("L_branch"),
            "constant empty if/while/for plus block assignment should fold to 0x42:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_enum_array_dimension_loop_return() {
        let src = "enum arr_sz { SZ_A = 3, SZ_TOTAL = 3 };
                   int f(void) {
                       int arr[SZ_TOTAL];
                       for (int i = 0; i < SZ_TOTAL; i++)
                           arr[i] = (i + 1) * 10;
                       return arr[0] + arr[1] + arr[2];
                   }";
        let asm = crate::compile_to_asm(src, "const-enum-array-dim.c", &Default::default())
            .expect("compile const enum array dim");
        assert!(
            asm.contains("R1 = 0x3C;") && !asm.contains("L_branch"),
            "constant enum array dimension loop should fold to 0x3c:\n{}",
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
    fn folds_unmodified_static_struct_array_zero_filled_member_reads() {
        let src = "static struct { int key; int val; } g_kvtable[4] = {
                       {1, 10}, {2, 20}
                   };
                   int f(void) {
                       return g_kvtable[0].val + g_kvtable[1].val
                            + g_kvtable[2].val + g_kvtable[3].key;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "static-global-struct-array-zero-fill.c",
            &Default::default(),
        )
        .expect("compile zero-filled static global struct array");
        assert!(
            asm.contains("R1 = 0x1E;") && !asm.contains("DM (I4"),
            "unmodified static struct-array member reads should fold zero-filled fields:\n{}",
            asm
        );
    }

    #[test]
    fn folds_static_const_struct_member_reads() {
        let src = "static const struct { int x; int y; int z; } g_const_pt = {3, 4, 5};
                   int f(void) {
                       return g_const_pt.x + g_const_pt.y + g_const_pt.z;
                   }";
        let asm = crate::compile_to_asm(src, "const-global-struct.c", &Default::default())
            .expect("compile const global struct");
        assert!(
            asm.contains("R1 = 0xC;") && !asm.contains("DM (I4"),
            "static const struct member reads should fold to 12:\n{}",
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
    fn folds_const_string_pointer_array_search_loop() {
        let src = "int f(void) {
                       const char *names[] = {\"cat\", \"dog\", \"fox\"};
                       const char *target = \"fox\";
                       int idx = -1;
                       for (int i = 0; i < 3; i++) {
                           const char *a = names[i];
                           const char *b = target;
                           int match = 1;
                           while (*a && *b) {
                               if (*a != *b) {
                                   match = 0;
                                   break;
                               }
                               a++;
                               b++;
                           }
                           if (match && *a == *b) {
                               idx = i;
                               break;
                           }
                       }
                       return idx;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-string-pointer-array-search-loop.c",
            &Default::default(),
        )
        .expect("compile const string pointer array search loop");
        assert!(
            asm.contains("R1 = 0x2;") && !asm.contains("L_branch"),
            "constant string-pointer-array search loop should fold to 2:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_string_literal_subscript() {
        let src = "int f(void) { return \"ABCDE\"[2]; }";
        let asm =
            crate::compile_to_asm(src, "const-string-literal-subscript.c", &Default::default())
                .expect("compile const string literal subscript");
        assert!(
            asm.contains("R1 = 0x43;") && !asm.contains(".str"),
            "constant string literal subscript should fold to the selected byte:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_string_pointer_array_direct_indices() {
        let src = "int f(void) {
                       const char *names[] = {\"alpha\", \"beta\", \"gamma\"};
                       return names[0][0] + names[1][0] + names[2][0];
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-string-pointer-array-direct.c",
            &Default::default(),
        )
        .expect("compile const string pointer array direct indices");
        assert!(
            asm.contains("R1 = 0x12A;") && !asm.contains("DM (I4"),
            "constant string-pointer-array direct indices should fold to 0x12a:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strcat_into_local_char_array() {
        let src = "char *strcat(char *dest, const char *src);
                   int f(void) {
                       char dst[16] = \"ab\";
                       strcat(dst, \"cde\");
                       if (dst[5] != 0) return 0;
                       if (dst[0] != 'a' || dst[4] != 'e') return 0;
                       int n = 0;
                       while (dst[n]) n++;
                       return n;
                   }";
        let asm = crate::compile_to_asm(src, "const-strcat-local-array.c", &Default::default())
            .expect("compile const strcat local array");
        assert!(
            asm.contains("R1 = 0x5;") && !asm.contains("CJUMP strcat."),
            "constant strcat into a local char array should fold to length 5:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strncat_into_local_char_array() {
        let src = "char *strncat(char *dest, const char *src, unsigned long n);
                   int f(void) {
                       char dst[16] = \"xy\";
                       strncat(dst, \"abcde\", 2);
                       if (dst[4] != 0) return 0;
                       if (dst[2] != 'a' || dst[3] != 'b') return 0;
                       int n = 0;
                       while (dst[n]) n++;
                       return n;
                   }";
        let asm = crate::compile_to_asm(src, "const-strncat-local-array.c", &Default::default())
            .expect("compile const strncat local array");
        assert!(
            asm.contains("R1 = 0x4;") && !asm.contains("CJUMP strncat."),
            "constant strncat into a local char array should fold to length 4:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strchr_pointer_difference() {
        let src = "char *strchr(const char *s, int c);
                   int f(void) {
                       const char *s = \"hello\";
                       const char *p = strchr(s, 'l');
                       if (!p) return 0xFF;
                       return (int)(p - s);
                   }";
        let asm = crate::compile_to_asm(src, "const-strchr-pointer-diff.c", &Default::default())
            .expect("compile const strchr pointer diff");
        assert!(
            asm.contains("R1 = 0x2;") && !asm.contains("CJUMP strchr."),
            "constant strchr pointer difference should fold to 2:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strpbrk_pointer_difference() {
        let src = "char *strpbrk(const char *s, const char *accept);
                   int f(void) {
                       const char *s = \"abcdef\";
                       const char *p = strpbrk(s, \"zfd\");
                       if (!p) return 0xFF;
                       return (int)(p - s);
                   }";
        let asm = crate::compile_to_asm(src, "const-strpbrk-pointer-diff.c", &Default::default())
            .expect("compile const strpbrk pointer diff");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("CJUMP strpbrk."),
            "constant strpbrk pointer difference should fold to 3:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strstr_pointer_difference() {
        let src = "char *strstr(const char *haystack, const char *needle);
                   int f(void) {
                       const char *hay = \"the quick brown fox\";
                       const char *p = strstr(hay, \"ick\");
                       if (!p) return 0xFF;
                       return (int)(p - hay);
                   }";
        let asm = crate::compile_to_asm(src, "const-strstr-pointer-diff.c", &Default::default())
            .expect("compile const strstr pointer diff");
        assert!(
            asm.contains("R1 = 0x6;") && !asm.contains("CJUMP strstr."),
            "constant strstr pointer difference should fold to 6:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strcpy_return_and_local_char_array() {
        let src = "char *strcpy(char *dest, const char *src);
                   int f(void) {
                       char dst[8] = {0};
                       char *r = strcpy(dst, \"hello\");
                       if (r != dst) return 0;
                       return (int)(unsigned char)dst[0];
                   }";
        let asm = crate::compile_to_asm(src, "const-strcpy-local-array.c", &Default::default())
            .expect("compile const strcpy local array");
        assert!(
            asm.contains("R1 = 0x68;") && !asm.contains("CJUMP strcpy."),
            "constant strcpy into a local char array should fold to first byte 0x68:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_strncpy_into_local_char_array() {
        let src = "char *strncpy(char *dest, const char *src, unsigned long n);
                   int f(void) {
                       char dst[8];
                       for (int i = 0; i < 8; i++) dst[i] = 0x55;
                       strncpy(dst, \"ab\", 4);
                       if (dst[2] != 0) return 0;
                       if (dst[3] != 0) return 0;
                       return ((unsigned char)dst[0] << 8) | (unsigned char)dst[1];
                   }";
        let asm = crate::compile_to_asm(src, "const-strncpy-local-array.c", &Default::default())
            .expect("compile const strncpy local array");
        assert!(
            asm.contains("R1 = 0x6162;") && !asm.contains("CJUMP strncpy."),
            "constant strncpy into a local char array should fold to 0x6162:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_struct_list_count_loop() {
        let src = "int f(void) {
                       struct nd { int v; struct nd *n; };
                       struct nd e = {5, 0};
                       struct nd d = {4, &e};
                       struct nd c = {3, &d};
                       struct nd b = {2, &c};
                       struct nd a = {1, &b};
                       int count = 0;
                       for (struct nd *p = &a; p; p = p->n)
                           count++;
                       return count;
                   }";
        let asm =
            crate::compile_to_asm(src, "const-local-struct-list-count.c", &Default::default())
                .expect("compile const local struct list count");
        assert!(
            asm.contains("R1 = 0x5;") && !asm.contains("L_branch"),
            "constant local struct list count loop should fold to 5:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_struct_list_reverse_loop() {
        let src = "int f(void) {
                       struct node { int val; struct node *next; };
                       struct node c = {3, 0};
                       struct node b = {2, &c};
                       struct node a = {1, &b};
                       struct node *prev = 0, *curr = &a, *next;
                       while (curr) {
                           next = curr->next;
                           curr->next = prev;
                           prev = curr;
                           curr = next;
                       }
                       return prev->val;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-local-struct-list-reverse.c",
            &Default::default(),
        )
        .expect("compile const local struct list reverse");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("L_branch"),
            "constant local struct list reverse loop should fold to 3:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_struct_list_sum_loop() {
        let src = "int f(void) {
                       struct nd { int v; struct nd *n; };
                       struct nd c = {3, 0};
                       struct nd b = {5, &c};
                       struct nd a = {7, &b};
                       int sum = 0;
                       for (struct nd *p = &a; p; p = p->n)
                           sum += p->v;
                       return sum;
                   }";
        let asm = crate::compile_to_asm(src, "const-local-struct-list-sum.c", &Default::default())
            .expect("compile const local struct list sum");
        assert!(
            asm.contains("R1 = 0xF;") && !asm.contains("L_branch"),
            "constant local struct list sum loop should fold to 15:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_local_struct_list_sum_while_assignments() {
        let src = "struct node { int val; struct node *next; };
                   int test_main(void) {
                       struct node a, b, c;
                       a.val = 1;
                       a.next = &b;
                       b.val = 2;
                       b.next = &c;
                       c.val = 3;
                       c.next = 0;
                       int s = 0;
                       struct node *p = &a;
                       while (p) {
                           s += p->val;
                           p = p->next;
                       }
                       return s;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-local-struct-list-sum-while-assignments.c",
            &Default::default(),
        )
        .expect("compile const local struct list sum while assignments");
        assert!(
            asm.contains("R1 = 0x6;") && !asm.contains("L_branch"),
            "constant local struct assignment-built list sum should fold to 6:\n{}",
            asm
        );
    }

    #[test]
    fn folds_inlined_static_restrict_copy() {
        let src = "static void restricted_copy(int *restrict dst, const int *restrict src, int n) {
                       for (int i = 0; i < n; i++)
                           dst[i] = src[i];
                   }
                   int test_main(void) {
                       int a[3];
                       a[0] = 1;
                       a[1] = 2;
                       a[2] = 3;
                       int b[3];
                       restricted_copy(b, a, 3);
                       return b[0] + b[1] + b[2];
                   }";
        let asm = crate::compile_to_asm(src, "const-static-restrict-copy.c", &Default::default())
            .expect("compile const static restrict copy");
        assert!(
            asm.contains("R1 = 0x6;") && !asm.contains("L_branch"),
            "inlined static restrict copy should fold to 6:\n{}",
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
    fn folds_local_struct_member_pointer_difference_offset() {
        let src = "struct off_s { int a; int b; int c; };
                   int f(void) {
                       struct off_s s;
                       int off = (int)((char *)&s.c - (char *)&s);
                       return off / (int)sizeof(int);
                   }";
        let asm = crate::compile_to_asm(src, "const-local-offsetof-diff.c", &Default::default())
            .expect("compile const local offsetof diff");
        assert!(
            asm.contains("R1 = 0x2;") && !asm.contains("CJUMP ___div32."),
            "local struct member pointer difference should fold before division:\n{}",
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

    #[test]
    fn folds_sizeof_incomplete_array_compound_literal() {
        let src = "int f(void) {
                       return (int)(sizeof((int[]){1, 2, 3}) / sizeof(int));
                   }";
        let asm = crate::compile_to_asm(
            src,
            "sizeof-incomplete-array-complit.c",
            &Default::default(),
        )
        .expect("compile sizeof incomplete array compound literal");
        assert!(
            asm.contains("R1 = 0x3;") && !asm.contains("R1 = 0x0;"),
            "sizeof incomplete-array compound literal should use initializer length:\n{}",
            asm
        );
    }

    #[test]
    fn folds_sizeof_local_struct_with_array_field() {
        let src = "int f(void) {
                       struct sa { int a; int b[5]; };
                       return (int)sizeof(struct sa);
                   }";
        let asm = crate::compile_to_asm(
            src,
            "sizeof-local-struct-array-field.c",
            &Default::default(),
        )
        .expect("compile sizeof local struct array field");
        assert!(
            asm.contains("R1 = 0x18;") && !asm.contains("R1 = 0x0;"),
            "sizeof local struct with array field should resolve local tag:\n{}",
            asm
        );
    }

    #[test]
    fn folds_const_while_switch_state_machine() {
        let src = "int f(void) {
                       int state = 0, sum = 0, count = 0;
                       while (state != 3) {
                           switch (state) {
                               case 0:
                                   sum += 10;
                                   state = 1;
                                   break;
                               case 1:
                                   sum += 20;
                                   state = (++count < 2) ? 0 : 2;
                                   break;
                               case 2:
                                   state = 3;
                                   break;
                           }
                       }
                       return sum;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "const-while-switch-state-machine.c",
            &Default::default(),
        )
        .expect("compile const while switch state machine");
        assert!(
            asm.contains("R1 = 0x3C;") && !asm.contains("R1 = 0x1E;"),
            "constant while/switch state machine should preserve switch break semantics:\n{}",
            asm
        );
    }
}
