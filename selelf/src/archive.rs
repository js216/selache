// SPDX-License-Identifier: GPL-3.0
// archive.rs --- ELF archive (.dlb) reading and writing
// Copyright (c) 2026 Jakob Kastelic

use std::fs;
use std::path::Path;

use crate::error::{Error, Result};
use crate::extnames;
use crate::version::{self, VersionInfo};

pub const ELFA_MAGIC: &[u8; 8] = b"!<elfa>\n";
pub const MEMBER_HDR_SIZE: usize = 60;
const AR_FMAG: &[u8; 2] = b"`\n";

/// A member in the archive (an object file).
#[derive(Debug, Clone)]
pub struct Member {
    pub name: String,
    pub timestamp: u64,
    pub uid: u32,
    pub gid: u32,
    pub mode: u32,
    pub data: Vec<u8>,
}

/// A parsed archive.
#[derive(Debug, Clone, Default)]
pub struct Archive {
    pub members: Vec<Member>,
    pub version_info: VersionInfo,
}

impl Archive {
    pub fn new() -> Self {
        Self::default()
    }
}

/// Read an archive from bytes.
pub fn read(data: &[u8]) -> Result<Archive> {
    if data.len() < 8 || &data[0..8] != ELFA_MAGIC {
        return Err(Error::InvalidMagic);
    }

    let mut pos = 8;
    let mut archive = Archive::new();
    let mut extnames_data: Vec<u8> = Vec::new();

    while pos + MEMBER_HDR_SIZE <= data.len() {
        // Align to even boundary
        if pos % 2 != 0 {
            pos += 1;
        }
        if pos + MEMBER_HDR_SIZE > data.len() {
            break;
        }

        let hdr = &data[pos..pos + MEMBER_HDR_SIZE];
        // Validate fmag
        if &hdr[58..60] != AR_FMAG {
            return Err(Error::InvalidMemberHeader);
        }

        let raw_name = &hdr[0..16];
        let raw_size = &hdr[48..58];
        let raw_date = &hdr[16..28];
        let raw_uid = &hdr[28..34];
        let raw_gid = &hdr[34..40];
        let raw_mode = &hdr[40..48];

        let size = parse_decimal(raw_size) as usize;
        let timestamp = parse_decimal(raw_date);
        let uid = parse_decimal(raw_uid) as u32;
        let gid = parse_decimal(raw_gid) as u32;
        let mode = parse_octal(raw_mode) as u32;

        let content_start = pos + MEMBER_HDR_SIZE;
        let content_end = content_start + size;
        if content_end > data.len() {
            break;
        }
        let content = &data[content_start..content_end];

        let name_str = std::str::from_utf8(raw_name)
            .unwrap_or("")
            .trim_end();

        if name_str == "/" {
            // Symbol table - skip (we rebuild it on write)
            pos = content_end;
            continue;
        }

        if name_str == "//" {
            // Extended names table
            extnames_data = content.to_vec();
            pos = content_end;
            continue;
        }

        // Resolve member name
        let name = resolve_name(name_str, &extnames_data);

        if name == "__version.doj" {
            // Parse version info
            if let Ok(info) = version::parse_version_elf(content) {
                archive.version_info = info;
            }
            pos = content_end;
            continue;
        }

        archive.members.push(Member {
            name,
            timestamp,
            uid,
            gid,
            mode,
            data: content.to_vec(),
        });

        pos = content_end;
    }

    Ok(archive)
}

/// Read an archive from a file path.
pub fn read_file(path: &Path) -> Result<Archive> {
    let data = fs::read(path)?;
    read(&data)
}

/// Resolve a member name from the ar_name field, using the extended names table if needed.
fn resolve_name(raw: &str, extnames_data: &[u8]) -> String {
    let trimmed = raw.trim_end();
    if let Some(rest) = trimmed.strip_prefix('/') {
        // Extended name reference: /offset
        if let Ok(offset) = rest.parse::<usize>() {
            if let Some(name) = extnames::lookup(extnames_data, offset) {
                return name;
            }
        }
    }
    // Inline name: strip trailing '/'
    trimmed.strip_suffix('/').unwrap_or(trimmed).to_string()
}

fn parse_decimal(field: &[u8]) -> u64 {
    let s = std::str::from_utf8(field).unwrap_or("").trim();
    s.parse::<u64>().unwrap_or(0)
}

fn parse_octal(field: &[u8]) -> u64 {
    let s = std::str::from_utf8(field).unwrap_or("").trim();
    u64::from_str_radix(s, 8).unwrap_or(0)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::testutil;

    #[test]
    fn test_read_magic_valid() {
        let data = testutil::make_archive_bytes(&[]);
        let archive = read(&data).unwrap();
        assert!(archive.members.is_empty());
    }

    #[test]
    fn test_read_magic_invalid() {
        let mut data = b"!<arch>\n".to_vec();
        data.extend_from_slice(&[0u8; 100]);
        assert!(matches!(read(&data), Err(Error::InvalidMagic)));
    }

    #[test]
    fn test_read_synthetic_archive() {
        let obj1 = testutil::make_sharc_object(&["_main"]);
        let obj2 = testutil::make_sharc_object(&["_helper"]);
        let obj3 = testutil::make_sharc_object(&["_util"]);

        let data = testutil::make_archive_bytes(&[
            ("main.doj", &obj1),
            ("helper.doj", &obj2),
            ("util.doj", &obj3),
        ]);
        let archive = read(&data).unwrap();
        assert_eq!(archive.members.len(), 3);
        assert_eq!(archive.members[0].name, "main.doj");
        assert_eq!(archive.members[1].name, "helper.doj");
        assert_eq!(archive.members[2].name, "util.doj");
        assert_eq!(archive.members[0].data, obj1);
        assert_eq!(archive.members[1].data, obj2);
        assert_eq!(archive.members[2].data, obj3);
    }
}
