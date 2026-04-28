// SPDX-License-Identifier: GPL-3.0
// isel.rs --- Instruction selection: IR to SHARC+ machine instructions
// Copyright (c) 2026 Jakob Kastelic

//! Instruction selection: IR to SHARC+ machine instructions.
//!
//! Converts each [`IrOp`] into one or more [`MachInstr`]s using the
//! `selinstr::encode` instruction types. Virtual register numbers are
//! passed through verbatim -- the register allocator resolves them later.

use crate::ir::{Cond, IrOp, Label, VReg};
use crate::mach::{MachInstr, Reloc, RelocKind};
use crate::target;

use selinstr::encode::{
    AluOp, BranchTarget, ComputeOp, FaluOp, Instruction, MemAccess, MemWidth, MulOp, ShiftOp,
};

/// Result of instruction selection for one function.
pub struct IselResult {
    /// Machine instructions with virtual register references.
    pub instrs: Vec<MachInstr>,
    /// Map from IR label to instruction index in `instrs`.
    pub label_positions: Vec<(Label, usize)>,
    /// Call-return labels: (instruction_index, label_name). Each entry
    /// marks a position immediately after a CJUMP's delay slots where
    /// the return-address ImmStore's relocation should resolve.
    pub call_return_labels: Vec<(usize, String)>,
}

/// Select instructions for a list of IR ops.
///
/// Virtual register numbers are preserved as physical register indices;
/// the register allocator will rewrite them to valid physical registers.
pub fn select(ir: &[IrOp]) -> IselResult {
    select_with_name(
        ir, "anon",
        &std::collections::HashSet::new(),
        &std::collections::HashMap::new(),
        &std::collections::HashSet::new(),
    )
}

