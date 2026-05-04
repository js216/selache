// SPDX-License-Identifier: GPL-3.0
// encode.rs --- SHARC+ 48-bit instruction encoder
// Copyright (c) 2026 Jakob Kastelic

//! SHARC+ 48-bit instruction encoder.
//!
//! This is the exact inverse of `disasm.rs`. For each instruction the
//! disassembler can decode, this module produces the same 48-bit word.

use std::fmt;

// ---------------------------------------------------------------------------
// Public types
// ---------------------------------------------------------------------------

/// ALU operation.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AluOp {
    /// Rn = Rx + Ry
    Add { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rx - Ry
    Sub { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rx + Ry + CI
    AddCi { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rx - Ry + CI - 1
    SubCi { rn: u16, rx: u16, ry: u16 },
    /// Rn = (Rx + Ry)/2
    Avg { rn: u16, rx: u16, ry: u16 },
    /// COMP(Rx, Ry)
    Comp { rx: u16, ry: u16 },
    /// COMPU(Rx, Ry) -- always integer
    CompU { rx: u16, ry: u16 },
    /// Rn = PASS Rx
    Pass { rn: u16, rx: u16 },
    /// Rn = -Rx
    Neg { rn: u16, rx: u16 },
    /// Rn = Rx + CI
    PassCi { rn: u16, rx: u16 },
    /// Rn = Rx + CI - 1
    PassCiMinus1 { rn: u16, rx: u16 },
    /// Rn = Rx + 1
    Inc { rn: u16, rx: u16 },
    /// Rn = Rx - 1
    Dec { rn: u16, rx: u16 },
    /// Rn = ABS Rx
    Abs { rn: u16, rx: u16 },
    /// Rn = Rx AND Ry
    And { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rx OR Ry
    Or { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rx XOR Ry
    Xor { rn: u16, rx: u16, ry: u16 },
    /// Rn = NOT Rx
    Not { rn: u16, rx: u16 },
    /// Rn = MIN(Rx, Ry)
    Min { rn: u16, rx: u16, ry: u16 },
    /// Rn = MAX(Rx, Ry)
    Max { rn: u16, rx: u16, ry: u16 },
    /// Rn = CLIP Rx BY Ry
    Clip { rn: u16, rx: u16, ry: u16 },
}

/// Floating-point ALU operation.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FaluOp {
    /// Fn = Fx + Fy
    Add { rn: u16, rx: u16, ry: u16 },
    /// Fn = Fx - Fy
    Sub { rn: u16, rx: u16, ry: u16 },
    /// Fn = (Fx + Fy)/2
    Avg { rn: u16, rx: u16, ry: u16 },
    /// COMP(Fx, Fy)
    Comp { rx: u16, ry: u16 },
    /// Fn = ABS(Fx + Fy)
    AbsAdd { rn: u16, rx: u16, ry: u16 },
    /// Fn = ABS(Fx - Fy)
    AbsSub { rn: u16, rx: u16, ry: u16 },
    /// Fn = PASS Fx
    Pass { rn: u16, rx: u16 },
    /// Fn = -Fx
    Neg { rn: u16, rx: u16 },
    /// Fn = RND Fx
    Rnd { rn: u16, rx: u16 },
    /// Rn = MANT Fx (result is integer)
    Mant { rn: u16, rx: u16 },
    /// Fn = ABS Fx
    Abs { rn: u16, rx: u16 },
    /// Fn = SCALB Fx BY Ry (Ry is integer)
    Scalb { rn: u16, rx: u16, ry: u16 },
    /// Rn = LOGB Fx (result is integer)
    Logb { rn: u16, rx: u16 },
    /// Fn = RECIPS Fx
    Recips { rn: u16, rx: u16 },
    /// Fn = RSQRTS Fx
    Rsqrts { rn: u16, rx: u16 },
    /// Rn = FIX Fx (result is integer)
    Fix { rn: u16, rx: u16 },
    /// Fn = FLOAT Rx (input is integer)
    Float { rn: u16, rx: u16 },
    /// Rn = TRUNC Fx (result is integer)
    Trunc { rn: u16, rx: u16 },
    /// Rn = FIX Fx BY Ry
    FixBy { rn: u16, rx: u16, ry: u16 },
    /// Fn = FLOAT Rx BY Ry
    FloatBy { rn: u16, rx: u16, ry: u16 },
    /// Rn = TRUNC Fx BY Ry
    TruncBy { rn: u16, rx: u16, ry: u16 },
    /// Fn = Fx COPYSIGN Fy
    Copysign { rn: u16, rx: u16, ry: u16 },
    /// Fn = MIN(Fx, Fy)
    Min { rn: u16, rx: u16, ry: u16 },
    /// Fn = MAX(Fx, Fy)
    Max { rn: u16, rx: u16, ry: u16 },
    /// Fn = CLIP Fx BY Fy
    Clip { rn: u16, rx: u16, ry: u16 },
}

/// Multiplier operation.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MulOp {
    /// MRF = Rx * Ry (SSF)
    MrfMulSsf { rx: u16, ry: u16 },
    /// MRB = Rx * Ry (SSF)
    MrbMulSsf { rx: u16, ry: u16 },
    /// Rn = Rx * Ry (SSF)
    MulSsf { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rx * Ry (SSI) — signed-integer multiply, 32-bit result
    MulSsi { rn: u16, rx: u16, ry: u16 },
    /// MRF = Rx * Ry (SSI) — signed-integer multiply, full 64-bit
    /// product available in MR0F (low 32) and MR1F (high 32).
    MrfMulSsi { rx: u16, ry: u16 },
    /// MRF = MRF + Rx * Ry (SSF)
    MrfMacSsf { rx: u16, ry: u16 },
    /// MRB = MRB + Rx * Ry (SSF)
    MrbMacSsf { rx: u16, ry: u16 },
    /// Rn = MRF + Rx * Ry (SSF)
    MacSsf { rn: u16, rx: u16, ry: u16 },
    /// MRF = MRF - Rx * Ry (SSF)
    MrfMsubSsf { rx: u16, ry: u16 },
    /// MRB = MRB - Rx * Ry (SSF)
    MrbMsubSsf { rx: u16, ry: u16 },
    /// Rn = SAT MRF
    SatMrf { rn: u16 },
    /// Rn = SAT MRB
    SatMrb { rn: u16 },
    /// MRF = 0
    ClrMrf,
    /// MRB = 0
    ClrMrb,
    /// MRF = TRNC MRF
    TrncMrf,
    /// MRB = TRNC MRB
    TrncMrb,
    /// Rn = TRNC MRF
    TrncMrfReg { rn: u16 },
    /// Rn = TRNC MRB
    TrncMrbReg { rn: u16 },
    /// MRF = Rx * Ry (UUF)
    MrfMulUuf { rx: u16, ry: u16 },
    /// Fn = Fx * Fy (floating-point multiply)
    FMul { rn: u16, rx: u16, ry: u16 },
    /// Rn = MR0F (read MR register field)
    ReadMr0f { rn: u16 },
    /// Rn = MR1F
    ReadMr1f { rn: u16 },
    /// Rn = MR2F
    ReadMr2f { rn: u16 },
    /// Rn = MR0B
    ReadMr0b { rn: u16 },
    /// Rn = MR1B
    ReadMr1b { rn: u16 },
    /// Rn = MR2B
    ReadMr2b { rn: u16 },
    /// MR0F = Rn (write MR register field)
    WriteMr0f { rn: u16 },
    /// MR1F = Rn
    WriteMr1f { rn: u16 },
    /// MR2F = Rn
    WriteMr2f { rn: u16 },
    /// MR0B = Rn
    WriteMr0b { rn: u16 },
    /// MR1B = Rn
    WriteMr1b { rn: u16 },
    /// MR2B = Rn
    WriteMr2b { rn: u16 },
}

/// Shifter operation.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ShiftOp {
    /// Rn = LSHIFT Rx BY Ry
    Lshift { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rn OR LSHIFT Rx BY Ry
    OrLshift { rn: u16, rx: u16, ry: u16 },
    /// Rn = ASHIFT Rx BY Ry
    Ashift { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rn OR ASHIFT Rx BY Ry
    OrAshift { rn: u16, rx: u16, ry: u16 },
    /// Rn = ROT Rx BY Ry
    Rot { rn: u16, rx: u16, ry: u16 },
    /// BTST Rx BY Ry
    Btst { rx: u16, ry: u16 },
    /// Rn = BCLR Rx BY Ry
    Bclr { rn: u16, rx: u16, ry: u16 },
    /// Rn = BSET Rx BY Ry
    Bset { rn: u16, rx: u16, ry: u16 },
    /// Rn = BTGL Rx BY Ry
    Btgl { rn: u16, rx: u16, ry: u16 },
    /// Rn = FEXT Rx BY Ry
    Fext { rn: u16, rx: u16, ry: u16 },
    /// Rn = FDEP Rx BY Ry
    Fdep { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rn OR FEXT Rx BY Ry (SE)
    OrFextSe { rn: u16, rx: u16, ry: u16 },
    /// Rn = Rn OR FDEP Rx BY Ry
    OrFdep { rn: u16, rx: u16, ry: u16 },
    /// Rn = EXP Rx
    Exp { rn: u16, rx: u16 },
    /// Rn = EXP Rx (EX)
    ExpEx { rn: u16, rx: u16 },
    /// Rn = LEFTZ Rx
    Leftz { rn: u16, rx: u16 },
    /// Rn = LEFTO Rx
    Lefto { rn: u16, rx: u16 },
    /// Rn = FPACK Fx
    Fpack { rn: u16, rx: u16 },
    /// Fn = FUNPACK Rx
    Funpack { rn: u16, rx: u16 },
}

/// Multifunction compute: MUL + ALU in a single cycle.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MultiOp {
    /// MUL/ALU 32-bit fixed or 32/40-bit float.
    /// mul_sel: 0=Rm=Rxm*Rym, 1=MRF+=Rxm*Rym, 2=Rm=MRF+Rxm*Rym, 3=MRF-=Rxm*Rym
    /// alu_sel: 0=Ra=Rxa+Rya, 1=Ra=Rxa-Rya, 2=Ra=(Rxa+Rya)/2
    MulAlu {
        fp: bool,
        mul_sel: u8,
        alu_sel: u8,
        rm: u16,
        ra: u16,
        rxm: u16,
        rym: u16,
        rxa: u16,
        rya: u16,
    },
    /// MUL + Dual Add/Subtract (32-bit fixed or 32/40-bit float).
    /// Ra = Rxa + Rya , Rs = Rxa - Rya
    MulDualAddSub {
        fp: bool,
        rm: u16,
        ra: u16,
        rs: u16,
        rxm: u16,
        rym: u16,
        rxa: u16,
        rya: u16,
    },
}

/// Memory width modifier for MODIFY instructions.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MemWidth {
    /// No width modifier (standard Type 19)
    Normal,
    /// (NW) suffix (Type 19 NW variant, sub=0x15, bit39=1)
    Nw,
    /// (SW) suffix (Type 19 NW variant, sub=0x15, bit39=0)
    Sw,
}

/// A compute-unit operation (23 bits when encoded).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ComputeOp {
    Alu(AluOp),
    Falu(FaluOp),
    Mul(MulOp),
    Shift(ShiftOp),
    Multi(MultiOp),
}

/// Branch target for JUMP/CALL.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BranchTarget {
    /// 24-bit absolute address.
    Absolute(u32),
    /// 24-bit signed PC-relative offset.
    PcRelative(i32),
}

/// Loop counter source for DO loops.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LoopCounter {
    /// Immediate 16-bit count.
    Immediate(u16),
    /// Universal register code.
    Ureg(u8),
}

/// DAG access descriptor for Type 1 dual-move.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DagAccess {
    /// true = write (mem = dreg), false = read (dreg = mem)
    pub write: bool,
    /// I register index within DAG (0-7)
    pub i_reg: u8,
    /// M register index within DAG (0-7)
    pub m_reg: u8,
    /// Data register index (0-15)
    pub dreg: u16,
}

/// Memory access descriptor for Type 4.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MemAccess {
    /// 0 = DM (DAG1), 1 = PM (DAG2)
    pub pm: bool,
    /// true = write (mem = dreg), false = read (dreg = mem)
    pub write: bool,
    /// I register index within the DAG (0-7, added to 0 or 8)
    pub i_reg: u8,
}

