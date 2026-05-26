// SPDX-License-Identifier: GPL-3.0
// ir_opt.rs --- IR optimization passes: constant folding, DCE, hardware loop detection
// Copyright (c) 2026 Jakob Kastelic

//! IR optimization passes: constant folding, dead code elimination, and
//! hardware loop detection for the SHARC+ DO/UNTIL LCE instruction.

use std::collections::{HashMap, HashSet};

use crate::ir::{Cond, IrOp, Label, VReg};

// ---------------------------------------------------------------------------
// Constant folding
// ---------------------------------------------------------------------------

/// Fold arithmetic on known constants and propagate immediates.
///
/// - `LoadImm(a, X) + LoadImm(b, Y) + Add(c, a, b)` becomes `LoadImm(c, X+Y)`
/// - `LoadImm(a, X) + Mul(b, a, Y)` when Y is known becomes `LoadImm(b, X*Y)`
/// - `Add(dst, src, 0)` becomes `Copy(dst, src)`
/// - `Mul(dst, src, 1)` becomes `Copy(dst, src)`
/// - Single-use immediates are propagated into the consuming instruction.
pub fn constant_fold(ops: &[IrOp]) -> Vec<IrOp> {
    // Map vreg -> known immediate value.
    let mut known: HashMap<VReg, i64> = HashMap::new();
    // Map vreg -> a simple one-variable affine expression in 32-bit integer
    // arithmetic: coeff * var + offset. This is intentionally local to the
    // constant folder; it is only used to recognize expressions that collapse
    // back to constants.
    let mut affine: HashMap<VReg, AffineExpr> = HashMap::new();

    // Count uses of each vreg so we can propagate single-use constants.
    let mut use_counts: HashMap<VReg, u32> = HashMap::new();
    for op in ops {
        for vreg in source_vregs(op) {
            *use_counts.entry(vreg).or_insert(0) += 1;
        }
    }

    // First pass: collect known immediates.
    for op in ops {
        if let IrOp::LoadImm(dst, val) = op {
            known.insert(*dst, *val);
        }
    }

    // Second pass: fold.
    let mut result = Vec::with_capacity(ops.len());
    // Track which vregs have been consumed (their LoadImm was inlined).
    let mut consumed: HashSet<VReg> = HashSet::new();
    let mut rewritten_immediates: HashMap<VReg, i64> = HashMap::new();

    for op in ops {
        match op {
            IrOp::Add(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a.wrapping_add(b);
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        affine.remove(dst);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(0), None) => {
                        result.push(IrOp::Copy(*dst, *rhs));
                        set_affine_from_copy(*dst, *rhs, &known, &mut affine);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                    }
                    (None, Some(0)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        set_affine_from_copy(*dst, *lhs, &known, &mut affine);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    _ => {
                        if let Some(folded) = fold_affine_add(*lhs, *rhs, &known, &affine) {
                            if matches!(folded, AffineValue::Const(_)) {
                                apply_affine_result(
                                    *dst,
                                    folded,
                                    &mut result,
                                    &mut known,
                                    &mut affine,
                                );
                            } else {
                                apply_affine_fact(*dst, folded, &mut known, &mut affine);
                                result.push(op.clone());
                            }
                        } else {
                            affine.remove(dst);
                            result.push(op.clone());
                        }
                    }
                }
            }

            IrOp::Sub(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a.wrapping_sub(b);
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        affine.remove(dst);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (None, Some(0)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        set_affine_from_copy(*dst, *lhs, &known, &mut affine);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    _ => {
                        if let Some(folded) = fold_affine_sub(*lhs, *rhs, &known, &affine) {
                            if matches!(folded, AffineValue::Const(_)) {
                                apply_affine_result(
                                    *dst,
                                    folded,
                                    &mut result,
                                    &mut known,
                                    &mut affine,
                                );
                            } else {
                                apply_affine_fact(*dst, folded, &mut known, &mut affine);
                                result.push(op.clone());
                            }
                        } else {
                            affine.remove(dst);
                            result.push(op.clone());
                        }
                    }
                }
            }

            IrOp::Div(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    if b != 0 {
                        // Match `IrOp::Div`'s runtime semantics: truncated
                        // signed 32-bit division. Folding lets the compiler
                        // emit a literal load instead of a runtime call into
                        // `___div32` for constants the frontend already knows.
                        let folded = ((a as i32).wrapping_div(b as i32)) as i64;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    } else {
                        result.push(op.clone());
                    }
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::UDiv(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    if b != 0 {
                        // Unsigned 32-bit division: fold using u32 semantics
                        // so constants match the `___udiv32` runtime helper.
                        let folded = ((a as u32).wrapping_div(b as u32)) as i64;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    } else {
                        result.push(op.clone());
                    }
                } else if let (None, Some(b)) = (lv, rv) {
                    if let Some(shift) = unsigned_power_of_two_shift(b) {
                        if use_counts.get(rhs).copied().unwrap_or(0) <= 1 {
                            rewritten_immediates.insert(*rhs, -(shift as i64));
                            result.push(IrOp::Lshr(*dst, *lhs, *rhs));
                        } else {
                            result.push(op.clone());
                        }
                    } else {
                        result.push(op.clone());
                    }
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::Mod(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    if b != 0 {
                        let folded = ((a as i32).wrapping_rem(b as i32)) as i64;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    } else {
                        result.push(op.clone());
                    }
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::UMod(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    if b != 0 {
                        let folded = ((a as u32).wrapping_rem(b as u32)) as i64;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    } else {
                        result.push(op.clone());
                    }
                } else if let (None, Some(b)) = (lv, rv) {
                    if unsigned_power_of_two_shift(b).is_some() {
                        if use_counts.get(rhs).copied().unwrap_or(0) <= 1 {
                            rewritten_immediates.insert(*rhs, b - 1);
                            result.push(IrOp::BitAnd(*dst, *lhs, *rhs));
                        } else {
                            result.push(op.clone());
                        }
                    } else {
                        result.push(op.clone());
                    }
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::Mul(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a.wrapping_mul(b);
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        affine.remove(dst);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(1), None) => {
                        result.push(IrOp::Copy(*dst, *rhs));
                        set_affine_from_copy(*dst, *rhs, &known, &mut affine);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                    }
                    (None, Some(1)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        set_affine_from_copy(*dst, *lhs, &known, &mut affine);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(0), None) | (None, Some(0)) => {
                        result.push(IrOp::LoadImm(*dst, 0));
                        known.insert(*dst, 0);
                        affine.remove(dst);
                        // Both operand LoadImms may become dead; DCE handles that.
                    }
                    (None, Some(b)) => {
                        if let Some(folded) = fold_affine_mul(*lhs, *rhs, &known, &affine) {
                            apply_affine_fact(*dst, folded, &mut known, &mut affine);
                        } else {
                            affine.remove(dst);
                        }
                        if let Some(shift) = unsigned_power_of_two_shift(b) {
                            if use_counts.get(rhs).copied().unwrap_or(0) <= 1 {
                                rewritten_immediates.insert(*rhs, shift as i64);
                                result.push(IrOp::Shl(*dst, *lhs, *rhs));
                            } else {
                                result.push(op.clone());
                            }
                        } else {
                            result.push(op.clone());
                        }
                    }
                    (Some(a), None) => {
                        if let Some(folded) = fold_affine_mul(*lhs, *rhs, &known, &affine) {
                            apply_affine_fact(*dst, folded, &mut known, &mut affine);
                        } else {
                            affine.remove(dst);
                        }
                        if let Some(shift) = unsigned_power_of_two_shift(a) {
                            if use_counts.get(lhs).copied().unwrap_or(0) <= 1 {
                                rewritten_immediates.insert(*lhs, shift as i64);
                                result.push(IrOp::Shl(*dst, *rhs, *lhs));
                            } else {
                                result.push(op.clone());
                            }
                        } else {
                            result.push(op.clone());
                        }
                    }
                    _ => {
                        if let Some(folded) = fold_affine_mul(*lhs, *rhs, &known, &affine) {
                            if matches!(folded, AffineValue::Const(_)) {
                                apply_affine_result(
                                    *dst,
                                    folded,
                                    &mut result,
                                    &mut known,
                                    &mut affine,
                                );
                            } else {
                                apply_affine_fact(*dst, folded, &mut known, &mut affine);
                                result.push(op.clone());
                            }
                        } else {
                            affine.remove(dst);
                            result.push(op.clone());
                        }
                    }
                }
            }

            IrOp::Neg(dst, src) => {
                if let Some(v) = known.get(src).copied() {
                    let folded = v.wrapping_neg();
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *src);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::BitAnd(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a & b;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(0), None) | (None, Some(0)) => {
                        result.push(IrOp::LoadImm(*dst, 0));
                        known.insert(*dst, 0);
                    }
                    (Some(-1), None) | (Some(0xffff_ffff), None) => {
                        result.push(IrOp::Copy(*dst, *rhs));
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                    }
                    (None, Some(-1)) | (None, Some(0xffff_ffff)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    _ => result.push(op.clone()),
                }
            }

            IrOp::BitOr(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a | b;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(0), None) => {
                        result.push(IrOp::Copy(*dst, *rhs));
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                    }
                    (None, Some(0)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    _ => result.push(op.clone()),
                }
            }

            IrOp::BitXor(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a ^ b;
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(0), None) => {
                        result.push(IrOp::Copy(*dst, *rhs));
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                    }
                    (None, Some(0)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    _ => result.push(op.clone()),
                }
            }

            IrOp::Shl(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    let folded = a.wrapping_shl(b as u32);
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    affine.remove(dst);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
                    if let Some(folded) = fold_affine_shl(*lhs, *rhs, &known, &affine) {
                        apply_affine_fact(*dst, folded, &mut known, &mut affine);
                    } else {
                        affine.remove(dst);
                    }
                    result.push(op.clone());
                }
            }

            IrOp::Shr(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    // IrOp::Shr maps to SHARC+ ASHIFT: positive b =
                    // left shift, negative b = arithmetic right shift.
                    // Fold in 32-bit signed arithmetic so the sign
                    // bit propagates the same way hardware does.
                    let a32 = a as i32;
                    let folded = if b < 0 {
                        a32.wrapping_shr((-b) as u32) as i64
                    } else {
                        ((a32 as u32).wrapping_shr(b as u32)) as i32 as i64
                    };
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::Lshr(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    // IrOp::Lshr maps to SHARC+ LSHIFT: positive b =
                    // left shift, negative b = logical right shift
                    // (zero-fills high bits). Fold in 32-bit unsigned
                    // arithmetic to match the hardware.
                    let a32 = a as u32;
                    let folded = if b < 0 {
                        a32.wrapping_shr((-b) as u32) as i64
                    } else {
                        a32.wrapping_shl(b as u32) as i32 as i64
                    };
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::BitNot(dst, src) => {
                if let Some(v) = known.get(src).copied() {
                    let folded = !v;
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *src);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::LoadImm(dst, val) => {
                known.insert(*dst, *val);
                affine.remove(dst);
                result.push(op.clone());
            }

            IrOp::Branch(_) | IrOp::BranchCond(..) | IrOp::Label(_) => {
                affine.clear();
                result.push(op.clone());
            }

            _ => {
                for dst in dest_vregs(op) {
                    affine.remove(&dst);
                }
                result.push(op.clone());
            }
        }
    }

    // Remove LoadImm ops that were consumed (inlined into the folded op)
    // and are no longer needed.
    result
        .into_iter()
        .map(|op| match op {
            IrOp::LoadImm(dst, _) if rewritten_immediates.contains_key(&dst) => {
                IrOp::LoadImm(dst, rewritten_immediates[&dst])
            }
            _ => op,
        })
        .filter(|op| {
            if let IrOp::LoadImm(dst, _) = op {
                !consumed.contains(dst)
            } else {
                true
            }
        })
        .collect()
}

fn unsigned_power_of_two_shift(v: i64) -> Option<u32> {
    let v = u32::try_from(v).ok()?;
    if v.is_power_of_two() && v != 0 {
        Some(v.trailing_zeros())
    } else {
        None
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct AffineExpr {
    var: VReg,
    coeff: u32,
    offset: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum AffineValue {
    Const(u32),
    Expr(AffineExpr),
}

fn operand_affine_value(
    vreg: VReg,
    known: &HashMap<VReg, i64>,
    affine: &HashMap<VReg, AffineExpr>,
) -> AffineValue {
    if let Some(value) = known.get(&vreg).copied() {
        AffineValue::Const(value as u32)
    } else if let Some(expr) = affine.get(&vreg).copied() {
        AffineValue::Expr(expr)
    } else {
        AffineValue::Expr(AffineExpr {
            var: vreg,
            coeff: 1,
            offset: 0,
        })
    }
}

fn affine_value_from_parts(var: VReg, coeff: u32, offset: u32) -> AffineValue {
    if coeff == 0 {
        AffineValue::Const(offset)
    } else {
        AffineValue::Expr(AffineExpr { var, coeff, offset })
    }
}

fn add_affine_values(lhs: AffineValue, rhs: AffineValue) -> Option<AffineValue> {
    match (lhs, rhs) {
        (AffineValue::Const(a), AffineValue::Const(b)) => {
            Some(AffineValue::Const(a.wrapping_add(b)))
        }
        (AffineValue::Expr(expr), AffineValue::Const(c))
        | (AffineValue::Const(c), AffineValue::Expr(expr)) => Some(AffineValue::Expr(AffineExpr {
            offset: expr.offset.wrapping_add(c),
            ..expr
        })),
        (AffineValue::Expr(a), AffineValue::Expr(b)) if a.var == b.var => {
            Some(affine_value_from_parts(
                a.var,
                a.coeff.wrapping_add(b.coeff),
                a.offset.wrapping_add(b.offset),
            ))
        }
        _ => None,
    }
}

fn sub_affine_values(lhs: AffineValue, rhs: AffineValue) -> Option<AffineValue> {
    match (lhs, rhs) {
        (AffineValue::Const(a), AffineValue::Const(b)) => {
            Some(AffineValue::Const(a.wrapping_sub(b)))
        }
        (AffineValue::Expr(expr), AffineValue::Const(c)) => Some(AffineValue::Expr(AffineExpr {
            offset: expr.offset.wrapping_sub(c),
            ..expr
        })),
        (AffineValue::Const(c), AffineValue::Expr(expr)) => Some(affine_value_from_parts(
            expr.var,
            0u32.wrapping_sub(expr.coeff),
            c.wrapping_sub(expr.offset),
        )),
        (AffineValue::Expr(a), AffineValue::Expr(b)) if a.var == b.var => {
            Some(affine_value_from_parts(
                a.var,
                a.coeff.wrapping_sub(b.coeff),
                a.offset.wrapping_sub(b.offset),
            ))
        }
        _ => None,
    }
}

fn mul_affine_values(lhs: AffineValue, rhs: AffineValue) -> Option<AffineValue> {
    match (lhs, rhs) {
        (AffineValue::Const(a), AffineValue::Const(b)) => {
            Some(AffineValue::Const(a.wrapping_mul(b)))
        }
        (AffineValue::Expr(expr), AffineValue::Const(c))
        | (AffineValue::Const(c), AffineValue::Expr(expr)) => Some(affine_value_from_parts(
            expr.var,
            expr.coeff.wrapping_mul(c),
            expr.offset.wrapping_mul(c),
        )),
        _ => None,
    }
}

fn fold_affine_add(
    lhs: VReg,
    rhs: VReg,
    known: &HashMap<VReg, i64>,
    affine: &HashMap<VReg, AffineExpr>,
) -> Option<AffineValue> {
    add_affine_values(
        operand_affine_value(lhs, known, affine),
        operand_affine_value(rhs, known, affine),
    )
}

fn fold_affine_sub(
    lhs: VReg,
    rhs: VReg,
    known: &HashMap<VReg, i64>,
    affine: &HashMap<VReg, AffineExpr>,
) -> Option<AffineValue> {
    sub_affine_values(
        operand_affine_value(lhs, known, affine),
        operand_affine_value(rhs, known, affine),
    )
}

fn fold_affine_mul(
    lhs: VReg,
    rhs: VReg,
    known: &HashMap<VReg, i64>,
    affine: &HashMap<VReg, AffineExpr>,
) -> Option<AffineValue> {
    mul_affine_values(
        operand_affine_value(lhs, known, affine),
        operand_affine_value(rhs, known, affine),
    )
}

fn fold_affine_shl(
    lhs: VReg,
    rhs: VReg,
    known: &HashMap<VReg, i64>,
    affine: &HashMap<VReg, AffineExpr>,
) -> Option<AffineValue> {
    let shift = u32::try_from(*known.get(&rhs)?).ok()?;
    if shift >= 32 {
        return None;
    }
    mul_affine_values(
        operand_affine_value(lhs, known, affine),
        AffineValue::Const(1u32 << shift),
    )
}

fn apply_affine_fact(
    dst: VReg,
    folded: AffineValue,
    known: &mut HashMap<VReg, i64>,
    affine: &mut HashMap<VReg, AffineExpr>,
) {
    match folded {
        AffineValue::Const(value) => {
            known.insert(dst, value as i64);
            affine.remove(&dst);
        }
        AffineValue::Expr(expr) => {
            known.remove(&dst);
            affine.insert(dst, expr);
        }
    }
}

fn apply_affine_result(
    dst: VReg,
    folded: AffineValue,
    result: &mut Vec<IrOp>,
    known: &mut HashMap<VReg, i64>,
    affine: &mut HashMap<VReg, AffineExpr>,
) {
    match folded {
        AffineValue::Const(value) => {
            result.push(IrOp::LoadImm(dst, value as i64));
            known.insert(dst, value as i64);
            affine.remove(&dst);
        }
        AffineValue::Expr(expr) => {
            apply_affine_fact(dst, AffineValue::Expr(expr), known, affine);
        }
    }
}

fn set_affine_from_copy(
    dst: VReg,
    src: VReg,
    known: &HashMap<VReg, i64>,
    affine: &mut HashMap<VReg, AffineExpr>,
) {
    if known.contains_key(&src) {
        affine.remove(&dst);
    } else if let Some(expr) = affine.get(&src).copied() {
        affine.insert(dst, expr);
    } else {
        affine.insert(
            dst,
            AffineExpr {
                var: src,
                coeff: 1,
                offset: 0,
            },
        );
    }
}

/// Mark a vreg as consumed if it has only one use (its LoadImm can be removed).
fn mark_consumed(use_counts: &HashMap<VReg, u32>, consumed: &mut HashSet<VReg>, vreg: VReg) {
    if use_counts.get(&vreg).copied().unwrap_or(0) <= 1 {
        consumed.insert(vreg);
    }
}

// ---------------------------------------------------------------------------
// Dead code elimination
// ---------------------------------------------------------------------------

/// Remove IR ops whose destination vreg is never read by any subsequent op.
/// Labels, branches, calls, stores, compares, and returns are never removed.
pub fn dead_code_eliminate(ops: &[IrOp]) -> Vec<IrOp> {
    let mut current = ops.to_vec();
    loop {
        let next = dead_code_eliminate_once(&current);
        if next == current {
            return next;
        }
        current = next;
    }
}

fn dead_code_eliminate_once(ops: &[IrOp]) -> Vec<IrOp> {
    // Collect the set of all vregs that appear as source operands.
    let mut used: HashSet<VReg> = HashSet::new();
    for op in ops {
        for vreg in source_vregs(op) {
            used.insert(vreg);
        }
    }

    ops.iter()
        .filter(|op| {
            let dests = dest_vregs(op);
            // Keep destination-producing ops if any written vreg is used.
            // Multi-word ops write adjacent vregs, so checking only the
            // low half can delete the high-half producer.
            dests.is_empty() || dests.iter().any(|dst| used.contains(dst)) || has_side_effects(op)
        })
        .cloned()
        .collect()
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
struct FrameMemLoc {
    slot: i32,
    byte_offset: i32,
}

impl FrameMemLoc {
    fn frame_byte_offset(self) -> i32 {
        -self.slot * 4 + self.byte_offset
    }

    fn with_byte_offset(self, offset_bytes: i32) -> Self {
        let total = self.byte_offset + offset_bytes;
        let word_delta = total.div_euclid(4);
        Self {
            slot: self.slot - word_delta,
            byte_offset: total.rem_euclid(4),
        }
    }

    fn with_ir_offset(self, offset_words: i32) -> Self {
        self.with_byte_offset(offset_words * 4)
    }
}

#[derive(Default)]
struct FrameFacts {
    constants: HashMap<VReg, i64>,
    addrs: HashMap<VReg, FrameMemLoc>,
}

impl FrameFacts {
    fn clear(&mut self) {
        self.constants.clear();
        self.addrs.clear();
    }

    fn kill_dest(&mut self, dst: VReg) {
        self.constants.remove(&dst);
        self.addrs.remove(&dst);
    }

    fn update_after(&mut self, op: &IrOp) {
        for dst in dest_vregs(op) {
            self.kill_dest(dst);
        }

        match op {
            IrOp::LoadImm(dst, value) => {
                self.constants.insert(*dst, *value);
            }
            IrOp::FrameAddr(dst, slot) => {
                self.addrs.insert(
                    *dst,
                    FrameMemLoc {
                        slot: *slot,
                        byte_offset: 0,
                    },
                );
            }
            IrOp::Copy(dst, src) => {
                if let Some(value) = self.constants.get(src).copied() {
                    self.constants.insert(*dst, value);
                }
                if let Some(loc) = self.addrs.get(src).copied() {
                    self.addrs.insert(*dst, loc);
                }
            }
            IrOp::Add(dst, lhs, rhs) => {
                let lhs_loc = self.addrs.get(lhs).copied();
                let rhs_loc = self.addrs.get(rhs).copied();
                let lhs_const = self.constants.get(lhs).copied();
                let rhs_const = self.constants.get(rhs).copied();

                match (lhs_loc, rhs_loc, lhs_const, rhs_const) {
                    (Some(loc), None, _, Some(offset)) | (None, Some(loc), Some(offset), _) => {
                        self.addrs.insert(*dst, loc.with_byte_offset(offset as i32));
                    }
                    (None, None, Some(a), Some(b)) => {
                        self.constants.insert(*dst, a + b);
                    }
                    _ => {}
                }
            }
            _ => {}
        }
    }
}

fn frame_load_loc(op: &IrOp, facts: &FrameFacts) -> Option<FrameMemLoc> {
    match op {
        IrOp::Load(_, 0, slot) => Some(FrameMemLoc {
            slot: *slot,
            byte_offset: 0,
        }),
        IrOp::Load(_, base, offset) => facts
            .addrs
            .get(base)
            .copied()
            .map(|loc| loc.with_ir_offset(*offset)),
        _ => None,
    }
}

fn frame_store_loc(op: &IrOp, facts: &FrameFacts) -> Option<FrameMemLoc> {
    match op {
        IrOp::Store(_, 0, slot) => Some(FrameMemLoc {
            slot: *slot,
            byte_offset: 0,
        }),
        IrOp::Store(_, base, offset) => facts
            .addrs
            .get(base)
            .copied()
            .map(|loc| loc.with_ir_offset(*offset)),
        _ => None,
    }
}

fn frame_addr_use_is_internal(op: &IrOp, vreg: VReg, facts: &FrameFacts) -> bool {
    match op {
        IrOp::Load(_, base, _)
        | IrOp::Store(_, base, _)
        | IrOp::Load64(_, base, _)
        | IrOp::Store64(_, base, _) => *base == vreg,
        IrOp::Copy(_, src) => *src == vreg,
        IrOp::Add(_, lhs, rhs) if *lhs == vreg => facts.constants.contains_key(rhs),
        IrOp::Add(_, lhs, rhs) if *rhs == vreg => facts.constants.contains_key(lhs),
        _ => false,
    }
}

fn escaped_frame_addr_slots(ops: &[IrOp]) -> HashSet<i32> {
    let mut facts = FrameFacts::default();
    let mut escaped = HashSet::new();

    for op in ops {
        for src in source_vregs(op) {
            if let Some(loc) = facts.addrs.get(&src) {
                if !frame_addr_use_is_internal(op, src, &facts) {
                    escaped.insert(loc.slot);
                }
            }
        }

        if matches!(
            op,
            IrOp::Label(_) | IrOp::Branch(_) | IrOp::BranchCond(..) | IrOp::HardwareLoop { .. }
        ) {
            facts.clear();
        } else {
            facts.update_after(op);
        }
    }

    escaped
}

fn used_frame_load_locs(ops: &[IrOp]) -> HashSet<FrameMemLoc> {
    let mut facts = FrameFacts::default();
    let global_facts = frame_facts_without_cfg_clears(ops);
    let mut used = HashSet::new();

    for op in ops {
        match op {
            IrOp::Load(..) => {
                if let Some(loc) =
                    frame_load_loc(op, &facts).or_else(|| frame_load_loc(op, &global_facts))
                {
                    used.insert(loc);
                }
            }
            IrOp::Load64(_, 0, slot) => {
                used.insert(FrameMemLoc {
                    slot: *slot,
                    byte_offset: 0,
                });
                used.insert(FrameMemLoc {
                    slot: *slot + 1,
                    byte_offset: 0,
                });
            }
            IrOp::Load64(_, base, offset) => {
                if let Some(loc) = facts
                    .addrs
                    .get(base)
                    .copied()
                    .or_else(|| global_facts.addrs.get(base).copied())
                {
                    used.insert(loc.with_ir_offset(*offset));
                    used.insert(loc.with_ir_offset(*offset + 1));
                }
            }
            _ => {}
        }

        if matches!(
            op,
            IrOp::Label(_) | IrOp::Branch(_) | IrOp::BranchCond(..) | IrOp::HardwareLoop { .. }
        ) {
            facts.clear();
        } else {
            facts.update_after(op);
        }
    }

    used
}

fn frame_facts_without_cfg_clears(ops: &[IrOp]) -> FrameFacts {
    let mut facts = FrameFacts::default();
    for op in ops {
        facts.update_after(op);
    }
    facts
}

fn frame_addr_calc_vregs(ops: &[IrOp]) -> (HashSet<VReg>, HashSet<VReg>) {
    let mut facts = FrameFacts::default();
    let mut addr_defs = HashSet::new();
    let mut offset_consts = HashSet::new();

    for op in ops {
        match op {
            IrOp::FrameAddr(dst, _) => {
                addr_defs.insert(*dst);
            }
            IrOp::Copy(dst, src) if facts.addrs.contains_key(src) => {
                addr_defs.insert(*dst);
            }
            IrOp::Add(dst, lhs, rhs) => {
                if facts.addrs.contains_key(lhs) && facts.constants.contains_key(rhs) {
                    addr_defs.insert(*dst);
                    offset_consts.insert(*rhs);
                } else if facts.addrs.contains_key(rhs) && facts.constants.contains_key(lhs) {
                    addr_defs.insert(*dst);
                    offset_consts.insert(*lhs);
                }
            }
            _ => {}
        }

        if matches!(
            op,
            IrOp::Label(_) | IrOp::Branch(_) | IrOp::BranchCond(..) | IrOp::HardwareLoop { .. }
        ) {
            facts.clear();
        } else {
            facts.update_after(op);
        }
    }

    (addr_defs, offset_consts)
}

fn remove_dead_frame_addr_calcs(ops: &[IrOp]) -> Vec<IrOp> {
    let mut current = ops.to_vec();

    loop {
        let mut used = HashSet::new();
        for op in &current {
            for vreg in source_vregs(op) {
                used.insert(vreg);
            }
        }

        let (addr_defs, offset_consts) = frame_addr_calc_vregs(&current);
        let next: Vec<IrOp> = current
            .iter()
            .filter(|op| match op {
                IrOp::FrameAddr(dst, _) => used.contains(dst),
                IrOp::Copy(dst, _) | IrOp::Add(dst, _, _) if addr_defs.contains(dst) => {
                    used.contains(dst)
                }
                IrOp::LoadImm(dst, _) if offset_consts.contains(dst) => used.contains(dst),
                _ => true,
            })
            .cloned()
            .collect();

        if next.len() == current.len() {
            return next;
        }
        current = next;
    }
}

/// Forward frame-relative loads from the latest store in the same basic block.
///
/// The lowerer materializes C locals in frame slots. In straight-line code this
/// often creates `Store(v, slot); Load(dst, slot)` pairs for scalar temporaries.
/// Replacing the load with `Copy(dst, v)` lets later passes avoid round trips
/// through DM. Struct-field locals use `FrameAddr` plus indirect memory ops, so
/// this also tracks non-escaped frame addresses with constant offsets. After
/// forwarding, stores to frame locations that are no longer read are removed.
pub fn forward_stack_loads(ops: &[IrOp]) -> Vec<IrOp> {
    let escaped_slots = escaped_frame_addr_slots(ops);
    let mut facts = FrameFacts::default();
    let mut slot_values: HashMap<FrameMemLoc, VReg> = HashMap::new();
    let mut forwarded = Vec::with_capacity(ops.len());

    for op in ops {
        match op {
            IrOp::Load(dst, _, _) => {
                let loc = frame_load_loc(op, &facts);
                if let Some(src) = loc
                    .filter(|loc| !escaped_slots.contains(&loc.slot))
                    .and_then(|loc| slot_values.get(&loc).copied())
                {
                    forwarded.push(IrOp::Copy(*dst, src));
                } else {
                    forwarded.push(op.clone());
                }
                facts.update_after(op);
            }
            IrOp::Store(val, _, _) => {
                if let Some(loc) =
                    frame_store_loc(op, &facts).filter(|loc| !escaped_slots.contains(&loc.slot))
                {
                    slot_values.insert(loc, *val);
                } else {
                    slot_values.clear();
                }
                forwarded.push(op.clone());
                facts.update_after(op);
            }
            IrOp::Load64(_, 0, slot) | IrOp::Store64(_, 0, slot) => {
                slot_values.remove(&FrameMemLoc {
                    slot: *slot,
                    byte_offset: 0,
                });
                slot_values.remove(&FrameMemLoc {
                    slot: *slot + 1,
                    byte_offset: 0,
                });
                forwarded.push(op.clone());
                facts.update_after(op);
            }
            IrOp::Label(_)
            | IrOp::Branch(_)
            | IrOp::BranchCond(..)
            | IrOp::HardwareLoop { .. }
            | IrOp::Call(..)
            | IrOp::CallIndirect(..)
            | IrOp::CallStruct { .. }
            | IrOp::CallIndirectStruct { .. }
            | IrOp::Ret(_)
            | IrOp::RetStruct { .. }
            | IrOp::StackRestore(_)
            | IrOp::StackAlloc(..)
            | IrOp::Store64(_, _, _)
            | IrOp::StoreGlobal(..)
            | IrOp::WriteGlobal64(..) => {
                slot_values.clear();
                forwarded.push(op.clone());
                facts.clear();
            }
            _ => {
                forwarded.push(op.clone());
                facts.update_after(op);
            }
        }
    }

    let used_locs = used_frame_load_locs(&forwarded);
    let mut facts = FrameFacts::default();

    let filtered: Vec<IrOp> = forwarded
        .into_iter()
        .filter(|op| match op {
            IrOp::Store(..) => {
                let loc = frame_store_loc(op, &facts);
                let keep = loc.is_none_or(|loc| {
                    escaped_slots.contains(&loc.slot) || used_locs.contains(&loc)
                });
                facts.update_after(op);
                keep
            }
            IrOp::Store64(_, 0, slot) => {
                let lo = FrameMemLoc {
                    slot: *slot,
                    byte_offset: 0,
                };
                let hi = FrameMemLoc {
                    slot: *slot + 1,
                    byte_offset: 0,
                };
                facts.update_after(op);
                escaped_slots.contains(slot)
                    || escaped_slots.contains(&(*slot + 1))
                    || used_locs.contains(&lo)
                    || used_locs.contains(&hi)
            }
            _ => {
                if matches!(
                    op,
                    IrOp::Label(_)
                        | IrOp::Branch(_)
                        | IrOp::BranchCond(..)
                        | IrOp::HardwareLoop { .. }
                ) {
                    facts.clear();
                } else {
                    facts.update_after(op);
                }
                true
            }
        })
        .collect();

    remove_dead_frame_addr_calcs(&filtered)
}

/// Propagate simple 32-bit copies within a basic block.
pub fn propagate_copies(ops: &[IrOp]) -> Vec<IrOp> {
    let mut aliases: HashMap<VReg, VReg> = HashMap::new();
    let mut out = Vec::with_capacity(ops.len());
    let mut at_block_start = false;

    fn resolve(aliases: &HashMap<VReg, VReg>, mut v: VReg) -> VReg {
        let mut seen = HashSet::new();
        while let Some(next) = aliases.get(&v).copied() {
            if !seen.insert(v) {
                break;
            }
            v = next;
        }
        v
    }

    fn resolve_pointer_base(aliases: &HashMap<VReg, VReg>, base: VReg) -> VReg {
        if base == 0 {
            return 0;
        }
        let resolved = resolve(aliases, base);
        if resolved == 0 {
            base
        } else {
            resolved
        }
    }

    fn kill(aliases: &mut HashMap<VReg, VReg>, dst: VReg) {
        aliases.remove(&dst);
        aliases.retain(|_, src| *src != dst);
    }

    fn flush_aliases(aliases: &mut HashMap<VReg, VReg>, out: &mut Vec<IrOp>) {
        let mut pending: Vec<_> = aliases.iter().map(|(dst, src)| (*dst, *src)).collect();
        pending.sort_unstable();
        for (dst, src) in pending {
            if dst != src {
                out.push(IrOp::Copy(dst, src));
            }
        }
        aliases.clear();
    }

    for op in ops {
        match op {
            IrOp::Copy(dst, src) => {
                let src = resolve(&aliases, *src);
                kill(&mut aliases, *dst);
                if at_block_start {
                    out.push(IrOp::Copy(*dst, src));
                } else if *dst != src {
                    aliases.insert(*dst, src);
                }
                at_block_start = false;
            }
            IrOp::LoadImm(dst, val) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::LoadImm(*dst, *val));
                at_block_start = false;
            }
            IrOp::Add(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Add(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::Sub(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Sub(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::Mul(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Mul(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::BitAnd(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::BitAnd(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::BitOr(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::BitOr(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::BitXor(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::BitXor(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::Shl(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Shl(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::Shr(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Shr(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::Lshr(dst, a, b) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Lshr(
                    *dst,
                    resolve(&aliases, *a),
                    resolve(&aliases, *b),
                ));
                at_block_start = false;
            }
            IrOp::Neg(dst, src) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::Neg(*dst, resolve(&aliases, *src)));
                at_block_start = false;
            }
            IrOp::BitNot(dst, src) => {
                kill(&mut aliases, *dst);
                out.push(IrOp::BitNot(*dst, resolve(&aliases, *src)));
                at_block_start = false;
            }
            IrOp::Cmp(a, b) => {
                out.push(IrOp::Cmp(resolve(&aliases, *a), resolve(&aliases, *b)));
                at_block_start = false;
            }
            IrOp::UCmp(a, b) => {
                out.push(IrOp::UCmp(resolve(&aliases, *a), resolve(&aliases, *b)));
                at_block_start = false;
            }
            IrOp::Load(dst, base, slot) => {
                kill(&mut aliases, *dst);
                let base = resolve_pointer_base(&aliases, *base);
                out.push(IrOp::Load(*dst, base, *slot));
                at_block_start = false;
            }
            IrOp::Store(val, base, slot) => {
                let base = resolve_pointer_base(&aliases, *base);
                out.push(IrOp::Store(resolve(&aliases, *val), base, *slot));
                at_block_start = false;
            }
            IrOp::Call(dst, name, args) => {
                let args = args.iter().map(|v| resolve(&aliases, *v)).collect();
                flush_aliases(&mut aliases, &mut out);
                kill(&mut aliases, *dst);
                out.push(IrOp::Call(*dst, name.clone(), args));
                at_block_start = false;
            }
            IrOp::CallIndirect(dst, addr, args) => {
                let addr = resolve(&aliases, *addr);
                let args = args.iter().map(|v| resolve(&aliases, *v)).collect();
                flush_aliases(&mut aliases, &mut out);
                kill(&mut aliases, *dst);
                out.push(IrOp::CallIndirect(*dst, addr, args));
                at_block_start = false;
            }
            IrOp::CallStruct {
                name,
                args,
                dst_addr,
                num_words,
            } => {
                let args = args.iter().map(|v| resolve(&aliases, *v)).collect();
                let dst_addr = resolve(&aliases, *dst_addr);
                flush_aliases(&mut aliases, &mut out);
                out.push(IrOp::CallStruct {
                    name: name.clone(),
                    args,
                    dst_addr,
                    num_words: *num_words,
                });
                at_block_start = false;
            }
            IrOp::CallIndirectStruct {
                addr,
                args,
                dst_addr,
                num_words,
            } => {
                let addr = resolve(&aliases, *addr);
                let args = args.iter().map(|v| resolve(&aliases, *v)).collect();
                let dst_addr = resolve(&aliases, *dst_addr);
                flush_aliases(&mut aliases, &mut out);
                out.push(IrOp::CallIndirectStruct {
                    addr,
                    args,
                    dst_addr,
                    num_words: *num_words,
                });
                at_block_start = false;
            }
            IrOp::RetStruct {
                src_addr,
                dst_addr,
                num_words,
            } => {
                let src_addr = resolve(&aliases, *src_addr);
                let dst_addr = dst_addr.map(|v| resolve(&aliases, v));
                out.push(IrOp::RetStruct {
                    src_addr,
                    dst_addr,
                    num_words: *num_words,
                });
                at_block_start = false;
            }
            IrOp::Ret(Some(v)) => {
                out.push(IrOp::Ret(Some(resolve(&aliases, *v))));
                at_block_start = false;
            }
            IrOp::Ret(None) => {
                out.push(op.clone());
                at_block_start = false;
            }
            IrOp::Label(_) | IrOp::Branch(_) | IrOp::BranchCond(..) => {
                flush_aliases(&mut aliases, &mut out);
                out.push(op.clone());
                at_block_start = true;
            }
            _ => {
                flush_aliases(&mut aliases, &mut out);
                out.push(op.clone());
                at_block_start = false;
            }
        }
    }

    out
}

// ---------------------------------------------------------------------------
// Hardware loop detection
// ---------------------------------------------------------------------------

/// Detect for-loops with known iteration count and replace them with
/// `HardwareLoop` instructions that map to the SHARC DO/UNTIL LCE.
///
/// Recognizes the pattern generated by `lower_for` for:
///   `for (int i = 0; i < N; i++) { body }`
///
/// The lowered IR pattern is:
///   LoadImm(v_init, 0)
///   Store(v_init, 0, slot)        // init: i = 0
///   Label(top)
///   Load(v_i, 0, slot)            // load i
///   LoadImm(v_limit, N)           // load N
///   LoadImm(_, 0)                 // for comparison result false
///   LoadImm(_, 1)                 // for comparison result true
///   Cmp(v_i, v_limit)
///   BranchCond(Lt, lbl_true)
///   Copy(v_cmp, v_zero_result)
///   Branch(lbl_end_cmp)
///   Label(lbl_true)
///   Copy(v_cmp, v_one_result)
///   Label(lbl_end_cmp)
///   LoadImm(v_zero2, 0)
///   Cmp(v_cmp, v_zero2)
///   BranchCond(Eq, lbl_end_for)
///   ... body ...
///   ... step (i++) ...
///   Branch(top)
///   Label(lbl_end_for)
///
/// This is replaced with:
///   HardwareLoop { count: N, end_label: lbl_end_for }
///   ... body ...
///   Label(lbl_end_for)
pub fn detect_hardware_loops(ops: &[IrOp]) -> Vec<IrOp> {
    // Build a map of known immediate values.
    let mut known: HashMap<VReg, i64> = HashMap::new();
    for op in ops {
        if let IrOp::LoadImm(dst, val) = op {
            known.insert(*dst, *val);
        }
    }

    // Find all loop structures: Label(top) ... Branch(top) ... Label(end)
    // where the Branch to top is the back-edge.
    let mut result = ops.to_vec();
    let mut changed = true;

    while changed {
        changed = false;
        if let Some(new_ops) = try_detect_one_loop(&result, &known) {
            result = new_ops;
            changed = true;
        }
    }

    result
}

/// Remove hardware loops whose optimized body has no observable effect.
///
/// Hardware-loop conversion removes the software loop header and can expose
/// bodies such as `x = x`, left behind after stack zero-fill forwarding. This
/// pass is deliberately narrow: it only removes a loop when every frame store
/// in the body writes back the value loaded from the same frame location, and
/// no vreg defined inside the body is used after the loop.
pub fn elide_noop_hardware_loops(ops: &[IrOp]) -> Vec<IrOp> {
    let mut out = Vec::with_capacity(ops.len());
    let mut idx = 0;

    while idx < ops.len() {
        let IrOp::HardwareLoop { end_label, .. } = ops[idx] else {
            out.push(ops[idx].clone());
            idx += 1;
            continue;
        };

        let Some(end_idx) = ops[idx + 1..]
            .iter()
            .position(|op| matches!(op, IrOp::Label(label) if *label == end_label))
            .map(|pos| idx + 1 + pos)
        else {
            out.push(ops[idx].clone());
            idx += 1;
            continue;
        };

        if hardware_loop_body_is_noop(ops, idx + 1, end_idx) {
            idx = end_idx;
        } else {
            out.push(ops[idx].clone());
            idx += 1;
        }
    }

    out
}

/// Drop labels that are no longer targeted by any control-flow op.
pub fn remove_unreferenced_labels(ops: &[IrOp]) -> Vec<IrOp> {
    let mut referenced = HashSet::new();
    for op in ops {
        match op {
            IrOp::Branch(label) | IrOp::BranchCond(_, label) => {
                referenced.insert(*label);
            }
            IrOp::HardwareLoop { end_label, .. } => {
                referenced.insert(*end_label);
            }
            _ => {}
        }
    }

    ops.iter()
        .filter(|op| match op {
            IrOp::Label(label) => referenced.contains(label),
            _ => true,
        })
        .cloned()
        .collect()
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum TrackedValue {
    Frame(FrameMemLoc),
    Const(i64),
    Unknown,
}

fn hardware_loop_body_is_noop(ops: &[IrOp], body_start: usize, body_end: usize) -> bool {
    let body = &ops[body_start..body_end];
    let body_dests: HashSet<VReg> = body.iter().flat_map(dest_vregs).collect();
    if ops[body_end..]
        .iter()
        .flat_map(source_vregs)
        .any(|src| body_dests.contains(&src))
    {
        return false;
    }

    let mut facts = FrameFacts::default();
    let mut values: HashMap<VReg, TrackedValue> = HashMap::new();
    let mut saw_real_op = false;

    for op in body {
        for dst in dest_vregs(op) {
            values.remove(&dst);
        }

        match op {
            IrOp::Label(_) | IrOp::Nop => {}
            IrOp::LoadImm(dst, value) => {
                saw_real_op = true;
                values.insert(*dst, TrackedValue::Const(*value));
            }
            IrOp::FrameAddr(dst, _) => {
                saw_real_op = true;
                facts.update_after(op);
                values.insert(*dst, TrackedValue::Unknown);
                continue;
            }
            IrOp::Copy(dst, src) => {
                saw_real_op = true;
                values.insert(*dst, tracked_value(*src, &values));
            }
            IrOp::Load(dst, _, _) => {
                saw_real_op = true;
                let Some(loc) = frame_load_loc(op, &facts) else {
                    return false;
                };
                values.insert(*dst, TrackedValue::Frame(loc));
            }
            IrOp::Store(val, _, _) => {
                saw_real_op = true;
                let Some(loc) = frame_store_loc(op, &facts) else {
                    return false;
                };
                if tracked_value(*val, &values) != TrackedValue::Frame(loc) {
                    return false;
                }
            }
            IrOp::Add(dst, lhs, rhs) => {
                saw_real_op = true;
                match (tracked_value(*lhs, &values), tracked_value(*rhs, &values)) {
                    (value, TrackedValue::Const(0)) | (TrackedValue::Const(0), value) => {
                        values.insert(*dst, value);
                    }
                    _ => {
                        values.insert(*dst, TrackedValue::Unknown);
                    }
                }
            }
            IrOp::Sub(dst, lhs, rhs) => {
                saw_real_op = true;
                if tracked_value(*rhs, &values) == TrackedValue::Const(0) {
                    values.insert(*dst, tracked_value(*lhs, &values));
                } else {
                    values.insert(*dst, TrackedValue::Unknown);
                }
            }
            IrOp::BitAnd(dst, lhs, rhs)
                if tracked_value(*rhs, &values) == TrackedValue::Const(-1) =>
            {
                saw_real_op = true;
                values.insert(*dst, tracked_value(*lhs, &values));
            }
            IrOp::BitAnd(dst, lhs, rhs)
                if tracked_value(*lhs, &values) == TrackedValue::Const(-1) =>
            {
                saw_real_op = true;
                values.insert(*dst, tracked_value(*rhs, &values));
            }
            IrOp::BitOr(dst, lhs, rhs) | IrOp::BitXor(dst, lhs, rhs) => {
                saw_real_op = true;
                match (tracked_value(*lhs, &values), tracked_value(*rhs, &values)) {
                    (value, TrackedValue::Const(0)) | (TrackedValue::Const(0), value) => {
                        values.insert(*dst, value);
                    }
                    _ => {
                        values.insert(*dst, TrackedValue::Unknown);
                    }
                }
            }
            IrOp::Mul(dst, lhs, rhs) => {
                saw_real_op = true;
                match (tracked_value(*lhs, &values), tracked_value(*rhs, &values)) {
                    (value, TrackedValue::Const(1)) | (TrackedValue::Const(1), value) => {
                        values.insert(*dst, value);
                    }
                    _ => {
                        values.insert(*dst, TrackedValue::Unknown);
                    }
                }
            }
            IrOp::Neg(dst, _)
            | IrOp::BitNot(dst, _)
            | IrOp::Shl(dst, _, _)
            | IrOp::Shr(dst, _, _)
            | IrOp::Lshr(dst, _, _)
            | IrOp::Div(dst, _, _)
            | IrOp::UDiv(dst, _, _)
            | IrOp::Mod(dst, _, _)
            | IrOp::UMod(dst, _, _) => {
                saw_real_op = true;
                values.insert(*dst, TrackedValue::Unknown);
            }
            _ => return false,
        }

        facts.update_after(op);
    }

    saw_real_op
}

fn tracked_value(vreg: VReg, values: &HashMap<VReg, TrackedValue>) -> TrackedValue {
    values.get(&vreg).copied().unwrap_or(TrackedValue::Unknown)
}

/// Try to find and transform one for-loop in the IR. Returns `Some(new_ops)`
/// if a transformation was made, `None` otherwise.
fn try_detect_one_loop(ops: &[IrOp], known: &HashMap<VReg, i64>) -> Option<Vec<IrOp>> {
    // Scan for Label(top) positions.
    for (label_top_idx, op) in ops.iter().enumerate() {
        let top_label = match op {
            IrOp::Label(l) => *l,
            _ => continue,
        };

        // Find the back-edge: Branch(top_label) after the label.
        let Some(back_edge_idx) = ops[label_top_idx + 1..]
            .iter()
            .position(|o| matches!(o, IrOp::Branch(l) if *l == top_label))
            .map(|p| p + label_top_idx + 1)
        else {
            continue;
        };

        // The Label(end) should immediately follow the back-edge.
        if back_edge_idx + 1 >= ops.len() {
            continue;
        }
        let end_label = match &ops[back_edge_idx + 1] {
            IrOp::Label(l) => *l,
            _ => continue,
        };

        // Now try to match the loop header pattern starting just after
        // Label(top). We need to find:
        //   1. A Cmp that compares the loop variable against a known limit
        //   2. A BranchCond that exits to end_label when the condition is false
        //   3. The loop variable starts at 0 and increments by 1
        if let Some(info) = analyze_loop_header(ops, label_top_idx, back_edge_idx, end_label, known)
            .or_else(|| {
                analyze_pointer_induction_loop(ops, label_top_idx, back_edge_idx, end_label, known)
            })
        {
            // Validate: the loop count must fit in u16 for the SHARC LCNTR
            // immediate encoding, and must be positive.
            if info.count <= 0 || info.count > i64::from(u16::MAX) {
                continue;
            }

            // Reject loops whose body contains:
            // - break (Branch to end_label) or continue (Branch to top)
            // - ANY backward branch or nested loop (Branch to a label
            //   defined BEFORE the branch within the body range)
            // SHARC+ hardware DO loops forbid all of these; violating
            // any of them desynchronises the loop-end comparator.
            let body = &ops[info.body_start..info.step_start];
            let body_labels: std::collections::HashSet<Label> = body
                .iter()
                .filter_map(|op| {
                    if let IrOp::Label(l) = op {
                        Some(*l)
                    } else {
                        None
                    }
                })
                .collect();
            let has_body_branch = body.iter().any(|op| match op {
                // break or continue
                IrOp::Branch(target) if *target == end_label || *target == top_label => true,
                // backward branch to a label inside the body (nested loop)
                IrOp::Branch(target) if body_labels.contains(target) => true,
                IrOp::BranchCond(_, target) if body_labels.contains(target) => true,
                _ => false,
            });
            if has_body_branch {
                continue;
            }

            // Function calls and nested hardware loops inside a
            // hardware DO loop are not safe on this target: calls use
            // control-flow/frame-stack state, and nested DO loops would
            // reuse LCNTR state. Keep such loops in software form.
            let has_unsafe_body_op = body.iter().any(|op| {
                matches!(
                    op,
                    IrOp::HardwareLoop { .. }
                        | IrOp::Call(..)
                        | IrOp::CallIndirect(..)
                        | IrOp::CallStruct { .. }
                        | IrOp::CallIndirectStruct { .. }
                )
            });
            if has_unsafe_body_op {
                continue;
            }

            // If the body references the loop counter slot, keep the
            // C-level increment sequence inside the hardware-loop body.
            // LCNTR controls the trip count, while the ordinary stack
            // counter still provides the value read by C expressions.
            let body_uses_counter = info.keep_counter_state
                || body.iter().any(|op| match op {
                    IrOp::Load(_, _, slot)
                    | IrOp::Store(_, _, slot)
                    | IrOp::Load64(_, _, slot)
                    | IrOp::Store64(_, _, slot)
                    | IrOp::FrameAddr(_, slot) => *slot == info.counter_slot,
                    _ => false,
                });

            // Reject loops with an empty body. SHARC+ hardware DO
            // requires the body to span at least one instruction so
            // the end-of-loop comparator triggers; with zero body
            // instructions the DO instruction's end-PC equals its own
            // PC, which the hardware interprets as an infinite loop
            // (or worse, a fault). Empty loops fall back to the
            // software loop form, which the optimizer can dead-code-
            // eliminate later if the trip count is also unused.
            let body_has_real_op = body
                .iter()
                .any(|op| !matches!(op, IrOp::Label(_) | IrOp::Nop));
            if !body_has_real_op {
                continue;
            }

            // Build the replacement: remove the init, header, step, and
            // back-edge, replacing with HardwareLoop + body + Label(end).
            let mut new_ops = Vec::with_capacity(ops.len());

            // Everything before the loop. If the C body reads the
            // counter, keep the original counter initialization too;
            // only the condition/header is replaced by LCNTR.
            if body_uses_counter {
                new_ops.extend_from_slice(&ops[..label_top_idx]);
            } else {
                new_ops.extend_from_slice(&ops[..info.init_store_idx]);
            }

            // Emit the HardwareLoop instruction.
            new_ops.push(IrOp::HardwareLoop {
                count: info.count,
                end_label,
            });

            // Emit the body. If the C body reads the counter, retain
            // the step sequence so those reads observe the same values
            // as the original software loop. Otherwise LCNTR replaces
            // the C counter and the step sequence can be dropped.
            let body_end = if body_uses_counter {
                back_edge_idx
            } else {
                info.step_start
            };
            new_ops.extend_from_slice(&ops[info.body_start..body_end]);

            // Emit Label(end) and everything after.
            new_ops.extend_from_slice(&ops[back_edge_idx + 1..]);

            return Some(new_ops);
        }
    }

    None
}

/// Information about a detected for-loop suitable for hardware loop conversion.
struct LoopInfo {
    /// Index of the Store that initializes the counter to 0.
    init_store_idx: usize,
    /// Index of the first body instruction (after the loop header).
    body_start: usize,
    /// Index of the first step instruction (increment).
    step_start: usize,
    /// Number of iterations.
    count: i64,
    /// Stack slot of the loop counter `i`. The body must not read or write
    /// this slot, because hardware loops increment LCNTR (an internal
    /// register), not the C-level induction variable on the stack. If the
    /// body references `i` we cannot legally drop the i++ step instructions.
    counter_slot: i32,
    /// Keep the source-level induction initialization and step even if the
    /// pre-step body does not read the counter slot.
    keep_counter_state: bool,
}

struct PointerLoopBounds {
    init_store_idx: usize,
    ptr_start: FrameMemLoc,
    ptr_end: FrameMemLoc,
    body_start: usize,
}

/// Analyze the loop header to determine if it is a simple counted for-loop.
fn analyze_loop_header(
    ops: &[IrOp],
    label_top_idx: usize,
    back_edge_idx: usize,
    end_label: Label,
    known: &HashMap<VReg, i64>,
) -> Option<LoopInfo> {
    // Look for the init: a LoadImm(v, 0) followed by Store(v, 0, slot)
    // just before Label(top).
    if label_top_idx < 2 {
        return None;
    }

    let (init_store_idx, counter_slot) = {
        // The Store should be the instruction just before Label(top).
        let store_idx = label_top_idx - 1;
        match &ops[store_idx] {
            IrOp::Store(val, _, slot) => {
                // Check that the stored value is a known 0.
                if known.get(val).copied() != Some(0) {
                    return None;
                }
                // Also find the LoadImm that produces this 0.
                // It should be just before the Store.
                if store_idx == 0 {
                    return None;
                }
                match &ops[store_idx - 1] {
                    IrOp::LoadImm(dst, 0) if *dst == *val => {}
                    _ => return None,
                }
                (store_idx - 1, *slot)
            }
            _ => return None,
        }
    };

    // After Label(top), expect: Load(v_i, 0, counter_slot)
    let after_top = label_top_idx + 1;
    if after_top >= ops.len() {
        return None;
    }
    let counter_vreg = match &ops[after_top] {
        IrOp::Load(dst, _, slot) if *slot == counter_slot => *dst,
        _ => return None,
    };

    // Next: LoadImm(v_limit, N) -- the loop bound.
    if after_top + 1 >= ops.len() {
        return None;
    }
    let limit_val = match &ops[after_top + 1] {
        IrOp::LoadImm(_, val) => *val,
        _ => return None,
    };
    let limit_vreg = match &ops[after_top + 1] {
        IrOp::LoadImm(dst, _) => *dst,
        _ => return None,
    };

    if after_top + 3 < ops.len()
        && matches!(
            &ops[after_top + 2],
            IrOp::Cmp(lhs, rhs) | IrOp::UCmp(lhs, rhs)
                if *lhs == counter_vreg && *rhs == limit_vreg
        )
        && matches!(
            &ops[after_top + 3],
            IrOp::BranchCond(Cond::Ge, target) if *target == end_label
        )
    {
        let body_start = after_top + 4;
        let step_start = find_loop_step_start(ops, body_start, back_edge_idx, counter_slot, known)?;
        return Some(LoopInfo {
            init_store_idx,
            body_start,
            step_start,
            count: limit_val,
            counter_slot,
            keep_counter_state: false,
        });
    }

    // Next: LoadImm(_, 0) and LoadImm(_, 1) for comparison results.
    if after_top + 3 >= ops.len() {
        return None;
    }
    match (&ops[after_top + 2], &ops[after_top + 3]) {
        (IrOp::LoadImm(_, 0), IrOp::LoadImm(_, 1)) => {}
        _ => return None,
    }

    // Next: Cmp(counter_vreg, limit_vreg)
    if after_top + 4 >= ops.len() {
        return None;
    }
    match &ops[after_top + 4] {
        IrOp::Cmp(lhs, rhs) if *lhs == counter_vreg && *rhs == limit_vreg => {}
        _ => return None,
    }

    // Next: BranchCond(Lt, lbl_true)
    if after_top + 5 >= ops.len() {
        return None;
    }
    match &ops[after_top + 5] {
        IrOp::BranchCond(Cond::Lt, _) => {}
        _ => return None,
    }

    // Next: Copy, Branch, Label, Copy, Label -- the comparison result block.
    // Skip forward to find the BranchCond(Eq, end_label) that exits the loop.
    let mut scan = after_top + 6;
    let mut found_exit = false;
    let mut body_start = 0;
    while scan < back_edge_idx {
        if let IrOp::BranchCond(Cond::Eq, target) = &ops[scan] {
            if *target == end_label {
                found_exit = true;
                body_start = scan + 1;
                break;
            }
        }
        scan += 1;
    }

    if !found_exit {
        return None;
    }

    let step_start = find_loop_step_start(ops, body_start, back_edge_idx, counter_slot, known)?;

    Some(LoopInfo {
        init_store_idx,
        body_start,
        step_start,
        count: limit_val,
        counter_slot,
        keep_counter_state: false,
    })
}

fn analyze_pointer_induction_loop(
    ops: &[IrOp],
    label_top_idx: usize,
    back_edge_idx: usize,
    end_label: Label,
    known: &HashMap<VReg, i64>,
) -> Option<LoopInfo> {
    let after_top = label_top_idx + 1;
    if after_top + 3 >= back_edge_idx {
        return None;
    }

    let (ptr_vreg, ptr_slot) = match &ops[after_top] {
        IrOp::Load(dst, 0, slot) => (*dst, *slot),
        _ => return None,
    };

    if let Some(bounds) = analyze_stored_end_pointer_loop(
        ops,
        label_top_idx,
        after_top,
        end_label,
        ptr_vreg,
        ptr_slot,
    ) {
        return build_pointer_loop_info(ops, back_edge_idx, ptr_slot, known, bounds);
    }

    if let Some(bounds) = analyze_frame_end_pointer_loop(
        ops,
        label_top_idx,
        after_top,
        back_edge_idx,
        end_label,
        ptr_vreg,
        ptr_slot,
    ) {
        return build_pointer_loop_info(ops, back_edge_idx, ptr_slot, known, bounds);
    }

    None
}

fn build_pointer_loop_info(
    ops: &[IrOp],
    back_edge_idx: usize,
    ptr_slot: i32,
    known: &HashMap<VReg, i64>,
    bounds: PointerLoopBounds,
) -> Option<LoopInfo> {
    let stride = find_pointer_step_stride(ops, bounds.body_start, back_edge_idx, ptr_slot, known)?;
    if stride <= 0 {
        return None;
    }

    let span = i64::from(bounds.ptr_end.frame_byte_offset() - bounds.ptr_start.frame_byte_offset());
    if span <= 0 || span % stride != 0 {
        return None;
    }

    Some(LoopInfo {
        init_store_idx: bounds.init_store_idx,
        body_start: bounds.body_start,
        step_start: back_edge_idx,
        count: span / stride,
        counter_slot: ptr_slot,
        keep_counter_state: true,
    })
}

fn analyze_stored_end_pointer_loop(
    ops: &[IrOp],
    label_top_idx: usize,
    after_top: usize,
    end_label: Label,
    ptr_vreg: VReg,
    ptr_slot: i32,
) -> Option<PointerLoopBounds> {
    let (end_vreg, end_slot) = match &ops[after_top + 1] {
        IrOp::Load(dst, 0, slot) => (*dst, *slot),
        _ => return None,
    };
    if ptr_slot == end_slot {
        return None;
    }
    match &ops[after_top + 2] {
        IrOp::Cmp(lhs, rhs) | IrOp::UCmp(lhs, rhs) if *lhs == ptr_vreg && *rhs == end_vreg => {}
        _ => return None,
    }
    match &ops[after_top + 3] {
        IrOp::BranchCond(Cond::Eq, target) if *target == end_label => {}
        _ => return None,
    }

    let body_start = after_top + 4;
    let (init_store_idx, ptr_start, ptr_end) =
        find_pointer_loop_bounds(ops, label_top_idx, ptr_slot, end_slot)?;
    Some(PointerLoopBounds {
        init_store_idx,
        ptr_start,
        ptr_end,
        body_start,
    })
}

fn analyze_frame_end_pointer_loop(
    ops: &[IrOp],
    label_top_idx: usize,
    after_top: usize,
    back_edge_idx: usize,
    end_label: Label,
    ptr_vreg: VReg,
    ptr_slot: i32,
) -> Option<PointerLoopBounds> {
    let (init_store_idx, ptr_start) = find_pointer_loop_start(ops, label_top_idx, ptr_slot)?;
    let mut facts = FrameFacts::default();

    for idx in after_top + 1..back_edge_idx {
        match &ops[idx] {
            IrOp::Cmp(lhs, rhs) | IrOp::UCmp(lhs, rhs) => {
                let ptr_end = if *lhs == ptr_vreg {
                    facts.addrs.get(rhs).copied()
                } else if *rhs == ptr_vreg {
                    facts.addrs.get(lhs).copied()
                } else {
                    None
                }?;

                if matches!(
                    ops.get(idx + 1),
                    Some(IrOp::BranchCond(Cond::Eq, target)) if *target == end_label
                ) {
                    return Some(PointerLoopBounds {
                        init_store_idx,
                        ptr_start,
                        ptr_end,
                        body_start: idx + 2,
                    });
                }
                return None;
            }
            IrOp::FrameAddr(..) | IrOp::LoadImm(..) | IrOp::Add(..) | IrOp::Copy(..) => {
                facts.update_after(&ops[idx]);
            }
            IrOp::Label(_) | IrOp::Nop => {}
            _ => return None,
        }
    }

    None
}

fn find_pointer_step_stride(
    ops: &[IrOp],
    body_start: usize,
    back_edge_idx: usize,
    ptr_slot: i32,
    known: &HashMap<VReg, i64>,
) -> Option<i64> {
    let mut stride = None;
    let mut ptr_store_count = 0;

    for idx in body_start..back_edge_idx {
        if let IrOp::Store(stored, 0, slot) = &ops[idx] {
            if *slot != ptr_slot {
                continue;
            }
            ptr_store_count += 1;
            let mut found = None;
            for scan in (body_start..idx).rev() {
                if let IrOp::Add(dst, lhs, rhs) = &ops[scan] {
                    if *dst != *stored {
                        continue;
                    }
                    if load_from_slot_before(ops, body_start, scan, *lhs, ptr_slot) {
                        found = known.get(rhs).copied();
                    } else if load_from_slot_before(ops, body_start, scan, *rhs, ptr_slot) {
                        found = known.get(lhs).copied();
                    }
                    if found.is_some() {
                        break;
                    }
                }
            }
            stride = found;
        }
    }

    if ptr_store_count == 1 {
        stride
    } else {
        None
    }
}

fn load_from_slot_before(ops: &[IrOp], start: usize, end: usize, vreg: VReg, slot: i32) -> bool {
    ops[start..end]
        .iter()
        .any(|op| matches!(op, IrOp::Load(dst, 0, s) if *dst == vreg && *s == slot))
}

fn find_pointer_loop_bounds(
    ops: &[IrOp],
    label_top_idx: usize,
    ptr_slot: i32,
    end_slot: i32,
) -> Option<(usize, FrameMemLoc, FrameMemLoc)> {
    let block_start = ops[..label_top_idx]
        .iter()
        .rposition(|op| matches!(op, IrOp::Label(_) | IrOp::Branch(_) | IrOp::BranchCond(..)))
        .map_or(0, |idx| idx + 1);

    let mut facts = FrameFacts::default();
    let mut ptr_start = None;
    let mut ptr_init_store_idx = None;
    let mut ptr_end = None;

    for (idx, op) in ops.iter().enumerate().take(label_top_idx).skip(block_start) {
        if let IrOp::Store(val, 0, slot) = op {
            if *slot == ptr_slot {
                ptr_start = facts.addrs.get(val).copied();
                ptr_init_store_idx = Some(idx);
            } else if *slot == end_slot {
                ptr_end = facts.addrs.get(val).copied();
            }
        }
        facts.update_after(op);
    }

    Some((ptr_init_store_idx?, ptr_start?, ptr_end?))
}

fn find_pointer_loop_start(
    ops: &[IrOp],
    label_top_idx: usize,
    ptr_slot: i32,
) -> Option<(usize, FrameMemLoc)> {
    let block_start = ops[..label_top_idx]
        .iter()
        .rposition(|op| matches!(op, IrOp::Label(_) | IrOp::Branch(_) | IrOp::BranchCond(..)))
        .map_or(0, |idx| idx + 1);

    let mut facts = FrameFacts::default();
    let mut ptr_start = None;
    let mut ptr_init_store_idx = None;

    for (idx, op) in ops.iter().enumerate().take(label_top_idx).skip(block_start) {
        if let IrOp::Store(val, 0, slot) = op {
            if *slot == ptr_slot {
                ptr_start = facts.addrs.get(val).copied();
                ptr_init_store_idx = Some(idx);
            }
        }
        facts.update_after(op);
    }

    Some((ptr_init_store_idx?, ptr_start?))
}

fn find_loop_step_start(
    ops: &[IrOp],
    body_start: usize,
    back_edge_idx: usize,
    counter_slot: i32,
    known: &HashMap<VReg, i64>,
) -> Option<usize> {
    // Find the step: look backwards from the back-edge for the increment
    // pattern. The step should store an incremented counter back to the
    // same stack slot. We look for the last Store to counter_slot before
    // the back-edge, then verify its sequence contains an Add by one.
    let mut step_start = back_edge_idx;
    for idx in (body_start..back_edge_idx).rev() {
        match &ops[idx] {
            IrOp::Store(_, _, slot) if *slot == counter_slot => {
                if ops[idx + 1..back_edge_idx]
                    .iter()
                    .any(|op| !matches!(op, IrOp::Label(_) | IrOp::Nop))
                {
                    return None;
                }
                // Trace back to find the beginning of the increment sequence.
                // Typically: Load(v, 0, slot), LoadImm(v1, 1), Add(v2, v, v1),
                // Store(v2, 0, slot)
                step_start = find_step_start(ops, idx, body_start);
                break;
            }
            _ => continue,
        }
    }

    for op in &ops[step_start..back_edge_idx] {
        if let IrOp::Add(_, lhs, rhs) = op {
            let lv = known.get(lhs).copied();
            let rv = known.get(rhs).copied();
            if lv == Some(1) || rv == Some(1) {
                return Some(step_start);
            }
        }
    }

    None
}

/// Walk backwards from a Store to find the beginning of the increment
/// sequence (typically Load + LoadImm + Add + Store).
fn find_step_start(ops: &[IrOp], store_idx: usize, body_start: usize) -> usize {
    // Walk backwards up to 4 instructions to find a Load from the same slot.
    let mut start = store_idx;
    for look_back in 1..=4 {
        if store_idx < look_back || store_idx - look_back < body_start {
            break;
        }
        let idx = store_idx - look_back;
        match &ops[idx] {
            IrOp::Load(..) | IrOp::LoadImm(..) | IrOp::Add(..) => {
                start = idx;
            }
            _ => break,
        }
    }
    start
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Return the destination vregs of an op.
fn dest_vregs(op: &IrOp) -> Vec<VReg> {
    match op {
        IrOp::LoadImm(d, _)
        | IrOp::Copy(d, _)
        | IrOp::Add(d, _, _)
        | IrOp::Sub(d, _, _)
        | IrOp::Mul(d, _, _)
        | IrOp::Div(d, _, _)
        | IrOp::UDiv(d, _, _)
        | IrOp::Mod(d, _, _)
        | IrOp::UMod(d, _, _)
        | IrOp::BitAnd(d, _, _)
        | IrOp::BitOr(d, _, _)
        | IrOp::BitXor(d, _, _)
        | IrOp::Shl(d, _, _)
        | IrOp::Shr(d, _, _)
        | IrOp::Lshr(d, _, _)
        | IrOp::Neg(d, _)
        | IrOp::BitNot(d, _)
        | IrOp::Load(d, _, _)
        | IrOp::LoadGlobal(d, _)
        | IrOp::ReadGlobal(d, _)
        | IrOp::ReadGlobal64(d, _)
        | IrOp::LoadString(d, _)
        | IrOp::LoadWideString(d, _)
        | IrOp::FAdd(d, _, _)
        | IrOp::FSub(d, _, _)
        | IrOp::FMul(d, _, _)
        | IrOp::FDiv(d, _, _)
        | IrOp::FNeg(d, _)
        | IrOp::IntToFloat(d, _)
        | IrOp::FloatToInt(d, _)
        | IrOp::Call(d, _, _)
        | IrOp::CallIndirect(d, _, _)
        | IrOp::LongLongToInt(d, _)
        | IrOp::StackSave(d)
        | IrOp::StackAlloc(d, _)
        | IrOp::FrameAddr(d, _)
        | IrOp::LoadStackArg(d, _)
        | IrOp::StackArgAddr(d, _)
        | IrOp::LoadStructRetPtr(d) => vec![*d],
        IrOp::LoadImm64(d, _)
        | IrOp::Copy64(d, _)
        | IrOp::Add64(d, _, _)
        | IrOp::Sub64(d, _, _)
        | IrOp::Mul64(d, _, _)
        | IrOp::Div64(d, _, _)
        | IrOp::UDiv64(d, _, _)
        | IrOp::Mod64(d, _, _)
        | IrOp::UMod64(d, _, _)
        | IrOp::BitAnd64(d, _, _)
        | IrOp::BitOr64(d, _, _)
        | IrOp::BitXor64(d, _, _)
        | IrOp::Shl64(d, _, _)
        | IrOp::Shr64(d, _, _)
        | IrOp::UShr64(d, _, _)
        | IrOp::Neg64(d, _)
        | IrOp::BitNot64(d, _)
        | IrOp::Load64(d, _, _)
        | IrOp::IntToLongLong(d, _)
        | IrOp::SExtToLongLong(d, _) => vec![*d, *d + 1],

        IrOp::Cmp(..)
        | IrOp::UCmp(..)
        | IrOp::FCmp(..)
        | IrOp::Cmp64(..)
        | IrOp::UCmp64(..)
        | IrOp::Ret(_)
        | IrOp::RetStruct { .. }
        | IrOp::CallStruct { .. }
        | IrOp::CallIndirectStruct { .. }
        | IrOp::Branch(_)
        | IrOp::BranchCond(..)
        | IrOp::Label(_)
        | IrOp::Store(..)
        | IrOp::Store64(..)
        | IrOp::StoreGlobal(..)
        | IrOp::WriteGlobal64(..)
        | IrOp::StackRestore(_)
        | IrOp::HardwareLoop { .. }
        | IrOp::Nop => Vec::new(),
    }
}

/// Return all vregs used as source operands.
fn source_vregs(op: &IrOp) -> Vec<VReg> {
    match op {
        IrOp::LoadImm(..)
        | IrOp::Label(_)
        | IrOp::Branch(_)
        | IrOp::HardwareLoop { .. }
        | IrOp::StackSave(_)
        | IrOp::FrameAddr(..)
        | IrOp::LoadStackArg(..)
        | IrOp::StackArgAddr(..)
        | IrOp::Nop => Vec::new(),
        IrOp::Copy(_, s)
        | IrOp::Neg(_, s)
        | IrOp::BitNot(_, s)
        | IrOp::FNeg(_, s)
        | IrOp::IntToFloat(_, s)
        | IrOp::FloatToInt(_, s)
        | IrOp::StackRestore(s)
        | IrOp::StackAlloc(_, s) => vec![*s],
        IrOp::Add(_, a, b)
        | IrOp::Sub(_, a, b)
        | IrOp::Mul(_, a, b)
        | IrOp::Div(_, a, b)
        | IrOp::UDiv(_, a, b)
        | IrOp::Mod(_, a, b)
        | IrOp::UMod(_, a, b)
        | IrOp::BitAnd(_, a, b)
        | IrOp::BitOr(_, a, b)
        | IrOp::BitXor(_, a, b)
        | IrOp::Shl(_, a, b)
        | IrOp::Shr(_, a, b)
        | IrOp::Lshr(_, a, b)
        | IrOp::FAdd(_, a, b)
        | IrOp::FSub(_, a, b)
        | IrOp::FMul(_, a, b)
        | IrOp::FDiv(_, a, b) => vec![*a, *b],
        IrOp::Cmp(a, b) | IrOp::UCmp(a, b) | IrOp::FCmp(a, b) => vec![*a, *b],
        IrOp::Ret(Some(v)) => vec![*v],
        IrOp::Ret(None) => Vec::new(),
        IrOp::BranchCond(_, _) => Vec::new(),
        IrOp::Call(_, _, args) => args.clone(),
        IrOp::CallIndirect(_, addr, args) => {
            let mut v = vec![*addr];
            v.extend_from_slice(args);
            v
        }
        IrOp::CallStruct { args, dst_addr, .. } => {
            let mut v = args.clone();
            v.push(*dst_addr);
            v
        }
        IrOp::CallIndirectStruct {
            addr,
            args,
            dst_addr,
            ..
        } => {
            let mut v = vec![*addr];
            v.extend_from_slice(args);
            v.push(*dst_addr);
            v
        }
        IrOp::RetStruct {
            src_addr, dst_addr, ..
        } => {
            let mut v = vec![*src_addr];
            if let Some(d) = dst_addr {
                v.push(*d);
            }
            v
        }
        IrOp::LoadStructRetPtr(_) => Vec::new(),
        IrOp::Load(_, base, _) => vec![*base],
        IrOp::Store(val, base, _) => vec![*val, *base],
        IrOp::LoadGlobal(..)
        | IrOp::ReadGlobal(..)
        | IrOp::ReadGlobal64(..)
        | IrOp::LoadString(..)
        | IrOp::LoadWideString(..) => Vec::new(),
        IrOp::StoreGlobal(val, _) => vec![*val],
        IrOp::WriteGlobal64(val, _) => vec![*val, *val + 1],
        IrOp::LoadImm64(..) => Vec::new(),
        IrOp::Copy64(_, s)
        | IrOp::Neg64(_, s)
        | IrOp::BitNot64(_, s)
        | IrOp::LongLongToInt(_, s) => vec![*s, *s + 1],
        IrOp::IntToLongLong(_, s) | IrOp::SExtToLongLong(_, s) => vec![*s],
        IrOp::Add64(_, a, b)
        | IrOp::Sub64(_, a, b)
        | IrOp::Mul64(_, a, b)
        | IrOp::Div64(_, a, b)
        | IrOp::UDiv64(_, a, b)
        | IrOp::Mod64(_, a, b)
        | IrOp::UMod64(_, a, b)
        | IrOp::BitAnd64(_, a, b)
        | IrOp::BitOr64(_, a, b)
        | IrOp::BitXor64(_, a, b) => vec![*a, *a + 1, *b, *b + 1],
        IrOp::Shl64(_, a, b) | IrOp::Shr64(_, a, b) | IrOp::UShr64(_, a, b) => vec![*a, *a + 1, *b],
        IrOp::Cmp64(a, b) | IrOp::UCmp64(a, b) => vec![*a, *a + 1, *b, *b + 1],
        IrOp::Load64(_, base, _) => vec![*base],
        IrOp::Store64(val, base, _) => vec![*val, *val + 1, *base],
    }
}

/// Check if an op has side effects beyond writing to its destination vreg.
fn has_side_effects(op: &IrOp) -> bool {
    matches!(
        op,
        IrOp::Call(..)
            | IrOp::CallIndirect(..)
            | IrOp::CallStruct { .. }
            | IrOp::CallIndirectStruct { .. }
            | IrOp::StackSave(_)
            | IrOp::StackRestore(_)
            | IrOp::StackAlloc(..)
    )
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ir::IrOp;

    #[test]
    fn fold_add_constants() {
        let ops = vec![
            IrOp::LoadImm(0, 10),
            IrOp::LoadImm(1, 20),
            IrOp::Add(2, 0, 1),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        // Should fold to LoadImm(2, 30) + Ret.
        let has_folded = folded.iter().any(|op| matches!(op, IrOp::LoadImm(2, 30)));
        assert!(has_folded, "expected LoadImm(2, 30), got: {folded:?}");
        // Original LoadImm(0, 10) and LoadImm(1, 20) should be removed
        // since they were single-use.
        let count_loads = folded
            .iter()
            .filter(|op| matches!(op, IrOp::LoadImm(..)))
            .count();
        assert_eq!(
            count_loads, 1,
            "expected 1 LoadImm, got {count_loads}: {folded:?}"
        );
    }

    #[test]
    fn fold_mul_constants() {
        let ops = vec![
            IrOp::LoadImm(0, 6),
            IrOp::LoadImm(1, 7),
            IrOp::Mul(2, 0, 1),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        let has_folded = folded.iter().any(|op| matches!(op, IrOp::LoadImm(2, 42)));
        assert!(has_folded, "expected LoadImm(2, 42), got: {folded:?}");
    }

    #[test]
    fn fold_add_zero_to_copy() {
        let ops = vec![IrOp::LoadImm(0, 0), IrOp::Add(2, 1, 0), IrOp::Ret(Some(2))];
        let folded = constant_fold(&ops);
        let has_copy = folded.iter().any(|op| matches!(op, IrOp::Copy(2, 1)));
        assert!(has_copy, "expected Copy(2, 1), got: {folded:?}");
    }

    #[test]
    fn fold_mul_one_to_copy() {
        let ops = vec![IrOp::LoadImm(0, 1), IrOp::Mul(2, 1, 0), IrOp::Ret(Some(2))];
        let folded = constant_fold(&ops);
        let has_copy = folded.iter().any(|op| matches!(op, IrOp::Copy(2, 1)));
        assert!(has_copy, "expected Copy(2, 1), got: {folded:?}");
    }

    #[test]
    fn fold_unsigned_power_of_two_ops() {
        let ops = vec![
            IrOp::LoadImm(1, 4),
            IrOp::UDiv(2, 3, 1),
            IrOp::LoadImm(4, 4),
            IrOp::UMod(5, 3, 4),
            IrOp::LoadImm(6, 8),
            IrOp::Mul(7, 3, 6),
        ];
        let folded = constant_fold(&ops);
        assert!(
            folded.iter().any(|op| {
                matches!(op, IrOp::Lshr(2, 3, shift) if folded.contains(&IrOp::LoadImm(*shift, -2)))
            }),
            "expected unsigned divide by 4 to become logical shift: {folded:?}"
        );
        assert!(
            folded.iter().any(|op| {
                matches!(op, IrOp::BitAnd(5, 3, mask) if folded.contains(&IrOp::LoadImm(*mask, 3)))
            }),
            "expected unsigned mod by 4 to become bit mask: {folded:?}"
        );
        assert!(
            folded.iter().any(|op| {
                matches!(op, IrOp::Shl(7, 3, shift) if folded.contains(&IrOp::LoadImm(*shift, 3)))
            }),
            "expected multiply by 8 to become shift: {folded:?}"
        );
    }

    #[test]
    fn fold_affine_add_chain_minus_variable_to_constant() {
        let ops = vec![
            IrOp::LoadImm(1, 7),
            IrOp::Add(2, 0, 1),
            IrOp::LoadImm(3, 13),
            IrOp::Add(4, 2, 3),
            IrOp::Sub(5, 4, 0),
            IrOp::Ret(Some(5)),
        ];

        let optimized = dead_code_eliminate(&constant_fold(&ops));
        assert_eq!(
            optimized,
            vec![IrOp::LoadImm(5, 20), IrOp::Ret(Some(5))],
            "expected (((x + 7) + 13) - x to fold to 20, got: {optimized:?}"
        );
    }

    #[test]
    fn fold_affine_scaled_sum_minus_matching_scaled_variable_to_constant() {
        let ops = vec![
            IrOp::LoadImm(1, 3),
            IrOp::Mul(2, 0, 1),
            IrOp::LoadImm(3, 5),
            IrOp::Mul(4, 0, 3),
            IrOp::Add(5, 2, 4),
            IrOp::LoadImm(6, 8),
            IrOp::Mul(7, 0, 6),
            IrOp::Sub(8, 5, 7),
            IrOp::Ret(Some(8)),
        ];

        let optimized = dead_code_eliminate(&constant_fold(&ops));
        assert_eq!(
            optimized,
            vec![IrOp::LoadImm(8, 0), IrOp::Ret(Some(8))],
            "expected ((x * 3) + (x * 5)) - (x * 8) to fold to 0, got: {optimized:?}"
        );
    }

    #[test]
    fn fold_affine_scaled_sum_minus_shifted_variable_to_constant() {
        let ops = vec![
            IrOp::LoadImm(1, 3),
            IrOp::Mul(2, 0, 1),
            IrOp::LoadImm(3, 5),
            IrOp::Mul(4, 0, 3),
            IrOp::Add(5, 2, 4),
            IrOp::LoadImm(6, 3),
            IrOp::Shl(7, 0, 6),
            IrOp::Sub(8, 5, 7),
            IrOp::Ret(Some(8)),
        ];

        let optimized = dead_code_eliminate(&constant_fold(&ops));
        assert_eq!(
            optimized,
            vec![IrOp::LoadImm(8, 0), IrOp::Ret(Some(8))],
            "expected ((x * 3) + (x * 5)) - (x << 3) to fold to 0, got: {optimized:?}"
        );
    }

    #[test]
    fn dce_removes_dead_load_imm() {
        let ops = vec![
            IrOp::LoadImm(0, 10), // used
            IrOp::LoadImm(1, 20), // dead
            IrOp::Ret(Some(0)),
        ];
        let eliminated = dead_code_eliminate(&ops);
        assert_eq!(eliminated.len(), 2, "expected 2 ops, got: {eliminated:?}");
        assert!(matches!(eliminated[0], IrOp::LoadImm(0, 10)));
        assert!(matches!(eliminated[1], IrOp::Ret(Some(0))));
    }

    #[test]
    fn dce_keeps_stores_and_calls() {
        let ops = vec![
            IrOp::LoadImm(0, 42),
            IrOp::Store(0, 0, 0),
            IrOp::Call(1, "foo".to_string(), vec![0]),
            IrOp::Ret(None),
        ];
        let eliminated = dead_code_eliminate(&ops);
        assert_eq!(eliminated.len(), 4, "should keep all ops: {eliminated:?}");
    }

    #[test]
    fn dce_keeps_high_half_for_store64() {
        let ops = vec![
            IrOp::Copy(2, 0),
            IrOp::Copy(3, 1),
            IrOp::Store64(2, 0, 0),
            IrOp::Ret(None),
        ];
        let eliminated = dead_code_eliminate(&ops);
        assert!(
            eliminated.iter().any(|op| matches!(op, IrOp::Copy(3, 1))),
            "high-half copy was incorrectly removed: {eliminated:?}"
        );
    }

    #[test]
    fn dce_keeps_labels_and_branches() {
        let ops = vec![
            IrOp::Label(0),
            IrOp::Branch(0),
            IrOp::Label(1),
            IrOp::Ret(None),
        ];
        let eliminated = dead_code_eliminate(&ops);
        assert_eq!(eliminated.len(), 4);
    }

    #[test]
    fn fold_chain() {
        // 2 + 3 folded to 5.
        let ops = vec![
            IrOp::LoadImm(0, 2),
            IrOp::LoadImm(1, 3),
            IrOp::Add(2, 0, 1),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        let has_five = folded.iter().any(|op| matches!(op, IrOp::LoadImm(2, 5)));
        assert!(has_five, "expected folded constant 5, got: {folded:?}");
    }

    #[test]
    fn fold_sub_zero() {
        let ops = vec![IrOp::LoadImm(1, 0), IrOp::Sub(2, 0, 1), IrOp::Ret(Some(2))];
        let folded = constant_fold(&ops);
        let has_copy = folded.iter().any(|op| matches!(op, IrOp::Copy(2, 0)));
        assert!(has_copy, "expected Copy(2, 0), got: {folded:?}");
    }

    #[test]
    fn fold_neg() {
        let ops = vec![IrOp::LoadImm(0, 5), IrOp::Neg(1, 0), IrOp::Ret(Some(1))];
        let folded = constant_fold(&ops);
        let has_neg = folded.iter().any(|op| matches!(op, IrOp::LoadImm(1, -5)));
        assert!(has_neg, "expected LoadImm(1, -5), got: {folded:?}");
    }

    #[test]
    fn fold_bitwise() {
        let ops = vec![
            IrOp::LoadImm(0, 0xFF),
            IrOp::LoadImm(1, 0x0F),
            IrOp::BitAnd(2, 0, 1),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        let has_folded = folded.iter().any(|op| matches!(op, IrOp::LoadImm(2, 0x0F)));
        assert!(has_folded, "expected LoadImm(2, 0x0F), got: {folded:?}");
    }

    #[test]
    fn fold_bitwise_identities() {
        let ops = vec![
            IrOp::LoadImm(0, 0),
            IrOp::BitXor(2, 1, 0),
            IrOp::BitOr(3, 2, 0),
            IrOp::Ret(Some(3)),
        ];
        let folded = constant_fold(&ops);
        assert!(
            folded.iter().any(|op| matches!(op, IrOp::Copy(2, 1))),
            "expected xor-zero copy, got: {folded:?}"
        );
        assert!(
            folded.iter().any(|op| matches!(op, IrOp::Copy(3, 2))),
            "expected or-zero copy, got: {folded:?}"
        );
        assert!(
            !folded
                .iter()
                .any(|op| matches!(op, IrOp::BitXor(..) | IrOp::BitOr(..))),
            "expected identities to remove bitwise ops, got: {folded:?}"
        );
    }

    #[test]
    fn forward_stack_loads_removes_dead_temp_slot() {
        let ops = vec![
            IrOp::LoadImm(1, 7),
            IrOp::Store(1, 0, 2),
            IrOp::Load(3, 0, 2),
            IrOp::Ret(Some(3)),
        ];
        let forwarded = forward_stack_loads(&ops);
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Copy(3, 1))),
            "expected frame load to become copy, got: {forwarded:?}"
        );
        assert!(
            !forwarded
                .iter()
                .any(|op| matches!(op, IrOp::Store(_, 0, 2))),
            "expected now-dead store to temp slot to be removed, got: {forwarded:?}"
        );
    }

    #[test]
    fn forward_stack_loads_handles_frameaddr_member_slot() {
        let ops = vec![
            IrOp::LoadImm(1, 7),
            IrOp::FrameAddr(2, 5),
            IrOp::LoadImm(3, 4),
            IrOp::Add(4, 2, 3),
            IrOp::Store(1, 4, 0),
            IrOp::FrameAddr(5, 5),
            IrOp::LoadImm(6, 4),
            IrOp::Add(7, 5, 6),
            IrOp::Load(8, 7, 0),
            IrOp::Ret(Some(8)),
        ];
        let forwarded = forward_stack_loads(&ops);
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Copy(8, 1))),
            "expected indirect frame load to become copy, got: {forwarded:?}"
        );
        assert!(
            !forwarded
                .iter()
                .any(|op| matches!(op, IrOp::Store(1, 4, 0))),
            "expected dead indirect frame store to be removed, got: {forwarded:?}"
        );
    }

    #[test]
    fn forward_stack_loads_keeps_escaped_frameaddr_store() {
        let ops = vec![
            IrOp::LoadImm(1, 7),
            IrOp::FrameAddr(2, 5),
            IrOp::Store(1, 2, 0),
            IrOp::Call(3, "sink".into(), vec![2]),
            IrOp::Load(4, 2, 0),
            IrOp::Ret(Some(4)),
        ];
        let forwarded = forward_stack_loads(&ops);
        assert!(
            forwarded
                .iter()
                .any(|op| matches!(op, IrOp::Store(1, 2, 0))),
            "escaped frame store must remain visible, got: {forwarded:?}"
        );
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Load(4, 2, 0))),
            "escaped frame load must not be forwarded, got: {forwarded:?}"
        );
    }

    #[test]
    fn forward_stack_loads_keeps_store_for_frameaddr_load_after_label() {
        let ops = vec![
            IrOp::LoadImm(1, 0),
            IrOp::FrameAddr(2, 5),
            IrOp::LoadImm(3, 4),
            IrOp::Add(4, 2, 3),
            IrOp::Store(1, 4, 0),
            IrOp::Label(0),
            IrOp::Load(5, 4, 0),
            IrOp::Ret(Some(5)),
        ];
        let forwarded = forward_stack_loads(&ops);
        assert!(
            forwarded
                .iter()
                .any(|op| matches!(op, IrOp::Store(1, 4, 0))),
            "store feeding a post-label indirect frame load must remain, got: {forwarded:?}"
        );
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Load(5, 4, 0))),
            "post-label load should not be forwarded across CFG boundary, got: {forwarded:?}"
        );
    }

    #[test]
    fn forward_stack_loads_canonicalizes_frameaddr_word_offsets() {
        let ops = vec![
            IrOp::LoadImm(1, 7),
            IrOp::FrameAddr(2, 8),
            IrOp::Store(1, 2, 0),
            IrOp::FrameAddr(3, 9),
            IrOp::LoadImm(4, 4),
            IrOp::Add(5, 3, 4),
            IrOp::Load(6, 5, 0),
            IrOp::Ret(Some(6)),
        ];
        let forwarded = forward_stack_loads(&ops);
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Copy(6, 1))),
            "FrameAddr(9)+4 should alias slot 8, got: {forwarded:?}"
        );
        assert!(
            !forwarded
                .iter()
                .any(|op| matches!(op, IrOp::Store(_, 2, 0))),
            "forwarded adjacent-slot store should be removable, got: {forwarded:?}"
        );
    }

    #[test]
    fn forward_stack_loads_treats_hardware_loop_as_cfg_boundary() {
        let ops = vec![
            IrOp::LoadImm(1, 0),
            IrOp::Store(1, 0, 2),
            IrOp::HardwareLoop {
                count: 8,
                end_label: 9,
            },
            IrOp::Load(2, 0, 2),
            IrOp::LoadImm(3, 1),
            IrOp::Add(4, 2, 3),
            IrOp::Store(4, 0, 2),
            IrOp::Label(9),
            IrOp::Load(5, 0, 2),
            IrOp::Ret(Some(5)),
        ];

        let forwarded = forward_stack_loads(&ops);
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Load(2, 0, 2))),
            "loop-body load must not be forwarded from pre-loop state: {forwarded:?}"
        );
        assert!(
            forwarded.iter().any(|op| matches!(op, IrOp::Load(5, 0, 2))),
            "post-loop load must not be forwarded from loop-body state: {forwarded:?}"
        );
    }

    #[test]
    fn propagate_copy_chain_to_uses() {
        let ops = vec![
            IrOp::Copy(2, 1),
            IrOp::Copy(3, 2),
            IrOp::LoadImm(4, 7),
            IrOp::BitAnd(5, 3, 4),
            IrOp::Ret(Some(5)),
        ];
        let propagated = propagate_copies(&ops);
        assert!(
            propagated
                .iter()
                .any(|op| matches!(op, IrOp::BitAnd(5, 1, 4))),
            "expected copy chain to collapse into BitAnd source, got: {propagated:?}"
        );
        assert!(
            !propagated.iter().any(|op| matches!(op, IrOp::Copy(..))),
            "expected redundant copies to be removed, got: {propagated:?}"
        );
    }

    #[test]
    fn propagate_copy_into_call_args() {
        let ops = vec![IrOp::Copy(2, 1), IrOp::Call(3, "f".into(), vec![2])];
        let propagated = dead_code_eliminate(&propagate_copies(&ops));
        assert!(
            propagated.iter().any(
                |op| matches!(op, IrOp::Call(3, name, args) if name == "f" && args == &vec![1])
            ),
            "expected call arg to be rewritten before copy removal, got: {propagated:?}"
        );
        assert!(
            !propagated.iter().any(|op| matches!(op, IrOp::Copy(..))),
            "expected redundant copy to be removed, got: {propagated:?}"
        );
    }

    #[test]
    fn propagate_copy_materializes_branch_results() {
        let ops = vec![
            IrOp::LoadImm(1, 0),
            IrOp::BranchCond(Cond::Eq, 1),
            IrOp::LoadImm(2, 0x55),
            IrOp::Copy(4, 2),
            IrOp::Branch(2),
            IrOp::Label(1),
            IrOp::LoadImm(3, 0xaa),
            IrOp::Copy(4, 3),
            IrOp::Label(2),
            IrOp::Ret(Some(4)),
        ];
        let propagated = dead_code_eliminate(&propagate_copies(&ops));
        assert!(
            propagated.iter().any(|op| matches!(op, IrOp::Copy(4, 2)))
                && propagated.iter().any(|op| matches!(op, IrOp::Copy(4, 3))),
            "branch-local copies into the result must survive, got: {propagated:?}"
        );
        assert!(
            propagated
                .iter()
                .any(|op| matches!(op, IrOp::LoadImm(_, 0x55)))
                && propagated
                    .iter()
                    .any(|op| matches!(op, IrOp::LoadImm(_, 0xaa))),
            "branch-local constants must remain live, got: {propagated:?}"
        );
    }

    #[test]
    fn hardware_loop_detection_simple() {
        // Simulate the IR pattern from `for (int i = 0; i < 10; i++) { }`
        // by building exactly what lower_for would produce.
        let ops = vec![
            // init: i = 0
            IrOp::LoadImm(0, 0),
            IrOp::Store(0, 0, 0), // slot 0
            // Label(top=0)
            IrOp::Label(0),
            // condition: i < 10 via lower_comparison
            IrOp::Load(1, 0, 0),  // load i
            IrOp::LoadImm(2, 10), // limit
            IrOp::LoadImm(3, 0),  // false result
            IrOp::LoadImm(4, 1),  // true result
            IrOp::Cmp(1, 2),
            IrOp::BranchCond(Cond::Lt, 2), // lbl_true = 2
            IrOp::Copy(5, 3),              // cmp = false
            IrOp::Branch(3),               // lbl_end_cmp = 3
            IrOp::Label(2),                // lbl_true
            IrOp::Copy(5, 4),              // cmp = true
            IrOp::Label(3),                // lbl_end_cmp
            // exit test
            IrOp::LoadImm(6, 0),
            IrOp::Cmp(5, 6),
            IrOp::BranchCond(Cond::Eq, 1), // lbl_end_for = 1
            // body: a single Add to a sink slot. Hardware-loop
            // conversion now requires the body to contain at least
            // one real (non-Label, non-Nop) op so the SHARC+ DO
            // instruction has a non-trivial end-of-loop comparator.
            IrOp::LoadImm(10, 0),
            IrOp::Add(11, 10, 10),
            IrOp::Store(11, 0, 1), // sink slot != counter
            // step: i++
            IrOp::Load(7, 0, 0),  // load i
            IrOp::LoadImm(8, 1),  // 1
            IrOp::Add(9, 7, 8),   // i + 1
            IrOp::Store(9, 0, 0), // store back
            // back-edge
            IrOp::Branch(0), // -> top
            // end
            IrOp::Label(1), // lbl_end_for
            IrOp::Ret(None),
        ];

        let result = detect_hardware_loops(&ops);

        // Should contain a HardwareLoop instruction.
        let has_hw_loop = result
            .iter()
            .any(|op| matches!(op, IrOp::HardwareLoop { count: 10, .. }));
        assert!(has_hw_loop, "expected HardwareLoop(10), got: {result:?}");

        // Should NOT contain the back-edge Branch or the loop header.
        let has_back_edge = result.iter().any(|op| matches!(op, IrOp::Branch(0)));
        assert!(!has_back_edge, "back-edge should be removed: {result:?}");
    }

    #[test]
    fn elide_noop_hardware_loop_removes_idempotent_frame_body() {
        let ops = vec![
            IrOp::LoadImm(1, 0),
            IrOp::Store(1, 0, 2),
            IrOp::HardwareLoop {
                count: 2048,
                end_label: 9,
            },
            IrOp::Load(2, 0, 2),
            IrOp::Copy(3, 2),
            IrOp::Store(3, 0, 2),
            IrOp::Label(9),
            IrOp::Load(4, 0, 2),
            IrOp::Ret(Some(4)),
        ];

        let result = elide_noop_hardware_loops(&ops);
        assert!(
            !result
                .iter()
                .any(|op| matches!(op, IrOp::HardwareLoop { .. })),
            "idempotent loop should be removed: {result:?}"
        );
        assert!(
            !result.iter().any(|op| matches!(op, IrOp::Load(2, 0, 2))),
            "loop body should be removed with the loop: {result:?}"
        );
        assert!(
            result.iter().any(|op| matches!(op, IrOp::Label(9))),
            "end label must remain for following code: {result:?}"
        );
    }

    #[test]
    fn elide_noop_hardware_loop_keeps_body_value_used_after_loop() {
        let ops = vec![
            IrOp::HardwareLoop {
                count: 8,
                end_label: 9,
            },
            IrOp::Load(2, 0, 2),
            IrOp::Label(9),
            IrOp::Ret(Some(2)),
        ];

        let result = elide_noop_hardware_loops(&ops);
        assert!(
            result
                .iter()
                .any(|op| matches!(op, IrOp::HardwareLoop { .. })),
            "loop must remain when body definitions are live afterward: {result:?}"
        );
    }

    #[test]
    fn remove_unreferenced_labels_keeps_control_flow_targets_only() {
        let ops = vec![
            IrOp::LoadImm(1, 0),
            IrOp::Label(1),
            IrOp::Branch(2),
            IrOp::Label(2),
            IrOp::Ret(Some(1)),
        ];

        let result = remove_unreferenced_labels(&ops);
        assert!(
            !result.iter().any(|op| matches!(op, IrOp::Label(1))),
            "untargeted label should be removed: {result:?}"
        );
        assert!(
            result.iter().any(|op| matches!(op, IrOp::Label(2))),
            "branch target label must remain: {result:?}"
        );
    }

    #[test]
    fn hardware_loop_rejects_call_body() {
        let ops = vec![
            IrOp::LoadImm(0, 0),
            IrOp::Store(0, 0, 0),
            IrOp::Label(0),
            IrOp::Load(1, 0, 0),
            IrOp::LoadImm(2, 8),
            IrOp::Cmp(1, 2),
            IrOp::BranchCond(Cond::Ge, 1),
            IrOp::Call(10, "callee".into(), vec![1]),
            IrOp::Store(10, 0, 1),
            IrOp::Load(7, 0, 0),
            IrOp::LoadImm(8, 1),
            IrOp::Add(9, 7, 8),
            IrOp::Store(9, 0, 0),
            IrOp::Branch(0),
            IrOp::Label(1),
            IrOp::Ret(None),
        ];
        let result = detect_hardware_loops(&ops);
        assert!(
            !result
                .iter()
                .any(|op| matches!(op, IrOp::HardwareLoop { .. })),
            "call-containing loop must stay software: {result:?}"
        );
        assert!(
            result.iter().any(|op| matches!(op, IrOp::Branch(0))),
            "software loop back-edge should remain: {result:?}"
        );
    }

    #[test]
    fn hardware_loop_rejects_nested_hardware_loop_body() {
        let ops = vec![
            IrOp::LoadImm(0, 0),
            IrOp::Store(0, 0, 0),
            IrOp::Label(0),
            IrOp::Load(1, 0, 0),
            IrOp::LoadImm(2, 3),
            IrOp::Cmp(1, 2),
            IrOp::BranchCond(Cond::Ge, 1),
            IrOp::HardwareLoop {
                count: 1,
                end_label: 9,
            },
            IrOp::LoadImm(10, 42),
            IrOp::Label(9),
            IrOp::Load(7, 0, 0),
            IrOp::LoadImm(8, 1),
            IrOp::Add(9, 7, 8),
            IrOp::Store(9, 0, 0),
            IrOp::Branch(0),
            IrOp::Label(1),
            IrOp::Ret(None),
        ];
        let result = detect_hardware_loops(&ops);
        assert!(
            result
                .iter()
                .filter(|op| matches!(op, IrOp::HardwareLoop { .. }))
                .count()
                == 1,
            "outer loop must not be converted around inner hardware loop: {result:?}"
        );
        assert!(
            result.iter().any(|op| matches!(op, IrOp::Branch(0))),
            "outer software loop back-edge should remain: {result:?}"
        );
    }

    #[test]
    fn hardware_loop_detection_pointer_induction_from_frame_bounds() {
        let ops = vec![
            IrOp::Label(99),
            IrOp::FrameAddr(10, 20),
            IrOp::Store(10, 0, 1),
            IrOp::FrameAddr(11, 20),
            IrOp::LoadImm(12, 128),
            IrOp::Add(13, 11, 12),
            IrOp::Store(13, 0, 2),
            IrOp::Label(0),
            IrOp::Load(14, 0, 1),
            IrOp::Load(15, 0, 2),
            IrOp::Cmp(14, 15),
            IrOp::BranchCond(Cond::Eq, 1),
            IrOp::Load(16, 0, 3),
            IrOp::Load(17, 0, 1),
            IrOp::LoadImm(18, 4),
            IrOp::Add(19, 17, 18),
            IrOp::Store(19, 0, 1),
            IrOp::Load(20, 17, 0),
            IrOp::Add(21, 16, 20),
            IrOp::Store(21, 0, 3),
            IrOp::Branch(0),
            IrOp::Label(1),
            IrOp::Ret(None),
        ];

        let result = detect_hardware_loops(&ops);
        assert!(
            result
                .iter()
                .any(|op| matches!(op, IrOp::HardwareLoop { count: 32, .. })),
            "expected pointer loop to become HardwareLoop(32), got: {result:?}"
        );
        assert!(
            !result.iter().any(|op| matches!(op, IrOp::Branch(0))),
            "pointer loop back-edge should be removed: {result:?}"
        );
        assert!(
            result.iter().any(|op| matches!(op, IrOp::Store(19, 0, 1))),
            "source pointer induction update must remain for post-loop p state: {result:?}"
        );
    }

    #[test]
    fn hardware_loop_detection_pointer_induction_with_recomputed_frame_end() {
        let ops = vec![
            IrOp::FrameAddr(10, 20),
            IrOp::Store(10, 0, 1),
            IrOp::Label(0),
            IrOp::Load(14, 0, 1),
            IrOp::FrameAddr(15, 20),
            IrOp::LoadImm(16, 128),
            IrOp::Add(17, 15, 16),
            IrOp::Cmp(14, 17),
            IrOp::BranchCond(Cond::Eq, 1),
            IrOp::Load(18, 0, 3),
            IrOp::Load(19, 0, 1),
            IrOp::LoadImm(20, 4),
            IrOp::Add(21, 19, 20),
            IrOp::Store(21, 0, 1),
            IrOp::Load(22, 19, 0),
            IrOp::Add(23, 18, 22),
            IrOp::Store(23, 0, 3),
            IrOp::Branch(0),
            IrOp::Label(1),
            IrOp::Ret(None),
        ];

        let result = detect_hardware_loops(&ops);
        assert!(
            result
                .iter()
                .any(|op| matches!(op, IrOp::HardwareLoop { count: 32, .. })),
            "expected recomputed-end pointer loop to become HardwareLoop(32), got: {result:?}"
        );
        assert!(
            !result.iter().any(|op| matches!(op, IrOp::Branch(0))),
            "pointer loop back-edge should be removed: {result:?}"
        );
    }

    #[test]
    fn hardware_loop_rejects_pointer_induction_with_unmatched_bounds() {
        let ops = vec![
            IrOp::FrameAddr(10, 20),
            IrOp::Store(10, 0, 1),
            IrOp::FrameAddr(11, 20),
            IrOp::LoadImm(12, 130),
            IrOp::Add(13, 11, 12),
            IrOp::Store(13, 0, 2),
            IrOp::Label(0),
            IrOp::Load(14, 0, 1),
            IrOp::Load(15, 0, 2),
            IrOp::Cmp(14, 15),
            IrOp::BranchCond(Cond::Eq, 1),
            IrOp::Load(17, 0, 1),
            IrOp::LoadImm(18, 4),
            IrOp::Add(19, 17, 18),
            IrOp::Store(19, 0, 1),
            IrOp::Branch(0),
            IrOp::Label(1),
            IrOp::Ret(None),
        ];

        let result = detect_hardware_loops(&ops);
        assert!(
            !result
                .iter()
                .any(|op| matches!(op, IrOp::HardwareLoop { .. })),
            "non-integral pointer span must stay software: {result:?}"
        );
        assert!(
            result.iter().any(|op| matches!(op, IrOp::Branch(0))),
            "software loop back-edge should remain: {result:?}"
        );
    }
}
