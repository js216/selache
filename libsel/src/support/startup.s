// SPDX-License-Identifier: MIT
// startup.s --- SHARC+ reset vector, IVT, and C runtime bring-up
// Copyright (c) 2026 Jakob Kastelic

// SHARC+ boots into the IVT at PM 0x90000. Slot 0 is the
// emulator interrupt; slot 1 (offset 0x04) is the reset vector.
// The boot ROM stages the .ldr image and then jumps to the
// address stored in RCU0_SVECT0; the IVT in this file lands
// reset on `start` below.

// SHARC+ core MMRs and MODE1 bits (PRM 29-50, 31-2).
#define REG_SHBTB_CFG    0x00031400
#define BITP_SHBTB_CFG_DIS 0
#define BIT_MODE1_NESTM  0x00000800
#define BIT_MODE1_RND32  0x00010000
#define BIT_MODE1_CBUFEN 0x01000000

// ============================================================
// Interrupt Vector Table (PRM chapter 17, Table 17-3)
// ============================================================
// Each IVT slot holds 4 NW (48-bit) instructions = 24 bytes.
// Unused slots are filled with RTIs.

.SECTION/CODE/NW/DOUBLEANY iv_code;

.EXTERN start;

___interrupt_table:

// slot 0 (0x00): emulator interrupt --- unused
   NOP; NOP; NOP; NOP;

// slot 1 (0x04): reset --- absolute jump to start. NOP delay slot
// then JUMP, then NOPs to fill the 4-instruction slot.
   NOP;
   JUMP start;
   NOP;
   NOP;

// The remaining slots are unused. A spurious interrupt should
// never fire; if one does, trap it by jumping into an infinite
// IDLE loop rather than silently returning via RTI. This way a
// stray interrupt shows up as a hard hang (core stopped, UART
// output ceases) rather than a mysterious corruption from a
// re-entered code path.
   JUMP .spurious_trap; NOP; NOP; NOP;  // 0x08
   JUMP .spurious_trap; NOP; NOP; NOP;  // 0x0c
   JUMP .spurious_trap; NOP; NOP; NOP;  // 0x10
   JUMP .spurious_trap; NOP; NOP; NOP;  // 0x14
   JUMP .spurious_trap; NOP; NOP; NOP;  // 0x18
.___interrupt_table.end:

.spurious_trap:
   IDLE;
   JUMP .spurious_trap;
.spurious_trap.end:

// ============================================================
// Reset entry: bring the core into a usable state
// ============================================================

.SECTION/CODE/DOUBLEANY seg_pmco;

.EXTERN main.;
.EXTERN ldf_stack_space, ldf_stack_length;  // defined by link.ldf

.GLOBAL start;
start:
      // Disable the SHARC+ branch target buffer (BTB). With BTB
      // enabled, speculative branches into freshly written code can
      // fire spurious branches and replay calls. The boot ROM may
      // have left its predictions in a stale state. After writing
      // SHBTB_CFG, the SHARC+ errata require >= 12 uncompressed
      // instructions before another change of flow.
      R0 = DM(REG_SHBTB_CFG);
      R0 = BSET R0 BY BITP_SHBTB_CFG_DIS;
      DM(REG_SHBTB_CFG) = R0;
      .NOCOMPRESS;
      NOP; NOP; NOP; NOP; NOP; NOP; NOP; NOP; NOP; NOP; NOP; NOP;
      .COMPRESS;

      // M-register defaults the the SHARC+ C compiler C calling convention
      // expects. M14=+1 is load-bearing: it compensates the -1
      // baked into the return PC pushed by `cjump x. (db)`, so
      // the callee's `jump (m14, i12)` lands on the right insn.
      M5  =  0;  M6  = +1;  M7  = -1;
      M13 =  0;  M14 = +1;  M15 = -1;

      // Zero every L register except L6/L7 (the stack length,
      // set below). the SHARC+ C compiler expects the stack DAG to be a circular
      // buffer; non-zero L on any other DAG would also turn it
      // into a circular buffer, so we zero the rest.
      L0 = 0;  L1 = 0;  L2  = 0; L3  = 0;
      L4 = 0;  L5 = 0;
      L8 = 0;  L9 = 0;  L10 = 0; L11 = 0;
      L12 = 0; L13 = 0; L14 = 0; L15 = 0;

      // Stack pointer (I7) and frame pointer (I6). the SHARC+ C compiler uses
      // I7 as SP (post-decrement push via M7) and I6 as FP, both
      // in word addressing. ldf_stack_space / ldf_stack_length
      // are byte symbols from link.ldf, so we set the byte values
      // first and B2W() converts in place. L7 stays in bytes --
      // the the SHARC+ C compiler stack DAG circular wrap operates on the literal
      // L value the compiler picked, not on a word/byte conversion.
      B7 = ldf_stack_space;
      I7 = ldf_stack_space + ldf_stack_length;
      L7 = ldf_stack_length;
      B6 = B7;  I6 = I7;  L6 = L7;

      // MODE1: enable circular buffer addressing (CBUFEN), the
      // 32-bit floating-point rounding boundary (RND32), and
      // nested interrupt mode (NESTM). These match the state
      // the the SHARC+ C compiler C runtime expects.
      BIT SET MODE1 (BIT_MODE1_CBUFEN | BIT_MODE1_RND32 | BIT_MODE1_NESTM);
      NOP; NOP; NOP; NOP; NOP; NOP; NOP; NOP;
      NOP; NOP; NOP;

      // argc = 0, argv = NULL for main().
      R4 = 0;
      R8 = 0;

      // Call main(). The two delay-slot pushes match every other
      // C call: a NULL frame-pointer sentinel for stack-unwind
      // termination and the return PC (with the -1 mode-bit twiddle
      // so M14 = +1 lands us back here).
      JUMP main. (DB);
         DM(I7, M7) = 0;
         DM(I7, M7) = .halt-1;

.halt:
      IDLE;
      JUMP .halt;

.start.end:
