// SPDX-License-Identifier: GPL-3.0
// disasm.rs --- SHARC+ ISA/VISA instruction disassembler
// Copyright (c) 2026 Jakob Kastelic

//! SHARC+ 48-bit instruction disassembler.

use std::fmt::Write;

/// One disassembled instruction.
pub struct DisasmLine {
    /// Instruction word address.
    pub addr: u32,
    /// Raw instruction bytes (2, 4, or 6 for VISA; always 6 for ISA).
    pub raw: Vec<u8>,
    /// Formatted disassembly text (mnemonic + operands).
    pub text: String,
}

/// Disassemble a code section.
///
/// `data`: raw bytes of section content
/// `base_addr`: starting word address
/// `little_endian`: true for LE ELF
///
/// Returns one `DisasmLine` per 48-bit instruction word.
pub fn disassemble(data: &[u8], base_addr: u32, little_endian: bool) -> Vec<DisasmLine> {
    let mut result = Vec::new();
    let mut offset = 0usize;
    let mut addr = base_addr;
    while offset + 6 <= data.len() {
        let chunk = &data[offset..offset + 6];
        let word = if little_endian {
            (chunk[0] as u64)
                | ((chunk[1] as u64) << 8)
                | ((chunk[2] as u64) << 16)
                | ((chunk[3] as u64) << 24)
                | ((chunk[4] as u64) << 32)
                | ((chunk[5] as u64) << 40)
        } else {
            ((chunk[0] as u64) << 40)
                | ((chunk[1] as u64) << 32)
                | ((chunk[2] as u64) << 24)
                | ((chunk[3] as u64) << 16)
                | ((chunk[4] as u64) << 8)
                | (chunk[5] as u64)
        };
        let text = decode_instruction(word);
        result.push(DisasmLine {
            addr,
            raw: chunk.to_vec(),
            text,
        });
        offset += 6;
        addr += 1;
    }
    result
}

// ---------------------------------------------------------------------------
// Bit extraction helpers
// ---------------------------------------------------------------------------

fn bits(word: u64, hi: u8, lo: u8) -> u32 {
    let mask = (1u64 << (hi - lo + 1)) - 1;
    ((word >> lo) & mask) as u32
}

fn bit(word: u64, pos: u8) -> bool {
    (word >> pos) & 1 != 0
}

fn sign_extend(val: u32, width: u8) -> i32 {
    let shift = 32 - width;
    ((val as i32) << shift) >> shift
}

// ---------------------------------------------------------------------------
// Register name lookups
// ---------------------------------------------------------------------------

fn dreg(index: u32, float: bool) -> String {
    let i = index & 0xF;
    if float {
        format!("F{i}")
    } else {
        format!("R{i}")
    }
}

fn ureg_name(code: u32) -> String {
    let group = (code >> 4) & 0xF;
    let reg = code & 0xF;
    match group {
        0x0 => format!("R{reg}"),
        0x1 => format!("I{reg}"),
        0x2 => format!("M{reg}"),
        0x3 => format!("L{reg}"),
        0x4 => format!("B{reg}"),
        0x5 => format!("S{reg}"),
        0x6 => match reg {
            0x0 => "FADDR".into(),
            0x1 => "DADDR".into(),
            0x2 => "PC".into(),
            0x3 => "PCSTK".into(),
            0x4 => "PCSTKP".into(),
            0x5 => "LADDR".into(),
            0x6 => "CURLCNTR".into(),
            0x7 => "LCNTR".into(),
            0x8 => "EMUCLK".into(),
            0x9 => "EMUCLK2".into(),
            0xC => "PX".into(),
            0xD => "PX1".into(),
            0xE => "PX2".into(),
            _ => format!("UREG(0x{code:02X})"),
        },
        0x7 => match reg {
            0x0 => "MODE1".into(),
            0x1 => "MODE2".into(),
            0x2 => "FLAGS".into(),
            0x3 => "ASTATx".into(),
            0x4 => "ASTATy".into(),
            0x5 => "STKYx".into(),
            0x6 => "STKYy".into(),
            0x8 => "IRPTL".into(),
            0x9 => "IMASK".into(),
            0xA => "IMASKP".into(),
            0xB => "LRPTL".into(),
            0xC => "MMASK".into(),
            _ => format!("UREG(0x{code:02X})"),
        },
        0x8 => match reg {
            0x0 => "USTAT1".into(),
            0x1 => "USTAT2".into(),
            0x2 => "USTAT3".into(),
            0x3 => "USTAT4".into(),
            _ => format!("UREG(0x{code:02X})"),
        },
        0x9 => match reg {
            0x0 => "TPERIOD".into(),
            0x1 => "TCOUNT".into(),
            _ => format!("UREG(0x{code:02X})"),
        },
        _ => format!("UREG(0x{code:02X})"),
    }
}

fn visa_ureg_name(code: u32) -> String {
    let group = (code >> 4) & 0x7;
    let reg = code & 0xF;
    match group {
        0x0 => format!("R{reg}"),
        0x1 => format!("I{reg}"),
        0x2 => format!("M{reg}"),
        0x3 => format!("L{reg}"),
        0x4 => format!("B{reg}"),
        0x5 => format!("S{reg}"),
        0x6 => match reg {
            0x0 => "FADDR".into(),
            0x1 => "DADDR".into(),
            0x2 => "PC".into(),
            0x3 => "PCSTK".into(),
            0x4 => "PCSTK".into(),
            0x5 => "LADDR".into(),
            0x6 => "LADDR".into(),
            0x7 => "CURLCNTR".into(),
            0x8 => "LCNTR".into(),
            0x9 => "EMUCLK".into(),
            0xA => "EMUCLK2".into(),
            0xB => "PX".into(),
            0xC => "PX1".into(),
            0xD => "PX2".into(),
            0xE => "PX2".into(),
            _ => format!("UREG(0x{code:02X})"),
        },
        0x7 => match reg {
            0x0 => "MODE1".into(),
            0x1 => "MODE2".into(),
            0x2 => "MODE1".into(),
            0x3 => "MODE2".into(),
            0x4 => "FLAGS".into(),
            0x5 => "FLAGS".into(),
            0x6 => "ASTATx".into(),
            0x7 => "ASTATy".into(),
            0x8 => "STKYx".into(),
            0x9 => "STKYy".into(),
            0xA => "IRPTL".into(),
            0xB => "IMASK".into(),
            0xC => "IMASKP".into(),
            0xD => "MODE1STK".into(),
            _ => format!("UREG(0x{code:02X})"),
        },
        _ => format!("UREG(0x{code:02X})"),
    }
}

fn cond_name(code: u32) -> &'static str {
    match code & 0x1F {
        0 => "EQ",
        1 => "LT",
        2 => "LE",
        3 => "AC",
        4 => "AV",
        5 => "MV",
        6 => "MS",
        7 => "SV",
        8 => "SZ",
        9 => "FLAG0_IN",
        10 => "FLAG1_IN",
        11 => "FLAG2_IN",
        12 => "FLAG3_IN",
        13 => "TF",
        14 => "BM",
        15 => "NOT LCE",
        16 => "NE",
        17 => "GE",
        18 => "GT",
        19 => "NOT AC",
        20 => "NOT AV",
        21 => "NOT MV",
        22 => "NOT MS",
        23 => "NOT SV",
        24 => "NOT SZ",
        25 => "NOT FLAG0_IN",
        26 => "NOT FLAG1_IN",
        27 => "NOT FLAG2_IN",
        28 => "NOT FLAG3_IN",
        29 => "NOT TF",
        30 => "NBM",
        31 => "TRUE",
        _ => "COND(?)",
    }
}

fn term_name(code: u32) -> &'static str {
    match code & 0x1F {
        15 => "LCE",
        31 => "FOREVER",
        other => cond_name(other),
    }
}

fn dag1_i(field: u32) -> String {
    format!("I{}", field & 7)
}

fn dag1_m(field: u32) -> String {
    format!("M{}", field & 7)
}

fn dag2_i(field: u32) -> String {
    format!("I{}", (field & 7) + 8)
}

fn dag2_m(field: u32) -> String {
    format!("M{}", (field & 7) + 8)
}

// ---------------------------------------------------------------------------
// Compute field decoder
// ---------------------------------------------------------------------------

fn decode_compute(field: u32) -> String {
    if field == 0 {
        return String::new();
    }
    let multi = (field >> 22) & 1;
    if multi == 1 {
        return decode_multifunction(field);
    }
    let cu = (field >> 20) & 3;
    let opcode = ((field >> 12) & 0xFF) as u8;
    let rn = (field >> 8) & 0xF;
    let rx = (field >> 4) & 0xF;
    let ry = field & 0xF;

    match cu {
        0 => decode_alu(opcode, rn, rx, ry),
        1 => decode_mul(opcode, rn, rx, ry),
        2 => decode_shift(opcode, rn, rx, ry),
        _ => format!("COMPUTE(0x{field:06X})"),
    }
}