pub fn select_with_name(
    ir: &[IrOp],
    func_name: &str,
    variadic_callees: &std::collections::HashSet<String>,
    variadic_named_counts: &std::collections::HashMap<String, usize>,
    complex_arg_callees: &std::collections::HashSet<String>,
) -> IselResult {
    let mut instrs = Vec::new();
    let mut label_positions = Vec::new();
    let mut call_return_labels: Vec<(usize, String)> = Vec::new();
    let mut call_site_counter = 0u32;

    // Reserve six scratch vregs for the inline FDiv expansion. The
    // RECIPS / Newton-Raphson / Markstein sequence uses fixed vreg
    // ids 0..5 internally as scratch slots; if any of those happens to
    // alias a live IR vreg the regalloc may map both names to the same
    // physical register and the FDiv silently overwrites the live
    // value. Picking a base above the IR's own max vreg guarantees no
    // collision with live IR-vreg ids. The vreg id space after the
    // pre-isel compression pass is capped at 0x80, so we need
    // `max_ir_vreg + 6 < 0x80`.
    let max_ir_vreg = max_ir_vreg(ir);
    let fdiv_scratch_base: u16 = {
        let base = max_ir_vreg.saturating_add(1);
        assert!(
            base + 5 < 0x8000,
            "function uses too many vregs to fit FDiv scratch slots; \
             max_ir_vreg={max_ir_vreg}",
        );
        base as u16
    };
    // Convenience: scratch_vreg(i) gives the i-th FDiv scratch vreg
    // id, replacing the old hardcoded literals 0..5.
    let s = |i: u16| -> u16 { fdiv_scratch_base + i };

    for op in ir {
        match op {
            IrOp::LoadImm(dst, val) => {
                // Store the raw vreg number in the `ureg` field. The
                // register allocator's rewrite will translate it to
                // `ureg_r(phys)` once the vreg has been mapped to a
                // physical register. Masking the vreg here (via
                // `ureg_r`, which is `& 0xF`) silently collapses
                // vregs above 15 onto their low-nibble twins and
                // desynchronises them from the un-masked 8-bit vregs
                // that other compute ops carry, which miscompiles
                // any high-pressure function.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: *dst as u16,
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
                            rn: *dst as u16,
                            rx: *src as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Mul(dst, lhs, rhs) => {
                // Signed-integer 32-bit multiply: Rn = Rx * Ry (SSI).
                // Produces the low 32 bits of the 64-bit product, which
                // matches C's `int * int` semantics (mod 2^32).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(selinstr::encode::MulOp::MulSsi {
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Div(dst, lhs, rhs) => {
                // Signed 32-bit integer divide: runtime call to
                // `___div32` (shift-and-subtract). The earlier inline
                // float-reciprocal path gave a 24-bit-mantissa answer
                // whose TRUNC rounded 100000/1000 down to 99.
                let mut ctx = CallSiteCtx {
                    func_name,
                    counter: &mut call_site_counter,
                    return_labels: &mut call_return_labels,
                };
                emit_runtime_call_32_divmod(
                    &mut instrs, "___div32", *dst, *lhs, *rhs, &mut ctx,
                );
            }

            IrOp::UDiv(dst, lhs, rhs) => {
                // Unsigned 32-bit integer divide: runtime call to
                // `___udiv32`.
                let mut ctx = CallSiteCtx {
                    func_name,
                    counter: &mut call_site_counter,
                    return_labels: &mut call_return_labels,
                };
                emit_runtime_call_32_divmod(
                    &mut instrs, "___udiv32", *dst, *lhs, *rhs, &mut ctx,
                );
            }

            IrOp::Mod(dst, lhs, rhs) => {
                // Signed 32-bit integer modulo: runtime call to
                // `___mod32`.
                let mut ctx = CallSiteCtx {
                    func_name,
                    counter: &mut call_site_counter,
                    return_labels: &mut call_return_labels,
                };
                emit_runtime_call_32_divmod(
                    &mut instrs, "___mod32", *dst, *lhs, *rhs, &mut ctx,
                );
            }

            IrOp::UMod(dst, lhs, rhs) => {
                // Unsigned 32-bit integer modulo: runtime call to
                // `___umod32`.
                let mut ctx = CallSiteCtx {
                    func_name,
                    counter: &mut call_site_counter,
                    return_labels: &mut call_return_labels,
                };
                emit_runtime_call_32_divmod(
                    &mut instrs, "___umod32", *dst, *lhs, *rhs, &mut ctx,
                );
            }

            IrOp::BitAnd(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::And {
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Shr(dst, lhs, rhs) => {
                // ASHIFT Rx BY Ry: positive Ry = left shift,
                // negative Ry = arithmetic right shift. The caller
                // (lower.rs) is responsible for ensuring rhs is
                // negative when a right shift is intended.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Shift(ShiftOp::Ashift {
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Lshr(dst, lhs, rhs) => {
                // LSHIFT Rx BY Ry: positive = left, negative = logical
                // right (zero-fill). Lower.rs negates rhs for right
                // shifts, so emitting LSHIFT here gives the unsigned
                // semantics required by C `>>` on unsigned operands.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Shift(ShiftOp::Lshift {
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *src as u16,
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
                            rn: *dst as u16,
                            rx: *src as u16,
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
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::UCmp(lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Alu(AluOp::CompU {
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::Ret(val) => {
                // Move the return value into R0 via the pinned
                // pseudo-vreg `target::RETURN_REG_VREG`, which regalloc
                // resolves to physical R0 regardless of the parameter
                // register layout.
                if let Some(vreg) = val {
                    instrs.push(MachInstr {
                        instr: Instruction::Compute {
                            cond: target::COND_TRUE,
                            compute: ComputeOp::Alu(AluOp::Pass {
                                rn: target::RETURN_REG_VREG,
                                rx: *vreg as u16,
                            }),
                        },
                        reloc: None,
                    });
                }

                // SHARC+ C-ABI return sequence. A C caller issues a
                // delayed CALL whose delay slot stores PC+2 into the
                // callee's frame at DM(M7, I6), and the callee hands
                // control back by reloading that slot into I12 and
                // doing an indirect delayed JUMP through (M14, I12).
                // A plain Type 11a RTS would pop the PC stack, which
                // the C-ABI does not push to, so a selcc-compiled
                // function that returns via RTS jumps into garbage
                // on the first return and the board hangs.
                //
                // For non-leaf functions, the prologue saves I12 into
                // frame slot DM(-2,I6) and the return sequence reads
                // it back from there instead of DM(M7,I6). This is
                // handled in emit_asm.rs (build_prologue / return
                // sequence rewrite) transparently after isel, so isel
                // always emits the leaf form here.

                // I12 = DM(M7, I6) -- reload the saved return PC into
                // the DAG2 index register that the indirect jump uses.
                // ureg 0x1C = I12 (group 1 = I registers, reg 12).
                // Tag with UREG_FIXED_TAG so regalloc passes the
                // encoding through without remapping (vregs in the
                // same numeric range would otherwise collide).
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: false,
                        ureg: target::UREG_FIXED_TAG | 0x1C,
                        i_reg: 6,
                        m_reg: 7,
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: false,
                    },
                    reloc: None,
                });
                // JUMP (M14, I12) (DB) -- indirect delayed jump
                // through the DAG2 register pair. pm_i and pm_m are
                // DAG2-relative (I8-I15, M8-M15) encoded as 0-7, so
                // I12 -> 4 and M14 -> 6.
                instrs.push(MachInstr {
                    instr: Instruction::IndirectBranch {
                        call: false,
                        cond: target::COND_TRUE,
                        pm_i: 4,
                        pm_m: 6,
                        delayed: true,
                        compute: None,
                    },
                    reloc: None,
                });
                // Delay slot 1: RFRAME pops the caller's frame pointer
                // (which the caller's delayed CALL pushed on the frame
                // stack) back into I6. Without this the caller resumes
                // execution with the callee's I6 still in place and
                // the very next frame-relative access in the caller
                // faults the core.
                instrs.push(MachInstr { instr: Instruction::Rframe, reloc: None });
                // Delay slot 2: NOP. Nothing useful to place here.
                instrs.push(MachInstr { instr: Instruction::Nop, reloc: None });
            }

            IrOp::LoadStructRetPtr(dst) => {
                // The caller passed the hidden struct-return buffer
                // pointer in R1 at entry. Copy it out through the
                // pinned `RETURN_REG_HI_VREG` (which regalloc resolves
                // to physical R1) so it survives into a data-vreg the
                // frontend can then stash in a frame slot.
                instrs.push(MachInstr::compute_pass(
                    *dst as u16,
                    target::RETURN_REG_HI_VREG,
                ));
            }

            IrOp::RetStruct { src_addr, dst_addr, num_words } => {
                // Struct-by-value return. Three cases keyed on size:
                //   nw == 1   -> R0 = mem[src_addr + 0]; return.
                //   nw == 2   -> R0 = mem[src_addr + 0];
                //                R1 = mem[src_addr + 4]; return.
                //   nw > 2    -> byte-copy nw words from src_addr to
                //                *(hidden_ret_ptr) (recorded at entry
                //                by LoadStructRetPtr + Store), then
                //                R0 = hidden_ret_ptr; return.
                //
                // For the in-register cases we read through the pinned
                // RETURN_REG_VREG / RETURN_REG_HI_VREG pseudo-vregs so
                // regalloc resolves the destination to the physical
                // R0/R1 pair the caller reads back from.
                if *num_words <= target::STRUCT_RET_MAX_REGS {
                    // Load word 0 into R0 (ureg_r = 0 -> RETURN_REG_VREG).
                    emit_indirect_access(
                        &mut instrs,
                        *src_addr as u16,
                        target::RETURN_REG_VREG,
                        0,
                        false,
                    );
                    if *num_words == 2 {
                        emit_indirect_access(
                            &mut instrs,
                            *src_addr as u16,
                            target::RETURN_REG_HI_VREG,
                            4,
                            false,
                        );
                    }
                } else {
                    // Large struct: the frontend reloaded the hidden
                    // struct-return pointer (originally passed by the
                    // caller in R1) from its saved frame slot into
                    // `dst_addr` just before emitting this IR op.
                    // Copy the `num_words` words through that pointer
                    // into the caller's buffer, then set R0 = dst_addr
                    // per the ABI so the caller can chain-reuse it.
                    let dst_vreg = dst_addr
                        .expect("RetStruct nw > STRUCT_RET_MAX_REGS without dst_addr");
                    for w in 0..*num_words {
                        let byte_off = (w * 4) as i8;
                        // scratch vreg held in R0 transiently; the
                        // final R0 = dst_vreg pass overwrites it.
                        emit_indirect_access(
                            &mut instrs,
                            *src_addr as u16,
                            target::RETURN_REG_VREG,
                            byte_off,
                            false,
                        );
                        emit_indirect_access(
                            &mut instrs,
                            dst_vreg as u16,
                            target::RETURN_REG_VREG,
                            byte_off,
                            true,
                        );
                    }
                    instrs.push(MachInstr::compute_pass(
                        target::RETURN_REG_VREG,
                        dst_vreg as u16,
                    ));
                }

                // Reuse the normal return sequence: I12 = DM(M7,I6);
                // JUMP (M14,I12) (DB); RFRAME; NOP. This matches the
                // non-struct `IrOp::Ret` path above verbatim.
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: false,
                        ureg: target::UREG_FIXED_TAG | 0x1C,
                        i_reg: 6,
                        m_reg: 7,
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: false,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::IndirectBranch {
                        call: false,
                        cond: target::COND_TRUE,
                        pm_i: 4,
                        pm_m: 6,
                        delayed: true,
                        compute: None,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr { instr: Instruction::Rframe, reloc: None });
                instrs.push(MachInstr { instr: Instruction::Nop, reloc: None });
            }

            IrOp::Call(dst, name, args) => {
                let is_variadic = variadic_callees.contains(name);
                let is_complex_args = complex_arg_callees.contains(name);
                if is_variadic || is_complex_args {
                    // SHARC+ variadic call ABI: the *last* named
                    // argument (and every variadic argument after
                    // it) is always pushed on the caller's stack so
                    // the callee has a fixed anchor for the va_list.
                    // The first
                    // `target::variadic_reg_named(named)` *preceding*
                    // named args fit into `ARG_REGS`; any beyond
                    // that overflow onto the stack as well. The
                    // number of named args comes from the callee's
                    // signature recorded in `variadic_named_counts`;
                    // when missing (e.g. an unknown extern), fall
                    // back to treating the entire arg list as named
                    // so the call still lays out a valid stack-only
                    // sequence. Pushes happen in reverse so that the
                    // lowest-indexed stack-passed arg ends up at the
                    // lowest address; CJUMP(DB) then captures
                    // I6 = I7 right after the pushes (before the
                    // delay-slot pushes of R2 and the return
                    // address), so in the callee's view stack-arg
                    // `k` lives at `DM(I6 + k + 1)`.
                    // For reference-ABI complex-arg callees, every arg goes on
                    // the stack (the convention pushes both halves of
                    // each `_Complex` value, plus any other params,
                    // onto the caller's frame instead of using the
                    // ARG_REGS path). For variadic callees we use the
                    // existing named-count rule.
                    let reg_count = if is_complex_args {
                        0
                    } else {
                        let named = variadic_named_counts.get(name)
                            .copied().unwrap_or(args.len());
                        target::variadic_reg_named(named)
                    };
                    for (i, arg) in args.iter().enumerate().rev() {
                        if i >= reg_count {
                            instrs.push(MachInstr {
                                instr: Instruction::UregDagMove {
                                    pm: false,
                                    write: true,
                                    ureg: *arg as u16,
                                    i_reg: target::STACK_PTR,
                                    m_reg: 7, // M7 = -1
                                    cond: target::COND_TRUE,
                                    compute: None,
                                    post_modify: true,
                                },
                                reloc: None,
                            });
                        }
                    }
                    for (i, arg) in args.iter().enumerate() {
                        if i >= reg_count {
                            break;
                        }
                        let phys = target::ARG_REGS[i];
                        instrs.push(MachInstr::compute_pass(
                            0xC000u16 | phys as u16, *arg as u16));
                    }
                } else {
                    // Stack arguments (args ARG_REGS.len()+): push in
                    // reverse order via post-modify `DM(I7, M7) = Rn`
                    // (store at DM(I7), then I7 -= 1 through M7 = -1).
                    // After the last push, I7 sits just below arg 0 of
                    // the stack-passed region; CJUMP(DB) then captures
                    // I6 = I7 at that point, so in the callee's view
                    // arg `k` (k = i - ARG_REGS.len()) lives at
                    // DM(I6 + k + 1). A fixed-offset write through
                    // `DM(I7 + k)` without decrementing I7 leaves the
                    // stored args in the range CJUMP's own delay-slot
                    // pushes (R2 link and return address) overwrite,
                    // silently trampling the first stack-passed arg.
                    for (i, arg) in args.iter().enumerate().rev() {
                        if i >= target::ARG_REGS.len() {
                            instrs.push(MachInstr {
                                instr: Instruction::UregDagMove {
                                    pm: false,
                                    write: true,
                                    ureg: *arg as u16,
                                    i_reg: target::STACK_PTR,
                                    m_reg: 7, // M7 = -1
                                    cond: target::COND_TRUE,
                                    compute: None,
                                    post_modify: true,
                                },
                                reloc: None,
                            });
                        }
                    }
                    // Register arguments: use forced-physical markers
                    // (0x80 | phys) so regalloc knows not to remap the
                    // destination. The source vreg IS remapped normally.
                    for (i, arg) in args.iter().enumerate() {
                        if i >= target::ARG_REGS.len() {
                            break;
                        }
                        let phys = target::ARG_REGS[i];
                        instrs.push(MachInstr::compute_pass(0xC000u16 | phys as u16, *arg as u16));
                    }
                }
                // CJUMP (DB) target: the SHARC+ C-ABI call. The two
                // delay slots execute before the branch takes effect:
                //   slot 1: DM(I7,M7) = R2  — push R2 onto frame stack
                //           (I7 post-decrements by M7 = -1)
                //   slot 2: DM(I7,M7) = return_addr — push the return
                //           address (I7 decrements again)
                // The callee reads the return address back with
                // `I12 = DM(M7,I6)` where I6 = old I7 after RFRAME.
                instrs.push(MachInstr {
                    instr: Instruction::CJump {
                        addr: 0,
                        delayed: true,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                // Delay slot 1: DM(I7, M7) = R2 (push R2).
                // R2 is a fixed physical register (the frame link slot
                // for the SHARC+ CJUMP convention); tag with
                // UREG_FIXED_TAG so regalloc passes it through as the
                // bare R2 encoding instead of treating `2` as a vreg id.
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: true,
                        ureg: target::UREG_FIXED_TAG | target::ureg_r(2),
                        i_reg: target::STACK_PTR,
                        m_reg: 7, // M7
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: true,
                    },
                    reloc: None,
                });
                // Delay slot 2: DM(I7, M7) = return_label (push PC).
                // The return label is the instruction immediately after
                // these delay slots; emit_asm will insert a synthetic
                // label and resolve it via relocation.
                let ret_label_name = format!(".L_ret_{}_{}_{}", func_name, name, call_site_counter);
                call_site_counter += 1;
                instrs.push(MachInstr {
                    instr: Instruction::ImmStore {
                        pm: false,
                        i_reg: target::STACK_PTR,
                        m_reg: 7,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: ret_label_name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                // Mark the instruction after the delay slots with the
                // return label so selas can resolve the relocation.
                call_return_labels.push((instrs.len(), ret_label_name));
                // Result in R0. Use the pinned `RETURN_REG_VREG`
                // as the source so regalloc reads physical R0 (where
                // the callee placed the value) instead of whatever
                // vreg happens to have the number `RETURN_REG` in it.
                instrs.push(MachInstr::compute_pass(
                    *dst as u16,
                    target::RETURN_REG_VREG,
                ));
            }

            IrOp::CallIndirect(dst, addr, args) => {
                // Indirect call through a function pointer held in a
                // data-register vreg. SHARC+ has no single-instruction
                // indirect CJUMP, so this path open-codes the frame-link
                // magic that CJUMP performs implicitly for direct calls:
                // save I6 into R2, set I6 = I7 (new frame pointer), then
                // issue a delayed `JUMP (M13, I12) (DB)` with two delay
                // slots that push R2 and the return-address-minus-one,
                // matching exactly what the callee's prologue/epilogue
                // (`RFRAME`, `I12 = DM(M7,I6); JUMP (M14,I12) (DB)`)
                // expects on the frame stack. M13 is initialized to 0
                // by startup.s so the post-modify of I12 through M13
                // leaves the address-generator in a defined state.
                //
                // The previous version emitted a plain `CALL (M12,I12)`
                // with I12 loaded via `LoadImm { value: *addr }` — where
                // *addr was the VREG number, not its runtime contents —
                // and skipped the frame-link bookkeeping entirely, so
                // the callee's RFRAME popped uninitialised memory into
                // I6 and control never returned.

                // Stack arguments (args 3+): push in reverse order via
                // post-modify `DM(I7, M7) = Rn` so each push decrements
                // I7. A fixed-offset write without decrementing I7
                // leaves the stored args in the range the indirect
                // branch's own delay-slot pushes (R2 link and return
                // address) overwrite, silently trampling the first
                // stack-passed arg.
                for (i, arg) in args.iter().enumerate().rev() {
                    if i >= target::ARG_REGS.len() {
                        instrs.push(MachInstr {
                            instr: Instruction::UregDagMove {
                                pm: false,
                                write: true,
                                ureg: *arg as u16,
                                i_reg: target::STACK_PTR,
                                m_reg: 7, // M7 = -1
                                cond: target::COND_TRUE,
                                compute: None,
                                post_modify: true,
                            },
                            reloc: None,
                        });
                    }
                }
                // Register arguments (args 0-2). Tag the destination
                // ureg with `(0xC000u16 | phys as u16)` (UREG_FIXED_TAG | phys) so
                // regalloc treats it as a fixed physical register
                // instead of a raw vreg id; without the tag, regalloc
                // remaps the phys number (e.g. 4) through its pinning
                // table and the argument ends up in a different
                // register than the callee reads from.
                for (i, arg) in args.iter().enumerate() {
                    if i >= target::ARG_REGS.len() {
                        break;
                    }
                    let phys = target::ARG_REGS[i];
                    instrs.push(MachInstr::compute_pass(0xC000u16 | phys as u16, *arg as u16));
                }
                // Move the function address (held in a data-register
                // vreg) into I12. `URegMove` with the src tagged as a
                // raw vreg lets regalloc rewrite it to the physical
                // register the fp actually ended up in; the dest is
                // tagged fixed so I12 passes through unchanged.
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i_pre(12),
                        src: *addr as u16,
                    },
                    reloc: None,
                });
                // Save caller's frame pointer into R2, set I6 = I7 so
                // the delay-slot pushes below land at the top of the
                // new frame. These two ureg transfers also double as
                // the SHARC+ DAG-latch delay between writing I12 and
                // using it as the address-generator source of the
                // indirect branch -- without at least one cycle of
                // separation the AG reads a stale I12 and the branch
                // lands on whatever address I12 previously held.
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::UREG_FIXED_TAG | target::ureg_r(2),
                        src: target::UREG_FIXED_TAG | target::ureg_i(target::FRAME_PTR),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::UREG_FIXED_TAG | target::ureg_i(target::FRAME_PTR),
                        src: target::UREG_FIXED_TAG | target::ureg_i(target::STACK_PTR),
                    },
                    reloc: None,
                });
                // JUMP (M13, I12) (DB): delayed indirect branch; the
                // two delay slots push R2 and the return address onto
                // the frame stack, which is exactly what a direct
                // CJUMP (DB) would do automatically. M13 = 0 from
                // startup leaves the I12 post-modify a no-op.
                // `pm_i = 4` selects I12 (DAG2 offset), `pm_m = 5`
                // selects M13 (DAG2 offset).
                instrs.push(MachInstr {
                    instr: Instruction::IndirectBranch {
                        call: false,
                        cond: target::COND_TRUE,
                        pm_i: 4,
                        pm_m: 5,
                        delayed: true,
                        compute: None,
                    },
                    reloc: None,
                });
                // Delay slot 1: push R2 (the saved caller frame ptr).
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: true,
                        ureg: target::UREG_FIXED_TAG | target::ureg_r(2),
                        i_reg: target::STACK_PTR,
                        m_reg: 7, // M7 = -1
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: true,
                    },
                    reloc: None,
                });
                // Delay slot 2: push (return_label - 1). The callee's
                // epilogue does `JUMP (M14, I12) (DB)` with M14 = +1,
                // so the pushed value must be label-1 for control to
                // land on the instruction immediately after the
                // indirect branch sequence. The `.L_ret_` prefix tells
                // emit_asm to (a) place the label at the following
                // instruction and (b) append `-1` to the symbol in the
                // emitted text so the linker produces the right
                // relocation addend.
                let ret_label_name = format!(
                    ".L_ret_{}_indirect_{}",
                    func_name, call_site_counter
                );
                call_site_counter += 1;
                instrs.push(MachInstr {
                    instr: Instruction::ImmStore {
                        pm: false,
                        i_reg: target::STACK_PTR,
                        m_reg: 7,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: ret_label_name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                call_return_labels.push((instrs.len(), ret_label_name));
                // Result in R0, via the pinned `RETURN_REG_VREG`.
                instrs.push(MachInstr::compute_pass(
                    *dst as u16,
                    target::RETURN_REG_VREG,
                ));
            }

            IrOp::CallStruct { name, args, dst_addr, num_words } => {
                // Struct-returning direct call. Three ABI branches,
                // keyed on the returned size in words, mirror the
                // callee-side split in `RetStruct`:
                //   nw <= 2   -> scalar args in ARG_REGS, result read
                //                from R0 (and R1 when nw == 2) into
                //                DM(dst_addr + 0) / DM(dst_addr + 4).
                //   nw  > 2   -> `dst_addr` is passed as a hidden arg
                //                in R1 alongside scalar args in
                //                ARG_REGS; after return the callee has
                //                written through that pointer, so
                //                nothing further to copy.
                let is_hidden_ptr = *num_words > target::STRUCT_RET_MAX_REGS;
                // For reference-ABI complex-arg callees, every arg must go on
                // the stack — see `IrOp::Call` for the full rationale.
                let is_complex_args = complex_arg_callees.contains(name);
                let reg_count = if is_complex_args {
                    0
                } else {
                    target::ARG_REGS.len()
                };
                // Stack args (beyond reg_count): push in reverse order.
                for (i, arg) in args.iter().enumerate().rev() {
                    if i >= reg_count {
                        instrs.push(MachInstr {
                            instr: Instruction::UregDagMove {
                                pm: false,
                                write: true,
                                ureg: *arg as u16,
                                i_reg: target::STACK_PTR,
                                m_reg: 7,
                                cond: target::COND_TRUE,
                                compute: None,
                                post_modify: true,
                            },
                            reloc: None,
                        });
                    }
                }
                // Register args (0..reg_count).
                for (i, arg) in args.iter().enumerate() {
                    if i >= reg_count {
                        break;
                    }
                    let phys = target::ARG_REGS[i];
                    instrs.push(MachInstr::compute_pass(0xC000u16 | phys as u16, *arg as u16));
                }
                // Hidden ret-pointer in R1 for the large-struct path.
                // Emitted AFTER the scalar arg moves so that a scalar
                // arg accidentally scheduled into R1 (not actually
                // possible given the current `pinned` set, but the
                // order is defensive against future regalloc changes)
                // gets its value locked in first.
                if is_hidden_ptr {
                    instrs.push(MachInstr::compute_pass(
                        target::RETURN_REG_HI_VREG,
                        *dst_addr as u16,
                    ));
                }
                // CJUMP to callee: identical to IrOp::Call.
                instrs.push(MachInstr {
                    instr: Instruction::CJump { addr: 0, delayed: true },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: true,
                        ureg: target::UREG_FIXED_TAG | target::ureg_r(2),
                        i_reg: target::STACK_PTR,
                        m_reg: 7,
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: true,
                    },
                    reloc: None,
                });
                let ret_label_name = format!(
                    ".L_ret_{}_{}_{}", func_name, name, call_site_counter,
                );
                call_site_counter += 1;
                instrs.push(MachInstr {
                    instr: Instruction::ImmStore {
                        pm: false,
                        i_reg: target::STACK_PTR,
                        m_reg: 7,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: ret_label_name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                call_return_labels.push((instrs.len(), ret_label_name));
                // Unpack the returned struct into *dst_addr. For the
                // hidden-ptr path the callee already wrote through
                // R1 (aliased to our dst_addr), so nothing to do.
                if !is_hidden_ptr {
                    // Read R0 into mem[dst_addr + 0].
                    emit_indirect_access(
                        &mut instrs,
                        *dst_addr as u16,
                        target::RETURN_REG_VREG,
                        0,
                        true,
                    );
                    if *num_words == 2 {
                        emit_indirect_access(
                            &mut instrs,
                            *dst_addr as u16,
                            target::RETURN_REG_HI_VREG,
                            4,
                            true,
                        );
                    }
                }
            }

            IrOp::CallIndirectStruct { addr, args, dst_addr, num_words } => {
                // Indirect variant of CallStruct. Structurally mirrors
                // IrOp::CallIndirect with the same ABI additions as
                // `CallStruct` for the direct form. See those comments
                // for the full frame-link / delay-slot rationale.
                let is_hidden_ptr = *num_words > target::STRUCT_RET_MAX_REGS;
                for (i, arg) in args.iter().enumerate().rev() {
                    if i >= target::ARG_REGS.len() {
                        instrs.push(MachInstr {
                            instr: Instruction::UregDagMove {
                                pm: false,
                                write: true,
                                ureg: *arg as u16,
                                i_reg: target::STACK_PTR,
                                m_reg: 7,
                                cond: target::COND_TRUE,
                                compute: None,
                                post_modify: true,
                            },
                            reloc: None,
                        });
                    }
                }
                for (i, arg) in args.iter().enumerate() {
                    if i >= target::ARG_REGS.len() {
                        break;
                    }
                    let phys = target::ARG_REGS[i];
                    instrs.push(MachInstr::compute_pass(0xC000u16 | phys as u16, *arg as u16));
                }
                if is_hidden_ptr {
                    instrs.push(MachInstr::compute_pass(
                        target::RETURN_REG_HI_VREG,
                        *dst_addr as u16,
                    ));
                }
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i_pre(12),
                        src: *addr as u16,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::UREG_FIXED_TAG | target::ureg_r(2),
                        src: target::UREG_FIXED_TAG | target::ureg_i(target::FRAME_PTR),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::UREG_FIXED_TAG | target::ureg_i(target::FRAME_PTR),
                        src: target::UREG_FIXED_TAG | target::ureg_i(target::STACK_PTR),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::IndirectBranch {
                        call: false,
                        cond: target::COND_TRUE,
                        pm_i: 4,
                        pm_m: 5,
                        delayed: true,
                        compute: None,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: true,
                        ureg: target::UREG_FIXED_TAG | target::ureg_r(2),
                        i_reg: target::STACK_PTR,
                        m_reg: 7,
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: true,
                    },
                    reloc: None,
                });
                let ret_label_name = format!(
                    ".L_ret_{}_indirect_{}", func_name, call_site_counter,
                );
                call_site_counter += 1;
                instrs.push(MachInstr {
                    instr: Instruction::ImmStore {
                        pm: false,
                        i_reg: target::STACK_PTR,
                        m_reg: 7,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: ret_label_name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                call_return_labels.push((instrs.len(), ret_label_name));
                if !is_hidden_ptr {
                    emit_indirect_access(
                        &mut instrs,
                        *dst_addr as u16,
                        target::RETURN_REG_VREG,
                        0,
                        true,
                    );
                    if *num_words == 2 {
                        emit_indirect_access(
                            &mut instrs,
                            *dst_addr as u16,
                            target::RETURN_REG_HI_VREG,
                            4,
                            true,
                        );
                    }
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
                        *dst as u16,
                        false, // read
                    );
                } else {
                    // Indirect load through pointer in a data register.
                    emit_indirect_access(&mut instrs, *base as u16, *dst as u16, *offset as i8, false);
                }
            }

            IrOp::Store(val, base, offset) => {
                if *base == 0 {
                    // Frame-relative store: dreg -> DM(I6 + offset).
                    let frame_offset = -*offset - 1;
                    emit_frame_access(
                        &mut instrs,
                        frame_offset,
                        *val as u16,
                        true, // write
                    );
                } else {
                    // Indirect store through pointer in a data register.
                    emit_indirect_access(&mut instrs, *base as u16, *val as u16, *offset as i8, true);
                }
            }

            IrOp::LoadGlobal(dst, name) => {
                // Load the address of a global symbol into a register.
                // This emits a LoadImm with a relocation against the symbol.
                // Pass the raw vreg as `ureg`; the regalloc rewrites it
                // through `ureg_r(phys)`. Masking with `ureg_r` here would
                // collapse vregs above 15 onto their low-nibble twins.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: *dst as u16,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
            }

            IrOp::StoreGlobal(val, name) => {
                // Type 14 absolute DM store: DM(addr) = Rn.
                // selas resolves the symbol and emits a relocation.
                instrs.push(MachInstr {
                    instr: Instruction::UregAbsAccess {
                        pm: false,
                        write: true,
                        ureg: *val as u16,
                        addr: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
            }

            IrOp::ReadGlobal(dst, name) => {
                // Type 14 absolute DM read: Rn = DM(addr).
                instrs.push(MachInstr {
                    instr: Instruction::UregAbsAccess {
                        pm: false,
                        write: false,
                        ureg: *dst as u16,
                        addr: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
            }

            IrOp::ReadGlobal64(dst, name) => {
                // Read a 64-bit value from a global symbol. Two words:
                // lo at address, hi at address+1.
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_i_pre(target::SCRATCH_I),
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregMemAccess {
                        pm: false,
                        i_reg: target::SCRATCH_I,
                        write: false,
                        lw: false,
                        ureg: dst_lo,
                        offset: 0,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregMemAccess {
                        pm: false,
                        i_reg: target::SCRATCH_I,
                        write: false,
                        lw: false,
                        ureg: dst_hi,
                        offset: 1,
                    },
                    reloc: None,
                });
            }

            IrOp::WriteGlobal64(src, name) => {
                // Write a 64-bit value to a global symbol. Two words:
                // lo at address, hi at address+1.
                let src_lo = *src as u16;
                let src_hi = (*src + 1) as u16;
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: target::ureg_i_pre(target::SCRATCH_I),
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: name.clone(),
                        kind: RelocKind::Addr24,
                    }),
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregMemAccess {
                        pm: false,
                        i_reg: target::SCRATCH_I,
                        write: true,
                        lw: false,
                        ureg: src_lo,
                        offset: 0,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregMemAccess {
                        pm: false,
                        i_reg: target::SCRATCH_I,
                        write: true,
                        lw: false,
                        ureg: src_hi,
                        offset: 1,
                    },
                    reloc: None,
                });
            }

            IrOp::LoadString(dst, idx) => {
                // Load the address of string-literal slot `.strN`. The
                // string payload is emitted in the data section during
                // module emission; the link-time relocation patches this
                // LoadImm with the resolved address. Without the reloc
                // selcc used to leave the register holding 0 and the
                // downstream call would hand printf a bogus format
                // pointer — the DSP silently faulted and no UART output
                // ever appeared on hardware.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: *dst as u16,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: format!(".str{idx}"),
                        kind: RelocKind::Addr24,
                    }),
                });
            }

            IrOp::LoadWideString(dst, idx) => {
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: *dst as u16,
                        value: 0,
                    },
                    reloc: Some(Reloc {
                        symbol: format!(".wstr{idx}"),
                        kind: RelocKind::Addr24,
                    }),
                });
            }

            IrOp::FAdd(dst, lhs, rhs) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Add {
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
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
                            rn: *dst as u16,
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::FDiv(dst, lhs, rhs) => {
                // Inline single-precision float divide via RECIPS
                // (reciprocal seed) plus two Newton-Raphson refinement
                // iterations, an initial-quotient multiply, and a
                // Markstein residual-correction step that yields a
                // correctly-rounded single-precision quotient.
                //
                //     y_0 = RECIPS(b)              // ~8-bit accuracy
                //     y_1 = y_0 * (2.0 - b*y_0)    // ~16-bit
                //     y_2 = y_1 * (2.0 - b*y_1)    // ~22-24-bit
                //     q_0 = a * y_2                // initial quotient
                //     r   = a - b * q_0            // residual
                //     q   = q_0 + r * y_2          // Markstein correction
                //
                // Two Newton iterations from an 8-bit RECIPS seed do
                // not reliably saturate the 24-bit mantissa: each step
                // rounds back to single precision, and the worst-case
                // error in y_2 is a few ulps of 1/b. For a boundary
                // case like 100000.0 / 1000.0 the un-corrected product
                // a*y_2 can fall just below 100.0 and TRUNC rounds it
                // to 99 instead of the mathematically correct 100.
                //
                // The Markstein step computes the residual r = a - b*q_0
                // (which captures the rounding error of a*y_2) and
                // adds r*y_2 to fold it back in. Provided y_2 is
                // accurate to within 1 ulp of 1/b, the corrected
                // quotient is the IEEE-correctly-rounded a/b.
                //
                // This lowering intentionally does not handle the
                // full set of IEEE edge cases (denormals, signed zero,
                // rounding mode beyond the default round-to-nearest).
                // Those would require the substantially longer library
                // routine that SHARC C runtimes ship for `fdiv`.
                // The six scratch slots (a, b, two-point-zero, y, t, a_save)
                // live at vreg ids `s(0)..s(5)` -- strictly above the IR's
                // own max vreg, so they cannot alias any live value the
                // surrounding code holds. The previous fixed ids 0..5
                // collided with IR vregs assigned the same low ids; when an
                // IR variable mapped to physical R3, the FDiv expansion
                // overwrote it during the Newton-Raphson refinement and
                // returned a corrupt quotient.
                let s_a = s(0);
                let s_b = s(1);
                let s_two = s(2);
                let s_y = s(3);
                let s_t = s(4);
                let s_a_save = s(5);
                if *lhs as u16 != s_a {
                    instrs.push(MachInstr::compute_pass(s_a, *lhs as u16));
                }
                if *rhs as u16 != s_b {
                    instrs.push(MachInstr::compute_pass(s_b, *rhs as u16));
                }
                // s_two = 2.0f (IEEE single-precision bit pattern).
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: s_two,
                        value: 0x4000_0000,
                    },
                    reloc: None,
                });
                // s_y = RECIPS s_b  (initial seed for 1 / b).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Recips { rn: s_y, rx: s_b }),
                    },
                    reloc: None,
                });
                // s_t = s_b * s_y  (b * y_0).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_t, rx: s_b, ry: s_y }),
                    },
                    reloc: None,
                });
                // s_t = s_two - s_t  (2.0 - b*y_0).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Sub { rn: s_t, rx: s_two, ry: s_t }),
                    },
                    reloc: None,
                });
                // s_y = s_y * s_t  (y_1 = y_0 * (2 - b*y_0)).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_y, rx: s_y, ry: s_t }),
                    },
                    reloc: None,
                });
                // Second Newton iteration for full 24-bit mantissa.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_t, rx: s_b, ry: s_y }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Sub { rn: s_t, rx: s_two, ry: s_t }),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_y, rx: s_y, ry: s_t }),
                    },
                    reloc: None,
                });
                // s_a_save = s_a  (save numerator a; the next FMul clobbers s_a).
                instrs.push(MachInstr::compute_pass(s_a_save, s_a));
                // s_a = s_a * s_y  (initial quotient q_0 = a * y_2).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_a, rx: s_a, ry: s_y }),
                    },
                    reloc: None,
                });
                // Markstein residual correction: r = a - b*q_0,
                //                                q = q_0 + r * y_2.
                // s_t = s_b * s_a  (b * q_0).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_t, rx: s_b, ry: s_a }),
                    },
                    reloc: None,
                });
                // s_t = s_a_save - s_t  (residual r = a - b*q_0).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Sub { rn: s_t, rx: s_a_save, ry: s_t }),
                    },
                    reloc: None,
                });
                // s_t = s_t * s_y  (r * y_2).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Mul(MulOp::FMul { rn: s_t, rx: s_t, ry: s_y }),
                    },
                    reloc: None,
                });
                // s_a = s_a + s_t  (corrected quotient).
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Add { rn: s_a, rx: s_a, ry: s_t }),
                    },
                    reloc: None,
                });
                if *dst as u16 != s_a {
                    instrs.push(MachInstr::compute_pass(*dst as u16, s_a));
                }
            }

            IrOp::FNeg(dst, src) => {
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Neg {
                            rn: *dst as u16,
                            rx: *src as u16,
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
                            rn: *dst as u16,
                            rx: *src as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::FloatToInt(dst, src) => {
                // C99 6.3.1.4p1: float-to-int conversion truncates toward
                // zero. SHARC+ `FIX` rounds by the current MODE1 rounding
                // mode (power-on default is round-to-nearest-even), which
                // would round 3.75 -> 4 instead of 3. `TRUNC` always
                // truncates toward zero and so matches C semantics.
                instrs.push(MachInstr {
                    instr: Instruction::Compute {
                        cond: target::COND_TRUE,
                        compute: ComputeOp::Falu(FaluOp::Trunc {
                            rn: *dst as u16,
                            rx: *src as u16,
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
                        counter: selinstr::encode::LoopCounter::Immediate(*count as u16),
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
                            rx: *lhs as u16,
                            ry: *rhs as u16,
                        }),
                    },
                    reloc: None,
                });
            }

            IrOp::StackSave(dst) => {
                // Rn = I7 (Type 5a universal register transfer).
                // `dest` carries the raw vreg; regalloc encodes through
                // `ureg_r(phys)` after mapping. Masking here would
                // alias vregs > 15 onto their low-nibble twins.
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: *dst as u16,
                        src: target::ureg_i_pre(target::STACK_PTR),
                    },
                    reloc: None,
                });
            }

            IrOp::StackRestore(src) => {
                // I7 = Rn
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i_pre(target::STACK_PTR),
                        src: *src as u16,
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
                let tmp = *dst as u16;

                // Rn = I7
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: tmp,
                        src: target::ureg_i_pre(target::STACK_PTR),
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
                            ry: *count as u16,
                        }),
                    },
                    reloc: None,
                });
                // I7 = Rn
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i_pre(target::STACK_PTR),
                        src: tmp,
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
                            src_ureg: target::ureg_i_pre(target::FRAME_PTR),
                            dst_ureg: *dst as u16,
                            compute: None,
                        },
                        reloc: None,
                    });
                } else {
                    // Word-scaled (NW) modify: `frame_offset` is in
                    // word units (same unit `DM(offset, I6)` uses),
                    // so the FRAME_PTR modify must also use word units.
                    instrs.push(MachInstr {
                        instr: Instruction::Modify {
                            i_reg: target::FRAME_PTR,
                            value: frame_offset, width: MemWidth::Nw, bitrev: false, },
                        reloc: None,
                    });
                    instrs.push(MachInstr {
                        instr: Instruction::UregTransfer {
                            src_ureg: target::ureg_i_pre(target::FRAME_PTR),
                            dst_ureg: *dst as u16,
                            compute: None,
                        },
                        reloc: None,
                    });
                    instrs.push(MachInstr {
                        instr: Instruction::Modify {
                            i_reg: target::FRAME_PTR,
                            value: -frame_offset, width: MemWidth::Nw, bitrev: false, },
                        reloc: None,
                    });
                }
            }

            IrOp::StackArgAddr(dst, k) => {
                // Compute &caller_stack_arg[k] = I6 + k + 1 into `dst`.
                // Same `I6 + k + 1` arithmetic as `LoadStackArg`, but
                // produces the address rather than dereferencing it.
                // Used by `__builtin_va_start_sel` to anchor a `va_list`
                // at the first variadic argument, which lives just past
                // the last named-arg slot in the caller's pushed-args
                // region.
                //
                // Route through SCRATCH_I so `adjust_frame_offsets` does
                // not rewrite the positive offset into a frame-spill
                // negative.
                let offset = (*k as i32) + 1;
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i_pre(target::SCRATCH_I),
                        src: target::ureg_i_pre(target::FRAME_PTR),
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::Modify {
                        i_reg: target::SCRATCH_I,
                        value: offset,
                        width: MemWidth::Nw,
                        bitrev: false,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::UregTransfer {
                        src_ureg: target::ureg_i_pre(target::SCRATCH_I),
                        dst_ureg: *dst as u16,
                        compute: None,
                    },
                    reloc: None,
                });
            }

            IrOp::LoadStackArg(dst, k) => {
                // Caller-pushed stack argument `k` lives at DM(I6 + k + 1):
                // the caller pushes args via post-modify `DM(I7, M7) = Rn`
                // in reverse order; CJUMP(DB) then captures I6 = I7 at
                // call time (before delay slots), so arg 0 of the
                // stack-passed region ends up one word above I6 and
                // higher-indexed args step further up.
                //
                // `adjust_frame_offsets` rewrites every FRAME_PTR access,
                // mangling positive offsets into spill-slot negatives, so
                // route through SCRATCH_I to keep the positive-offset
                // access intact through the emit pipeline.
                let offset = (*k as i32) + 1;
                instrs.push(MachInstr {
                    instr: Instruction::URegMove {
                        dest: target::ureg_i_pre(target::SCRATCH_I),
                        src: target::ureg_i_pre(target::FRAME_PTR),
                    },
                    reloc: None,
                });
                // Word-scaled (NW) modify: stack-arg addresses are in
                // the same word-stepped frame world as `DM(±N, I6)`.
                instrs.push(MachInstr {
                    instr: Instruction::Modify {
                        i_reg: target::SCRATCH_I,
                        value: offset,
                        width: MemWidth::Nw,
                        bitrev: false,
                    },
                    reloc: None,
                });
                // Read at DM(I4, 0). Use a zero-offset post-modify via
                // M5 (= 0 at startup, same convention as
                // `emit_indirect_access`) so the instruction encodes
                // as a Type-3 post-modify form that tolerates
                // byte-addressable data memory.
                instrs.push(MachInstr {
                    instr: Instruction::UregDagMove {
                        pm: false,
                        write: false,
                        ureg: *dst as u16,
                        i_reg: target::SCRATCH_I,
                        m_reg: 5,
                        cond: target::COND_TRUE,
                        compute: None,
                        post_modify: true,
                    },
                    reloc: None,
                });
            }

            // ---- 64-bit instruction selection ----
            // Each 64-bit vreg V occupies two physical registers: V (lo) and V+1 (hi).

            IrOp::LoadImm64(dst, val) => {
                let lo = *dst as u16;
                let hi = (*dst + 1) as u16;
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: lo,
                        value: *val as u32,
                    },
                    reloc: None,
                });
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: hi,
                        value: (*val >> 32) as u32,
                    },
                    reloc: None,
                });
            }

            IrOp::Copy64(dst, src) => {
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let src_lo = *src as u16;
                let src_hi = (*src + 1) as u16;
                instrs.push(MachInstr::compute_pass(dst_lo, src_lo));
                instrs.push(MachInstr::compute_pass(dst_hi, src_hi));
            }

            IrOp::Add64(dst, lhs, rhs) => {
                // 64-bit add: lo = lhs_lo + rhs_lo, then
                // hi = lhs_hi + rhs_hi + carry.
                // SHARC ADD sets the carry flag (AC bit in ASTAT).
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let lhs_lo = *lhs as u16;
                let lhs_hi = (*lhs + 1) as u16;
                let rhs_lo = *rhs as u16;
                let rhs_hi = (*rhs + 1) as u16;
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let lhs_lo = *lhs as u16;
                let lhs_hi = (*lhs + 1) as u16;
                let rhs_lo = *rhs as u16;
                let rhs_hi = (*rhs + 1) as u16;
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
                // Inline 64-bit multiply (low 64 bits of product).
                emit_inline_mul_64(&mut instrs, *dst, *lhs, *rhs);
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let lhs_lo = *lhs as u16;
                let lhs_hi = (*lhs + 1) as u16;
                let rhs_lo = *rhs as u16;
                let rhs_hi = (*rhs + 1) as u16;
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let lhs_lo = *lhs as u16;
                let lhs_hi = (*lhs + 1) as u16;
                let rhs_lo = *rhs as u16;
                let rhs_hi = (*rhs + 1) as u16;
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let lhs_lo = *lhs as u16;
                let lhs_hi = (*lhs + 1) as u16;
                let rhs_lo = *rhs as u16;
                let rhs_hi = (*rhs + 1) as u16;
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
                // Inline 64-bit left shift. The inline expansion mirrors
                // `emit_inline_shr_64` but in the opposite direction so
                // the helper stays self-contained (no cross-function
                // register-ABI dependency).
                emit_inline_shl_64(&mut instrs, *dst, *lhs, *rhs);
            }

            IrOp::Shr64(dst, lhs, rhs) => {
                // Inline 64-bit arithmetic right shift.
                emit_inline_shr_64(&mut instrs, *dst, *lhs, *rhs, true);
            }

            IrOp::UShr64(dst, lhs, rhs) => {
                // Inline 64-bit logical right shift.
                emit_inline_shr_64(&mut instrs, *dst, *lhs, *rhs, false);
            }

            IrOp::Neg64(dst, src) => {
                // -x = ~x + 1 for 64-bit.
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let src_lo = *src as u16;
                let src_hi = (*src + 1) as u16;
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let src_lo = *src as u16;
                let src_hi = (*src + 1) as u16;
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
                let lhs_hi = (*lhs + 1) as u16;
                let rhs_hi = (*rhs + 1) as u16;
                let lhs_lo = *lhs as u16;
                let rhs_lo = *rhs as u16;
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
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
                            src_ureg: *base as u16,
                            dst_ureg: target::ureg_i_pre(target::SCRATCH_I),
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
                let src_lo = *src as u16;
                let src_hi = (*src + 1) as u16;
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
                            src_ureg: *base as u16,
                            dst_ureg: target::ureg_i_pre(target::SCRATCH_I),
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
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                instrs.push(MachInstr::compute_pass(dst_lo, *src as u16));
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: dst_hi,
                        value: 0,
                    },
                    reloc: None,
                });
            }

            IrOp::SExtToLongLong(dst, src) => {
                // Sign-extend: lo = src, hi = src >> 31 (arithmetic).
                let dst_lo = *dst as u16;
                let dst_hi = (*dst + 1) as u16;
                let src_r = *src as u16;
                instrs.push(MachInstr::compute_pass(dst_lo, src_r));
                // Load shift amount -31 for arithmetic right shift by 31.
                // SHARC ASHIFT uses negative values for right shift.
                instrs.push(MachInstr {
                    instr: Instruction::LoadImm {
                        ureg: dst_hi,
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
                instrs.push(MachInstr::compute_pass(*dst as u16, *src as u16));
            }
        }
    }

    IselResult {
        instrs,
        label_positions,
        call_return_labels,
    }
}