/// A machine instruction to encode.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Instruction {
    /// NOP (all zeros).
    Nop,
    /// IDLE (bit 39 set).
    Idle,
    /// RFRAME: restore frame pointer. Part of the SHARC+ C-ABI return
    /// sequence, placed in the first delay slot of the indirect
    /// `JUMP (M14,I12) (DB)` return so that the old frame pointer
    /// (which the caller's delayed CALL stored on the frame stack)
    /// is popped back into I6 before control leaves the callee.
    /// This toolchain only emits RFRAME in VISA mode: the 16-bit
    /// compressed form is the canonical encoding (parcel 0x1901).
    Rframe,
    /// Type 17: ureg = immediate32.
    LoadImm { ureg: u16, value: u32 },
    /// Type 11a: RTS / RTI, optional compute.
    Return {
        interrupt: bool,
        cond: u8,
        delayed: bool,
        lr: bool,
        compute: Option<ComputeOp>,
    },
    /// Type 2: Conditional compute.
    Compute { cond: u8, compute: ComputeOp },
    /// Type 8a: Direct JUMP/CALL (24-bit absolute).
    /// Type 8a/8b: Direct JUMP/CALL (absolute or PC-relative).
    Branch {
        call: bool,
        cond: u8,
        target: BranchTarget,
        delayed: bool,
    },
    /// Type 4: Compute + dreg<->DM/PM with 6-bit signed immediate offset.
    ComputeLoadStore {
        compute: Option<ComputeOp>,
        access: MemAccess,
        dreg: u16,
        offset: i8,
        cond: u8,
    },
    /// Type 12a: LCNTR = imm16, DO end_pc UNTIL LCE.
    /// Type 12b: LCNTR = ureg, DO end_pc UNTIL LCE.
    DoLoop { counter: LoopCounter, end_pc: u32 },
    /// Type 13: DO addr UNTIL cond (non-counter loop).
    DoUntil { addr: u32, term: u8 },
    /// Type 1: Compute + dual DM/PM transfer.
    DualMove {
        compute: Option<ComputeOp>,
        dm: DagAccess,
        pm: DagAccess,
    },
    /// Type 19: MODIFY(Ii, immediate32) / BITREV(Ii, immediate32).
    Modify {
        i_reg: u8,
        value: i32,
        width: MemWidth,
        bitrev: bool,
    },
    /// Type 9a: Indirect JUMP/CALL through PM register pair (Ii, Mm).
    IndirectBranch {
        call: bool,
        cond: u8,
        pm_i: u8,
        pm_m: u8,
        delayed: bool,
        compute: Option<ComputeOp>,
    },
    /// EMUIDLE instruction (used by debugger).
    EmuIdle,
    /// SYNC instruction.
    Sync,
    /// Type 18: BIT SET|CLR|TGL|TST sreg data32.
    BitOp {
        /// 0=SET, 1=CLR, 2=TST, 3=XOR
        op: u8,
        /// System register 5-bit code
        sreg: u8,
        /// 32-bit data value
        data: u32,
    },
    /// Type 20: PUSH/POP stack operations.
    StackOp {
        /// Bitmask: bit0=PUSH LOOP, bit1=POP LOOP, bit2=PUSH STS,
        /// bit3=POP STS, bit4=PUSH PCSTK, bit5=POP PCSTK, bit6=FLUSH CACHE
        ops: u8,
    },
    /// Type 25a: CJUMP (computed jump) with optional delayed branch.
    CJump { addr: u32, delayed: bool },
    /// Type 3: Compute, ureg<->DM/PM with DAG register modify.
    UregDagMove {
        /// 0=DM/DAG1, 1=PM/DAG2
        pm: bool,
        /// true=write (mem=ureg), false=read (ureg=mem)
        write: bool,
        /// Universal register code (8-bit)
        ureg: u16,
        /// I register index within DAG (0-7)
        i_reg: u8,
        /// M register index within DAG (0-3 for Type 3)
        m_reg: u8,
        /// Condition code (31=TRUE)
        cond: u8,
        /// Optional compute
        compute: Option<ComputeOp>,
        /// true=DM(Ii,Mm) post-modify (addr=Ii, then Ii+=Mm)
        /// false=DM(Mm,Ii) pre-modify  (addr=Ii+Mm, Ii unchanged)
        post_modify: bool,
    },
    /// Type 7: Compute + MODIFY(Ii, Mm) with DAG register.
    DagModify {
        /// 0=DAG1, 1=DAG2
        pm: bool,
        /// I register index within DAG (0-7)
        i_reg: u8,
        /// M register index within DAG (0-7)
        m_reg: u8,
        /// Condition code (31=TRUE)
        cond: u8,
        /// Optional compute
        compute: Option<ComputeOp>,
    },
    /// Type 5b: Compute, dreg<->cdreg (SIMD register swap).
    RegisterSwap {
        /// Data register index (0-15, R0-R15)
        dreg: u16,
        /// Complementary data register index (0-15, S0-S15)
        cdreg: u16,
        /// Condition code (31 = TRUE = unconditional)
        cond: u8,
        /// Optional compute
        compute: Option<ComputeOp>,
    },
    /// Type 5a: Compute, ureg<->ureg transfer.
    UregTransfer {
        /// Source universal register code
        src_ureg: u16,
        /// Destination universal register code
        dst_ureg: u16,
        /// Condition code (31 = TRUE for unconditional).  The SHARC+
        /// Tools dialect lets the body of a hardware DO loop guard a
        /// commit-on-borrow with `IF AC R1 = R12;`; before this field
        /// existed the parser silently dropped the condition and the
        /// loop wrote unconditionally on every iteration.
        cond: u8,
        /// Optional compute
        compute: Option<ComputeOp>,
    },
    /// Type 5a: Universal register transfer (dest = src), no compute.
    URegMove { dest: u16, src: u16 },
    /// Type 15: ureg <-> DM/PM with 32-bit offset.
    UregMemAccess {
        /// 0=DM, 1=PM
        pm: bool,
        /// I-register index within DAG (0-7)
        i_reg: u8,
        /// true = write (mem = ureg), false = read (ureg = mem)
        write: bool,
        /// Long-word access flag (bit 39)
        lw: bool,
        /// Universal register code (7-bit)
        ureg: u16,
        /// 32-bit signed offset
        offset: i32,
    },
    /// Type 6b: Immediate shift (LSHIFT/ASHIFT/BSET/BCLR/BTGL/BTST/FEXT/FDEP by imm).
    ImmShift {
        /// Shift type: 0=LSHIFT, 1=FEXT/FDEP, 2=ASHIFT, 3=BSET/BCLR/BTGL/BTST
        shift_type: u8,
        /// Sub-operation code
        sub_op: u8,
        /// 8-bit immediate (signed for LSHIFT/ASHIFT; pos|len_lo for FEXT/FDEP)
        imm: u8,
        /// Destination register (0-15)
        rn: u16,
        /// Source register (0-15)
        rx: u16,
        /// Extra data for bits[31:27] (FEXT/FDEP length high bits)
        data_hi: u8,
        /// Condition code (31 = TRUE = unconditional), at bits[37:33]
        cond: u8,
    },
    /// Type 6a: Immediate shift (FEXT/FDEP) + DM memory access.
    ImmShiftMem {
        /// Shift type (1=FEXT/FDEP)
        shift_type: u8,
        /// Sub-operation code (0=FEXT, 1=OR FDEP, 2=OR FEXT, 3=FDEP)
        sub_op: u8,
        /// 8-bit immediate (pos[5:0] | len_lo[1:0]<<6)
        imm: u8,
        /// Shift destination register (0-15)
        rn: u16,
        /// Shift source register (0-15)
        rx: u16,
        /// High 4 bits of length (bits[30:27])
        len_hi: u8,
        /// I-register index (0-7)
        i_reg: u8,
        /// M-register index (0-7)
        m_reg: u8,
        /// true = store (DM=dreg), false = load (dreg=DM)
        write: bool,
        /// Data register for memory access (0-15)
        dreg: u16,
        /// Condition code (31 = TRUE = unconditional)
        cond: u8,
    },
    /// Type 16: DM|PM(Ii,Mm) = imm32 (immediate data store to memory).
    /// When `pm` is true the store targets program memory via DAG2 (the
    /// I/M field is a PM-relative 0-7 index that names I8-I15 / M8-M15);
    /// otherwise it targets data memory via DAG1 (I0-I7 / M0-M7). The
    /// G bit selector lives at bit 37 of the Type 16 encoding.
    ImmStore {
        /// 0 = DM/DAG1, 1 = PM/DAG2
        pm: bool,
        /// I-register index within the DAG (0-7)
        i_reg: u8,
        /// M-register index within the DAG (0-7)
        m_reg: u8,
        /// 32-bit immediate value to store
        value: u32,
    },
    /// Type 14: ureg <-> DM/PM with absolute 32-bit address.
    UregAbsAccess {
        /// 0=DM, 1=PM
        pm: bool,
        /// true = write (mem = ureg), false = read (ureg = mem)
        write: bool,
        /// Universal register code (8-bit)
        ureg: u16,
        /// 32-bit absolute address
        addr: u32,
    },
}

/// Encoding error.
#[derive(Debug, Clone)]
pub struct EncodeError {
    msg: String,
}

impl fmt::Display for EncodeError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(&self.msg)
    }
}

// ---------------------------------------------------------------------------
// Main entry point
// ---------------------------------------------------------------------------

/// Encode a machine instruction into 6 bytes (little-endian).
pub fn encode(instr: &Instruction) -> Result<[u8; 6], EncodeError> {
    let word = encode_word(instr)?;
    Ok(pack_be(word))
}

// ---------------------------------------------------------------------------
// Internal: encode to 48-bit u64
// ---------------------------------------------------------------------------

