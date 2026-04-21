// SPDX-License-Identifier: GPL-3.0
// runtime.s --- Compiler runtime intrinsics for the SHARC+
// Copyright (c) 2026 Jakob Kastelic

// the SHARC+ C compiler emits calls to a small set of runtime helpers for integer
// division and remainder, because the SHARC+ has no hardware divider
// for wide integers. Linking with -no-std-lib skips the stock runtime
// library, so these helpers are provided here in a from-scratch
// implementation.
//
//    __divrem_u32 -- unsigned 32-bit divmod
//    __divrem_s32 -- signed 32-bit divmod
//    __divrem_u64 -- unsigned 64-bit divmod
//    __divrem_s64 -- signed 64-bit divmod
//
// ABIs (deduced from the ABI: the helpers inherit
// the normal the SHARC+ C compiler function-call register convention since the SHARC+ C compiler
// emits plain `cjump __divrem_X.` with no pre-call register moves):
//
//   __divrem_u32. / __divrem_s32.
//     In:  R4 = dividend,  R8 = divisor
//     Out: R0 = quotient,  R1 = remainder
//     Clobbers: R0, R1, R4, R8, R12 (+ BTF, M7, M14, I12, LCNTR, ASTAT).
//
//   __divrem_u64. / __divrem_s64.
//     In:  R12:R13 = dividend low:high
//          R14:R15 = divisor  low:high
//     Out: R12:R13 = quotient low:high
//          R14:R15 = remainder low:high
//     Clobbers: R0, R1, R4, R8, R12, R13, R14, R15 (the caller has
//     already spilled R13/R14/R15 across these helpers).
//
// IMPORTANT: R2 is NOT in the the SHARC+ C compiler clobber list -- it is callee-
// preserved. Every helper here spills R2 at entry and reloads it
// before the delayed-branch return. (The cjump prologue also does a
// `dm(i7,m7) = r2` push, but that is the CALLER saving its own R2
// for its own reasons; our spill lands one slot below it.)
//
// Division-by-zero is undefined in C11 and the csmith harness never
// divides by zero, so no zero-divisor case is coded.

.FILE_ATTR libName="libruntime";

.SECTION/PM seg_pmco;

// =====================================================================
// __divrem_u32: unsigned 32-bit divide and remainder
// =====================================================================
// Standard shift-and-subtract loop, 32 iterations.  Register roles:
//   R4  -- dividend in, working dividend (rotates into R0 bit by bit)
//   R8  -- divisor (constant across the loop)
//   R0  -- quotient built up bit by bit (returned as quotient)
//   R1  -- remainder built up bit by bit (returned as remainder)
//
// On each step the dividend shifts left (top bit goes to AC via CI),
// the CI becomes the new LSB of the remainder shift, and whenever the
// remainder is >= divisor we subtract it and BSET a new quotient bit
// in R0's LSB. R4 rotating through its top bit doubles as a counter
// of processed bits (along with LCNTR).
//
// The unsigned compare after shifting uses `IF AC` (no-borrow out of
// the trial subtract). That is correct only as long as the shifted
// remainder still fits in 32 bits. For divisors >= 0x80000000,
// 2 * remainder can exceed 2**32 during the shift and a plain 32-bit
// IF AC misses the conceptual bit 32. In that case the quotient is
// 0 or 1 so we short-circuit it.

.GLOBAL __divrem_u32.;
__divrem_u32.:
      DM(I7, M7) = R2;                 // spill caller's R2

      R8 = PASS R8;                    // test divisor's bit 31
      IF LT JUMP .u32_big_divisor;

      R0 = 0;                          // quotient
      R1 = 0;                          // remainder
      LCNTR = 32, DO .u32_loop_end UNTIL LCE;
            R4 = R4 + R4;              // dividend << 1 (AC = old bit31)
            R1 = R1 + R1 + CI;         // remainder << 1 | old bit31
            R0 = R0 + R0;              // quotient << 1 (AC discarded)
            R12 = R1 - R8;             // trial remainder - divisor
            IF AC R1 = R12;            // commit if no borrow
.u32_loop_end:
            IF AC R0 = BSET R0 BY 0;   // and set a new quotient bit
      R2 = DM(M6, I7);
      I12 = DM(M7, I6);
      JUMP (M14, I12) (DB);
      RFRAME;
      NOP;