/// Emit a frame-relative load or store. If the offset fits the 6-bit signed
/// range (-32..31) of the Type 4 instruction, emit a single instruction.
/// Otherwise, use a three-instruction sequence: MODIFY I6 to reach the slot,
/// access at offset 0, then MODIFY I6 back.
fn emit_frame_access(instrs: &mut Vec<MachInstr>, offset: i32, dreg: u16, write: bool) {
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
        // Large offset: modify + access at 0 + un-modify. Both
        // FRAME_PTR modifies use (NW) word units to match the
        // word-scaled frame offsets in the rest of the backend.
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: offset, width: MemWidth::Nw, bitrev: false, },
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
                value: -offset, width: MemWidth::Nw, bitrev: false, },
            reloc: None,
        });
    }
}

/// Emit an indirect memory access through a pointer held in a data register.
/// Transfers the pointer to I4 (scratch index register) via UregTransfer,
/// then accesses DM(I4, offset). SHARC+ has a one-cycle DAG-latch latency
/// between writing an index register from the register file and using it
/// as the base of an address-generator cycle, so a NOP is inserted between
/// the transfer and the memory access to let the new I4 value propagate.
/// Without the NOP the AG computes the address from the STALE I4, and the
/// load/store lands at the wrong memory location (typically an instant
/// hard fault on a read-only or out-of-range address).
fn emit_indirect_access(instrs: &mut Vec<MachInstr>, base: u16, dreg: u16, offset: i8, write: bool) {
    // Use the bare URegMove form for the R-vreg → I4 transfer
    // instead of UregTransfer-with-compute=None. UregTransfer
    // packs a compute slot into bits[22:0] of the encoded word; when
    // we leave it empty the encoder writes 0, which the SHARC+
    // hardware decodes as `R0 = R0 + R0` — a *real* ALU op that
    // clobbers R0 (the return-value/4th-arg register) right between
    // the address setup and the memory access. URegMove (Type 5a
    // proper, encode_type5a) carries no compute slot and is the
    // form required for all bare ureg transfers.
    instrs.push(MachInstr {
        instr: Instruction::URegMove {
            dest: target::ureg_i_pre(target::SCRATCH_I),
            src: base,
        },
        reloc: None,
    });
    // Apply the constant offset by modifying I4 inline before the
    // access: `dm(I4, M5) = dreg` doesn't carry a literal offset, and
    // doing the offset via I4 += offset / I4 -= offset keeps the
    // emitted instruction in the byte-addressable Type-3 form that
    // required for `tab[i] = ...` patterns. The Type-4 form (the
    // previous `ComputeLoadStore` with embedded offset) silently
    // routed through the SHARC DAG's word-aligned alias of L1 SRAM,
    // so writes to a byte address went to a different physical bank
    // entirely and the chip read garbage (or faulted) on read-back.
    if offset != 0 {
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::SCRATCH_I,
                value: offset as i32,
                width: MemWidth::Normal,
                bitrev: false,
            },
            reloc: None,
        });
    }
    // Use M5 (= 0 per startup) for the post-modify slot. Type 3
    // encodes the M-register in bits[39:38] as `m_reg - 4`, so the
    // valid range is M4..M7. M5 corresponds to encoded value 1.
    // Without an explicit zero modify register, the post-mod would
    // step I4 by an undefined amount and successive accesses would
    // walk into unrelated memory.
    instrs.push(MachInstr {
        instr: Instruction::UregDagMove {
            pm: false,
            write,
            ureg: dreg,
            i_reg: target::SCRATCH_I,
            m_reg: 5,
            cond: target::COND_TRUE,
            compute: None,
            post_modify: true,
        },
        reloc: None,
    });
    if offset != 0 {
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::SCRATCH_I,
                value: -(offset as i32),
                width: MemWidth::Normal,
                bitrev: false,
            },
            reloc: None,
        });
    }
}

