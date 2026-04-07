// SPDX-License-Identifier: GPL-3.0
// visa.rs --- VISA variable-width instruction decoder for SHARC+
// Copyright (c) 2026 Jakob Kastelic

//! SHARC+ VISA (Variable Instruction Set Architecture) decoder.
//!
//! VISA instructions are 16, 32, or 48 bits wide. Width is determined from
//! the first 16-bit parcel. Parcels are stored big-endian in the ELF.

/// Instruction width in VISA mode.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InstrWidth {
    W16,
    W32,
    W48,
}

/// One disassembled VISA instruction.
pub struct VisaLine {
    /// Parcel address.
    pub addr: u32,
    /// Raw instruction bytes (2, 4, or 6).
    pub raw: Vec<u8>,
    /// Formatted disassembly text.
    pub text: String,
}

/// Disassemble a code section in VISA mode (BW=2).
///
/// VISA parcels are always big-endian (MSB first) regardless of ELF endianness.
/// The `decode_48` parameter is a callback for 48-bit instruction decoding
/// (typically `disasm::decode_instruction`).
pub fn disassemble_visa(
    data: &[u8],
    base_addr: u32,
    decode_48: fn(u64) -> String,
) -> Vec<VisaLine> {
    let mut result = Vec::new();
    let mut offset = 0usize;
    let mut addr = base_addr;
    while offset + 2 <= data.len() {
        let p1 = read_16_be(&data[offset..]);

        if is_16bit(p1) {
            let text = decode_16(p1);
            result.push(VisaLine {
                addr,
                raw: data[offset..offset + 2].to_vec(),
                text,
            });
            offset += 2;
            addr += 1;
            continue;
        }

        if offset + 4 > data.len() {
            result.push(VisaLine {
                addr,
                raw: data[offset..].to_vec(),
                text: format!("??? (truncated at 0x{p1:04x})"),
            });
            break;
        }

        let p2 = read_16_be(&data[offset + 2..]);
        let width = visa_width(p1, p2);

        match width {
            InstrWidth::W16 => {
                let text = decode_16(p1);
                result.push(VisaLine {
                    addr,
                    raw: data[offset..offset + 2].to_vec(),
                    text,
                });
                offset += 2;
                addr += 1;
            }
            InstrWidth::W32 => {
                let word32 = (p1 as u32) << 16 | (p2 as u32);
                let text = decode_32(word32);
                result.push(VisaLine {
                    addr,
                    raw: data[offset..offset + 4].to_vec(),
                    text,
                });
                offset += 4;
                addr += 2;
            }
            InstrWidth::W48 => {
                if offset + 6 > data.len() {
                    result.push(VisaLine {
                        addr,
                        raw: data[offset..].to_vec(),
                        text: format!("??? (truncated 48-bit at 0x{p1:04x} 0x{p2:04x})"),
                    });
                    break;
                }
                let p3 = read_16_be(&data[offset + 4..]);
                let word48 = (p1 as u64) << 32 | (p2 as u64) << 16 | (p3 as u64);
                let text = compact_isa_output(&decode_48(word48));
                result.push(VisaLine {
                    addr,
                    raw: data[offset..offset + 6].to_vec(),
                    text,
                });
                offset += 6;
                addr += 3;
            }
        }
    }
    result
}

// ---------------------------------------------------------------------------
// ISA output normalization
// ---------------------------------------------------------------------------

/// Convert ISA decoder uppercase output to standard lowercase format.
/// Removes spaces around `=`, `+`, `-` etc. to match compact style.
fn compact_isa_output(s: &str) -> String {
    let lower = s.to_lowercase();
    // Remove spaces around = but preserve spaces in keywords like "by", "and"
    let mut result = String::with_capacity(lower.len());
    let chars: Vec<char> = lower.chars().collect();
    let mut i = 0;
    while i < chars.len() {
        if chars[i] == ' ' && i + 1 < chars.len() && chars[i + 1] == '=' {
            // Skip space before =
            i += 1;
        } else if chars[i] == '=' && i + 1 < chars.len() && chars[i + 1] == ' ' {
            result.push('=');
            i += 2; // Skip = and space after
        } else if chars[i] == ' ' && i + 1 < chars.len() && chars[i + 1] == '*' && i + 2 < chars.len() && chars[i + 2] == ' ' {
            // " * " → compact to "*"
            result.push('*');
            i += 3;
        } else if chars[i] == ' ' && i + 1 < chars.len() && (chars[i + 1] == '+' || chars[i + 1] == '-') {
            // Check if this is an operator (not a negative number)
            if i > 0 && i + 2 < chars.len() && chars[i + 2] == ' ' {
                // " + " or " - " → compact to operator without spaces
                result.push(chars[i + 1]);
                i += 3;
            } else {
                result.push(chars[i]);
                i += 1;
            }
        } else {
            result.push(chars[i]);
            i += 1;
        }
    }
    // Ensure "dm(" and "pm(" have a space: "dm (" and "pm ("
    let mut result = result
        .replace("dm(", "dm (")
        .replace("pm(", "pm (");
    // Remap ISA ureg names to VISA equivalents:
    // ISA 0x64=PCSTKP -> VISA PCSTK (but don't break existing "pcstk")
    // ISA 0x72=FLAGS -> VISA MODE1 (standalone word only, not flag0_in etc.)
    result = result.replace("pcstkp", "pcstk");
    // Replace "flags" only as a standalone ureg name (preceded by = or , or space)
    // Simple approach: FLAGS only appears as a register destination/source
    visa_replace_ureg(&mut result, "flags", "mode1");
    result
}

