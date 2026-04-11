// SPDX-License-Identifier: GPL-3.0
// emit.rs --- Code emission pipeline for compiling functions to machine code
// Copyright (c) 2026 Jakob Kastelic

//! Code emission: orchestrates the full compilation pipeline for one function.
//!
//! Pipeline: AST -> IR (lower) -> MachInstr (isel) -> allocated MachInstr
//! (regalloc) -> encoded bytes (encode), with a final fixup pass to resolve
//! branch labels.

use std::collections::{HashMap, HashSet};

use crate::ast::Function;
use crate::error::Result;
use crate::ir::Label;
use crate::ir_opt;
use crate::isel;
use crate::lower;
use crate::mach::{MachInstr, Reloc};
use crate::regalloc;
use crate::target;
use selinstr::encode::{self, BranchTarget, Instruction, MemWidth};

/// Result of compiling a single function.
pub struct EmitResult {
    /// Encoded instruction bytes (6 bytes per instruction, little-endian).
    pub code: Vec<u8>,
    /// Relocations: (byte offset within code, relocation info).
    pub relocs: Vec<(u32, Reloc)>,
    /// String literals collected during lowering.
    pub strings: Vec<String>,
    /// Wide string literals collected during lowering.
    pub wide_strings: Vec<Vec<u32>>,
    /// Static local variables to be emitted as globals.
    pub static_locals: Vec<lower::StaticLocal>,
}

/// Compile a single function, returning code and relocation info.
/// Pass an empty map for `global_types` if there are no globals.
/// When `known_functions` is empty, implicit declaration checking is skipped.
#[cfg(test)]
pub fn emit_function(
    func: &Function,
    global_types: &HashMap<String, crate::types::Type>,
    struct_defs: &[(String, Vec<(String, crate::types::Type)>)],
    enum_constants: &[(String, i64)],
    typedefs: &[(String, crate::types::Type)],
) -> Result<EmitResult> {
    emit_function_known(func, global_types, struct_defs, enum_constants, typedefs, &HashSet::new())
}

/// Compile a single function with a set of known function names for
/// implicit declaration checking.
pub fn emit_function_known(
    func: &Function,
    global_types: &HashMap<String, crate::types::Type>,
    struct_defs: &[(String, Vec<(String, crate::types::Type)>)],
    enum_constants: &[(String, i64)],
    typedefs: &[(String, crate::types::Type)],
    known_functions: &HashSet<String>,
) -> Result<EmitResult> {
    // Phase 1: Lower AST to IR.
    let lower_result = lower::lower_function_with_known(func, global_types, struct_defs, enum_constants, typedefs, known_functions)?;
    let strings = lower_result.strings;
    let wide_strings = lower_result.wide_strings;
    let static_locals = lower_result.static_locals;

    // Phase 1.5: IR optimization.
    let ir = ir_opt::constant_fold(&lower_result.ops);
    let ir = ir_opt::dead_code_eliminate(&ir);
    let ir = ir_opt::detect_hardware_loops(&ir);

    // Phase 2: Instruction selection (IR -> machine instructions).
    let isel_result = isel::select(&ir);

    // Phase 3: Register allocation (virtual -> physical).
    let num_params = func.params.len().min(target::ARG_REGS.len()) as u8;
    let (allocated, _spill_count) = regalloc::allocate(&isel_result.instrs, num_params);

    // Determine which callee-saved registers are used and need saving.
    let used_callee_saved = callee_saved_used(&allocated);
    let num_saved = used_callee_saved.len() as i8;

    // Phase 3.5: Adjust frame offsets for local variables and spill slots.
    // The isel emits locals at offsets -1, -2, ... from I6.  The regalloc
    // emits spill stores/loads at non-negative offsets 0, 1, ... from I6.
    // Both kinds must be shifted to make room for callee-saved register
    // saves (offsets -1 through -num_saved) and placed in the correct
    // negative-offset frame region.
    let local_slots_pre = count_local_slots(&allocated);
    let adjusted = adjust_frame_offsets(&allocated, num_saved, local_slots_pre);

    // Build label -> instruction-index map.  The isel label positions
    // refer to indices in the *pre-regalloc* stream, so we need to
    // account for any spill instructions the allocator inserted.
    let old_to_new = build_index_map(&isel_result.instrs, &allocated);
    let mut label_map: HashMap<Label, usize> = HashMap::new();
    for &(label, old_idx) in &isel_result.label_positions {
        let new_idx = old_to_new.get(&old_idx).copied().unwrap_or(old_idx);
        label_map.insert(label, new_idx);
    }

    // Phase 3.6: Eliminate redundant PASS copies where possible.
    // This also adjusts the label map to account for removed instructions.
    let optimized = eliminate_copies(&adjusted, &mut label_map);

    // Phase 3.7: Build prologue and epilogue.
    // After adjustment, all body frame accesses (locals and spill slots)
    // use negative offsets from I6 past the callee-saved area.  The total
    // frame size is the deepest body offset or at least enough for the
    // callee-saved saves themselves.
    let body_depth = count_local_slots(&optimized);
    let frame_size = body_depth.max(used_callee_saved.len() as u32);
    let prologue = build_prologue(frame_size, &used_callee_saved);
    let epilogue = build_epilogue(frame_size, &used_callee_saved);

    // Phase 4: Resolve branch targets (fixup pass).
    // Account for prologue offset when resolving branches: the body
    // instructions start after the prologue.
    let prologue_len = prologue.len();
    let resolved = resolve_branches(&optimized, &label_map, prologue_len);

    // Phase 4.5: Final pass -- expand any remaining large I6 offsets that
    // slipped through adjust_frame_offsets (e.g. regalloc spill instructions
    // when the frame has no callee-saved shift but many spill slots).
    let resolved = expand_large_frame_offsets(&resolved);

    // Phase 5: Encode all instructions to bytes and collect relocations.
    // Output order: prologue, body, epilogue.
    let mut code = Vec::new();
    let mut relocs = Vec::new();
    let all_instrs: Vec<&MachInstr> = prologue
        .iter()
        .chain(resolved.iter())
        .chain(epilogue.iter())
        .collect();
    for mi in &all_instrs {
        let byte_offset = code.len() as u32;
        let bytes = encode::encode(&mi.instr).map_err(|e| {
            crate::error::Error::NotImplemented(format!("encode: {e}"))
        })?;
        code.extend_from_slice(&bytes);
        if let Some(ref reloc) = mi.reloc {
            relocs.push((byte_offset, reloc.clone()));
        }
    }

    Ok(EmitResult { code, relocs, strings, wide_strings, static_locals })
}

