// SPDX-License-Identifier: GPL-3.0
// hex.rs --- Hex and ASCII dump formatting
// Copyright (c) 2026 Jakob Kastelic

use std::io::{self, Write};

/// Hex + ASCII dump, 16 bytes per line.
///
/// Format: `OFFSET: XXXXXXXX XXXXXXXX XXXXXXXX XXXXXXXX   ASCII...`
/// Bytes are grouped into 4-byte words, 4 groups per line, ASCII after 3 spaces.
pub fn dump_hex_ascii(data: &[u8], base_offset: u32, writer: &mut dyn Write) -> io::Result<()> {
    let bytes_per_line = 16;
    let group_size = 4;
    let groups_per_line = bytes_per_line / group_size;
    for (chunk_idx, chunk) in data.chunks(bytes_per_line).enumerate() {
        let offset = base_offset + (chunk_idx * bytes_per_line) as u32;
        write!(writer, "{offset:08x}: ")?;

        // Hex bytes in 4-byte groups
        for gi in 0..groups_per_line {
            if gi > 0 {
                write!(writer, " ")?;
            }
            let start = gi * group_size;
            if start < chunk.len() {
                let end = (start + group_size).min(chunk.len());
                for &b in &chunk[start..end] {
                    write!(writer, "{b:02x}")?;
                }
                // Pad if partial group
                for _ in 0..(start + group_size - end) {
                    write!(writer, "  ")?;
                }
            } else {
                write!(writer, "        ")?;
            }
        }

        // ASCII after 3 spaces
        write!(writer, "   ")?;
        for &b in chunk {
            if b.is_ascii_graphic() || b == b' ' {
                write!(writer, "{}", b as char)?;
            } else {
                write!(writer, ".")?;
            }
        }
        writeln!(writer)?;
    }
    Ok(())
}

/// Pure hex dump, bytes_per_line bytes per line, group_size bytes per group.
///
/// When bytes_per_line equals group_size, one group is printed per line
/// (matching standard `-nx` default behavior).
pub fn dump_hex(
    data: &[u8],
    base_offset: u32,
    bytes_per_line: usize,
    group_size: usize,
    writer: &mut dyn Write,
) -> io::Result<()> {
    let group_size = if group_size == 0 { 4 } else { group_size };
    let bytes_per_line = if bytes_per_line == 0 {
        group_size
    } else {
        bytes_per_line
    };

    for (chunk_idx, chunk) in data.chunks(bytes_per_line).enumerate() {
        let offset = base_offset + (chunk_idx * bytes_per_line) as u32;
        write!(writer, "{offset:08x}: ")?;

        for (gi, group) in chunk.chunks(group_size).enumerate() {
            if gi > 0 {
                write!(writer, " ")?;
            }
            for &b in group {
                write!(writer, "{b:02x}")?;
            }
        }
        writeln!(writer)?;
    }
    Ok(())
}

/// Hex dump based on entry size (the -t format modifier).
pub fn dump_entry_size(
    data: &[u8],
    base_offset: u32,
    entry_size: usize,
    writer: &mut dyn Write,
) -> io::Result<()> {
    let line_size = if (1..=32).contains(&entry_size) {
        entry_size
    } else {
        32
    };
    dump_hex(data, base_offset, line_size, line_size, writer)
}

/// Hexlet dump.
///
/// Groups bytes into N-byte units and prints them as hex.
/// If `reverse` is true, reverse the byte order within each group.
pub fn dump_hexlet(
    data: &[u8],
    base_offset: u32,
    group_size: usize,
    reverse: bool,
    writer: &mut dyn Write,
) -> io::Result<()> {
    let group_size = if group_size == 0 { 4 } else { group_size };
    // Print one group per line
    for (gi, group) in data.chunks(group_size).enumerate() {
        let offset = base_offset + (gi * group_size) as u32;
        write!(writer, "{offset:08x}: ")?;
        if reverse {
            for &b in group.iter().rev() {
                write!(writer, "{b:02x}")?;
            }
        } else {
            for &b in group {
                write!(writer, "{b:02x}")?;
            }
        }
        writeln!(writer)?;
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_hex_ascii_basic() {
        let data: Vec<u8> = (0..32).collect();
        let mut out = Vec::new();
        dump_hex_ascii(&data, 0, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("00000000:"));
        assert!(s.contains("00000010:"));
        // standard format: 4-byte groups, ASCII after 3 spaces
        assert!(s.contains("00010203 04050607 08090a0b 0c0d0e0f"));
    }

    #[test]
    fn test_hex_ascii_partial_line() {
        let data = vec![0x41, 0x42, 0x43]; // "ABC"
        let mut out = Vec::new();
        dump_hex_ascii(&data, 0x100, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("00000100:"));
        assert!(s.contains("414243"));
        assert!(s.contains("   ABC"));
    }

    #[test]
    fn test_hex_dump_groups() {
        let data: Vec<u8> = (0..8).collect();
        let mut out = Vec::new();
        dump_hex(&data, 0, 8, 4, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("00010203 04050607"), "output was: {s}");
    }

    #[test]
    fn test_hex_dump_group_size_2() {
        let data = vec![0xAA, 0xBB, 0xCC, 0xDD];
        let mut out = Vec::new();
        dump_hex(&data, 0, 4, 2, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("aabb ccdd"), "output was: {s}");
    }

    #[test]
    fn test_hex_dump_default_line_width() {
        // When bytes_per_line=0, defaults to group_size (one group per line)
        let data: Vec<u8> = (0..8).collect();
        let mut out = Vec::new();
        dump_hex(&data, 0, 0, 4, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        let lines: Vec<&str> = s.lines().collect();
        assert_eq!(lines.len(), 2, "one 4-byte group per line; output was: {s}");
    }

    #[test]
    fn test_entry_size_in_range() {
        let data: Vec<u8> = (0..8).collect();
        let mut out = Vec::new();
        dump_entry_size(&data, 0, 4, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        // Should have 2 lines (4 bytes each)
        let lines: Vec<&str> = s.lines().collect();
        assert_eq!(lines.len(), 2);
    }

    #[test]
    fn test_entry_size_out_of_range() {
        let data: Vec<u8> = (0..64).collect();
        let mut out = Vec::new();
        dump_entry_size(&data, 0, 0, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        // out of range -> 32 bytes per line -> 2 lines
        let lines: Vec<&str> = s.lines().collect();
        assert_eq!(lines.len(), 2);
    }

    #[test]
    fn test_hexlet_forward() {
        let data = vec![0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08];
        let mut out = Vec::new();
        dump_hexlet(&data, 0, 4, false, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("01020304"), "output was: {s}");
        assert!(s.contains("05060708"), "output was: {s}");
    }

    #[test]
    fn test_hexlet_reverse() {
        let data = vec![0x01, 0x02, 0x03, 0x04];
        let mut out = Vec::new();
        dump_hexlet(&data, 0, 4, true, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("04030201"), "output was: {s}");
    }

    #[test]
    fn test_hex_ascii_non_printable() {
        let data = vec![0x00, 0x7f, 0x80, 0xff];
        let mut out = Vec::new();
        dump_hex_ascii(&data, 0, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("   ...."));
    }
}