.u32_big_divisor:
      // R8 >= 0x80000000: quotient is 0 iff R4 < R8, else 1.
      R12 = R4 - R8;
      R1 = R4;                         // default: remainder = dividend
      R0 = 0;                          // default: quotient = 0
      IF AC R1 = R12;
      IF AC R0 = BSET R0 BY 0;
      R2 = DM(M6, I7);
      I12 = DM(M7, I6);
      JUMP (M14, I12) (DB);
      RFRAME;
      NOP;
.__divrem_u32..end:
      .type __divrem_u32.,STT_FUNC;

// =====================================================================
// __divrem_s32: signed 32-bit divide and remainder
// =====================================================================
// C11 6.5.5: integer division truncates toward zero. Consequences:
//   sign(quotient)  = sign(dividend) XOR sign(divisor)
//   sign(remainder) = sign(dividend)
//
// Strategy: record sign bits, take absolute values, run the unsigned
// core inline, then fix up signs. abs(INT_MIN) stays at 0x80000000,
// which is exactly its magnitude as an unsigned value (2**31) -- the
// big-divisor short-circuit handles that without special casing.
//
// Sign masks must survive the unsigned core, so both masks are spilled
// to the stack.

.GLOBAL __divrem_s32.;
__divrem_s32.:
      DM(I7, M7) = R2;                 // spill caller's R2

      R0 = R4;
      R0 = ASHIFT R0 BY -31;           // dividend sign mask
      R1 = R8;
      R1 = ASHIFT R1 BY -31;           // divisor sign mask
      DM(I7, M7) = R0;                 // stack: dividend sign
      R1 = R1 XOR R0;
      DM(I7, M7) = R1;                 // stack: quotient sign

      // abs(R4) if dividend was negative.
      R4 = PASS R4;
      IF GE JUMP .s32_abs_div_done;
      R4 = -R4;
.s32_abs_div_done:
      // abs(R8) if divisor was negative.
      R8 = PASS R8;
      IF GE JUMP .s32_abs_dsr_done;
      R8 = -R8;
.s32_abs_dsr_done:

      // --- Inline unsigned 32-bit divmod (R4/R8 -> R0/R1). ---
      R8 = PASS R8;
      IF LT JUMP .s32_big_divisor;
      R0 = 0;
      R1 = 0;
      LCNTR = 32, DO .s32_loop_end UNTIL LCE;
            R4 = R4 + R4;
            R1 = R1 + R1 + CI;
            R0 = R0 + R0;
            R12 = R1 - R8;
            IF AC R1 = R12;
.s32_loop_end:
            IF AC R0 = BSET R0 BY 0;
      JUMP .s32_fixup_signs;

.s32_big_divisor:
      R12 = R4 - R8;
      R1 = R4;
      R0 = 0;
      IF AC R1 = R12;
      IF AC R0 = BSET R0 BY 0;
      // fall through

.s32_fixup_signs:
      // Reload sign masks. Top of stack (DM(+1, I7)) is quotient sign;
      // the slot just below (DM(+2, I7)) is the dividend sign.
      R12 = DM(M6, I7);                // quotient sign
      R8  = DM(2, I7);                 // dividend sign

      R12 = PASS R12;
      IF GE JUMP .s32_q_done;
      R0 = -R0;
.s32_q_done:
      R8 = PASS R8;
      IF GE JUMP .s32_r_done;
      R1 = -R1;
.s32_r_done:
      // Caller's R2 is three pushes above: R2, dividend sign, quotient
      // sign. RFRAME below restores I7 = I6 and discards them.
      R2 = DM(3, I7);
      I12 = DM(M7, I6);
      JUMP (M14, I12) (DB);
      RFRAME;
      NOP;
.__divrem_s32..end:
      .type __divrem_s32.,STT_FUNC;

// =====================================================================
// __divrem_u64: unsigned 64-bit divide and remainder
// =====================================================================
// Same shift-and-subtract scheme widened to 64 bits. The running
// remainder lives in R1:R0 (high:low); the dividend/quotient pair is
// R13:R12; the divisor stays parked in R15:R14 until the very end,
// when the remainder is moved into those registers for the return.
//
// `R12 + R12` shifts the dividend-low; the CI chain propagates the
// shift through R13 and then through R1:R0. The trial subtract uses
// the standard two-instruction SBC pair (`R - R` then
// `R - R + CI - 1`) and checks AC of the high half, which is the
// unsigned 64-bit no-borrow flag.
//
// As with the 32-bit helper, we short-circuit divisors with the very
// top bit set: when R15 >= 0x80000000 the quotient is 0 or 1 because
// 2 * divisor exceeds 2**64.