/// Emit an inline 64-bit multiply (low 64 bits of the product).
///
/// The calling convention places `lhs` in R0:R1 (lo:hi) and `rhs`
/// in R2:R3 (lo:hi).  R4..R7 are clobbered.  Result is written to
/// R0:R1 and then copied to the destination vreg pair.
///
/// Algorithm (the standard "schoolbook" 64x64 -> 64 decomposition):
///
/// ```text
///     result_lo = low32(a_lo * b_lo)
///     result_hi = high32(a_lo * b_lo)
///               + low32(a_lo * b_hi)
///               + low32(a_hi * b_lo)
/// ```
///
/// The `a_hi * b_hi` term would only contribute to bits beyond the
/// 64-bit result and is dropped.  The signed vs. unsigned distinction
/// for the low 64 bits of a 64x64 multiply is irrelevant: in two's
/// complement, multiplication truncated to `N` bits produces the same
/// bit pattern for signed and unsigned operands.
fn emit_inline_mul_64(
    instrs: &mut Vec<MachInstr>,
    dst: u32,
    lhs: u32,
    rhs: u32,
) {
    let dst_lo = dst as u16;
    let dst_hi = (dst + 1) as u16;
    let lhs_lo = lhs as u16;
    let lhs_hi = (lhs + 1) as u16;
    let rhs_lo = rhs as u16;
    let rhs_hi = (rhs + 1) as u16;
    // Move args into R0 = lhs_lo, R1 = lhs_hi, R2 = rhs_lo, R3 = rhs_hi.
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
    // R4 = a_lo * b_hi  (low 32 bits of the cross term).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Mul(MulOp::MulSsi { rn: 4, rx: 0, ry: 3 }),
        },
        reloc: None,
    });
    // R5 = a_hi * b_lo  (low 32 bits of the other cross term).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Mul(MulOp::MulSsi { rn: 5, rx: 1, ry: 2 }),
        },
        reloc: None,
    });
    // MRF = a_lo * b_lo  (full 64-bit unsigned product in MRF, or
    // signed — we just read both halves as a bit pattern).  SHARC+'s
    // `MRF = Rx * Ry (SSI)` writes the 64-bit product to the MR
    // register; MR0F holds the low 32 bits, MR1F the high 32 bits.
    // The sign interpretation does not affect the low 64 bits of the
    // final 64-bit product in two's complement.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Mul(MulOp::MrfMulSsi { rx: 0, ry: 2 }),
        },
        reloc: None,
    });
    // R6 = MR1F  (high 32 bits of a_lo * b_lo).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Mul(MulOp::ReadMr1f { rn: 6 }),
        },
        reloc: None,
    });
    // R0 = MR0F  (low 32 bits of a_lo * b_lo, the final result_lo).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Mul(MulOp::ReadMr0f { rn: 0 }),
        },
        reloc: None,
    });
    // R1 = R4 + R5  (sum of the two cross terms).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Add { rn: 1, rx: 4, ry: 5 }),
        },
        reloc: None,
    });
    // R1 = R1 + R6  (add the high half of the low-low product,
    // giving the final result_hi).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Add { rn: 1, rx: 1, ry: 6 }),
        },
        reloc: None,
    });
    // Copy result from R0:R1 to the destination vreg pair.
    if dst_lo != 0 {
        instrs.push(MachInstr::compute_pass(dst_lo, 0));
    }
    if dst_hi != 1 {
        instrs.push(MachInstr::compute_pass(dst_hi, 1));
    }
}

