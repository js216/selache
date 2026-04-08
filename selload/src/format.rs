// SPDX-License-Identifier: GPL-3.0
// format.rs --- Output format writers for boot stream data
// Copyright (c) 2026 Jakob Kastelic

use crate::error::Result;
use std::io::Write;

/// Write raw binary output.
pub fn write_binary(data: &[u8], out: &mut dyn Write) -> Result<()> {
    out.write_all(data)?;
    Ok(())
}

/// Write Intel HEX32 format (type 04 extended linear address + type 00
/// data records + type 01 EOF).
pub fn write_hex(data: &[u8], out: &mut dyn Write) -> Result<()> {
    let mut addr: usize = 0;
    let mut current_upper: u16 = 0;
    let bytes_per_line = 16;

    while addr < data.len() {
        let upper = (addr >> 16) as u16;
        if upper != current_upper {
            write_hex_extended_address(out, upper)?;
            current_upper = upper;
        }

        let remaining = data.len() - addr;
        let count = remaining.min(bytes_per_line);
        let offset = (addr & 0xFFFF) as u16;

        // If this record would cross a 64K boundary, truncate it
        let max_in_segment = 0x10000 - offset as usize;
        let count = count.min(max_in_segment);

        write_hex_data_record(out, offset, &data[addr..addr + count])?;
        addr += count;
    }

    // EOF record
    writeln!(out, ":00000001FF")?;
    Ok(())
}

/// Write a type 04 extended linear address record.
fn write_hex_extended_address(out: &mut dyn Write, upper: u16) -> Result<()> {
    let bytes = upper.to_be_bytes();
    let checksum = ext_addr_checksum(bytes[0], bytes[1]);
    writeln!(out, ":02000004{:02X}{:02X}{:02X}", bytes[0], bytes[1], checksum)?;
    Ok(())
}

/// Compute checksum for a type 04 record with the given upper address bytes.
fn ext_addr_checksum(hi: u8, lo: u8) -> u8 {
    let sum: u16 = 0x02 + 0x04 + u16::from(hi) + u16::from(lo);
    0u8.wrapping_sub(sum as u8)
}

/// Write a type 00 data record.
fn write_hex_data_record(out: &mut dyn Write, offset: u16, data: &[u8]) -> Result<()> {
    let count = data.len() as u8;
    let off_bytes = offset.to_be_bytes();

    let mut sum: u16 = u16::from(count)
        + u16::from(off_bytes[0])
        + u16::from(off_bytes[1]);

    write!(out, ":{:02X}{:02X}{:02X}00", count, off_bytes[0], off_bytes[1])?;
    for &byte in data {
        write!(out, "{:02X}", byte)?;
        sum += u16::from(byte);
    }
    let checksum = 0u8.wrapping_sub(sum as u8);
    writeln!(out, "{:02X}", checksum)?;
    Ok(())
}

/// Write one hex byte per line (ASCII format).
pub fn write_ascii(data: &[u8], out: &mut dyn Write) -> Result<()> {
    for &byte in data {
        writeln!(out, "{:02X}", byte)?;
    }
    Ok(())
}

/// Write comma-separated hex values suitable for a C include file.
pub fn write_include(data: &[u8], out: &mut dyn Write) -> Result<()> {
    let values_per_line = 16;
    for (i, &byte) in data.iter().enumerate() {
        if i > 0 {
            write!(out, ",")?;
            if i % values_per_line == 0 {
                writeln!(out)?;
            } else {
                write!(out, " ")?;
            }
        }
        write!(out, "0x{:02X}", byte)?;
    }
    if !data.is_empty() {
        writeln!(out)?;
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_write_binary() {
        let data = vec![0x01, 0x02, 0x03];
        let mut out = Vec::new();
        write_binary(&data, &mut out).unwrap();
        assert_eq!(out, data);
    }

    #[test]
    fn test_write_ascii() {
        let data = vec![0xAB, 0xCD, 0x00];
        let mut out = Vec::new();
        write_ascii(&data, &mut out).unwrap();
        let text = String::from_utf8(out).unwrap();
        assert_eq!(text, "AB\nCD\n00\n");
    }

    #[test]
    fn test_write_include() {
        let data = vec![0x01, 0x02, 0x03];
        let mut out = Vec::new();
        write_include(&data, &mut out).unwrap();
        let text = String::from_utf8(out).unwrap();
        assert_eq!(text, "0x01, 0x02, 0x03\n");
    }

    #[test]
    fn test_write_include_wrapping() {
        let data: Vec<u8> = (0..20).collect();
        let mut out = Vec::new();
        write_include(&data, &mut out).unwrap();
        let text = String::from_utf8(out).unwrap();
        // Should wrap after 16 values
        assert!(text.contains('\n'));
        let lines: Vec<&str> = text.trim_end().split('\n').collect();
        assert_eq!(lines.len(), 2);
    }

    #[test]
    fn test_write_hex_simple() {
        let data = vec![0x01, 0x02, 0x03, 0x04];
        let mut out = Vec::new();
        write_hex(&data, &mut out).unwrap();
        let text = String::from_utf8(out).unwrap();
        let lines: Vec<&str> = text.lines().collect();
        // One data record + EOF
        assert_eq!(lines.len(), 2);
        assert!(lines[0].starts_with(":04000000"));
        assert_eq!(lines[1], ":00000001FF");
    }

    #[test]
    fn test_write_hex_eof_only() {
        let data: Vec<u8> = Vec::new();
        let mut out = Vec::new();
        write_hex(&data, &mut out).unwrap();
        let text = String::from_utf8(out).unwrap();
        assert_eq!(text.trim(), ":00000001FF");
    }

    #[test]
    fn test_hex_record_checksum() {
        // count=3, addr=0000, type=00, data=01 02 03
        // sum = 03+00+00+01+02+03 = 09 (type 00 not in our sum)
        // checksum = -09 mod 256 = 0xF7
        let data = vec![0x01, 0x02, 0x03];
        let mut out = Vec::new();
        write_hex_data_record(&mut out, 0x0000, &data).unwrap();
        let text = String::from_utf8(out).unwrap();
        assert_eq!(text.trim(), ":03000000010203F7");
    }

    #[test]
    fn test_hex_extended_address() {
        let mut out = Vec::new();
        write_hex_extended_address(&mut out, 0x0001).unwrap();
        let text = String::from_utf8(out).unwrap();
        // :02000004 0001 checksum
        // sum = 02+00+00+04+00+01 = 07, checksum = -07 = F9
        assert_eq!(text.trim(), ":020000040001F9");
    }

    #[test]
    fn test_write_binary_empty() {
        let mut out = Vec::new();
        write_binary(&[], &mut out).unwrap();
        assert!(out.is_empty());
    }

    #[test]
    fn test_write_ascii_empty() {
        let mut out = Vec::new();
        write_ascii(&[], &mut out).unwrap();
        assert!(out.is_empty());
    }

    #[test]
    fn test_write_include_empty() {
        let mut out = Vec::new();
        write_include(&[], &mut out).unwrap();
        assert!(out.is_empty());
    }
}