/// Replace a standalone ureg name in disassembly output.
/// Only matches when bounded by non-alphanumeric characters.
fn visa_replace_ureg(s: &mut String, old: &str, new: &str) {
    let mut start = 0;
    while let Some(pos) = s[start..].find(old) {
        let abs_pos = start + pos;
        let end_pos = abs_pos + old.len();
        // Check boundaries: must not be preceded or followed by alphanumeric/underscore
        let before_ok = abs_pos == 0
            || !s.as_bytes()[abs_pos - 1].is_ascii_alphanumeric();
        let after_ok = end_pos >= s.len()
            || !s.as_bytes()[end_pos].is_ascii_alphanumeric();
        if before_ok && after_ok {
            s.replace_range(abs_pos..end_pos, new);
            start = abs_pos + new.len();
        } else {
            start = end_pos;
        }
    }
}

// ---------------------------------------------------------------------------
// Width detection
// ---------------------------------------------------------------------------

fn read_16_be(data: &[u8]) -> u16 {
    ((data[0] as u16) << 8) | (data[1] as u16)
}

/// Check if a first parcel is a 16-bit instruction.
///
/// Determined entirely from the first parcel — no ambiguity with 32/48-bit.
/// Covers all VISA instruction forms.
fn is_16bit(parcel: u16) -> bool {
    // Known exact values
    if matches!(parcel, 0x0001 | 0x0081 | 0x00C1 | 0x1901 | 0x0AFE) {
        return true;
    }
    // Type 2c (short compute): bits[15:13] = 110
    if parcel >> 13 == 0b110 {
        return true;
    }
    // Type 3c (short data move): bits[15:12]=1001, bit8=1, bit4=1
    if (parcel & 0xF110) == 0x9110 {
        return true;
    }
    false
}

/// Determine VISA instruction width from the first two parcels.
///
/// Uses type-specific rules derived from the SHARC+ instruction decode tree.
/// For types that exist in both 32 and 48-bit form with the same first-parcel
/// value, uses `p2 & 0x3F >= 0x38` to distinguish.
fn visa_width(parcel1: u16, parcel2: u16) -> InstrWidth {
    if is_16bit(parcel1) {
        return InstrWidth::W16;
    }
    let top3 = parcel1 >> 13;
    let sub5 = (parcel1 >> 8) & 0x1F;
    let bit7 = (parcel1 >> 7) & 1;

    match top3 {
        0b000 => match sub5 {
            // Types that are always 48-bit (no 32-bit variant)
            0b00000 // Type 21a/22a (NOP/IDLE 48-bit)
            | 0b00010 // Type 6b (imm shift alt)
            | 0b00110 // Type 8a (direct jump, absolute)
            | 0b00111 // Type 8b (direct jump, PC-relative)
            | 0b01010 // Type 11a (RTS/RTI + compute)
            | 0b01011 // Type 11b (RTS/RTI alt)
            | 0b01100 // Type 12a (LCNTR=imm16, DO)
            | 0b01101 // Type 12b (LCNTR=ureg, DO)
            | 0b01110 // Type 13 (DO UNTIL)
            | 0b10100 // Type 18 (BIT ops)
            | 0b10101 // Enhanced MODIFY with scaling (nw/sw)
            | 0b10110 // Type 19 (MODIFY/BITREV imm32)
            | 0b10111 // Type 20 (push/pop/flush)
            | 0b11000 // Type 25a (CJUMP)
            => InstrWidth::W48,
            _ if (sub5 >> 2) == 0b100 => InstrWidth::W48, // Type 14a/d
            // Type 2: sub5=00001, bit7=1→32b, bit7=0→48b
            0b00001 => {
                if bit7 == 1 { InstrWidth::W32 } else { InstrWidth::W48 }
            }
            // Type 7: sub5=00100, bit7=0→32b, bit7=1→48b (reversed!)
            0b00100 => {
                if bit7 == 0 { InstrWidth::W32 } else { InstrWidth::W48 }
            }
            // Type 17: sub5=01111, bit7=1→32b, bit7=0→48b
            0b01111 => {
                if bit7 == 1 { InstrWidth::W32 } else { InstrWidth::W48 }
            }
            // Type 9a: sub5=01000, ambiguous → p2 check
            // Type 9b: sub5=01001, ambiguous → p2 check
            _ => {
                if parcel2 & 0x3F >= 0x38 {
                    InstrWidth::W32
                } else {
                    InstrWidth::W48
                }
            }
        },
        0b001 => {
            // Type 1: bit7=1→32b (Type 1b), bit7=0→48b (Type 1a)
            // Actually Type 1 always has compute in 48-bit form.
            // Check p2 for ambiguous values.
            if parcel2 & 0x3F >= 0x38 {
                InstrWidth::W32
            } else {
                InstrWidth::W48
            }
        }
        0b010 => {
            // Type 3: has 3a (48), 3b (32), 3d (48) variants
            // sub5=11001: bit7=1→32, bit7=0→48
            if sub5 == 0b11001 {
                if bit7 == 1 { InstrWidth::W32 } else { InstrWidth::W48 }
            } else if parcel2 & 0x3F >= 0x38 {
                InstrWidth::W32
            } else {
                InstrWidth::W48
            }
        }
        0b011 => {
            // Types 4, 5: sub5=01010 bit0=0→32, bit0=1→48
            if sub5 == 0b01010 {
                if parcel1 & 1 == 0 { InstrWidth::W32 } else { InstrWidth::W48 }
            } else if parcel2 & 0x3F >= 0x38 {
                InstrWidth::W32
            } else {
                InstrWidth::W48
            }
        }
        0b100 => {
            // Type 3c (16-bit) already handled by is_16bit.
            let bit12 = (parcel1 >> 12) & 1;
            if bit12 == 0 {
                // Type 6a: shift + mem (always 48-bit)
                InstrWidth::W48
            } else {
                // bit12=1: Type 16a (48-bit) or Type 3b/16b (32-bit)
                // Type 16a (48-bit, dm/pm with imm32): p1=0x9fc0 pattern
                // 0x9fc0 is the only 48-bit p1 with bit12=1 in this
                // group. It has bit7=1, bit2=0. The 32-bit 0x9fc4 has bit2=1.
                // Use sub5=11111 special handling, else 32-bit.
                if sub5 == 0b11111 {
                    let b2 = (parcel1 >> 2) & 1;
                    if b2 == 0 && bit7 == 1 {
                        InstrWidth::W48 // Type 16a with imm32
                    } else {
                        InstrWidth::W32
                    }
                } else {
                    InstrWidth::W32
                }
            }
        }
        0b101 => InstrWidth::W48, // Type 15a (always 48)
        0b110 => InstrWidth::W48, // Type 10a (always 48) — Type 2c handled by is_16bit
        0b111 => InstrWidth::W48, // Type 10b (always 48)
        _ => InstrWidth::W48,
    }
}