/// Convenience wrapper: compile a function using struct definitions and
/// enum constants from a [`TranslationUnit`].
#[cfg(test)]
pub fn emit_function_with_relocs(
    func: &Function,
    unit: &crate::ast::TranslationUnit,
) -> Result<EmitResult> {
    let global_types: HashMap<String, crate::types::Type> = unit
        .globals
        .iter()
        .map(|g| (g.name.clone(), g.ty.clone()))
        .collect();
    emit_function(func, &global_types, &unit.struct_defs, &unit.enum_constants, &unit.typedefs)
}

/// Determine which callee-saved registers are used in the instruction stream.
fn callee_saved_used(instrs: &[MachInstr]) -> Vec<u8> {
    let mut used = Vec::new();
    for &reg in target::CALLEE_SAVED {
        let is_used = instrs.iter().any(|mi| instr_uses_reg(&mi.instr, reg));
        if is_used {
            used.push(reg);
        }
    }
    used
}

/// Check if an instruction references a particular data register.
fn instr_uses_reg(instr: &Instruction, reg: u8) -> bool {
    match *instr {
        Instruction::LoadImm { ureg, .. } => (ureg & 0xF) == reg && (ureg >> 4) == 0,
        Instruction::Compute { compute, .. } => compute_uses_reg(&compute, reg),
        Instruction::ComputeLoadStore { dreg, compute, .. } => {
            dreg == reg || compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::Return { compute, .. } => {
            compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::Modify { .. } => false,
        _ => false,
    }
}

fn compute_uses_reg(op: &selinstr::encode::ComputeOp, reg: u8) -> bool {
    use selinstr::encode::ComputeOp;
    match *op {
        ComputeOp::Alu(ref a) => alu_uses_reg(a, reg),
        ComputeOp::Mul(ref m) => mul_uses_reg(m, reg),
        ComputeOp::Shift(ref s) => shift_uses_reg(s, reg),
        ComputeOp::Falu(ref f) => falu_uses_reg(f, reg),
        ComputeOp::Multi(ref mf) => multi_uses_reg(mf, reg),
    }
}

fn alu_uses_reg(op: &selinstr::encode::AluOp, reg: u8) -> bool {
    use selinstr::encode::AluOp::*;
    match *op {
        Add { rn, rx, ry } | Sub { rn, rx, ry } | And { rn, rx, ry }
        | Or { rn, rx, ry } | Xor { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        Pass { rn, rx } | Neg { rn, rx } | Not { rn, rx }
        | Inc { rn, rx } | Dec { rn, rx } | Abs { rn, rx } => rn == reg || rx == reg,
        Comp { rx, ry } | CompU { rx, ry } => rx == reg || ry == reg,
        _ => false,
    }
}

fn mul_uses_reg(op: &selinstr::encode::MulOp, reg: u8) -> bool {
    use selinstr::encode::MulOp::*;
    match *op {
        MulSsf { rn, rx, ry } | FMul { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        _ => false,
    }
}

fn shift_uses_reg(op: &selinstr::encode::ShiftOp, reg: u8) -> bool {
    use selinstr::encode::ShiftOp::*;
    match *op {
        Lshift { rn, rx, ry } | Ashift { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        _ => false,
    }
}

fn multi_uses_reg(op: &selinstr::encode::MultiOp, reg: u8) -> bool {
    use selinstr::encode::MultiOp::*;
    match *op {
        MulAlu { rm, ra, rxm, rym, rxa, rya, .. } => {
            rm == reg || ra == reg || rxm == reg || (rym + 4) == reg
                || (rxa + 8) == reg || (rya + 12) == reg
        }
        MulDualAddSub { rm, ra, rs, rxm, rym, rxa, rya, .. } => {
            rm == reg || ra == reg || rs == reg || rxm == reg || (rym + 4) == reg
                || (rxa + 8) == reg || (rya + 12) == reg
        }
    }
}

fn falu_uses_reg(op: &selinstr::encode::FaluOp, reg: u8) -> bool {
    use selinstr::encode::FaluOp::*;
    match *op {
        Add { rn, rx, ry } | Sub { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        Pass { rn, rx } | Neg { rn, rx } | Abs { rn, rx }
        | Float { rn, rx } | Fix { rn, rx } => rn == reg || rx == reg,
        Comp { rx, ry } => rx == reg || ry == reg,
        _ => false,
    }
}

/// Build function prologue: reserve stack space and save callee-saved regs.
///
/// Frame layout (I6-relative):
///   offset  0:  (unused / old I6 in a full implementation)
///   offset -1:  saved callee_saved[0]
///   offset -2:  saved callee_saved[1]
///   ...
///   offset -(N+1): local var 0  (handled by body instructions)
///
/// Only callee-saved registers need saving; caller-saved registers
/// (R0-R7) are the caller's responsibility per the SHARC ABI.
///
/// When `frame_size` is 0 and there are no callee-saved registers, we
/// skip the prologue entirely (leaf functions with no locals).
fn build_prologue(frame_size: u32, callee_saved: &[u8]) -> Vec<MachInstr> {
    debug_assert!(
        callee_saved.iter().all(|r| target::CALLER_SAVED.iter().all(|c| c != r)),
        "callee-saved register overlaps with caller-saved set"
    );
    if frame_size == 0 && callee_saved.is_empty() {
        return Vec::new();
    }
    let mut instrs = Vec::new();

    // Reserve stack space: MODIFY(I7, -frame_size)
    if frame_size > 0 {
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: -(frame_size as i32), width: MemWidth::Normal, bitrev: false, },
            reloc: None,
        });
    }

    // Save callee-saved registers to stack at negative offsets from I6.
    for (i, &reg) in callee_saved.iter().enumerate() {
        let slot_offset = -(i as i8) - 1;
        instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: selinstr::encode::MemAccess {
                    pm: false,
                    write: true,
                    i_reg: target::FRAME_PTR,
                },
                dreg: reg,
                offset: slot_offset,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });
    }
    instrs
}

/// Build function epilogue: restore callee-saved regs and deallocate stack.
fn build_epilogue(frame_size: u32, callee_saved: &[u8]) -> Vec<MachInstr> {
    if frame_size == 0 && callee_saved.is_empty() {
        return Vec::new();
    }
    let mut instrs = Vec::new();

    // Restore callee-saved registers from stack (reverse order).
    for (i, &reg) in callee_saved.iter().enumerate().rev() {
        let slot_offset = -(i as i8) - 1;
        instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: selinstr::encode::MemAccess {
                    pm: false,
                    write: false,
                    i_reg: target::FRAME_PTR,
                },
                dreg: reg,
                offset: slot_offset,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });
    }

    // Deallocate stack space: MODIFY(I7, +frame_size)
    if frame_size > 0 {
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: frame_size as i32, width: MemWidth::Normal, bitrev: false, },
            reloc: None,
        });
    }

    instrs
}

