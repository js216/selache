// SPDX-License-Identifier: GPL-3.0
// regalloc.rs --- Linear-scan register allocator
// Copyright (c) 2026 Jakob Kastelic

//! Register allocator.
//!
//! Simple linear-scan allocator that maps virtual registers to physical
//! R0-R15. When all registers are in use, the least-recently-used register
//! is spilled to a stack slot via DM(I6 + offset).
//!
//! Allocation order: caller-saved registers (R0-R7) are preferred over
//! callee-saved (R8-R15) to minimise the prologue/epilogue overhead and
//! keep the stack frame small enough for 6-bit signed offsets.

use std::collections::{BTreeMap, BTreeSet};

use crate::mach::MachInstr;
use crate::target;

use selinstr::encode::{
    AluOp, ComputeOp, FaluOp, Instruction, MemAccess, ShiftOp,
};

/// Rewrite virtual register references in a list of machine instructions,
/// mapping them to physical registers R0-R15.
///
/// `num_params` is the number of function parameters; vregs 0..num_params
/// are pinned to R0..R(num_params-1) to respect the calling convention.
///
/// Returns the rewritten instruction stream and the number of stack slots
/// used for spills (callee must reserve this space in the frame).
/// Allocate registers and return (allocated_instrs, spill_slots, index_map).
/// `index_map[i]` is the position in `allocated_instrs` where the i'th input
/// instruction lands (the slot AFTER any spill stores/loads inserted ahead of
/// it). Labels in the input's position space must map through this so that
/// a branch target lands on its instruction rather than on an inserted spill.
pub fn allocate(
    instrs: &[MachInstr],
    num_params: u8,
    reserves_r1: bool,
) -> (Vec<MachInstr>, u32, Vec<usize>) {
    let mut alloc = Allocator::new(num_params, reserves_r1);
    let mut out = Vec::new();
    let mut index_map = Vec::with_capacity(instrs.len());

    for mi in instrs {
        index_map.push(out.len());
        alloc.rewrite(mi, &mut out);
    }

    (out, alloc.spill_slots, index_map)
}

struct Allocator {
    /// Mapping from virtual register to physical register.
    vreg_to_phys: BTreeMap<u8, u8>,
    /// Reverse: physical register to virtual register.
    phys_to_vreg: BTreeMap<u8, u8>,
    /// Physical registers that must not be evicted. Vreg 0 is always in
    /// this set and pinned to physical R0, so that both the call-return
    /// reload (`dst = PASS R0`) and the function-return move
    /// (`R0 = PASS retval`) emitted by isel resolve to the ABI return
    /// register instead of whatever register vreg 0 happens to land on
    /// after the allocator evicts it.
    pinned: BTreeSet<u8>,
    /// Physical registers pinned for the duration of the current mach
    /// instruction's rewrite. Cleared at the start of every `rewrite`
    /// call. This prevents a later operand lookup inside the same op
    /// from evicting an earlier operand's physical register, which
    /// would silently miscompile the op at high register pressure.
    transient_pins: Vec<u8>,
    /// Physical registers reserved by an in-flight forced-physical
    /// arg-setup write. Once the Pass `rn = arg_value` has been
    /// emitted for an upcoming call, `rn` (an ARG_REG) holds the
    /// ABI-mandated argument value and must not be re-allocated
    /// before the CJUMP consumes it. Cleared at every CJUMP.
    arg_setup_pins: Vec<u8>,
    /// Round-robin index within the caller-saved range for eviction.
    next_evict: u8,
    /// Number of spill stack slots allocated.
    spill_slots: u32,
    /// Spill map: virtual register -> spill slot offset.
    spill_map: BTreeMap<u8, u32>,
}