// ---------------------------------------------------------------------------
// 16-bit instruction decoders
// ---------------------------------------------------------------------------

fn decode_16(parcel: u16) -> String {
    match parcel {
        0x0001 => return "nop".into(),
        0x0081 => return "idle".into(),
        0x00C1 => return "emuidle".into(),
        0x0AFE => return "rts (db)".into(),
        0x1901 => return "rframe".into(),
        _ => {}
    }

    if parcel >> 13 == 0b110 {
        return decode_type2c(parcel);
    }
    if (parcel & 0xF110) == 0x9110 {
        return decode_type3c(parcel);
    }

    format!("??? 0x{parcel:04x}")
}

/// Type 2c: short compute (16-bit).
/// bits[15:13]=110, bits[12:0]=opcode+rn+ry.
fn decode_type2c(parcel: u16) -> String {
    decode_short_compute(parcel)
}

/// Decode a short compute from Type 2c.
/// Layout: bits[12:8]=opcode, bits[7:4]=rn, bits[3:0]=ry.
/// For most ops: rn is both destination and first source (rn = rn OP ry).
fn decode_short_compute(parcel: u16) -> String {
    let op = (parcel >> 8) & 0x1F;
    let rn = (parcel >> 4) & 0xF;
    let ry = parcel & 0xF;
    match op {
        0 => format!("r{rn}=r{rn}+r{ry}"),
        1 => format!("r{rn}=r{rn}-r{ry}"),
        2 => format!("r{rn}=pass r{ry}"),
        3 => format!("comp (r{rn},r{ry})"),
        4 => format!("f{rn}=f{rn}+f{ry}"),
        5 => format!("r{rn}=r{ry}+1"),
        6 => format!("r{rn}=r{ry}-1"),
        7 => format!("r{rn}=r{rn}+r{ry}+ci"),
        8 => format!("r{rn}=-r{ry}"),
        9 => format!("r{rn}=abs r{ry}"),
        10 => format!("f{rn}=f{rn}-f{ry}"),
        11 => format!("f{rn}=pass f{ry}"),
        12 => format!("r{rn}=r{rn} and r{ry}"),
        13 => format!("r{rn}=r{rn} or r{ry}"),
        14 => format!("r{rn}=r{rn} xor r{ry}"),
        15 => format!("r{rn}=not r{ry}"),
        _ => format!("shortcompute op={op} r{rn} r{ry}"),
    }
}

/// Type 3c: short data move (16-bit).
/// bits[15:12]=1001, bit[8]=1, bit[4]=1, variable fields between.
fn decode_type3c(parcel: u16) -> String {
    // Bit layout:
    // bits[15:12] = 1001 (fixed type marker)
    // bits[11:9]  = i[2:0] (index register: I0-I7 for DM)
    // bits[8]     = 1 (fixed)
    // bits[7:5]   = m[2:0] (modify register: M0-M7 for DM)
    // bit[4]      = 1 (fixed)
    // bit[3]      = d (0=read from mem, 1=write to mem)
    // bits[2:0]   = dreg[3:1,0] (register number)
    //
    // Note: dreg encoding packs 4 bits across bits[6:3] in the original
    // Note: dreg encoding packs 4 bits across non-contiguous fields.
    // 

    // Bit layout:
    //   bits[11:9] = i[2:0] (index register)
    //   bits[8:6]  = m[2:0] (modify register)
    //   bit[5]     = d (0=read, 1=write)
    //   bits[3:0]  = dreg (register number)
    let i_val = (parcel >> 9) & 7;
    let m_val = (parcel >> 6) & 7;
    let d_bit = (parcel >> 5) & 1;
    let dreg_val = parcel & 0xF;

    let ir = format!("i{i_val}");
    let mr = format!("m{m_val}");
    let dr = format!("r{dreg_val}");

    if d_bit == 1 {
        format!("dm ({ir},{mr})={dr}")
    } else {
        format!("{dr}=dm ({ir},{mr})")
    }
}

// ---------------------------------------------------------------------------
// 32-bit instruction decoder
// ---------------------------------------------------------------------------

/// Decode a 32-bit VISA instruction.
///
/// The 32-bit word is formed from two big-endian parcels: p1 (high) and p2 (low).
/// Dispatch is on the same top3 + sub5 fields used for width detection.
fn decode_32(word: u32) -> String {
    let p1 = (word >> 16) as u16;
    let p2 = word as u16;
    let top3 = p1 >> 13;

    match top3 {
        0b000 => decode_32_group0(p1, p2),
        0b010 => decode_32_type3b(p1, p2),
        0b011 => decode_32_group3(p1, p2),
        0b100 => decode_32_group4(p1, p2),
        _ => format!("??? 0x{p1:04x} 0x{p2:04x}"),
    }
}

// ---------------------------------------------------------------------------
// Group 0 (top3=000): Type 2b, 7b, 9b, 17b
// ---------------------------------------------------------------------------

