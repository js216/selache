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

            IrOp::Sub(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a.wrapping_sub(b);
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (None, Some(0)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    _ => result.push(op.clone()),
                }
            }

            IrOp::Div(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    if b != 0 {
                        // Match `IrOp::Div`'s runtime semantics: truncated
                        // signed 32-bit division. Folding lets the compiler
                        // emit a literal load instead of the inline float
                        // reciprocal sequence (which loses precision for
                        // values above 2^24 — `BOARD_BAUD_DIV` lands in
                        // that range and the float result rounds to a
                        // baud-divider value the UART silently
                        // mistransmits as nulls).
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

            IrOp::Mul(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                match (lv, rv) {
                    (Some(a), Some(b)) => {
                        let folded = a.wrapping_mul(b);
                        result.push(IrOp::LoadImm(*dst, folded));
                        known.insert(*dst, folded);
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(1), None) => {
                        result.push(IrOp::Copy(*dst, *rhs));
                        mark_consumed(&use_counts, &mut consumed, *lhs);
                    }
                    (None, Some(1)) => {
                        result.push(IrOp::Copy(*dst, *lhs));
                        mark_consumed(&use_counts, &mut consumed, *rhs);
                    }
                    (Some(0), None) | (None, Some(0)) => {
                        result.push(IrOp::LoadImm(*dst, 0));
                        known.insert(*dst, 0);
                        // Both operand LoadImms may become dead; DCE handles that.
                    }
                    _ => result.push(op.clone()),
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
                if let (Some(a), Some(b)) = (lv, rv) {
                    let folded = a & b;
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::BitOr(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    let folded = a | b;
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::BitXor(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    let folded = a ^ b;
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
                    result.push(op.clone());
                }
            }

            IrOp::Shl(dst, lhs, rhs) => {
                let lv = known.get(lhs).copied();
                let rv = known.get(rhs).copied();
                if let (Some(a), Some(b)) = (lv, rv) {
                    let folded = a.wrapping_shl(b as u32);
                    result.push(IrOp::LoadImm(*dst, folded));
                    known.insert(*dst, folded);
                    mark_consumed(&use_counts, &mut consumed, *lhs);
                    mark_consumed(&use_counts, &mut consumed, *rhs);
                } else {
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
                        (a32 >> ((-b) as u32)) as i64
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
                result.push(op.clone());
            }

            _ => result.push(op.clone()),
        }
    }

    // Remove LoadImm ops that were consumed (inlined into the folded op)
    // and are no longer needed.
    result
        .into_iter()
        .filter(|op| {
            if let IrOp::LoadImm(dst, _) = op {
                !consumed.contains(dst)
            } else {
                true
            }
        })
        .collect()
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
    // Collect the set of all vregs that appear as source operands.
    let mut used: HashSet<VReg> = HashSet::new();
    for op in ops {
        for vreg in source_vregs(op) {
            used.insert(vreg);
        }
    }

    ops.iter()
        .filter(|op| {
            if let Some(dst) = dest_vreg(op) {
                // Keep if the destination is used somewhere, or if the op
                // has side effects (calls).
                used.contains(&dst) || has_side_effects(op)
            } else {
                // No destination: labels, branches, stores, compares, etc.
                true
            }
        })
        .cloned()
        .collect()
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
        let back_edge_idx = ops[label_top_idx + 1..]
            .iter()
            .position(|o| matches!(o, IrOp::Branch(l) if *l == top_label))
            .map(|p| p + label_top_idx + 1)?;

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
        if let Some(info) = analyze_loop_header(ops, label_top_idx, back_edge_idx, end_label, known) {
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
            let body_labels: std::collections::HashSet<Label> = body.iter().filter_map(|op| {
                if let IrOp::Label(l) = op { Some(*l) } else { None }
            }).collect();
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

            // Reject loops whose body references the loop counter slot.
            // Converting to a hardware DO loop drops the i++ step
            // instructions; LCNTR replaces them. If the body still reads
            // or takes the address of `i` from its stack slot, the value
            // there stays at 0 forever, which silently corrupts results
            // (e.g. `a[i] = ...` writes a[0] every iteration).
            let body_uses_counter = body.iter().any(|op| match op {
                IrOp::Load(_, _, slot) | IrOp::Store(_, _, slot)
                | IrOp::Load64(_, _, slot) | IrOp::Store64(_, _, slot)
                | IrOp::FrameAddr(_, slot) => *slot == info.counter_slot,
                _ => false,
            });
            if body_uses_counter {
                continue;
            }

            // Reject loops with an empty body. SHARC+ hardware DO
            // requires the body to span at least one instruction so
            // the end-of-loop comparator triggers; with zero body
            // instructions the DO instruction's end-PC equals its own
            // PC, which the hardware interprets as an infinite loop
            // (or worse, a fault). Empty loops fall back to the
            // software loop form, which the optimizer can dead-code-
            // eliminate later if the trip count is also unused.
            let body_has_real_op = body.iter().any(|op| {
                !matches!(op, IrOp::Label(_) | IrOp::Nop)
            });
            if !body_has_real_op {
                continue;
            }

            // Build the replacement: remove the init, header, step, and
            // back-edge, replacing with HardwareLoop + body + Label(end).
            let mut new_ops = Vec::with_capacity(ops.len());

            // Everything before the init (the Store that initializes the counter).
            new_ops.extend_from_slice(&ops[..info.init_store_idx]);

            // Emit the HardwareLoop instruction.
            new_ops.push(IrOp::HardwareLoop {
                count: info.count,
                end_label,
            });

            // Emit the body (between end of header and start of step).
            new_ops.extend_from_slice(&ops[info.body_start..info.step_start]);

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

    // Find the step: look backwards from the back-edge for the increment
    // pattern. The step should store an incremented counter back to the
    // same stack slot. We look for: Store(_, 0, counter_slot) preceded by
    // an Add(_, _, inc_vreg) where inc_vreg is known to be 1.
    // But the step might be complex; we look for a simpler pattern:
    // the last Store to counter_slot before the back-edge.
    let mut step_start = back_edge_idx;
    for idx in (body_start..back_edge_idx).rev() {
        match &ops[idx] {
            IrOp::Store(_, _, slot) if *slot == counter_slot => {
                // Trace back to find the beginning of the increment sequence.
                // Typically: Load(v, 0, slot), LoadImm(v1, 1), Add(v2, v, v1),
                // Store(v2, 0, slot)
                step_start = find_step_start(ops, idx, body_start);
                break;
            }
            _ => continue,
        }
    }

    // Verify the step is +1 by checking that there is an Add with one
    // operand being a known 1.
    let mut step_is_plus_one = false;
    for op in &ops[step_start..back_edge_idx] {
        if let IrOp::Add(_, lhs, rhs) = op {
            let lv = known.get(lhs).copied();
            let rv = known.get(rhs).copied();
            if lv == Some(1) || rv == Some(1) {
                step_is_plus_one = true;
                break;
            }
        }
    }

    if !step_is_plus_one {
        return None;
    }

    Some(LoopInfo {
        init_store_idx,
        body_start,
        step_start,
        count: limit_val,
        counter_slot,
    })
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

/// Return the destination vreg of an op, if any.
fn dest_vreg(op: &IrOp) -> Option<VReg> {
    match op {
        IrOp::LoadImm(d, _)
        | IrOp::Copy(d, _)
        | IrOp::Add(d, _, _)
        | IrOp::Sub(d, _, _)
        | IrOp::Mul(d, _, _)
        | IrOp::Div(d, _, _)
        | IrOp::Mod(d, _, _)
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
        | IrOp::LoadImm64(d, _)
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
        | IrOp::SExtToLongLong(d, _)
        | IrOp::LongLongToInt(d, _)
        | IrOp::StackSave(d)
        | IrOp::StackAlloc(d, _)
        | IrOp::FrameAddr(d, _)
        | IrOp::LoadStackArg(d, _) => Some(*d),

        IrOp::Cmp(..)
        | IrOp::UCmp(..)
        | IrOp::FCmp(..)
        | IrOp::Cmp64(..)
        | IrOp::UCmp64(..)
        | IrOp::Ret(_)
        | IrOp::Branch(_)
        | IrOp::BranchCond(..)
        | IrOp::Label(_)
        | IrOp::Store(..)
        | IrOp::Store64(..)
        | IrOp::StoreGlobal(..)
        | IrOp::WriteGlobal64(..)
        | IrOp::StackRestore(_)
        | IrOp::HardwareLoop { .. }
        | IrOp::Nop => None,
    }
}

/// Return all vregs used as source operands.
fn source_vregs(op: &IrOp) -> Vec<VReg> {
    match op {
        IrOp::LoadImm(..) | IrOp::Label(_) | IrOp::Branch(_) | IrOp::HardwareLoop { .. }
        | IrOp::StackSave(_)
        | IrOp::FrameAddr(..)
        | IrOp::LoadStackArg(..)
        | IrOp::Nop => {
            Vec::new()
        }
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
        | IrOp::Mod(_, a, b)
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
        IrOp::Load(_, base, _) => vec![*base],
        IrOp::Store(val, base, _) => vec![*val, *base],
        IrOp::LoadGlobal(..) | IrOp::ReadGlobal(..) | IrOp::ReadGlobal64(..)
        | IrOp::LoadString(..) | IrOp::LoadWideString(..) => Vec::new(),
        IrOp::StoreGlobal(val, _) | IrOp::WriteGlobal64(val, _) => vec![*val],
        IrOp::LoadImm64(..) => Vec::new(),
        IrOp::Copy64(_, s)
        | IrOp::Neg64(_, s)
        | IrOp::BitNot64(_, s)
        | IrOp::IntToLongLong(_, s)
        | IrOp::SExtToLongLong(_, s)
        | IrOp::LongLongToInt(_, s) => vec![*s],
        IrOp::Add64(_, a, b)
        | IrOp::Sub64(_, a, b)
        | IrOp::Mul64(_, a, b)
        | IrOp::Div64(_, a, b)
        | IrOp::UDiv64(_, a, b)
        | IrOp::Mod64(_, a, b)
        | IrOp::UMod64(_, a, b)
        | IrOp::BitAnd64(_, a, b)
        | IrOp::BitOr64(_, a, b)
        | IrOp::BitXor64(_, a, b)
        | IrOp::Shl64(_, a, b)
        | IrOp::Shr64(_, a, b)
        | IrOp::UShr64(_, a, b) => vec![*a, *b],
        IrOp::Cmp64(a, b) | IrOp::UCmp64(a, b) => vec![*a, *b],
        IrOp::Load64(_, base, _) => vec![*base],
        IrOp::Store64(val, base, _) => vec![*val, *base],
    }
}

/// Check if an op has side effects beyond writing to its destination vreg.
fn has_side_effects(op: &IrOp) -> bool {
    matches!(op, IrOp::Call(..) | IrOp::StackSave(_) | IrOp::StackRestore(_) | IrOp::StackAlloc(..))
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
        assert_eq!(count_loads, 1, "expected 1 LoadImm, got {count_loads}: {folded:?}");
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
        let ops = vec![
            IrOp::LoadImm(0, 0),
            IrOp::Add(2, 1, 0),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        let has_copy = folded.iter().any(|op| matches!(op, IrOp::Copy(2, 1)));
        assert!(has_copy, "expected Copy(2, 1), got: {folded:?}");
    }

    #[test]
    fn fold_mul_one_to_copy() {
        let ops = vec![
            IrOp::LoadImm(0, 1),
            IrOp::Mul(2, 1, 0),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        let has_copy = folded.iter().any(|op| matches!(op, IrOp::Copy(2, 1)));
        assert!(has_copy, "expected Copy(2, 1), got: {folded:?}");
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
        let ops = vec![
            IrOp::LoadImm(1, 0),
            IrOp::Sub(2, 0, 1),
            IrOp::Ret(Some(2)),
        ];
        let folded = constant_fold(&ops);
        let has_copy = folded.iter().any(|op| matches!(op, IrOp::Copy(2, 0)));
        assert!(has_copy, "expected Copy(2, 0), got: {folded:?}");
    }

    #[test]
    fn fold_neg() {
        let ops = vec![
            IrOp::LoadImm(0, 5),
            IrOp::Neg(1, 0),
            IrOp::Ret(Some(1)),
        ];
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
            IrOp::Load(1, 0, 0),     // load i
            IrOp::LoadImm(2, 10),    // limit
            IrOp::LoadImm(3, 0),     // false result
            IrOp::LoadImm(4, 1),     // true result
            IrOp::Cmp(1, 2),
            IrOp::BranchCond(Cond::Lt, 2),  // lbl_true = 2
            IrOp::Copy(5, 3),        // cmp = false
            IrOp::Branch(3),         // lbl_end_cmp = 3
            IrOp::Label(2),          // lbl_true
            IrOp::Copy(5, 4),        // cmp = true
            IrOp::Label(3),          // lbl_end_cmp

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
            IrOp::Store(11, 0, 1),  // sink slot != counter

            // step: i++
            IrOp::Load(7, 0, 0),    // load i
            IrOp::LoadImm(8, 1),    // 1
            IrOp::Add(9, 7, 8),     // i + 1
            IrOp::Store(9, 0, 0),   // store back

            // back-edge
            IrOp::Branch(0),        // -> top

            // end
            IrOp::Label(1),         // lbl_end_for
            IrOp::Ret(None),
        ];

        let result = detect_hardware_loops(&ops);

        // Should contain a HardwareLoop instruction.
        let has_hw_loop = result
            .iter()
            .any(|op| matches!(op, IrOp::HardwareLoop { count: 10, .. }));
        assert!(has_hw_loop, "expected HardwareLoop(10), got: {result:?}");

        // Should NOT contain the back-edge Branch or the loop header.
        let has_back_edge = result
            .iter()
            .any(|op| matches!(op, IrOp::Branch(0)));
        assert!(!has_back_edge, "back-edge should be removed: {result:?}");
    }
}