.GLOBAL __divrem_u64.;
__divrem_u64.:
      DM(I7, M7) = R2;

      R15 = PASS R15;
      IF LT JUMP .u64_big_divisor;

      R0 = 0;
      R1 = 0;
      LCNTR = 64, DO .u64_loop_end UNTIL LCE;
            R12 = R12 + R12;           // shift dividend-low,  AC = old bit 31
            R13 = R13 + R13 + CI;      // shift dividend-high, AC = old bit 63
            R0  = R0  + R0  + CI;      // bring old bit 63 into remainder-low
            R1  = R1  + R1  + CI;      // shift remainder-high
            R4  = R0  - R14;           // trial - low (R4 is scratch here)
            R8  = R1  - R15 + CI - 1;  // trial - high (SBC), AC = 64-bit >=
            IF AC R0 = R4;
            IF AC R1 = R8;
.u64_loop_end:
            IF AC R12 = BSET R12 BY 0;

      R14 = R0;
      R15 = R1;
      R2 = DM(M6, I7);
      I12 = DM(M7, I6);
      JUMP (M14, I12) (DB);
      RFRAME;
      NOP;

.u64_big_divisor:
      // divisor >= 2**63: quotient is 0 or 1. AC from the SBC below
      // tells us whether dividend >= divisor.
      R4 = R12 - R14;
      R8 = R13 - R15 + CI - 1;
      R0 = R12;                        // default remainder = dividend
      R1 = R13;
      IF AC R0 = R4;
      IF AC R1 = R8;
      R12 = 0;                         // default quotient = 0
      R13 = 0;
      IF AC R12 = BSET R12 BY 0;
      R14 = R0;
      R15 = R1;
      R2 = DM(M6, I7);
      I12 = DM(M7, I6);
      JUMP (M14, I12) (DB);
      RFRAME;
      NOP;
.__divrem_u64..end:
      .type __divrem_u64.,STT_FUNC;

// =====================================================================
// __divrem_s64: signed 64-bit divide and remainder
// =====================================================================
// Structure mirrors the 32-bit signed helper: record sign masks,
// absolute-value both operands, run the unsigned core inline, then
// sign-fixup the results.
//
// Spill layout on entry (each `DM(I7, M7) = x` push decrements I7):
//   0) caller's R2              (lands at DM(+3, I7_final))
//   1) dividend sign mask       (lands at DM(+2, I7_final))
//   2) quotient sign mask       (lands at DM(+1, I7_final))
// We cannot keep quotient sign in R4 across the loop because R4 is
// reused as the 64-bit trial-subtract scratch inside the loop body.

.GLOBAL __divrem_s64.;
__divrem_s64.:
      DM(I7, M7) = R2;

      R8 = R13;
      R8 = ASHIFT R8 BY -31;           // dividend sign
      R4 = R15;
      R4 = ASHIFT R4 BY -31;
      R4 = R4 XOR R8;                  // quotient sign
      DM(I7, M7) = R8;
      DM(I7, M7) = R4;

      // abs(R13:R12) if dividend was negative (R8 nonzero).
      R8 = PASS R8;
      IF GE JUMP .s64_abs_div_done;
      R2 = 0;
      R12 = R2 - R12;
      R13 = R2 - R13 + CI - 1;
.s64_abs_div_done:

      // abs(R15:R14) if divisor was negative.
      R15 = PASS R15;
      IF GE JUMP .s64_abs_dsr_done;
      R2 = 0;
      R14 = R2 - R14;
      R15 = R2 - R15 + CI - 1;
.s64_abs_dsr_done:

      // --- Inline unsigned 64-bit core (R13:R12 / R15:R14). ---
      R15 = PASS R15;
      IF LT JUMP .s64_big_divisor;

      R0 = 0;
      R1 = 0;
      LCNTR = 64, DO .s64_loop_end UNTIL LCE;
            R12 = R12 + R12;
            R13 = R13 + R13 + CI;
            R0  = R0  + R0  + CI;
            R1  = R1  + R1  + CI;
            R4  = R0  - R14;
            R8  = R1  - R15 + CI - 1;
            IF AC R0 = R4;
            IF AC R1 = R8;
.s64_loop_end:
            IF AC R12 = BSET R12 BY 0;
      R14 = R0;
      R15 = R1;
      JUMP .s64_fixup_signs;