fn decode_32_group0(p1: u16, p2: u16) -> String {
    let sub5 = (p1 >> 8) & 0x1F;
    match sub5 {
        0b00001 => decode_32_type2b(p1, p2),
        0b00100 => decode_32_type7b(p1, p2),
        0b01000 | 0b01001 => decode_32_type9b(p1, p2),
        0b01111 => decode_32_type17b(p1, p2),
        _ => format!("??? 0x{p1:04x} 0x{p2:04x}"),
    }
}

/// Type 2b: 32-bit compute (unconditional or conditional).
///
/// Layout: `[31:29]=000  [28:24]=00001  [23]=1(32b flag)  [22:0]=compute`
///
/// The 23-bit compute field uses the same structure as the 48-bit ISA:
///   - `bit[22]`    = multi (0 for single-function)
///   - `bits[21:20]` = cu (0=ALU, 1=MUL, 2=SHIFT)
///   - `bits[19:12]` = opcode
///   - `bits[11:8]`  = Rn (destination)
///   - `bits[7:4]`   = Rx (source 1)
///   - `bits[3:0]`   = Ry (source 2)
///
/// Opcodes match the 48-bit ISA for ALU, but MUL and SHIFT include additional
/// opcodes not present in the 48-bit tables (e.g. MUL 0x70 = SSI, SHIFT
/// 0x88 = LEFTZ).  This decoder handles the full 32-bit opcode set.
fn decode_32_type2b(p1: u16, p2: u16) -> String {
    let compute = ((p1 as u32 & 0x7F) << 16) | p2 as u32;
    decode_32_compute(compute)
}

/// Decode a 23-bit compute field from a 32-bit instruction.
fn decode_32_compute(field: u32) -> String {
    if field == 0 {
        return "nop".into();
    }
    let cu = (field >> 20) & 3;
    let opcode = ((field >> 12) & 0xFF) as u8;
    let rn = (field >> 8) & 0xF;
    let rx = (field >> 4) & 0xF;
    let ry = field & 0xF;

    match cu {
        0 => decode_32_alu(opcode, rn, rx, ry),
        1 => decode_32_mul(opcode, rn, rx, ry),
        2 => decode_32_shift(opcode, rn, rx, ry),
        _ => format!("compute(0x{field:06x})"),
    }
}

fn decode_32_alu(opcode: u8, rn: u32, rx: u32, ry: u32) -> String {
    let fp = opcode & 0x80 != 0;
    let r = |i: u32| -> String {
        if fp { format!("f{i}") } else { format!("r{i}") }
    };

    match opcode {
        // MR register reads (rx=ry=0 distinguishes from arithmetic)
        0x00 if rx == 0 && ry == 0 => format!("r{rn}=mr0f"),
        0x01 if rx == 0 && ry == 0 => format!("r{rn}=mr1f"),
        0x02 if rx == 0 && ry == 0 => format!("r{rn}=mr2f"),
        0x04 if rx == 0 && ry == 0 => format!("r{rn}=mr0b"),
        0x05 if rx == 0 && ry == 0 => format!("r{rn}=mr1b"),
        0x06 if rx == 0 && ry == 0 => format!("r{rn}=mr2b"),
        // MR register writes (rx=ry=0)
        0x10 => format!("mr0f=r{rn}"),
        0x11 => format!("mr1f=r{rn}"),
        0x12 => format!("mr2f=r{rn}"),
        0x14 => format!("mr0b=r{rn}"),
        0x15 => format!("mr1b=r{rn}"),
        0x16 => format!("mr2b=r{rn}"),
        // Standard ALU (integer)
        0x01 => format!("r{rn}=r{rx}+r{ry}"),
        0x02 => format!("r{rn}=r{rx}-r{ry}"),
        0x05 => format!("r{rn}=r{rx}+r{ry}+ci"),
        0x06 => format!("r{rn}=r{rx}-r{ry}+ci-1"),
        0x09 => format!("r{rn}=(r{rx}+r{ry})/2"),
        0x0A => format!("comp (r{rx},r{ry})"),
        0x0B => format!("compu (r{rx},r{ry})"),
        0x21 => format!("r{rn}=pass r{rx}"),
        0x22 => format!("r{rn}=-r{rx}"),
        0x25 => format!("r{rn}=r{rx}+ci"),
        0x26 => format!("r{rn}=r{rx}+ci-1"),
        0x29 => format!("r{rn}=r{rx}+1"),
        0x2A => format!("r{rn}=r{rx}-1"),
        0x30 => format!("r{rn}=abs r{rx}"),
        0x40 => format!("r{rn}=r{rx} and r{ry}"),
        0x41 => format!("r{rn}=r{rx} or r{ry}"),
        0x42 => format!("r{rn}=r{rx} xor r{ry}"),
        0x43 => format!("r{rn}=not r{rx}"),
        0x61 => format!("r{rn}=min(r{rx},r{ry})"),
        0x62 => format!("r{rn}=max(r{rx},r{ry})"),
        0x63 => format!("r{rn}=clip r{rx} by r{ry}"),
        // Standard ALU (floating-point)
        0x81 => format!("f{rn}=f{rx}+f{ry}"),
        0x82 => format!("f{rn}=f{rx}-f{ry}"),
        0x89 => format!("f{rn}=(f{rx}+f{ry})/2"),
        0x8A => format!("comp (f{rx},f{ry})"),
        0x91 => format!("f{rn}=abs(f{rx}+f{ry})"),
        0x92 => format!("f{rn}=abs(f{rx}-f{ry})"),
        0xA1 => format!("f{rn}=pass f{rx}"),
        0xA2 => format!("f{rn}=-f{rx}"),
        0xA5 => format!("f{rn}=rnd f{rx}"),
        0xAD => format!("r{rn}=mant f{rx}"),
        0xB0 => format!("f{rn}=abs f{rx}"),
        0xBD => format!("{}=scalb {} by r{ry}", r(rn), r(rx)),
        0xC1 => format!("r{rn}=logb {}", r(rx)),
        0xC4 => format!("{}=recips {}", r(rn), r(rx)),
        0xC5 => format!("{}=rsqrts {}", r(rn), r(rx)),
        0xC9 => format!("r{rn}=fix f{rx}"),
        0xCA => format!("f{rn}=float r{rx}"),
        0xCD => format!("r{rn}=trunc f{rx}"),
        0xD9 => format!("r{rn}=fix f{rx} by r{ry}"),
        0xDA => format!("f{rn}=float r{rx} by r{ry}"),
        0xDD => format!("r{rn}=trunc f{rx} by r{ry}"),
        0xE0 => format!("f{rn}=f{rx} copysign f{ry}"),
        0xE1 => format!("f{rn}=min(f{rx},f{ry})"),
        0xE2 => format!("f{rn}=max(f{rx},f{ry})"),
        0xE3 => format!("f{rn}=clip f{rx} by f{ry}"),
        _ => format!("alu 0x{opcode:02x} r{rn} r{rx} r{ry}"),
    }
}

