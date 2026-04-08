// SPDX-License-Identifier: GPL-3.0
// isel.rs --- Instruction selection: IR to SHARC+ machine instructions
// Copyright (c) 2026 Jakob Kastelic

//! Instruction selection: IR to SHARC+ machine instructions.
//!
//! Converts each [`IrOp`] into one or more [`MachInstr`]s using the
//! `selelf::encode` instruction types. Virtual register numbers are
//! passed through verbatim -- the register allocator resolves them later.

use crate::ir::{Cond, IrOp, Label, VReg};
use crate::mach::{MachInstr, Reloc, RelocKind};
use crate::target;

use selelf::encode::{
    AluOp, BranchTarget, ComputeOp, FaluOp, Instruction, MemAccess, MemWidth, MulOp, ShiftOp,
};

/// Result of instruction selection for one function.
pub struct IselResult {
    /// Machine instructions with virtual register references.
    pub instrs: Vec<MachInstr>,
    /// Map from IR label to instruction index in `instrs`.
    pub label_positions: Vec<(Label, usize)>,
}

/// Select instructions for a list of IR ops.
///
/// Virtual register numbers are preserved as physical register indices;
/// the register allocator will rewrite them to valid physical registers.
pub fn select(ir: &[IrOp]) -> IselResult {
    let mut instrs = Vec::new();
    let mut label_positions = Vec::new();

    for op in ir {
        match op {
            IrOp::LoadImm(dst, val) => {
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(*dst as u8),
                        value: *val as u32,
                    },
                    reloc: None,
                });
            }

            IrOp::Copy(dst, src) => {
                // PASS Rx -> Rn
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Pass {
                            rn: *dst as u8,
                            rx: *src as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Add(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Add {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Sub(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Sub {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Mul(dst, lhs, rhs) => {
                // Use integer multiply: Rn = Rx * Ry (SSF)
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(selelf::encode::MulOp::MulSsf {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Div(dst, lhs, rhs) => {
                // Integer division via runtime call to ___div32.
                if *lhs as u8 != 0 {
                    instrs.push(MachInstr::compute_pass(0, *lhs as u8));
                }
                if *rhs as u8 != 1 {
                    instrs.push(MachInstr::compute_pass(1, *rhs as u8));
                }
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: true,
                        cond: target::COND_TRUE,
                        delayed: false,
                        target: BranchTarget::Absolute(0),
                    },
                    reloc: Some(Reloc {
                        symbol: "___div32".to_string(),
                        kind: RelocKind::Addr24,
                    }),
                });
                if *dst as u8 != 0 {
                    instrs.push(MachInstr::compute_pass(*dst as u8, 0));
                }
            }

            IrOp::Mod(dst, lhs, rhs) => {
                // Integer modulo via runtime call to ___mod32.
                if *lhs as u8 != 0 {
                    instrs.push(MachInstr::compute_pass(0, *lhs as u8));
                }
                if *rhs as u8 != 1 {
                    instrs.push(MachInstr::compute_pass(1, *rhs as u8));
                }
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: true,
                        cond: target::COND_TRUE,
                        delayed: false,
                        target: BranchTarget::Absolute(0),
                    },
                    reloc: Some(Reloc {
                        symbol: "___mod32".to_string(),
                        kind: RelocKind::Addr24,
                    }),
                });
                if *dst as u8 != 0 {
                    instrs.push(MachInstr::compute_pass(*dst as u8, 0));
                }
            }

            IrOp::BitAnd(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::And {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::BitOr(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Or {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::BitXor(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Xor {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Shl(dst, lhs, rhs) => {
                // LSHIFT Rx BY Ry -> Rn
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Shift(ShiftOp::Lshift {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Shr(dst, lhs, rhs) => {
                // ASHIFT (arithmetic right shift) with negated count
                // would be needed, but for simplicity use ASHIFT directly.
                // The caller is responsible for putting a negative shift
                // amount in rhs for right shift. We use ASHIFT Rx BY Ry.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Shift(ShiftOp::Ashift {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Neg(dst, src) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Neg {
                            rn: *dst as u8,
                            rx: *src as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::BitNot(dst, src) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Not {
                            rn: *dst as u8,
                            rx: *src as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Cmp(lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Comp {
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Ret(val) => {
                // If returning a value not already in R0, move it there.
                if let Some(vreg) = val {
                    if *vreg != target::RETURN_REG as VReg {
                        instrs.push(MachInstr {
                            instr: Instruction::Compute {
                                cond: target::COND_TRUE,
                                compute: ComputeOp::Alu(AluOp::Pass {
                                    rn: target::RETURN_REG,
                                    rx: *vreg as u8,
                                }),
                            },
                            reloc: None,
                        });
                    }
                }
                instrs.push(MachInstr {
                    instr: Instruction::Return {
                        interrupt: false,
                        cond: target::COND_TRUE,
                        compute: None,
                    },
                    reloc: None,
                });
            }

            IrOp::Call(dst, name, args) => {
                // Stack arguments (args 4+): push in reverse order.
                for (i, arg) in args.iter().enumerate().rev() {
                    if i >= target::ARG_REGS.len() {
                        let stack_offset = (i - target::ARG_REGS.len()) as i8;
                        instrs.push(MachInstr {
                            instr: Instruction::ComputeLoadStore {
                                compute: None,
                                access: MemAccess {
                                    pm: false,
                                    write: true,
                                    i_reg: target::STACK_PTR,
                                },
                                dreg: *arg as u8,
                                offset: stack_offset,
                                cond: target::COND_TRUE,
                            },
                            reloc: None,
                        });
                    }
                }
                // Register arguments (args 0-3).
                for (i, arg) in args.iter().enumerate() {
                    if i >= target::ARG_REGS.len() {
                        break;
                    }
                    let phys = target::ARG_REGS[i];
                    if *arg as u8 != phys {
                        instrs.push(MachInstr::compute_pass(phys, *arg as u8));
                    }
                }
                // CALL target (absolute, to be relocated).
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: true,
                        cond: target::COND_TRUE,
                        delayed: false,
                        target: BranchTarget::Absolute(0),
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                // Result in R0.
                if *dst as u8 != target::RETURN_REG {
                    instrs.push(MachInstr::compute_pass(*dst as u8, target::RETURN_REG));
                }
            }

            IrOp::CallIndirect(dst, addr, args) => {
                // Indirect call through function pointer.
                // Transfer the function address from a data register to
                // PM I12 by storing through DM(I4) and loading into I12,
                // set M12 = 0, then emit CALL (I12, M12).

                // Stack arguments (args 4+): push in reverse order.
                for (i, arg) in args.iter().enumerate().rev() {
                    if i >= target::ARG_REGS.len() {
                        let stack_offset = (i - target::ARG_REGS.len()) as i8;
                        instrs.push(MachInstr {
                            instr: Instruction::ComputeLoadStore {
                                compute: None,
                                access: MemAccess {
                                    pm: false,
                                    write: true,
                                    i_reg: target::STACK_PTR,
                                },
                                dreg: *arg as u8,
                                offset: stack_offset,
                                cond: target::COND_TRUE,
                            },
                            reloc: None,
                        });
                    }
                }
                // Register arguments (args 0-3).
                for (i, arg) in args.iter().enumerate() {
                    if i >= target::ARG_REGS.len() {
                        break;
                    }
                    let phys = target::ARG_REGS[i];
                    if *arg as u8 != phys {
                        instrs.push(MachInstr::compute_pass(phys, *arg as u8));
                    }
                }
                // Load address into I12 for the indirect call.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_i(12),
                        value: *addr,
                    },
                    reloc: None,
                });
                // M12 = 0 (no post-modify). M-register ureg: 0x20 + (12 - 8) = 0x24.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: 0x24,
                        value: 0,
                    },
                    reloc: None,
                });
                // CALL (I12, M12)
                instrs.push(MachInstr {
                    instr: Instruction::IndirectBranch {
                        call: true,
                        cond: target::COND_TRUE,
                        pm_i: target::INDIRECT_CALL_PMI,
                        pm_m: target::INDIRECT_CALL_PMM,
                        delayed: false,
                        compute: None,
                    },
                    reloc: None,
                });
                // Result in R0.
                if *dst as u8 != target::RETURN_REG {
                    instrs.push(MachInstr::compute_pass(*dst as u8, target::RETURN_REG));
                }
            }

            IrOp::Branch(label) => {
                // PC-relative jump, offset resolved later.
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: false,
                        cond: target::COND_TRUE,
                        delayed: false,
                        target: BranchTarget::PcRelative(*label as i32),
                    },
                    reloc: None,
                });
            }

            IrOp::BranchCond(cond, label) => {
                let cond_code = ir_cond_to_sharc(*cond);
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: false,
                        cond: cond_code,
                        delayed: false,
                        target: BranchTarget::PcRelative(*label as i32),
                    },
                    reloc: None,
                });
            }

            IrOp::Label(label) => {
                label_positions.push((*label, instrs.len()));
            }

            IrOp::Load(dst, base, offset) => {
                if *base == 0 {
                    // Frame-relative load: DM(I6 + offset) -> dreg.
                    // The offset field carries the frame slot index directly.
                    // The emit pass will adjust by the callee-saved reserve.
                    let frame_offset = -*offset - 1;
                    emit_frame_access(
                        &mut instrs,
                        frame_offset,
                        *dst as u8,
                        false, // read
                    );
                } else {
                    // Indirect load through pointer in a data register.
                    emit_indirect_access(&mut instrs, *base as u8, *dst as u8, *offset as i8, false);
                }
            }

            IrOp::Store(val, base, offset) => {
                if *base == 0 {
                    // Frame-relative store: dreg -> DM(I6 + offset).
                    let frame_offset = -*offset - 1;
                    emit_frame_access(
                        &mut instrs,
                        frame_offset,
                        *val as u8,
                        true, // write
                    );
                } else {
                    // Indirect store through pointer in a data register.
                    emit_indirect_access(&mut instrs, *base as u8, *val as u8, *offset as i8, true);
                }
            }

            IrOp::LoadGlobal(dst, name) => {
                // Load the address of a global symbol into a register.
                // This emits a LoadImm with a relocation against the symbol.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(*dst as u8),
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
            }

            IrOp::StoreGlobal(val, name) => {
                // Store to a global: load the address into a temporary I
                // register, then store. For now we use a simpler approach:
                // emit a LoadImm with relocation for the address, then a
                // DM write through I4 (a scratch index register).
                //
                // Step 1: Load global address into I4.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_i(target::SCRATCH_I),
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                // Step 2: Store dreg -> DM(I4 + 0).
                instrs.push(MachInstr {
                    instr: Instruction::ComputeLoadStore {
                        compute: None,
                        access: MemAccess {
                            pm: false,
                            write: true,
                            i_reg: target::SCRATCH_I,
                        },
                        dreg: *val as u8,
                        offset: 0,
                        cond: target::COND_TRUE,
                    },
                    reloc: None,
                });
            }

            IrOp::LoadString(dst, _idx) | IrOp::LoadWideString(dst, _idx) => {
                // Load address of a string literal. The linker will resolve
                // the symbol ".rodata" + offset. For now, emit a placeholder
                // LoadImm with value 0 (no relocation yet -- string addresses
                // are resolved during object emission).
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(*dst as u8),
                        value: 0,
                    },
                    reloc: None,
                });
            }

            IrOp::FAdd(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Add {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::FSub(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Sub {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::FMul(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul {
                            rn: *dst as u8,
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::FDiv(dst, lhs, rhs) => {
                // Float division via runtime call to ___divf.
                if *lhs as u8 != 0 {
                    instrs.push(MachInstr::compute_pass(0, *lhs as u8));
                }
                if *rhs as u8 != 1 {
                    instrs.push(MachInstr::compute_pass(1, *rhs as u8));
                }
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: true,
                        cond: target::COND_TRUE,
                        delayed: false,
                        target: BranchTarget::Absolute(0),
                    },
                    reloc: Some(Reloc {
                        symbol: "___divf".to_string(),
                        kind: RelocKind::Addr24,
                    }),
                });
                if *dst as u8 != 0 {
                    instrs.push(MachInstr::compute_pass(*dst as u8, 0));
                }
            }

            IrOp::FNeg(dst, src) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Neg {
                            rn: *dst as u8,
                            rx: *src as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::IntToFloat(dst, src) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Float {
                            rn: *dst as u8,
                            rx: *src as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::FloatToInt(dst, src) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Fix {
                            rn: *dst as u8,
                            rx: *src as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::HardwareLoop { count, end_label } => {
                // LCNTR = count, DO end_label UNTIL LCE.
                // The end_pc is stored as the label number; it will be
                // resolved to an absolute address during the fixup pass.
                instrs.push(MachInstr {
                    instr: Instruction::DoLoop {
                        counter: selelf::encode::LoopCounter::Immediate(*count as u16),
                        end_pc: *end_label,
                    },
                    reloc: None,
                });
            }

            IrOp::FCmp(lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Comp {
                            rx: *lhs as u8,
                            ry: *rhs as u8,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::StackSave(dst) => {
                // Rn = I7 (Type 5a universal register transfer)
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_r(*dst as u8),
                        src: target::ureg_i(target::STACK_PTR),
                    },
                    reloc: None,
                });
            }

            IrOp::StackRestore(src) => {
                // I7 = Rn
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i(target::STACK_PTR),
                        src: target::ureg_r(*src as u8),
                    },
                    reloc: None,
                });
            }

            IrOp::StackAlloc(dst, count) => {
                // Allocate `count` words on the stack (SP -= count).
                // Strategy: read I7 into Rn, subtract count, write back.
                //   Rn = I7        (UReg transfer)
                //   Rn = Rn - Ry   (ALU subtract)
                //   I7 = Rn        (UReg transfer)
                let tmp = *dst as u8;

                // Rn = I7
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_r(tmp),
                        src: target::ureg_i(target::STACK_PTR),
                    },
                    reloc: None,
                });
                // Rn = Rn - Ry
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Sub {
                            rn: tmp,
                            rx: tmp,
                            ry: *count as u8,
                        }),
                    },
                    reloc: None,
                });
                // I7 = Rn
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i(target::STACK_PTR),
                        src: target::ureg_r(tmp),
                    },
                    reloc: None,
                });
                // dst already holds the new SP (the VLA base address).
            }

            IrOp::Nop => {
                instrs.push(MachInstr {
                    instr: Instruction::Nop,
                    reloc: None,
                });
            }

            IrOp::FrameAddr(dst, offset) => {
                // Compute absolute address of a frame slot: dst = I6 + offset.
                // Temporarily modify I6 by the frame-relative offset, transfer
                // the adjusted I6 value into the destination data register,
                // then restore I6. The Modify instructions use I6 as target,
                // so adjust_frame_offsets in the emit pass will account for
                // the callee-saved shift automatically.
                let frame_offset = -*offset - 1;
                if frame_offset == 0 {
                    instrs.push(MachInstr {
                        instr: Instruction::UregTransfer {
                            src_ureg: target::ureg_i(target::FRAME_PTR),
                            dst_ureg: target::ureg_r(*dst as u8),
                            compute: None,
                        },
                        reloc: None,
                    });
                } else {
                    instrs.push(MachInstr {
                        instr: Instruction::Modify {
                            i_reg: target::FRAME_PTR,
                            value: frame_offset, width: MemWidth::Normal, },
                        reloc: None,
                    });
                    instrs.push(MachInstr {
                        instr: Instruction::UregTransfer {
                            src_ureg: target::ureg_i(target::FRAME_PTR),
                            dst_ureg: target::ureg_r(*dst as u8),
                            compute: None,
                        },
                        reloc: None,
                    });
                    instrs.push(MachInstr {
                        instr: Instruction::Modify {
                            i_reg: target::FRAME_PTR,
                            value: -frame_offset, width: MemWidth::Normal, },
                        reloc: None,
                    });
                }
            }

            // ---- 64-bit instruction selection ----
            // Each 64-bit vreg V occupies two physical registers: V (lo) and V+1 (hi).

            IrOp::LoadImm64(dst, val) => {
                let lo = *dst as u8;
                let hi = (*dst + 1) as u8;
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(lo),
                        value: *val as u32,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(hi),
                        value: (*val >> 32) as u32,
                    },
                    reloc: None,
                });
            }

            IrOp::Copy64(dst, src) => {
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let src_lo = *src as u8;
                let src_hi = (*src + 1) as u8;
                instrs.push(MachInstr::compute_pass(dst_lo, src_lo));
                instrs.push(MachInstr::compute_pass(dst_hi, src_hi));
            }

            IrOp::Add64(dst, lhs, rhs) => {
                // 64-bit add: lo = lhs_lo + rhs_lo, then
                // hi = lhs_hi + rhs_hi + carry.
                // SHARC ADD sets the carry flag (AC bit in ASTAT).
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let lhs_lo = *lhs as u8;
                let lhs_hi = (*lhs + 1) as u8;
                let rhs_lo = *rhs as u8;
                let rhs_hi = (*rhs + 1) as u8;
                // dst_lo = lhs_lo + rhs_lo (sets carry)
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Add {
                            rn: dst_lo,
                            rx: lhs_lo,
                            ry: rhs_lo,
                        }),
                    },
                    reloc: None,
                });
                // dst_hi = lhs_hi + rhs_hi + CI (add with carry-in)
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::AddCi {
                            rn: dst_hi,
                            rx: lhs_hi,
                            ry: rhs_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Sub64(dst, lhs, rhs) => {
                // 64-bit subtract: lo = lhs_lo - rhs_lo, then
                // hi = lhs_hi - rhs_hi - borrow.
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let lhs_lo = *lhs as u8;
                let lhs_hi = (*lhs + 1) as u8;
                let rhs_lo = *rhs as u8;
                let rhs_hi = (*rhs + 1) as u8;
                // dst_lo = lhs_lo - rhs_lo (sets borrow)
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Sub {
                            rn: dst_lo,
                            rx: lhs_lo,
                            ry: rhs_lo,
                        }),
                    },
                    reloc: None,
                });
                // dst_hi = lhs_hi - rhs_hi + CI - 1 (subtract with borrow)
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::SubCi {
                            rn: dst_hi,
                            rx: lhs_hi,
                            ry: rhs_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Mul64(dst, lhs, rhs) => {
                // 64-bit multiply via runtime call to ___mul64.
                // Args: R0:R1 = lhs (lo:hi), R2:R3 = rhs (lo:hi)
                // Result: R0:R1 = product (lo:hi)
                emit_runtime_call_64_binop(&mut instrs, "___mul64", *dst, *lhs, *rhs);
            }

            IrOp::Div64(dst, lhs, rhs) => {
                emit_runtime_call_64_binop(&mut instrs, "___div64", *dst, *lhs, *rhs);
            }

            IrOp::UDiv64(dst, lhs, rhs) => {
                emit_runtime_call_64_binop(&mut instrs, "___udiv64", *dst, *lhs, *rhs);
            }

            IrOp::Mod64(dst, lhs, rhs) => {
                emit_runtime_call_64_binop(&mut instrs, "___mod64", *dst, *lhs, *rhs);
            }

            IrOp::UMod64(dst, lhs, rhs) => {
                emit_runtime_call_64_binop(&mut instrs, "___umod64", *dst, *lhs, *rhs);
            }

            IrOp::BitAnd64(dst, lhs, rhs) => {
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let lhs_lo = *lhs as u8;
                let lhs_hi = (*lhs + 1) as u8;
                let rhs_lo = *rhs as u8;
                let rhs_hi = (*rhs + 1) as u8;
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::And {
                            rn: dst_lo, rx: lhs_lo, ry: rhs_lo,
                        }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::And {
                            rn: dst_hi, rx: lhs_hi, ry: rhs_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::BitOr64(dst, lhs, rhs) => {
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let lhs_lo = *lhs as u8;
                let lhs_hi = (*lhs + 1) as u8;
                let rhs_lo = *rhs as u8;
                let rhs_hi = (*rhs + 1) as u8;
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Or {
                            rn: dst_lo, rx: lhs_lo, ry: rhs_lo,
                        }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Or {
                            rn: dst_hi, rx: lhs_hi, ry: rhs_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::BitXor64(dst, lhs, rhs) => {
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let lhs_lo = *lhs as u8;
                let lhs_hi = (*lhs + 1) as u8;
                let rhs_lo = *rhs as u8;
                let rhs_hi = (*rhs + 1) as u8;
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Xor {
                            rn: dst_lo, rx: lhs_lo, ry: rhs_lo,
                        }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Xor {
                            rn: dst_hi, rx: lhs_hi, ry: rhs_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Shl64(dst, lhs, rhs) => {
                // 64-bit left shift via runtime call (shift amount in rhs lo).
                emit_runtime_call_64_binop(&mut instrs, "___shl64", *dst, *lhs, *rhs);
            }

            IrOp::Shr64(dst, lhs, rhs) => {
                // 64-bit arithmetic right shift via runtime call.
                emit_runtime_call_64_binop(&mut instrs, "___shr64", *dst, *lhs, *rhs);
            }

            IrOp::UShr64(dst, lhs, rhs) => {
                // 64-bit logical right shift via runtime call.
                emit_runtime_call_64_binop(&mut instrs, "___ushr64", *dst, *lhs, *rhs);
            }

            IrOp::Neg64(dst, src) => {
                // -x = ~x + 1 for 64-bit.
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let src_lo = *src as u8;
                let src_hi = (*src + 1) as u8;
                // NOT lo, NOT hi
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Not {
                            rn: dst_lo, rx: src_lo,
                        }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Not {
                            rn: dst_hi, rx: src_hi,
                        }),
                    },
                    reloc: None,
                });
                // Increment the 64-bit ~x by 1: dst_lo += 1 (sets carry),
                // dst_hi += 0 + carry.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Inc { rn: dst_lo, rx: dst_lo }),
                    },
                    reloc: None,
                });
                // Add carry to hi: if lo overflowed (lo was 0xFFFFFFFF),
                // carry is set and hi needs +1.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::PassCi {
                            rn: dst_hi, rx: dst_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::BitNot64(dst, src) => {
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let src_lo = *src as u8;
                let src_hi = (*src + 1) as u8;
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Not {
                            rn: dst_lo, rx: src_lo,
                        }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Not {
                            rn: dst_hi, rx: src_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Cmp64(lhs, rhs) | IrOp::UCmp64(lhs, rhs) => {
                // 64-bit compare: compare hi words first, if equal compare lo.
                // This leaves the flags set correctly for signed comparisons
                // when hi words differ, and for the lo comparison when equal.
                // We compare hi first: if hi != equal, the hi comparison
                // result determines the outcome. If hi are equal, the lo
                // comparison determines the outcome.
                let lhs_hi = (*lhs + 1) as u8;
                let rhs_hi = (*rhs + 1) as u8;
                let lhs_lo = *lhs as u8;
                let rhs_lo = *rhs as u8;
                // Compare hi words.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Comp {
                            rx: lhs_hi, ry: rhs_hi,
                        }),
                    },
                    reloc: None,
                });
                // If hi words are not equal, skip the lo comparison (the flags
                // from the hi comparison are the result). We use a conditional
                // branch over the lo compare.
                // JUMP (PC+2) IF NE  -- skip 1 instruction
                instrs.push(MachInstr {
                    instr: Instruction::Branch {
                        call: false,
                        cond: target::COND_NE,
                        delayed: false,
                        target: BranchTarget::PcRelative(2),
                    },
                    reloc: None,
                });
                // Compare lo words (only reached if hi words are equal).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::Comp {
                            rx: lhs_lo, ry: rhs_lo,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Load64(dst, base, offset) => {
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                // Load lo word at [base + offset].
                if *base == 0 {
                    // Frame-relative load: use frame access pattern.
                    let frame_offset_lo = -*offset - 1;
                    emit_frame_access(&mut instrs, frame_offset_lo, dst_lo, false);
                    let frame_offset_hi = frame_offset_lo + 1;
                    emit_frame_access(&mut instrs, frame_offset_hi, dst_hi, false);
                } else {
                    // Indirect load through base register.
                    // Transfer address from data register to I4.
                    instrs.push(MachInstr {
                        instr: Instruction::UregTransfer {
                            src_ureg: target::ureg_r(*base as u8),
                            dst_ureg: target::ureg_i(target::SCRATCH_I),
                            compute: None,
                        },
                        reloc: None,
                    });
                    // Load lo from DM(I4, offset).
                    instrs.push(MachInstr {
                        instr: Instruction::ComputeLoadStore {
                            compute: None,
                            access: MemAccess {
                                pm: false,
                                write: false,
                                i_reg: target::SCRATCH_I,
                            },
                            dreg: dst_lo,
                            offset: *offset as i8,
                            cond: target::COND_TRUE,
                        },
                        reloc: None,
                    });
                    // Load hi from DM(I4, offset+1).
                    instrs.push(MachInstr {
                        instr: Instruction::ComputeLoadStore {
                            compute: None,
                            access: MemAccess {
                                pm: false,
                                write: false,
                                i_reg: target::SCRATCH_I,
                            },
                            dreg: dst_hi,
                            offset: (*offset + 1) as i8,
                            cond: target::COND_TRUE,
                        },
                        reloc: None,
                    });
                }
            }

            IrOp::Store64(src, base, offset) => {
                let src_lo = *src as u8;
                let src_hi = (*src + 1) as u8;
                if *base == 0 {
                    // Frame-relative store.
                    let frame_offset_lo = -*offset - 1;
                    emit_frame_access(&mut instrs, frame_offset_lo, src_lo, true);
                    let frame_offset_hi = frame_offset_lo + 1;
                    emit_frame_access(&mut instrs, frame_offset_hi, src_hi, true);
                } else {
                    // Indirect store through base register.
                    // Transfer address from data register to I4.
                    instrs.push(MachInstr {
                        instr: Instruction::UregTransfer {
                            src_ureg: target::ureg_r(*base as u8),
                            dst_ureg: target::ureg_i(target::SCRATCH_I),
                            compute: None,
                        },
                        reloc: None,
                    });
                    instrs.push(MachInstr {
                        instr: Instruction::ComputeLoadStore {
                            compute: None,
                            access: MemAccess {
                                pm: false,
                                write: true,
                                i_reg: target::SCRATCH_I,
                            },
                            dreg: src_lo,
                            offset: *offset as i8,
                            cond: target::COND_TRUE,
                        },
                        reloc: None,
                    });
                    instrs.push(MachInstr {
                        instr: Instruction::ComputeLoadStore {
                            compute: None,
                            access: MemAccess {
                                pm: false,
                                write: true,
                                i_reg: target::SCRATCH_I,
                            },
                            dreg: src_hi,
                            offset: (*offset + 1) as i8,
                            cond: target::COND_TRUE,
                        },
                        reloc: None,
                    });
                }
            }

            IrOp::IntToLongLong(dst, src) => {
                // Zero-extend: lo = src, hi = 0.
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                instrs.push(MachInstr::compute_pass(dst_lo, *src as u8));
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(dst_hi),
                        value: 0,
                    },
                    reloc: None,
                });
            }

            IrOp::SExtToLongLong(dst, src) => {
                // Sign-extend: lo = src, hi = src >> 31 (arithmetic).
                let dst_lo = *dst as u8;
                let dst_hi = (*dst + 1) as u8;
                let src_r = *src as u8;
                instrs.push(MachInstr::compute_pass(dst_lo, src_r));
                // Load shift amount -31 for arithmetic right shift by 31.
                // SHARC ASHIFT uses negative values for right shift.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_r(dst_hi),
                        value: (-31_i32) as u32,
                    },
                    reloc: None,
                });
                // ASHIFT src BY dst_hi -> dst_hi
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Shift(ShiftOp::Ashift {
                            rn: dst_hi,
                            rx: src_r,
                            ry: dst_hi,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::LongLongToInt(dst, src) => {
                // Truncate: just take the lo word.
                instrs.push(MachInstr::compute_pass(*dst as u8, *src as u8));
            }
        }
    }

    IselResult {
        instrs,
        label_positions,
    }
}

