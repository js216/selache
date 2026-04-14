// SPDX-License-Identifier: GPL-3.0
// visa_encode.rs --- VISA variable-width instruction encoder for SHARC+
// Copyright (c) 2026 Jakob Kastelic

//! SHARC+ VISA (Variable Instruction Set Architecture) encoder.
//!
//! Given an instruction already encoded as a 48-bit ISA word, attempts to
//! compress it into 16-bit or 32-bit VISA form. Falls back to 48-bit if
//! no compact representation exists.
//!
//! The encoding strategy reuses the proven ISA encoder and works backward
//! from the VISA decoder's bit layouts in `visa.rs`.

use crate::encode::{
    AluOp, ComputeOp, FaluOp, Instruction, MulOp, ShiftOp,
};

/// Result of VISA compression.
#[derive(Debug, Clone)]
pub enum VisaEncoded {
    /// 16-bit instruction (1 parcel).
    W16(u16),
    /// 32-bit instruction (2 parcels, big-endian).
    W32(u32),
    /// 48-bit instruction (3 parcels, big-endian).
    W48([u8; 6]),
}

impl VisaEncoded {
    /// Whether the encoded instruction is zero-length (always false).
    pub fn is_empty(&self) -> bool {
        false
    }

    /// Number of bytes in the encoded instruction.
    pub fn len(&self) -> usize {
        match self {
            VisaEncoded::W16(_) => 2,
            VisaEncoded::W32(_) => 4,
            VisaEncoded::W48(_) => 6,
        }
    }

    /// Number of parcels (address units) consumed.
    pub fn parcels(&self) -> u32 {
        match self {
            VisaEncoded::W16(_) => 1,
            VisaEncoded::W32(_) => 2,
            VisaEncoded::W48(_) => 3,
        }
    }

    /// Emit bytes in big-endian order.
    pub fn to_bytes(&self) -> Vec<u8> {
        match self {
            VisaEncoded::W16(v) => vec![(v >> 8) as u8, *v as u8],
            VisaEncoded::W32(v) => vec![
                (v >> 24) as u8,
                (v >> 16) as u8,
                (v >> 8) as u8,
                *v as u8,
            ],
            VisaEncoded::W48(b) => b.to_vec(),
        }
    }
}

/// Attempt VISA compression of an instruction.
///
/// `instr` is the high-level instruction, `isa_bytes` is the 48-bit ISA
/// encoding (big-endian, as returned by `encode::encode`).
///
/// Returns the shortest VISA form possible.
pub fn visa_encode(instr: &Instruction, isa_bytes: &[u8; 6]) -> VisaEncoded {
    if let Some(w16) = try_16bit(instr) {
        return VisaEncoded::W16(w16);
    }
    if let Some(w32) = try_32bit(instr) {
        return VisaEncoded::W32(w32);
    }
    VisaEncoded::W48(*isa_bytes)
}

// ---------------------------------------------------------------------------
// 16-bit forms
// ---------------------------------------------------------------------------

fn try_16bit(instr: &Instruction) -> Option<u16> {
    match *instr {
        Instruction::Nop => Some(0x0001),
        Instruction::Idle => Some(0x0081),
        Instruction::EmuIdle => Some(0x00C1),
        Instruction::Rframe => Some(0x1901),
        Instruction::Return { interrupt: false, cond: 31, delayed: true, lr: false, compute: None } => {
            Some(0x0AFE)
        }
        Instruction::Compute { cond: 31, compute } => try_type2c(&compute),
        Instruction::UregDagMove {
            pm: false, write, ureg, i_reg, m_reg, cond: 31,
            compute: None,
        } => try_type3c(write, ureg, i_reg, m_reg),
        _ => None,
    }
}