fn decode_32_mul(opcode: u8, rn: u32, rx: u32, ry: u32) -> String {
    // 32-bit MUL opcodes:
    // 0x70 = Rn = Rx * Ry (SSI) — signed-integer multiply
    match opcode {
        0x40 => format!("mrf=r{rx}*r{ry} (ssf)"),
        0x41 => format!("mrb=r{rx}*r{ry} (ssf)"),
        0x44 => format!("r{rn}=r{rx}*r{ry} (ssf)"),
        0x48 => format!("mrf=mrf+r{rx}*r{ry} (ssf)"),
        0x49 => format!("mrb=mrb+r{rx}*r{ry} (ssf)"),
        0x4C => format!("r{rn}=mrf+r{rx}*r{ry} (ssf)"),
        0x50 => format!("mrf=mrf-r{rx}*r{ry} (ssf)"),
        0x51 => format!("mrb=mrb-r{rx}*r{ry} (ssf)"),
        0x60 => format!("r{rn}=sat mrf"),
        0x61 => format!("r{rn}=sat mrb"),
        0x64 => "mrf=0".into(),
        0x65 => "mrb=0".into(),
        0x70 => format!("r{rn}=r{rx}*r{ry} (ssi)"),
        0x74 => format!("r{rn}=r{rx}*r{ry} (sui)"),
        0x78 => format!("mrf=mrf+r{rx}*r{ry} (ssi)"),
        0x7C => format!("r{rn}=mrf+r{rx}*r{ry} (ssi)"),
        0x80 => format!("f{rn}=f{rx}*f{ry}"),
        _ => format!("mul 0x{opcode:02x} r{rn} r{rx} r{ry}"),
    }
}

fn decode_32_shift(opcode: u8, rn: u32, rx: u32, ry: u32) -> String {
    match opcode {
        0x00 => format!("r{rn}=lshift r{rx} by r{ry}"),
        0x04 => format!("r{rn}=r{rn} or lshift r{rx} by r{ry}"),
        0x08 => format!("r{rn}=ashift r{rx} by r{ry}"),
        0x0C => format!("r{rn}=r{rn} or ashift r{rx} by r{ry}"),
        0x20 => format!("r{rn}=r{rn} or lshift r{rx} by r{ry}"),
        0x88 => format!("r{rn}=leftz r{rx}"),
        0x8C => format!("r{rn}=lefto r{rx}"),
        0xC0 => format!("r{rn}=bset r{rx} by r{ry}"),
        0xC4 => format!("r{rn}=bclr r{rx} by r{ry}"),
        0xC8 => format!("r{rn}=btgl r{rx} by r{ry}"),
        0xCC => format!("btst r{rx} by r{ry}"),
        0x40 => format!("btst r{rx} by r{ry}"),
        0x44 => format!("r{rn}=bclr r{rx} by r{ry}"),
        0x48 => format!("r{rn}=bset r{rx} by r{ry}"),
        0x4C => format!("r{rn}=btgl r{rx} by r{ry}"),
        0x60 => format!("r{rn}=fext r{rx} by r{ry}"),
        0x64 => format!("r{rn}=fdep r{rx} by r{ry}"),
        0x80 => format!("r{rn}=exp r{rx}"),
        0x84 => format!("r{rn}=exp r{rx} (ex)"),
        0xD0 => format!("r{rn}=fpack f{rx}"),
        0xD4 => format!("f{rn}=funpack r{rx}"),
        _ => format!("shift 0x{opcode:02x} r{rn} r{rx} r{ry}"),
    }
}

/// Type 7b: 32-bit modify with result assignment.
///
/// `i_dest = MODIFY(i_src, m)`
///
/// Layout (in full 32-bit word = `(p1 << 16) | p2`):
///   - `{p1[0], p2[15:14]}` = i_src (3 bits)
///   - `p2[13:11]`          = m (3 bits)
///   - `p2[10:8]`           = dest_xor (i_dest = i_src XOR dest_xor)
///   - `p1[6]`              = g (0=DAG1, 1=DAG2)
///   - `p1[5:1]`            = cond (31=TRUE)
fn decode_32_type7b(p1: u16, p2: u16) -> String {
    let cond = (p1 >> 1) & 0x1F;
    let g = (p1 >> 6) & 1;
    let i_src = ((p1 & 1) << 2) | ((p2 >> 14) & 3);
    let m_field = (p2 >> 11) & 7;
    let dest_xor = (p2 >> 8) & 7;
    let i_dest = i_src ^ dest_xor;

    let base = if g == 1 { 8u16 } else { 0 };
    let src = i_src + base;
    let dst = i_dest + base;
    let m = m_field + base;

    let mut out = String::new();
    if cond != 31 {
        out.push_str("if ");
        out.push_str(&cond_name_lower(cond));
        out.push(' ');
    }
    out.push_str(&format!("i{dst}=modify (i{src},m{m})"));
    out
}