/// Emit an inline 64-bit right shift (arithmetic for signed,
/// logical for unsigned) that handles any shift count in `[0, 63]`
/// branch-free, using the SHARC+ barrel-shifter trick.
///
/// The trick: the hardware `LSHIFT Rx BY Ry` / `ASHIFT Rx BY Ry`
/// instructions accept a signed shift count.  A negative count shifts
/// right; a positive count shifts left.  Counts whose magnitude is
/// greater than 31 produce zero (LSHIFT) or the sign-extension fill
/// (ASHIFT).  That means a single shift instruction can implement
/// "shift right by `n` for any `n` in `[-32, 63]`" by passing the
/// signed count verbatim, and the same sequence merges correctly in
/// all cases without a branch on whether `n < 32` or `n >= 32`.
///
/// For a 64-bit value `(hi:lo)` shifted right by `n`:
///
/// ```text
///     new_hi = hi >>  n                  (ashift for signed, lshift for unsigned)
///     new_lo = (lo >> n) | (hi >> (n-32))
/// ```
///
/// The term `hi >> (n-32)` reduces to `hi << (32-n)` when `n < 32`,
/// which is the familiar "carry-in from high word" merge.  By
/// pre-computing `-n` and `32-n` into scratch registers and using
/// `LSHIFT`/`ASHIFT` with those counts, the same instruction sequence
/// covers `n` in `[0, 63]`.
///
/// Calling convention: lhs in R0:R1 (lo:hi), rhs in R2:R3 (rhs_lo
/// holds the shift count, rhs_hi is ignored).  Scratch registers R4,
/// R5, R7 are clobbered.  Result is returned in R0:R1 and copied to
/// the destination vreg pair.
fn emit_inline_shr_64(
    instrs: &mut Vec<MachInstr>,
    dst: u32,
    lhs: u32,
    rhs: u32,
    signed: bool,
) {
    let dst_lo = dst as u16;
    let dst_hi = (dst + 1) as u16;
    let lhs_lo = lhs as u16;
    let lhs_hi = (lhs + 1) as u16;
    let rhs_lo = rhs as u16;
    // Move args into R0 = lo, R1 = hi, R2 = shift count.
    if lhs_lo != 0 {
        instrs.push(MachInstr::compute_pass(0, lhs_lo));
    }
    if lhs_hi != 1 {
        instrs.push(MachInstr::compute_pass(1, lhs_hi));
    }
    if rhs_lo != 2 {
        instrs.push(MachInstr::compute_pass(2, rhs_lo));
    }
    // R3 = -R2  (the negated shift count).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Neg { rn: 3, rx: 2 }),
        },
        reloc: None,
    });
    // R4 = 32.
    instrs.push(MachInstr {
        instr: Instruction::LoadImm {
            ureg: target::ureg_r(4),
            value: 32,
        },
        reloc: None,
    });
    // R5 = R3 + R4 = 32 - n  (signed: positive for n < 32, negative
    // for n > 32, zero for n == 32).
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Add { rn: 5, rx: 3, ry: 4 }),
        },
        reloc: None,
    });
    // R7 = shift(hi, R5).  For 0 < n < 32 this is `hi << (32 - n)`,
    // the carry-in from the high word into the new low word.  For
    // n == 32 it is `hi << 0 = hi`, which is exactly the new low
    // word in that case.  For 32 < n < 64 the signed count is
    // negative, so it becomes `hi >> (n - 32)`: the high word
    // shifted further right, which is the new low word when the
    // shift crosses the word boundary.  Must track the signedness
    // because for 32 < n the sign bits must propagate into the low
    // word for signed right shift.
    let hi_to_lo_shift = if signed {
        ShiftOp::Ashift { rn: 7, rx: 1, ry: 5 }
    } else {
        ShiftOp::Lshift { rn: 7, rx: 1, ry: 5 }
    };
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Shift(hi_to_lo_shift),
        },
        reloc: None,
    });
    // R1 = shift(hi, R3) = hi >> n  (arithmetic for signed, logical
    // for unsigned).  This is the new high word; for n >= 32 it is
    // zero (unsigned) or all sign bits (signed), both correct.
    let new_hi_shift = if signed {
        ShiftOp::Ashift { rn: 1, rx: 1, ry: 3 }
    } else {
        ShiftOp::Lshift { rn: 1, rx: 1, ry: 3 }
    };
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Shift(new_hi_shift),
        },
        reloc: None,
    });
    // R0 = lshift(lo, R3) = lo >> n  (logical, because the low word
    // never contributes sign bits).  For n >= 32 this is zero; the
    // contribution to the new low word then comes entirely from R7.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Shift(ShiftOp::Lshift { rn: 0, rx: 0, ry: 3 }),
        },
        reloc: None,
    });
    // R0 = R0 | R7 = new low word.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Or { rn: 0, rx: 0, ry: 7 }),
        },
        reloc: None,
    });
    // Copy result from R0:R1 to the destination vreg pair.
    if dst_lo != 0 {
        instrs.push(MachInstr::compute_pass(dst_lo, 0));
    }
    if dst_hi != 1 {
        instrs.push(MachInstr::compute_pass(dst_hi, 1));
    }
}

