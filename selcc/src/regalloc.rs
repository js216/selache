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

use std::collections::HashMap;

use crate::mach::MachInstr;
use crate::target;

use selelf::encode::{
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
pub fn allocate(instrs: &[MachInstr], num_params: u8) -> (Vec<MachInstr>, u32) {
    let mut alloc = Allocator::new(num_params);
    let mut out = Vec::new();

    for mi in instrs {
        alloc.rewrite(mi, &mut out);
    }

    (out, alloc.spill_slots)
}

struct Allocator {
    /// Mapping from virtual register to physical register.
    vreg_to_phys: HashMap<u8, u8>,
    /// Reverse: physical register to virtual register.
    phys_to_vreg: HashMap<u8, u8>,
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
        // Pin parameter vregs to their ABI registers (R0..R(n-1)).
        for i in 0..num_params.min(target::NUM_REGS) {
            vreg_to_phys.insert(i, i);
            phys_to_vreg.insert(i, i);
        }
        Self {
            vreg_to_phys,
            phys_to_vreg,
            next_evict: 0,
            spill_slots: 0,
            spill_map: HashMap::new(),
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
    fn get_phys(&mut self, vreg: u8, spill_instrs: &mut Vec<MachInstr>) -> u8 {
        if let Some(&phys) = self.vreg_to_phys.get(&vreg) {
            return phys;
        }

        // Try caller-saved registers first (R0-R7).
        for &candidate in target::CALLER_SAVED {
            if !self.phys_to_vreg.contains_key(&candidate) {
                self.vreg_to_phys.insert(vreg, candidate);
                self.phys_to_vreg.insert(candidate, vreg);
                self.emit_reload(vreg, candidate, spill_instrs);
                return candidate;
            }
        }

        // Then try callee-saved registers (R8-R15).
        for &candidate in target::CALLEE_SAVED {
            if !self.phys_to_vreg.contains_key(&candidate) {
                self.vreg_to_phys.insert(vreg, candidate);
                self.phys_to_vreg.insert(candidate, vreg);
                self.emit_reload(vreg, candidate, spill_instrs);
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

        evict_phys
    }

    /// Pick a physical register to evict.  Prefer caller-saved registers
    /// (R0-R7) since evicting them is cheaper (no prologue/epilogue cost).
    /// Uses round-robin within the caller-saved group for fairness.
    fn pick_evict_candidate(&mut self) -> u8 {
        let n_caller = target::CALLER_SAVED.len() as u8;
        let start = self.next_evict;
        loop {
            let candidate = self.next_evict;
            self.next_evict = (self.next_evict + 1) % n_caller;
            if self.phys_to_vreg.contains_key(&candidate) {
                return candidate;
            }
            if self.next_evict == start {
                break;
            }
        }
        // Fallback: scan all registers for an occupied one.
        for i in 0..target::NUM_REGS {
            if self.phys_to_vreg.contains_key(&i) {
                return i;
            }
        }
        0
    }

    fn rewrite(&mut self, mi: &MachInstr, out: &mut Vec<MachInstr>) {
        let mut spill_pre = Vec::new();

        let new_instr = match mi.instr {
            Instruction::LoadImm { ureg, value } => {
                // ureg encodes the target register. For R-group (0x0n),
                // map the low nibble through the allocator.
                let group = ureg >> 4;
                if group == 0 {
                    let vreg = ureg & 0xF;
                    let phys = self.get_phys(vreg, &mut spill_pre);
                    Instruction::LoadImm {
                        ureg: target::ureg_r(phys),
                        value,
                    }
                } else {
                    mi.instr
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

            Instruction::Nop
            | Instruction::Idle
            | Instruction::EmuIdle
            | Instruction::Sync
            | Instruction::DoLoop { .. }
            | Instruction::DualMove { .. }
            | Instruction::Modify { .. }
            | Instruction::IndirectBranch { .. }
            | Instruction::BitOp { .. }
            | Instruction::StackOp { .. }
            | Instruction::CJump { .. }
            | Instruction::UregDagMove { .. }
            | Instruction::DagModify { .. }
            | Instruction::RegisterSwap { .. }
            | Instruction::ImmShift { .. }
            | Instruction::UregAbsAccess { .. }
            | Instruction::DmImmStore { .. }
            | Instruction::DoUntil { .. }
            | Instruction::UregMemAccess { .. } => mi.instr,

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
        alu: &selelf::encode::AluOp,
        spill: &mut Vec<MachInstr>,
    ) -> AluOp {
        use selelf::encode::AluOp::*;
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
            Pass { rn, rx } => Pass {
                rn: self.get_phys(rn, spill),
                rx: self.get_phys(rx, spill),
            },
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
        mul: &selelf::encode::MulOp,
        spill: &mut Vec<MachInstr>,
    ) -> selelf::encode::MulOp {
        use selelf::encode::MulOp::*;
        match *mul {
            MulSsf { rn, rx, ry } => MulSsf {
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
        shift: &selelf::encode::ShiftOp,
        spill: &mut Vec<MachInstr>,
    ) -> ShiftOp {
        use selelf::encode::ShiftOp::*;
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
        let (out, spills) = allocate(&instrs, 0);
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
        let (out, _) = allocate(&instrs, 0);
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
        let (out, _) = allocate(&instrs, 0);
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
        // First 8 should all be caller-saved (0-7), only the 9th
        // should be callee-saved (8+).
        for &r in &assigned[..8.min(assigned.len())] {
            assert!(r < 8, "expected caller-saved, got R{r}");
        }
        if assigned.len() > 8 {
            assert!(assigned[8] >= 8, "expected callee-saved for 9th vreg");
        }
    }
}