/// Emit a frame-relative load or store. If the offset fits the 6-bit signed
/// range (-32..31) of the Type 4 instruction, emit a single instruction.
/// Otherwise, use a three-instruction sequence: MODIFY I6 to reach the slot,
/// access at offset 0, then MODIFY I6 back.
fn emit_frame_access(instrs: &mut Vec<MachInstr>, offset: i32, dreg: u8, write: bool) {
    if (-32..=31).contains(&offset) {
        instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: MemAccess {
                    pm: false,
                    write,
                    i_reg: target::FRAME_PTR,
                },
                dreg,
                offset: offset as i8,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });
    } else {
        // Large offset: modify + access at 0 + un-modify
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: offset, width: MemWidth::Normal, },
            reloc: None,
        });
        instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: MemAccess {
                    pm: false,
                    write,
                    i_reg: target::FRAME_PTR,
                },
                dreg,
                offset: 0,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: -offset, width: MemWidth::Normal, },
            reloc: None,
        });
    }
}

/// Emit an indirect memory access through a pointer held in a data register.
/// Transfers the pointer to I4 (scratch index register) via UregTransfer,
/// then accesses DM(I4, offset).
fn emit_indirect_access(instrs: &mut Vec<MachInstr>, base: u8, dreg: u8, offset: i8, write: bool) {
    instrs.push(MachInstr {
        instr: Instruction::UregTransfer {
            src_ureg: target::ureg_r(base),
            dst_ureg: target::ureg_i(target::SCRATCH_I),
            compute: None,
        },
        reloc: None,
    });
    instrs.push(MachInstr {
        instr: Instruction::ComputeLoadStore {
            compute: None,
            access: MemAccess {
                pm: false,
                write,
                i_reg: target::SCRATCH_I,
            },
            dreg,
            offset,
            cond: target::COND_TRUE,
        },
        reloc: None,
    });
}

