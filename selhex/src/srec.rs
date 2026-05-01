// SPDX-License-Identifier: GPL-3.0
// srec.rs --- Motorola S-record format writer
// Copyright (c) 2026 Jakob Kastelic

use std::io::Write;

use crate::error::Result;
use crate::ihex::DataRecord;

/// Maximum data bytes per S-record line.
const MAX_DATA_PER_LINE: usize = 32;

/// Address width determines the S-record variant (S1/S2/S3).
#[derive(Clone, Copy)]
enum AddrWidth {
    Two,
    Three,
    Four,
}

impl AddrWidth {
    fn data_tag(self) -> &'static [u8; 2] {
        match self {
            AddrWidth::Two => b"S1",
            AddrWidth::Three => b"S2",
            AddrWidth::Four => b"S3",
        }
    }

    fn end_tag(self) -> &'static [u8; 2] {
        match self {
            AddrWidth::Two => b"S9",
            AddrWidth::Three => b"S8",
            AddrWidth::Four => b"S7",
        }
    }

    fn encode(self, addr: u32, buf: &mut [u8; 4]) -> &[u8] {
        match self {
            AddrWidth::Two => {
                let a = (addr as u16).to_be_bytes();
                buf[..2].copy_from_slice(&a);
                &buf[..2]
            }
            AddrWidth::Three => {
                buf[0] = (addr >> 16) as u8;
                buf[1] = (addr >> 8) as u8;
                buf[2] = addr as u8;
                &buf[..3]
            }
            AddrWidth::Four => {
                *buf = addr.to_be_bytes();
                &buf[..4]
            }
        }
    }
}

/// Write data records in Motorola S1 format (16-bit addresses).
pub fn write_s1(records: &[DataRecord], w: &mut dyn Write) -> Result<()> {
    write_srec(records, w, AddrWidth::Two)
}

/// Write data records in Motorola S2 format (24-bit addresses).
pub fn write_s2(records: &[DataRecord], w: &mut dyn Write) -> Result<()> {
    write_srec(records, w, AddrWidth::Three)
}

/// Write data records in Motorola S3 format (32-bit addresses).
pub fn write_s3(records: &[DataRecord], w: &mut dyn Write) -> Result<()> {
    write_srec(records, w, AddrWidth::Four)
}

fn write_srec(records: &[DataRecord], w: &mut dyn Write, width: AddrWidth) -> Result<()> {
    write_header(w)?;

    let mut addr_buf = [0u8; 4];
    for record in records {
        let mut offset: u32 = 0;
        for chunk in record.data.chunks(MAX_DATA_PER_LINE) {
            let addr = record.address.wrapping_add(offset);
            let addr_bytes = width.encode(addr, &mut addr_buf);
            write_line(w, width.data_tag(), addr_bytes, chunk)?;
            offset += chunk.len() as u32;
        }
    }

    let zero_addr = width.encode(0, &mut addr_buf);
    write_line(w, width.end_tag(), zero_addr, &[])?;
    Ok(())
}

/// Write an S0 header record.
fn write_header(w: &mut dyn Write) -> Result<()> {
    write_line(w, b"S0", &[0x00, 0x00], &[])?;
    Ok(())
}

/// Write a single S-record line: TTLLAAAA[DD...]CC
fn write_line(
    w: &mut dyn Write,
    record_type: &[u8; 2],
    addr_bytes: &[u8],
    data: &[u8],
) -> Result<()> {
    let byte_count: u8 = (addr_bytes.len() + data.len() + 1) as u8;

    let mut sum: u8 = byte_count;
    for &b in addr_bytes {
        sum = sum.wrapping_add(b);
    }
    for &b in data {
        sum = sum.wrapping_add(b);
    }
    let checksum = !sum;

    w.write_all(record_type)?;
    write!(w, "{byte_count:02X}")?;
    for &b in addr_bytes {
        write!(w, "{b:02X}")?;
    }
    for &b in data {
        write!(w, "{b:02X}")?;
    }
    writeln!(w, "{checksum:02X}")?;

    Ok(())
}