fn decode_alu(opcode: u8, rn: u32, rx: u32, ry: u32) -> String {
    let fp = opcode & 0x80 != 0;
    let r = |i: u32| dreg(i, fp);
    match opcode {
        0x01 => format!("{} = {} + {}", r(rn), r(rx), r(ry)),
        0x02 => format!("{} = {} - {}", r(rn), r(rx), r(ry)),
        0x05 => format!("{} = {} + {} + CI", r(rn), r(rx), r(ry)),
        0x06 => format!("{} = {} - {} + CI - 1", r(rn), r(rx), r(ry)),
        0x09 => format!("{} = ({} + {})/2", r(rn), r(rx), r(ry)),
        0x0A => format!("COMP ({},{})", r(rx), r(ry)),
        0x0B => format!("COMPU ({},{})", dreg(rx, false), dreg(ry, false)),
        0x21 => format!("{} = PASS {}", r(rn), r(rx)),
        0x22 => format!("{} = -{}", r(rn), r(rx)),
        0x25 => format!("{} = {} + CI", r(rn), r(rx)),
        0x26 => format!("{} = {} + CI - 1", r(rn), r(rx)),
        0x29 => format!("{} = {} + 1", r(rn), r(rx)),
        0x2A => format!("{} = {} - 1", r(rn), r(rx)),
        0x30 => format!("{} = ABS {}", r(rn), r(rx)),
        0x40 => format!("{} = {} AND {}", r(rn), r(rx), r(ry)),
        0x41 => format!("{} = {} OR {}", r(rn), r(rx), r(ry)),
        0x42 => format!("{} = {} XOR {}", r(rn), r(rx), r(ry)),
        0x43 => format!("{} = NOT {}", r(rn), r(rx)),
        0x61 => format!("{} = MIN({}, {})", r(rn), r(rx), r(ry)),
        0x62 => format!("{} = MAX({}, {})", r(rn), r(rx), r(ry)),
        0x63 => format!("{} = CLIP {} BY {}", r(rn), r(rx), r(ry)),
        // Floating-point
        0x81 => format!("{} = {} + {}", r(rn), r(rx), r(ry)),
        0x82 => format!("{} = {} - {}", r(rn), r(rx), r(ry)),
        0x89 => format!("{} = ({} + {})/2", r(rn), r(rx), r(ry)),
        0x8A => format!("COMP ({},{})", r(rx), r(ry)),
        0x91 => format!("{} = ABS({} + {})", r(rn), r(rx), r(ry)),
        0x92 => format!("{} = ABS({} - {})", r(rn), r(rx), r(ry)),
        0xA1 => format!("{} = PASS {}", r(rn), r(rx)),
        0xA2 => format!("{} = -{}", r(rn), r(rx)),
        0xA5 => format!("{} = RND {}", r(rn), r(rx)),
        0xAD => format!("{} = MANT {}", dreg(rn, false), r(rx)),
        0xB0 => format!("{} = ABS {}", r(rn), r(rx)),
        0xBD => format!("{} = SCALB {} BY {}", r(rn), r(rx), dreg(ry, false)),
        0xC1 => format!("{} = LOGB {}", dreg(rn, false), r(rx)),
        0xC4 => format!("{} = RECIPS {}", r(rn), r(rx)),
        0xC5 => format!("{} = RSQRTS {}", r(rn), r(rx)),
        0xC9 => format!("{} = FIX {}", dreg(rn, false), r(rx)),
        0xCA => format!("{} = FLOAT {}", r(rn), dreg(rx, false)),
        0xCD => format!("{} = TRUNC {}", dreg(rn, false), r(rx)),
        0xD9 => format!("{} = FIX {} BY {}", dreg(rn, false), r(rx), dreg(ry, false)),
        0xDA => format!("{} = FLOAT {} BY {}", r(rn), dreg(rx, false), dreg(ry, false)),
        0xDD => format!("{} = TRUNC {} BY {}", dreg(rn, false), r(rx), dreg(ry, false)),
        0xE0 => format!("{} = {} COPYSIGN {}", r(rn), r(rx), r(ry)),
        0xE1 => format!("{} = MIN({}, {})", r(rn), r(rx), r(ry)),
        0xE2 => format!("{} = MAX({}, {})", r(rn), r(rx), r(ry)),
        0xE3 => format!("{} = CLIP {} BY {}", r(rn), r(rx), r(ry)),
        _ => format!("ALU opcode 0x{opcode:02X}"),
    }
}

fn decode_mul(opcode: u8, rn: u32, rx: u32, ry: u32) -> String {
    let r = |i: u32| dreg(i, false);
    let f = |i: u32| dreg(i, true);
    match opcode {
        0x40 => format!("MRF = {} * {} (SSF)", r(rx), r(ry)),
        0x41 => format!("MRB = {} * {} (SSF)", r(rx), r(ry)),
        0x44 => format!("{} = {} * {} (SSF)", r(rn), r(rx), r(ry)),
        0x48 => format!("MRF = MRF + {} * {} (SSF)", r(rx), r(ry)),
        0x49 => format!("MRB = MRB + {} * {} (SSF)", r(rx), r(ry)),
        0x4C => format!("{} = MRF + {} * {} (SSF)", r(rn), r(rx), r(ry)),
        0x50 => format!("MRF = MRF - {} * {} (SSF)", r(rx), r(ry)),
        0x51 => format!("MRB = MRB - {} * {} (SSF)", r(rx), r(ry)),
        0x60 => format!("{} = SAT MRF", r(rn)),
        0x61 => format!("{} = SAT MRB", r(rn)),
        0x64 => "MRF = 0".into(),
        0x65 => "MRB = 0".into(),
        0x68 => "MRF = TRNC MRF".into(),
        0x69 => "MRB = TRNC MRB".into(),
        0x6C => format!("{} = TRNC MRF", r(rn)),
        0x6D => format!("{} = TRNC MRB", r(rn)),
        0x70 => format!("{} = {} * {} (SSI)", r(rn), r(rx), r(ry)),
        0x74 => format!("MRF = {} * {} (SSI)", r(rx), r(ry)),
        0x80 => format!("{} = {} * {}", f(rn), f(rx), f(ry)),
        _ => format!("MUL opcode 0x{opcode:02X}"),
    }
}

fn decode_shift(opcode: u8, rn: u32, rx: u32, ry: u32) -> String {
    let r = |i: u32| dreg(i, false);
    match opcode {
        0x00 => format!("{} = LSHIFT {} BY {}", r(rn), r(rx), r(ry)),
        0x04 => format!("{} = {} OR LSHIFT {} BY {}", r(rn), r(rn), r(rx), r(ry)),
        0x08 => format!("{} = ASHIFT {} BY {}", r(rn), r(rx), r(ry)),
        0x0C => format!("{} = {} OR ASHIFT {} BY {}", r(rn), r(rn), r(rx), r(ry)),
        0x20 => format!("{} = {} OR LSHIFT {} BY {}", r(rn), r(rn), r(rx), r(ry)),
        0x40 => format!("BTST {} BY {}", r(rx), r(ry)),
        0x44 => format!("{} = BCLR {} BY {}", r(rn), r(rx), r(ry)),
        0x48 => format!("{} = BSET {} BY {}", r(rn), r(rx), r(ry)),
        0x4C => format!("{} = BTGL {} BY {}", r(rn), r(rx), r(ry)),
        0x50 => format!("{} = FEXT {} BY {}", r(rn), r(rx), r(ry)),
        0x54 => format!("{} = FDEP {} BY {}", r(rn), r(rx), r(ry)),
        0x60 => format!("{} = FEXT {} BY {}", r(rn), r(rx), r(ry)),
        0x64 => format!("{} = FDEP {} BY {}", r(rn), r(rx), r(ry)),
        0x68 => format!("{} = {} OR FEXT {} BY {} (SE)", r(rn), r(rn), r(rx), r(ry)),
        0x6C => format!("{} = {} OR FDEP {} BY {}", r(rn), r(rn), r(rx), r(ry)),
        0x80 => format!("{} = EXP {}", r(rn), r(rx)),
        0x84 => format!("{} = EXP {} (EX)", r(rn), r(rx)),
        0x88 => format!("{} = LEFTZ {}", r(rn), r(rx)),
        0x8C => format!("{} = LEFTO {}", r(rn), r(rx)),
        0xC0 => format!("{} = BSET {} BY {}", r(rn), r(rx), r(ry)),
        0xC4 => format!("{} = BCLR {} BY {}", r(rn), r(rx), r(ry)),
        0xC8 => format!("{} = BTGL {} BY {}", r(rn), r(rx), r(ry)),
        0xCC => format!("BTST {} BY {}", r(rx), r(ry)),
        0xD0 => format!("{} = FPACK {}", r(rn), dreg(rx, true)),
        0xD4 => format!("{} = FUNPACK {}", dreg(rn, true), r(rx)),
        _ => format!("SHIFT opcode 0x{opcode:02X}"),
    }
}

fn decode_multifunction(field: u32) -> String {
    let mf_op = (field >> 16) & 0x3F;

    // Multi-compute instruction field layout
    //   0xxxxx (not 00xx11) => MUL/ALU 32-bit Fixed
    //   011xxx             => MUL/ALU 32/40-bit Float
    //   00xx11             => MUL/ALU 64-bit Float
    //   10xxxx             => MUL Dual Add/Sub 32-bit Fixed
    //   11xxxx             => MUL Dual Add/Sub 32/40-bit Float

    if mf_op & 0x20 != 0 {
        decode_mf_mul_dual_addsub(field, mf_op & 0x10 != 0)
    } else if mf_op & 0x18 == 0x18 {
        decode_mf_mul_alu(field, mf_op, true)
    } else if mf_op & 0x03 == 0x03 {
        decode_mf_mul_alu_64(field, mf_op)
    } else {
        decode_mf_mul_alu(field, mf_op, false)
    }
}

fn mf_mul_mod(fp: bool) -> &'static str {
    if fp { "" } else { " (SSF)" }
}

fn decode_mf_mul_alu(field: u32, mf_op: u32, fp: bool) -> String {
    // MUL/ALU register field layout (16 bits)
    //   [15:12] = Rm/Fm   (multiply result)
    //   [11:8]  = Ra/Fa   (ALU result)
    //   [7:6]   = Rxm/Fxm (multiply X input: R0-3 / F0-3)
    //   [5:4]   = Rym/Fym (multiply Y input: R4-7 / F4-7)
    //   [3:2]   = Rxa/Fxa (ALU X input: R8-11 / F8-11)
    //   [1:0]   = Rya/Fya (ALU Y input: R12-15 / F12-15)
    let rm = (field >> 12) & 0xF;
    let ra = (field >> 8) & 0xF;
    let rxm = (field >> 6) & 0x3;
    let rym = (field >> 4) & 0x3;
    let rxa = (field >> 2) & 0x3;
    let rya = field & 0x3;

    let mul_dst = dreg(rm, fp);
    let mul_x = dreg(rxm, fp);
    let mul_y = dreg(rym + 4, fp);
    let alu_dst = dreg(ra, fp);
    let alu_x = dreg(rxa + 8, fp);
    let alu_y = dreg(rya + 12, fp);

    // mf_op[3:2] selects MUL variant, mf_op[1:0] selects ALU variant
    let mul_sel = (mf_op >> 2) & 0x3;
    let alu_sel = mf_op & 0x3;
    let modifier = mf_mul_mod(fp);

    let mul_part = match mul_sel {
        0b00 => format!("{mul_dst} = {mul_x} * {mul_y}{modifier}"),
        0b01 => format!("MRF = MRF + {mul_x} * {mul_y}{modifier}"),
        0b10 => format!("{mul_dst} = MRF + {mul_x} * {mul_y}{modifier}"),
        0b11 => format!("MRF = MRF - {mul_x} * {mul_y}{modifier}"),
        _ => unreachable!(),
    };

    let alu_part = match alu_sel {
        0b00 => format!("{alu_dst} = {alu_x} + {alu_y}"),
        0b01 => format!("{alu_dst} = {alu_x} - {alu_y}"),
        0b10 => format!("{alu_dst} = ({alu_x} + {alu_y})/2"),
        _ => return format!("MULTI opcode 0x{mf_op:02X} (0x{field:06X})"),
    };

    format!("{mul_part} , {alu_part}")
}