/// Emit an inline 64-bit left shift that handles any shift count in
/// `[0, 63]` branch-free, mirroring the trick in `emit_inline_shr_64`.
///
/// For a 64-bit value `(hi:lo)` shifted left by `n`:
///
/// ```text
///     new_lo = lo << n                 (for n >= 32, hardware gives 0)
///     new_hi = (hi << n) | (lo << (n - 32))
/// ```
///
/// The hardware LSHIFT with a signed count does exactly this: a
/// positive count of magnitude >= 32 produces zero, a negative count
/// shifts right.  For `n < 32`, `(n - 32)` is negative, so the second
/// term becomes `lo >> (32 - n)` — the familiar "carry-in from low
/// word" merge.  For `n >= 32`, the carry term becomes `lo << (n - 32)`
/// and the `hi << n` term is zero, so `new_hi = lo << (n - 32)`.
///
/// Calling convention matches the inline right shift: lhs in vreg 0/1
/// (lo:hi), shift count in vreg 2, scratch in vreg 3/4/5/7; result
/// lands in vreg 0/1 and is then copied to the destination pair.
/// Staying in the low-numbered vreg space keeps the sequence
/// internally consistent (regalloc rewrites the vreg ids, but the
/// instructions reference the same vregs before and after the rewrite).
fn emit_inline_shl_64(
    instrs: &mut Vec<MachInstr>,
    dst: u32,
    lhs: u32,
    rhs: u32,
) {
    let dst_lo = dst as u16;
    let dst_hi = (dst + 1) as u16;
    let lhs_lo = lhs as u16;
    let lhs_hi = (lhs + 1) as u16;
    let rhs_lo = rhs as u16;
    // vreg 0 = lhs_lo, vreg 1 = lhs_hi, vreg 2 = rhs_lo.
    if lhs_lo != 0 {
        instrs.push(MachInstr::compute_pass(0, lhs_lo));
    }
    if lhs_hi != 1 {
        instrs.push(MachInstr::compute_pass(1, lhs_hi));
    }
    if rhs_lo != 2 {
        instrs.push(MachInstr::compute_pass(2, rhs_lo));
    }
    // R4 = -32 (constant).
    instrs.push(MachInstr {
        instr: Instruction::LoadImm {
            ureg: target::ureg_r(4),
            value: (-32i32) as u32,
        },
        reloc: None,
    });
    // R5 = R2 + R4 = n - 32.  Positive for n >= 32, negative for n < 32.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Add { rn: 5, rx: 2, ry: 4 }),
        },
        reloc: None,
    });
    // R7 = LSHIFT(lo, R5).  For n < 32 this is `lo >> (32 - n)` (the
    // carry bits that drift into the new high word); for n >= 32 it
    // is `lo << (n - 32)` (the entire new high word).  For n == 0
    // the count is -32, which LSHIFT turns into zero — exactly what
    // the merge needs.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Shift(ShiftOp::Lshift { rn: 7, rx: 0, ry: 5 }),
        },
        reloc: None,
    });
    // R1 = LSHIFT(hi, R2) = hi << n.  Zero for n >= 32, which leaves
    // R7 as the sole contributor to the new high word in that range.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Shift(ShiftOp::Lshift { rn: 1, rx: 1, ry: 2 }),
        },
        reloc: None,
    });
    // R1 = R1 | R7 = new high word.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Alu(AluOp::Or { rn: 1, rx: 1, ry: 7 }),
        },
        reloc: None,
    });
    // R0 = LSHIFT(lo, R2) = lo << n = new low word.
    instrs.push(MachInstr {
        instr: Instruction::Compute {
            cond: target::COND_TRUE,
            compute: ComputeOp::Shift(ShiftOp::Lshift { rn: 0, rx: 0, ry: 2 }),
        },
        reloc: None,
    });
    // Copy result from vreg 0:1 to the destination pair.
    if dst_lo != 0 {
        instrs.push(MachInstr::compute_pass(dst_lo, 0));
    }
    if dst_hi != 1 {
        instrs.push(MachInstr::compute_pass(dst_hi, 1));
    }
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
    let dst_lo = dst as u16;
    let dst_hi = (dst + 1) as u16;
    let lhs_lo = lhs as u16;
    let lhs_hi = (lhs + 1) as u16;
    let rhs_lo = rhs as u16;
    let rhs_hi = (rhs + 1) as u16;
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