/// Write raw binary data (StripHex mode).
///
/// Records are sorted by address. Gaps between records are filled with 0xFF.
pub fn write_binary(records: &[DataRecord], w: &mut dyn Write) -> Result<()> {
    if records.is_empty() {
        return Ok(());
    }

    let mut sorted: Vec<&DataRecord> = records.iter().collect();
    sorted.sort_by_key(|r| r.address);

    let mut current_addr = sorted[0].address;
    let fill_byte = [0xFFu8];

    for record in &sorted {
        if record.address > current_addr {
            let gap = (record.address - current_addr) as usize;
            for _ in 0..gap {
                w.write_all(&fill_byte)?;
            }
        }
        w.write_all(&record.data)?;
        current_addr = record.address + record.data.len() as u32;
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_record(address: u32, data: &[u8]) -> DataRecord {
        DataRecord {
            address,
            data: data.to_vec(),
        }
    }

    #[test]
    fn test_s3_simple() {
        let records = vec![make_record(0x00010000, &[0xDE, 0xAD, 0xBE, 0xEF])];
        let mut buf = Vec::new();
        write_s3(&records, &mut buf).unwrap();
        let output = String::from_utf8(buf).unwrap();
        let lines: Vec<&str> = output.lines().collect();

        assert!(lines[0].starts_with("S0"));
        assert!(lines[1].starts_with("S3"));
        assert!(lines[2].starts_with("S7"));

        // byte_count=09, addr=00010000, data=DEADBEEF
        // sum = 09+00+01+00+00+DE+AD+BE+EF = 0x342, low=0x42, cksum=0xBD
        assert_eq!(&lines[1][..2], "S3");
        assert!(lines[1].starts_with("S30900010000DEADBEEFBD"));
    }

    #[test]
    fn test_s1_simple() {
        let records = vec![make_record(0x0100, &[0xAA, 0xBB])];
        let mut buf = Vec::new();
        write_s1(&records, &mut buf).unwrap();
        let output = String::from_utf8(buf).unwrap();
        let lines: Vec<&str> = output.lines().collect();

        assert!(lines[0].starts_with("S0"));
        assert!(lines[1].starts_with("S1"));
        assert!(lines[2].starts_with("S9"));

        // byte_count=05, addr=0100, data=AABB
        // sum = 05+01+00+AA+BB = 0x16B, low=0x6B, cksum=0x94
        assert!(lines[1].starts_with("S1050100AABB94"));
    }

    #[test]
    fn test_s2_simple() {
        let records = vec![make_record(0x010203, &[0xFF])];
        let mut buf = Vec::new();
        write_s2(&records, &mut buf).unwrap();
        let output = String::from_utf8(buf).unwrap();
        let lines: Vec<&str> = output.lines().collect();

        assert!(lines[0].starts_with("S0"));
        assert!(lines[1].starts_with("S2"));
        assert!(lines[2].starts_with("S8"));

        // byte_count=05, addr=010203, data=FF
        // sum = 05+01+02+03+FF = 0x10A, low=0x0A, cksum=0xF5
        assert!(lines[1].starts_with("S205010203FFF5"));
    }

    #[test]
    fn test_s0_header_checksum() {
        let records = vec![make_record(0, &[0x42])];
        let mut buf = Vec::new();
        write_s3(&records, &mut buf).unwrap();
        let output = String::from_utf8(buf).unwrap();
        let s0 = output.lines().next().unwrap();

        // byte_count=03, addr=0000, sum=03, cksum=FC
        assert_eq!(s0, "S0030000FC");
    }

    #[test]
    fn test_s7_termination_checksum() {
        let records = vec![make_record(0, &[0x42])];
        let mut buf = Vec::new();
        write_s3(&records, &mut buf).unwrap();
        let output = String::from_utf8(buf).unwrap();
        let last = output.lines().last().unwrap();

        // byte_count=05, addr=00000000, sum=05, cksum=FA
        assert_eq!(last, "S70500000000FA");
    }

    #[test]
    fn test_binary_simple() {
        let records = vec![make_record(0, &[0xAA, 0xBB, 0xCC])];
        let mut buf = Vec::new();
        write_binary(&records, &mut buf).unwrap();
        assert_eq!(buf, vec![0xAA, 0xBB, 0xCC]);
    }

    #[test]
    fn test_binary_with_gap() {
        let records = vec![make_record(0, &[0xAA]), make_record(3, &[0xBB])];
        let mut buf = Vec::new();
        write_binary(&records, &mut buf).unwrap();
        assert_eq!(buf, vec![0xAA, 0xFF, 0xFF, 0xBB]);
    }

    #[test]
    fn test_binary_empty() {
        let records: Vec<DataRecord> = vec![];
        let mut buf = Vec::new();
        write_binary(&records, &mut buf).unwrap();
        assert!(buf.is_empty());
    }

    #[test]
    fn test_large_data_splits_lines() {
        let data: Vec<u8> = (0..64).collect();
        let records = vec![make_record(0, &data)];
        let mut buf = Vec::new();
        write_s3(&records, &mut buf).unwrap();
        let output = String::from_utf8(buf).unwrap();
        let s3_lines: Vec<&str> = output.lines().filter(|l| l.starts_with("S3")).collect();
        assert_eq!(s3_lines.len(), 2);
    }
}