/// Emit a runtime call for a 64-bit binary operation that cannot be
/// synthesized inline (multiply, divide, modulo, shifts).  The calling
/// convention places lhs in R0:R1 (lo:hi) and rhs in R2:R3 (lo:hi).
/// The result is returned in R0:R1.  After the call, the result is
/// copied to the destination vreg pair.
fn emit_runtime_call_64_binop(
    instrs: &mut Vec<MachInstr>,
    name: &str,
    dst: u32,
    lhs: u32,
    rhs: u32,
) {
    let dst_lo = dst as u8;
    let dst_hi = (dst + 1) as u8;
    let lhs_lo = lhs as u8;
    let lhs_hi = (lhs + 1) as u8;
    let rhs_lo = rhs as u8;
    let rhs_hi = (rhs + 1) as u8;
    // Move args to R0:R1 (lhs lo:hi), R2:R3 (rhs lo:hi).
    if lhs_lo != 0 {
        instrs.push(MachInstr::compute_pass(0, lhs_lo));
    }
    if lhs_hi != 1 {
        instrs.push(MachInstr::compute_pass(1, lhs_hi));
    }
    if rhs_lo != 2 {
        instrs.push(MachInstr::compute_pass(2, rhs_lo));
    }
    if rhs_hi != 3 {
        instrs.push(MachInstr::compute_pass(3, rhs_hi));
    }
    // Emit a CALL to the runtime helper (resolved by linker).
    instrs.push(MachInstr {
        instr: Instruction::Branch {
            call: true,
            cond: target::COND_TRUE,
            delayed: false,
            target: BranchTarget::Absolute(0),
        },
        reloc: Some(Reloc {
            symbol: name.to_string(),
            kind: RelocKind::Addr24,
        }),
    });
    // Copy result from R0:R1 to destination.
    if dst_lo != 0 {
        instrs.push(MachInstr::compute_pass(dst_lo, 0));
    }
    if dst_hi != 1 {
        instrs.push(MachInstr::compute_pass(dst_hi, 1));
    }
}