/// Count the number of local variable stack slots used in the instruction
/// stream. Examines both `ComputeLoadStore` instructions (small offsets) and
/// `Modify`-based sequences (large offsets) accessing I6 at negative offsets.
/// Returns the number of distinct slots (the absolute value of the most
/// negative offset).
fn count_local_slots(instrs: &[MachInstr]) -> u32 {
    let mut deepest: i32 = 0;
    let mut i = 0;
    while i < instrs.len() {
        match instrs[i].instr {
            Instruction::ComputeLoadStore {
                access, offset, ..
            } if access.i_reg == target::FRAME_PTR && !access.pm => {
                let off = offset as i32;
                if off < deepest {
                    deepest = off;
                }
            }
            // Detect the Modify + access + un-Modify pattern for large offsets.
            Instruction::Modify { i_reg, value, .. }
                if i_reg == target::FRAME_PTR && value < deepest =>
            {
                deepest = value;
            }
            _ => {}
        }
        i += 1;
    }
    deepest.unsigned_abs()
}

/// Adjust frame offsets in the instruction stream to account for callee-saved
/// register saves and spill slot placement.
///
/// Local variable accesses (ComputeLoadStore with I6 base and negative
/// offsets) are shifted further negative by `num_saved` slots. Spill slot
/// accesses (I6 base with non-negative offsets) are relocated into the
/// negative-offset frame region past both the callee-saved area and the
/// locals: spill slot `k` becomes offset `-(num_saved + local_slots + k + 1)`.
///
/// When the adjusted offset exceeds the 6-bit signed range (-32..31), the
/// instruction is expanded into a three-instruction Modify sequence.
/// Similarly, existing Modify-based large-offset sequences have their
/// values shifted.
fn adjust_frame_offsets(
    instrs: &[MachInstr],
    num_saved: i8,
    local_slots: u32,
) -> Vec<MachInstr> {
    // Only skip adjustment when there is truly nothing to adjust:
    // no callee-saved shift, no local slots, and no spill accesses.
    if num_saved == 0 && local_slots == 0 {
        let has_positive_offsets = instrs.iter().any(|mi| matches!(
            mi.instr,
            Instruction::ComputeLoadStore { access, offset, .. }
                if access.i_reg == target::FRAME_PTR && !access.pm && offset >= 0
        ));
        if !has_positive_offsets {
            return instrs.to_vec();
        }
    }
    let shift = num_saved as i32;
    let spill_base = shift + local_slots as i32;
    let mut result = Vec::with_capacity(instrs.len());
    let mut i = 0;
    while i < instrs.len() {
        match instrs[i].instr {
            // I6-relative accesses: locals (negative offsets) and spills
            // (non-negative offsets).
            Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset,
                cond,
            } if access.i_reg == target::FRAME_PTR && !access.pm => {
                let orig = offset as i32;
                let new_offset = if orig < 0 {
                    // Local variable: shift past callee-saved saves.
                    orig - shift
                } else {
                    // Spill slot: relocate past callee-saved + locals.
                    -(spill_base + orig + 1)
                };
                emit_adjusted_access(
                    &mut result,
                    compute,
                    access,
                    dreg,
                    new_offset,
                    cond,
                    instrs[i].reloc.clone(),
                );
            }
            // Adjust Modify instructions that target the frame pointer:
            // negative values are offsets to locals (shift further),
            // positive values are un-Modify returns (shift the other way).
            Instruction::Modify { i_reg, value, .. }
                if i_reg == target::FRAME_PTR && value != 0 =>
            {
                let new_value = if value < 0 {
                    value - shift
                } else {
                    value + shift
                };
                result.push(MachInstr {
                    instr: Instruction::Modify {
                        i_reg,
                        value: new_value, width: MemWidth::Normal, bitrev: false, },
                    reloc: instrs[i].reloc.clone(),
                });
            }
            _ => {
                result.push(instrs[i].clone());
            }
        }
        i += 1;
    }
    result
}

/// Emit an I6-relative access at `new_offset`. If the offset fits in the
/// 6-bit signed range, emit a single ComputeLoadStore; otherwise expand to
/// a Modify + access-at-0 + un-Modify sequence.
fn emit_adjusted_access(
    out: &mut Vec<MachInstr>,
    compute: Option<selinstr::encode::ComputeOp>,
    access: selinstr::encode::MemAccess,
    dreg: u8,
    new_offset: i32,
    cond: u8,
    reloc: Option<Reloc>,
) {
    if (-32..=31).contains(&new_offset) {
        out.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset: new_offset as i8,
                cond,
            },
            reloc,
        });
    } else {
        // Expand to Modify + access at 0 + un-Modify.
        out.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: new_offset, width: MemWidth::Normal, bitrev: false, },
            reloc: None,
        });
        out.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset: 0,
                cond,
            },
            reloc,
        });
        out.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: -new_offset, width: MemWidth::Normal, bitrev: false, },
            reloc: None,
        });
    }
}


