// SPDX-License-Identifier: GPL-3.0
// mach.rs --- Machine instruction wrapper with relocation metadata
// Copyright (c) 2026 Jakob Kastelic

//! Machine instruction wrapper with optional relocation metadata.
//!
//! After instruction selection, each emitted instruction may carry a
//! relocation that must be resolved during the fixup pass (for internal
//! branch labels) or recorded in the object file (for external symbols).

use selinstr::encode::{AluOp, ComputeOp, Instruction};

/// A single machine instruction with optional relocation.
#[derive(Debug, Clone)]
pub struct MachInstr {
    pub instr: Instruction,
    pub reloc: Option<Reloc>,
}

impl MachInstr {
    /// Create a PASS Rx -> Rn copy instruction (unconditional).
    pub fn compute_pass(dst: u8, src: u8) -> Self {
        MachInstr {
            instr: Instruction::Compute {
                cond: crate::target::COND_TRUE,
                compute: ComputeOp::Alu(AluOp::Pass { rn: dst, rx: src }),
            },
            reloc: None,
        }
    }
}

/// Relocation attached to a machine instruction.
#[derive(Debug, Clone)]
pub struct Reloc {
    pub symbol: String,
    pub kind: RelocKind,
}

/// Relocation kind.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RelocKind {
    /// Absolute 24-bit address (for CALL/JUMP targets).
    Addr24,
}

/// Map a relocation kind to its ELF relocation type constant.
pub fn rela_type(kind: RelocKind) -> u8 {
    match kind {
        RelocKind::Addr24 => 0x01,
    }
}