.s64_big_divisor:
      R4 = R12 - R14;
      R8 = R13 - R15 + CI - 1;
      R0 = R12;
      R1 = R13;
      IF AC R0 = R4;
      IF AC R1 = R8;
      R12 = 0;
      R13 = 0;
      IF AC R12 = BSET R12 BY 0;
      R14 = R0;
      R15 = R1;
      // fall through

.s64_fixup_signs:
      R4 = DM(M6, I7);                 // quotient sign
      R8 = DM(2, I7);                  // dividend sign

      R4 = PASS R4;
      IF GE JUMP .s64_q_done;
      R2 = 0;
      R12 = R2 - R12;
      R13 = R2 - R13 + CI - 1;
.s64_q_done:
      R8 = PASS R8;
      IF GE JUMP .s64_r_done;
      R2 = 0;
      R14 = R2 - R14;
      R15 = R2 - R15 + CI - 1;
.s64_r_done:
      R2 = DM(3, I7);                  // caller's R2
      I12 = DM(M7, I6);
      JUMP (M14, I12) (DB);
      RFRAME;
      NOP;
.__divrem_s64..end:
      .type __divrem_s64.,STT_FUNC;

// ___shl64  -- 64-bit left shift
// Input:  R4:R1 = value (lo:hi), R2:R3 = shift count (lo only used)
// Output: R4:R1 = result (lo:hi)
      .GLOBAL ___shl64.;
___shl64.:
      R8 = PASS R2;
      // If shift >= 32, high = low << (shift-32), low = 0
      R9 = 32;
      COMP(R8, R9);
      IF GE JUMP .shl64_big;
      // shift < 32: high = (high << shift) | (low >> (32-shift))
      R1 = LSHIFT R1 BY R8;
      R9 = R9 - R8;
      R10 = LSHIFT R4 BY R9;         // logical right shift (32-shift) -- wrong direction
      // SHARC LSHIFT is unsigned: positive=left, negative=right
      R9 = -R9;
      R10 = LSHIFT R4 BY R9;         // low >> (32-shift)
      R1 = R1 OR R10;
      R4 = LSHIFT R4 BY R8;
      RTS;
.shl64_big:
      R8 = R8 - R9;                  // shift - 32
      R1 = LSHIFT R4 BY R8;
      R4 = 0;
      RTS;
.___shl64..end:
      .type ___shl64.,STT_FUNC;

// ___div64 -- signed 64-bit division for selcc
//   In:  R0:R1 = dividend lo:hi, R2:R3 = divisor lo:hi
//   Out: R0:R1 = quotient lo:hi
      .GLOBAL ___div64.;
___div64.:
      // Move to __divrem_s64 ABI: R12:R13 = dividend, R14:R15 = divisor
      R12 = R0;
      R13 = R1;
      R14 = R2;
      R15 = R3;
      CJUMP __divrem_s64. (DB);
      NOP;
      NOP;
      // Quotient in R12:R13 → R0:R1
      R0 = R12;
      R1 = R13;
      RTS;
.___div64..end:
      .type ___div64.,STT_FUNC;

// ___mod64 -- signed 64-bit modulo for selcc
//   In:  R0:R1 = dividend lo:hi, R2:R3 = divisor lo:hi
//   Out: R0:R1 = remainder lo:hi
      .GLOBAL ___mod64.;
___mod64.:
      R12 = R0;
      R13 = R1;
      R14 = R2;
      R15 = R3;
      CJUMP __divrem_s64. (DB);
      NOP;
      NOP;
      // Remainder in R14:R15 → R0:R1
      R0 = R14;
      R1 = R15;
      RTS;
.___mod64..end:
      .type ___mod64.,STT_FUNC;

// ___udiv64 -- unsigned 64-bit division for selcc
      .GLOBAL ___udiv64.;
___udiv64.:
      R12 = R0;
      R13 = R1;
      R14 = R2;
      R15 = R3;
      CJUMP __divrem_u64. (DB);
      NOP;
      NOP;
      R0 = R12;
      R1 = R13;
      RTS;
.___udiv64..end:
      .type ___udiv64.,STT_FUNC;

// ___umod64 -- unsigned 64-bit modulo for selcc
      .GLOBAL ___umod64.;
___umod64.:
      R12 = R0;
      R13 = R1;
      R14 = R2;
      R15 = R3;
      CJUMP __divrem_u64. (DB);
      NOP;
      NOP;
      R0 = R14;
      R1 = R15;
      RTS;
.___umod64..end:
      .type ___umod64.,STT_FUNC;
