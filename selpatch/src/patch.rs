// SPDX-License-Identifier: GPL-3.0
// patch.rs --- Core ELF section extract and replace logic
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};
use selelf::elf;

/// Find a section by name and return its raw bytes.
pub fn extract_section(elf_data: &[u8], section_name: &str) -> Result<Vec<u8>> {
    let (_, shdr) = find_section(elf_data, section_name)?;
    let off = shdr.sh_offset as usize;
    let sz = shdr.sh_size as usize;
    if off + sz > elf_data.len() {
        return Err(Error::Shared(selelf::error::Error::InvalidElf(
            "section data out of bounds".into(),
        )));
    }
    Ok(elf_data[off..off + sz].to_vec())
}

/// Replace a section's content with `new_data`, adjusting all offsets.
/// Returns the modified ELF as a new byte vector.
pub fn replace_section(elf_data: &[u8], section_name: &str, new_data: &[u8]) -> Result<Vec<u8>> {
    let hdr = elf::parse_header(elf_data)?;
    let e = hdr.ei_data;
    let shent = hdr.e_shentsize as usize;

    let (target_idx, target_shdr) = find_section(elf_data, section_name)?;
    let old_off = target_shdr.sh_offset as usize;
    let old_sz = target_shdr.sh_size as usize;
    let new_sz = new_data.len();
    let delta = new_sz as i64 - old_sz as i64;

    // Build the output by splicing: everything before the section data,
    // the new section data, then everything after.
    let mut out = Vec::with_capacity((elf_data.len() as i64 + delta) as usize);
    out.extend_from_slice(&elf_data[..old_off]);
    out.extend_from_slice(new_data);
    out.extend_from_slice(&elf_data[old_off + old_sz..]);

    // Compute the adjusted section header table offset.
    let sh_table_off = if (hdr.e_shoff as usize) > old_off {
        ((hdr.e_shoff as i64) + delta) as usize
    } else {
        hdr.e_shoff as usize
    };

    // Update e_shoff in the ELF header if it comes after the target section.
    if (hdr.e_shoff as usize) > old_off {
        let new_shoff = ((hdr.e_shoff as i64) + delta) as u32;
        let bytes = e.write_u32(new_shoff);
        out[32..36].copy_from_slice(&bytes);
    }

    // Update e_phoff in the ELF header if it comes after the target section.
    if hdr.e_phoff > 0 && (hdr.e_phoff as usize) > old_off {
        let new_phoff = ((hdr.e_phoff as i64) + delta) as u32;
        let bytes = e.write_u32(new_phoff);
        out[28..32].copy_from_slice(&bytes);
    }

    // Update each section header.
    for i in 0..hdr.e_shnum as usize {
        let shdr_off = sh_table_off + i * shent;
        if shdr_off + shent > out.len() {
            break;
        }

        if i == target_idx {
            // Update sh_size for the target section.
            let bytes = e.write_u32(new_sz as u32);
            out[shdr_off + 20..shdr_off + 24].copy_from_slice(&bytes);
        } else {
            // Adjust sh_offset for sections that come after the target data.
            let sec_off = e.read_u32(&out[shdr_off + 16..]) as usize;
            if sec_off > old_off {
                let new_off = ((sec_off as i64) + delta) as u32;
                let bytes = e.write_u32(new_off);
                out[shdr_off + 16..shdr_off + 20].copy_from_slice(&bytes);
            }
        }
    }

    // Update program headers if present.
    let ph_off = if hdr.e_phoff > 0 && (hdr.e_phoff as usize) > old_off {
        ((hdr.e_phoff as i64) + delta) as usize
    } else {
        hdr.e_phoff as usize
    };
    let phent = hdr.e_phentsize as usize;
    if hdr.e_phoff > 0 && phent > 0 {
        for i in 0..hdr.e_phnum as usize {
            let phdr_off = ph_off + i * phent;
            if phdr_off + phent > out.len() {
                break;
            }
            let seg_off = e.read_u32(&out[phdr_off + 4..]) as usize;
            if seg_off > old_off {
                let new_seg_off = ((seg_off as i64) + delta) as u32;
                let bytes = e.write_u32(new_seg_off);
                out[phdr_off + 4..phdr_off + 8].copy_from_slice(&bytes);
            }
        }
    }

    Ok(out)
}

/// Convert raw bytes to a hex string (two lowercase hex chars per byte,
/// no separators, no trailing newline).
pub fn bytes_to_hex(data: &[u8]) -> String {
    let mut s = String::with_capacity(data.len() * 2);
    for &b in data {
        s.push(hex_digit(b >> 4));
        s.push(hex_digit(b & 0x0f));
    }
    s
}

fn hex_digit(nibble: u8) -> char {
    match nibble {
        0..=9 => (b'0' + nibble) as char,
        10..=15 => (b'a' + nibble - 10) as char,
        _ => unreachable!(),
    }
}

/// Parse hex text back to bytes. Strips whitespace, then reads pairs
/// of hex digits.
pub fn hex_to_bytes(text: &str) -> Result<Vec<u8>> {
    let clean: String = text.chars().filter(|c| !c.is_whitespace()).collect();
    if !clean.len().is_multiple_of(2) {
        return Err(Error::InvalidHex("odd number of hex characters".into()));
    }
    let mut out = Vec::with_capacity(clean.len() / 2);
    let chars: Vec<u8> = clean.bytes().collect();
    let mut i = 0;
    while i < chars.len() {
        let hi = parse_hex_char(chars[i])?;
        let lo = parse_hex_char(chars[i + 1])?;
        out.push((hi << 4) | lo);
        i += 2;
    }
    Ok(out)
}

