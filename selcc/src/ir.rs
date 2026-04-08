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
    /// dst = lhs / rhs
    Div(VReg, VReg, VReg),
    /// dst = lhs % rhs
    Mod(VReg, VReg, VReg),
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
    /// dst = -src
    Neg(VReg, VReg),
    /// dst = ~src
    BitNot(VReg, VReg),
    /// Compare lhs, rhs -- sets flags for a subsequent BranchCond
    Cmp(VReg, VReg),
    /// Return with optional value register
    Ret(Option<VReg>),
    /// dst = call name(args...)
    Call(VReg, String, Vec<VReg>),
    /// dst = call indirect through addr_vreg(args...)
    CallIndirect(VReg, VReg, Vec<VReg>),
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
    /// *global_addr = src
    StoreGlobal(VReg, String),
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
    /// dst = FIX src (float to integer conversion)
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