pub fn encode_word(instr: &Instruction) -> Result<u64, EncodeError> {
    match *instr {
        Instruction::Nop => Ok(0),
        Instruction::Idle => Ok(1u64 << 39),
        // RFRAME has no 48-bit ISA form in this toolchain. Return a
        // placeholder so the encode path does not panic; the VISA
        // compressor in `visa_encode::try_16bit` catches Rframe
        // specifically and emits the canonical 16-bit 0x1901 parcel,
        // so this placeholder is never written to the output of any
        // VISA PM section.
        Instruction::Rframe => Ok(0),
        Instruction::LoadImm { ureg, value } => encode_type17(ureg, value),
        Instruction::Return {
            interrupt,
            cond,
            delayed,
            lr,
            compute,
        } => encode_type11a(interrupt, cond, delayed, lr, compute),
        Instruction::Compute { cond, compute } => encode_type2(cond, compute),
        Instruction::Branch {
            call,
            cond,
            target,
            delayed,
        } => encode_branch(call, cond, target, delayed),
        Instruction::ComputeLoadStore {
            compute,
            access,
            dreg,
            offset,
            cond,
        } => encode_type4(compute, access, dreg, offset, cond),
        Instruction::DoLoop { counter, end_pc } => encode_do_loop(counter, end_pc),
        Instruction::DoUntil { addr, term } => {
            // Type 13: bits[47:40]=0x0E, bits[37:33]=term, bits[23:0]=addr24
            let word = (0x0Eu64 << 40) | ((term as u64 & 0x1F) << 33) | (addr as u64 & 0xFFFFFF);
            Ok(word)
        }
        Instruction::DualMove { compute, dm, pm } => encode_type1(compute, dm, pm),
        Instruction::Modify {
            i_reg,
            value,
            width,
            bitrev,
        } => encode_type19(i_reg, value, width, bitrev),
        Instruction::IndirectBranch {
            call,
            cond,
            pm_i,
            pm_m,
            delayed,
            ..
        } => encode_type9a(call, cond, pm_i, pm_m, delayed),
        Instruction::EmuIdle => Ok((1u64 << 39) | (1u64 << 38)),
        Instruction::Sync => Ok(1u64 << 38),
        Instruction::BitOp { op, sreg, data } => {
            let op_hi = ((op >> 1) & 1) as u64;
            let op_lo = (op & 1) as u64;
            let word = (0x14u64 << 40)
                | (op_hi << 39)
                | (op_lo << 37)
                | ((sreg as u64 & 0x1F) << 32)
                | (data as u64);
            Ok(word)
        }
        Instruction::StackOp { ops } => Ok((0x17u64 << 40) | ((ops as u64) << 33)),
        Instruction::CJump { addr, delayed } => {
            let db = if delayed { 1u64 << 34 } else { 0 };
            Ok((0x18u64 << 40) | db | (addr as u64 & 0xFFFFFF))
        }
        Instruction::UregDagMove {
            pm,
            write,
            ureg,
            i_reg,
            m_reg,
            cond,
            compute,
            post_modify,
        } => encode_type3(
            &UregDagMoveArgs {
                _pm: pm,
                write,
                ureg,
                i_reg,
                m_reg,
                cond,
                post_modify,
            },
            &compute,
        ),
        Instruction::DagModify {
            pm,
            i_reg,
            m_reg,
            cond,
            compute,
        } => {
            let comp = encode_compute_opt(&compute)?;
            let g = if pm { 1u64 } else { 0 };
            // Standard Type 7 (bit39=0): g at bit38, i_field at bits[37:35],
            // m_field at bits[34:32], cond at bits[27:23], compute at bits[22:0]
            let word = (0x04u64 << 40)
                | (g << 38)
                | ((i_reg as u64 & 0x7) << 35)
                | ((m_reg as u64 & 0x7) << 32)
                | ((cond as u64 & 0x1F) << 23)
                | (comp as u64);
            Ok(word)
        }
        Instruction::RegisterSwap {
            dreg,
            cdreg,
            cond,
            ref compute,
        } => encode_type5b(dreg, cdreg, cond, compute),
        Instruction::UregTransfer {
            src_ureg,
            dst_ureg,
            cond,
            compute,
        } => {
            let comp = encode_compute_opt(&compute)?;
            // Type 5a layout (from disassembler decode_type5a):
            //   bits[47:45] = 011, bit[44]=1, bit[43]=0
            //   bits[42:38] = src_ureg[6:2]
            //   bits[37:33] = cond (31=TRUE for unconditional)
            //   bit[32]     = src_ureg[1]
            //   bit[31]     = src_ureg[0]
            //   bits[30:27] = dst_ureg[6:3]
            //   bits[26:23] = dst_ureg[3:0]
            //   bits[22:0]  = compute
            let src = src_ureg as u64;
            let dst = dst_ureg as u64;
            let src_hi = (src >> 2) & 0x1F;
            let src_lo = src & 0x03;
            let dst_hi = (dst >> 4) & 0x0F;
            let dst_lo = dst & 0x0F;
            let word = (0b011u64 << 45)
                | (1u64 << 44)
                | (src_hi << 38)
                | ((cond as u64 & 0x1F) << 33)
                | (src_lo << 31)
                | (dst_hi << 27)
                | (dst_lo << 23)
                | (comp as u64);
            Ok(word)
        }
        Instruction::URegMove { dest, src } => encode_type5a(dest, src),
        Instruction::UregMemAccess {
            pm,
            i_reg,
            write,
            lw,
            ureg,
            offset,
        } => encode_type15(pm, i_reg, write, lw, ureg, offset),
        Instruction::ImmShift {
            shift_type,
            sub_op,
            imm,
            rn,
            rx,
            data_hi,
            cond,
        } => encode_type6b(shift_type, sub_op, imm, rn, rx, data_hi, cond),
        Instruction::ImmShiftMem {
            shift_type,
            sub_op,
            imm,
            rn,
            rx,
            len_hi,
            i_reg,
            m_reg,
            write,
            dreg,
            cond,
        } => {
            let op_field = ((shift_type as u64 & 0x7) << 4) | (sub_op as u64 & 3);
            let d = if write { 1u64 } else { 0 };
            Ok((0b100u64 << 45)
                | ((i_reg as u64 & 0xF) << 41)
                | ((m_reg as u64 & 0x7) << 38)
                | ((cond as u64 & 0x1F) << 33)
                | (d << 31)
                | ((len_hi as u64 & 0xF) << 27)
                | ((dreg as u64 & 0xF) << 23)
                | (op_field << 16)
                | ((imm as u64) << 8)
                | ((rn as u64 & 0xF) << 4)
                | (rx as u64 & 0xF))
        }
        Instruction::ImmStore {
            pm,
            i_reg,
            m_reg,
            value,
        } => encode_type16(pm, i_reg, m_reg, value),
        Instruction::UregAbsAccess {
            pm,
            write,
            ureg,
            addr,
        } => encode_type14(pm, write, ureg, addr),
    }
}

// ---------------------------------------------------------------------------
// Pack 48-bit word into [u8; 6] little-endian
// ---------------------------------------------------------------------------

/// Pack a 48-bit instruction word into 6 bytes in big-endian order.
///
/// SHARC+ instructions are always stored in big-endian byte order within
/// ELF sections, regardless of the ELF's EI_DATA field.  Byte 0 is the
/// MSB (bits 47:40), byte 5 is the LSB (bits 7:0).
fn pack_be(word: u64) -> [u8; 6] {
    [
        ((word >> 40) & 0xFF) as u8,
        ((word >> 32) & 0xFF) as u8,
        ((word >> 24) & 0xFF) as u8,
        ((word >> 16) & 0xFF) as u8,
        ((word >> 8) & 0xFF) as u8,
        (word & 0xFF) as u8,
    ]
}

// ---------------------------------------------------------------------------
// Compute field encoder (23 bits)
// ---------------------------------------------------------------------------

fn encode_compute(op: &ComputeOp) -> Result<u32, EncodeError> {
    match *op {
        ComputeOp::Alu(ref alu) => encode_alu(alu),
        ComputeOp::Falu(ref falu) => encode_falu(falu),
        ComputeOp::Mul(ref mul) => encode_mul(mul),
        ComputeOp::Shift(ref shift) => encode_shift(shift),
        ComputeOp::Multi(ref multi) => encode_multi(multi),
    }
}

fn encode_compute_opt(op: &Option<ComputeOp>) -> Result<u32, EncodeError> {
    match op {
        Some(ref c) => encode_compute(c),
        None => Ok(0),
    }
}

/// Build compute field: multi=0, cu, opcode, rn, rx, ry.
fn compute_field(cu: u32, opcode: u8, rn: u16, rx: u16, ry: u16) -> u32 {
    // bit22 = 0 (single function)
    // bits[21:20] = cu
    // bits[19:12] = opcode
    // bits[11:8] = rn
    // bits[7:4] = rx
    // bits[3:0] = ry
    (cu & 3) << 20
        | (opcode as u32) << 12
        | ((rn as u32) & 0xF) << 8
        | ((rx as u32) & 0xF) << 4
        | ((ry as u32) & 0xF)
}

fn check_reg4(name: &str, val: u16) -> Result<(), EncodeError> {
    if val > 15 {
        return Err(EncodeError {
            msg: format!("{name} register index {val} out of range (0-15)"),
        });
    }
    Ok(())
}

fn encode_alu(op: &AluOp) -> Result<u32, EncodeError> {
    let (opcode, rn, rx, ry): (u8, u16, u16, u16) = match *op {
        AluOp::Add { rn, rx, ry } => (0x01, rn, rx, ry),
        AluOp::Sub { rn, rx, ry } => (0x02, rn, rx, ry),
        AluOp::AddCi { rn, rx, ry } => (0x05, rn, rx, ry),
        AluOp::SubCi { rn, rx, ry } => (0x06, rn, rx, ry),
        AluOp::Avg { rn, rx, ry } => (0x09, rn, rx, ry),
        AluOp::Comp { rx, ry } => (0x0A, 0, rx, ry),
        AluOp::CompU { rx, ry } => (0x0B, 0, rx, ry),
        AluOp::Pass { rn, rx } => (0x21, rn, rx, 0),
        AluOp::Neg { rn, rx } => (0x22, rn, rx, 0),
        AluOp::PassCi { rn, rx } => (0x25, rn, rx, 0),
        AluOp::PassCiMinus1 { rn, rx } => (0x26, rn, rx, 0),
        AluOp::Inc { rn, rx } => (0x29, rn, rx, 0),
        AluOp::Dec { rn, rx } => (0x2A, rn, rx, 0),
        AluOp::Abs { rn, rx } => (0x30, rn, rx, 0),
        AluOp::And { rn, rx, ry } => (0x40, rn, rx, ry),
        AluOp::Or { rn, rx, ry } => (0x41, rn, rx, ry),
        AluOp::Xor { rn, rx, ry } => (0x42, rn, rx, ry),
        AluOp::Not { rn, rx } => (0x43, rn, rx, 0),
        AluOp::Min { rn, rx, ry } => (0x61, rn, rx, ry),
        AluOp::Max { rn, rx, ry } => (0x62, rn, rx, ry),
        AluOp::Clip { rn, rx, ry } => (0x63, rn, rx, ry),
    };
    check_reg4("ALU rn", rn)?;
    check_reg4("ALU rx", rx)?;
    check_reg4("ALU ry", ry)?;
    // CU = 0 for ALU
    Ok(compute_field(0, opcode, rn, rx, ry))
}

fn encode_falu(op: &FaluOp) -> Result<u32, EncodeError> {
    let (opcode, rn, rx, ry): (u8, u16, u16, u16) = match *op {
        FaluOp::Add { rn, rx, ry } => (0x81, rn, rx, ry),
        FaluOp::Sub { rn, rx, ry } => (0x82, rn, rx, ry),
        FaluOp::Avg { rn, rx, ry } => (0x89, rn, rx, ry),
        FaluOp::Comp { rx, ry } => (0x8A, 0, rx, ry),
        FaluOp::AbsAdd { rn, rx, ry } => (0x91, rn, rx, ry),
        FaluOp::AbsSub { rn, rx, ry } => (0x92, rn, rx, ry),
        FaluOp::Pass { rn, rx } => (0xA1, rn, rx, 0),
        FaluOp::Neg { rn, rx } => (0xA2, rn, rx, 0),
        FaluOp::Rnd { rn, rx } => (0xA5, rn, rx, 0),
        FaluOp::Mant { rn, rx } => (0xAD, rn, rx, 0),
        FaluOp::Abs { rn, rx } => (0xB0, rn, rx, 0),
        FaluOp::Scalb { rn, rx, ry } => (0xBD, rn, rx, ry),
        FaluOp::Logb { rn, rx } => (0xC1, rn, rx, 0),
        FaluOp::Recips { rn, rx } => (0xC4, rn, rx, 0),
        FaluOp::Rsqrts { rn, rx } => (0xC5, rn, rx, 0),
        FaluOp::Fix { rn, rx } => (0xC9, rn, rx, 0),
        FaluOp::Float { rn, rx } => (0xCA, rn, rx, 0),
        FaluOp::Trunc { rn, rx } => (0xCD, rn, rx, 0),
        FaluOp::FixBy { rn, rx, ry } => (0xD9, rn, rx, ry),
        FaluOp::FloatBy { rn, rx, ry } => (0xDA, rn, rx, ry),
        FaluOp::TruncBy { rn, rx, ry } => (0xDD, rn, rx, ry),
        FaluOp::Copysign { rn, rx, ry } => (0xE0, rn, rx, ry),
        FaluOp::Min { rn, rx, ry } => (0xE1, rn, rx, ry),
        FaluOp::Max { rn, rx, ry } => (0xE2, rn, rx, ry),
        FaluOp::Clip { rn, rx, ry } => (0xE3, rn, rx, ry),
    };
    check_reg4("FALU rn", rn)?;
    check_reg4("FALU rx", rx)?;
    check_reg4("FALU ry", ry)?;
    // CU = 0 for ALU (float uses opcode bit 7 to distinguish)
    Ok(compute_field(0, opcode, rn, rx, ry))
}

