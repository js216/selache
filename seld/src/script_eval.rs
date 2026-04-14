// SPDX-License-Identifier: GPL-3.0
// script_eval.rs --- Evaluator for LDF script-constant expressions
// Copyright (c) 2026 Jakob Kastelic

//! Evaluates the integer constant assignments collected by the LDF
//! parser. Each assignment's right-hand side is an `Expr` tree that
//! may reference numeric literals, previously-resolved names,
//! MEMORY region endpoints, and reserve allocations performed by
//! `layout::layout`. The evaluator iterates to a fixed point: on
//! every pass it resolves every assignment whose free variables are
//! all known, and repeats until no more progress is possible. A pass
//! with zero progress and unresolved assignments remaining is a hard
//! error that names every remaining symbol and its unresolved
//! dependencies; there is no silent fallback.

use std::collections::{HashMap, HashSet};

use crate::error::{Error, Result};
use crate::ldf_ast::{BinOp, Expr, ScriptAssignment, UnOp};
use crate::layout::Layout;

/// Evaluate all script-constant assignments in the LDF against the
/// completed memory layout. Returns a map from symbol name to 32-bit
/// value. Ordering is not significant: every entry has been fully
/// resolved before return.
pub fn evaluate(
    assignments: &[ScriptAssignment],
    layout: &Layout,
) -> Result<HashMap<String, u32>> {
    let mut resolved: HashMap<String, u32> = HashMap::new();
    let mut pending: Vec<&ScriptAssignment> = assignments.iter().collect();

    loop {
        let before = pending.len();
        let mut next: Vec<&ScriptAssignment> = Vec::new();
        for a in &pending {
            match eval_expr(&a.expr, &resolved, layout) {
                Ok(v) => {
                    resolved.insert(a.name.clone(), v);
                }
                Err(EvalErr::Unresolved(dep)) => {
                    // Defer the assignment. Track the first dep we
                    // hit only for diagnostics when the fixed-point
                    // loop finally stalls; the retry logic itself
                    // ignores it.
                    let _ = dep;
                    next.push(*a);
                }
                Err(EvalErr::Hard(msg)) => {
                    return Err(Error::Parse(format!(
                        "script assignment `{}`{}: {}",
                        a.name,
                        if a.line > 0 {
                            format!(" (line {})", a.line)
                        } else {
                            String::new()
                        },
                        msg
                    )));
                }
            }
        }
        pending = next;
        if pending.is_empty() {
            break;
        }
        if pending.len() == before {
            // No progress and non-empty queue: report every
            // remaining assignment together with the first free
            // variable that blocked it. The user can then add the
            // missing identifier, define it in the LDF, or pass it
            // via `-MD`. Cycles self-report as "depends on itself".
            let mut msg = String::from("unresolvable script assignments:\n");
            for a in &pending {
                let missing = first_unresolved(&a.expr, &resolved, layout);
                msg.push_str(&format!(
                    "  {} (line {}) depends on unresolved `{}`\n",
                    a.name,
                    a.line,
                    missing.unwrap_or_else(|| "<unknown>".into())
                ));
            }
            return Err(Error::Parse(msg));
        }
    }

    Ok(resolved)
}

/// Internal evaluator error: either a soft "pending dependency" that
/// the fixed-point loop should retry, or a hard failure that aborts.
enum EvalErr {
    /// A referenced name (identifier or reserve placeholder) was
    /// not yet in the resolved map. The fixed-point loop defers the
    /// assignment and tries again on the next pass.
    Unresolved(String),
    Hard(String),
}

fn eval_expr(
    expr: &Expr,
    resolved: &HashMap<String, u32>,
    layout: &Layout,
) -> std::result::Result<u32, EvalErr> {
    match expr {
        Expr::Number(n) => Ok(*n),
        Expr::Ident(name) => lookup_ident(name, resolved, layout),
        Expr::Unary(op, inner) => {
            let v = eval_expr(inner, resolved, layout)?;
            Ok(match op {
                UnOp::Neg => 0u32.wrapping_sub(v),
                UnOp::Not => !v,
            })
        }
        Expr::Binary(op, lhs, rhs) => {
            let l = eval_expr(lhs, resolved, layout)?;
            let r = eval_expr(rhs, resolved, layout)?;
            match op {
                BinOp::Add => Ok(l.wrapping_add(r)),
                BinOp::Sub => Ok(l.wrapping_sub(r)),
                BinOp::Mul => Ok(l.wrapping_mul(r)),
                BinOp::Div => {
                    if r == 0 {
                        Err(EvalErr::Hard("division by zero".into()))
                    } else {
                        Ok(l / r)
                    }
                }
                BinOp::Mod => {
                    if r == 0 {
                        Err(EvalErr::Hard("modulo by zero".into()))
                    } else {
                        Ok(l % r)
                    }
                }
                BinOp::Shl => Ok(l.wrapping_shl(r)),
                BinOp::Shr => Ok(l.wrapping_shr(r)),
                BinOp::And => Ok(l & r),
                BinOp::Or => Ok(l | r),
                BinOp::Xor => Ok(l ^ r),
            }
        }
        Expr::Call(name, args) => eval_call(name, args, resolved, layout),
    }
}