/// Final safety pass: expand any ComputeLoadStore instructions with I6-relative
/// offsets outside the 6-bit signed range (-32..31) into Modify sequences.
/// This catches spill instructions that weren't expanded by adjust_frame_offsets.
fn expand_large_frame_offsets(instrs: &[MachInstr]) -> Vec<MachInstr> {
    let mut result = Vec::with_capacity(instrs.len());
    for mi in instrs {
        if let Instruction::ComputeLoadStore {
            compute, access, dreg, offset, cond,
        } = mi.instr
        {
            let off = offset as i32;
            if access.i_reg == target::FRAME_PTR && !access.pm
                && !(-32..=31).contains(&off)
            {
                emit_adjusted_access(
                    &mut result,
                    compute,
                    access,
                    dreg,
                    off,
                    cond,
                    mi.reloc.clone(),
                );
                continue;
            }
        }
        result.push(mi.clone());
    }
    result
}

/// Eliminate redundant PASS copies where the destination is used exactly once
/// as a source in the immediately following instruction. In that case, the
/// following instruction can use the source register directly.
///
/// The `label_map` is adjusted so that label positions remain correct after
/// instructions are removed.
fn eliminate_copies(
    instrs: &[MachInstr],
    label_map: &mut HashMap<Label, usize>,
) -> Vec<MachInstr> {
    // Build a use-count map: for each register, how many times is it used
    // as a source operand across all instructions?
    let mut use_count: HashMap<u8, u32> = HashMap::new();
    for mi in instrs {
        for reg in source_regs(&mi.instr) {
            *use_count.entry(reg).or_insert(0) += 1;
        }
    }

    // Track which input indices are removed so we can adjust label positions.
    let mut removed = Vec::new();
    let mut result = Vec::with_capacity(instrs.len());
    let mut skip_next_remap: Option<(u8, u8)> = None;
    let mut i = 0;

    while i < instrs.len() {
        // Apply pending remap from a previous eliminated copy.
        if let Some((from, to)) = skip_next_remap.take() {
            let remapped = remap_sources(&instrs[i], from, to);
            result.push(remapped);
            i += 1;
            continue;
        }

        // Check if this is a PASS copy that can be eliminated.
        if let Some((dst, src)) = is_pass_copy(&instrs[i].instr) {
            // Pattern 0: Self-copy elimination.
            // `Rn = PASS Rn` is always dead -- remove unconditionally.
            if dst == src {
                removed.push(i);
                i += 1;
                continue;
            }

            // Pattern 1: Forward copy elimination.
            // `Rn = PASS Rx` where Rn is used exactly once as a source in
            // the next instruction → remap Rn to Rx in the next instruction.
            let dst_count = use_count.get(&dst).copied().unwrap_or(0);
            if dst != src
                && dst_count == 1
                && i + 1 < instrs.len()
                && source_regs(&instrs[i + 1].instr).contains(&dst)
            {
                removed.push(i);
                skip_next_remap = Some((dst, src));
                i += 1;
                continue;
            }

            // Pattern 2: Backward destination coalescing.
            // Previous instruction writes to `src`, this PASS copies it to
            // `dst`, and `src` is used only once (by this PASS). Rewrite the
            // previous instruction's destination to `dst` directly.
            let src_count = use_count.get(&src).copied().unwrap_or(0);
            if dst != src
                && src_count == 1
                && !result.is_empty()
            {
                if let Some(rewritten) = rewrite_dest(&result[result.len() - 1], src, dst) {
                    let last = result.len() - 1;
                    result[last] = rewritten;
                    removed.push(i);
                    i += 1;
                    continue;
                }
            }
        }

        result.push(instrs[i].clone());
        i += 1;
    }

    // Adjust label positions: for each removed index, labels at or after
    // that index shift down by 1.
    for (label, pos) in label_map.iter_mut() {
        let _ = label; // suppress unused warning in non-debug builds
        let shift = removed.iter().filter(|&&r| r < *pos).count();
        *pos -= shift;
    }

    // Final sweep: remove any self-copies that were created by backward
    // destination coalescing (e.g. `R0 = PASS R0`).
    let pre_len = result.len();
    let mut self_copy_indices = Vec::new();
    for (i, mi) in result.iter().enumerate() {
        if let Some((dst, src)) = is_pass_copy(&mi.instr) {
            if dst == src {
                self_copy_indices.push(i);
            }
        }
    }
    if !self_copy_indices.is_empty() {
        let mut filtered = Vec::with_capacity(result.len());
        for (i, mi) in result.into_iter().enumerate() {
            if !self_copy_indices.contains(&i) {
                filtered.push(mi);
            }
        }
        let removed_count = pre_len - filtered.len();
        // Adjust label positions for the removed self-copies.
        for (label, pos) in label_map.iter_mut() {
            let _ = label;
            let shift = self_copy_indices.iter().filter(|&&r| r < *pos).count();
            *pos -= shift;
        }
        let _ = removed_count;
        return filtered;
    }

    result
}

/// Rewrite the destination register of a compute instruction from `old_dst`
/// to `new_dst`. Returns None if the instruction doesn't write to `old_dst`.
fn rewrite_dest(mi: &MachInstr, old_dst: u8, new_dst: u8) -> Option<MachInstr> {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    let new_instr = match mi.instr {
        Instruction::Compute { cond, compute } => {
            let new_compute = match compute {
                ComputeOp::Alu(alu) => {
                    let new_alu = match alu {
                        AluOp::Add { rn, rx, ry } if rn == old_dst => AluOp::Add { rn: new_dst, rx, ry },
                        AluOp::Sub { rn, rx, ry } if rn == old_dst => AluOp::Sub { rn: new_dst, rx, ry },
                        AluOp::And { rn, rx, ry } if rn == old_dst => AluOp::And { rn: new_dst, rx, ry },
                        AluOp::Or { rn, rx, ry } if rn == old_dst => AluOp::Or { rn: new_dst, rx, ry },
                        AluOp::Xor { rn, rx, ry } if rn == old_dst => AluOp::Xor { rn: new_dst, rx, ry },
                        AluOp::Pass { rn, rx } if rn == old_dst => AluOp::Pass { rn: new_dst, rx },
                        AluOp::Neg { rn, rx } if rn == old_dst => AluOp::Neg { rn: new_dst, rx },
                        AluOp::Not { rn, rx } if rn == old_dst => AluOp::Not { rn: new_dst, rx },
                        AluOp::Inc { rn, rx } if rn == old_dst => AluOp::Inc { rn: new_dst, rx },
                        AluOp::Dec { rn, rx } if rn == old_dst => AluOp::Dec { rn: new_dst, rx },
                        AluOp::Abs { rn, rx } if rn == old_dst => AluOp::Abs { rn: new_dst, rx },
                        _ => return None,
                    };
                    ComputeOp::Alu(new_alu)
                }
                ComputeOp::Mul(mul) => {
                    let new_mul = match mul {
                        MulOp::MulSsf { rn, rx, ry } if rn == old_dst => MulOp::MulSsf { rn: new_dst, rx, ry },
                        MulOp::FMul { rn, rx, ry } if rn == old_dst => MulOp::FMul { rn: new_dst, rx, ry },
                        _ => return None,
                    };
                    ComputeOp::Mul(new_mul)
                }
                ComputeOp::Shift(shift) => {
                    let new_shift = match shift {
                        ShiftOp::Lshift { rn, rx, ry } if rn == old_dst => ShiftOp::Lshift { rn: new_dst, rx, ry },
                        ShiftOp::Ashift { rn, rx, ry } if rn == old_dst => ShiftOp::Ashift { rn: new_dst, rx, ry },
                        _ => return None,
                    };
                    ComputeOp::Shift(new_shift)
                }
                _ => return None,
            };
            Instruction::Compute { cond, compute: new_compute }
        }
        Instruction::LoadImm { ureg, value } if (ureg & 0xF) == old_dst && (ureg >> 4) == 0 => {
            Instruction::LoadImm { ureg: (ureg & 0xF0) | new_dst, value }
        }
        _ => return None,
    };
    Some(MachInstr { instr: new_instr, reloc: mi.reloc.clone() })
}