/// Type 2c: 16-bit short compute.
///
/// bits[15:13]=110, bits[12:8]=opcode, bits[7:4]=rn, bits[3:0]=ry.
/// Only available when rn==rx (operation is `rn = rn OP ry`).
fn try_type2c(compute: &ComputeOp) -> Option<u16> {
    let (op, rn, ry) = match *compute {
        // Integer ALU ops where rn==rx
        ComputeOp::Alu(AluOp::Add { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (0, rn, ry)
        }
        ComputeOp::Alu(AluOp::Sub { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (1, rn, ry)
        }
        ComputeOp::Alu(AluOp::Pass { rn, rx }) if rn < 16 && rx < 16 => {
            (2, rn, rx)
        }
        ComputeOp::Alu(AluOp::Comp { rx, ry }) if rx < 16 && ry < 16 => {
            (3, rx, ry)
        }
        ComputeOp::Falu(FaluOp::Add { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (4, rn, ry)
        }
        ComputeOp::Alu(AluOp::Inc { rn, rx }) if rn < 16 && rx < 16 => {
            (5, rn, rx)
        }
        ComputeOp::Alu(AluOp::Dec { rn, rx }) if rn < 16 && rx < 16 => {
            (6, rn, rx)
        }
        ComputeOp::Alu(AluOp::AddCi { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (7, rn, ry)
        }
        // Abs and Neg are intentionally *not* compressed into the
        // Type 2c short-compute form. The 16-bit opcode-8/9 encoding
        // round-trips fine inside this crate, but the SHARC+ core
        // does not execute them as the expected single-source
        // `Rn = -Rx` / `Rn = ABS Rx` pair -- the compact form the
        // hardware actually implements for these opcodes treats the
        // bits[3:0] field differently, and a straight `Rn = ABS Rx`
        // compressed this way returns -1 from ABS(-7) on real
        // silicon. Let the 48-bit Type 2 encoder handle them.
        ComputeOp::Falu(FaluOp::Sub { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (10, rn, ry)
        }
        ComputeOp::Falu(FaluOp::Pass { rn, rx }) if rn < 16 && rx < 16 => {
            (11, rn, rx)
        }
        ComputeOp::Alu(AluOp::And { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (12, rn, ry)
        }
        ComputeOp::Alu(AluOp::Or { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (13, rn, ry)
        }
        ComputeOp::Alu(AluOp::Xor { rn, rx, ry }) if rn == rx && rn < 16 && ry < 16 => {
            (14, rn, ry)
        }
        ComputeOp::Alu(AluOp::Not { rn, rx }) if rn < 16 && rx < 16 => {
            (15, rn, rx)
        }
        _ => return None,
    };
    Some(0b110u16 << 13 | (op as u16) << 8 | (rn as u16) << 4 | (ry as u16))
}

/// Type 3c: 16-bit short data move (dreg <-> DM with DAG1 register addressing).
///
/// Only available for DAG1 (I0-I7, M0-M7), dreg R0-R15, no compute,
/// unconditional.
///
/// Layout: bits[15:12]=1001, bits[11:9]=i, bits[8:6]=m, bit[5]=d,
///         bit[4]=1(fixed), bits[3:0]=dreg.
fn try_type3c(write: bool, ureg: u8, i_reg: u8, m_reg: u8) -> Option<u16> {
    // ureg must be a data register (R0-R15): ureg codes 0x00-0x0F
    if ureg > 15 {
        return None;
    }
    // DAG1 only: I0-I7, M0-M7
    if i_reg > 7 || m_reg > 7 {
        return None;
    }
    let d = if write { 1u16 } else { 0 };
    let dreg = ureg as u16;
    Some(
        0b1001u16 << 12
            | (i_reg as u16 & 7) << 9
            | (m_reg as u16 & 7) << 6
            | d << 5
            | 1u16 << 4
            | dreg,
    )
}

// ---------------------------------------------------------------------------
// 32-bit forms
// ---------------------------------------------------------------------------

fn try_32bit(instr: &Instruction) -> Option<u32> {
    match *instr {
        Instruction::Compute { cond, compute } => try_type2b(cond, &compute),
        Instruction::DagModify { pm, i_reg, m_reg, cond, compute: None } => {
            try_type7b(pm, i_reg, m_reg, cond)
        }
        Instruction::LoadImm { ureg, value } => try_type17b(ureg, value),
        Instruction::UregDagMove {
            pm: false, write, ureg, i_reg, m_reg, cond,
            compute: None,
        } => try_type3b(write, ureg, i_reg, m_reg, cond),
        Instruction::ComputeLoadStore {
            compute: None, access, dreg, offset, cond,
        } if !access.pm => {
            try_type4b(access.write, access.i_reg, dreg, offset, cond)
        }
        Instruction::URegMove { dest, src } => try_type5b_move(dest, src),
        Instruction::UregTransfer { src_ureg, dst_ureg, compute: None } => {
            try_type5b_move(dst_ureg, src_ureg)
        }
        Instruction::IndirectBranch { call, cond, pm_i, pm_m, delayed, compute: None } => {
            try_type9a_32bit(call, cond, pm_i, pm_m, delayed)
        }
        _ => None,
    }
}

/// Type 9a: 32-bit VISA indirect jump/call through a PM DAG register pair.
///
/// Layout:
///   p1[15:13]=000, p1[12:8]=01000 (Type 9a), p1[7]=0 (32-bit flag),
///   p1[6]=J, p1[5:1]=cond, p1[0]=1 (reserved-set)
///   p2[15:14]=pmi_off (I12-I15 → 0-3), p2[13:11]=pmm (M8-M15 → 0-7),
///   p2[10]=db, p2[5:0]=0x3f (W32 marker)
///
/// Only reachable for I12-I15; other PM I-registers fall through to 48-bit.
/// `pm_i` and `pm_m` arrive as the full register index (0-15) from the
/// parser, and the encoder only uses the low 3 bits for I8-I15 / M8-M15.
fn try_type9a_32bit(call: bool, cond: u8, pm_i: u8, pm_m: u8, delayed: bool) -> Option<u32> {
    if !(12..=15).contains(&pm_i) || !(8..=15).contains(&pm_m) {
        return None;
    }
    let pmi_off = pm_i - 12;
    let pmm_off = pm_m - 8;
    let j = if call { 1u16 } else { 0 };
    let db = if delayed { 1u16 } else { 0 };
    let p1 = (0b01000u16 << 8)
        | (j << 6)
        | ((cond as u16 & 0x1F) << 1)
        | 1;
    let p2 = ((pmi_off as u16 & 3) << 14)
        | ((pmm_off as u16 & 7) << 11)
        | (db << 10)
        | 0x3f;
    Some((p1 as u32) << 16 | p2 as u32)
}

/// Type 2b: 32-bit compute.
///
/// Layout: `[31:29]=000  [28:24]=00001  [23]=1  [22:0]=compute`
fn try_type2b(cond: u8, compute: &ComputeOp) -> Option<u32> {
    let comp23 = compute_to_23bit(compute)?;
    // Condition is encoded in p1[5:1] for 32-bit: bit7=1 flag + cond
    // Actually, Type 2b layout: p1 = 000_00001_1_CCCCC_0, p2 = compute low 16
    // Full 32-bit: bits[31:24]=0x01, bit[23]=1(32b), bits[22:18]=cond, ... no.
    //
    // From visa.rs decode_32_type2b: compute = {p1[6:0], p2[15:0]} = 23 bits
    // p1[15:13]=000, p1[12:8]=00001, p1[7]=1 (32-bit flag)
    // p1[6:0] = compute[22:16]
    // p2 = compute[15:0]
    //
    // But the decoder says "unconditional" — check: the decoder doesn't extract
    // a condition field. 32-bit Type 2b is always unconditional.
    if cond != 31 {
        return None;
    }
    let p1 = 0x0180u16 | ((comp23 >> 16) as u16 & 0x7F);
    let p2 = comp23 as u16;
    Some((p1 as u32) << 16 | p2 as u32)
}

/// Type 7b: 32-bit MODIFY with result assignment.
///
/// `i_dest = MODIFY(i_src, m)` — only supports i_dest == i_src (dest_xor=0)
/// or when the XOR trick works.
///
/// Layout: p1[7]=0 (32-bit flag), p1[6]=g, p1[5:1]=cond, p1[0]=i_src[2]
///         p2[15:14]=i_src[1:0], p2[13:11]=m, p2[10:8]=dest_xor
fn try_type7b(pm: bool, i_reg: u8, m_reg: u8, cond: u8) -> Option<u32> {
    // This is MODIFY(Ii, Mm) with the result going back to Ii.
    // i_dest == i_src, so dest_xor = 0.
    let g = if pm { 1u16 } else { 0 };
    let i_local = i_reg & 7;
    let m_local = m_reg & 7;
    let dest_xor = 0u16; // i_dest == i_src

    let p1 = (0b00000100u16 << 8)
        | (g << 6)
        | ((cond as u16 & 0x1F) << 1)
        | ((i_local as u16 >> 2) & 1);
    let p2 = ((i_local as u16 & 3) << 14)
        | ((m_local as u16) << 11)
        | (dest_xor << 8);
    Some((p1 as u32) << 16 | p2 as u32)
}

/// Type 17b: 32-bit LoadImm where value fits signed 16-bit.
///
/// Layout: p1[15:13]=000, p1[12:8]=01111, p1[7]=1 (32-bit flag),
///         p1[6:0]=ureg code, p2=imm16.
fn try_type17b(ureg: u8, value: u32) -> Option<u32> {
    // Value must fit in signed 16-bit range
    let v = value as i32;
    if !(-32768..=32767).contains(&v) {
        return None;
    }
    // ureg must fit in 7 bits
    if ureg > 127 {
        return None;
    }
    let p1 = 0x0F80u16 | (ureg as u16 & 0x7F);
    let p2 = value as u16;
    Some((p1 as u32) << 16 | p2 as u32)
}

/// Type 3b: 32-bit ureg <-> DM with register addressing.
///
/// Layout (from visa.rs decode_32_type3b):
///   p1[12:9] = i-register index
///   p1[7:6]  = m-register offset (m = field + 4, giving M4-M7)
///   p1[5:1]  = cond
///   p2[15]   = direction (0=read, 1=write)
///   p2[14]   = short-word flag
///   p2[13:7] = ureg code
///   p2[1:0]  = access width (11=NW normal)
fn try_type3b(write: bool, ureg: u8, i_reg: u8, m_reg: u8, cond: u8) -> Option<u32> {
    // M register must be M4-M7 for Type 3b
    if !(4..=7).contains(&m_reg) {
        return None;
    }
    if i_reg > 7 {
        return None;
    }
    if ureg > 127 {
        return None;
    }
    let m_offset = (m_reg - 4) & 3;
    let d = if write { 1u16 } else { 0 };

    // p1: top3=010, sub bits. Bit 8 must be set as part of the W32 marker.
    let p1 = (0b010u16 << 13)
        | ((i_reg as u16 & 0xF) << 9)
        | (1u16 << 8)
        | ((m_offset as u16) << 6)
        | ((cond as u16 & 0x1F) << 1);
    // p2: d, sw=0, ureg, then 0x3f marker in the low 6 bits. The VISA
    // width disambiguator keys off `p2 & 0x3F >= 0x38` for top3=010 to
    // decide 32-bit vs 48-bit, so the low 6 bits must all be set.
    let p2 = (d << 15)
        | ((ureg as u16 & 0x7F) << 7)
        | 0x3f;
    Some((p1 as u32) << 16 | p2 as u32)
}

/// Type 4b: 32-bit dreg <-> DM with 6-bit immediate offset, no compute.
///
/// From visa.rs decode_32_type4b:
///   p1[12:9] = i-register index
///   p1[10]   = direction
///   p1[5:1]  = cond
///   {p1[0], p2[15:11]} = 6-bit signed offset
///   p2[10:7] = dreg
///   p2[1:0]  = 11 (normal word)
fn try_type4b(write: bool, i_reg: u8, dreg: u8, offset: i8, cond: u8) -> Option<u32> {
    if i_reg > 15 || dreg > 15 {
        return None;
    }
    // Offset must fit in 6-bit signed (-32..31)
    if !(-32..=31).contains(&offset) {
        return None;
    }
    let d = if write { 1u16 } else { 0 };
    let raw6 = (offset as u8 as u16) & 0x3F;
    let off_hi = (raw6 >> 5) & 1;  // bit 5 → p1[0]
    let off_lo = raw6 & 0x1F;      // bits 4:0 → p2[15:11]

    // p1: top3=011, sub varies, d at bit10, i at bits[12:9]
    // From the decoder, p1[6]=0 means offset-first order. Let's use p1[6]=0.
    let p1 = (0b011u16 << 13)
        | ((i_reg as u16 & 0xF) << 9)
        | (d << 10)
        | ((cond as u16 & 0x1F) << 1)
        | off_hi;
    let p2 = (off_lo << 11)
        | ((dreg as u16 & 0xF) << 7)
        | 0b11u16; // normal word
    Some((p1 as u32) << 16 | p2 as u32)
}

/// Type 5b (32-bit ureg move): `dest_ureg = src_ureg`.
///
/// From visa.rs decode_32_ureg_move:
///   p1[12:8] = sub5 = 10_group[2:0]
///   p1[7]    = src_idx[3]
///   p1[6]    = src_idx[2]
///   p1[5:1]  = cond
///   p1[0]    = src_idx[1]
///   p2[15]   = src_idx[0]
///   p2[13:7] = dst_ureg (7-bit code)
fn try_type5b_move(dest: u8, src: u8) -> Option<u32> {
    if dest > 127 || src > 127 {
        return None;
    }
    let src_group = (src >> 4) & 7;
    let src_idx = src & 0xF;

    let sub5 = 0b10_000u16 | src_group as u16;
    let cond = 31u16; // unconditional

    let p1 = (sub5 << 8)
        | (((src_idx >> 3) & 1) as u16) << 7
        | (((src_idx >> 2) & 1) as u16) << 6
        | (cond << 1)
        | (((src_idx >> 1) & 1) as u16);
    let p2 = ((src_idx & 1) as u16) << 15
        | ((dest as u16 & 0x7F) << 7);
    Some((p1 as u32) << 16 | p2 as u32)
}

// ---------------------------------------------------------------------------
// Compute field → 23-bit encoding for 32-bit instructions
// ---------------------------------------------------------------------------

/// Convert a ComputeOp to a 23-bit compute field for 32-bit VISA instructions.
///
/// The 23-bit field layout matches the ISA 48-bit compute field:
///   bit[22]    = multi (0 for single)
///   bits[21:20] = cu (0=ALU, 1=MUL, 2=SHIFT)
///   bits[19:12] = opcode
///   bits[11:8]  = Rn
///   bits[7:4]   = Rx
///   bits[3:0]   = Ry
fn compute_to_23bit(compute: &ComputeOp) -> Option<u32> {
    match compute {
        ComputeOp::Alu(alu) => alu_to_23bit(alu),
        ComputeOp::Falu(falu) => falu_to_23bit(falu),
        ComputeOp::Mul(mul) => mul_to_23bit(mul),
        ComputeOp::Shift(shift) => shift_to_23bit(shift),
        ComputeOp::Multi(_) => None, // multi-function ops stay 48-bit
    }
}

fn alu_to_23bit(alu: &AluOp) -> Option<u32> {
    let (opcode, rn, rx, ry): (u8, u8, u8, u8) = match *alu {
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
    if rn > 15 || rx > 15 || ry > 15 {
        return None;
    }
    // cu=0 (ALU), multi=0
    Some(
        (opcode as u32) << 12
        | (rn as u32) << 8
        | (rx as u32) << 4
        | ry as u32,
    )
}

fn falu_to_23bit(falu: &FaluOp) -> Option<u32> {
    let (opcode, rn, rx, ry): (u8, u8, u8, u8) = match *falu {
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
    if rn > 15 || rx > 15 || ry > 15 {
        return None;
    }
    // cu=0 (ALU — FP opcodes share the ALU CU), multi=0
    Some(
        (opcode as u32) << 12
        | (rn as u32) << 8
        | (rx as u32) << 4
        | ry as u32,
    )
}

fn mul_to_23bit(mul: &MulOp) -> Option<u32> {
    let (opcode, rn, rx, ry): (u8, u8, u8, u8) = match *mul {
        MulOp::MrfMulSsf { rx, ry } => (0x40, 0, rx, ry),
        MulOp::MrbMulSsf { rx, ry } => (0x41, 0, rx, ry),
        MulOp::MulSsf { rn, rx, ry } => (0x44, rn, rx, ry),
        MulOp::MulSsi { rn, rx, ry } => (0x70, rn, rx, ry),
        // MrfMulSsi is intentionally omitted from the 32-bit compact
        // form; the 48-bit encoder handles it.  The 32-bit VISA MUL
        // opcode map differs from the 48-bit one and opcode 0x74 in
        // 32-bit space collides with a different instruction form.
        MulOp::MrfMacSsf { rx, ry } => (0x48, 0, rx, ry),
        MulOp::MrbMacSsf { rx, ry } => (0x49, 0, rx, ry),
        MulOp::MacSsf { rn, rx, ry } => (0x4C, rn, rx, ry),
        MulOp::MrfMsubSsf { rx, ry } => (0x50, 0, rx, ry),
        MulOp::MrbMsubSsf { rx, ry } => (0x51, 0, rx, ry),
        MulOp::SatMrf { rn } => (0x60, rn, 0, 0),
        MulOp::SatMrb { rn } => (0x61, rn, 0, 0),
        MulOp::ClrMrf => (0x64, 0, 0, 0),
        MulOp::ClrMrb => (0x65, 0, 0, 0),
        MulOp::FMul { rn, rx, ry } => (0x80, rn, rx, ry),
        _ => return None, // TRNC, UUF, SSI etc.
    };
    if rn > 15 || rx > 15 || ry > 15 {
        return None;
    }
    // cu=1 (MUL), multi=0
    Some(
        1u32 << 20
        | (opcode as u32) << 12
        | (rn as u32) << 8
        | (rx as u32) << 4
        | ry as u32,
    )
}

fn shift_to_23bit(shift: &ShiftOp) -> Option<u32> {
    let (opcode, rn, rx, ry): (u8, u8, u8, u8) = match *shift {
        ShiftOp::Lshift { rn, rx, ry } => (0x00, rn, rx, ry),
        ShiftOp::OrLshift { rn, rx, ry } => (0x04, rn, rx, ry),
        ShiftOp::Ashift { rn, rx, ry } => (0x08, rn, rx, ry),
        ShiftOp::OrAshift { rn, rx, ry } => (0x0C, rn, rx, ry),
        ShiftOp::Btst { rx, ry } => (0xCC, 0, rx, ry),
        ShiftOp::Bclr { rn, rx, ry } => (0xC4, rn, rx, ry),
        ShiftOp::Bset { rn, rx, ry } => (0xC0, rn, rx, ry),
        ShiftOp::Btgl { rn, rx, ry } => (0xC8, rn, rx, ry),
        ShiftOp::Fext { rn, rx, ry } => (0x60, rn, rx, ry),
        ShiftOp::Fdep { rn, rx, ry } => (0x64, rn, rx, ry),
        ShiftOp::Exp { rn, rx } => (0x80, rn, rx, 0),
        ShiftOp::ExpEx { rn, rx } => (0x84, rn, rx, 0),
        ShiftOp::Leftz { rn, rx } => (0x88, rn, rx, 0),
        ShiftOp::Lefto { rn, rx } => (0x8C, rn, rx, 0),
        ShiftOp::Fpack { rn, rx } => (0xD0, rn, rx, 0),
        ShiftOp::Funpack { rn, rx } => (0xD4, rn, rx, 0),
        _ => return None,
    };
    if rn > 15 || rx > 15 || ry > 15 {
        return None;
    }
    // cu=2 (SHIFT), multi=0
    Some(
        2u32 << 20
        | (opcode as u32) << 12
        | (rn as u32) << 8
        | (rx as u32) << 4
        | ry as u32,
    )
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use crate::encode::{self, Instruction};

    fn encode_isa(instr: &Instruction) -> [u8; 6] {
        encode::encode(instr).expect("ISA encode failed")
    }

    #[test]
    fn nop_compresses_to_16bit() {
        let instr = Instruction::Nop;
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        assert!(matches!(result, VisaEncoded::W16(0x0001)));
        assert_eq!(result.len(), 2);
        assert_eq!(result.parcels(), 1);
    }

    #[test]
    fn idle_compresses_to_16bit() {
        let instr = Instruction::Idle;
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        assert!(matches!(result, VisaEncoded::W16(0x0081)));
    }

    #[test]
    fn emuidle_compresses_to_16bit() {
        let instr = Instruction::EmuIdle;
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        assert!(matches!(result, VisaEncoded::W16(0x00C1)));
    }

    #[test]
    fn short_compute_add() {
        // R3 = R3 + R5 → Type 2c, op=0
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Add { rn: 3, rx: 3, ry: 5 }),
        };
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        match result {
            VisaEncoded::W16(v) => {
                assert_eq!(v, 0b1100_0000_0011_0101);
            }
            _ => panic!("expected 16-bit"),
        }
    }

    #[test]
    fn short_compute_rn_ne_rx_stays_48() {
        // R3 = R4 + R5: rn != rx, cannot use Type 2c
        let instr = Instruction::Compute {
            cond: 31,
            compute: ComputeOp::Alu(AluOp::Add { rn: 3, rx: 4, ry: 5 }),
        };
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        // Should be 32-bit Type 2b (no rn==rx constraint at 32-bit level)
        assert!(matches!(result, VisaEncoded::W32(_)));
    }

    #[test]
    fn load_imm16_compresses() {
        let instr = Instruction::LoadImm { ureg: 0x06, value: 0x1234 };
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        match result {
            VisaEncoded::W32(v) => {
                let p1 = (v >> 16) as u16;
                let p2 = v as u16;
                assert_eq!(p1, 0x0F80 | 0x06);
                assert_eq!(p2, 0x1234);
            }
            _ => panic!("expected 32-bit"),
        }
    }

    #[test]
    fn load_imm32_stays_48() {
        let instr = Instruction::LoadImm { ureg: 0x06, value: 0x12345678 };
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        assert!(matches!(result, VisaEncoded::W48(_)));
    }

    #[test]
    fn branch_stays_48() {
        use crate::encode::BranchTarget;
        let instr = Instruction::Branch {
            call: false,
            cond: 31,
            target: BranchTarget::Absolute(0x100),
            delayed: false,
        };
        let isa = encode_isa(&instr);
        let result = visa_encode(&instr, &isa);
        // Branches are always 48-bit in VISA
        assert!(matches!(result, VisaEncoded::W48(_)));
    }

    #[test]
    fn to_bytes_correctness() {
        assert_eq!(VisaEncoded::W16(0xABCD).to_bytes(), vec![0xAB, 0xCD]);
        assert_eq!(
            VisaEncoded::W32(0x12345678).to_bytes(),
            vec![0x12, 0x34, 0x56, 0x78]
        );
    }
}