/// Type 9b: 32-bit indirect jump/call.
///
/// Layout:
///   - `p1[6]`     = j (0=JUMP, 1=CALL)
///   - `p1[5:1]`   = cond (5 bits, typically 31=TRUE)
///   - `p2[13:11]` = pmm field (M register = M(8+field))
///   - `p2[15:14]` = pmi offset (I register = I(12+offset))
///   - `p2[10]`    = DB (delayed branch) flag
fn decode_32_type9b(p1: u16, p2: u16) -> String {
    let j = (p1 >> 6) & 1;
    let cond = (p1 >> 1) & 0x1F;
    let pmi_off = (p2 >> 14) & 3;
    let pmm = (p2 >> 11) & 7;
    let db = (p2 >> 10) & 1;

    let op = if j == 1 { "call" } else { "jump" };
    let m_reg = format!("m{}", 8 + pmm);
    let i_reg = format!("i{}", 12 + pmi_off);

    let mut out = String::new();
    if cond != 31 {
        out.push_str("if ");
        out.push_str(&cond_name_lower(cond));
        out.push(' ');
    }
    out.push_str(op);
    out.push_str(&format!(" ({m_reg},{i_reg})"));
    if db == 1 {
        out.push_str(" (db)");
    }
    out
}

/// Type 17b: 32-bit ureg = imm16.
///
/// Layout: `p1[6:0]` = ureg code (7 bits), `p2` = 16-bit immediate.
fn decode_32_type17b(p1: u16, p2: u16) -> String {
    let ureg_code = (p1 & 0x7F) as u32;
    let imm = p2 as i16;
    let ur = ureg_name_lower(ureg_code);
    if imm < 0 {
        format!("{ur}=-0x{:x}", -(imm as i32))
    } else {
        format!("{ur}=0x{:x}", imm as u16)
    }
}

// ---------------------------------------------------------------------------
// Type 3b (top3=010): ureg <-> DM/PM with register addressing
// ---------------------------------------------------------------------------

/// Type 3b: ureg transfer with register modify.
///
/// Layout:
///   - `p1[12:9]` = i-register index (I0-I7 for DM, I8-I15 for PM)
///   - `p1[7:6]`  = m-register offset (m = field + 4, giving M4-M7)
///   - `p1[5:1]`  = cond (5 bits)
///   - `p2[15]`   = direction (0=read, 1=write)
///   - `p2[14]`   = short-word flag (when p2[1:0]=00)
///   - `p2[13:7]` = ureg code (7 bits)
///   - `p2[1:0]`  = access width (11=NW, 00=BW or SW depending on p2[14])
fn decode_32_type3b(p1: u16, p2: u16) -> String {
    let sub5 = (p1 >> 8) & 0x1F;
    let i_field = (p1 >> 9) & 0xF;
    let m_offset = (p1 >> 6) & 3;
    let cond = (p1 >> 1) & 0x1F;
    let d = (p2 >> 15) & 1;          // 0=read, 1=write
    let sw_flag = (p2 >> 14) & 1;
    let ureg_code = ((p2 >> 7) & 0x7F) as u32;
    let width_bits = p2 & 3;

    // Determine memory space (DM for now)
    let mem = "dm";
    let i_val = i_field & 7;
    let i_reg = format!("i{i_val}");
    let m_val = m_offset + 4;
    let m_reg = format!("m{m_val}");
    let ur = ureg_name_lower(ureg_code);

    // Access width suffix (Type 3b): sw_flag=1 → short-word, sw_flag=0 → byte-word
    let suffix = if width_bits == 0 {
        if sw_flag == 1 { "(sw)" } else { "(bw)" }
    } else {
        "" // normal word, no suffix
    };

    // sub5=11001: system register transfers (LADDR, CURLCNTR, etc.)
    // Same field layout as normal Type 3b but no access width suffix
    if sub5 == 0b11001 {
        let mut out = String::new();
        if cond != 31 {
            out.push_str("if ");
            out.push_str(&cond_name_lower(cond));
            out.push(' ');
        }
        if d == 1 {
            out.push_str(&format!("{mem} ({i_reg},{m_reg})={ur}"));
        } else {
            out.push_str(&format!("{ur}={mem} ({i_reg},{m_reg})"));
        }
        return out;
    }

    let mut out = String::new();
    if cond != 31 {
        out.push_str("if ");
        out.push_str(&cond_name_lower(cond));
        out.push(' ');
    }

    if d == 1 {
        // Write: dm(Mm,Ii)=ureg
        if suffix.is_empty() {
            out.push_str(&format!("{mem} ({m_reg},{i_reg})={ur}"));
        } else {
            out.push_str(&format!("{mem} ({m_reg},{i_reg})={ur} {suffix}"));
        }
    } else {
        // Read: ureg=dm(Mm,Ii)
        if suffix.is_empty() {
            out.push_str(&format!("{ur}={mem} ({m_reg},{i_reg})"));
        } else {
            out.push_str(&format!("{ur}={mem} ({m_reg},{i_reg}){suffix}"));
        }
    }
    out
}

// ---------------------------------------------------------------------------
// Group 3 (top3=011): ureg-to-ureg moves, Type 4b
// ---------------------------------------------------------------------------

