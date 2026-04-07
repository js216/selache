// SPDX-License-Identifier: GPL-3.0
// symindex.rs --- Archive symbol index serialization
// Copyright (c) 2026 Jakob Kastelic

use crate::elf;
use crate::error::Result;

/// An entry in the symbol index: symbol name + archive offset of the member.
pub struct SymEntry {
    pub name: String,
    pub offset: u32,
}

/// Build the symbol index from archive members.
///
/// `members` is a list of `(member_data, archive_offset)` pairs.
/// Returns the raw bytes of the `/` member content.
pub fn build(members: &[(&[u8], u32)]) -> Result<Vec<u8>> {
    let mut entries: Vec<SymEntry> = Vec::new();

    for &(data, offset) in members {
        let symbols = elf::extract_global_symbols(data)?;
        for name in symbols {
            entries.push(SymEntry { name, offset });
        }
    }

    serialize(&entries)
}

/// Serialize symbol index entries into the `/` member format.
///
/// Format: 4-byte LE count, count * 4-byte LE offsets, then null-terminated names.
pub fn serialize(entries: &[SymEntry]) -> Result<Vec<u8>> {
    let count = entries.len() as u32;
    let mut out = Vec::new();

    // 4-byte LE count
    out.extend_from_slice(&count.to_le_bytes());

    // count * 4-byte LE offsets
    for entry in entries {
        out.extend_from_slice(&entry.offset.to_le_bytes());
    }

    // Null-terminated name strings
    for entry in entries {
        out.extend_from_slice(entry.name.as_bytes());
        out.push(0);
    }

    Ok(out)
}

/// Parse a symbol index (the `/` member content).
/// Returns a list of (symbol_name, archive_offset) pairs.
pub fn parse(data: &[u8]) -> Result<Vec<(String, u32)>> {
    if data.len() < 4 {
        return Ok(Vec::new());
    }

    let count = u32::from_le_bytes([data[0], data[1], data[2], data[3]]) as usize;
    let offsets_end = 4 + count * 4;
    if offsets_end > data.len() {
        return Ok(Vec::new());
    }

    let mut offsets = Vec::with_capacity(count);
    for i in 0..count {
        let base = 4 + i * 4;
        let offset =
            u32::from_le_bytes([data[base], data[base + 1], data[base + 2], data[base + 3]]);
        offsets.push(offset);
    }

    // Parse null-terminated strings
    let strtab = &data[offsets_end..];
    let mut names = Vec::with_capacity(count);
    let mut pos = 0;
    for _ in 0..count {
        let end = strtab[pos..]
            .iter()
            .position(|&b| b == 0)
            .map(|p| pos + p)
            .unwrap_or(strtab.len());
        names.push(String::from_utf8_lossy(&strtab[pos..end]).to_string());
        pos = end + 1;
    }

    Ok(offsets.into_iter().zip(names).map(|(o, n)| (n, o)).collect())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::testutil;

    #[test]
    fn test_build_symbol_index() {
        let obj1 = testutil::make_sharc_object(&["_main", "_init"]);
        let obj2 = testutil::make_sharc_object(&["_process"]);
        let obj3 = testutil::make_sharc_object(&["_cleanup", "_shutdown"]);

        let members: Vec<(&[u8], u32)> =
            vec![(&obj1, 1000), (&obj2, 2000), (&obj3, 3000)];
        let index_data = build(&members).unwrap();
        let parsed = parse(&index_data).unwrap();

        assert_eq!(parsed.len(), 5);
        let names: Vec<&str> = parsed.iter().map(|(n, _)| n.as_str()).collect();
        assert!(names.contains(&"_main"));
        assert!(names.contains(&"_init"));
        assert!(names.contains(&"_process"));
        assert!(names.contains(&"_cleanup"));
        assert!(names.contains(&"_shutdown"));

        // Verify offsets
        for (name, offset) in &parsed {
            match name.as_str() {
                "_main" | "_init" => assert_eq!(*offset, 1000),
                "_process" => assert_eq!(*offset, 2000),
                "_cleanup" | "_shutdown" => assert_eq!(*offset, 3000),
                _ => panic!("unexpected symbol: {name}"),
            }
        }
    }

    #[test]
    fn test_offsets_little_endian() {
        let obj = testutil::make_sharc_object(&["_test"]);
        let members: Vec<(&[u8], u32)> = vec![(&obj, 0x12345678)];
        let data = build(&members).unwrap();
        // First 4 bytes: count = 1 (LE)
        assert_eq!(&data[0..4], &[1, 0, 0, 0]);
        // Next 4 bytes: offset = 0x12345678 (LE)
        assert_eq!(&data[4..8], &[0x78, 0x56, 0x34, 0x12]);
    }

    #[test]
    fn test_empty_archive() {
        let members: Vec<(&[u8], u32)> = vec![];
        let data = build(&members).unwrap();
        assert_eq!(&data[0..4], &[0, 0, 0, 0]); // count = 0
        assert_eq!(data.len(), 4);
    }
}
