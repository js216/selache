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

/// Integer/pointer argument registers for the SHARC+ C-ABI: the
/// first three scalar args go in R4, R8, R12 (in that order).
/// The 4th and subsequent args are passed on the stack, NOT in R0.
/// R0 is reserved exclusively for the return value.
///
/// A 4-argument function reads the 4th arg via DM(M6,I6) from the
/// caller's frame push, not from R0.
pub const ARG_REGS: &[u8] = &[4, 8, 12];

/// Data registers that do NOT need to be preserved across a
/// CJUMP. R2 is excluded: it holds the frame-link value (I6)
/// and is pushed by the CJUMP delayed-branch slot for RFRAME
/// to restore the caller's frame pointer on return.
pub const CALLER_SAVED: &[u8] = &[0, 1, 3, 4, 5, 6, 7];

/// Data registers the SHARC+ C-ABI expects to survive a CJUMP:
/// R8-R15. Selcc's prologue saves each one the body actually
/// writes, and its epilogue restores them before the RFRAME return.
pub const CALLEE_SAVED: &[u8] = &[8, 9, 10, 11, 12, 13, 14, 15];

/// Return value is in R0.
pub const RETURN_REG: u8 = 0;

/// Second return-value register for small-struct returns. The SHARC+
/// C-ABI at `-proc ADSP-21569 -char-size-8` splits a two-word struct return
/// across R0 (first word / field at byte offset 0) and R1 (second
/// word / field at byte offset 4); larger struct returns go through
/// a hidden pointer the caller passes in R1 instead. Both conventions
/// reuse R1, so R1 is reserved whenever a struct return is in flight
/// and must not appear in the scalar argument registers.
pub const RETURN_REG_HI: u8 = 1;

/// Register carrying the hidden destination pointer for struct returns
/// larger than `STRUCT_RET_MAX_REGS` words. The ABI
/// places the caller's buffer address in R1 (alongside scalar args
/// R4/R8/R12) and the callee returns R0 = R1 after writing through it.
pub const STRUCT_RET_PTR_REG: u8 = 1;

/// Largest struct (in 32-bit words) that is returned in registers
/// (R0 for 1 word, R0:R1 for 2 words). Strictly-greater sizes use the
/// hidden-pointer convention.
pub const STRUCT_RET_MAX_REGS: u32 = 2;

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

/// Pseudo-vreg pinned to physical R1 for the second word of a
/// small-struct return (R0:R1 pair). Rationale identical to
/// `RETURN_REG_VREG`: regalloc interprets rn/rx fields as vreg numbers
/// and would otherwise remap a bare `1` through its pinning table,
/// colliding with the first argument slot (R4 = ARG_REGS[0] often
/// holds vreg id 0 and spills overlap low ids). 0xFE stays clear of
/// both physical register numbers and ordinary vreg ids.
pub const RETURN_REG_HI_VREG: u8 = 0xFE;

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
/// These produce the *machine* encoding (post-regalloc) used by selinstr.
pub const fn ureg_r(index: u8) -> u8 {
    index & 0xF
}

/// Universal register encoding for I-registers (post-regalloc, machine
/// encoding 0x10..0x1F).
///
/// In selcc-internal pre-regalloc instruction streams the same I-register
/// is carried as `ureg_i_pre(N)` (see below), which sets a high tag bit
/// so the register allocator can tell a fixed I-register apart from a
/// raw R-vreg id. Without the tag, vreg numbers above 15 would alias
/// I0..I15 (both fall in 0x10..0x1F), and the allocator would silently
/// treat the I-register encoding as a vreg id (or vice versa), producing
/// stale-register reads in indirect loads/stores.
pub const fn ureg_i(index: u8) -> u8 {
    0x10 | (index & 0xF)
}

/// Tag bit set on universal-register fields whose value has already been
/// resolved to a fixed machine encoding (an I-register). The regalloc
/// strips this bit before emitting the final instruction; absence of the
/// bit means the field is a raw R-vreg id awaiting allocation.
pub const UREG_FIXED_TAG: u8 = 0x80;

/// Pre-regalloc form of an I-register reference: the machine encoding
/// 0x10..0x1F OR'd with `UREG_FIXED_TAG`.
pub const fn ureg_i_pre(index: u8) -> u8 {
    UREG_FIXED_TAG | ureg_i(index)
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
        assert_eq!(ARG_REGS, &[4, 8, 12]);
        assert_eq!(CALLER_SAVED.len(), 7);    // R2 reserved for frame link
        assert_eq!(CALLEE_SAVED.len(), 8);
        // Caller-saved + callee-saved + 1 reserved (R2) = 16 registers.
        assert_eq!(CALLER_SAVED.len() + CALLEE_SAVED.len() + 1, NUM_REGS as usize);
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