fn decode_32_group3(p1: u16, p2: u16) -> String {
    let sub5 = (p1 >> 8) & 0x1F;

    // sub5[4:3] = 10 -> ureg-to-ureg move (Types 5a-32b)
    // sub5[2:0] = source register group
    if (sub5 >> 3) == 0b10 {
        return decode_32_ureg_move(p1, p2);
    }

    // Other sub5 values: Type 4b (dreg<->DM|PM with immediate)
    match sub5 {
        0b01000 | 0b01010 | 0b01100 => decode_32_type4b(p1, p2),
        _ => format!("??? type4b 0x{p1:04x} 0x{p2:04x}"),
    }
}

/// 32-bit ureg-to-ureg move: `destination_ureg = source_ureg`.
///
/// Source register is encoded with group from `sub5[2:0]` and index from
/// scattered bits `{p1[7], p1[6], p1[0], p2[15]}`.
///
/// Destination is a 7-bit ureg code at `p2[13:7]`.
fn decode_32_ureg_move(p1: u16, p2: u16) -> String {
    let sub5 = (p1 >> 8) & 0x1F;
    let cond = (p1 >> 1) & 0x1F;
    let src_group = sub5 & 7;
    let src_idx = (((p1 >> 7) & 1) << 3)
        | (((p1 >> 6) & 1) << 2)
        | ((p1 & 1) << 1)
        | ((p2 >> 15) & 1);
    let dst_ureg_code = ((p2 >> 7) & 0x7F) as u32;

    let src_ureg_code = (src_group << 4) as u32 | src_idx as u32;
    let src = ureg_name_lower(src_ureg_code);
    let dst = ureg_name_lower(dst_ureg_code);

    let mut out = String::new();
    if cond != 31 {
        out.push_str("if ");
        out.push_str(&cond_name_lower(cond));
        out.push(' ');
    }
    out.push_str(&format!("{dst}={src}"));
    out
}

/// Type 4b: 32-bit dreg <-> DM|PM with immediate offset.
///
/// Layout:
///   - `p1[12:9]`  = i-register index
///   - `p1[10]`    = direction (0=read, 1=write)
///   - `p1[5:1]`   = cond (5 bits)
///   - `p2[15:11]` = offset (5-bit unsigned)
///   - `p2[10:7]`  = dreg (4-bit register index)
///   - `p2[2]`     = access width (1=SW, 0=BW)
///   - `p2[1:0]`   = width mode (00=sub-word, 11=normal word)
fn decode_32_type4b(p1: u16, p2: u16) -> String {
    let i_field = (p1 >> 9) & 0xF;
    let d_bit = (p1 >> 10) & 1;
    let cond = (p1 >> 1) & 0x1F;

    let dreg_val = ((p2 >> 7) & 0xF) as u32;
    // 6-bit signed offset: {p1[0], p2[15:11]}
    let raw6 = (((p1 & 1) as i32) << 5) | ((p2 >> 11) & 0x1F) as i32;
    let offset = (raw6 << 26) >> 26; // sign-extend 6-bit

    let width_bits = p2 & 3;
    let sw_bit = (p2 >> 2) & 1;
    let suffix = if width_bits == 0 {
        if sw_bit == 1 { "(sw)" } else { "(bw)" }
    } else {
        ""
    };

    // Operand order depends on p1[6]:
    //   p1[6]=0: offset first → dm (offset, Ii)
    //   p1[6]=1: I first → dm (Ii, offset)
    let off_first = (p1 >> 6) & 1 == 0;

    let off_str = if offset < 0 {
        format!("-0x{:x}", -offset)
    } else {
        format!("0x{:x}", offset as u32)
    };

    let mem = "dm";
    let mut out = String::new();
    if cond != 31 {
        out.push_str("if ");
        out.push_str(&cond_name_lower(cond));
        out.push(' ');
    }

    if off_first {
        if d_bit == 1 {
            out.push_str(&format!("{mem} ({off_str},i{i_field})=r{dreg_val}"));
        } else {
            out.push_str(&format!("r{dreg_val}={mem} ({off_str},i{i_field})"));
        }
    } else {
        if d_bit == 1 {
            out.push_str(&format!("{mem} (i{i_field},{off_str})=r{dreg_val}"));
        } else {
            out.push_str(&format!("r{dreg_val}={mem} (i{i_field},{off_str})"));
        }
    }
    if !suffix.is_empty() {
        if d_bit == 1 {
            out.push(' ');
        }
        out.push_str(suffix);
    }
    out
}

// ---------------------------------------------------------------------------
// Group 4 (top3=100): DM with immediate offset / Type 16b
// ---------------------------------------------------------------------------

