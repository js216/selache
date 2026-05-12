// SPDX-License-Identifier: GPL-3.0
// extnames.rs --- Extended names table for long archive member names
// Copyright (c) 2026 Jakob Kastelic

//! Extended names table (`//` member) for long archive member names.
//!
//! Names longer than 15 characters are stored in this table,
//! delimited by `\n`. Members reference their name via `/offset`
//! in the ar_name field.

/// Parse extended names table bytes into a list of (offset, name) pairs.
pub fn parse(data: &[u8]) -> Vec<(usize, String)> {
    let mut result = Vec::new();
    let mut offset = 0;
    let text = String::from_utf8_lossy(data);
    for name in text.split('\n') {
        if !name.is_empty() {
            result.push((offset, name.to_string()));
        }
        offset += name.len() + 1; // +1 for the '\n'
    }
    result
}

/// Look up a name by offset in the extended names table.
pub fn lookup(data: &[u8], offset: usize) -> Option<String> {
    if offset >= data.len() {
        return None;
    }
    let end = data[offset..]
        .iter()
        .position(|&b| b == b'\n')
        .map(|p| offset + p)
        .unwrap_or(data.len());
    Some(String::from_utf8_lossy(&data[offset..end]).to_string())
}

/// Result of building an extended names table.
pub struct ExtNamesTable {
    /// Raw bytes of the `//` member content.
    pub data: Vec<u8>,
    /// Per-member: `None` if the name fits inline, `Some(offset)` if it
    /// needs an extended name reference.
    pub offsets: Vec<Option<usize>>,
}

/// Maximum length of a name that fits inline in ar_name (name + `/` + padding).
pub const MAX_INLINE_NAME: usize = 15;

/// Build an extended names table from a list of member names.
pub fn build(names: &[&str]) -> ExtNamesTable {
    let mut data = Vec::new();
    let mut offsets = Vec::with_capacity(names.len());

    for &name in names {
        if name.len() > MAX_INLINE_NAME {
            let offset = data.len();
            offsets.push(Some(offset));
            data.extend_from_slice(name.as_bytes());
            data.push(b'\n');
        } else {
            offsets.push(None);
        }
    }

    ExtNamesTable { data, offsets }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_extnames() {
        let raw = b"very_long_name_one.doj\nanother_long_name_two.doj\nthird_long_name.doj\n";
        let entries = parse(raw);
        assert_eq!(entries.len(), 3);
        assert_eq!(entries[0].0, 0);
        assert_eq!(entries[0].1, "very_long_name_one.doj");
        assert_eq!(entries[1].0, 23);
        assert_eq!(entries[1].1, "another_long_name_two.doj");
        assert_eq!(entries[2].0, 49);
        assert_eq!(entries[2].1, "third_long_name.doj");
    }

    #[test]
    fn test_build_extnames() {
        let names = vec!["short.doj", "very_long_member_name.doj", "a.doj"];
        let table = build(&names);
        assert_eq!(table.offsets[0], None); // short name
        assert_eq!(table.offsets[1], Some(0)); // long name at offset 0
        assert_eq!(table.offsets[2], None); // short name
                                            // Verify delimiter
        assert!(table.data.contains(&b'\n'));
        let parsed = lookup(&table.data, 0).unwrap();
        assert_eq!(parsed, "very_long_member_name.doj");
    }

    #[test]
    fn test_short_names_no_extnames() {
        let names = vec!["a.doj", "b.doj", "short.doj"];
        let table = build(&names);
        assert!(table.data.is_empty());
        assert!(table.offsets.iter().all(|o| o.is_none()));
    }

    #[test]
    fn test_roundtrip_extnames() {
        let names = vec![
            "short.doj",
            "a_very_long_member_name_here.doj",
            "another_lengthy_filename.doj",
            "tiny.doj",
        ];
        let table = build(&names);
        // Verify all long names round-trip
        for (i, &name) in names.iter().enumerate() {
            if let Some(offset) = table.offsets[i] {
                let recovered = lookup(&table.data, offset).unwrap();
                assert_eq!(recovered, name);
            } else {
                assert!(name.len() <= MAX_INLINE_NAME);
            }
        }
    }
}