/// Caller-provided bookkeeping threaded into every runtime-helper
/// emitter: the owning function's name (for synthesising unique
/// return-label symbols), a counter that keeps those symbols distinct
/// across call sites within the same function, and the list of
/// (instruction-index, label-name) pairs emit_asm reads to position
/// the labels. Grouping into a struct keeps helper signatures short
/// enough to stay under clippy's `too_many_arguments` threshold.
struct CallSiteCtx<'a> {
    func_name: &'a str,
    counter: &'a mut u32,
    return_labels: &'a mut Vec<(usize, String)>,
}

/// Emit a CJUMP-based call to a 32-bit divmod runtime wrapper
/// (`___div32.`, `___udiv32.`, `___mod32.`, or `___umod32.`).
/// Arguments land in R4 (dividend) and R8 (divisor) per the standard
/// SHARC+ C ABI; the result comes back in R0.
///
/// The CJUMP form (not a raw `CALL`) is required so regalloc spills
/// caller-saved registers across the call and lays down the two
/// delay-slot pushes (`R2`, return address) the helper's
/// `I12 = DM(M7,I6); JUMP (M14,I12) (DB); RFRAME` epilogue needs.
fn emit_runtime_call_32_divmod(
    instrs: &mut Vec<MachInstr>,
    name: &str,
    dst: u32,
    lhs: u32,
    rhs: u32,
    ctx: &mut CallSiteCtx<'_>,
) {
    // Forced-physical arg setup: R4 = lhs, R8 = rhs. Matches the
    // IrOp::Call lowering's use of `(0xC000u16 | phys as u16)` so regalloc pins
    // ARG_REGS[0] and ARG_REGS[1] to the correct physical registers
    // across spill and copy-elimination.
    instrs.push(MachInstr::compute_pass(
        0xC000u16 | target::ARG_REGS[0] as u16,
        lhs as u16,
    ));
    instrs.push(MachInstr::compute_pass(
        0xC000u16 | target::ARG_REGS[1] as u16,
        rhs as u16,
    ));
    // CJUMP (DB) to the helper: two delay slots push R2 and the return
    // address, mirroring the ordinary SHARC+ C call.
    instrs.push(MachInstr {
        instr: Instruction::CJump {
            addr: 0,
            delayed: true,
        },
        reloc: Some(Reloc {
            symbol: name.to_string(),
            kind: RelocKind::Addr24,
        }),
    });
    instrs.push(MachInstr {
        instr: Instruction::UregDagMove {
            pm: false,
            write: true,
            ureg: target::UREG_FIXED_TAG | target::ureg_r(2),
            i_reg: target::STACK_PTR,
            m_reg: 7,
            cond: target::COND_TRUE,
            compute: None,
            post_modify: true,
        },
        reloc: None,
    });
    let ret_label_name = format!(
        ".L_ret_{}_{name}_{counter}",
        ctx.func_name,
        counter = *ctx.counter,
    );
    *ctx.counter += 1;
    instrs.push(MachInstr {
        instr: Instruction::ImmStore {
            pm: false,
            i_reg: target::STACK_PTR,
            m_reg: 7,
            value: 0,
        },
        reloc: Some(Reloc {
            symbol: ret_label_name.clone(),
            kind: RelocKind::Addr24,
        }),
    });
    ctx.return_labels.push((instrs.len(), ret_label_name));
    // Pick up the result from R0 via the `RETURN_REG_VREG` pinned
    // source so regalloc reads physical R0 after the call.
    instrs.push(MachInstr::compute_pass(dst as u16, target::RETURN_REG_VREG));
}

