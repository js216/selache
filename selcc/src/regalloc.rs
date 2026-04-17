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

use std::collections::{HashMap, HashSet};

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
pub fn allocate(instrs: &[MachInstr], num_params: u8) -> (Vec<MachInstr>, u32, Vec<usize>) {
    let mut alloc = Allocator::new(num_params);
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
    vreg_to_phys: HashMap<u8, u8>,
    /// Reverse: physical register to virtual register.
    phys_to_vreg: HashMap<u8, u8>,
    /// Physical registers that must not be evicted. Vreg 0 is always in
    /// this set and pinned to physical R0, so that both the call-return
    /// reload (`dst = PASS R0`) and the function-return move
    /// (`R0 = PASS retval`) emitted by isel resolve to the ABI return
    /// register instead of whatever register vreg 0 happens to land on
    /// after the allocator evicts it.
    pinned: HashSet<u8>,
    /// Physical registers pinned for the duration of the current mach
    /// instruction's rewrite. Cleared at the start of every `rewrite`
    /// call. This prevents a later operand lookup inside the same op
    /// from evicting an earlier operand's physical register, which
    /// would silently miscompile the op at high register pressure.
    transient_pins: Vec<u8>,
    /// Round-robin index within the caller-saved range for eviction.
    next_evict: u8,
    /// Number of spill stack slots allocated.
    spill_slots: u32,
    /// Spill map: virtual register -> spill slot offset.
    spill_map: HashMap<u8, u32>,
}

impl Allocator {
    fn new(num_params: u8) -> Self {
        let mut vreg_to_phys = HashMap::new();
        let mut phys_to_vreg = HashMap::new();
        let mut pinned = HashSet::new();
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
        Self {
            vreg_to_phys,
            phys_to_vreg,
            pinned,
            transient_pins: Vec::new(),
            next_evict: 0,
            spill_slots: 0,
            spill_map: HashMap::new(),
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
    /// Before a CJump, spill all live vregs in caller-saved registers
    /// to the stack frame. After the call returns, any subsequent use
    /// of those vregs will trigger a reload from the spill slot via
    /// the normal get_phys → emit_reload path.
    fn spill_caller_saved(&mut self, spill: &mut Vec<MachInstr>) {
        let to_spill: Vec<(u8, u8)> = self.vreg_to_phys.iter()
            .filter(|(&vreg, &phys)| {
                target::CALLER_SAVED.contains(&phys)
                    && vreg != target::RETURN_REG_VREG
            })
            .map(|(&vreg, &phys)| (vreg, phys))
            .collect();

        for (vreg, phys) in to_spill {
            // Allocate a spill slot if not already spilled.
            let slot = *self.spill_map.entry(vreg).or_insert_with(|| {
                let s = self.spill_slots;
                self.spill_slots += 1;
                s
            });
            // Store to the spill slot.
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

    /// Release all transient pins taken during the current rewrite.
    fn clear_transient_pins(&mut self) {
        for p in self.transient_pins.drain(..) {
            self.pinned.remove(&p);
        }
    }

    /// Emit a spill reload instruction for `vreg` into `phys`, if it was
    /// previously spilled.
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

        // Emit store of evicted register.
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
            let candidate = self.next_evict;
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
                // I-register LoadImm instructions (for global access)
                // carry a relocation and target a DAG I-register, not
                // a data register vreg. Pass them through unchanged.
                // All other LoadImm instructions carry raw vreg numbers
                // that must be mapped to physical R-group registers.
                if mi.reloc.is_some() && ureg >= 0x10 {
                    mi.instr
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
                // Map R-group vregs to physical registers.
                let new_dest = if (dest >> 4) == 0 {
                    target::ureg_r(self.get_phys(dest & 0xF, &mut spill_pre))
                } else {
                    dest
                };
                let new_src = if (src >> 4) == 0 {
                    target::ureg_r(self.get_phys(src & 0xF, &mut spill_pre))
                } else {
                    src
                };
                Instruction::URegMove { dest: new_dest, src: new_src }
            }

            Instruction::CJump { .. } => {
                // A call clobbers all caller-saved registers (R0-R7).
                // Spill any live vregs in those registers to the stack
                // so they can be reloaded after the call returns.
                self.spill_caller_saved(&mut spill_pre);
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
            | Instruction::IndirectBranch { .. }
            | Instruction::BitOp { .. }
            | Instruction::StackOp { .. }
            | Instruction::UregDagMove { .. }
            | Instruction::DagModify { .. }
            | Instruction::RegisterSwap { .. }
            | Instruction::ImmShift { .. }
            | Instruction::ImmStore { .. }
            | Instruction::DoUntil { .. } => mi.instr,

            Instruction::UregAbsAccess { pm, write, ureg, addr } => {
                if ureg < 0x10 {
                    let phys = self.get_phys(ureg, &mut spill_pre);
                    Instruction::UregAbsAccess {
                        pm, write,
                        ureg: target::ureg_r(phys),
                        addr,
                    }
                } else {
                    mi.instr
                }
            }

            Instruction::UregMemAccess { pm, i_reg, write, lw, ureg, offset } => {
                // The ureg field carries a raw vreg from isel. Map it
                // to a physical register the same way ComputeLoadStore
                // handles dreg.
                if ureg < 0x10 {
                    let phys = self.get_phys(ureg, &mut spill_pre);
                    Instruction::UregMemAccess {
                        pm, i_reg, write, lw,
                        ureg: target::ureg_r(phys),
                        offset,
                    }
                } else {
                    mi.instr
                }
            }

            Instruction::UregTransfer { src_ureg, dst_ureg, compute } => {
                let new_compute = compute
                    .map(|c| self.rewrite_compute(&c, &mut spill_pre));
                // Rewrite src/dst if they are in the R-register group (0x0n).
                let new_src = if (src_ureg >> 4) == 0 {
                    target::ureg_r(self.get_phys(src_ureg & 0xF, &mut spill_pre))
                } else {
                    src_ureg
                };
                let new_dst = if (dst_ureg >> 4) == 0 {
                    target::ureg_r(self.get_phys(dst_ureg & 0xF, &mut spill_pre))
                } else {
                    dst_ureg
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
                    Pass {
                        rn: rn & 0x0F,
                        rx: self.get_phys(rx, spill),
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
        let (out, spills, _) = allocate(&instrs, 0);
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
        let (out, _, _) = allocate(&instrs, 0);
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
        let (out, _, _) = allocate(&instrs, 0);
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
        // R0 is pinned to the return-value pseudo-vreg, so only
        // R1-R7 (7 registers) are available in the caller-saved
        // pool. The first 7 allocations should all land there, and
        // any further vreg has to fall through to callee-saved.
        for &r in &assigned[..7.min(assigned.len())] {
            assert!(
                (1..=7).contains(&r),
                "expected caller-saved (R1-R7), got R{r}"
            );
        }
        if assigned.len() > 7 {
            assert!(
                assigned[7] >= 8,
                "expected callee-saved for 8th vreg, got R{}",
                assigned[7]
            );
        }
    }
}