fn encode_mul(op: &MulOp) -> Result<u32, EncodeError> {
    // MR register reads and writes use a dedicated "MR transfer"
    // sub-encoding inside the 23-bit compute field, distinct from the
    // standard MULOP table. Per the SHARC instruction set reference
    // ("Computations Reference", `Rn = MRxF/B` / `MRxF/B = Rn`), the
    // compute field is laid out as:
    //
    //   bits[22:17] = 0b100000 (fixed transfer marker, sets bit 22)
    //   bit[16]     = T (0 = read MR -> Rn, 1 = write Rn -> MR)
    //   bits[15:12] = Ai (MR register selector)
    //   bits[11:8]  = Rk (data register)
    //   bits[7:0]   = 0
    //
    //   Ai: 0=MR0F, 1=MR1F, 2=MR2F, 4=MR0B, 5=MR1B, 6=MR2B
    //
    // The previous encoder put these ops in the MUL slot (cu=1) with
    // the Ai value as the 8-bit MULOP opcode, which on real silicon
    // decodes as a multiplier op (e.g. `Rn = MR1F` ran as a `MUL`
    // table entry that did not transfer the accumulator and returned
    // a wrong dreg value, breaking 64-bit multiply chains in the
    // libsel `atoll` lowering and any other callee that reads MRxF
    // after `MRF = Rx*Ry (SSI)`).
    if let Some(field) = encode_mr_transfer(op)? {
        return Ok(field);
    }
    // MULOP opcode at bits[19:12] when CU = 01. The 8-bit field
    // uses structured templates where y = signed-Y, x = signed-X,
    // f = fractional, r = round-to-nearest:
    //
    //   Rn   = Rx * Ry           01yx f00r
    //   mrf  = Rx * Ry           01yx f10r
    //   mrb  = Rx * Ry           01yx f11r
    //   Rn   = mrf + Rx*Ry       10yx f00r
    //   Rn   = mrb + Rx*Ry       10yx f01r
    //   mrf  = mrf + Rx*Ry       10yx f10r
    //   mrb  = mrb + Rx*Ry       10yx f11r
    //   Rn   = mrf - Rx*Ry       11yx f00r
    //   mrf  = mrf - Rx*Ry       11yx f10r
    //   mrb  = mrb - Rx*Ry       11yx f11r
    //   Rn   = sat (mrf|mrb)     0000 fNNx
    //   mrf  = 0                 0001 0100
    //   mrb  = 0                 0001 0110
    //   Fn   = Fx * Fy           0011 0000
    //
    // (SSF) => y=1 x=1 f=1 r=0.  (SSI) => y=1 x=1 f=0 r=0.
    let (opcode, rn, rx, ry): (u8, u16, u16, u16) = match *op {
        // Rn = Rx * Ry family.
        MulOp::MulSsi { rn, rx, ry } => (0x70, rn, rx, ry),
        MulOp::MulSsf { rn, rx, ry } => (0x78, rn, rx, ry),
        // mrf = Rx * Ry family.
        MulOp::MrfMulSsi { rx, ry } => (0x74, 0, rx, ry),
        MulOp::MrfMulSsf { rx, ry } => (0x7C, 0, rx, ry),
        MulOp::MrfMulUuf { rx, ry } => (0x4C, 0, rx, ry),
        // mrb = Rx * Ry family.
        MulOp::MrbMulSsf { rx, ry } => (0x7E, 0, rx, ry),
        // Rn = mrf + Rx*Ry and accumulator-MAC variants.
        MulOp::MacSsf { rn, rx, ry } => (0xB8, rn, rx, ry),
        MulOp::MrfMacSsf { rx, ry } => (0xBC, 0, rx, ry),
        MulOp::MrbMacSsf { rx, ry } => (0xBE, 0, rx, ry),
        // Multiply-subtract variants.
        MulOp::MrfMsubSsf { rx, ry } => (0xFC, 0, rx, ry),
        MulOp::MrbMsubSsf { rx, ry } => (0xFE, 0, rx, ry),
        // Accumulator clears (no operand fields).
        MulOp::ClrMrf => (0x14, 0, 0, 0),
        MulOp::ClrMrb => (0x16, 0, 0, 0),
        // `Rn = sat mrf/mrb` at `0000 fNNx` with f=1 (fractional).
        MulOp::SatMrf { rn } => (0x08, rn, 0, 0),
        MulOp::SatMrb { rn } => (0x0A, rn, 0, 0),
        // TRNC variants live only in the 64-bit multiplier
        // encoding; these single-function placeholders are unused
        // by selcc / selas today.
        MulOp::TrncMrf => (0x18, 0, 0, 0),
        MulOp::TrncMrb => (0x1A, 0, 0, 0),
        MulOp::TrncMrfReg { rn } => (0x1C, rn, 0, 0),
        MulOp::TrncMrbReg { rn } => (0x1E, rn, 0, 0),
        // `Fn = Fx * Fy` (32/40-bit floating-point multiply) sits
        // at opcode 0x30 = `0011 0000`. The previous value 0x80
        // landed inside the MAC-accumulate row `10yx f00r` at y =
        // x = f = r = 0, i.e. `Rn = mrf + Rx*Ry (UUI)`, so an
        // `F2 = F0 * F1` of two IEEE-754 bit patterns ran an
        // unsigned-integer multiply-accumulate through mrf on
        // real silicon and returned 0.
        MulOp::FMul { rn, rx, ry } => (0x30, rn, rx, ry),
        // ReadMr* / WriteMr* are handled above by `encode_mr_transfer`.
        MulOp::ReadMr0f { .. }
        | MulOp::ReadMr1f { .. }
        | MulOp::ReadMr2f { .. }
        | MulOp::ReadMr0b { .. }
        | MulOp::ReadMr1b { .. }
        | MulOp::ReadMr2b { .. }
        | MulOp::WriteMr0f { .. }
        | MulOp::WriteMr1f { .. }
        | MulOp::WriteMr2f { .. }
        | MulOp::WriteMr0b { .. }
        | MulOp::WriteMr1b { .. }
        | MulOp::WriteMr2b { .. } => {
            unreachable!("MR transfers are encoded by encode_mr_transfer")
        }
    };
    check_reg4("MUL rn", rn)?;
    check_reg4("MUL rx", rx)?;
    check_reg4("MUL ry", ry)?;
    // CU = 1 for MUL
    Ok(compute_field(1, opcode, rn, rx, ry))
}

/// Encode the MR-transfer sub-form of a `Mul` op into the 23-bit
/// compute field. Returns `Ok(Some(field))` for the read/write MR
/// variants and `Ok(None)` for everything else, leaving the regular
/// MULOP path to handle non-transfer multiplier ops.
///
/// Layout (per the SHARC ISR, "Computations Reference"):
/// `bits[22:17]=0b100000  bit[16]=T  bits[15:12]=Ai  bits[11:8]=Rk`,
/// where `T=0` means `Rn = MRxF/B` and `T=1` means `MRxF/B = Rn`, and
/// `Ai` selects the MR register (0=MR0F, 1=MR1F, 2=MR2F, 4=MR0B,
/// 5=MR1B, 6=MR2B).
fn encode_mr_transfer(op: &MulOp) -> Result<Option<u32>, EncodeError> {
    let (t, ai, rk): (u32, u32, u16) = match *op {
        MulOp::ReadMr0f { rn } => (0, 0, rn),
        MulOp::ReadMr1f { rn } => (0, 1, rn),
        MulOp::ReadMr2f { rn } => (0, 2, rn),
        MulOp::ReadMr0b { rn } => (0, 4, rn),
        MulOp::ReadMr1b { rn } => (0, 5, rn),
        MulOp::ReadMr2b { rn } => (0, 6, rn),
        MulOp::WriteMr0f { rn } => (1, 0, rn),
        MulOp::WriteMr1f { rn } => (1, 1, rn),
        MulOp::WriteMr2f { rn } => (1, 2, rn),
        MulOp::WriteMr0b { rn } => (1, 4, rn),
        MulOp::WriteMr1b { rn } => (1, 5, rn),
        MulOp::WriteMr2b { rn } => (1, 6, rn),
        _ => return Ok(None),
    };
    check_reg4("MR transfer rk", rk)?;
    let field = (1u32 << 22) | (t << 16) | ((ai & 0xF) << 12) | (((rk as u32) & 0xF) << 8);
    Ok(Some(field))
}

fn encode_shift(op: &ShiftOp) -> Result<u32, EncodeError> {
    // SHIFTOP opcode at bits[19:12] when CU = 10. Only the
    // register-count form lives here; the immediate-count
    // (shiftimm) form is encoded by `encode_type6b` and sits in
    // a separate 6-bit sub-opcode space.
    let (opcode, rn, rx, ry): (u8, u16, u16, u16) = match *op {
        ShiftOp::Lshift { rn, rx, ry } => (0x00, rn, rx, ry),
        ShiftOp::Ashift { rn, rx, ry } => (0x04, rn, rx, ry),
        ShiftOp::Rot { rn, rx, ry } => (0x08, rn, rx, ry),
        ShiftOp::OrLshift { rn, rx, ry } => (0x20, rn, rx, ry),
        ShiftOp::OrAshift { rn, rx, ry } => (0x24, rn, rx, ry),
        ShiftOp::Fext { rn, rx, ry } => (0x40, rn, rx, ry),
        ShiftOp::Fdep { rn, rx, ry } => (0x44, rn, rx, ry),
        ShiftOp::OrFextSe { rn, rx, ry } => (0x48, rn, rx, ry),
        ShiftOp::OrFdep { rn, rx, ry } => (0x64, rn, rx, ry),
        ShiftOp::Exp { rn, rx } => (0x80, rn, rx, 0),
        ShiftOp::ExpEx { rn, rx } => (0x84, rn, rx, 0),
        ShiftOp::Leftz { rn, rx } => (0x88, rn, rx, 0),
        ShiftOp::Lefto { rn, rx } => (0x8C, rn, rx, 0),
        ShiftOp::Fpack { rn, rx } => (0x90, rn, rx, 0),
        ShiftOp::Funpack { rn, rx } => (0x94, rn, rx, 0),
        ShiftOp::Bset { rn, rx, ry } => (0xC0, rn, rx, ry),
        ShiftOp::Bclr { rn, rx, ry } => (0xC4, rn, rx, ry),
        ShiftOp::Btgl { rn, rx, ry } => (0xC8, rn, rx, ry),
        ShiftOp::Btst { rx, ry } => (0xCC, 0, rx, ry),
    };
    check_reg4("SHIFT rn", rn)?;
    check_reg4("SHIFT rx", rx)?;
    check_reg4("SHIFT ry", ry)?;
    // CU = 2 for SHIFT
    Ok(compute_field(2, opcode, rn, rx, ry))
}

// ---------------------------------------------------------------------------
// Multifunction compute encoder (bit 22 = 1)
// ---------------------------------------------------------------------------

fn encode_multi(op: &MultiOp) -> Result<u32, EncodeError> {
    match *op {
        MultiOp::MulAlu {
            fp,
            mul_sel,
            alu_sel,
            rm,
            ra,
            rxm,
            rym,
            rxa,
            rya,
        } => {
            // Compute field layout (23 bits):
            //   bit[22]    = 1 (multifunction)
            //   bits[21:16] = mf_op
            //   bits[15:0]  = register fields
            // For 32-bit fixed: mf_op = 0b0_mm_aa (mm=mul_sel, aa=alu_sel)
            // For 32/40-bit float: mf_op = 0b011_mm_aa
            let mf_op = if fp {
                0b011_000u32 | ((mul_sel as u32 & 3) << 2) | (alu_sel as u32 & 3)
            } else {
                ((mul_sel as u32 & 3) << 2) | (alu_sel as u32 & 3)
            };
            let field = (1u32 << 22)
                | (mf_op << 16)
                | ((rm as u32 & 0xF) << 12)
                | ((ra as u32 & 0xF) << 8)
                | ((rxm as u32 & 3) << 6)
                | ((rym as u32 & 3) << 4)
                | ((rxa as u32 & 3) << 2)
                | (rya as u32 & 3);
            Ok(field)
        }
        MultiOp::MulDualAddSub {
            fp,
            rm,
            ra,
            rs,
            rxm,
            rym,
            rxa,
            rya,
        } => {
            // bits[22] = 1, bit[21] = 1 (dual add/sub), bit[20] = fp
            // bits[19:16] = Rs, bits[15:12] = Rm, bits[11:8] = Ra
            // bits[7:6] = Rxm, [5:4] = Rym, [3:2] = Rxa, [1:0] = Rya
            let fp_bit = if fp { 1u32 } else { 0u32 };
            let field = (1u32 << 22)
                | (1u32 << 21)
                | (fp_bit << 20)
                | ((rs as u32 & 0xF) << 16)
                | ((rm as u32 & 0xF) << 12)
                | ((ra as u32 & 0xF) << 8)
                | ((rxm as u32 & 3) << 6)
                | ((rym as u32 & 3) << 4)
                | ((rxa as u32 & 3) << 2)
                | (rya as u32 & 3);
            Ok(field)
        }
    }
}

// ---------------------------------------------------------------------------
// Type 17: ureg = imm32
// Disasm: decode_group0 -> sub=0b01111 -> decode_type17
// bits[47:40] = 000_01111 = 0x0F
// bits[39:32] = ureg
// bits[31:0] = imm32
// ---------------------------------------------------------------------------