fn decode_32_group4(p1: u16, p2: u16) -> String {
    let i_field = (p1 >> 9) & 7;
    let d_bit = (p1 >> 8) & 1;
    let lw_flag = (p1 >> 7) & 1;

    // Detect Type 16b: dm(Ii,Mm)=imm16
    // These have p1[2]=1 (bit2) and specific patterns
    let bit2 = (p1 >> 2) & 1;
    if bit2 == 1 && ((p1 & 0x0F) == 0x04 || (p1 & 0x0F) == 0x08) {
        // Type 16b: dm(Ii,Mm)=imm16
        // M register encoding is uncertain; use approximate decode
        let m_approx = if lw_flag == 1 { i_field } else { i_field.wrapping_add(2) & 7 };
        let imm = p2;
        return format!("dm (i{i_field},m{m_approx})=0x{imm:x}");
    }

    // Standard: ureg <-> dm(offset, Ii)
    let ureg_code = ((p2 >> 7) & 0x7F) as u32;
    let raw_off = (p2 & 0x7F) as i32;
    let offset = if raw_off >= 64 { raw_off - 128 } else { raw_off };
    let ur = ureg_name_lower(ureg_code);

    // Access width suffix
    let suffix = if lw_flag == 1 { "(lw)" } else { "" };

    if d_bit == 1 {
        // Write: dm(offset, Ii)=ureg
        if offset < 0 {
            if suffix.is_empty() {
                format!("dm (-0x{:x},i{i_field})={ur}", -offset)
            } else {
                format!("dm (-0x{:x},i{i_field})={ur} {suffix}", -offset)
            }
        } else {
            if suffix.is_empty() {
                format!("dm (0x{offset:x},i{i_field})={ur}")
            } else {
                format!("dm (0x{offset:x},i{i_field})={ur} {suffix}")
            }
        }
    } else {
        // Read: ureg=dm(offset, Ii)
        if offset < 0 {
            if suffix.is_empty() {
                format!("{ur}=dm (-0x{:x},i{i_field})", -offset)
            } else {
                format!("{ur}=dm (-0x{:x},i{i_field}){suffix}", -offset)
            }
        } else {
            if suffix.is_empty() {
                format!("{ur}=dm (0x{offset:x},i{i_field})")
            } else {
                format!("{ur}=dm (0x{offset:x},i{i_field}){suffix}")
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Lowercase register name helpers
// ---------------------------------------------------------------------------

/// Convert a ureg code to a lowercase register name.
///
/// Uses the standard SHARC+ universal-register encoding:
///   - group 0: R0-R15     group 1: I0-I15   group 2: M0-M15
///   - group 3: L0-L15     group 4: B0-B15   group 5: S0-S15
///   - groups 6-7: system registers (FADDR, PC, MODE1, etc.)
fn ureg_name_lower(code: u32) -> String {
    let group = (code >> 4) & 0xF;
    let reg = code & 0xF;
    match group {
        0x0 => format!("r{reg}"),
        0x1 => format!("i{reg}"),
        0x2 => format!("m{reg}"),
        0x3 => format!("l{reg}"),
        0x4 => format!("b{reg}"),
        0x5 => format!("s{reg}"),
        // Groups 6-7: the 32-bit VISA ureg encoding differs from the 48-bit ISA.
        // Known mapping.
        0x6 => visa_ureg_group6(reg),
        0x7 => visa_ureg_group7(reg),
        0x8 => match reg {
            0x0 => "ustat1".into(),
            0x1 => "ustat2".into(),
            0x2 => "ustat3".into(),
            0x3 => "ustat4".into(),
            _ => format!("ureg(0x{code:02x})"),
        },
        0x9 => match reg {
            0x0 => "tperiod".into(),
            0x1 => "tcount".into(),
            _ => format!("ureg(0x{code:02x})"),
        },
        _ => format!("ureg(0x{code:02x})"),
    }
}

/// Lowercase condition name.
fn cond_name_lower(code: u16) -> String {
    match code & 0x1F {
        0 => "eq".into(),
        1 => "lt".into(),
        2 => "le".into(),
        3 => "ac".into(),
        4 => "av".into(),
        5 => "mv".into(),
        6 => "ms".into(),
        7 => "sv".into(),
        8 => "sz".into(),
        9 => "flag0_in".into(),
        10 => "flag1_in".into(),
        11 => "flag2_in".into(),
        12 => "flag3_in".into(),
        13 => "tf".into(),
        14 => "bm".into(),
        15 => "not lce".into(),
        16 => "ne".into(),
        17 => "ge".into(),
        18 => "gt".into(),
        19 => "not ac".into(),
        20 => "not av".into(),
        21 => "not mv".into(),
        22 => "not ms".into(),
        23 => "not sv".into(),
        24 => "not sz".into(),
        25 => "not flag0_in".into(),
        26 => "not flag1_in".into(),
        27 => "not flag2_in".into(),
        28 => "not flag3_in".into(),
        29 => "not tf".into(),
        30 => "nbm".into(),
        31 => "true".into(),
        _ => format!("cond({code})"),
    }
}

/// Group 6 system register names in the 32-bit VISA ureg encoding.
///
/// The 32-bit encoding differs from the 48-bit ISA: PCSTKP is absent and
/// registers from PCSTK onward are renumbered. PX registers use compact
/// (gap-free) indices starting at 0xB.
fn visa_ureg_group6(reg: u32) -> String {
    match reg {
        0x0 => "faddr".into(),
        0x1 => "daddr".into(),
        0x2 => "pc".into(),
        0x3 => "pcstk".into(),
        0x4 => "pcstk".into(),    // 0x64 -> pcstk
        0x5 => "laddr".into(),
        0x6 => "laddr".into(),    // 0x66 -> laddr
        0x7 => "curlcntr".into(), // 0x67 -> curlcntr
        0x8 => "lcntr".into(),
        0x9 => "emuclk".into(),   // 0x69 -> emuclk (via source encoding)
        0xA => "emuclk2".into(),
        0xB => "px".into(),       // 0x6B -> px
        0xC => "px1".into(),
        0xD => "px2".into(),      // 0x6D -> px2
        0xE => "px2".into(),
        _ => format!("ureg(0x{:02x})", 0x60 | reg),
    }
}

/// Group 7 system register names in the 32-bit VISA ureg encoding.
///
/// The 32-bit encoding shifts MODE1/MODE2 up by 2 positions relative to the
/// 48-bit ISA encoding.
fn visa_ureg_group7(reg: u32) -> String {
    match reg {
        0x0 => "mode1".into(),
        0x1 => "mode2".into(),
        0x2 => "mode1".into(),    // 0x72 -> mode1
        0x3 => "mode2".into(),
        0x4 => "flags".into(),
        0x5 => "astatx".into(),
        0x6 => "astaty".into(),
        0x7 => "stkyx".into(),
        0x8 => "stkyy".into(),
        0x9 => "irptl".into(),
        0xA => "imask".into(),
        0xB => "imaskp".into(),
        0xC => "lrptl".into(),
        0xD => "mode1stk".into(), // 0x7D -> mode1stk
        _ => format!("ureg(0x{:02x})", 0x70 | reg),
    }
}
