// SPDX-License-Identifier: GPL-3.0
// target.rs --- SHARC+ target description: registers, calling convention, condition codes
// Copyright (c) 2026 Jakob Kastelic

//! SHARC+ (ADSP-2156x) target description -- register conventions, condition
//! code constants, and ABI parameters.

/// I7 is the stack pointer.
pub const STACK_PTR: u8 = 7;

/// I6 is the frame pointer.
pub const FRAME_PTR: u8 = 6;

/// I4 is used as a scratch index register for global accesses.
pub const SCRATCH_I: u8 = 4;

/// PM I-register index for indirect calls (I12 = PM DAG2 index 4).
pub const INDIRECT_CALL_PMI: u8 = 4;

/// PM M-register index for indirect calls (M12 = PM DAG2 index 4).
pub const INDIRECT_CALL_PMM: u8 = 4;

/// Integer/pointer argument registers for the SHARC+ C-ABI: the
/// first four scalar args go in R4, R8, R12, R0 (in that order),
/// not the naive R0-R3 sequence most other ABIs use. Verified
/// against the call sites the SHARC+ C compiler emits for a
/// two-argument function, which load `a` into R4 and `b` into R8
/// before a CJUMP. If selcc pins parameter vregs to R0..R3
/// instead, the callee reads garbage on entry because the caller
/// puts the real arguments somewhere else.
pub const ARG_REGS: &[u8] = &[4, 8, 12, 0];

/// Data registers that do NOT need to be preserved across a
/// CJUMP. Listing R0-R7 explicitly keeps the ALU's x-bank fully
/// available to the register allocator for scratch values, while
/// still covering the SHARC+ C-ABI guarantee that R0 (return /
/// fourth arg) and R4 (first arg) are caller-saved.
pub const CALLER_SAVED: &[u8] = &[0, 1, 2, 3, 4, 5, 6, 7];

/// Data registers the SHARC+ C-ABI expects to survive a CJUMP:
/// R8-R15. Selcc's prologue saves each one the body actually
/// writes, and its epilogue restores them before the RFRAME return.
pub const CALLEE_SAVED: &[u8] = &[8, 9, 10, 11, 12, 13, 14, 15];

/// Return value is in R0.
pub const RETURN_REG: u8 = 0;

/// Pseudo-vreg that the register allocator pins to physical R0. isel
/// uses this number as the destination vreg for the return-value move
/// so that post-regalloc the `Pass` ends up writing physical R0, not
/// whatever physical register got assigned to any real vreg. A plain
/// `target::RETURN_REG` does not work here: regalloc interprets the
/// rn/rx fields of compute instructions as vreg numbers and remaps
/// them through its pinning table, and under the SHARC+ C-ABI
/// `target::RETURN_REG` (= 0) collides with the fourth argument slot
/// (R0 is ARG_REGS[3]). Any value outside 0..NUM_REGS works; 0xFF is
/// chosen to stay clear of both the physical register numbers and
/// any normal vreg the rest of the compiler might produce.
pub const RETURN_REG_VREG: u8 = 0xFF;

/// 16 data registers total (R0-R15).
pub const NUM_REGS: u8 = 16;

// Condition codes as encoded in instruction words (from disasm.rs cond_name).

pub const COND_EQ: u8 = 0;
pub const COND_LT: u8 = 1;
pub const COND_LE: u8 = 2;
pub const COND_NE: u8 = 16;
pub const COND_GE: u8 = 17;
pub const COND_GT: u8 = 18;
pub const COND_TRUE: u8 = 31;

/// Universal register encoding: R-group is 0x0n, I-group is 0x1n.
pub const fn ureg_r(index: u8) -> u8 {
    index & 0xF
}

/// Universal register encoding for I-registers.
pub const fn ureg_i(index: u8) -> u8 {
    0x10 | (index & 0xF)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn register_conventions() {
        assert_eq!(STACK_PTR, 7);
        assert_eq!(FRAME_PTR, 6);
        assert_eq!(RETURN_REG, 0);
        assert_eq!(NUM_REGS, 16);
        assert_eq!(ARG_REGS, &[4, 8, 12, 0]);
        assert_eq!(CALLER_SAVED.len(), 8);
        assert_eq!(CALLEE_SAVED.len(), 8);
        // Caller-saved and callee-saved should cover all 16 registers.
        assert_eq!(CALLER_SAVED.len() + CALLEE_SAVED.len(), NUM_REGS as usize);
    }

    #[test]
    fn ureg_encoding() {
        assert_eq!(ureg_r(0), 0x00);
        assert_eq!(ureg_r(15), 0x0F);
        assert_eq!(ureg_i(0), 0x10);
        assert_eq!(ureg_i(STACK_PTR), 0x17);
        assert_eq!(ureg_i(FRAME_PTR), 0x16);
    }

    #[test]
    fn condition_codes() {
        assert_eq!(COND_EQ, 0);
        assert_eq!(COND_NE, 16);
        assert_eq!(COND_TRUE, 31);
        // NE should be EQ + 16 (complemented condition pattern).
        assert_eq!(COND_NE, COND_EQ + 16);
        assert_eq!(COND_GE, COND_LT + 16);
        assert_eq!(COND_GT, COND_LE + 16);
    }
}