fn lookup_ident(
    name: &str,
    resolved: &HashMap<String, u32>,
    layout: &Layout,
) -> std::result::Result<u32, EvalErr> {
    if let Some(v) = resolved.get(name) {
        return Ok(*v);
    }
    // Memory region start: bare region names (e.g. `mem_heap`)
    // resolve to their start byte address; a region identifier in an
    // expression stands in for its base.
    if let Some((start, _)) = layout.memory_regions.get(name) {
        return Ok(*start);
    }
    // Reserve bases resolve to their allocated start. The length
    // variant is handled via the synthetic `__RESERVE_LENGTH` call
    // at parse time, but a user-written expression may also refer
    // to the reserve name by hand.
    if let Some((start, _)) = layout.reserves.get(name) {
        return Ok(*start);
    }
    Err(EvalErr::Unresolved(name.to_string()))
}

fn eval_call(
    name: &str,
    args: &[Expr],
    resolved: &HashMap<String, u32>,
    layout: &Layout,
) -> std::result::Result<u32, EvalErr> {
    // Helper: pull the single-identifier argument from a call. The
    // functions supported here all take one memory-region or
    // reserve name; non-identifier arguments are a hard error.
    let region_arg = || -> std::result::Result<&str, EvalErr> {
        if args.len() != 1 {
            return Err(EvalErr::Hard(format!(
                "function `{}` expects one argument, got {}",
                name,
                args.len()
            )));
        }
        match &args[0] {
            Expr::Ident(s) => Ok(s.as_str()),
            _ => Err(EvalErr::Hard(format!(
                "function `{name}` expects a memory region name"
            ))),
        }
    };

    match name {
        "MEMORY_START" | "MEMSTART" | "MEMORY_BYTE_START" => {
            let region = region_arg()?;
            layout
                .memory_regions
                .get(region)
                .map(|(s, _)| *s)
                .ok_or_else(|| {
                    EvalErr::Hard(format!("unknown memory region `{region}`"))
                })
        }
        "MEMORY_END" | "MEMEND" | "MEMORY_BYTE_END" => {
            let region = region_arg()?;
            layout
                .memory_regions
                .get(region)
                .map(|(_, e)| *e)
                .ok_or_else(|| {
                    EvalErr::Hard(format!("unknown memory region `{region}`"))
                })
        }
        "MEMSIZE" | "MEMORY_SIZEOF" => {
            let region = region_arg()?;
            layout
                .memory_regions
                .get(region)
                .map(|(s, e)| e.saturating_sub(*s).saturating_add(1))
                .ok_or_else(|| {
                    EvalErr::Hard(format!("unknown memory region `{region}`"))
                })
        }
        "__RESERVE_START" => {
            let region = region_arg()?;
            layout
                .reserves
                .get(region)
                .map(|(s, _)| *s)
                .ok_or_else(|| EvalErr::Unresolved(format!("reserve:{region}")))
        }
        "__RESERVE_LENGTH" => {
            let region = region_arg()?;
            layout
                .reserves
                .get(region)
                .map(|(_, l)| *l)
                .ok_or_else(|| EvalErr::Unresolved(format!("reserve:{region}")))
        }
        _ => {
            // A fixed-point pass cannot resolve an unknown function;
            // there is no reason to retry. Fail hard so the operator
            // sees the name of the missing intrinsic.
            // Fall back to a plain lookup for names that were
            // lexed as calls only because of a parenthesised macro
            // expansion (e.g. `FOO(BAR)` after `#define FOO(x) x`).
            // When args is empty, it cannot be an identifier. When
            // there is exactly one identifier argument, treat this
            // as an alias for that identifier.
            if args.len() == 1 {
                if let Expr::Ident(arg_name) = &args[0] {
                    if let Some(v) = resolved.get(arg_name) {
                        return Ok(*v);
                    }
                }
            }
            Err(EvalErr::Hard(format!("unknown function `{name}`")))
        }
    }
}

/// Walk an expression looking for the first free variable that is
/// not yet resolved. Used to build the dependency-failure error
/// message when the fixed-point loop stalls.
fn first_unresolved(
    expr: &Expr,
    resolved: &HashMap<String, u32>,
    layout: &Layout,
) -> Option<String> {
    let mut seen = HashSet::new();
    walk(expr, resolved, layout, &mut seen)
}