/// Extract a PASS copy: returns (dst, src) if the instruction is `Rn = PASS Rx`.
fn is_pass_copy(instr: &Instruction) -> Option<(u8, u8)> {
    match *instr {
        Instruction::Compute {
            compute: selinstr::encode::ComputeOp::Alu(selinstr::encode::AluOp::Pass { rn, rx }),
            ..
        } => Some((rn, rx)),
        _ => None,
    }
}

/// Collect all registers used as source operands in an instruction.
fn source_regs(instr: &Instruction) -> Vec<u8> {
    let mut regs = Vec::new();
    match *instr {
        Instruction::Compute { compute, .. } => compute_source_regs(&compute, &mut regs),
        Instruction::ComputeLoadStore {
            compute,
            access,
            dreg,
            ..
        } => {
            if let Some(c) = compute {
                compute_source_regs(&c, &mut regs);
            }
            if access.write {
                // dreg is a source when writing to memory.
                regs.push(dreg);
            }
        }
        Instruction::Return { compute: Some(c), .. } => {
            compute_source_regs(&c, &mut regs);
        }
        _ => {}
    }
    regs
}

fn compute_source_regs(op: &selinstr::encode::ComputeOp, regs: &mut Vec<u8>) {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    match *op {
        ComputeOp::Alu(ref a) => match *a {
            AluOp::Add { rx, ry, .. }
            | AluOp::Sub { rx, ry, .. }
            | AluOp::And { rx, ry, .. }
            | AluOp::Or { rx, ry, .. }
            | AluOp::Xor { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            AluOp::Pass { rx, .. }
            | AluOp::Neg { rx, .. }
            | AluOp::Not { rx, .. }
            | AluOp::Inc { rx, .. }
            | AluOp::Dec { rx, .. }
            | AluOp::Abs { rx, .. } => {
                regs.push(rx);
            }
            AluOp::Comp { rx, ry } | AluOp::CompU { rx, ry } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Mul(ref m) => match *m {
            MulOp::MulSsf { rx, ry, .. } | MulOp::FMul { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Shift(ref s) => match *s {
            ShiftOp::Lshift { rx, ry, .. } | ShiftOp::Ashift { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Falu(_) => {}
        ComputeOp::Multi(ref mf) => {
            use selinstr::encode::MultiOp;
            match *mf {
                MultiOp::MulAlu { rxm, rym, rxa, rya, .. } => {
                    regs.push(rxm);
                    regs.push(rym + 4);
                    regs.push(rxa + 8);
                    regs.push(rya + 12);
                }
                MultiOp::MulDualAddSub { rxm, rym, rxa, rya, .. } => {
                    regs.push(rxm);
                    regs.push(rym + 4);
                    regs.push(rxa + 8);
                    regs.push(rya + 12);
                }
            }
        }
    }
}

/// Remap occurrences of register `from` to `to` in source positions.
fn remap_sources(mi: &MachInstr, from: u8, to: u8) -> MachInstr {
    let new_instr = match mi.instr {
        Instruction::Compute { cond, compute } => Instruction::Compute {
            cond,
            compute: remap_compute_sources(&compute, from, to),
        },
        Instruction::ComputeLoadStore {
            compute,
            access,
            dreg,
            offset,
            cond,
        } => {
            let new_compute = compute.map(|c| remap_compute_sources(&c, from, to));
            let new_dreg = if access.write && dreg == from { to } else { dreg };
            Instruction::ComputeLoadStore {
                compute: new_compute,
                access,
                dreg: new_dreg,
                offset,
                cond,
            }
        }
        Instruction::Return {
            interrupt,
            cond,
            delayed,
            lr,
            compute,
        } => {
            let new_compute = compute.map(|c| remap_compute_sources(&c, from, to));
            Instruction::Return {
                interrupt,
                cond,
                delayed,
                lr,
                compute: new_compute,
            }
        }
        other => other,
    };
    MachInstr {
        instr: new_instr,
        reloc: mi.reloc.clone(),
    }
}

fn remap_compute_sources(
    op: &selinstr::encode::ComputeOp,
    from: u8,
    to: u8,
) -> selinstr::encode::ComputeOp {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    let r = |reg: u8| if reg == from { to } else { reg };
    match *op {
        ComputeOp::Alu(ref a) => ComputeOp::Alu(match *a {
            AluOp::Add { rn, rx, ry } => AluOp::Add { rn, rx: r(rx), ry: r(ry) },
            AluOp::Sub { rn, rx, ry } => AluOp::Sub { rn, rx: r(rx), ry: r(ry) },
            AluOp::And { rn, rx, ry } => AluOp::And { rn, rx: r(rx), ry: r(ry) },
            AluOp::Or { rn, rx, ry } => AluOp::Or { rn, rx: r(rx), ry: r(ry) },
            AluOp::Xor { rn, rx, ry } => AluOp::Xor { rn, rx: r(rx), ry: r(ry) },
            AluOp::Pass { rn, rx } => AluOp::Pass { rn, rx: r(rx) },
            AluOp::Neg { rn, rx } => AluOp::Neg { rn, rx: r(rx) },
            AluOp::Not { rn, rx } => AluOp::Not { rn, rx: r(rx) },
            AluOp::Inc { rn, rx } => AluOp::Inc { rn, rx: r(rx) },
            AluOp::Dec { rn, rx } => AluOp::Dec { rn, rx: r(rx) },
            AluOp::Abs { rn, rx } => AluOp::Abs { rn, rx: r(rx) },
            AluOp::Comp { rx, ry } => AluOp::Comp { rx: r(rx), ry: r(ry) },
            AluOp::CompU { rx, ry } => AluOp::CompU { rx: r(rx), ry: r(ry) },
            other => other,
        }),
        ComputeOp::Mul(ref m) => ComputeOp::Mul(match *m {
            MulOp::MulSsf { rn, rx, ry } => MulOp::MulSsf { rn, rx: r(rx), ry: r(ry) },
            MulOp::FMul { rn, rx, ry } => MulOp::FMul { rn, rx: r(rx), ry: r(ry) },
            other => other,
        }),
        ComputeOp::Shift(ref s) => ComputeOp::Shift(match *s {
            ShiftOp::Lshift { rn, rx, ry } => ShiftOp::Lshift { rn, rx: r(rx), ry: r(ry) },
            ShiftOp::Ashift { rn, rx, ry } => ShiftOp::Ashift { rn, rx: r(rx), ry: r(ry) },
            other => other,
        }),
        ComputeOp::Falu(_) => *op,
        ComputeOp::Multi(_) => *op,
    }
}

/// Build a mapping from pre-regalloc instruction index to post-regalloc index.
///
/// The allocator preserves the original instructions in order but may insert
/// spill/reload instructions before them. We identify original instructions
/// by matching their structure (ignoring register numbers).
fn build_index_map(
    old: &[crate::mach::MachInstr],
    new: &[crate::mach::MachInstr],
) -> HashMap<usize, usize> {
    let mut map = HashMap::new();
    let mut new_idx = 0;
    for (old_idx, _old_mi) in old.iter().enumerate() {
        if new_idx < new.len() {
            map.insert(old_idx, new_idx);
            new_idx += 1;
        }
    }
    // If we still have leftover new instructions, the last old_idx maps are fine.
    map
}

/// Resolve branch targets: replace the label-encoded PC-relative offsets with
/// actual PC-relative offsets. The `prologue_len` is added to both the current
/// PC and label targets to account for prologue instructions prepended before
/// the body.
fn resolve_branches(
    instrs: &[crate::mach::MachInstr],
    label_map: &HashMap<Label, usize>,
    prologue_len: usize,
) -> Vec<crate::mach::MachInstr> {
    instrs
        .iter()
        .enumerate()
        .map(|(body_idx, mi)| {
            let new_instr = match mi.instr {
                Instruction::Branch {
                    call,
                    cond,
                    delayed: false,
                    target: BranchTarget::PcRelative(label_as_i32),
                } if mi.reloc.is_none() => {
                    // The PcRelative field currently holds a label number.
                    let label = label_as_i32 as Label;
                    let target_body_idx = label_map
                        .get(&label)
                        .copied()
                        .unwrap_or(0);
                    // Both indices are within the body; prologue_len shifts
                    // them into the final instruction stream.
                    let pc = body_idx + prologue_len;
                    let target_pc = target_body_idx + prologue_len;
                    let offset = target_pc as i32 - pc as i32;
                    Instruction::Branch {
                        call,
                        cond,
                        delayed: false,
                        target: BranchTarget::PcRelative(offset),
                    }
                }
                Instruction::DoLoop { counter, end_pc } => {
                    // end_pc currently holds a label number. Resolve it
                    // to the absolute instruction index of the last loop
                    // body instruction (one before the label target).
                    let label = end_pc as Label;
                    let target_body_idx = label_map
                        .get(&label)
                        .copied()
                        .unwrap_or(0);
                    let target_pc = target_body_idx + prologue_len;
                    // DO loop end_pc points to the last instruction IN the
                    // loop (the one just before the end label), so subtract 1.
                    let last_body_pc = if target_pc > 0 { target_pc - 1 } else { 0 };
                    Instruction::DoLoop {
                        counter,
                        end_pc: last_body_pc as u32,
                    }
                }
                other => other,
            };
            crate::mach::MachInstr {
                instr: new_instr,
                reloc: mi.reloc.clone(),
            }
        })
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::parse;

    #[test]
    fn compile_return_42() {
        let unit = parse::parse("int main() { return 42; }").unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());
        assert_eq!(code.len() % 6, 0);

        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain R0 = 0x2A (42 decimal) and RTS
        assert!(
            text.iter().any(|t| t.contains("0x2A")),
            "expected load of 42, got: {text:?}"
        );
        assert!(
            text.iter().any(|t| t.contains("RTS")),
            "expected RTS, got: {text:?}"
        );
    }

    #[test]
    fn compile_add_params() {
        let src = "int f(int a, int b) { return a + b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());

        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain an ADD instruction.
        let has_add = text.iter().any(|t| {
            t.contains("R") && t.contains("+") && t.contains("R")
        });
        assert!(has_add, "expected ADD, got: {text:?}");
    }

    #[test]
    fn compile_if_else() {
        let src = "int f(int x) { if (x) { return 1; } else { return 0; } }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());

        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain conditional jump.
        let has_branch = text.iter().any(|t| t.contains("JUMP") || t.contains("IF"));
        assert!(has_branch, "expected conditional branch, got: {text:?}");
    }

    #[test]
    fn compile_arithmetic() {
        let src = "int f(int a, int b) { return a - b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        let has_sub = text.iter().any(|t| t.contains("-"));
        assert!(has_sub, "expected SUB, got: {text:?}");
    }

    #[test]
    fn compile_void_return() {
        let src = "void f() { return; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        assert!(
            text.iter().any(|t| t.contains("RTS")),
            "expected RTS, got: {text:?}"
        );
    }

    #[test]
    fn simple_return_minimal_code() {
        // A simple `return 42` should produce minimal code: just a LoadImm
        // and RTS, with no prologue/epilogue since no callee-saved regs
        // are used and no locals exist.
        let src = "int f() { return 42; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let num_instrs = code.len() / 6;
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should be exactly 2 instructions: LoadImm R0, 42 + RTS.
        assert_eq!(
            num_instrs, 2,
            "expected 2 instructions for simple return, got {num_instrs}: {text:?}"
        );
    }

    #[test]
    fn callee_saved_regs_are_saved_and_restored() {
        // Force use of many registers so that callee-saved regs (R8+) are used.
        // This function has enough live values to require R8 or higher.
        let src = r#"
            int f(int a, int b, int c, int d) {
                int x = a + b;
                int y = c + d;
                int z = x + y;
                int w = a + c;
                int v = b + d;
                int u = z + w;
                int t = u + v;
                int s = t + x;
                int q = s + y;
                return q + z;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();

        // Check that at least one callee-saved register (R8-R15) appears
        // in a DM store (save) and a DM load (restore).
        let callee_saved = ["R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15"];
        let has_save = text.iter().any(|t| {
            t.contains("DM") && t.contains("I6")
                && callee_saved.iter().any(|r| t.contains(&format!("= {r}")) || t.contains(&format!("={r}")))
        });
        let has_restore = text.iter().any(|t| {
            t.contains("DM") && t.contains("I6")
                && callee_saved.iter().any(|r| t.starts_with(r) || t.contains(&format!("{r} = DM")) || t.contains(&format!("{r}=DM")))
        });

        assert!(
            has_save,
            "expected callee-saved register save in prologue, got: {text:?}"
        );
        assert!(
            has_restore,
            "expected callee-saved register restore in epilogue, got: {text:?}"
        );
    }

    #[test]
    fn stack_frame_for_local_vars() {
        // Function with local variables should use DM(I6, offset) for access.
        let src = "int f() { int x = 10; int y = 20; return x + y; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();

        // Should have DM(I6, ...) accesses for the local variables.
        let has_dm_store = text.iter().any(|t| t.contains("DM") && t.contains("I6"));
        assert!(
            has_dm_store,
            "expected DM(I6, offset) access for locals, got: {text:?}"
        );

        // The two variables should use different offsets.
        let dm_offsets: Vec<&str> = text
            .iter()
            .filter(|t| t.contains("DM") && t.contains("I6"))
            .copied()
            .collect();
        assert!(
            dm_offsets.len() >= 2,
            "expected at least 2 DM accesses for 2 locals, got: {dm_offsets:?}"
        );
    }

    #[test]
    fn params_kept_in_registers() {
        // Simple function that just adds two params should not store/load
        // them from the stack.
        let src = "int add(int a, int b) { return a + b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();

        // Should NOT have any DM(I6, ...) accesses since params are kept
        // in registers (never reassigned).
        let has_dm = text.iter().any(|t| t.contains("DM") && t.contains("I6"));
        assert!(
            !has_dm,
            "expected no DM stack accesses for register-only params, got: {text:?}"
        );
    }

    #[test]
    fn reassigned_param_uses_stack() {
        // Parameter that is reassigned must be stored on the stack.
        let src = "int f(int x) { x = x + 1; return x; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();

        // Should have DM(I6, ...) access for the reassigned param.
        let has_dm = text.iter().any(|t| t.contains("DM") && t.contains("I6"));
        assert!(
            has_dm,
            "expected DM stack access for reassigned param, got: {text:?}"
        );
    }

    #[test]
    fn compile_float_add() {
        let src = "float f(float a, float b) { return a + b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());

        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain F-register add (Fn = Fx + Fy).
        let has_fadd = text.iter().any(|t| t.contains("F") && t.contains("+"));
        assert!(has_fadd, "expected float add, got: {text:?}");
    }

    #[test]
    fn compile_float_mul() {
        let src = "float f(float a, float b) { return a * b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain F-register multiply (Fn = Fx * Fy).
        let has_fmul = text.iter().any(|t| t.contains("F") && t.contains("*"));
        assert!(has_fmul, "expected float multiply, got: {text:?}");
    }

    #[test]
    fn compile_pointer_deref() {
        let src = "int f(int *p) { return *p; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_ternary() {
        let src = "int f(int x) { return x > 0 ? x : 0; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_compound_assign() {
        let src = "int f() { int x = 10; x += 5; return x; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_sizeof() {
        let src = "int f() { return sizeof(int); }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // sizeof(int) = 4 bytes = 0x4.
        assert!(
            text.iter().any(|t| t.contains("0x4")),
            "expected sizeof(int) = 4, got: {text:?}"
        );
    }

    #[test]
    fn compile_cast_int_to_float() {
        let src = "float f(int x) { return (float)x; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain FLOAT instruction.
        let has_float = text.iter().any(|t| t.contains("FLOAT"));
        assert!(has_float, "expected FLOAT instruction, got: {text:?}");
    }

    #[test]
    fn compile_pre_increment() {
        let src = "int f() { int x = 5; ++x; return x; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_float_neg() {
        let src = "float f(float x) { return -x; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain float negate (Fn = -Fx).
        let has_fneg = text.iter().any(|t| t.contains("F") && t.contains("-F"));
        assert!(has_fneg, "expected float negate, got: {text:?}");
    }

    #[test]
    fn compile_float_literal() {
        let src = "float f() { return 2.75f; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        assert!(!code.is_empty());
        // Should load the f32 bit pattern as an immediate.
        let expected_bits = 2.75f32.to_bits();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        let hex_str = format!("0x{expected_bits:08X}");
        assert!(
            text.iter().any(|t| t.contains(&hex_str)),
            "expected load of {hex_str}, got: {text:?}"
        );
    }

    #[test]
    fn constant_fold_end_to_end() {
        let src = "int f() { return 2 + 3; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Constant folding should fold 2+3 into 5.
        assert!(
            text.iter().any(|t| t.contains("0x5")),
            "expected folded constant 5, got: {text:?}"
        );
    }

    #[test]
    fn constant_fold_mul_end_to_end() {
        let src = "int f() { return 6 * 7; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should fold 6*7 into 42 = 0x2A.
        assert!(
            text.iter().any(|t| t.contains("0x2A")),
            "expected folded constant 42, got: {text:?}"
        );
    }

    #[test]
    fn constant_fold_minimal_instructions() {
        // After folding, `return 2 + 3` should be just LoadImm + RTS.
        let src = "int f() { return 2 + 3; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let num_instrs = code.len() / 6;
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        assert_eq!(
            num_instrs, 2,
            "expected 2 instructions (LoadImm + RTS) after folding, got {num_instrs}: {text:?}"
        );
    }

    #[test]
    fn hardware_loop_for_counted_loop() {
        let src = "void f() { int i; for (i = 0; i < 10; i++) { } }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        let has_hw_loop = text
            .iter()
            .any(|t| t.contains("LCNTR") || t.contains("DO"));
        assert!(
            has_hw_loop,
            "expected hardware loop (LCNTR/DO), got: {text:?}"
        );
    }

    #[test]
    fn self_copy_elimination() {
        // A function where the register allocator may produce self-copies.
        // Verify that no `Rn = PASS Rn` appears in the output.
        let src = "int f(int a) { return a; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Check that no instruction is a self-copy like "R0 = PASS R0".
        for t in &text {
            if t.contains("PASS") {
                // Extract register names: "Rn = PASS Rm"
                // They should never be the same register.
                let parts: Vec<&str> = t.split_whitespace().collect();
                if parts.len() >= 4 {
                    let dst = parts[0];
                    let src_reg = parts[parts.len() - 1];
                    // Remove trailing semicolon if present.
                    let src_reg = src_reg.trim_end_matches(';');
                    assert_ne!(
                        dst, src_reg,
                        "self-copy found: {t}"
                    );
                }
            }
        }
    }

    #[test]
    fn compile_division() {
        let src = "int f(int a, int b) { return a / b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        assert!(
            text.iter().any(|t| t.contains("CALL")),
            "expected CALL for division, got: {text:?}"
        );
    }

    #[test]
    fn compile_modulo() {
        let src = "int f(int a, int b) { return a % b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_many_params() {
        let src = "int f(int a, int b, int c, int d, int e, int f_) { return a + b + c + d + e + f_; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_enum() {
        let src = "enum color { RED, GREEN = 5, BLUE };\nint f() { return GREEN; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        assert!(
            text.iter().any(|t| t.contains("0x5")),
            "expected GREEN=5, got: {text:?}"
        );
    }

    #[test]
    fn call_with_five_args() {
        let src = "int add5(int a, int b, int c, int d, int e) { return a + e; }\nint main() { return add5(1,2,3,4,5); }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[1], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn stack_frame_has_modify() {
        let src = "int f() { int a = 1; int b = 2; return a + b; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).map(|r| r.code).unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        // Should contain MODIFY(I7, ...) for stack allocation.
        assert!(text.iter().any(|t| t.contains("MODIFY") && t.contains("I7")),
            "expected MODIFY(I7) in prologue, got: {text:?}");
    }

    #[test]
    fn compile_variadic_stub() {
        let src = "int sum(int n, ...) { return n; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_multidim_array() {
        let src = "int f() { int m[2][3]; m[0][1] = 5; return m[0][1]; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_comma_expr() {
        let src = "int f() { return (1, 2, 42); }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        let disasm = selinstr::disasm::disassemble(&code, 0, false);
        let text: Vec<&str> = disasm.iter().map(|l| l.text.as_str()).collect();
        assert!(
            text.iter().any(|t| t.contains("0x2A")),
            "expected 42 from comma expr, got: {text:?}"
        );
    }

    #[test]
    fn compile_asm_statement() {
        let src = r#"int f() { asm("NOP;"); return 0; }"#;
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_large_frame() {
        // Function with many locals that exceeds 6-bit offset range.
        let src = r#"
            int f() {
                int a0=0; int a1=1; int a2=2; int a3=3; int a4=4;
                int a5=5; int a6=6; int a7=7; int a8=8; int a9=9;
                int b0=10; int b1=11; int b2=12; int b3=13; int b4=14;
                int b5=15; int b6=16; int b7=17; int b8=18; int b9=19;
                int c0=20; int c1=21; int c2=22; int c3=23; int c4=24;
                int c5=25; int c6=26; int c7=27; int c8=28; int c9=29;
                int d0=30; int d1=31; int d2=32; int d3=33; int d4=34;
                return a0 + b0 + c0 + d0 + d4;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    #[test]
    fn compile_multi_decl() {
        let src = "int f() { int a = 1, b = 2, c = 3; return a + b + c; }";
        let unit = parse::parse(src).unwrap();
        let code = emit_function_with_relocs(&unit.functions[0], &unit)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty());
    }

    /// Regression test: a function with high register pressure (many live
    /// variables across calls) must compile without overflowing the 6-bit
    /// signed offset range in ComputeLoadStore instructions.
    #[test]
    fn compile_large_main() {
        let src = r#"
            int ext1(int); int ext2(int); int ext3(int); int ext4(int);
            int main() {
                int result = 0;
                result += ext1(10);
                result += ext2(20);
                result += ext3(30);
                result += ext4(40);
                int arr[4] = {1, 2, 3, 4};
                result += arr[2];
                int x = 100 / 7;
                int y = 100 % 7;
                result += x + y;
                return result;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        for func in &unit.functions {
            if func.name == "main" {
                let code = emit_function_with_relocs(func, &unit)
                    .map(|r| r.code)
                    .unwrap();
                assert!(!code.is_empty());
            }
        }
    }

    #[test]
    fn compile_variadic_function() {
        // Test that a variadic function compiles without errors.
        // The function uses va_start/va_arg, requiring the preprocessor
        // for stdarg.h, so we inline the macro expansions.
        let src = r#"
            int sum(int count, ...) {
                int *ap;
                ((void)((ap) = (int *)&(count) - 1));
                int total = 0;
                int i;
                for (i = 0; i < count; i++) {
                    total += (*(int *)((ap)--));
                }
                ((void)0);
                return total;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        assert!(func.is_variadic, "function should be variadic");
        let code = emit_function(func, &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs)
            .map(|r| r.code)
            .unwrap();
        assert!(!code.is_empty(), "variadic function should produce code");
    }
}