impl Allocator {
    fn new(num_params: u8, reserves_r1: bool) -> Self {
        let mut vreg_to_phys = BTreeMap::new();
        let mut phys_to_vreg = BTreeMap::new();
        let mut pinned = BTreeSet::new();
        // Pin parameter vregs to the physical registers the SHARC+
        // C-ABI uses for incoming arguments: `target::ARG_REGS`
        // (R4, R8, R12, R0 -- *not* a contiguous R0..R(n-1) range).
        // Pinning vregs 0..n-1 to R0..R(n-1) instead would silently
        // read garbage for any argument after the zeroth.
        let arg_count = (num_params as usize).min(target::ARG_REGS.len());
        for (i, &phys) in target::ARG_REGS.iter().take(arg_count).enumerate() {
            vreg_to_phys.insert(i as u8, phys);
            phys_to_vreg.insert(phys, i as u8);
            pinned.insert(phys);
        }
        // Pin the return-value pseudo-vreg to physical R0 so isel's
        // `Pass { rn: RETURN_REG_VREG, rx: ... }` always resolves to
        // `R0 = ...`. For a 4-argument function this is the same
        // physical register as ARG_REGS[3] -- vreg 3 (the 4th arg)
        // also lives in R0. The lowering stage snapshots vreg 3 into
        // a fresh vreg at function entry so the parameter value is
        // safe from being clobbered by intermediate writes to R0.
        vreg_to_phys.insert(target::RETURN_REG_VREG, target::RETURN_REG);
        phys_to_vreg
            .entry(target::RETURN_REG)
            .or_insert(target::RETURN_REG_VREG);
        pinned.insert(target::RETURN_REG);
        // Same deal for the hi half of a two-word struct return: pin a
        // pseudo-vreg to physical R1 so isel's explicit `R1 = ...` and
        // `... = R1` transfers survive regalloc remapping. Without this,
        // the second word of the struct ends up in whatever register R1
        // got renamed to and the caller reads back stale data.
        //
        // Only reserve R1 in functions whose body actually emits one of
        // the struct-return ABI shapes (caller-side `CallStruct` /
        // `CallIndirectStruct` or callee-side `RetStruct` /
        // `LoadStructRetPtr`). Permanently reserving R1 in every
        // function would lose a usable scratch register everywhere and
        // increase register pressure enough to expose latent regalloc
        // join-reconciliation bugs in deeply nested ternary chains.
        if reserves_r1 {
            vreg_to_phys.insert(target::RETURN_REG_HI_VREG, target::RETURN_REG_HI);
            phys_to_vreg
                .entry(target::RETURN_REG_HI)
                .or_insert(target::RETURN_REG_HI_VREG);
            pinned.insert(target::RETURN_REG_HI);
        }
        Self {
            vreg_to_phys,
            phys_to_vreg,
            pinned,
            transient_pins: Vec::new(),
            arg_setup_pins: Vec::new(),
            next_evict: 0,
            spill_slots: 0,
            spill_map: BTreeMap::new(),
        }
    }

    /// Pin `phys` for the remainder of the current mach-instruction rewrite,
    /// tracking the reservation so that `clear_transient_pins` can unpin it
    /// when the next instruction starts. A no-op if `phys` is already pinned.
    fn transient_pin(&mut self, phys: u8) {
        if !self.pinned.contains(&phys) {
            self.pinned.insert(phys);
            self.transient_pins.push(phys);
        }
    }