fn decode_mf_mul_alu_64(field: u32, mf_op: u32) -> String {
    // Multi-function floating-point 64-bit field layout
    //   [15:12] = Fm:n  (multiply result register pair)
    //   [11:8]  = Fa:b  (ALU result register pair)
    //   [7:6]   = Fx:y  (multiply source 1)
    //   [5:4]   = Fz:w  (multiply source 2)
    //   [3:2]   = Fp:q  (ALU source 1)
    //   [1:0]   = Fr:s  (ALU source 2)
    let fm_n = (field >> 12) & 0xF;
    let fa_b = (field >> 8) & 0xF;
    let fxy = (field >> 6) & 0x3;
    let fzw = (field >> 4) & 0x3;
    let fpq = (field >> 2) & 0x3;
    let frs = field & 0x3;

    // Source register encoding (64-bit float)
    let mul_x = match fxy {
        0b00 => "F1:0",
        0b10 => "F3:2",
        _ => return format!("MULTI opcode 0x{mf_op:02X} (0x{field:06X})"),
    };
    let mul_y = match fzw {
        0b00 => "F5:4",
        0b10 => "F7:6",
        _ => return format!("MULTI opcode 0x{mf_op:02X} (0x{field:06X})"),
    };
    let alu_x = match fpq {
        0b00 => "F9:8",
        0b10 => "F11:10",
        _ => return format!("MULTI opcode 0x{mf_op:02X} (0x{field:06X})"),
    };
    let alu_y = match frs {
        0b00 => "F13:12",
        0b10 => "F15:14",
        _ => return format!("MULTI opcode 0x{mf_op:02X} (0x{field:06X})"),
    };

    let fm_dst = dblreg(fm_n);
    let fa_dst = dblreg(fa_b);

    let alu_op = (mf_op >> 2) & 0x3;
    let alu_part = match alu_op {
        0b00 => format!("{fa_dst} = {alu_x} + {alu_y}"),
        0b01 => format!("{fa_dst} = {alu_x} - {alu_y}"),
        _ => return format!("MULTI opcode 0x{mf_op:02X} (0x{field:06X})"),
    };

    format!("{fm_dst} = {mul_x} * {mul_y} , {alu_part}")
}

fn decode_mf_mul_dual_addsub(field: u32, fp: bool) -> String {
    // MUL dual add/subtract register field layout (20 bits)
    //   [19:16] = Rs/Fs  (subtraction result)
    //   [15:12] = Rm/Fm  (multiply result)
    //   [11:8]  = Ra/Fa  (addition result)
    //   [7:6]   = Rxm/Fxm (multiply X input: R0-3 / F0-3)
    //   [5:4]   = Rym/Fym (multiply Y input: R4-7 / F4-7)
    //   [3:2]   = Rxa/Fxa (ALU X input: R8-11 / F8-11)
    //   [1:0]   = Rya/Fya (ALU Y input: R12-15 / F12-15)
    let rs = (field >> 16) & 0xF;
    let rm = (field >> 12) & 0xF;
    let ra = (field >> 8) & 0xF;
    let rxm = (field >> 6) & 0x3;
    let rym = (field >> 4) & 0x3;
    let rxa = (field >> 2) & 0x3;
    let rya = field & 0x3;

    let mul_dst = dreg(rm, fp);
    let mul_x = dreg(rxm, fp);
    let mul_y = dreg(rym + 4, fp);
    let add_dst = dreg(ra, fp);
    let sub_dst = dreg(rs, fp);
    let alu_x = dreg(rxa + 8, fp);
    let alu_y = dreg(rya + 12, fp);

    let modifier = mf_mul_mod(fp);

    format!(
        "{mul_dst} = {mul_x} * {mul_y}{modifier} , \
         {add_dst} = {alu_x} + {alu_y} , \
         {sub_dst} = {alu_x} - {alu_y}"
    )
}

fn dblreg(code: u32) -> String {
    let pair = code & 0xE;
    format!("F{}:{}", pair + 1, pair)
}

// ---------------------------------------------------------------------------
// Helper: append compute to output, with optional separator
// ---------------------------------------------------------------------------

fn append_compute(out: &mut String, compute_field: u32) {
    let comp = decode_compute(compute_field);
    if !comp.is_empty() {
        if !out.is_empty() {
            // After a condition prefix (ends with space), don't add separator
            if out.ends_with(' ') {
                // Condition prefix like "IF LT " — just append compute
            } else {
                out.push_str(" , ");
            }
        }
        out.push_str(&comp);
    }
}

// ---------------------------------------------------------------------------
// Top-level instruction decoder
// ---------------------------------------------------------------------------

pub fn decode_instruction(word: u64) -> String {
    let top3 = bits(word, 47, 45);
    match top3 {
        0b001 => decode_type1(word),
        0b000 => decode_group0(word),
        0b010 => decode_type3(word),
        0b011 => {
            if !bit(word, 44) {
                decode_type4(word)
            } else if !bit(word, 43) {
                decode_type5a(word)
            } else {
                decode_type5b(word)
            }
        }
        0b100 => {
            if !bit(word, 44) {
                decode_type6a(word)
            } else {
                decode_type16(word)
            }
        }
        0b101 => decode_type15(word),
        0b110 => decode_type10a(word),
        0b111 => decode_type10b(word),
        _ => format!("??? 0x{word:012X}"),
    }
}

// ---------------------------------------------------------------------------
// Group 0 (top3 = 000): sub-decode on bits 44-40
// ---------------------------------------------------------------------------

fn decode_group0(word: u64) -> String {
    let sub = bits(word, 44, 40);
    match sub {
        0b00000 => {
            if bit(word, 38) {
                "SYNC".into()
            } else if bit(word, 39) {
                "IDLE".into()
            } else {
                "NOP".into()
            }
        }
        0b00001 => decode_type2(word),
        0b00010 => decode_type6b(word),
        0b00100 => decode_type7(word),
        0b00110 => decode_type8a(word),
        0b00111 => decode_type8b(word),
        0b01000 => decode_type9a(word),
        0b01001 => decode_type9b(word),
        0b01010 => decode_type11a(word),
        0b01011 => decode_type11b(word),
        0b01100 => decode_type12a(word),
        0b01101 => decode_type12b(word),
        0b01110 => decode_type13(word),
        0b01111 => decode_type17(word),
        0b10100 => decode_type18(word),
        0b10101 => decode_type19_nw(word),
        0b10110 => decode_type19(word),
        0b10111 => decode_type20(word),
        0b11000 => decode_type25a(word),
        0b11011 => decode_type14d(word),
        _ if (sub >> 2) == 0b100 => decode_type14(word),
        _ => format!("??? 0x{word:012X}"),
    }
}

// ---------------------------------------------------------------------------
// Type 1: Compute, Dreg<->DM | Dreg<->PM
// ---------------------------------------------------------------------------

fn decode_type1(word: u64) -> String {
    let dmd = bit(word, 44); // DM direction: 0=read, 1=write
    let dmi = bits(word, 43, 41); // I0-I7
    let dmm = bits(word, 40, 38); // M0-M7
    let pmd = bit(word, 37); // PM direction: 0=read, 1=write
    let dm_dreg = bits(word, 36, 33);
    let pmi = bits(word, 32, 30); // I8-I15
    let pmm = bits(word, 29, 27); // M8-M15
    let pm_dreg = bits(word, 26, 23);
    let compute = bits(word, 22, 0);

    let mut out = String::new();
    append_compute(&mut out, compute);

    let dm_reg = dreg(dm_dreg, false);
    let dm_str = if dmd {
        format!("DM({}, {}) = {}", dag1_i(dmi), dag1_m(dmm), dm_reg)
    } else {
        format!("{} = DM({}, {})", dm_reg, dag1_i(dmi), dag1_m(dmm))
    };

    let pm_reg = dreg(pm_dreg, false);
    let pm_str = if pmd {
        format!("PM({}, {}) = {}", dag2_i(pmi), dag2_m(pmm), pm_reg)
    } else {
        format!("{} = PM({}, {})", pm_reg, dag2_i(pmi), dag2_m(pmm))
    };

    if !out.is_empty() {
        write!(out, ", {dm_str}, {pm_str}").unwrap();
    } else {
        write!(out, "{dm_str}, {pm_str}").unwrap();
    }
    out
}

// ---------------------------------------------------------------------------
// Type 2: IF COND Compute
// ---------------------------------------------------------------------------

fn decode_type2(word: u64) -> String {
    let cond = bits(word, 37, 33);
    let compute = bits(word, 22, 0);
    let comp = decode_compute(compute);
    if cond == 31 {
        // TRUE = unconditional
        if comp.is_empty() {
            "NOP".into()
        } else {
            comp
        }
    } else if comp.is_empty() {
        format!("IF {} NOP", cond_name(cond))
    } else {
        format!("IF {} {}", cond_name(cond), comp)
    }
}

// ---------------------------------------------------------------------------
// Type 3: Compute, Ureg<->DM|PM, register modify
// ---------------------------------------------------------------------------