fn encode_type17(ureg: u16, value: u32) -> Result<u64, EncodeError> {
    let word = (0x0Fu64 << 40) | ((ureg as u64) << 32) | (value as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 11a: RTS / RTI
// bits[47:40] = 000_01010 = 0x0A
// bit[39] = J: 0=RTS, 1=RTI
// bits[37:33] = cond (31 = unconditional)
// bits[22:0] = compute
// ---------------------------------------------------------------------------

fn encode_type11a(
    interrupt: bool,
    cond: u8,
    delayed: bool,
    lr: bool,
    compute: Option<ComputeOp>,
) -> Result<u64, EncodeError> {
    let comp = encode_compute_opt(&compute)?;
    let x = if interrupt { 1u64 } else { 0u64 };
    let j = if delayed { 1u64 } else { 0u64 };
    let lr_bit = if lr { 1u64 } else { 0u64 };
    let word = (0x0Au64 << 40)
        | (x << 39)
        | ((cond as u64 & 0x1F) << 33)
        | (j << 26)
        | (lr_bit << 25)
        | (comp as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 2: IF COND Compute
// bits[47:40] = 000_00001 = 0x01
// bits[37:33] = cond (31 = TRUE = unconditional)
// bits[22:0] = compute
// ---------------------------------------------------------------------------

fn encode_type2(cond: u8, compute: ComputeOp) -> Result<u64, EncodeError> {
    let comp = encode_compute(&compute)?;
    let word = (0x01u64 << 40) | ((cond as u64 & 0x1F) << 33) | (comp as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 8a/8b: Direct Jump/Call
// Type 8a (absolute): bits[47:40] = 000_00110 = 0x06
//   bit[39] = J: 0=JUMP, 1=CALL
//   bits[38:34] = cond
//   bits[23:0] = addr24
// Type 8b (PC-relative): bits[47:40] = 000_00111 = 0x07
//   bit[39] = J: 0=JUMP, 1=CALL
//   bits[38:34] = cond
//   bits[23:0] = offset24 (signed)
// ---------------------------------------------------------------------------

fn encode_branch(
    call: bool,
    cond: u8,
    target: BranchTarget,
    delayed: bool,
) -> Result<u64, EncodeError> {
    let j = if call { 1u64 } else { 0u64 };
    let db = if delayed { 1u64 << 26 } else { 0 };
    let cond_bits = (cond as u64 & 0x1F) << 33;
    match target {
        BranchTarget::Absolute(addr) => {
            if addr > 0xFFFFFF {
                return Err(EncodeError {
                    msg: format!("absolute address 0x{addr:X} exceeds 24 bits"),
                });
            }
            let word = (0x06u64 << 40) | (j << 39) | cond_bits | db | (addr as u64);
            Ok(word)
        }
        BranchTarget::PcRelative(offset) => {
            // Encode as 24-bit signed
            let offset24 = (offset as u32) & 0xFFFFFF;
            let word = (0x07u64 << 40) | (j << 39) | cond_bits | db | (offset24 as u64);
            Ok(word)
        }
    }
}

// ---------------------------------------------------------------------------
// Type 9a: Indirect Jump|Call through PM register pair
// bits[47:40] = 000_01000
// bit[39] = J (0=JUMP, 1=CALL)
// bits[38:34] = condition
// bits[33:31] = PM I-register (I8-I15 -> 0-7)
// bits[30:28] = PM M-register (M8-M15 -> 0-7)
// bits[22:0] = compute (0 for no compute)
// ---------------------------------------------------------------------------

fn encode_type9a(
    call: bool,
    cond: u8,
    pm_i: u8,
    pm_m: u8,
    delayed: bool,
) -> Result<u64, EncodeError> {
    let j = if call { 1u64 } else { 0u64 };
    let db = if delayed { 1u64 } else { 0u64 };
    let cond_bits = (cond as u64 & 0x1F) << 33;
    let pmi_bits = ((pm_i & 0x07) as u64) << 24;
    let pmm_bits = ((pm_m & 0x07) as u64) << 27;
    let word = (0x08u64 << 40) | (j << 39) | cond_bits | (db << 32) | pmi_bits | pmm_bits;
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 4: Compute, dreg<->DM/PM, immediate offset
// bits[47:45] = 011, bit[44] = 0
// bit[43] = G (0=DM, 1=PM)
// bit[42] = D (0=read, 1=write)
// bits[41:38] = dreg
// bits[37:32] = data6 (signed immediate)
// bits[31:27] = cond (31 = TRUE)
// bits[26:24] = i_field (I register within DAG)
// bit[23] = 0 (reserved/unused)
// bits[22:0] = compute
// ---------------------------------------------------------------------------
// Type 3: Compute, ureg<->DM with DAG register modify
//
// Bit layout (from disasm.rs decode_type3):
//   bits[47:45] = 010
//   bit[44]     = DAG select (1 = (I,M) order, 0 = (M,I) order)
//   bits[43:41] = i_addr (I register index, 0-7)
//   bit[40]     = (don't-care for encoding, typically 0)
//   bits[39:38] = m_offset (M register = m_offset + 4, so M4-M7)
//   bits[37:33] = cond (31 = TRUE = unconditional)
//   bit[31]     = d (direction: 0=read, 1=write)
//   bits[29:23] = ureg code (7 bits)
//   bits[22:0]  = compute
// ---------------------------------------------------------------------------

struct UregDagMoveArgs {
    _pm: bool,
    write: bool,
    ureg: u16,
    i_reg: u8,
    m_reg: u8,
    cond: u8,
    post_modify: bool,
}

fn encode_type3(a: &UregDagMoveArgs, compute: &Option<ComputeOp>) -> Result<u64, EncodeError> {
    if a.i_reg > 7 {
        return Err(EncodeError {
            msg: format!("Type 3 I register index {} out of range (0-7)", a.i_reg),
        });
    }
    if a.m_reg > 7 {
        return Err(EncodeError {
            msg: format!("Type 3 M register {} out of range (0-7)", a.m_reg),
        });
    }
    let comp = encode_compute_opt(compute)?;
    let d = if a.write { 1u64 } else { 0 };
    let m_field = a.m_reg as u64 & 0x7;

    // bit44: 0=DM(M,I) pre-modify, 1=DM(I,M) post-modify.
    let im = if a.post_modify { 1u64 } else { 0 };
    let word = (0b010u64 << 45)
        | (im << 44)
        | ((a.i_reg as u64 & 0x7) << 41)
        | (m_field << 38)
        | ((a.cond as u64 & 0x1F) << 33)
        | (d << 31)
        | ((a.ureg as u64 & 0x7F) << 23)
        | (comp as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------

fn encode_type4(
    compute: Option<ComputeOp>,
    access: MemAccess,
    dreg: u16,
    offset: i8,
    cond: u8,
) -> Result<u64, EncodeError> {
    check_reg4("dreg", dreg)?;
    if access.i_reg > 7 {
        return Err(EncodeError {
            msg: format!("I register index {} out of range (0-7)", access.i_reg),
        });
    }
    // 6-bit signed range: -32..31
    if !(-32..=31).contains(&offset) {
        return Err(EncodeError {
            msg: format!("immediate offset {offset} out of 6-bit signed range (-32..31)"),
        });
    }
    let comp = encode_compute_opt(&compute)?;
    let data6 = (offset as u8 as u32) & 0x3F; // mask to 6 bits
    let g = if access.pm { 1u64 } else { 0u64 };
    let d = if access.write { 1u64 } else { 0u64 };

    // Type 4 bit layout (from disasm.rs decode_type4):
    //   bits[47:45] = 011
    //   bit[44]     = 0 (distinguishes Type 4 from Type 5)
    //   bits[43:41] = i_addr (I register index, 0-7)
    //   bit[40]     = 0
    //   bit[39]     = d (direction: 0=read, 1=write)
    //   bit[38]     = g (0=DM, 1=PM)
    //   bits[37:33] = cond (31 = TRUE)
    //   bits[32:27] = data6 (6-bit signed offset)
    //   bits[26:23] = dm_dreg (data register index)
    //   bits[22:0]  = compute
    let word = (0b011u64 << 45)
        // bit44 = 0 (type 4)
        | ((access.i_reg as u64 & 0x7) << 41)  // bits[43:41]
        | (d << 39)                              // bit[39]
        | (g << 38)                              // bit[38]
        | ((cond as u64 & 0x1F) << 33)           // bits[37:33]
        | ((data6 as u64) << 27)                 // bits[32:27]
        | ((dreg as u64 & 0xF) << 23)            // bits[26:23]
        | (comp as u64); // bits[22:0]
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 12a: LCNTR = imm16, DO addr UNTIL LCE
// bits[47:40] = 000_01100 = 0x0C
// bits[39:24] = imm16
// bits[23:0] = addr24
//
// Type 12b: LCNTR = ureg, DO addr UNTIL LCE
// bits[47:40] = 000_01101 = 0x0D
// bits[39:32] = ureg
// bits[23:0] = addr24
// ---------------------------------------------------------------------------

fn encode_do_loop(counter: LoopCounter, end_pc: u32) -> Result<u64, EncodeError> {
    if end_pc > 0xFFFFFF {
        return Err(EncodeError {
            msg: format!("loop end address 0x{end_pc:X} exceeds 24 bits"),
        });
    }
    match counter {
        LoopCounter::Immediate(count) => {
            let word = (0x0Cu64 << 40) | ((count as u64) << 24) | (end_pc as u64);
            Ok(word)
        }
        LoopCounter::Ureg(ureg) => {
            let word = (0x0Du64 << 40) | ((ureg as u64) << 32) | (end_pc as u64);
            Ok(word)
        }
    }
}

// ---------------------------------------------------------------------------
// Type 1: Compute + dual DM/PM transfer
// bits[47:45] = 001
// bit[44] = DMD (0=read, 1=write)
// bits[43:41] = DMI (I0-I7)
// bits[40:38] = DMM (M0-M7)
// bit[37] = PMD (0=read, 1=write)
// bits[36:33] = DM_DREG
// bits[32:30] = PMI (I8-I15, field is 0-7, added to 8)
// bits[29:27] = PMM (M8-M15, field is 0-7, added to 8)
// bits[26:23] = PM_DREG
// bits[22:0] = compute
// ---------------------------------------------------------------------------

fn encode_type1(
    compute: Option<ComputeOp>,
    dm: DagAccess,
    pm: DagAccess,
) -> Result<u64, EncodeError> {
    if dm.i_reg > 7 {
        return Err(EncodeError {
            msg: format!("DM I register {} out of range (0-7)", dm.i_reg),
        });
    }
    if dm.m_reg > 7 {
        return Err(EncodeError {
            msg: format!("DM M register {} out of range (0-7)", dm.m_reg),
        });
    }
    if pm.i_reg > 7 {
        return Err(EncodeError {
            msg: format!("PM I register {} out of range (0-7)", pm.i_reg),
        });
    }
    if pm.m_reg > 7 {
        return Err(EncodeError {
            msg: format!("PM M register {} out of range (0-7)", pm.m_reg),
        });
    }
    check_reg4("DM dreg", dm.dreg)?;
    check_reg4("PM dreg", pm.dreg)?;

    let comp = encode_compute_opt(&compute)?;
    let dmd = if dm.write { 1u64 } else { 0u64 };
    let pmd = if pm.write { 1u64 } else { 0u64 };

    let word = (0b001u64 << 45)
        | (dmd << 44)
        | ((dm.i_reg as u64 & 0x7) << 41)
        | ((dm.m_reg as u64 & 0x7) << 38)
        | (pmd << 37)
        | ((dm.dreg as u64 & 0xF) << 33)
        | ((pm.i_reg as u64 & 0x7) << 30)
        | ((pm.m_reg as u64 & 0x7) << 27)
        | ((pm.dreg as u64 & 0xF) << 23)
        | (comp as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 19: MODIFY(Ii, data32)
// bits[47:40] = 000_10110 = 0x16
// bit[39] = G (0=DAG1 I0-I7, 1=DAG2 I8-I15)
// bit[38] = 0 (BREV=0 for MODIFY)
// bits[37:35] = i_field (I register index within DAG, 0-7)
// bits[34:32] = 0 (unused)
// bits[31:0] = data32 (32-bit immediate, treated as unsigned in encoding)
// ---------------------------------------------------------------------------

fn encode_type19(i_reg: u8, value: i32, width: MemWidth, bitrev: bool) -> Result<u64, EncodeError> {
    if i_reg > 15 {
        return Err(EncodeError {
            msg: format!("I register index {i_reg} out of range (0-15)"),
        });
    }
    let g: u64 = if i_reg >= 8 { 1 } else { 0 };
    let i_field = (i_reg & 7) as u64;
    let data32 = (value as u32) as u64;

    match width {
        MemWidth::Normal => {
            // Standard Type 19 (sub=0x16): i_src at bits[34:32]
            // bit[38] = BREV (1 for BITREV, 0 for MODIFY)
            let brev = if bitrev { 1u64 } else { 0 };
            let word = (0x16u64 << 40) | (g << 39) | (brev << 38) | (i_field << 32) | data32;
            Ok(word)
        }
        MemWidth::Nw | MemWidth::Sw => {
            // Type 19 NW variant (sub=0x15):
            //   bit[39] = NW flag (1=NW, 0=SW)
            //   bit[38] = g (DAG select)
            //   bits[34:32] = i_src
            //   bits[37:35] = dest_xor (0 = same register)
            let nw_bit = if matches!(width, MemWidth::Nw) {
                1u64
            } else {
                0
            };
            let word = (0x15u64 << 40) | (nw_bit << 39) | (g << 38) | (i_field << 32) | data32;
            Ok(word)
        }
    }
}

// ---------------------------------------------------------------------------
// Type 16: DM|PM(Ii,Mm) = imm32 (immediate data store)
// bits[47:45] = 100, bit[44] = 1
// bits[43:41] = i_reg (0-7 within the selected DAG)
// bits[40:38] = m_reg (0-7 within the selected DAG)
// bit[37]     = G (0 = DM/DAG1, 1 = PM/DAG2)
// bits[31:0]  = imm32
// ---------------------------------------------------------------------------

fn encode_type16(pm: bool, i_reg: u8, m_reg: u8, value: u32) -> Result<u64, EncodeError> {
    if i_reg > 7 {
        return Err(EncodeError {
            msg: format!("Type 16 I register index {} out of range (0-7)", i_reg),
        });
    }
    if m_reg > 7 {
        return Err(EncodeError {
            msg: format!("Type 16 M register index {} out of range (0-7)", m_reg),
        });
    }
    let g = if pm { 1u64 } else { 0 };
    let word = (0b100u64 << 45)
        | (1u64 << 44)
        | ((i_reg as u64 & 0x7) << 41)
        | ((m_reg as u64 & 0x7) << 38)
        | (g << 37)
        | (value as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 14: Ureg<->DM|PM (absolute 32-bit address)
// bits[47:42] = 000_100 (sub = 0b10_0xx with xx from bits 41:40)
// bit[41]     = g (0=DM, 1=PM)
// bit[40]     = d (0=read, 1=write)
// bits[39:32] = ureg code (8-bit)
// bits[31:0]  = addr32
// ---------------------------------------------------------------------------

fn encode_type14(pm: bool, write: bool, ureg: u16, addr: u32) -> Result<u64, EncodeError> {
    let g = if pm { 1u64 } else { 0 };
    let d = if write { 1u64 } else { 0 };
    let word = (0b000_100u64 << 42) | (g << 41) | (d << 40) | ((ureg as u64) << 32) | (addr as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 5a: Compute, ureg<->ureg (register transfer, no compute)
// bits[47:45] = 011, bit[44] = 1, bit[43] = 0
// bit[42] = d (direction): 1 = dst_ureg = src_ureg
// bits[41:34] = src_ureg
// bits[33:26] = dst_ureg
// bits[25:23] = cond (7 = always/TRUE)
// bits[22:0] = compute (0 = no compute)
// ---------------------------------------------------------------------------

fn encode_type5a(dest: u16, src: u16) -> Result<u64, EncodeError> {
    // Type 5a layout (see `decode_type5a` for the bit-field split):
    //   bits[47:45] = 011, bit[44]=1
    //   bits[42:38] = src_ureg[6:2]
    //   bits[37:33] = cond (31 = TRUE)
    //   bit[32]     = src_ureg[1]
    //   bit[31]     = src_ureg[0]
    //   bits[30:27] = dst_ureg[6:3]   (see note below)
    //   bits[26:23] = dst_ureg[3:0]
    //   bits[22:0]  = compute (0 for no compute)
    //
    // The previous version of this encoder wrote the src and dst
    // ureg codes as contiguous 8-bit fields at bits[41:34] /
    // [33:26] and set cond = 7 at [25:23], which is consistent with
    // *itself* (encoder + decoder round-trip cleanly) but not with
    // what real SHARC+ silicon executes: an `I6 = I7` emitted that
    // way decoded on hardware as a bogus conditional dreg move
    // (`IF BM, UREG(0xB7)=B4`) and trampled the register file. Use
    // the same bit layout the 48-bit UregTransfer encoder below
    // already uses, which the hardware does honour.
    let src = src as u64;
    let dst = dest as u64;
    let src_hi = (src >> 2) & 0x1F;
    let src_lo = src & 0x03;
    let dst_hi = (dst >> 4) & 0x0F;
    let dst_lo = dst & 0x0F;
    let word = (0b011u64 << 45)
        | (1u64 << 44)
        | (src_hi << 38)
        | (31u64 << 33) // cond = TRUE
        | (src_lo << 31)
        | (dst_hi << 27)
        | (dst_lo << 23);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 5b: Compute, dreg<->cdreg (SIMD register swap)
// bits[47:43] = 01111
// bits[41:38] = cdreg[3:0]
// bits[37:33] = cond[4:0] (31 = TRUE)
// bits[26:23] = dreg[3:0]
// bits[22:0]  = compute
// ---------------------------------------------------------------------------

fn encode_type5b(
    dreg: u16,
    cdreg: u16,
    cond: u8,
    compute: &Option<ComputeOp>,
) -> Result<u64, EncodeError> {
    check_reg4("dreg", dreg)?;
    check_reg4("cdreg", cdreg)?;
    let comp = encode_compute_opt(compute)?;
    let word = (0b01111u64 << 43)
        | ((cdreg as u64 & 0xF) << 38)
        | ((cond as u64 & 0x1F) << 33)
        | ((dreg as u64 & 0xF) << 23)
        | (comp as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 15: ureg <-> DM/PM with 32-bit offset
// bits[47:45] = 101
// bit[44]     = g (0=DM, 1=PM)
// bits[43:41] = i_field (3-bit)
// bit[40]     = d (0=read, 1=write)
// bit[39]     = lw (long-word, always 0 for now)
// bits[38:32] = ureg_code (7-bit)
// bits[31:0]  = offset32
// ---------------------------------------------------------------------------

fn encode_type15(
    pm: bool,
    i_reg: u8,
    write: bool,
    lw: bool,
    ureg: u16,
    offset: i32,
) -> Result<u64, EncodeError> {
    let g = if pm { 1u64 } else { 0 };
    let d = if write { 1u64 } else { 0 };
    let lw_bit = if lw { 1u64 } else { 0 };
    let word = (0b101u64 << 45)
        | (g << 44)
        | ((i_reg as u64 & 7) << 41)
        | (d << 40)
        | (lw_bit << 39)
        | ((ureg as u64 & 0x7F) << 32)
        | (offset as u32 as u64);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Type 6b: Immediate shift
// bits[47:40] = 000_00010 = 0x02
// bits[23:16] = op_field (shift_type<<4 | sub_op)
// bits[15:8]  = imm8
// bits[7:4]   = Rn
// bits[3:0]   = Rx
// ---------------------------------------------------------------------------

fn encode_type6b(
    shift_type: u8,
    sub_op: u8,
    imm: u8,
    rn: u16,
    rx: u16,
    data_hi: u8,
    cond: u8,
) -> Result<u64, EncodeError> {
    let op_field = ((shift_type as u64 & 0xF) << 4) | (sub_op as u64 & 3);
    let word = (0x02u64 << 40)
        | ((cond as u64 & 0x1F) << 33)
        | ((data_hi as u64 & 0x1F) << 27)
        | (op_field << 16)
        | ((imm as u64) << 8)
        | ((rn as u64 & 0xF) << 4)
        | (rx as u64 & 0xF);
    Ok(word)
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use crate::disasm;

    /// Encode, then disassemble, return the text.
    fn roundtrip(instr: &Instruction) -> String {
        let bytes = encode(instr).expect("encode failed");
        let lines = disasm::disassemble(&bytes, 0, false);
        assert_eq!(lines.len(), 1, "expected exactly 1 instruction");
        lines.into_iter().next().unwrap().text
    }

    // -- Type 17: LoadImm --

    #[test]
    fn roundtrip_load_imm_r0() {
        let text = roundtrip(&Instruction::LoadImm {
            ureg: 0x00,
            value: 0x0000002A,
        });
        assert_eq!(text, "R0 = 0x2A");
    }

    #[test]
    fn roundtrip_load_imm_i0() {
        let text = roundtrip(&Instruction::LoadImm {
            ureg: 0x10,
            value: 0xABCD0000,
        });
        assert_eq!(text, "I0 = -0x54330000");
    }

    #[test]
    fn roundtrip_load_imm_mode1() {
        let text = roundtrip(&Instruction::LoadImm {
            ureg: 0x70,
            value: 0x00001000,
        });
        assert_eq!(text, "MODE1 = 0x1000");
    }

    #[test]
    fn roundtrip_load_imm_r15() {
        let text = roundtrip(&Instruction::LoadImm {
            ureg: 0x0F,
            value: 0xFFFFFFFF,
        });
        assert_eq!(text, "R15 = -0x1");
    }

    // -- Type 11a: RTS/RTI --

    #[test]
    fn roundtrip_rts() {
        let text = roundtrip(&Instruction::Return {
            interrupt: false,
            cond: 31,
            delayed: false,
            lr: false,
            compute: None,
        });
        assert_eq!(text, "RTS");
    }

    #[test]
    fn roundtrip_rti() {
        let text = roundtrip(&Instruction::Return {
            interrupt: true,
            cond: 31,
            delayed: false,
            lr: false,
            compute: None,
        });
        assert_eq!(text, "RTI");
    }

    #[test]
    fn roundtrip_conditional_rts() {
        let text = roundtrip(&Instruction::Return {
            interrupt: false,
            cond: 0,
            delayed: false,
            lr: false,
            compute: None,
        });
        assert_eq!(text, "IF EQ RTS");
    }

    #[test]
    fn roundtrip_rts_with_compute() {
        let text = roundtrip(&Instruction::Return {
            interrupt: false,
            cond: 31,
            delayed: false,
            lr: false,
            compute: Some(ComputeOp::Alu(AluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            })),
        });
        assert_eq!(text, "RTS , R0 = R1 + R2");
    }

    #[test]
    fn roundtrip_rts_db() {
        let text = roundtrip(&Instruction::Return {
            interrupt: false,
            cond: 31,
            delayed: true,
            lr: false,
            compute: None,
        });
        assert_eq!(text, "RTS (DB)");
    }

    #[test]
    fn roundtrip_rts_lr() {
        let text = roundtrip(&Instruction::Return {
            interrupt: false,
            cond: 31,
            delayed: false,
            lr: true,
            compute: None,
        });
        assert_eq!(text, "RTS (LR)");
    }

    #[test]
    fn roundtrip_rts_db_lr() {
        let text = roundtrip(&Instruction::Return {
            interrupt: false,
            cond: 31,
            delayed: true,
            lr: true,
            compute: None,
        });
        assert_eq!(text, "RTS (DB,LR)");
    }

    // -- Type 2: Conditional Compute --

    #[test]
    fn roundtrip_add() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = R1 + R2");
    }

    #[test]
    fn roundtrip_sub() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Sub {
                rn: 3,
                rx: 4,
                ry: 5,
            }),
        });
        assert_eq!(text, "R3 = R4 - R5");
    }

    #[test]
    fn roundtrip_and() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::And {
                rn: 6,
                rx: 7,
                ry: 8,
            }),
        });
        assert_eq!(text, "R6 = R7 AND R8");
    }

    #[test]
    fn roundtrip_or() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Or {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = R1 OR R2");
    }

    #[test]
    fn roundtrip_xor() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Xor {
                rn: 1,
                rx: 2,
                ry: 3,
            }),
        });
        assert_eq!(text, "R1 = R2 XOR R3");
    }

    #[test]
    fn roundtrip_not() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Not { rn: 4, rx: 5 }),
        });
        assert_eq!(text, "R4 = NOT R5");
    }

    #[test]
    fn roundtrip_pass() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Pass { rn: 5, rx: 3 }),
        });
        assert_eq!(text, "R5 = PASS R3");
    }

    #[test]
    fn roundtrip_abs() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Abs { rn: 2, rx: 7 }),
        });
        assert_eq!(text, "R2 = ABS R7");
    }

    #[test]
    fn roundtrip_neg() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Neg { rn: 1, rx: 3 }),
        });
        assert_eq!(text, "R1 = -R3");
    }

    #[test]
    fn roundtrip_comp() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Comp { rx: 4, ry: 5 }),
        });
        assert_eq!(text, "COMP (R4,R5)");
    }

    #[test]
    fn roundtrip_min() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Min {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = MIN(R1, R2)");
    }

    #[test]
    fn roundtrip_max() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Max {
                rn: 3,
                rx: 4,
                ry: 5,
            }),
        });
        assert_eq!(text, "R3 = MAX(R4, R5)");
    }

    #[test]
    fn roundtrip_clip() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Clip {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = CLIP R1 BY R2");
    }

    #[test]
    fn roundtrip_conditional_compute() {
        let text = roundtrip(&Instruction::Compute {
            cond: 0, // EQ
            compute: ComputeOp::Alu(AluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "IF EQ R0 = R1 + R2");
    }

    #[test]
    fn roundtrip_cond_lt() {
        let text = roundtrip(&Instruction::Compute {
            cond: 1, // LT
            compute: ComputeOp::Alu(AluOp::Sub {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "IF LT R0 = R1 - R2");
    }

    // -- Float ALU --

    #[test]
    fn roundtrip_float_add() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "F0 = F1 + F2");
    }

    #[test]
    fn roundtrip_float_sub() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Sub {
                rn: 3,
                rx: 4,
                ry: 5,
            }),
        });
        assert_eq!(text, "F3 = F4 - F5");
    }

    #[test]
    fn roundtrip_float_pass() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Pass { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "F0 = PASS F1");
    }

    #[test]
    fn roundtrip_float_abs() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Abs { rn: 2, rx: 3 }),
        });
        assert_eq!(text, "F2 = ABS F3");
    }

    #[test]
    fn roundtrip_float_neg() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Neg { rn: 1, rx: 4 }),
        });
        assert_eq!(text, "F1 = -F4");
    }

    #[test]
    fn roundtrip_fix() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Fix { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = FIX F1");
    }

    #[test]
    fn roundtrip_float_convert() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Float { rn: 2, rx: 3 }),
        });
        assert_eq!(text, "F2 = FLOAT R3");
    }

    #[test]
    fn roundtrip_recips() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Recips { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "F0 = RECIPS F1");
    }

    // -- MUL --

    #[test]
    fn roundtrip_mrf_mul_ssf() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::MrfMulSsf { rx: 2, ry: 3 }),
        });
        assert_eq!(text, "MRF = R2 * R3 (SSF)");
    }

    #[test]
    fn roundtrip_mul_ssf() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::MulSsf {
                rn: 1,
                rx: 5,
                ry: 6,
            }),
        });
        assert_eq!(text, "R1 = R5 * R6 (SSF)");
    }

    #[test]
    fn roundtrip_fmul() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::FMul {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "F0 = F1 * F2");
    }

    #[test]
    fn roundtrip_sat_mrf() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::SatMrf { rn: 3 }),
        });
        assert_eq!(text, "R3 = SAT MRF");
    }

    #[test]
    fn roundtrip_clr_mrf() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::ClrMrf),
        });
        assert_eq!(text, "MRF = 0");
    }

    #[test]
    fn roundtrip_trnc_mrf_reg() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::TrncMrfReg { rn: 5 }),
        });
        assert_eq!(text, "R5 = TRNC MRF");
    }

    // -- SHIFT --

    #[test]
    fn roundtrip_lshift() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Lshift {
                rn: 4,
                rx: 5,
                ry: 6,
            }),
        });
        assert_eq!(text, "R4 = LSHIFT R5 BY R6");
    }

    #[test]
    fn roundtrip_ashift() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Ashift {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = ASHIFT R1 BY R2");
    }

    #[test]
    fn roundtrip_rot() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Rot {
                rn: 1,
                rx: 2,
                ry: 3,
            }),
        });
        assert_eq!(text, "R1 = ROT R2 BY R3");
    }

    #[test]
    fn roundtrip_bset() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Bset {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = BSET R1 BY R2");
    }

    #[test]
    fn roundtrip_bclr() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Bclr {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = BCLR R1 BY R2");
    }

    #[test]
    fn roundtrip_btgl() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Btgl {
                rn: 3,
                rx: 4,
                ry: 5,
            }),
        });
        assert_eq!(text, "R3 = BTGL R4 BY R5");
    }

    #[test]
    fn roundtrip_btst() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Btst { rx: 1, ry: 2 }),
        });
        assert_eq!(text, "BTST R1 BY R2");
    }

    #[test]
    fn roundtrip_fext() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Fext {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = FEXT R1 BY R2");
    }

    #[test]
    fn roundtrip_fdep() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Fdep {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = FDEP R1 BY R2");
    }

    #[test]
    fn roundtrip_fpack() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Fpack { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = FPACK F1");
    }

    #[test]
    fn roundtrip_funpack() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Funpack { rn: 2, rx: 3 }),
        });
        assert_eq!(text, "F2 = FUNPACK R3");
    }

    // -- Type 8a/8b: Branch --

    #[test]
    fn roundtrip_jump_absolute() {
        let text = roundtrip(&Instruction::Branch {
            call: false,
            cond: 31,
            delayed: false,
            target: BranchTarget::Absolute(0x001234),
        });
        assert_eq!(text, "JUMP 0x001234");
    }

    #[test]
    fn roundtrip_call_absolute() {
        let text = roundtrip(&Instruction::Branch {
            call: true,
            cond: 31,
            delayed: false,
            target: BranchTarget::Absolute(0x005678),
        });
        assert_eq!(text, "CALL 0x005678");
    }

    #[test]
    fn roundtrip_conditional_jump() {
        let text = roundtrip(&Instruction::Branch {
            call: false,
            cond: 16, // NE
            delayed: false,
            target: BranchTarget::Absolute(0x000100),
        });
        assert_eq!(text, "IF NE JUMP 0x000100");
    }

    #[test]
    fn roundtrip_jump_pc_relative() {
        let text = roundtrip(&Instruction::Branch {
            call: false,
            cond: 31,
            delayed: false,
            target: BranchTarget::PcRelative(10),
        });
        assert_eq!(text, "JUMP (PC,0xA)");
    }

    #[test]
    fn roundtrip_jump_pc_relative_neg() {
        let text = roundtrip(&Instruction::Branch {
            call: false,
            cond: 31,
            delayed: false,
            target: BranchTarget::PcRelative(-5),
        });
        assert_eq!(text, "JUMP (PC,-0x5)");
    }

    // -- Type 4: Compute + LoadStore --

    #[test]
    fn roundtrip_dm_load_imm_offset() {
        let text = roundtrip(&Instruction::ComputeLoadStore {
            compute: None,
            access: MemAccess {
                pm: false,
                write: false,
                i_reg: 0,
            },
            dreg: 0,
            offset: 1,
            cond: 31,
        });
        assert_eq!(text, "R0=DM (0x1,I0)");
    }

    #[test]
    fn roundtrip_pm_store_imm_offset() {
        let text = roundtrip(&Instruction::ComputeLoadStore {
            compute: None,
            access: MemAccess {
                pm: true,
                write: true,
                i_reg: 2,
            },
            dreg: 5,
            offset: -3,
            cond: 31,
        });
        assert_eq!(text, "PM (-0x3,I2)=R5");
    }

    #[test]
    fn roundtrip_compute_plus_dm_load() {
        let text = roundtrip(&Instruction::ComputeLoadStore {
            compute: Some(ComputeOp::Alu(AluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            })),
            access: MemAccess {
                pm: false,
                write: false,
                i_reg: 3,
            },
            dreg: 4,
            offset: 0,
            cond: 31,
        });
        assert_eq!(text, "R0 = R1 + R2 , R4=DM (0x0,I3)");
    }

    #[test]
    fn roundtrip_conditional_type4() {
        let text = roundtrip(&Instruction::ComputeLoadStore {
            compute: None,
            access: MemAccess {
                pm: false,
                write: false,
                i_reg: 0,
            },
            dreg: 0,
            offset: 1,
            cond: 0, // EQ
        });
        assert_eq!(text, "IF EQ R0=DM (0x1,I0)");
    }

    // -- Type 12a/12b: DO Loop --

    #[test]
    fn roundtrip_lcntr_imm_do() {
        let text = roundtrip(&Instruction::DoLoop {
            counter: LoopCounter::Immediate(100),
            end_pc: 0x002000,
        });
        assert_eq!(text, "LCNTR = 0x64 , DO (PC,0x2000)UNTIL LCE");
    }

    #[test]
    fn roundtrip_lcntr_ureg_do() {
        let text = roundtrip(&Instruction::DoLoop {
            counter: LoopCounter::Ureg(0x05), // R5
            end_pc: 0x003000,
        });
        assert_eq!(text, "LCNTR = R5, DO 0x003000 UNTIL LCE");
    }

    // -- Type 1: Dual move --

    #[test]
    fn roundtrip_dual_read() {
        let text = roundtrip(&Instruction::DualMove {
            compute: None,
            dm: DagAccess {
                write: false,
                i_reg: 0,
                m_reg: 0,
                dreg: 0,
            },
            pm: DagAccess {
                write: false,
                i_reg: 0,
                m_reg: 0,
                dreg: 1,
            },
        });
        assert_eq!(text, "R0 = DM(I0, M0), R1 = PM(I8, M8)");
    }

    #[test]
    fn roundtrip_dual_dm_write() {
        let text = roundtrip(&Instruction::DualMove {
            compute: None,
            dm: DagAccess {
                write: true,
                i_reg: 1,
                m_reg: 2,
                dreg: 3,
            },
            pm: DagAccess {
                write: false,
                i_reg: 2,
                m_reg: 1,
                dreg: 4,
            },
        });
        assert_eq!(text, "DM(I1, M2) = R3, R4 = PM(I10, M9)");
    }

    #[test]
    fn roundtrip_dual_with_compute() {
        let text = roundtrip(&Instruction::DualMove {
            compute: Some(ComputeOp::Alu(AluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            })),
            dm: DagAccess {
                write: false,
                i_reg: 0,
                m_reg: 0,
                dreg: 3,
            },
            pm: DagAccess {
                write: false,
                i_reg: 0,
                m_reg: 0,
                dreg: 4,
            },
        });
        assert_eq!(text, "R0 = R1 + R2, R3 = DM(I0, M0), R4 = PM(I8, M8)");
    }

    // -- NOP / IDLE --

    #[test]
    fn roundtrip_nop() {
        let text = roundtrip(&Instruction::Nop);
        assert_eq!(text, "NOP");
    }

    #[test]
    fn roundtrip_idle() {
        let text = roundtrip(&Instruction::Idle);
        assert_eq!(text, "IDLE");
    }

    // -- Error cases --

    #[test]
    fn error_absolute_addr_too_large() {
        let result = encode(&Instruction::Branch {
            call: false,
            cond: 31,
            delayed: false,
            target: BranchTarget::Absolute(0x1000000),
        });
        assert!(result.is_err());
    }

    #[test]
    fn error_dreg_out_of_range() {
        let result = encode(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Add {
                rn: 16,
                rx: 0,
                ry: 0,
            }),
        });
        assert!(result.is_err());
    }

    #[test]
    fn error_offset_out_of_range() {
        let result = encode(&Instruction::ComputeLoadStore {
            compute: None,
            access: MemAccess {
                pm: false,
                write: false,
                i_reg: 0,
            },
            dreg: 0,
            offset: 33,
            cond: 31,
        });
        assert!(result.is_err());
    }

    // -- Additional ALU ops --

    #[test]
    fn roundtrip_add_ci() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::AddCi {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "R0 = R1 + R2 + CI");
    }

    #[test]
    fn roundtrip_inc() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Inc { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = R1 + 1");
    }

    #[test]
    fn roundtrip_dec() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Dec { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = R1 - 1");
    }

    #[test]
    fn roundtrip_compu() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::CompU { rx: 3, ry: 4 }),
        });
        assert_eq!(text, "COMPU (R3,R4)");
    }

    // -- Additional MUL ops --

    #[test]
    fn roundtrip_mrf_mac_ssf() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::MrfMacSsf { rx: 1, ry: 2 }),
        });
        assert_eq!(text, "MRF = MRF + R1 * R2 (SSF)");
    }

    #[test]
    fn roundtrip_mrf_msub_ssf() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(MulOp::MrfMsubSsf { rx: 1, ry: 2 }),
        });
        assert_eq!(text, "MRF = MRF - R1 * R2 (SSF)");
    }

    // -- Additional SHIFT ops --

    #[test]
    fn roundtrip_exp() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Exp { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = EXP R1");
    }

    #[test]
    fn roundtrip_leftz() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(ShiftOp::Leftz { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = LEFTZ R1");
    }

    // -- Additional Float ALU ops --

    #[test]
    fn roundtrip_float_min() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Min {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "F0 = MIN(F1, F2)");
    }

    #[test]
    fn roundtrip_float_max() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Max {
                rn: 3,
                rx: 4,
                ry: 5,
            }),
        });
        assert_eq!(text, "F3 = MAX(F4, F5)");
    }

    #[test]
    fn roundtrip_scalb() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Scalb {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "F0 = SCALB F1 BY R2");
    }

    #[test]
    fn roundtrip_logb() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Logb { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = LOGB F1");
    }

    #[test]
    fn roundtrip_trunc() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Trunc { rn: 0, rx: 1 }),
        });
        assert_eq!(text, "R0 = TRUNC F1");
    }

    #[test]
    fn roundtrip_copysign() {
        let text = roundtrip(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Falu(FaluOp::Copysign {
                rn: 0,
                rx: 1,
                ry: 2,
            }),
        });
        assert_eq!(text, "F0 = F1 COPYSIGN F2");
    }

    // -- Type 19: MODIFY --

    #[test]
    fn roundtrip_modify() {
        let instr = Instruction::Modify {
            i_reg: 7,
            value: -4,
            width: MemWidth::Normal,
            bitrev: false,
        };
        let bytes = encode(&instr).expect("encode failed");
        let lines = disasm::disassemble(&bytes, 0, false);
        assert!(lines[0].text.contains("MODIFY"));
        assert!(lines[0].text.contains("I7"));
    }

    #[test]
    fn roundtrip_modify_positive() {
        let instr = Instruction::Modify {
            i_reg: 0,
            value: 16,
            width: MemWidth::Normal,
            bitrev: false,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "I0=MODIFY (I0,0x10)");
    }

    #[test]
    fn roundtrip_modify_dag2() {
        let instr = Instruction::Modify {
            i_reg: 10,
            value: 0x100,
            width: MemWidth::Normal,
            bitrev: false,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "I10=MODIFY (I10,0x100)");
    }

    // -- Multifunction compute --

    #[test]
    fn roundtrip_multi_mul_alu_fixed() {
        // R0 = R1 * R4 (SSF) , R8 = R8 + R12
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Multi(MultiOp::MulAlu {
                fp: false,
                mul_sel: 0,
                alu_sel: 0,
                rm: 0,
                ra: 8,
                rxm: 1,
                rym: 0, // R4 = R(0+4)
                rxa: 0, // R8 = R(0+8)
                rya: 0, // R12 = R(0+12)
            }),
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R0 = R1 * R4 (SSF) , R8 = R8 + R12");
    }

    #[test]
    fn roundtrip_multi_mul_alu_sub() {
        // R3 = R2 * R5 (SSF) , R9 = R10 - R14
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Multi(MultiOp::MulAlu {
                fp: false,
                mul_sel: 0,
                alu_sel: 1,
                rm: 3,
                ra: 9,
                rxm: 2,
                rym: 1, // R5 = R(1+4)
                rxa: 2, // R10 = R(2+8)
                rya: 2, // R14 = R(2+12)
            }),
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R3 = R2 * R5 (SSF) , R9 = R10 - R14");
    }

    #[test]
    fn roundtrip_multi_mul_alu_float() {
        // F0 = MRF + F1 * F4 , F8 = F8 + F12
        // Note: float multifunction only supports mul_sel 2 and 3
        // (mul_sel occupies mf_op[3:2] but bit 3 is always 1 for float)
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Multi(MultiOp::MulAlu {
                fp: true,
                mul_sel: 2,
                alu_sel: 0,
                rm: 0,
                ra: 8,
                rxm: 1,
                rym: 0,
                rxa: 0,
                rya: 0,
            }),
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "F0 = MRF + F1 * F4 , F8 = F8 + F12");
    }

    #[test]
    fn roundtrip_multi_dual_addsub_fixed() {
        // R0 = R1 * R4 (SSF) , R8 = R8 + R12 , R3 = R8 - R12
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Multi(MultiOp::MulDualAddSub {
                fp: false,
                rm: 0,
                ra: 8,
                rs: 3,
                rxm: 1,
                rym: 0,
                rxa: 0,
                rya: 0,
            }),
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R0 = R1 * R4 (SSF) , R8 = R8 + R12 , R3 = R8 - R12");
    }

    // -- Type 15: ureg <-> DM/PM with 32-bit offset --

    // -- Type 16: DM|PM(Ii,Mm) = imm32 --

    #[test]
    fn roundtrip_type16_dm_imm_store() {
        let instr = Instruction::ImmStore {
            pm: false,
            i_reg: 7,
            m_reg: 7,
            value: 0xDEAD_BEEF,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "DM (I7,M7)=0xDEADBEEF");
    }

    #[test]
    fn roundtrip_type16_pm_imm_store() {
        // PM-addressed store uses DAG2: the i_reg/m_reg fields are 0-7 but
        // name I8-I15 / M8-M15, the G bit at position 37 picks PM.
        let instr = Instruction::ImmStore {
            pm: true,
            i_reg: 0,
            m_reg: 1,
            value: 0xCAFEF00D,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "PM (I8,M9)=0xCAFEF00D");
    }

    #[test]
    fn roundtrip_type16_pm_imm_store_high_regs() {
        let instr = Instruction::ImmStore {
            pm: true,
            i_reg: 7,
            m_reg: 7,
            value: 0x12345678,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "PM (I15,M15)=0x12345678");
    }

    #[test]
    fn roundtrip_type15_ureg_load() {
        // I6 = DM(0, I6)
        let instr = Instruction::UregMemAccess {
            pm: false,
            i_reg: 6,
            write: false,
            lw: false,
            ureg: 0x16, // I6 = 0x10 + 6
            offset: 0,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "I6=DM (0x0,I6)");
    }

    #[test]
    fn roundtrip_type15_ureg_store() {
        // DM(1, I0) = M2
        let instr = Instruction::UregMemAccess {
            pm: false,
            i_reg: 0,
            write: true,
            lw: false,
            ureg: 0x22, // M2 = group 2, reg 2
            offset: 1,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "DM (0x1,I0)=M2");
    }

    // -- Type 6b: Immediate shift --

    #[test]
    fn roundtrip_imm_lshift_positive() {
        let instr = Instruction::ImmShift {
            shift_type: 0,
            sub_op: 0,
            imm: 3,
            rn: 4,
            rx: 5,
            data_hi: 0,
            cond: 31,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R4=LSHIFT R5 BY 0x3");
    }

    #[test]
    fn roundtrip_imm_lshift_negative() {
        let instr = Instruction::ImmShift {
            shift_type: 0,
            sub_op: 0,
            imm: (-1i8) as u8,
            rn: 0,
            rx: 1,
            data_hi: 0,
            cond: 31,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R0=LSHIFT R1 BY -0x1");
    }

    #[test]
    fn roundtrip_imm_ashift() {
        let instr = Instruction::ImmShift {
            shift_type: 2,
            sub_op: 0,
            imm: 8,
            rn: 2,
            rx: 3,
            data_hi: 0,
            cond: 31,
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R2=ASHIFT R3 BY 0x8");
    }

    #[test]
    fn roundtrip_imm_fext() {
        // R0 = FEXT R1 BY 0x1F:0x1
        let instr = Instruction::ImmShift {
            shift_type: 1,
            sub_op: 0,
            imm: 0x1F | (1 << 6), // pos=31, len_lo=1
            rn: 0,
            rx: 1,
            data_hi: 0,
            cond: 31, // len_hi = 0
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "R0=FEXT R1 BY 0x1F:0x1");
    }

    #[test]
    fn roundtrip_multi_mrf_acc() {
        // MRF = MRF + R2 * R6 (SSF) , R11 = R9 + R13
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Multi(MultiOp::MulAlu {
                fp: false,
                mul_sel: 1,
                alu_sel: 0,
                rm: 0,
                ra: 11,
                rxm: 2,
                rym: 2, // R6 = R(2+4)
                rxa: 1, // R9 = R(1+8)
                rya: 1, // R13 = R(1+12)
            }),
        };
        let text = roundtrip(&instr);
        assert_eq!(text, "MRF = MRF + R2 * R6 (SSF) , R11 = R9 + R13");
    }

    // -- Type 5b: RegisterSwap --

    #[test]
    fn roundtrip_register_swap() {
        let text = roundtrip(&Instruction::RegisterSwap {
            dreg: 14,
            cdreg: 8,
            cond: 31,
            compute: None,
        });
        assert_eq!(text, "R14<->S8");
    }

    #[test]
    fn roundtrip_register_swap_with_compute() {
        let text = roundtrip(&Instruction::RegisterSwap {
            dreg: 0,
            cdreg: 0,
            cond: 31,
            compute: Some(ComputeOp::Alu(AluOp::Add {
                rn: 0,
                rx: 1,
                ry: 2,
            })),
        });
        assert_eq!(text, "R0 = R1 + R2 , R0<->S0");
    }

    #[test]
    fn roundtrip_register_swap_conditional() {
        let text = roundtrip(&Instruction::RegisterSwap {
            dreg: 5,
            cdreg: 3,
            cond: 0, // EQ
            compute: None,
        });
        assert_eq!(text, "IF EQ R5<->S3");
    }

    // ──────────────────────────────────────────────────────────
    // Compute-unit opcode audit
    //
    // These tests pin the 8-bit MULOP and SHIFTOP fields in the
    // 48-bit encoder against the values the SHARC+ core actually
    // executes. A round-trip test is not enough on its own: if
    // both the encoder and the decoder drift to the same wrong
    // value they still round-trip cleanly, but the compiled
    // instruction runs a different operation on real silicon.
    // ──────────────────────────────────────────────────────────

    fn mul_opcode(op: MulOp) -> u32 {
        let word = encode_word(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Mul(op),
        })
        .expect("encode");
        ((word >> 12) & 0xFF) as u32
    }

    fn shift_opcode(op: ShiftOp) -> u32 {
        let word = encode_word(&Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Shift(op),
        })
        .expect("encode");
        ((word >> 12) & 0xFF) as u32
    }

    #[test]
    fn mulop_opcode_audit() {
        // `Rn = Rx * Ry` family (template 01yx f00r).
        assert_eq!(
            mul_opcode(MulOp::MulSsi {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x70
        );
        assert_eq!(
            mul_opcode(MulOp::MulSsf {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x78
        );
        // `mrf = Rx * Ry` family (template 01yx f10r).
        assert_eq!(mul_opcode(MulOp::MrfMulSsi { rx: 1, ry: 2 }), 0x74);
        assert_eq!(mul_opcode(MulOp::MrfMulSsf { rx: 1, ry: 2 }), 0x7C);
        assert_eq!(mul_opcode(MulOp::MrfMulUuf { rx: 1, ry: 2 }), 0x4C);
        // `mrb = Rx * Ry` family (template 01yx f11r).
        assert_eq!(mul_opcode(MulOp::MrbMulSsf { rx: 1, ry: 2 }), 0x7E);
        // Multiply-accumulate variants (template 10yx fXXr).
        assert_eq!(
            mul_opcode(MulOp::MacSsf {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0xB8
        );
        assert_eq!(mul_opcode(MulOp::MrfMacSsf { rx: 1, ry: 2 }), 0xBC);
        assert_eq!(mul_opcode(MulOp::MrbMacSsf { rx: 1, ry: 2 }), 0xBE);
        // Multiply-subtract variants (template 11yx fXXr).
        assert_eq!(mul_opcode(MulOp::MrfMsubSsf { rx: 1, ry: 2 }), 0xFC);
        assert_eq!(mul_opcode(MulOp::MrbMsubSsf { rx: 1, ry: 2 }), 0xFE);
        // Accumulator clears.
        assert_eq!(mul_opcode(MulOp::ClrMrf), 0x14);
        assert_eq!(mul_opcode(MulOp::ClrMrb), 0x16);
        // `Fn = Fx * Fy` (0011 0000).
        assert_eq!(
            mul_opcode(MulOp::FMul {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x30
        );
    }

    #[test]
    fn shiftop_opcode_audit() {
        assert_eq!(
            shift_opcode(ShiftOp::Lshift {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x00
        );
        assert_eq!(
            shift_opcode(ShiftOp::Ashift {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x04
        );
        assert_eq!(
            shift_opcode(ShiftOp::Rot {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x08
        );
        assert_eq!(
            shift_opcode(ShiftOp::OrLshift {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x20
        );
        assert_eq!(
            shift_opcode(ShiftOp::OrAshift {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x24
        );
        assert_eq!(
            shift_opcode(ShiftOp::Fext {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x40
        );
        assert_eq!(
            shift_opcode(ShiftOp::Fdep {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0x44
        );
        assert_eq!(shift_opcode(ShiftOp::Exp { rn: 0, rx: 1 }), 0x80);
        assert_eq!(shift_opcode(ShiftOp::ExpEx { rn: 0, rx: 1 }), 0x84);
        assert_eq!(shift_opcode(ShiftOp::Leftz { rn: 0, rx: 1 }), 0x88);
        assert_eq!(shift_opcode(ShiftOp::Lefto { rn: 0, rx: 1 }), 0x8C);
        assert_eq!(shift_opcode(ShiftOp::Fpack { rn: 0, rx: 1 }), 0x90);
        assert_eq!(shift_opcode(ShiftOp::Funpack { rn: 0, rx: 1 }), 0x94);
        assert_eq!(
            shift_opcode(ShiftOp::Bset {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0xC0
        );
        assert_eq!(
            shift_opcode(ShiftOp::Bclr {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0xC4
        );
        assert_eq!(
            shift_opcode(ShiftOp::Btgl {
                rn: 0,
                rx: 1,
                ry: 2
            }),
            0xC8
        );
        assert_eq!(shift_opcode(ShiftOp::Btst { rx: 1, ry: 2 }), 0xCC);
    }
}