/// Map IR condition to SHARC condition code.
/// Largest vreg id referenced anywhere in `ir`, or 0 if no vreg is
/// referenced. Used by inline-expansion helpers (e.g. `IrOp::FDiv`'s
/// Newton-Raphson scratch slots) to pick scratch vreg ids strictly
/// above the IR's own range, so they cannot alias a live IR vreg and
/// be silently coalesced onto the same physical register by regalloc.
fn max_ir_vreg(ir: &[IrOp]) -> u32 {
    let mut m = 0u32;
    let mut bump = |v: VReg| {
        if v > m {
            m = v;
        }
    };
    for op in ir {
        match op {
            IrOp::LoadImm(a, _) | IrOp::LoadImm64(a, _)
            | IrOp::LoadGlobal(a, _) | IrOp::ReadGlobal(a, _)
            | IrOp::ReadGlobal64(a, _)
            | IrOp::LoadString(a, _) | IrOp::LoadWideString(a, _)
            | IrOp::FrameAddr(a, _)
            | IrOp::LoadStackArg(a, _) | IrOp::StackArgAddr(a, _)
            | IrOp::StackSave(a) => bump(*a),
            IrOp::StoreGlobal(a, _) | IrOp::WriteGlobal64(a, _)
            | IrOp::StackRestore(a) => bump(*a),
            IrOp::Copy(a, b)
            | IrOp::Copy64(a, b)
            | IrOp::Neg(a, b)
            | IrOp::Neg64(a, b)
            | IrOp::BitNot(a, b)
            | IrOp::BitNot64(a, b)
            | IrOp::FNeg(a, b)
            | IrOp::IntToFloat(a, b)
            | IrOp::FloatToInt(a, b)
            | IrOp::IntToLongLong(a, b)
            | IrOp::SExtToLongLong(a, b)
            | IrOp::LongLongToInt(a, b)
            | IrOp::StackAlloc(a, b) => {
                bump(*a);
                bump(*b);
            }
            IrOp::Add(a, b, c) | IrOp::Sub(a, b, c) | IrOp::Mul(a, b, c)
            | IrOp::Div(a, b, c) | IrOp::UDiv(a, b, c)
            | IrOp::Mod(a, b, c) | IrOp::UMod(a, b, c)
            | IrOp::BitAnd(a, b, c) | IrOp::BitOr(a, b, c)
            | IrOp::BitXor(a, b, c)
            | IrOp::Shl(a, b, c) | IrOp::Shr(a, b, c) | IrOp::Lshr(a, b, c)
            | IrOp::FAdd(a, b, c) | IrOp::FSub(a, b, c)
            | IrOp::FMul(a, b, c) | IrOp::FDiv(a, b, c)
            | IrOp::Add64(a, b, c) | IrOp::Sub64(a, b, c)
            | IrOp::Mul64(a, b, c) | IrOp::Div64(a, b, c)
            | IrOp::UDiv64(a, b, c) | IrOp::Mod64(a, b, c)
            | IrOp::UMod64(a, b, c)
            | IrOp::BitAnd64(a, b, c) | IrOp::BitOr64(a, b, c)
            | IrOp::BitXor64(a, b, c)
            | IrOp::Shl64(a, b, c) | IrOp::Shr64(a, b, c)
            | IrOp::UShr64(a, b, c) => {
                bump(*a);
                bump(*b);
                bump(*c);
            }
            IrOp::FCmp(a, b) | IrOp::Cmp(a, b) | IrOp::Cmp64(a, b)
            | IrOp::UCmp(a, b) | IrOp::UCmp64(a, b) => {
                bump(*a);
                bump(*b);
            }
            IrOp::Load(a, b, _) | IrOp::Load64(a, b, _) => {
                bump(*a);
                if *b != 0 {
                    bump(*b);
                }
            }
            IrOp::Store(a, b, _) | IrOp::Store64(a, b, _) => {
                bump(*a);
                if *b != 0 {
                    bump(*b);
                }
            }
            IrOp::Call(dst, _, args)
            | IrOp::CallStruct { dst_addr: dst, args, .. } => {
                bump(*dst);
                for a in args {
                    bump(*a);
                }
            }
            IrOp::CallIndirect(dst, addr, args) => {
                bump(*dst);
                bump(*addr);
                for a in args {
                    bump(*a);
                }
            }
            IrOp::CallIndirectStruct { addr, args, dst_addr, .. } => {
                bump(*addr);
                bump(*dst_addr);
                for a in args {
                    bump(*a);
                }
            }
            IrOp::Ret(Some(v)) => bump(*v),
            IrOp::RetStruct { src_addr, dst_addr, .. } => {
                bump(*src_addr);
                if let Some(d) = dst_addr {
                    bump(*d);
                }
            }
            IrOp::LoadStructRetPtr(v) => bump(*v),
            IrOp::Ret(None)
            | IrOp::Branch(_) | IrOp::BranchCond(_, _) | IrOp::Label(_)
            | IrOp::HardwareLoop { .. }
            | IrOp::Nop => {}
        }
    }
    m
}

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
    fn select_mul64_inline() {
        let ir = vec![
            IrOp::LoadImm64(0, 3),
            IrOp::LoadImm64(2, 7),
            IrOp::Mul64(4, 0, 2),
            IrOp::Nop,
        ];
        let result = select(&ir);
        // The 64-bit multiply is inlined, so there must be no CALL
        // and no reloc against the legacy `___mul64` helper name.
        let has_call = result.instrs.iter().any(|m| {
            matches!(&m.instr, Instruction::Branch { call: true, .. })
        });
        assert!(!has_call, "expected inline 64-bit multiply, got a CALL");
        let references_legacy = result.instrs.iter().any(|m| {
            m.reloc.as_ref().is_some_and(|r| r.symbol == "___mul64")
        });
        assert!(
            !references_legacy,
            "unexpected relocation to legacy ___mul64 helper"
        );
        // The sequence must contain at least one SSI integer multiply
        // and one MRF-SSI multiply (for the cross terms and the
        // low-low product respectively).
        let ssi_count = result
            .instrs
            .iter()
            .filter(|m| {
                matches!(
                    &m.instr,
                    Instruction::Compute {
                        compute: ComputeOp::Mul(MulOp::MulSsi { .. }),
                        ..
                    }
                )
            })
            .count();
        assert!(
            ssi_count >= 2,
            "expected at least two SSI multiplies for the cross terms, got {ssi_count}",
        );
        let has_mrf_ssi = result.instrs.iter().any(|m| {
            matches!(
                &m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Mul(MulOp::MrfMulSsi { .. }),
                    ..
                }
            )
        });
        assert!(has_mrf_ssi, "missing MRF SSI multiply for the low-low product");
    }

    #[test]
    fn select_shr64_inline() {
        let ir = vec![IrOp::Shr64(4, 0, 2), IrOp::Nop];
        let result = select(&ir);
        // Must not contain a CALL to the legacy ___shr64 helper.
        let bad_call = result.instrs.iter().any(|m| {
            m.reloc
                .as_ref()
                .is_some_and(|r| r.symbol == "___shr64" || r.symbol == "___ushr64")
        });
        assert!(!bad_call, "unexpected relocation to legacy 64-bit shift helper");
        // The signed 64-bit shift is distinguished by the use of at
        // least one ASHIFT with a register count.
        let has_ashift = result.instrs.iter().any(|m| {
            matches!(
                &m.instr,
                Instruction::Compute {
                    compute: ComputeOp::Shift(ShiftOp::Ashift { .. }),
                    ..
                }
            )
        });
        assert!(has_ashift, "expected ASHIFT in signed 64-bit right shift lowering");
    }

    #[test]
    fn select_ushr64_inline() {
        let ir = vec![IrOp::UShr64(4, 0, 2), IrOp::Nop];
        let result = select(&ir);
        let bad_call = result.instrs.iter().any(|m| {
            m.reloc
                .as_ref()
                .is_some_and(|r| r.symbol == "___shr64" || r.symbol == "___ushr64")
        });
        assert!(!bad_call, "unexpected relocation to legacy 64-bit shift helper");
        // The unsigned 64-bit shift uses LSHIFT exclusively.
        let ashift_count = result
            .instrs
            .iter()
            .filter(|m| {
                matches!(
                    &m.instr,
                    Instruction::Compute {
                        compute: ComputeOp::Shift(ShiftOp::Ashift { .. }),
                        ..
                    }
                )
            })
            .count();
        assert_eq!(
            ashift_count, 0,
            "unsigned 64-bit right shift must not emit ASHIFT",
        );
        let lshift_count = result
            .instrs
            .iter()
            .filter(|m| {
                matches!(
                    &m.instr,
                    Instruction::Compute {
                        compute: ComputeOp::Shift(ShiftOp::Lshift { .. }),
                        ..
                    }
                )
            })
            .count();
        assert!(
            lshift_count >= 3,
            "unsigned 64-bit right shift should emit several LSHIFTs, got {lshift_count}",
        );
    }
}