fn decode_type3(word: u64) -> String {
    // VISA 48-bit Type 3: compute + ureg<->DM/PM with DAG register modify
    // Matches 32-bit Type 3b field layout in p1:
    //   bits[44:41] = i_addr (4-bit I register index, I0-I15)
    //   bit[40]     = 1 (fixed)
    //   bits[39:38] = m_offset (M register = m_offset + 4)
    //   bits[37:33] = cond (31 = TRUE)
    //   bit[31]     = direction (0=read, 1=write)
    //   bits[29:23] = ureg code (7 bits)
    //   bits[22:0]  = compute
    let bit44 = bit(word, 44);
    let i_addr = if bit44 {
        bits(word, 43, 41) // 3-bit I0-I7 when bit44=1
    } else {
        bits(word, 44, 41) // 4-bit I0-I15 when bit44=0
    };
    let m_offset = bits(word, 39, 38);
    let cond = bits(word, 37, 33);
    let d = bit(word, 31);
    let ureg_code = bits(word, 29, 23);
    let compute = bits(word, 22, 0);

    let m_reg = m_offset + 4;
    let ur = ureg_name(ureg_code);

    // Operand order: bit44=1 (DAG1) uses (I,M), bit44=0 (DAG2) uses (M,I)
    let xfer = if bit44 {
        if d {
            format!("DM (I{i_addr},M{m_reg})={ur}")
        } else {
            format!("{ur}=DM (I{i_addr},M{m_reg})")
        }
    } else {
        if d {
            format!("DM (M{m_reg},I{i_addr})={ur}")
        } else {
            format!("{ur}=DM (M{m_reg},I{i_addr})")
        }
    };

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    append_compute(&mut out, compute);
    if !out.is_empty() {
        write!(out, " , {xfer}").unwrap();
    } else {
        out.push_str(&xfer);
    }
    out
}

// ---------------------------------------------------------------------------
// Type 4: Compute, dreg<->DM|PM, data modify (immediate)
// ---------------------------------------------------------------------------

fn decode_type4(word: u64) -> String {
    // VISA 48-bit Type 4: compute + dreg<->DM|PM with immediate offset
    //   bits[44:41] = i_addr (4-bit I register index)
    //   bit[40]     = 0 (fixed, distinguishes from Type 3)
    //   bit[39]     = d (direction: 0=read, 1=write)
    //   bit[38]     = g (0=DM, 1=PM)
    //   bits[37:33] = cond (31 = TRUE)
    //   bits[32:27] = data6 (6-bit signed immediate offset)
    //   bits[26:23] = dm_dreg (4-bit dreg index)
    //   bits[22:0]  = compute
    let bit44 = bit(word, 44);
    let i_addr = if bit44 {
        bits(word, 43, 41)
    } else {
        bits(word, 44, 41)
    };
    let d = bit(word, 39);
    let g = bit(word, 38);
    let cond = bits(word, 37, 33);
    let data6 = bits(word, 32, 27);
    let dm_dreg = bits(word, 26, 23);
    let compute = bits(word, 22, 0);

    let imm = sign_extend(data6, 6);
    let mem = if g { "PM" } else { "DM" };
    let dr = dreg(dm_dreg, false);

    let imm_str = if imm < 0 {
        format!("-0x{:X}", -imm)
    } else {
        format!("0x{:X}", imm)
    };
    let xfer = if d {
        format!("{mem} ({imm_str},I{i_addr})={dr}")
    } else {
        format!("{dr}={mem} ({imm_str},I{i_addr})")
    };

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    append_compute(&mut out, compute);
    if !out.is_empty() {
        // If we only have a condition prefix (ends with space), just append xfer
        if out.ends_with(' ') {
            out.push_str(&xfer);
        } else {
            write!(out, " , {xfer}").unwrap();
        }
    } else {
        out.push_str(&xfer);
    }
    out
}

// ---------------------------------------------------------------------------
// Type 5a: Compute, ureg<->ureg
// ---------------------------------------------------------------------------

fn decode_type5a(word: u64) -> String {
    // VISA 48-bit Type 5a: compute + ureg<->ureg transfer
    //   bits[47:45] = 011, bit[44]=1, bit[43]=0 (type identifier)
    //   bits[42:38] = src_ureg[6:2] (upper 5 bits of source ureg code)
    //   bits[37:33] = cond (31 = TRUE)
    //   bit[32]     = src_ureg[1]
    //   bit[31]     = src_ureg[0]
    //   bits[30:27] = dst_ureg[6:4] (upper 4 bits of dest ureg code)
    //   bits[26:23] = dst_ureg[3:0] (lower 4 bits of dest ureg code)
    //   bits[22:0]  = compute
    let src_hi = bits(word, 42, 38);
    let cond = bits(word, 37, 33);
    let src_lo = bits(word, 32, 31);
    let src_ureg = (src_hi << 2) | src_lo;

    let dst_hi = bits(word, 30, 27);
    let dst_lo = bits(word, 26, 23);
    let dst_ureg = (dst_hi << 4) | dst_lo;

    let compute = bits(word, 22, 0);

    let xfer = format!("{}={}", ureg_name(dst_ureg), ureg_name(src_ureg));

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    append_compute(&mut out, compute);
    if !out.is_empty() {
        write!(out, " , {xfer}").unwrap();
    } else {
        out.push_str(&xfer);
    }
    out
}

// ---------------------------------------------------------------------------
// Type 5b: Compute, Xdreg<->Ydreg
// ---------------------------------------------------------------------------

fn decode_type5b(word: u64) -> String {
    // Type 5a (swap): compute + dreg <-> cdreg
    //   bits[47:43] = 01111 (type identifier)
    //   bits[41:38] = cdreg[3:0] (complementary data register S0-S15)
    //   bits[37:33] = cond[4:0] (31 = TRUE)
    //   bits[26:23] = dreg[3:0]  (data register R0-R15)
    //   bits[22:0]  = compute
    let cdreg_idx = bits(word, 41, 38);
    let cond = bits(word, 37, 33);
    let dreg_idx = bits(word, 26, 23);
    let compute = bits(word, 22, 0);

    let swap = format!("R{dreg_idx}<->S{cdreg_idx}");
    let comp = decode_compute(compute);

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    if !comp.is_empty() {
        out.push_str(&comp);
        write!(out, " , {swap}").unwrap();
    } else {
        out.push_str(&swap);
    }
    out
}

// ---------------------------------------------------------------------------
// Type 6a: Immediate Shift, dreg<->DM|PM
// ---------------------------------------------------------------------------

fn decode_type6a(word: u64) -> String {
    // bits 47-45 = 100, bit 44 = 0
    // Immediate shift (FEXT/FDEP) + DM/PM memory access
    //
    // Memory fields (p1):
    //   bits[44:41] = i-register index
    //   bits[40:38] = m-register index
    //   bits[37:33] = condition (31=TRUE)
    // Memory fields (p2):
    //   bit[31]     = direction (0=read, 1=write)
    //   bits[30:27] = length field (len = field * 4)
    //   bits[26:23] = dreg
    // Shift fields:
    //   bits[23:16] = shift opcode (shift_type at bits[7:4], sub_op at bits[1:0])
    //   bits[15:8]  = shift position
    //   bits[7:4]   = Rn (shift destination)
    //   bits[3:0]   = Rx (shift source)
    let i_field = bits(word, 44, 41);
    let m_field = bits(word, 40, 38);
    let cond = bits(word, 37, 33);
    let d = bit(word, 31);
    let len_field = bits(word, 30, 27);
    let dreg_val = bits(word, 26, 23);
    let shift_op = bits(word, 23, 16) as u8;
    let shift_pos = bits(word, 15, 8);
    let rn = bits(word, 7, 4);
    let rx = bits(word, 3, 0);

    let shift_type = (shift_op >> 4) & 0x7;
    let shift_len = len_field * 4;

    let shift_str = match shift_type {
        1 => format!("R{rn}=FEXT R{rx} BY 0x{shift_pos:X}:0x{shift_len:X}"),
        _ => format!("R{rn}=SHIFT(0x{shift_op:02X}) R{rx} BY 0x{shift_pos:X}:0x{shift_len:X}"),
    };

    let mem = "DM";
    let mem_str = if d {
        format!("{mem} (I{i_field},M{m_field})=R{dreg_val}")
    } else {
        format!("R{dreg_val}={mem} (I{i_field},M{m_field})")
    };

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    out.push_str(&shift_str);
    write!(out, " , {mem_str}").unwrap();
    out
}

// ---------------------------------------------------------------------------
// Type 6b: Immediate Shift (alt encoding)
// ---------------------------------------------------------------------------

