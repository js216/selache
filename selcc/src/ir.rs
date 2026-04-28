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
    /// dst = address of caller-pushed stack argument at index `k`.
    /// Computes `I6 + k + 1` without dereferencing. Used to anchor a
    /// `va_list` at the first variadic argument (which lives one slot
    /// past the last named argument in the caller's pushed-args area).
    StackArgAddr(VReg, u32),

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

/// Compress the live virtual-register set in `ir` into the tag-bit-safe
/// u8 range 0..0x80, returning the renumbered op stream.
///
/// Background. `MachInstr` carries register operands as `u8` and uses
/// bit 7 (0x80, `UREG_FIXED_TAG`) plus a low-nibble group code
/// (0x10 = I-reg, 0x20 = M-reg) to distinguish a fixed register
/// encoding (an I-register reload, the indirect-call frame-link push)
/// from a raw vreg id awaiting allocation. Lowering allocates vregs
/// from a u32 counter (`LowerCtx::next_vreg`) that grows monotonically
/// for every fresh value: a function with enough simultaneously-live
/// values (e.g. a three-level array index where every intermediate
/// pointer arithmetic step occupies its own vreg) crosses 128 and the
/// `*dst as u8` truncations in isel start producing ids whose bit 7 is
/// set. The regalloc rewrite then sees `LoadImm { ureg: 144 }` (= 0x90,
/// `UREG_FIXED_TAG | I0`), takes its tag fast-path, and emits
/// `I0 = imm` -- silently miscompiling the function with stray writes
/// into the index-register file.
///
/// This pass is the structural fix: it walks the IR, collects every
/// vreg id actually referenced (plus the implicit `lo+1` mate of every
/// 64-bit pair anchor so the 64-bit lo/hi adjacency survives the
/// renumbering), and assigns each a fresh dense id in 0..0x80. Vregs
/// in the parameter range (0..num_params) are kept identity-mapped so
/// the ARG_REGS pinning installed by `regalloc::Allocator::new`
/// continues to resolve correctly.
///
/// Pair anchors are detected from the 64-bit op shape: any IrOp whose
/// IR variant name ends in `64` references one or more `lo` halves and
/// implicitly uses `lo + 1` for the hi half. Those pair lo halves are
/// allocated *first*, two contiguous slots at a time, so `map[lo] + 1
/// == map[lo + 1]` after renumbering. Single-use vregs (32-bit
/// scalars, pointers, addresses) consume one slot each afterward.
pub fn renumber_vregs(ir: &[IrOp], num_params: u32) -> Vec<IrOp> {
    use std::collections::{BTreeMap, BTreeSet};

    // Pair anchors: lo-half vregs of any 64-bit op. The hi half is
    // implicit at `lo + 1` and may not appear elsewhere in the op
    // stream, so we synthesise it into the used set below.
    let mut anchors: BTreeSet<VReg> = BTreeSet::new();
    // Every vreg explicitly mentioned in the op stream.
    let mut used: BTreeSet<VReg> = BTreeSet::new();

    let record_used = |v: VReg, used: &mut BTreeSet<VReg>| {
        used.insert(v);
    };
    let record_anchor = |v: VReg,
                         anchors: &mut BTreeSet<VReg>,
                         used: &mut BTreeSet<VReg>| {
        anchors.insert(v);
        used.insert(v);
        used.insert(v + 1);
    };

    for op in ir {
        match op {
            IrOp::LoadImm(d, _)
            | IrOp::LoadGlobal(d, _)
            | IrOp::ReadGlobal(d, _)
            | IrOp::StoreGlobal(d, _)
            | IrOp::LoadString(d, _)
            | IrOp::LoadWideString(d, _)
            | IrOp::StackSave(d)
            | IrOp::StackRestore(d)
            | IrOp::FrameAddr(d, _)
            | IrOp::LoadStackArg(d, _)
            | IrOp::StackArgAddr(d, _)
            | IrOp::LoadStructRetPtr(d) => {
                record_used(*d, &mut used);
            }
            IrOp::Copy(a, b)
            | IrOp::Neg(a, b)
            | IrOp::BitNot(a, b)
            | IrOp::Cmp(a, b)
            | IrOp::UCmp(a, b)
            | IrOp::FNeg(a, b)
            | IrOp::IntToFloat(a, b)
            | IrOp::FloatToInt(a, b)
            | IrOp::FCmp(a, b)
            | IrOp::StackAlloc(a, b)
            | IrOp::Load(a, b, _)
            | IrOp::Store(a, b, _) => {
                record_used(*a, &mut used);
                record_used(*b, &mut used);
            }
            IrOp::Add(a, b, c)
            | IrOp::Sub(a, b, c)
            | IrOp::Mul(a, b, c)
            | IrOp::Div(a, b, c)
            | IrOp::UDiv(a, b, c)
            | IrOp::Mod(a, b, c)
            | IrOp::UMod(a, b, c)
            | IrOp::BitAnd(a, b, c)
            | IrOp::BitOr(a, b, c)
            | IrOp::BitXor(a, b, c)
            | IrOp::Shl(a, b, c)
            | IrOp::Shr(a, b, c)
            | IrOp::Lshr(a, b, c)
            | IrOp::FAdd(a, b, c)
            | IrOp::FSub(a, b, c)
            | IrOp::FMul(a, b, c)
            | IrOp::FDiv(a, b, c) => {
                record_used(*a, &mut used);
                record_used(*b, &mut used);
                record_used(*c, &mut used);
            }
            IrOp::Ret(opt) => {
                if let Some(v) = opt {
                    record_used(*v, &mut used);
                }
            }
            IrOp::Call(d, _, args) => {
                record_used(*d, &mut used);
                for a in args {
                    record_used(*a, &mut used);
                }
            }
            IrOp::CallIndirect(d, addr, args) => {
                record_used(*d, &mut used);
                record_used(*addr, &mut used);
                for a in args {
                    record_used(*a, &mut used);
                }
            }
            IrOp::CallStruct { name: _, args, dst_addr, .. } => {
                record_used(*dst_addr, &mut used);
                for a in args {
                    record_used(*a, &mut used);
                }
            }
            IrOp::CallIndirectStruct { addr, args, dst_addr, .. } => {
                record_used(*addr, &mut used);
                record_used(*dst_addr, &mut used);
                for a in args {
                    record_used(*a, &mut used);
                }
            }
            IrOp::RetStruct { src_addr, dst_addr, .. } => {
                record_used(*src_addr, &mut used);
                if let Some(v) = dst_addr {
                    record_used(*v, &mut used);
                }
            }
            IrOp::Branch(_)
            | IrOp::BranchCond(_, _)
            | IrOp::Label(_)
            | IrOp::HardwareLoop { .. }
            | IrOp::Nop => {}

            // ---- 64-bit ops: lo halves are pair anchors. -------
            IrOp::LoadImm64(lo, _) => record_anchor(*lo, &mut anchors, &mut used),
            IrOp::Copy64(a, b)
            | IrOp::Neg64(a, b)
            | IrOp::BitNot64(a, b)
            | IrOp::Cmp64(a, b)
            | IrOp::UCmp64(a, b) => {
                record_anchor(*a, &mut anchors, &mut used);
                record_anchor(*b, &mut anchors, &mut used);
            }
            IrOp::Add64(a, b, c)
            | IrOp::Sub64(a, b, c)
            | IrOp::Mul64(a, b, c)
            | IrOp::Div64(a, b, c)
            | IrOp::UDiv64(a, b, c)
            | IrOp::Mod64(a, b, c)
            | IrOp::UMod64(a, b, c)
            | IrOp::BitAnd64(a, b, c)
            | IrOp::BitOr64(a, b, c)
            | IrOp::BitXor64(a, b, c) => {
                record_anchor(*a, &mut anchors, &mut used);
                record_anchor(*b, &mut anchors, &mut used);
                record_anchor(*c, &mut anchors, &mut used);
            }
            // Shift count is a 32-bit single, not a 64-bit pair.
            IrOp::Shl64(a, b, c)
            | IrOp::Shr64(a, b, c)
            | IrOp::UShr64(a, b, c) => {
                record_anchor(*a, &mut anchors, &mut used);
                record_anchor(*b, &mut anchors, &mut used);
                record_used(*c, &mut used);
            }
            // base is a 32-bit address, dst/src is the 64-bit pair.
            IrOp::Load64(dst, base, _) => {
                record_anchor(*dst, &mut anchors, &mut used);
                record_used(*base, &mut used);
            }
            IrOp::Store64(src, base, _) => {
                record_anchor(*src, &mut anchors, &mut used);
                record_used(*base, &mut used);
            }
            IrOp::ReadGlobal64(dst, _) | IrOp::WriteGlobal64(dst, _) => {
                record_anchor(*dst, &mut anchors, &mut used);
            }
            IrOp::IntToLongLong(dst, src)
            | IrOp::SExtToLongLong(dst, src) => {
                record_anchor(*dst, &mut anchors, &mut used);
                record_used(*src, &mut used);
            }
            IrOp::LongLongToInt(dst, src) => {
                record_used(*dst, &mut used);
                record_anchor(*src, &mut anchors, &mut used);
            }
        }
    }

    // Build the renumbering map. Parameter slots (0..num_params) keep
    // identity so the ARG_REGS pinning in regalloc still resolves.
    // The remaining ids are first allocated in pair-aligned doubles
    // for every anchor, then in singles for every non-anchor id.
    let mut map: BTreeMap<VReg, VReg> = BTreeMap::new();
    let mut next: VReg = num_params;
    // Identity-map the parameter slots that actually appear.
    for v in &used {
        if *v < num_params {
            map.insert(*v, *v);
        }
    }
    // Bump `next` past any parameter-pair anchor whose hi half lands
    // inside or at the boundary of the parameter range; the identity
    // mapping above already reserved both halves.
    while next < num_params {
        next += 1;
    }
    // Reserve vreg 0 for the isel `base==0` frame-relative sentinel in
    // `IrOp::Load`/`IrOp::Store`. The frontend emits a literal `0` in
    // the base position to mean "frame-relative access", so vreg 0 must
    // map to itself and must never be reassigned to a real value. When
    // the function has no parameters, the dense numbering would
    // otherwise start at 0 and reuse that id for the first non-pair
    // vreg, defeating the `alloc_vreg_ptr` guarantee that pointer bases
    // are non-zero. Pinning 0 -> 0 here and bumping `next` past 0
    // preserves the invariant after compression.
    map.entry(0).or_insert(0);
    if next == 0 {
        next = 1;
    }
    // Anchors first: two consecutive slots each. Skip anchors that
    // are already identity-mapped (parameter pair lo halves, or the
    // base==0 sentinel pin above).
    for &a in &anchors {
        if map.contains_key(&a) {
            // The lo half is already pinned (parameter slot or the
            // vreg-0 sentinel). The hi half must still land at
            // `map[a] + 1` to preserve the 64-bit pair-adjacency
            // invariant that isel relies on (`*lo as u16` and `*lo +
            // 1 as u16` must address the two consecutive halves of
            // the same pair after renumbering). Without this, a
            // 64-bit anchor that happens to use vreg 0 as its lo
            // half (e.g. a no-arg function whose first body value is
            // a `long long` literal) would have its hi half
            // independently renumbered to whatever single-slot id
            // came next, breaking every Load64/Store64/arith expansion
            // that targets the pair.
            let lo_dense = map[&a];
            let hi_dense = lo_dense + 1;
            map.entry(a + 1).or_insert(hi_dense);
            // Bump `next` past the hi-half slot so it is not handed
            // out to a subsequent single. Skip the bump if the
            // parameter range already accounted for both halves.
            if next <= hi_dense {
                next = hi_dense + 1;
            }
            continue;
        }
        // Skip the anchor's hi-half if it was independently mapped
        // already (rare: only when an op uses `a + 1` as a 32-bit
        // single elsewhere). The pair allocation below assumes the
        // hi half has not been bound yet.
        if map.contains_key(&(a + 1)) {
            // Defensive: the hi half was already bound to something
            // else, so we cannot give the pair contiguous slots.
            // Bail out by mapping the lo half normally; this loses
            // 64-bit pair adjacency but keeps the renumbering total.
            map.insert(a, next);
            next += 1;
            continue;
        }
        map.insert(a, next);
        map.insert(a + 1, next + 1);
        next += 2;
    }
    // Singles: every used vreg not yet mapped.
    for &v in &used {
        if map.contains_key(&v) {
            continue;
        }
        map.insert(v, next);
        next += 1;
    }

    // Hard cap: 0x8000 keeps every renumbered id below the
    // UREG_FIXED_TAG bit (now widened to u16's bit 15), so no `as u16`
    // cast collides with the tagged-fixed-encoding range that the
    // regalloc rewrite uses.
    assert!(
        next <= 0x8000,
        "renumber_vregs: function uses {next} vregs after compression, \
         exceeds the 0x8000 tag-bit-safe cap"
    );

    // Apply mapping. `apply` is a single-vreg lookup; vregs missing
    // from the map (only possible if the analysis above missed a
    // variant) are left untouched -- but `assert!` below the renumber
    // catches any such omission early.
    let apply = |v: VReg| -> VReg { *map.get(&v).unwrap_or(&v) };

    ir.iter().map(|op| match op {
        IrOp::LoadImm(d, x) => IrOp::LoadImm(apply(*d), *x),
        IrOp::Copy(a, b) => IrOp::Copy(apply(*a), apply(*b)),
        IrOp::Add(a, b, c) => IrOp::Add(apply(*a), apply(*b), apply(*c)),
        IrOp::Sub(a, b, c) => IrOp::Sub(apply(*a), apply(*b), apply(*c)),
        IrOp::Mul(a, b, c) => IrOp::Mul(apply(*a), apply(*b), apply(*c)),
        IrOp::Div(a, b, c) => IrOp::Div(apply(*a), apply(*b), apply(*c)),
        IrOp::UDiv(a, b, c) => IrOp::UDiv(apply(*a), apply(*b), apply(*c)),
        IrOp::Mod(a, b, c) => IrOp::Mod(apply(*a), apply(*b), apply(*c)),
        IrOp::UMod(a, b, c) => IrOp::UMod(apply(*a), apply(*b), apply(*c)),
        IrOp::BitAnd(a, b, c) => IrOp::BitAnd(apply(*a), apply(*b), apply(*c)),
        IrOp::BitOr(a, b, c) => IrOp::BitOr(apply(*a), apply(*b), apply(*c)),
        IrOp::BitXor(a, b, c) => IrOp::BitXor(apply(*a), apply(*b), apply(*c)),
        IrOp::Shl(a, b, c) => IrOp::Shl(apply(*a), apply(*b), apply(*c)),
        IrOp::Shr(a, b, c) => IrOp::Shr(apply(*a), apply(*b), apply(*c)),
        IrOp::Lshr(a, b, c) => IrOp::Lshr(apply(*a), apply(*b), apply(*c)),
        IrOp::Neg(a, b) => IrOp::Neg(apply(*a), apply(*b)),
        IrOp::BitNot(a, b) => IrOp::BitNot(apply(*a), apply(*b)),
        IrOp::Cmp(a, b) => IrOp::Cmp(apply(*a), apply(*b)),
        IrOp::UCmp(a, b) => IrOp::UCmp(apply(*a), apply(*b)),
        IrOp::Ret(opt) => IrOp::Ret(opt.map(apply)),
        IrOp::LoadStructRetPtr(d) => IrOp::LoadStructRetPtr(apply(*d)),
        IrOp::Call(d, n, args) => IrOp::Call(
            apply(*d), n.clone(), args.iter().map(|a| apply(*a)).collect()),
        IrOp::CallIndirect(d, addr, args) => IrOp::CallIndirect(
            apply(*d), apply(*addr),
            args.iter().map(|a| apply(*a)).collect()),
        IrOp::CallStruct { name, args, dst_addr, num_words } => IrOp::CallStruct {
            name: name.clone(),
            args: args.iter().map(|a| apply(*a)).collect(),
            dst_addr: apply(*dst_addr),
            num_words: *num_words,
        },
        IrOp::CallIndirectStruct { addr, args, dst_addr, num_words } => IrOp::CallIndirectStruct {
            addr: apply(*addr),
            args: args.iter().map(|a| apply(*a)).collect(),
            dst_addr: apply(*dst_addr),
            num_words: *num_words,
        },
        IrOp::RetStruct { src_addr, dst_addr, num_words } => IrOp::RetStruct {
            src_addr: apply(*src_addr),
            dst_addr: dst_addr.map(apply),
            num_words: *num_words,
        },
        IrOp::Branch(l) => IrOp::Branch(*l),
        IrOp::BranchCond(c, l) => IrOp::BranchCond(*c, *l),
        IrOp::Label(l) => IrOp::Label(*l),
        IrOp::Load(d, b, off) => IrOp::Load(apply(*d), apply(*b), *off),
        IrOp::Store(s, b, off) => IrOp::Store(apply(*s), apply(*b), *off),
        IrOp::LoadGlobal(d, n) => IrOp::LoadGlobal(apply(*d), n.clone()),
        IrOp::ReadGlobal(d, n) => IrOp::ReadGlobal(apply(*d), n.clone()),
        IrOp::StoreGlobal(s, n) => IrOp::StoreGlobal(apply(*s), n.clone()),
        IrOp::ReadGlobal64(d, n) => IrOp::ReadGlobal64(apply(*d), n.clone()),
        IrOp::WriteGlobal64(s, n) => IrOp::WriteGlobal64(apply(*s), n.clone()),
        IrOp::LoadString(d, idx) => IrOp::LoadString(apply(*d), *idx),
        IrOp::LoadWideString(d, idx) => IrOp::LoadWideString(apply(*d), *idx),
        IrOp::FAdd(a, b, c) => IrOp::FAdd(apply(*a), apply(*b), apply(*c)),
        IrOp::FSub(a, b, c) => IrOp::FSub(apply(*a), apply(*b), apply(*c)),
        IrOp::FMul(a, b, c) => IrOp::FMul(apply(*a), apply(*b), apply(*c)),
        IrOp::FDiv(a, b, c) => IrOp::FDiv(apply(*a), apply(*b), apply(*c)),
        IrOp::FNeg(a, b) => IrOp::FNeg(apply(*a), apply(*b)),
        IrOp::IntToFloat(a, b) => IrOp::IntToFloat(apply(*a), apply(*b)),
        IrOp::FloatToInt(a, b) => IrOp::FloatToInt(apply(*a), apply(*b)),
        IrOp::FCmp(a, b) => IrOp::FCmp(apply(*a), apply(*b)),
        IrOp::HardwareLoop { count, end_label } => IrOp::HardwareLoop {
            count: *count, end_label: *end_label,
        },
        IrOp::StackSave(d) => IrOp::StackSave(apply(*d)),
        IrOp::StackRestore(d) => IrOp::StackRestore(apply(*d)),
        IrOp::StackAlloc(a, b) => IrOp::StackAlloc(apply(*a), apply(*b)),
        IrOp::Nop => IrOp::Nop,
        IrOp::FrameAddr(d, off) => IrOp::FrameAddr(apply(*d), *off),
        IrOp::LoadStackArg(d, k) => IrOp::LoadStackArg(apply(*d), *k),
        IrOp::StackArgAddr(d, k) => IrOp::StackArgAddr(apply(*d), *k),
        IrOp::LoadImm64(d, x) => IrOp::LoadImm64(apply(*d), *x),
        IrOp::Copy64(a, b) => IrOp::Copy64(apply(*a), apply(*b)),
        IrOp::Add64(a, b, c) => IrOp::Add64(apply(*a), apply(*b), apply(*c)),
        IrOp::Sub64(a, b, c) => IrOp::Sub64(apply(*a), apply(*b), apply(*c)),
        IrOp::Mul64(a, b, c) => IrOp::Mul64(apply(*a), apply(*b), apply(*c)),
        IrOp::Div64(a, b, c) => IrOp::Div64(apply(*a), apply(*b), apply(*c)),
        IrOp::UDiv64(a, b, c) => IrOp::UDiv64(apply(*a), apply(*b), apply(*c)),
        IrOp::Mod64(a, b, c) => IrOp::Mod64(apply(*a), apply(*b), apply(*c)),
        IrOp::UMod64(a, b, c) => IrOp::UMod64(apply(*a), apply(*b), apply(*c)),
        IrOp::BitAnd64(a, b, c) => IrOp::BitAnd64(apply(*a), apply(*b), apply(*c)),
        IrOp::BitOr64(a, b, c) => IrOp::BitOr64(apply(*a), apply(*b), apply(*c)),
        IrOp::BitXor64(a, b, c) => IrOp::BitXor64(apply(*a), apply(*b), apply(*c)),
        IrOp::Shl64(a, b, c) => IrOp::Shl64(apply(*a), apply(*b), apply(*c)),
        IrOp::Shr64(a, b, c) => IrOp::Shr64(apply(*a), apply(*b), apply(*c)),
        IrOp::UShr64(a, b, c) => IrOp::UShr64(apply(*a), apply(*b), apply(*c)),
        IrOp::Neg64(a, b) => IrOp::Neg64(apply(*a), apply(*b)),
        IrOp::BitNot64(a, b) => IrOp::BitNot64(apply(*a), apply(*b)),
        IrOp::Cmp64(a, b) => IrOp::Cmp64(apply(*a), apply(*b)),
        IrOp::UCmp64(a, b) => IrOp::UCmp64(apply(*a), apply(*b)),
        IrOp::Load64(d, b, off) => IrOp::Load64(apply(*d), apply(*b), *off),
        IrOp::Store64(s, b, off) => IrOp::Store64(apply(*s), apply(*b), *off),
        IrOp::IntToLongLong(d, s) => IrOp::IntToLongLong(apply(*d), apply(*s)),
        IrOp::SExtToLongLong(d, s) => IrOp::SExtToLongLong(apply(*d), apply(*s)),
        IrOp::LongLongToInt(d, s) => IrOp::LongLongToInt(apply(*d), apply(*s)),
    }).collect()
}
