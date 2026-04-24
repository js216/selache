// SPDX-License-Identifier: GPL-3.0
// ir.rs --- Three-address code intermediate representation
// Copyright (c) 2026 Jakob Kastelic

//! Three-address code intermediate representation.
//!
//! Virtual registers (`VReg`) are assigned during lowering and later mapped
//! to physical SHARC data registers by the register allocator.

/// Virtual register handle.
pub type VReg = u32;

/// Label handle used for branch targets.
pub type Label = u32;

/// Condition for conditional branches.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Cond {
    Eq,
    Ne,
    Lt,
    Ge,
    Le,
    Gt,
    /// Branch if value is nonzero (used for logical tests).
    NonZero,
}

/// A single IR operation in three-address code form.
#[derive(Debug, Clone, PartialEq)]
pub enum IrOp {
    /// vreg = constant
    LoadImm(VReg, i64),
    /// dst = src
    Copy(VReg, VReg),
    /// dst = lhs + rhs
    Add(VReg, VReg, VReg),
    /// dst = lhs - rhs
    Sub(VReg, VReg, VReg),
    /// dst = lhs * rhs
    Mul(VReg, VReg, VReg),
    /// dst = lhs / rhs (signed 32-bit divide, runtime call)
    Div(VReg, VReg, VReg),
    /// dst = lhs / rhs (unsigned 32-bit divide, runtime call)
    UDiv(VReg, VReg, VReg),
    /// dst = lhs % rhs (signed 32-bit modulo, runtime call)
    Mod(VReg, VReg, VReg),
    /// dst = lhs % rhs (unsigned 32-bit modulo, runtime call)
    UMod(VReg, VReg, VReg),
    /// dst = lhs & rhs
    BitAnd(VReg, VReg, VReg),
    /// dst = lhs | rhs
    BitOr(VReg, VReg, VReg),
    /// dst = lhs ^ rhs
    BitXor(VReg, VReg, VReg),
    /// dst = lhs << rhs
    Shl(VReg, VReg, VReg),
    /// dst = lhs >> rhs (arithmetic)
    Shr(VReg, VReg, VReg),
    /// dst = lhs >> rhs (logical, zero-fill). Used for unsigned `>>`.
    /// Lowering matches `Shr` (rhs negated by the front-end) but the
    /// instruction selector emits LSHIFT instead of ASHIFT so that
    /// the high-order bits are zero-filled rather than sign-extended.
    Lshr(VReg, VReg, VReg),
    /// dst = -src
    Neg(VReg, VReg),
    /// dst = ~src
    BitNot(VReg, VReg),
    /// Compare lhs, rhs (signed) -- sets flags for a subsequent BranchCond
    Cmp(VReg, VReg),
    /// Compare lhs, rhs (unsigned) -- sets flags for a subsequent BranchCond
    UCmp(VReg, VReg),
    /// Return with optional value register
    Ret(Option<VReg>),
    /// Copy the incoming hidden struct-return pointer (passed by the
    /// caller in R1 per the SHARC+ C-ABI) into `dst`. Only legal at
    /// function entry: the R1 value is clobberable by any intervening
    /// instruction, so the frontend emits this op before any other
    /// use of R1. A no-op for struct returns small enough to travel
    /// in R0:R1 directly.
    LoadStructRetPtr(VReg),
    /// Return a struct by value of `num_words` 32-bit words living at
    /// `src_addr`. For `num_words ≤ target::STRUCT_RET_MAX_REGS` the
    /// words are read into R0 (and R1 for the two-word case) directly
    /// by isel. For larger structs the caller's destination pointer
    /// -- which arrived in R1 at entry and was captured into a frame
    /// slot by a `LoadStructRetPtr` / `Store` pair -- is reloaded into
    /// `dst_addr` by the frontend and passed here; isel copies the
    /// `num_words` words through that pointer and sets R0 = dst_addr.
    RetStruct {
        src_addr: VReg,
        dst_addr: Option<VReg>,
        num_words: u32,
    },
    /// dst = call name(args...)
    Call(VReg, String, Vec<VReg>),
    /// dst = call indirect through addr_vreg(args...)
    CallIndirect(VReg, VReg, Vec<VReg>),
    /// Call `name(args...)` whose return type is a struct of `num_words`
    /// 32-bit words, placing the returned value into the caller-side
    /// buffer at `dst_addr`. For `num_words ≤ 2` the callee returns the
    /// words in R0 (and R1 when num_words == 2); for larger structs the
    /// caller passes `dst_addr` in R1 as a hidden first argument and
    /// the callee writes through that pointer. The isel lowering picks
    /// the right path from `num_words`.
    CallStruct {
        name: String,
        args: Vec<VReg>,
        dst_addr: VReg,
        num_words: u32,
    },
    /// Indirect counterpart of `CallStruct`: the callee address lives
    /// in `addr`. Same ABI split rules as `CallStruct`.
    CallIndirectStruct {
        addr: VReg,
        args: Vec<VReg>,
        dst_addr: VReg,
        num_words: u32,
    },
    /// Unconditional jump
    Branch(Label),
    /// Conditional jump based on most recent Cmp
    BranchCond(Cond, Label),
    /// Label marker
    Label(Label),
    /// dst = mem[base + offset]
    Load(VReg, VReg, i32),
    /// mem[base + offset] = src
    Store(VReg, VReg, i32),
    /// dst = address of global symbol
    LoadGlobal(VReg, String),
    /// dst = value at global symbol (32-bit scalar read)
    ReadGlobal(VReg, String),
    /// *global_addr = src
    StoreGlobal(VReg, String),
    /// dst = 64-bit value at global symbol (read lo and hi words)
    ReadGlobal64(VReg, String),
    /// Store 64-bit value to global symbol
    WriteGlobal64(VReg, String),
    /// dst = address of string literal (by index in the string table)
    LoadString(VReg, usize),
    /// dst = address of wide string literal (by index in the wide string table)
    LoadWideString(VReg, usize),
    /// dst = lhs + rhs (float)
    FAdd(VReg, VReg, VReg),
    /// dst = lhs - rhs (float)
    FSub(VReg, VReg, VReg),
    /// dst = lhs * rhs (float)
    FMul(VReg, VReg, VReg),
    /// dst = lhs / rhs (float, runtime call)
    FDiv(VReg, VReg, VReg),
    /// dst = -src (float)
    FNeg(VReg, VReg),
    /// dst = FLOAT src (integer to float conversion)
    IntToFloat(VReg, VReg),
    /// dst = TRUNC src (float to integer conversion, truncation toward
    /// zero per C99 6.3.1.4p1)
    FloatToInt(VReg, VReg),
    /// Compare float: sets flags for subsequent BranchCond
    FCmp(VReg, VReg),
    /// Hardware loop: LCNTR = count, DO end_label UNTIL LCE.
    /// The body follows immediately and ends at `end_label`.
    HardwareLoop { count: i64, end_label: Label },
    /// dst = current stack pointer (save for VLA restore)
    StackSave(VReg),
    /// Restore stack pointer from saved value (VLA scope exit)
    StackRestore(VReg),
    /// dst = allocate `count` words on the stack (VLA). Returns pointer to
    /// the allocated region. Stack grows downward: SP -= count, dst = SP.
    StackAlloc(VReg, VReg),
    /// No operation (placeholder for asm stubs, etc.)
    Nop,
    /// dst = I6 + offset (compute absolute address of a frame slot).
    /// Used by address-of for local variables so that the resulting pointer
    /// is an absolute memory address usable for indirect load/store.
    FrameAddr(VReg, i32),
    /// dst = caller-pushed stack argument at index `k` (0 = first
    /// argument beyond `target::ARG_REGS`). The SHARC+ C-ABI places
    /// these above the callee's frame pointer: arg `k` lives at
    /// `DM(I6 + k + 1)`, where `I6 = caller_I7` at CJUMP time (see
    /// the `FRAME_SKIP` note in emit_asm.rs). A separate opcode is
    /// required because the ordinary `Load(dst, 0, slot)` path maps
    /// `slot` into the NEGATIVE-offset local-slot region below `I6`.
    LoadStackArg(VReg, u32),