fn walk(
    expr: &Expr,
    resolved: &HashMap<String, u32>,
    layout: &Layout,
    seen: &mut HashSet<String>,
) -> Option<String> {
    match expr {
        Expr::Number(_) => None,
        Expr::Ident(name) => {
            if resolved.contains_key(name)
                || layout.memory_regions.contains_key(name)
                || layout.reserves.contains_key(name)
            {
                None
            } else if seen.insert(name.clone()) {
                Some(name.clone())
            } else {
                None
            }
        }
        Expr::Unary(_, inner) => walk(inner, resolved, layout, seen),
        Expr::Binary(_, l, r) => {
            walk(l, resolved, layout, seen).or_else(|| walk(r, resolved, layout, seen))
        }
        Expr::Call(name, args) => {
            // Special-case the internal reserve helpers: their free
            // variable is the reserve name, which must be present
            // in `layout.reserves` for the call to succeed.
            if (name == "__RESERVE_START" || name == "__RESERVE_LENGTH") && args.len() == 1 {
                if let Expr::Ident(region) = &args[0] {
                    if layout.reserves.contains_key(region) {
                        return None;
                    }
                    return Some(format!("reserve:{region}"));
                }
            }
            for a in args {
                if let Some(m) = walk(a, resolved, layout, seen) {
                    return Some(m);
                }
            }
            None
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ldf_ast::{Expr, ScriptAssignment};

    fn empty_layout() -> Layout {
        Layout {
            placed: Vec::new(),
            entry_address: None,
            memory_regions: HashMap::new(),
            reserves: HashMap::new(),
        }
    }

    #[test]
    fn eval_literal_assignment() {
        let a = ScriptAssignment {
            name: "x".into(),
            expr: Expr::Number(42),
            line: 1,
        };
        let map = evaluate(&[a], &empty_layout()).unwrap();
        assert_eq!(map.get("x").copied(), Some(42));
    }

    #[test]
    fn eval_depends_on_earlier() {
        let a = ScriptAssignment {
            name: "x".into(),
            expr: Expr::Number(10),
            line: 1,
        };
        let b = ScriptAssignment {
            name: "y".into(),
            expr: Expr::Binary(
                BinOp::Add,
                Box::new(Expr::Ident("x".into())),
                Box::new(Expr::Number(5)),
            ),
            line: 2,
        };
        let map = evaluate(&[a, b], &empty_layout()).unwrap();
        assert_eq!(map.get("y").copied(), Some(15));
    }

    #[test]
    fn eval_reverse_order_resolves_via_fixed_point() {
        // `y` is listed before `x` and depends on it. The
        // fixed-point loop must not require topological order.
        let y = ScriptAssignment {
            name: "y".into(),
            expr: Expr::Binary(
                BinOp::Sub,
                Box::new(Expr::Ident("x".into())),
                Box::new(Expr::Number(1)),
            ),
            line: 1,
        };
        let x = ScriptAssignment {
            name: "x".into(),
            expr: Expr::Number(100),
            line: 2,
        };
        let map = evaluate(&[y, x], &empty_layout()).unwrap();
        assert_eq!(map.get("y").copied(), Some(99));
        assert_eq!(map.get("x").copied(), Some(100));
    }

    #[test]
    fn eval_cycle_is_hard_error() {
        let a = ScriptAssignment {
            name: "a".into(),
            expr: Expr::Ident("b".into()),
            line: 1,
        };
        let b = ScriptAssignment {
            name: "b".into(),
            expr: Expr::Ident("a".into()),
            line: 2,
        };
        let err = evaluate(&[a, b], &empty_layout()).unwrap_err();
        match err {
            Error::Parse(msg) => {
                assert!(msg.contains("unresolvable"));
            }
            other => panic!("expected Parse error, got {other:?}"),
        }
    }

    #[test]
    fn eval_memory_start_end_size() {
        let mut layout = empty_layout();
        layout.memory_regions.insert("mem_heap".into(), (0x1000, 0x1FFF));
        let a = ScriptAssignment {
            name: "s".into(),
            expr: Expr::Call(
                "MEMORY_START".into(),
                vec![Expr::Ident("mem_heap".into())],
            ),
            line: 1,
        };
        let b = ScriptAssignment {
            name: "e".into(),
            expr: Expr::Call("MEMORY_END".into(), vec![Expr::Ident("mem_heap".into())]),
            line: 2,
        };
        let c = ScriptAssignment {
            name: "sz".into(),
            expr: Expr::Call("MEMSIZE".into(), vec![Expr::Ident("mem_heap".into())]),
            line: 3,
        };
        let map = evaluate(&[a, b, c], &layout).unwrap();
        assert_eq!(map["s"], 0x1000);
        assert_eq!(map["e"], 0x1FFF);
        assert_eq!(map["sz"], 0x1000);
    }

    #[test]
    fn eval_division_by_zero_is_hard_error() {
        let a = ScriptAssignment {
            name: "bad".into(),
            expr: Expr::Binary(
                BinOp::Div,
                Box::new(Expr::Number(10)),
                Box::new(Expr::Number(0)),
            ),
            line: 1,
        };
        let err = evaluate(&[a], &empty_layout()).unwrap_err();
        match err {
            Error::Parse(msg) => assert!(msg.contains("division by zero")),
            other => panic!("expected Parse error, got {other:?}"),
        }
    }

    #[test]
    fn eval_unknown_ident_in_isolation_is_hard_after_stall() {
        let a = ScriptAssignment {
            name: "x".into(),
            expr: Expr::Ident("nowhere".into()),
            line: 1,
        };
        let err = evaluate(&[a], &empty_layout()).unwrap_err();
        match err {
            Error::Parse(msg) => assert!(msg.contains("nowhere")),
            other => panic!("expected Parse error, got {other:?}"),
        }
    }
}