/// Map IR condition to SHARC condition code.
fn ir_cond_to_sharc(cond: Cond) -> u8 {
    match cond {
        Cond::Eq => target::COND_EQ,
        Cond::Ne => target::COND_NE,
        Cond::Lt => target::COND_LT,
        Cond::Ge => target::COND_GE,
        Cond::Le => target::COND_LE,
        Cond::Gt => target::COND_GT,
        Cond::NonZero => target::COND_NE,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ir::IrOp;

    #[test]
    fn select_load_imm() {
        let ir = vec![IrOp::LoadImm(0, 42), IrOp::Ret(Some(0))];
        let result = select(&ir);
        assert!(result.instrs.len() >= 2);
        match &result.instrs[0].instr {
            Instruction::LoadImm { ureg, value } => {
                assert_eq!(*ureg, target::ureg_r(0));
                assert_eq!(*value, 42);
            }
            other => panic!("expected LoadImm, got {other:?}"),
        }
    }

    #[test]
    fn select_add() {
        let ir = vec![
            IrOp::LoadImm(0, 1),
            IrOp::LoadImm(1, 2),
            IrOp::Add(2, 0, 1),
            IrOp::Ret(Some(2)),
        ];
        let result = select(&ir);
        let has_add = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Add { .. }),
                    ..
                }
            )
        });
        assert!(has_add);
    }

    #[test]
    fn select_compare() {
        let ir = vec![
            IrOp::LoadImm(0, 1),
            IrOp::LoadImm(1, 2),
            IrOp::Cmp(0, 1),
            IrOp::BranchCond(Cond::Eq, 0),
            IrOp::Label(0),
            IrOp::Ret(None),
        ];
        let result = select(&ir);
        let has_comp = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Comp { .. }),
                    ..
                }
            )
        });
        assert!(has_comp);
        let has_branch = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Branch {
                    call: false,
                    cond: target::COND_EQ,
                    ..
                }
            )
        });
        assert!(has_branch);
    }

    #[test]
    fn select_load_imm64() {
        // Load a 64-bit immediate into vreg pair (0, 1).
        let ir = vec![
            IrOp::LoadImm64(0, 0x0000_0001_0000_0002),
            IrOp::Nop,
        ];
        let result = select(&ir);
        // Should emit two LoadImm instructions: lo then hi.
        assert!(result.instrs.len() >= 2);
        match &result.instrs[0].instr {
            Instruction::LoadImm { ureg, value } => {
                assert_eq!(*ureg, target::ureg_r(0));
                assert_eq!(*value, 0x0000_0002); // lo word
            }
            other => panic!("expected LoadImm lo, got {other:?}"),
        }
        match &result.instrs[1].instr {
            Instruction::LoadImm { ureg, value } => {
                assert_eq!(*ureg, target::ureg_r(1));
                assert_eq!(*value, 0x0000_0001); // hi word
            }
            other => panic!("expected LoadImm hi, got {other:?}"),
        }
    }

    #[test]
    fn select_add64() {
        // Add64: pair(4,5) = pair(0,1) + pair(2,3)
        let ir = vec![
            IrOp::LoadImm64(0, 1),
            IrOp::LoadImm64(2, 2),
            IrOp::Add64(4, 0, 2),
            IrOp::Nop,
        ];
        let result = select(&ir);
        // Should contain an Add (lo) followed by AddCi (hi).
        let has_add_lo = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Add { rn: 4, rx: 0, ry: 2 }),
                    ..
                }
            )
        });
        assert!(has_add_lo, "missing 64-bit add lo instruction");
        let has_add_hi = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::AddCi { rn: 5, rx: 1, ry: 3 }),
                    ..
                }
            )
        });
        assert!(has_add_hi, "missing 64-bit add hi instruction");
    }

    #[test]
    fn select_sub64() {
        let ir = vec![
            IrOp::LoadImm64(0, 10),
            IrOp::LoadImm64(2, 3),
            IrOp::Sub64(4, 0, 2),
            IrOp::Nop,
        ];
        let result = select(&ir);
        let has_sub_lo = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Sub { rn: 4, rx: 0, ry: 2 }),
                    ..
                }
            )
        });
        assert!(has_sub_lo, "missing 64-bit sub lo instruction");
        let has_sub_hi = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::SubCi { rn: 5, rx: 1, ry: 3 }),
                    ..
                }
            )
        });
        assert!(has_sub_hi, "missing 64-bit sub hi instruction");
    }

    #[test]
    fn select_bitnot64() {
        let ir = vec![
            IrOp::LoadImm64(0, 0xFF),
            IrOp::BitNot64(2, 0),
            IrOp::Nop,
        ];
        let result = select(&ir);
        let not_count = result.instrs.iter().filter(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Not { .. }),
                    ..
                }
            )
        }).count();
        assert_eq!(not_count, 2, "expected two NOT instructions for BitNot64");
    }

    #[test]
    fn select_int_to_long_long() {
        // Zero-extend: lo = src, hi = 0.
        let ir = vec![
            IrOp::LoadImm(0, 42),
            IrOp::IntToLongLong(2, 0),
            IrOp::Nop,
        ];
        let result = select(&ir);
        // Should contain a PASS for lo and a LoadImm(0) for hi.
        let has_pass = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Pass { rn: 2, rx: 0 }),
                    ..
                }
            )
        });
        assert!(has_pass, "missing PASS for IntToLongLong lo");
        let has_zero_hi = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::LoadImm { ureg, value: 0 } if ureg == target::ureg_r(3)
            )
        });
        assert!(has_zero_hi, "missing zero LoadImm for IntToLongLong hi");
    }

    #[test]
    fn select_long_long_to_int() {
        // Truncate: just take lo word.
        let ir = vec![
            IrOp::LoadImm64(0, 0x1_0000_0042),
            IrOp::LongLongToInt(2, 0),
            IrOp::Nop,
        ];
        let result = select(&ir);
        let has_pass = result.instrs.iter().any(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::Pass { rn: 2, rx: 0 }),
                    ..
                }
            )
        });
        assert!(has_pass, "missing PASS for LongLongToInt truncation");
    }

    #[test]
    fn select_bitand64() {
        let ir = vec![
            IrOp::LoadImm64(0, 0xFF),
            IrOp::LoadImm64(2, 0x0F),
            IrOp::BitAnd64(4, 0, 2),
            IrOp::Nop,
        ];
        let result = select(&ir);
        let and_count = result.instrs.iter().filter(|m| {
            matches!(
                m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Alu(AluOp::And { .. }),
                    ..
                }
            )
        }).count();
        assert_eq!(and_count, 2, "expected two AND instructions for BitAnd64");
    }

    #[test]
    fn select_mul64_runtime_call() {
        let ir = vec![
            IrOp::LoadImm64(0, 3),
            IrOp::LoadImm64(2, 7),
            IrOp::Mul64(4, 0, 2),
            IrOp::Nop,
        ];
        let result = select(&ir);
        // Should contain a CALL with reloc to ___mul64.
        let has_call = result.instrs.iter().any(|m| {
            matches!(&m.instr, Instruction::Branch { call: true, .. })
                && m.reloc.as_ref().is_some_and(|r| r.symbol == "___mul64")
        });
        assert!(has_call, "missing runtime call to ___mul64");
    }
}