    // ---- 64-bit integer operations (hi/lo register pairs) ----
    // Each 64-bit value occupies two consecutive vregs: (lo, hi).
    // The first VReg of each pair is the "lo" word, hi = lo + 1.

    /// Load a 64-bit immediate into a register pair (lo, hi).
    /// dst_lo = low 32 bits, dst_lo+1 = high 32 bits.
    LoadImm64(VReg, i64),
    /// Copy a 64-bit register pair: dst_lo = src_lo, dst_hi = src_hi.
    Copy64(VReg, VReg),
    /// dst = lhs + rhs (64-bit add with carry)
    Add64(VReg, VReg, VReg),
    /// dst = lhs - rhs (64-bit subtract with borrow)
    Sub64(VReg, VReg, VReg),
    /// dst = lhs * rhs (64-bit multiply via runtime call)
    Mul64(VReg, VReg, VReg),
    /// dst = lhs / rhs (64-bit signed divide via runtime call)
    Div64(VReg, VReg, VReg),
    /// dst = lhs / rhs (64-bit unsigned divide via runtime call)
    UDiv64(VReg, VReg, VReg),
    /// dst = lhs % rhs (64-bit signed modulo via runtime call)
    Mod64(VReg, VReg, VReg),
    /// dst = lhs % rhs (64-bit unsigned modulo via runtime call)
    UMod64(VReg, VReg, VReg),
    /// dst = lhs & rhs (64-bit bitwise AND)
    BitAnd64(VReg, VReg, VReg),
    /// dst = lhs | rhs (64-bit bitwise OR)
    BitOr64(VReg, VReg, VReg),
    /// dst = lhs ^ rhs (64-bit bitwise XOR)
    BitXor64(VReg, VReg, VReg),
    /// dst = lhs << rhs (64-bit left shift, rhs is 32-bit count)
    Shl64(VReg, VReg, VReg),
    /// dst = lhs >> rhs (64-bit arithmetic right shift, rhs is 32-bit count)
    Shr64(VReg, VReg, VReg),
    /// dst = lhs >> rhs (64-bit logical right shift, rhs is 32-bit count)
    UShr64(VReg, VReg, VReg),
    /// dst = -src (64-bit negate)
    Neg64(VReg, VReg),
    /// dst = ~src (64-bit bitwise NOT)
    BitNot64(VReg, VReg),
    /// Compare two 64-bit values, sets flags for subsequent BranchCond.
    /// The condition code encodes signed/unsigned context.
    Cmp64(VReg, VReg),
    /// Unsigned 64-bit compare for unsigned long long.
    UCmp64(VReg, VReg),
    /// Load 64-bit value from memory: dst_lo = mem[base+offset], dst_hi = mem[base+offset+1]
    Load64(VReg, VReg, i32),
    /// Store 64-bit value to memory: mem[base+offset] = src_lo, mem[base+offset+1] = src_hi
    Store64(VReg, VReg, i32),
    /// Zero-extend a 32-bit value to 64 bits: dst_lo = src, dst_hi = 0
    IntToLongLong(VReg, VReg),
    /// Sign-extend a 32-bit value to 64 bits: dst_lo = src, dst_hi = src >> 31
    SExtToLongLong(VReg, VReg),
    /// Truncate a 64-bit value to 32 bits: dst = src_lo
    LongLongToInt(VReg, VReg),
}