    /// Move live vregs from caller-saved registers (R0-R7) to callee-
    /// saved registers (R8-R15) before a CJUMP so they survive the call.
    /// For each live caller-saved vreg, first try to migrate it to a
    /// free callee-saved register via `Rn = PASS Rm`; if no callee-saved
    /// is available, fall back to spilling to the stack frame. The
    /// migration path matches the SHARC+ C-ABI idiom the reference
    /// toolchain emits for live-across-CJUMP values and sidesteps a
    /// stack-spill path that
    /// does not round-trip reliably when multiple CJUMPs are chained
    /// back to back (values reloaded after a second CJUMP read zero
    /// instead of the stored value, so a sequence of three nested
    /// calls returns the innermost call's result). After the migration
    /// or spill, the caller-saved physical is freed and any subsequent
    /// use of the vreg resolves to the new location via `get_phys` →
    /// either the new physical mapping or the `emit_reload` path.
    fn spill_caller_saved(&mut self, spill: &mut Vec<MachInstr>) {
        let to_handle: Vec<(u8, u8)> = self.vreg_to_phys.iter()
            .filter(|(&vreg, &phys)| {
                target::CALLER_SAVED.contains(&phys)
                    && vreg != target::RETURN_REG_VREG
                    && vreg != target::RETURN_REG_HI_VREG
            })
            .map(|(&vreg, &phys)| (vreg, phys))
            .collect();

        for (vreg, phys) in to_handle {
            if let Some(callee_phys) = self.free_callee_saved() {
                // Migrate: callee_phys = PASS phys.
                spill.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Pass {
                            rn: callee_phys,
                            rx: phys,
                        }),
                    },
                    reloc: None,
                });
                self.phys_to_vreg.remove(&phys);
                self.pinned.remove(&phys);
                self.vreg_to_phys.insert(vreg, callee_phys);
                self.phys_to_vreg.insert(callee_phys, vreg);
                continue;
            }

            // Fallback: no callee-saved register is free, so spill to the
            // stack. Allocate a spill slot if not already spilled.
            let slot = *self.spill_map.entry(vreg).or_insert_with(|| {
                let s = self.spill_slots;
                self.spill_slots += 1;
                s
            });
            // Store to the spill slot. Use *positive* offsets from I6:
            // `adjust_frame_offsets` treats negative offsets as
            // compiler-managed local slots and positive offsets as
            // regalloc spill slots, repositioning each into a distinct
            // memory region. Mixing the two conventions on a spill
            // (positive evict + negative reload, or vice versa) lands
            // the spill on top of an unrelated local and the program
            // reads back the local instead of the spilled value.
            spill.push(MachInstr {
                instr: Instruction::ComputeLoadStore {
                    compute: None,
                    access: MemAccess {
                        pm: false,
                        write: true,
                        i_reg: target::FRAME_PTR,
                    },
                    dreg: phys,
                    offset: slot as i8,
                    cond: target::COND_TRUE,
                },
                reloc: None,
            });
            // Remove from register maps so get_phys will reload.
            self.phys_to_vreg.remove(&phys);
            self.vreg_to_phys.remove(&vreg);
            self.pinned.remove(&phys);
        }
    }

    /// Return a free callee-saved physical register, if any. A register
    /// is free when it is neither mapped to a vreg nor pinned.
    fn free_callee_saved(&self) -> Option<u8> {
        target::CALLEE_SAVED
            .iter()
            .find(|&&phys| {
                !self.phys_to_vreg.contains_key(&phys)
                    && !self.pinned.contains(&phys)
            })
            .copied()
    }

    /// Release all transient pins taken during the current rewrite.
    fn clear_transient_pins(&mut self) {
        for p in self.transient_pins.drain(..) {
            self.pinned.remove(&p);
        }
    }

    /// Emit a spill reload instruction for `vreg` into `phys`, if it was
    /// previously spilled. Uses positive offsets to match the spill
    /// store convention (see `spill_caller_saved` for the rationale).
    fn emit_reload(&self, vreg: u8, phys: u8, spill_instrs: &mut Vec<MachInstr>) {
        if let Some(&slot) = self.spill_map.get(&vreg) {
            spill_instrs.push(MachInstr {
                instr: Instruction::ComputeLoadStore {
                    compute: None,
                    access: MemAccess {
                        pm: false,
                        write: false,
                        i_reg: target::FRAME_PTR,
                    },
                    dreg: phys,
                    offset: slot as i8,
                    cond: target::COND_TRUE,
                },
                reloc: None,
            });
        }
    }

    /// Get or assign a physical register for a virtual register.
    ///
    /// Allocation order: caller-saved (R0-R7) first, then callee-saved
    /// (R8-R15). This minimises the number of callee-saved registers that
    /// must be saved/restored in the prologue/epilogue and keeps the frame
    /// size small, avoiding 6-bit signed offset overflows in
    /// ComputeLoadStore instructions.
    ///
    /// Every returned physical register is transiently pinned for the
    /// duration of the current `rewrite` call, so a later `get_phys` in
    /// the same multi-operand op cannot evict it and leave a stale
    /// physical in the op's earlier operand slot.
    fn get_phys(&mut self, vreg: u8, spill_instrs: &mut Vec<MachInstr>) -> u8 {
        if let Some(&phys) = self.vreg_to_phys.get(&vreg) {
            self.transient_pin(phys);
            return phys;
        }

        // Try caller-saved registers first (R0-R7). Pinned registers are
        // reserved for their owning vreg and must not be handed out to
        // anyone else even when they appear "free" in phys_to_vreg.
        for &candidate in target::CALLER_SAVED {
            if self.pinned.contains(&candidate) {
                continue;
            }
            if !self.phys_to_vreg.contains_key(&candidate) {
                self.vreg_to_phys.insert(vreg, candidate);
                self.phys_to_vreg.insert(candidate, vreg);
                self.emit_reload(vreg, candidate, spill_instrs);
                self.transient_pin(candidate);
                return candidate;
            }
        }

        // Then try callee-saved registers (R8-R15).
        for &candidate in target::CALLEE_SAVED {
            if self.pinned.contains(&candidate) {
                continue;
            }
            if !self.phys_to_vreg.contains_key(&candidate) {
                self.vreg_to_phys.insert(vreg, candidate);
                self.phys_to_vreg.insert(candidate, vreg);
                self.emit_reload(vreg, candidate, spill_instrs);
                self.transient_pin(candidate);
                return candidate;
            }
        }

        // All registers occupied -- must spill.  Prefer evicting a
        // caller-saved register to avoid unnecessary callee-saved usage.
        let evict_phys = self.pick_evict_candidate();

        let evicted_vreg = self.phys_to_vreg[&evict_phys];

        // Allocate or reuse a spill slot for the evicted vreg.
        let slot = *self.spill_map.entry(evicted_vreg).or_insert_with(|| {
            let s = self.spill_slots;
            self.spill_slots += 1;
            s
        });

        // Emit store of evicted register. Uses a *positive* offset
        // so `adjust_frame_offsets` reroutes the slot into the spill
        // region (positive offsets) rather than the local-variable
        // region (negative offsets). The matching reload in
        // `emit_reload` uses the same positive convention, so the
        // store and load address the same memory cell.
        spill_instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: MemAccess {
                    pm: false,
                    write: true,
                    i_reg: target::FRAME_PTR,
                },
                dreg: evict_phys,
                offset: slot as i8,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });

        // Remove old mapping.
        self.vreg_to_phys.remove(&evicted_vreg);

        // Assign the freed register to the new vreg.
        self.vreg_to_phys.insert(vreg, evict_phys);
        self.phys_to_vreg.insert(evict_phys, vreg);

        // Reload if previously spilled.
        self.emit_reload(vreg, evict_phys, spill_instrs);

        self.transient_pin(evict_phys);
        evict_phys
    }

    /// Pick a physical register to evict.  Prefer caller-saved registers
    /// (R0-R7) since evicting them is cheaper (no prologue/epilogue cost).
    /// Uses round-robin within the caller-saved group for fairness.
    /// Pinned registers (e.g. R0 aliased to vreg 0) are never candidates.
    fn pick_evict_candidate(&mut self) -> u8 {
        let n_caller = target::CALLER_SAVED.len() as u8;
        let start = self.next_evict;
        loop {
            let candidate = target::CALLER_SAVED[self.next_evict as usize];
            self.next_evict = (self.next_evict + 1) % n_caller;
            if !self.pinned.contains(&candidate)
                && self.phys_to_vreg.contains_key(&candidate)
            {
                return candidate;
            }
            if self.next_evict == start {
                break;
            }
        }
        // Fallback: scan all registers for an occupied, unpinned one.
        for i in 0..target::NUM_REGS {
            if !self.pinned.contains(&i) && self.phys_to_vreg.contains_key(&i) {
                return i;
            }
        }
        0
    }

    fn rewrite(&mut self, mi: &MachInstr, out: &mut Vec<MachInstr>) {
        self.clear_transient_pins();
        let mut spill_pre = Vec::new();

        let new_instr = match mi.instr {
            Instruction::LoadImm { ureg, value } => {
                // Two coexisting ureg conventions reach this rewrite:
                //
                //  - Pre-allocated I/M-register encodings (e.g. I12 =
                //    0x1C for the indirect-call sequence, M12 = 0x24,
                //    the SCRATCH_I reload in `ReadGlobal64`). isel sets
                //    the `UREG_FIXED_TAG` bit on these; the underlying
                //    encoding always lives in groups 1..2 (I/M).
                //
                //  - Raw R-vreg ids that must be mapped through
                //    `get_phys` to a physical R-register encoding
                //    0x00..0x0F. Vregs are u8 (0..255), so a vreg
                //    `>= 128` already has bit 7 set — we cannot use
                //    bit 7 alone to detect the tag. Combine the tag
                //    bit with a check that the underlying encoding
                //    lies in the I/M group nibble ranges (0x10..0x2F).
                //    Anything else is treated as a raw vreg.
                let tag_set = ureg & target::UREG_FIXED_TAG != 0;
                let group = ureg & 0x70;
                if tag_set && (group == 0x10 || group == 0x20) {
                    Instruction::LoadImm {
                        ureg: ureg & !target::UREG_FIXED_TAG,
                        value,
                    }
                } else {
                    let vreg = ureg;
                    let phys = self.get_phys(vreg, &mut spill_pre);
                    Instruction::LoadImm {
                        ureg: target::ureg_r(phys),
                        value,
                    }
                }
            }

            Instruction::Compute { cond, compute } => {
                let new_compute = self.rewrite_compute(&compute, &mut spill_pre);
                Instruction::Compute {
                    cond,
                    compute: new_compute,
                }
            }

            Instruction::Return {
                interrupt,
                cond,
                delayed,
                lr,
                compute,
            } => {
                let new_compute = compute
                    .map(|c| self.rewrite_compute(&c, &mut spill_pre));
                Instruction::Return {
                    interrupt,
                    cond,
                    delayed,
                    lr,
                    compute: new_compute,
                }
            }

            Instruction::Branch { call, cond, target, delayed } => {
                Instruction::Branch { call, cond, target, delayed }
            }

            Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset,
                cond,
            } => {
                let new_compute = compute
                    .map(|c| self.rewrite_compute(&c, &mut spill_pre));
                let new_dreg = self.get_phys(dreg, &mut spill_pre);
                Instruction::ComputeLoadStore {
                    compute: new_compute,
                    access,
                    dreg: new_dreg,
                    offset,
                    cond,
                }
            }

            Instruction::URegMove { dest, src } => {
                // Tag-bit + register-group-nibble combo identifies a
                // fixed R/I/M-register encoding (see LoadImm comment for
                // full discussion). Anything else is a raw R-vreg id
                // that must be mapped to a physical register. R-group
                // (0x00) is load-bearing for the CallIndirect frame-link
                // `R2 = I6` save: without it, regalloc treats the 0x82
                // as a plain vreg 2 and remaps R2 to whatever physical
                // register vreg 2 lives in, so the delay-slot push
                // `DM(I7,M7) = R2` stores an unrelated value and the
                // callee's RFRAME restores the wrong frame pointer.
                let is_fixed = |u: u8| {
                    u & target::UREG_FIXED_TAG != 0
                        && ((u & 0x70) == 0x00
                            || (u & 0x70) == 0x10
                            || (u & 0x70) == 0x20)
                };
                let new_dest = if is_fixed(dest) {
                    dest & !target::UREG_FIXED_TAG
                } else {
                    target::ureg_r(self.get_phys(dest, &mut spill_pre))
                };
                let new_src = if is_fixed(src) {
                    src & !target::UREG_FIXED_TAG
                } else {
                    target::ureg_r(self.get_phys(src, &mut spill_pre))
                };
                Instruction::URegMove { dest: new_dest, src: new_src }
            }

            Instruction::CJump { .. } => {
                // A call clobbers all caller-saved registers (R0-R7).
                // Spill any live vregs in those registers to the stack
                // so they can be reloaded after the call returns.
                self.spill_caller_saved(&mut spill_pre);
                // Release the temporary pins placed on ARG_REGS by
                // arg-setup Passes; the call has consumed them.
                for p in self.arg_setup_pins.drain(..) {
                    self.pinned.remove(&p);
                }
                mi.instr
            }

            Instruction::IndirectBranch { pm_m, .. } => {
                // Two isel shapes produce IndirectBranch: the CallIndirect
                // lowering open-codes a `JUMP (M13, I12) (DB)` with
                // manual frame-link pushes (pm_m = 5, selecting M13
                // which startup.s pins to 0); the function-return
                // epilogue emits `JUMP (M14, I12) (DB)` (pm_m = 6, M14
                // which is pinned to +1 to compensate for the
                // retaddr-1 the caller pushed). Only the call shape
                // needs caller-saved spill and arg-pin release — at
                // the return epilogue no vregs are live and no pins
                // are active. Keying the branch on pm_m keeps the
                // dispatch local to this match arm instead of
                // threading a call/return marker through the whole
                // isel → regalloc pipeline.
                if pm_m == 5 {
                    self.spill_caller_saved(&mut spill_pre);
                    for p in self.arg_setup_pins.drain(..) {
                        self.pinned.remove(&p);
                    }
                }
                mi.instr
            }

            Instruction::Nop
            | Instruction::Idle
            | Instruction::Rframe
            | Instruction::EmuIdle
            | Instruction::Sync
            | Instruction::DoLoop { .. }
            | Instruction::DualMove { .. }
            | Instruction::Modify { .. }
            | Instruction::BitOp { .. }
            | Instruction::StackOp { .. }
            | Instruction::DagModify { .. }
            | Instruction::RegisterSwap { .. }
            | Instruction::ImmShift { .. }
            | Instruction::ImmStore { .. }
            | Instruction::DoUntil { .. } => mi.instr,

            Instruction::UregDagMove {
                pm, write, ureg, i_reg, m_reg, cond, compute, post_modify,
            } => {
                // Tag-bit + I/M-group nibble identifies a fixed
                // I/M/R-register encoding (R2 push for CJUMP delay
                // slot, I12 reload for indirect return). Other ureg
                // values are raw R-vreg ids.
                let new_compute = compute
                    .map(|c| self.rewrite_compute(&c, &mut spill_pre));
                let tag = ureg & target::UREG_FIXED_TAG != 0;
                let group = ureg & 0x70;
                // R-group fixed encoding is 0x00..0x0F (group 0), used
                // for the CJUMP delay-slot R2 push.
                let is_r_fixed = tag && group == 0x00;
                let is_i_fixed = tag && group == 0x10;
                let is_m_fixed = tag && group == 0x20;
                let new_ureg = if is_r_fixed || is_i_fixed || is_m_fixed {
                    ureg & !target::UREG_FIXED_TAG
                } else {
                    let phys = self.get_phys(ureg, &mut spill_pre);
                    target::ureg_r(phys)
                };
                Instruction::UregDagMove {
                    pm, write, ureg: new_ureg, i_reg, m_reg, cond,
                    compute: new_compute, post_modify,
                }
            }

            Instruction::UregAbsAccess { pm, write, ureg, addr } => {
                let is_fixed = |u: u8| {
                    u & target::UREG_FIXED_TAG != 0
                        && ((u & 0x70) == 0x10 || (u & 0x70) == 0x20)
                };
                if is_fixed(ureg) {
                    Instruction::UregAbsAccess {
                        pm, write,
                        ureg: ureg & !target::UREG_FIXED_TAG,
                        addr,
                    }
                } else {
                    let phys = self.get_phys(ureg, &mut spill_pre);
                    Instruction::UregAbsAccess {
                        pm, write,
                        ureg: target::ureg_r(phys),
                        addr,
                    }
                }
            }

            Instruction::UregMemAccess { pm, i_reg, write, lw, ureg, offset } => {
                let is_fixed = |u: u8| {
                    u & target::UREG_FIXED_TAG != 0
                        && ((u & 0x70) == 0x10 || (u & 0x70) == 0x20)
                };
                if is_fixed(ureg) {
                    Instruction::UregMemAccess {
                        pm, i_reg, write, lw,
                        ureg: ureg & !target::UREG_FIXED_TAG,
                        offset,
                    }
                } else {
                    let phys = self.get_phys(ureg, &mut spill_pre);
                    Instruction::UregMemAccess {
                        pm, i_reg, write, lw,
                        ureg: target::ureg_r(phys),
                        offset,
                    }
                }
            }

            Instruction::UregTransfer { src_ureg, dst_ureg, compute } => {
                let new_compute = compute
                    .map(|c| self.rewrite_compute(&c, &mut spill_pre));
                let is_fixed = |u: u8| {
                    u & target::UREG_FIXED_TAG != 0
                        && ((u & 0x70) == 0x10 || (u & 0x70) == 0x20)
                };
                let new_src = if is_fixed(src_ureg) {
                    src_ureg & !target::UREG_FIXED_TAG
                } else {
                    target::ureg_r(self.get_phys(src_ureg, &mut spill_pre))
                };
                let new_dst = if is_fixed(dst_ureg) {
                    dst_ureg & !target::UREG_FIXED_TAG
                } else {
                    target::ureg_r(self.get_phys(dst_ureg, &mut spill_pre))
                };
                Instruction::UregTransfer {
                    src_ureg: new_src,
                    dst_ureg: new_dst,
                    compute: new_compute,
                }
            }

            // Assembly-only instruction types not produced by selcc
            Instruction::ImmShiftMem { .. } => mi.instr,
        };

        // Emit any spill/reload instructions before the main instruction.
        out.extend(spill_pre);
        out.push(MachInstr {
            instr: new_instr,
            reloc: mi.reloc.clone(),
        });
    }

    fn rewrite_compute(&mut self, op: &ComputeOp, spill: &mut Vec<MachInstr>) -> ComputeOp {
        match *op {
            ComputeOp::Alu(ref alu) => ComputeOp::Alu(self.rewrite_alu(alu, spill)),
            ComputeOp::Mul(ref mul) => ComputeOp::Mul(self.rewrite_mul(mul, spill)),
            ComputeOp::Shift(ref shift) => {
                ComputeOp::Shift(self.rewrite_shift(shift, spill))
            }
            ComputeOp::Falu(ref falu) => {
                ComputeOp::Falu(self.rewrite_falu(falu, spill))
            }
            ComputeOp::Multi(m) => ComputeOp::Multi(m),
        }
    }

    fn rewrite_alu(
        &mut self,
        alu: &selinstr::encode::AluOp,
        spill: &mut Vec<MachInstr>,
    ) -> AluOp {
        use selinstr::encode::AluOp::*;
        match *alu {
            Add { rn, rx, ry } => Add {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Sub { rn, rx, ry } => Sub {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Comp { rx, ry } => Comp {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Pass { rn, rx } => {
                // Forced-physical arg setup: rn = 0xC0 | phys (phys < 16).
                // The 0xC0 prefix uniquely identifies arg-setup copies
                // without colliding with RETURN_REG_VREG (0xFF).
                if (0xC0..0xD0).contains(&rn) {
                    let dest_phys = rn & 0x0F;
                    let src_phys = self.get_phys(rx, spill);
                    // If the destination physical already holds a
                    // different live vreg, spill it before the forced
                    // write destroys its value. Arises when a later
                    // arg source vreg was allocated to an earlier
                    // arg's ARG_REG: without this, the sequential
                    // Pass r4=rX; Pass r8=r4 reads the just-clobbered
                    // r4 instead of the arg value.
                    let resident = self.phys_to_vreg.get(&dest_phys).copied();
                    if let Some(v) = resident {
                        if v != rx && v != target::RETURN_REG_VREG
                            && v != target::RETURN_REG_HI_VREG
                            && self.vreg_to_phys.get(&v).copied() == Some(dest_phys)
                        {
                            let slot = *self.spill_map.entry(v).or_insert_with(|| {
                                let s = self.spill_slots;
                                self.spill_slots += 1;
                                s
                            });
                            spill.push(MachInstr {
                                instr: Instruction::ComputeLoadStore {
                                    compute: None,
                                    access: MemAccess {
                                        pm: false,
                                        write: true,
                                        i_reg: target::FRAME_PTR,
                                    },
                                    dreg: dest_phys,
                                    offset: slot as i8,
                                    cond: target::COND_TRUE,
                                },
                                reloc: None,
                            });
                            self.vreg_to_phys.remove(&v);
                            self.phys_to_vreg.remove(&dest_phys);
                        }
                    }
                    // Reserve dest_phys until the upcoming CJUMP so a
                    // later get_phys cannot re-allocate it and clobber
                    // the just-placed argument value.
                    if !self.pinned.contains(&dest_phys) {
                        self.pinned.insert(dest_phys);
                        self.arg_setup_pins.push(dest_phys);
                    }
                    Pass {
                        rn: dest_phys,
                        rx: src_phys,
                    }
                } else {
                    Pass {
                        rn: self.get_phys(rn, spill),
                        rx: self.get_phys(rx, spill),
                    }
                }
            }
            Neg { rn, rx } => Neg {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Not { rn, rx } => Not {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            And { rn, rx, ry } => And {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Or { rn, rx, ry } => Or {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Xor { rn, rx, ry } => Xor {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Inc { rn, rx } => Inc {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Dec { rn, rx } => Dec {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Abs { rn, rx } => Abs {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            AddCi { rn, rx, ry } => AddCi {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            SubCi { rn, rx, ry } => SubCi {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Avg { rn, rx, ry } => Avg {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            CompU { rx, ry } => CompU {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            PassCi { rn, rx } => PassCi {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            PassCiMinus1 { rn, rx } => PassCiMinus1 {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Min { rn, rx, ry } => Min {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Max { rn, rx, ry } => Max {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Clip { rn, rx, ry } => Clip {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
        }
    }

    fn rewrite_mul(
        &mut self,
        mul: &selinstr::encode::MulOp,
        spill: &mut Vec<MachInstr>,
    ) -> selinstr::encode::MulOp {
        use selinstr::encode::MulOp::*;
        match *mul {
            MulSsf { rn, rx, ry } => MulSsf {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MulSsi { rn, rx, ry } => MulSsi {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FMul { rn, rx, ry } => FMul {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrfMulSsf { rx, ry } => MrfMulSsf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrfMulSsi { rx, ry } => MrfMulSsi {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrbMulSsf { rx, ry } => MrbMulSsf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrfMacSsf { rx, ry } => MrfMacSsf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrbMacSsf { rx, ry } => MrbMacSsf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MacSsf { rn, rx, ry } => MacSsf {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrfMsubSsf { rx, ry } => MrfMsubSsf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            MrbMsubSsf { rx, ry } => MrbMsubSsf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            SatMrf { rn } => SatMrf {
                rn: self.get_phys(rn, spill),
            },
            SatMrb { rn } => SatMrb {
                rn: self.get_phys(rn, spill),
            },
            ClrMrf => ClrMrf,
            ClrMrb => ClrMrb,
            TrncMrf => TrncMrf,
            TrncMrb => TrncMrb,
            TrncMrfReg { rn } => TrncMrfReg {
                rn: self.get_phys(rn, spill),
            },
            TrncMrbReg { rn } => TrncMrbReg {
                rn: self.get_phys(rn, spill),
            },
            MrfMulUuf { rx, ry } => MrfMulUuf {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            ReadMr0f { rn } => ReadMr0f { rn: self.get_phys(rn, spill) },
            ReadMr1f { rn } => ReadMr1f { rn: self.get_phys(rn, spill) },
            ReadMr2f { rn } => ReadMr2f { rn: self.get_phys(rn, spill) },
            ReadMr0b { rn } => ReadMr0b { rn: self.get_phys(rn, spill) },
            ReadMr1b { rn } => ReadMr1b { rn: self.get_phys(rn, spill) },
            ReadMr2b { rn } => ReadMr2b { rn: self.get_phys(rn, spill) },
            WriteMr0f { rn } => WriteMr0f { rn: self.get_phys(rn, spill) },
            WriteMr1f { rn } => WriteMr1f { rn: self.get_phys(rn, spill) },
            WriteMr2f { rn } => WriteMr2f { rn: self.get_phys(rn, spill) },
            WriteMr0b { rn } => WriteMr0b { rn: self.get_phys(rn, spill) },
            WriteMr1b { rn } => WriteMr1b { rn: self.get_phys(rn, spill) },
            WriteMr2b { rn } => WriteMr2b { rn: self.get_phys(rn, spill) },
        }
    }

    fn rewrite_falu(
        &mut self,
        falu: &FaluOp,
        spill: &mut Vec<MachInstr>,
    ) -> FaluOp {
        match *falu {
            FaluOp::Add { rn, rx, ry } => FaluOp::Add {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Sub { rn, rx, ry } => FaluOp::Sub {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Comp { rx, ry } => FaluOp::Comp {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Pass { rn, rx } => FaluOp::Pass {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Neg { rn, rx } => FaluOp::Neg {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Float { rn, rx } => FaluOp::Float {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Fix { rn, rx } => FaluOp::Fix {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Abs { rn, rx } => FaluOp::Abs {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Avg { rn, rx, ry } => FaluOp::Avg {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::AbsAdd { rn, rx, ry } => FaluOp::AbsAdd {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::AbsSub { rn, rx, ry } => FaluOp::AbsSub {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Rnd { rn, rx } => FaluOp::Rnd {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Mant { rn, rx } => FaluOp::Mant {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Scalb { rn, rx, ry } => FaluOp::Scalb {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Logb { rn, rx } => FaluOp::Logb {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Recips { rn, rx } => FaluOp::Recips {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Rsqrts { rn, rx } => FaluOp::Rsqrts {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::Trunc { rn, rx } => FaluOp::Trunc {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            FaluOp::FixBy { rn, rx, ry } => FaluOp::FixBy {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::FloatBy { rn, rx, ry } => FaluOp::FloatBy {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::TruncBy { rn, rx, ry } => FaluOp::TruncBy {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Copysign { rn, rx, ry } => FaluOp::Copysign {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Min { rn, rx, ry } => FaluOp::Min {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Max { rn, rx, ry } => FaluOp::Max {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            FaluOp::Clip { rn, rx, ry } => FaluOp::Clip {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
        }
    }

    fn rewrite_shift(
        &mut self,
        shift: &selinstr::encode::ShiftOp,
        spill: &mut Vec<MachInstr>,
    ) -> ShiftOp {
        use selinstr::encode::ShiftOp::*;
        match *shift {
            Lshift { rn, rx, ry } => Lshift {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Ashift { rn, rx, ry } => Ashift {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            OrLshift { rn, rx, ry } => OrLshift {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            OrAshift { rn, rx, ry } => OrAshift {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Rot { rn, rx, ry } => Rot {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Btst { rx, ry } => Btst {
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Bclr { rn, rx, ry } => Bclr {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Bset { rn, rx, ry } => Bset {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Btgl { rn, rx, ry } => Btgl {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Fext { rn, rx, ry } => Fext {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Fdep { rn, rx, ry } => Fdep {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            OrFextSe { rn, rx, ry } => OrFextSe {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            OrFdep { rn, rx, ry } => OrFdep {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
                ry: self.get_phys(ry, spill),
            },
            Exp { rn, rx } => Exp {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            ExpEx { rn, rx } => ExpEx {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Leftz { rn, rx } => Leftz {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Lefto { rn, rx } => Lefto {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Fpack { rn, rx } => Fpack {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
            Funpack { rn, rx } => Funpack {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::mach::MachInstr;

    #[test]
    fn allocate_simple() {
        let instrs = vec![
            MachInstr {
                instr: Instruction::LoadImm {
                    ureg: target::ureg_r(0),
                    value: 42,
                },
                reloc: None,
            },
            MachInstr {
                instr: Instruction::Return {
                    interrupt: false,
                    cond: target::COND_TRUE,
                    delayed: false,
                    lr: false,
                    compute: None,
                },
                reloc: None,
            },
        ];
        let (out, spills, _) = allocate(&instrs, 0, false);
        assert_eq!(spills, 0);
        // Should still have a LoadImm and Return.
        assert!(out.iter().any(|m| matches!(m.instr, Instruction::LoadImm { .. })));
        assert!(out.iter().any(|m| matches!(m.instr, Instruction::Return { .. })));
    }

    #[test]
    fn allocate_maps_vregs() {
        // Two vregs added then summed.
        let instrs = vec![
            MachInstr {
                instr: Instruction::LoadImm {
                    ureg: target::ureg_r(0),
                    value: 1,
                },
                reloc: None,
            },
            MachInstr {
                instr: Instruction::LoadImm {
                    ureg: target::ureg_r(1),
                    value: 2,
                },
                reloc: None,
            },
            MachInstr {
                instr: Instruction::Compute {
                    cond: target::COND_TRUE,
                    compute: ComputeOp::Alu(AluOp::Add { rn: 2, rx: 0, ry: 1 }),
                },
                reloc: None,
            },
            MachInstr {
                instr: Instruction::Return {
                    interrupt: false,
                    cond: target::COND_TRUE,
                    delayed: false,
                    lr: false,
                    compute: None,
                },
                reloc: None,
            },
        ];
        let (out, _, _) = allocate(&instrs, 0, false);
        // Verify all registers in the Add are in 0-15 range.
        for mi in &out {
            if let Instruction::Compute {
                compute: ComputeOp::Alu(AluOp::Add { rn, rx, ry }),
                ..
            } = mi.instr
            {
                assert!(rn < target::NUM_REGS);
                assert!(rx < target::NUM_REGS);
                assert!(ry < target::NUM_REGS);
            }
        }
    }

    #[test]
    fn prefer_caller_saved_registers() {
        // Allocate several vregs and verify that caller-saved registers
        // (R0-R7) are used before any callee-saved register (R8-R15).
        let mut instrs = Vec::new();
        for i in 0..9u8 {
            instrs.push(MachInstr {
                instr: Instruction::LoadImm {
                    ureg: target::ureg_r(i),
                    value: i as u32,
                },
                reloc: None,
            });
        }
        instrs.push(MachInstr {
            instr: Instruction::Return {
                interrupt: false,
                cond: target::COND_TRUE,
                delayed: false,
                lr: false,
                compute: None,
            },
            reloc: None,
        });
        let (out, _, _) = allocate(&instrs, 0, false);
        // Collect the physical registers assigned to LoadImm instructions.
        let mut assigned = Vec::new();
        for mi in &out {
            if let Instruction::LoadImm { ureg, .. } = mi.instr {
                let group = ureg >> 4;
                if group == 0 {
                    assigned.push(ureg & 0xF);
                }
            }
        }
        // With 9 simultaneously live vregs and 7 caller-saved
        // registers (R0-R1, R3-R7; R2 reserved), at most 7 can land
        // in the caller-saved pool. The majority should be caller-saved.
        let caller_set: std::collections::HashSet<u8> =
            target::CALLER_SAVED.iter().copied().collect();
        let n_caller = assigned.iter().filter(|r| caller_set.contains(r)).count();
        let n_callee = assigned.iter().filter(|r| !caller_set.contains(r)).count();
        assert!(
            n_caller >= n_callee,
            "expected more caller-saved than callee-saved, got {n_caller} vs {n_callee}"
        );
    }
}