fn decode_type6b(word: u64) -> String {
    let rn = bits(word, 7, 4);
    let rx = bits(word, 3, 0);
    let imm8 = bits(word, 15, 8) as u8;
    let op_field = bits(word, 23, 16);
    let shift_type = (op_field >> 4) & 0xF;
    let sub_op = op_field & 3;

    match shift_type {
        0 => {
            // LSHIFT/ASHIFT with immediate
            let imm = imm8 as i8;
            if imm < 0 {
                format!("R{rn}=LSHIFT R{rx} BY -0x{:X}", -(imm as i32))
            } else {
                format!("R{rn}=LSHIFT R{rx} BY 0x{imm:X}")
            }
        }
        1 => {
            // FEXT/FDEP with immediate bit position
            // Position is in bits[13:8] (low 6 bits of imm8)
            // Length is split across bits[31:27] (high 5) and bits[15:14] (low 2)
            let pos = imm8 & 0x3F;
            let len_hi = bits(word, 31, 27);
            let len_lo = (imm8 >> 6) & 3;
            let len = (len_hi << 2) | (len_lo as u32);
            // sub_op encoding:
            //   0 = FEXT (plain)
            //   1 = FDEP with OR prefix
            //   2 = FEXT with OR prefix
            //   3 = FDEP (plain)
            match sub_op {
                0 => format!("R{rn}=FEXT R{rx} BY 0x{pos:X}:0x{len:X}"),
                1 => format!("R{rn}=R{rn} OR FDEP R{rx} BY 0x{pos:X}:0x{len:X}"),
                2 => format!("R{rn}=R{rn} OR FEXT R{rx} BY 0x{pos:X}:0x{len:X}"),
                3 => format!("R{rn}=FDEP R{rx} BY 0x{pos:X}:0x{len:X}"),
                _ => unreachable!(),
            }
        }
        3 => {
            // BIT ops: BSET/BCLR/BTGL/BTST
            match sub_op {
                0 => format!("R{rn}=BSET R{rx} BY 0x{imm8:X}"),
                1 => format!("R{rn}=BCLR R{rx} BY 0x{imm8:X}"),
                2 => format!("R{rn}=BTGL R{rx} BY 0x{imm8:X}"),
                3 => format!("BTST R{rx} BY 0x{imm8:X}"),
                _ => unreachable!(),
            }
        }
        _ => {
            let imm = imm8 as i8;
            if imm < 0 {
                format!("R{rn}=ASHIFT R{rx} BY -0x{:X}", -(imm as i32))
            } else {
                format!("R{rn}=ASHIFT R{rx} BY 0x{imm:X}")
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Type 7: Compute, Modify
// ---------------------------------------------------------------------------

fn decode_type7(word: u64) -> String {
    let nw_flag = bit(word, 39);
    if nw_flag {
        // Enhanced MODIFY with NW suffix: bit39=1
        // bit38 = g (DAG select), bits[37:33] = cond
        // {bit32, p2[15:14]} = i_src, p2[13:11] = m_field, p2[10:8] = dest_xor
        let g = bit(word, 38);
        let cond = bits(word, 37, 33);
        let i_src = (bits(word, 32, 32) << 2) | bits(word, 31, 30);
        let m_field = bits(word, 29, 27);
        let dest_xor = bits(word, 26, 24);
        let compute = bits(word, 22, 0);
        let i_dest = i_src ^ dest_xor;
        let base = if g { 8u32 } else { 0 };
        let src = i_src + base;
        let dst = i_dest + base;
        let m = m_field + base;

        let modify = format!("I{dst}=MODIFY (I{src},M{m})(NW)");
        let mut out = String::new();
        if cond != 31 {
            write!(out, "IF {} ", cond_name(cond)).unwrap();
        }
        append_compute(&mut out, compute);
        if !out.is_empty() {
            write!(out, " , {modify}").unwrap();
        } else {
            out.push_str(&modify);
        }
        out
    } else {
        // Standard Type 7: bit39=0
        // bit38 = g, bits[37:35] = i_field, bits[34:32] = m_field
        // bits[27:23] = cond (5 bits at different position than enhanced)
        let g = bit(word, 38);
        let i_field = bits(word, 37, 35);
        let m_field = bits(word, 34, 32);
        let cond = bits(word, 27, 23);
        let compute = bits(word, 22, 0);

        let i_reg = if g {
            format!("I{}", (i_field & 7) + 8)
        } else {
            format!("I{}", i_field & 7)
        };
        let m_reg = if g {
            format!("M{}", (m_field & 7) + 8)
        } else {
            format!("M{}", m_field & 7)
        };

        let modify = format!("MODIFY({i_reg}, {m_reg})");

        let mut out = String::new();
        if cond != 31 {
            write!(out, "IF {} ", cond_name(cond)).unwrap();
        }
        append_compute(&mut out, compute);
        if !out.is_empty() {
            write!(out, " , {modify}").unwrap();
        } else {
            out.push_str(&modify);
        }
        out
    }
}

// ---------------------------------------------------------------------------
// Type 8a: Direct Jump|Call (absolute)
// ---------------------------------------------------------------------------

fn decode_type8a(word: u64) -> String {
    let j = bit(word, 39); // 0=JUMP, 1=CALL
    let cond = bits(word, 37, 33);
    let db = bit(word, 26);
    let addr24 = bits(word, 23, 0);

    let op = if j { "CALL" } else { "JUMP" };
    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    let _ = write!(out, "{op} 0x{addr24:06X}");
    if db {
        out.push_str(" (DB)");
    }
    out
}

// ---------------------------------------------------------------------------
// Type 8b: Direct Jump|Call (PC-relative)
// ---------------------------------------------------------------------------

fn decode_type8b(word: u64) -> String {
    let j = bit(word, 39); // 0=JUMP, 1=CALL
    let la = bit(word, 38); // loop abort flag
    let cond = bits(word, 37, 33);
    let db = bit(word, 26);
    let offset24 = bits(word, 23, 0);
    let rel = sign_extend(offset24, 24);

    let op = if j { "CALL" } else { "JUMP" };
    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    if rel < 0 {
        let _ = write!(out, "{op} (PC,-0x{:X})", -rel);
    } else {
        let _ = write!(out, "{op} (PC,0x{rel:X})");
    }
    if db {
        out.push_str(" (DB)");
    }
    if la {
        out.push_str(" (LA)");
    }
    out
}

// ---------------------------------------------------------------------------
// Type 9a: Indirect Jump|Call, Compute (register)
// ---------------------------------------------------------------------------

fn decode_type9a(word: u64) -> String {
    let j = bit(word, 39); // 0=JUMP, 1=CALL
    let cond = bits(word, 37, 33);
    let db = bit(word, 32);
    let pmm = bits(word, 29, 27);
    let pmi = bits(word, 26, 24);
    let compute = bits(word, 22, 0);

    let op = if j { "CALL" } else { "JUMP" };
    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    let _ = write!(out, "{op} ({},{})", dag2_m(pmm), dag2_i(pmi));
    if db {
        out.push_str(" (DB)");
    }
    append_compute(&mut out, compute);
    out
}

// ---------------------------------------------------------------------------
// Type 9b: Indirect Jump|Call, Compute (PC-relative)
// ---------------------------------------------------------------------------

fn decode_type9b(word: u64) -> String {
    let j = bit(word, 39); // 0=JUMP, 1=CALL
    let cond = bits(word, 37, 33);
    // 6-bit signed PC-relative offset at bits[32:27]
    let raw_off = bits(word, 32, 27);
    let rel = sign_extend(raw_off, 6);
    let db = bit(word, 26);
    let else_flag = bit(word, 25);
    let compute = bits(word, 22, 0);

    let op = if j { "CALL" } else { "JUMP" };
    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    if rel < 0 {
        let _ = write!(out, "{op} (PC,-0x{:X})", -rel);
    } else {
        let _ = write!(out, "{op} (PC,0x{rel:X})");
    }
    if db {
        out.push_str(" (DB)");
    }
    // Double space before comma in Type 9b jump+compute
    if else_flag {
        let comp = decode_compute(compute);
        if !comp.is_empty() {
            write!(out, "  , ELSE {comp}").unwrap();
        }
    } else {
        let comp = decode_compute(compute);
        if !comp.is_empty() {
            write!(out, "  , {comp}").unwrap();
        }
    }
    out
}

// ---------------------------------------------------------------------------
// Type 10a: Indirect Jump|Compute, dreg<->DM (register)
// ---------------------------------------------------------------------------

fn decode_type10a(word: u64) -> String {
    // Type 10a: IF cond JUMP (Md,Ic), ELSE [compute,] DM-access
    //   bits[47:45] = 110 (type, indirect jump via register)
    //   bit[44]     = d (DM direction: 0=read, 1=write)
    //   bits[43:41] = dmi[2:0] (DAG1 I register for DM)
    //   bits[40:38] = dmm[2:0] (DAG1 M register for DM)
    //   bits[37:33] = cond[4:0]
    //   bits[32:30] = pmi[2:0] (DAG2 I register for jump)
    //   bits[29:27] = pmm[2:0] (DAG2 M register for jump)
    //   bits[26:23] = dreg[3:0]
    //   bits[22:0]  = compute
    let d = bit(word, 44);
    let dmi = bits(word, 43, 41);
    let dmm = bits(word, 40, 38);
    let cond = bits(word, 37, 33);
    let pmi = bits(word, 32, 30);
    let pmm = bits(word, 29, 27);
    let dreg_idx = bits(word, 26, 23);
    let compute = bits(word, 22, 0);

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    let _ = write!(out, "JUMP ({},{})", dag2_m(pmm), dag2_i(pmi));

    let comp = decode_compute(compute);
    let dr = dreg(dreg_idx, false);
    let dm_str = if d {
        format!("DM({},{}) = {}", dag1_i(dmi), dag1_m(dmm), dr)
    } else {
        format!("{} = DM({},{})", dr, dag1_i(dmi), dag1_m(dmm))
    };

    if comp.is_empty() {
        let _ = write!(out, " , ELSE {dm_str}");
    } else {
        let _ = write!(out, " , ELSE {comp} , {dm_str}");
    }
    out
}

// ---------------------------------------------------------------------------
// Type 10b: Indirect Jump|Compute, dreg<->DM (PC-relative)
// ---------------------------------------------------------------------------

fn decode_type10b(word: u64) -> String {
    // Type 10b: IF cond JUMP (PC,offset), ELSE [compute,] DM-access
    //   bits[47:45] = 111 (type, PC-relative jump)
    //   bit[44]     = d (DM direction: 0=read, 1=write)
    //   bits[43:41] = dmi[2:0] (DAG1 I register for DM)
    //   bits[40:38] = dmm[2:0] (DAG1 M register for DM)
    //   bits[37:33] = cond[4:0]
    //   bits[32:27] = offset[5:0] (6-bit signed PC-relative)
    //   bits[26:23] = dreg[3:0]
    //   bits[22:0]  = compute
    let d = bit(word, 44);
    let dmi = bits(word, 43, 41);
    let dmm = bits(word, 40, 38);
    let cond = bits(word, 37, 33);
    let offset_raw = bits(word, 32, 27);
    let rel = sign_extend(offset_raw, 6);
    let dreg_idx = bits(word, 26, 23);
    let compute = bits(word, 22, 0);

    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    if rel < 0 {
        let _ = write!(out, "JUMP (PC,-0x{:X})", -rel);
    } else {
        let _ = write!(out, "JUMP (PC,0x{rel:X})");
    }

    let comp = decode_compute(compute);
    let dr = dreg(dreg_idx, false);
    let dm_str = if d {
        format!("DM({},{}) = {}", dag1_i(dmi), dag1_m(dmm), dr)
    } else {
        format!("{} = DM({},{})", dr, dag1_i(dmi), dag1_m(dmm))
    };

    if comp.is_empty() {
        let _ = write!(out, " , ELSE {dm_str}");
    } else {
        let _ = write!(out, " , ELSE {comp} , {dm_str}");
    }
    out
}

// ---------------------------------------------------------------------------
// Type 11a: RTS|RTI, Compute (with J bit)
// ---------------------------------------------------------------------------

fn decode_type11a(word: u64) -> String {
    let x = bit(word, 39); // 0=RTS, 1=RTI
    let cond = bits(word, 37, 33);
    let db = bit(word, 26);
    let lr = bit(word, 25);
    let compute = bits(word, 22, 0);

    let op = if x { "RTI" } else { "RTS" };
    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    out.push_str(op);
    match (db, lr) {
        (true, true) => out.push_str(" (DB,LR)"),
        (true, false) => out.push_str(" (DB)"),
        (false, true) => out.push_str(" (LR)"),
        (false, false) => {}
    }
    append_compute(&mut out, compute);
    out
}

// ---------------------------------------------------------------------------
// Type 11b: RTS|RTI, Compute (alt)
// ---------------------------------------------------------------------------

fn decode_type11b(word: u64) -> String {
    let x = bit(word, 39);
    let cond = bits(word, 37, 33);
    let db = bit(word, 26);
    let lr = bit(word, 25);
    let compute = bits(word, 22, 0);

    let op = if x { "RTI" } else { "RTS" };
    let mut out = String::new();
    if cond != 31 {
        write!(out, "IF {} ", cond_name(cond)).unwrap();
    }
    out.push_str(op);
    match (db, lr) {
        (true, true) => out.push_str(" (DB,LR)"),
        (true, false) => out.push_str(" (DB)"),
        (false, true) => out.push_str(" (LR)"),
        (false, false) => {}
    }
    append_compute(&mut out, compute);
    out
}

// ---------------------------------------------------------------------------
// Type 12a: LCNTR = imm16, DO addr UNTIL LCE
// ---------------------------------------------------------------------------

fn decode_type12a(word: u64) -> String {
    let imm16 = bits(word, 39, 24);
    let addr24 = bits(word, 23, 0);
    format!("LCNTR = 0x{imm16:X} , DO (PC,0x{addr24:X})UNTIL LCE")
}

// ---------------------------------------------------------------------------
// Type 12b: LCNTR = ureg, DO addr UNTIL LCE
// ---------------------------------------------------------------------------

fn decode_type12b(word: u64) -> String {
    let ureg_field = bits(word, 39, 32);
    let addr24 = bits(word, 23, 0);
    format!("LCNTR = {}, DO 0x{addr24:06X} UNTIL LCE", ureg_name(ureg_field))
}

// ---------------------------------------------------------------------------
// Type 13: DO addr UNTIL termination
// ---------------------------------------------------------------------------

fn decode_type13(word: u64) -> String {
    let term = bits(word, 37, 33);
    let addr24 = bits(word, 23, 0);
    format!("DO 0x{addr24:06X} UNTIL {}", term_name(term))
}

// ---------------------------------------------------------------------------
// Type 14: Ureg<->DM|PM (direct addressing, 32-bit addr)
// ---------------------------------------------------------------------------

fn decode_type14(word: u64) -> String {
    let g = bit(word, 41);   // 0=DM, 1=PM
    let d = bit(word, 40);   // 0=read, 1=write
    let ureg_field = bits(word, 39, 32);
    let addr32 = bits(word, 31, 0);

    let mem = if g { "PM" } else { "DM" };
    let ur = ureg_name(ureg_field);

    if d {
        format!("{mem} (0x{addr32:X})={ur}")
    } else {
        format!("{ur}={mem} (0x{addr32:X})")
    }
}

// ---------------------------------------------------------------------------
// Type 15: Ureg<->DM|PM (indirect, 32-bit data offset)
// ---------------------------------------------------------------------------

fn decode_type15(word: u64) -> String {
    let g = bit(word, 44);           // 0=DM, 1=PM
    let i_field = bits(word, 43, 41); // 3-bit I register index
    let d = bit(word, 40);           // 0=read, 1=write
    let lw = bit(word, 39);          // long-word access flag
    let ureg_code = bits(word, 38, 32); // 7-bit VISA ureg code
    let offset32 = bits(word, 31, 0);

    let mem = if g { "PM" } else { "DM" };
    let i_idx = if g { (i_field & 7) + 8 } else { i_field & 7 };
    let ur = visa_ureg_name(ureg_code);
    let off = offset32 as i32;

    let off_str = if off < 0 {
        format!("-0x{:X}", -(off as i64))
    } else {
        format!("0x{off:X}")
    };

    let suffix = if lw { "(LW)" } else { "" };

    if d {
        if suffix.is_empty() {
            format!("{mem} ({off_str},I{i_idx})={ur}")
        } else {
            format!("{mem} ({off_str},I{i_idx})={ur} {suffix}")
        }
    } else {
        if suffix.is_empty() {
            format!("{ur}={mem} ({off_str},I{i_idx})")
        } else {
            format!("{ur}={mem} ({off_str},I{i_idx}){suffix}")
        }
    }
}

// ---------------------------------------------------------------------------
// Type 16: DM|PM(Ia,Mb) = imm32
// ---------------------------------------------------------------------------

fn decode_type16(word: u64) -> String {
    // Type 16a: DM|PM(Ii,Mm)=data32
    // For 0x9FC0 (Type 16a), i=7, m=7, DM
    // bits[43:41] = i[2:0], bits[40:38] = m[2:0], g encoded in upper bits
    // 0x9FC0 has bits[43:38] = 111111 → i=7, m=7
    let i_field = bits(word, 43, 41);
    let m_field = bits(word, 40, 38);
    let imm32 = bits(word, 31, 0);

    // g bit: bit 37 or determined from context. For now assume DM (DAG1).
    // TODO: add PM support when needed.
    let mem = "DM";
    format!("{mem} (I{i_field},M{m_field})=0x{imm32:X}")
}

// ---------------------------------------------------------------------------
// Type 17: ureg = imm32
// ---------------------------------------------------------------------------

fn decode_type17(word: u64) -> String {
    let ureg_field = bits(word, 39, 32);
    let imm32 = bits(word, 31, 0);
    let signed = imm32 as i32;
    if signed < 0 {
        format!("{} = -0x{:X}", ureg_name(ureg_field), -(signed as i64))
    } else {
        format!("{} = 0x{imm32:X}", ureg_name(ureg_field))
    }
}

// ---------------------------------------------------------------------------
// Type 18: BIT SET|CLR|TGL|TST|XOR sreg data32
// ---------------------------------------------------------------------------

fn decode_type18(word: u64) -> String {
    // op = (bit39 << 1) | bit37, sreg from remaining bits
    let op = ((bits(word, 39, 39) << 1) | bits(word, 37, 37)) as u8;
    let sr5 = bits(word, 36, 32) as u8;

    let opname = match op {
        0 => "BIT SET",
        1 => "BIT CLR",
        2 => "BIT TST",
        3 => "BIT XOR",
        _ => "BIT ???",
    };

    // sreg mapping (byte4 & 0x5F):
    // 0x02 → MODE1, 0x03 → MMASK, 0x08 → STKYX
    // 0x0B → IMASK, 0x0D → MODE1STK
    let sr = match sr5 {
        0x02 => "MODE1",
        0x03 => "MMASK",
        0x04 => "MODE2",
        0x05 => "FLAGS",
        0x06 => "ASTATx",
        0x07 => "ASTATy",
        0x08 => "STKYX",
        0x09 => "STKYY",
        0x0A => "IRPTL",
        0x0B => "IMASK",
        0x0C => "IMASKP",
        0x0D => "MODE1STK",
        _ => "SREG(?)",
    };

    let data32 = bits(word, 31, 0);
    let signed = data32 as i32;
    if signed < 0 {
        format!("{opname} {sr} -0x{:X}", -(signed as i64))
    } else {
        format!("{opname} {sr} 0x{data32:X}")
    }
}

// ---------------------------------------------------------------------------
// Type 19: MODIFY|BITREV (I, data32)
// ---------------------------------------------------------------------------

fn decode_type19(word: u64) -> String {
    let g = bit(word, 39);
    let brev = bit(word, 38);
    let i_src = bits(word, 34, 32);
    let i_dest_off = bits(word, 37, 35);
    let data32 = bits(word, 31, 0);

    let base = if g { 8u32 } else { 0 };
    let src_reg = i_src + base;
    let dest_reg = (i_src ^ i_dest_off) + base;
    let signed_data = data32 as i32;

    let data_str = if signed_data < 0 {
        format!("-0x{:X}", -signed_data)
    } else {
        format!("0x{signed_data:X}")
    };

    if brev {
        format!("I{dest_reg}=BITREV (I{src_reg},{data_str})")
    } else {
        format!("I{dest_reg}=MODIFY (I{src_reg},{data_str})")
    }
}

// ---------------------------------------------------------------------------
// Type 20: Push|Pop stacks, Flush cache
// ---------------------------------------------------------------------------

fn decode_type20(word: u64) -> String {
    let sub = bits(word, 39, 33);
    // Composite operations encode multiple push/pops in one instruction.
    // Bit mapping (iterate high-to-low for correct output order):
    //   bit6 (0x40) = PUSH LOOP
    //   bit5 (0x20) = POP LOOP
    //   bit4 (0x10) = PUSH STS
    //   bit3 (0x08) = POP STS
    //   bit2 (0x04) = PUSH PCSTK
    //   bit1 (0x02) = POP PCSTK
    let mut ops = Vec::new();
    if sub & 0x40 != 0 { ops.push("PUSH LOOP"); }
    if sub & 0x20 != 0 { ops.push("POP LOOP"); }
    if sub & 0x10 != 0 { ops.push("PUSH STS"); }
    if sub & 0x08 != 0 { ops.push("POP STS"); }
    if sub & 0x04 != 0 { ops.push("PUSH PCSTK"); }
    if sub & 0x02 != 0 { ops.push("POP PCSTK"); }

    if ops.is_empty() {
        return format!("STACK OP 0x{sub:02X} ; 0x{word:012X}");
    }

    // Double space before comma for LOOP operations
    let mut result = String::new();
    for (idx, op) in ops.iter().enumerate() {
        if idx > 0 {
            result.push(',');
        }
        result.push_str(op);
        if idx + 1 < ops.len() {
            if op.contains("LOOP") {
                result.push_str("  ");
            } else {
                result.push(' ');
            }
        }
    }
    result
}

// ---------------------------------------------------------------------------
// Type 25a: CJUMP (computed jump)
// ---------------------------------------------------------------------------

fn decode_type25a(word: u64) -> String {
    let db = bit(word, 34);
    let addr24 = bits(word, 23, 0);
    let mut out = format!("CJUMP 0x{addr24:06X}");
    if db {
        out.push_str(" (DB)");
    }
    out
}

// ---------------------------------------------------------------------------
// Type 19 with NW/SW (sub=10101): enhanced MODIFY
// i_dest = MODIFY(i_src, data32)(NW|SW)
// ---------------------------------------------------------------------------

fn decode_type19_nw(word: u64) -> String {
    // Enhanced MODIFY with NW/SW suffix
    // bit 39 = NW flag (1=NW, 0=SW)
    // bit 38 = g (0=DAG1 I0-I7, 1=DAG2 I8-I15)
    // bits[37:35] = dest_xor (dest = src XOR dest_xor)
    // bits[34:32] = src index (within DAG)
    // bits[31:0] = data32 (signed offset)
    let nw = bit(word, 39);
    let g = bit(word, 38);
    let dest_xor = bits(word, 37, 35);
    let i_src = bits(word, 34, 32);
    let i_dest = i_src ^ dest_xor;
    let data32 = bits(word, 31, 0);
    let signed_data = data32 as i32;

    let base = if g { 8u32 } else { 0 };
    let src_reg = i_src + base;
    let dest_reg = i_dest + base;
    let suffix = if nw { "(NW)" } else { "(SW)" };

    let data_str = if signed_data < 0 {
        format!("-0x{:X}", -signed_data)
    } else {
        format!("0x{signed_data:X}")
    };

    format!("I{dest_reg}=MODIFY (I{src_reg},{data_str}){suffix}")
}

// ---------------------------------------------------------------------------
// Type 14d: DM/PM with byte-width access (sub=11011)
// ---------------------------------------------------------------------------

fn decode_type14d(word: u64) -> String {
    // Type 14d (sub=11011): DM/PM with byte-width access
    // bit 42 = g (0=DM, 1=PM), bit 41 = d (0=read, 1=write)
    let g = bit(word, 42);
    let d = bit(word, 41);
    let ureg_field = bits(word, 39, 32);
    let addr32 = bits(word, 31, 0);

    let mem = if g { "PM" } else { "DM" };
    let ur = ureg_name(ureg_field);

    if d {
        format!("{mem} (0x{addr32:X})={ur} (BW)")
    } else {
        format!("{ur}={mem} (0x{addr32:X}) (BW)")
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    fn make_word(word: u64) -> [u8; 6] {
        [
            ((word >> 40) & 0xFF) as u8,
            ((word >> 32) & 0xFF) as u8,
            ((word >> 24) & 0xFF) as u8,
            ((word >> 16) & 0xFF) as u8,
            ((word >> 8) & 0xFF) as u8,
            (word & 0xFF) as u8,
        ]
    }

    fn dis(word: u64) -> String {
        decode_instruction(word)
    }

    fn dis_be(word: u64) -> Vec<DisasmLine> {
        let bytes = make_word(word);
        disassemble(&bytes, 0x1000, false)
    }

    #[test]
    fn test_nop() {
        assert_eq!(dis(0x000000000000), "NOP");
    }

    #[test]
    fn test_idle() {
        // bit 39 set for IDLE
        let word: u64 = 1 << 39;
        assert_eq!(dis(word), "IDLE");
    }

    #[test]
    fn test_sync() {
        // bit 38 set for SYNC
        let word: u64 = 1 << 38;
        assert_eq!(dis(word), "SYNC");
    }

    #[test]
    fn test_alu_add_type2() {
        // Type 2: bits 47-40 = 000_00001 = 0x01 at bits 47-40
        // COND=31 (TRUE) at bits 37-33
        let compute: u64 = 0x001012;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R0 = R1 + R2");
    }

    #[test]
    fn test_alu_sub_type2() {
        let compute: u64 = (0x02u64 << 12) | (3 << 8) | (4 << 4) | 5;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R3 = R4 - R5");
    }

    #[test]
    fn test_alu_and_type2() {
        let compute: u64 = (0x40u64 << 12) | (6 << 8) | (7 << 4) | 8;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R6 = R7 AND R8");
    }

    #[test]
    fn test_alu_or_type2() {
        let compute: u64 = (0x41u64 << 12) | (1 << 4) | 2;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R0 = R1 OR R2");
    }

    #[test]
    fn test_alu_pass_type2() {
        let compute: u64 = (0x21u64 << 12) | (5 << 8) | (3 << 4);
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R5 = PASS R3");
    }

    #[test]
    fn test_alu_abs_type2() {
        let compute: u64 = (0x30u64 << 12) | (2 << 8) | (7 << 4);
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R2 = ABS R7");
    }

    #[test]
    fn test_conditional_type2() {
        // IF EQ R0 = R1 + R2
        let compute: u64 = 0x001012;
        let word: u64 = (0x01u64 << 40) | (0u64 << 33) | compute; // cond=0 = EQ
        assert_eq!(dis(word), "IF EQ R0 = R1 + R2");
    }

    #[test]
    fn test_float_add_type2() {
        // Fn = Fx + Fy, opcode=0x81, CU=00(ALU)
        let compute: u64 = (0x81u64 << 12) | (1 << 4) | 2;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "F0 = F1 + F2");
    }

    #[test]
    fn test_float_sub_type2() {
        let compute: u64 = (0x82u64 << 12) | (3 << 8) | (4 << 4) | 5;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "F3 = F4 - F5");
    }

    #[test]
    fn test_mul_ssf_type2() {
        // MRF = Rx * Ry (SSF), CU=01, opcode=0x40
        let compute: u64 = (1u64 << 20) | (0x40u64 << 12) | (2 << 4) | 3;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "MRF = R2 * R3 (SSF)");
    }

    #[test]
    fn test_mul_to_reg_type2() {
        // Rn = Rx * Ry (SSF), CU=01, opcode=0x44
        let compute: u64 = (1u64 << 20) | (0x44u64 << 12) | (1 << 8) | (5 << 4) | 6;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R1 = R5 * R6 (SSF)");
    }

    #[test]
    fn test_float_mul_type2() {
        // Fn = Fx * Fy, CU=01, opcode=0x80
        let compute: u64 = (1u64 << 20) | (0x80u64 << 12) | (1 << 4) | 2;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "F0 = F1 * F2");
    }

    #[test]
    fn test_shift_lshift_type2() {
        // Rn = LSHIFT Rx BY Ry, CU=10, opcode=0x00
        let compute: u64 = (2u64 << 20) | (4 << 8) | (5 << 4) | 6;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R4 = LSHIFT R5 BY R6");
    }

    #[test]
    fn test_shift_ashift_type2() {
        let compute: u64 = (2u64 << 20) | (0x08u64 << 12) | (1 << 4) | 2;
        let word: u64 = (0x01u64 << 40) | (31u64 << 33) | compute;
        assert_eq!(dis(word), "R0 = ASHIFT R1 BY R2");
    }

    #[test]
    fn test_jump_absolute() {
        // Type 8a: 000_00110 at bits 47-40
        // J=0 (JUMP), COND=31 (TRUE)
        // addr = 0x001234
        let word: u64 = (0x06u64 << 40) | (31u64 << 33) | 0x001234; // J=0 (JUMP)
        assert_eq!(dis(word), "JUMP 0x001234");
    }

    #[test]
    fn test_call_absolute() {
        // J=1 (CALL)
        let word: u64 = (0x06u64 << 40) | (1u64 << 39) | (31u64 << 33) | 0x005678;
        assert_eq!(dis(word), "CALL 0x005678");
    }

    #[test]
    fn test_conditional_jump() {
        // IF NE JUMP
        let word: u64 = (0x06u64 << 40) | (16u64 << 33) | 0x000100; // J=0 (JUMP)
        assert_eq!(dis(word), "IF NE JUMP 0x000100");
    }

    #[test]
    fn test_jump_pc_relative() {
        // Type 8b: 000_00111 at bits 47-40
        // JUMP (PC, offset), offset = +10 = 0x00000A
        let word: u64 = (0x07u64 << 40) | (31u64 << 33) | 0x00000A; // J=0
        assert_eq!(dis(word), "JUMP (PC,0xA)");
    }

    #[test]
    fn test_jump_pc_relative_negative() {
        // offset = -5 in 24-bit sign extended
        let neg5 = ((-5i32) as u32) & 0xFFFFFF;
        let word: u64 = (0x07u64 << 40) | (31u64 << 33) | (neg5 as u64); // J=0
        assert_eq!(dis(word), "JUMP (PC,-0x5)");
    }

    #[test]
    fn test_rts() {
        // Type 11a: 000_01010, J=0 (RTS), COND=31
        let word: u64 = (0x0Au64 << 40) | (31u64 << 33); // J=0 (RTS)
        assert_eq!(dis(word), "RTS");
    }

    #[test]
    fn test_rti() {
        // Type 11a: 000_01010, J=1 (RTI), COND=31
        let word: u64 = (0x0Au64 << 40) | (1u64 << 39) | (31u64 << 33);
        assert_eq!(dis(word), "RTI");
    }

    #[test]
    fn test_conditional_rts() {
        // IF EQ RTS — cond=0 (EQ) at bits[37:33]
        let word: u64 = (0x0Au64 << 40) | (0u64 << 33); // J=0, COND=0 (EQ)
        assert_eq!(dis(word), "IF EQ RTS");
    }

    #[test]
    fn test_lcntr_imm_do() {
        // Type 12a: 000_01100
        // LCNTR = 100, DO 0x002000 UNTIL LCE
        let word: u64 = (0x0Cu64 << 40) | (100u64 << 24) | 0x002000;
        assert_eq!(dis(word), "LCNTR = 0x64 , DO (PC,0x2000)UNTIL LCE");
    }

    #[test]
    fn test_lcntr_ureg_do() {
        // Type 12b: 000_01101
        // LCNTR = R5 (ureg code 0x05), DO 0x003000 UNTIL LCE
        let word: u64 = (0x0Du64 << 40) | (0x05u64 << 32) | 0x003000;
        assert_eq!(dis(word), "LCNTR = R5, DO 0x003000 UNTIL LCE");
    }

    #[test]
    fn test_do_until_forever() {
        // Type 13: 000_01110
        // DO 0x001000 UNTIL FOREVER (term=31)
        let word: u64 = (0x0Eu64 << 40) | (31u64 << 33) | 0x001000;
        assert_eq!(dis(word), "DO 0x001000 UNTIL FOREVER");
    }

    #[test]
    fn test_do_until_lce() {
        let word: u64 = (0x0Eu64 << 40) | (15u64 << 33) | 0x000500;
        assert_eq!(dis(word), "DO 0x000500 UNTIL LCE");
    }

    #[test]
    fn test_imm_load_type17() {
        // Type 17: 000_01111
        // R0 = 0x12345678, ureg=0x00 (R0), imm32=0x12345678
        let word: u64 = (0x0Fu64 << 40) | 0x12345678; // ureg=0x00 (R0)
        assert_eq!(dis(word), "R0 = 0x12345678"); // uppercase before lowercase conversion
    }

    #[test]
    fn test_imm_load_i0() {
        // I0 = -0x54330000 (0xABCD0000 is negative as i32)
        let word: u64 = (0x0Fu64 << 40) | (0x10u64 << 32) | 0xABCD0000;
        assert_eq!(dis(word), "I0 = -0x54330000");
    }

    #[test]
    fn test_imm_load_mode1() {
        // MODE1 = 0x00001000
        let word: u64 = (0x0Fu64 << 40) | (0x70u64 << 32) | 0x00001000;
        assert_eq!(dis(word), "MODE1 = 0x1000");
    }

    #[test]
    fn test_type1_dual_mem() {
        // Type 1: bits 47-45 = 001
        // DM read: DMD=0, I=0(I0), M=0(M0), dreg=R0
        // PM read: PMD=0, I=0(I8), M=0(M8), dreg=R1 (stored in bits 26-23)
        // No compute
        // DMD=0(read), DMI=0(I0), DMM=0(M0), PMD=0(read),
        // DM_DREG=R0, PMI=0(I8), PMM=0(M8), PM_DREG=R1
        let word: u64 = (0b001u64 << 45) | (1u64 << 23);
        assert_eq!(dis(word), "R0 = DM(I0, M0), R1 = PM(I8, M8)");
    }

    #[test]
    fn test_type1_dm_write() {
        // DM write: DMD=1, I=1(I1), M=2(M2), dreg=R3
        // PM read: PMD=0, I=2(I10), M=1(M9), dreg=R4
        // DMD=1(write), DMI=1, DMM=2, PMD=0, DM_DREG=R3
        let word: u64 = (0b001u64 << 45)
            | (1u64 << 44)  // DMD=1 (write)
            | (1u64 << 41)  // DMI=1
            | (2u64 << 38)  // DMM=2
            | (3u64 << 33)  // DM_DREG=R3
            | (2u64 << 30)  // PMI=2 (I10)
            | (1u64 << 27)  // PMM=1 (M9)
            | (4u64 << 23); // PM_DREG=R4
        assert_eq!(dis(word), "DM(I1, M2) = R3, R4 = PM(I10, M9)");
    }

    #[test]
    fn test_indirect_jump_type9a() {
        // Type 9a: 000_01000
        // JUMP (M8, I8), no compute, COND=31
        let word: u64 = (0x08u64 << 40) | (31u64 << 33);
        assert_eq!(dis(word), "JUMP (M8,I8)");
    }

    #[test]
    fn test_indirect_call_type9a() {
        // CALL (M9, I10) — pmm=1(M9) at bits[29:27], pmi=2(I10) at bits[26:24]
        let word: u64 = (0x08u64 << 40) | (1u64 << 39) | (31u64 << 33)
            | (1u64 << 27) | (2u64 << 24);
        assert_eq!(dis(word), "CALL (M9,I10)");
    }

    #[test]
    fn test_bit_set_type18() {
        // Type 18: 000_10100
        // BIT SET MODE1 0x1000 — byte4=0x02
        let word: u64 = (0x14u64 << 40) | (0x02u64 << 32) | 0x00001000;
        assert_eq!(dis(word), "BIT SET MODE1 0x1000");
    }

    #[test]
    fn test_bit_clr_type18() {
        // BIT CLR MODE1 0x1000 — byte4=0x22
        let word: u64 = (0x14u64 << 40) | (0x22u64 << 32) | 0x00001000;
        assert_eq!(dis(word), "BIT CLR MODE1 0x1000");
    }

    #[test]
    fn test_push_pop_type20() {
        // PUSH STS — 0x10 at bits[39:33] (bit4)
        let word: u64 = (0x17u64 << 40) | (0x10u64 << 33);
        assert_eq!(dis(word), "PUSH STS");

        // POP PCSTK — 0x02 at bits[39:33] (bit1)
        let word2: u64 = (0x17u64 << 40) | (0x02u64 << 33);
        assert_eq!(dis(word2), "POP PCSTK");
    }

    #[test]
    fn test_type14_dm_read() {
        // Type 14: 000_100xx at bits 44-40, i.e. sub >> 2 == 0b100
        // sub = 0b10000 (G=0 DM, D=0 read)
        // ureg=R0, addr=0x00090000
        // ureg=R0(0x00)
        let word: u64 = (0b10000u64 << 40) | 0x00090000;
        assert_eq!(dis(word), "R0=DM (0x90000)");
    }

    #[test]
    fn test_type14_pm_write() {
        // G=1 (PM), D=1 (write), ureg=R5 (0x05)
        let word: u64 = (0b10011u64 << 40) | (0x05u64 << 32) | 0x000A0000;
        assert_eq!(dis(word), "PM (0xA0000)=R5");
    }

    #[test]
    fn test_modify_type19() {
        // Type 19: 000_10110
        // I4=MODIFY(I4, 0x4) — byte4=0x04
        let word: u64 = (0x16u64 << 40) | (0x04u64 << 32) | 0x00000004;
        assert_eq!(dis(word), "I4=MODIFY (I4,0x4)");
    }

    #[test]
    fn test_disassemble_multiple() {
        // Two NOPs in sequence
        let data = [0u8; 12]; // two 6-byte NOP instructions
        let result = disassemble(&data, 0x100, false);
        assert_eq!(result.len(), 2);
        assert_eq!(result[0].addr, 0x100);
        assert_eq!(result[0].text, "NOP");
        assert_eq!(result[1].addr, 0x101);
        assert_eq!(result[1].text, "NOP");
    }

    #[test]
    fn test_disassemble_le_bytes() {
        // Verify LE byte assembly: IDLE = bit 39 set = 0x8000000000
        // In LE: byte[4] has bit 7 set = 0x80
        let data = [0x00u8, 0x00, 0x00, 0x00, 0x80, 0x00];
        let result = disassemble(&data, 0, true);
        assert_eq!(result.len(), 1);
        assert_eq!(result[0].text, "IDLE");
    }

    #[test]
    fn test_disassemble_be_bytes() {
        // IDLE in BE: byte[1] has bit 7 set = 0x80
        let data = [0x00u8, 0x80, 0x00, 0x00, 0x00, 0x00];
        let result = disassemble(&data, 0, false);
        assert_eq!(result.len(), 1);
        assert_eq!(result[0].text, "IDLE");
    }

    #[test]
    fn test_partial_data_ignored() {
        // 5 bytes = not enough for one instruction
        let data = [0u8; 5];
        let result = disassemble(&data, 0, true);
        assert!(result.is_empty());
    }

    #[test]
    fn test_bit_helpers() {
        assert_eq!(bits(0xFFFFFFFFFFFF, 47, 45), 0b111);
        assert_eq!(bits(0xA00000000000, 47, 45), 0b101);
        assert!(bit(0x8000000000, 39));
        assert!(!bit(0x8000000000, 38));
    }

    #[test]
    fn test_sign_extend() {
        assert_eq!(sign_extend(0x00000A, 24), 10);
        assert_eq!(sign_extend(0xFFFFFB, 24), -5);
        assert_eq!(sign_extend(0x3F, 6), -1);
        assert_eq!(sign_extend(0x01, 6), 1);
    }

    #[test]
    fn test_ureg_names() {
        assert_eq!(ureg_name(0x00), "R0");
        assert_eq!(ureg_name(0x0F), "R15");
        assert_eq!(ureg_name(0x10), "I0");
        assert_eq!(ureg_name(0x20), "M0");
        assert_eq!(ureg_name(0x30), "L0");
        assert_eq!(ureg_name(0x40), "B0");
        assert_eq!(ureg_name(0x62), "PC");
        assert_eq!(ureg_name(0x67), "LCNTR");
        assert_eq!(ureg_name(0x70), "MODE1");
        assert_eq!(ureg_name(0x79), "IMASK");
        assert_eq!(ureg_name(0x80), "USTAT1");
        assert_eq!(ureg_name(0x90), "TPERIOD");
    }

    #[test]
    fn test_rts_with_compute() {
        // RTS with R0 = R1 + R2
        let compute: u64 = 0x001012;
        let word: u64 = (0x0Au64 << 40) | (31u64 << 33) | compute; // J=0 (RTS)
        assert_eq!(dis(word), "RTS , R0 = R1 + R2");
    }

    #[test]
    fn test_type7_compute_modify() {
        // Type 7 (standard, bit39=0): bits[38]=g, bits[37:35]=i, bits[34:32]=m, bits[27:23]=cond
        // G=0 (DAG1), I=0 (I0), M=1 (M1), COND=31(TRUE)
        // compute: R0 = R1 + R2
        let word: u64 = 0x04010f801012; // pre-computed from layout
        assert_eq!(dis(word), "R0 = R1 + R2 , MODIFY(I0, M1)");
    }

    #[test]
    fn test_disassemble_line_bytes() {
        let result = dis_be(0x8000000000);
        assert_eq!(result.len(), 1);
        // BE: MSB first, 0x8000000000 = 0x00_80_00_00_00_00
        assert_eq!(result[0].raw, [0x00, 0x80, 0x00, 0x00, 0x00, 0x00]);
    }
}