fn parse_hex_char(c: u8) -> Result<u8> {
    match c {
        b'0'..=b'9' => Ok(c - b'0'),
        b'a'..=b'f' => Ok(c - b'a' + 10),
        b'A'..=b'F' => Ok(c - b'A' + 10),
        _ => Err(Error::InvalidHex(format!(
            "invalid hex character: '{}'",
            c as char
        ))),
    }
}

/// Find a named section in the ELF, returning its index and parsed header.
fn find_section(elf_data: &[u8], section_name: &str) -> Result<(usize, elf::Elf32Shdr)> {
    let hdr = elf::parse_header(elf_data)?;
    let e = hdr.ei_data;
    let shent = hdr.e_shentsize as usize;
    let shoff = hdr.e_shoff as usize;

    if hdr.e_shnum == 0 || hdr.e_shstrndx == 0 {
        return Err(Error::SectionNotFound(section_name.into()));
    }

    // Load the section name string table.
    let strtab_hdr_off = shoff + hdr.e_shstrndx as usize * shent;
    if strtab_hdr_off + shent > elf_data.len() {
        return Err(Error::SectionNotFound(section_name.into()));
    }
    let strtab_shdr = elf::parse_section_header(&elf_data[strtab_hdr_off..], e);
    let strtab_off = strtab_shdr.sh_offset as usize;
    let strtab_sz = strtab_shdr.sh_size as usize;
    if strtab_off + strtab_sz > elf_data.len() {
        return Err(Error::SectionNotFound(section_name.into()));
    }
    let strtab = &elf_data[strtab_off..strtab_off + strtab_sz];

    for i in 0..hdr.e_shnum as usize {
        let off = shoff + i * shent;
        if off + shent > elf_data.len() {
            break;
        }
        let shdr = elf::parse_section_header(&elf_data[off..], e);
        let name = elf::read_string_at(strtab, shdr.sh_name);
        if name == section_name {
            return Ok((i, shdr));
        }
    }

    Err(Error::SectionNotFound(section_name.into()))
}

#[cfg(test)]
mod tests {
    use super::*;
    use selelf::testutil;

    #[test]
    fn test_extract_text_section() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let data = extract_section(&elf, ".text").unwrap();
        // make_sharc_object creates .text with 4 zero bytes
        assert_eq!(data, vec![0u8; 4]);
    }

    #[test]
    fn test_extract_nonexistent_section() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let result = extract_section(&elf, "nonexistent");
        assert!(result.is_err());
        let msg = format!("{}", result.unwrap_err());
        assert!(msg.contains("nonexistent"));
        assert!(msg.contains("does not exist"));
    }

    #[test]
    fn test_bytes_to_hex() {
        assert_eq!(bytes_to_hex(&[0x00, 0xff, 0xab]), "00ffab");
        assert_eq!(bytes_to_hex(&[]), "");
        assert_eq!(bytes_to_hex(&[0x0a]), "0a");
    }

    #[test]
    fn test_hex_to_bytes() {
        assert_eq!(hex_to_bytes("00ffab").unwrap(), vec![0x00, 0xff, 0xab]);
        assert_eq!(hex_to_bytes("").unwrap(), vec![]);
        assert_eq!(hex_to_bytes("0A").unwrap(), vec![0x0a]);
        // Whitespace stripping
        assert_eq!(hex_to_bytes("00 ff\nab").unwrap(), vec![0x00, 0xff, 0xab]);
    }

    #[test]
    fn test_hex_to_bytes_odd() {
        let result = hex_to_bytes("0ff");
        assert!(result.is_err());
    }

    #[test]
    fn test_hex_to_bytes_invalid_char() {
        let result = hex_to_bytes("0g");
        assert!(result.is_err());
    }

    #[test]
    fn test_hex_roundtrip() {
        let original = vec![0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0];
        let hex = bytes_to_hex(&original);
        let decoded = hex_to_bytes(&hex).unwrap();
        assert_eq!(original, decoded);
    }

    #[test]
    fn test_replace_same_size() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let replacement = vec![0xaa, 0xbb, 0xcc, 0xdd];
        let patched = replace_section(&elf, ".text", &replacement).unwrap();
        let extracted = extract_section(&patched, ".text").unwrap();
        assert_eq!(extracted, replacement);
    }

    #[test]
    fn test_replace_larger() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let replacement = vec![0x11; 16];
        let patched = replace_section(&elf, ".text", &replacement).unwrap();
        let extracted = extract_section(&patched, ".text").unwrap();
        assert_eq!(extracted, replacement);
        // The other sections should still be parseable.
        let shstrtab = extract_section(&patched, ".shstrtab").unwrap();
        assert!(!shstrtab.is_empty());
    }

    #[test]
    fn test_replace_smaller() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let replacement = vec![0x22; 2];
        let patched = replace_section(&elf, ".text", &replacement).unwrap();
        let extracted = extract_section(&patched, ".text").unwrap();
        assert_eq!(extracted, replacement);
    }

    #[test]
    fn test_replace_nonexistent() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let result = replace_section(&elf, "nonexistent", &[0x00]);
        assert!(result.is_err());
    }

    #[test]
    fn test_extract_shstrtab() {
        let elf = testutil::make_sharc_object(&["_main"]);
        let data = extract_section(&elf, ".shstrtab").unwrap();
        // Should contain the section names as null-terminated strings
        let as_str = String::from_utf8_lossy(&data);
        assert!(as_str.contains(".shstrtab"));
        assert!(as_str.contains(".text"));
    }
}
