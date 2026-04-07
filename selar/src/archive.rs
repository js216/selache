// SPDX-License-Identifier: GPL-3.0
// archive.rs --- Archive reading, writing, and member management
// Copyright (c) 2026 Jakob Kastelic

use std::fs;
use std::io::{self, Write};
use std::path::Path;
use std::time::{SystemTime, UNIX_EPOCH};

use selelf::archive::{Archive, Member, MEMBER_HDR_SIZE};
use selelf::elf;
use selelf::extnames;
use selelf::symindex;

use crate::error::Result;
use crate::version;

const AR_FMAG: &[u8; 2] = b"`\n";

/// Write an archive to bytes.
pub fn write(archive: &Archive) -> Result<Vec<u8>> {
    let mut out = Vec::new();

    // Collect member names for extended names table
    let names: Vec<&str> = archive.members.iter().map(|m| m.name.as_str()).collect();
    let ext_table = extnames::build(&names);

    // Synthesize __version.doj only if there is version data to store
    let version_elf = if archive.version_info.has_version_data() {
        Some(version::synthesize_version_elf(&archive.version_info))
    } else {
        None
    };

    // Two-pass: first compute sizes, then write

    // Compute symbol index
    // We need to know archive offsets of each member to build the symbol index.
    // Archive layout:
    //   8 bytes: magic
    //   60 + symtab_size [+ pad]: symbol table member
    //   60 + extnames_size [+ pad]: extended names member (if non-empty)
    //   60 + version_size [+ pad]: __version.doj member
    //   For each member: 60 + member_size [+ pad]

    // Symbol table placeholder - we'll compute its size after scanning symbols
    // First, collect all symbols to know the size
    let member_data_refs: Vec<&[u8]> = archive.members.iter().map(|m| m.data.as_slice()).collect();

    // Compute where each member will be in the archive
    // We need the symtab size, which depends on symbol count.
    // Compute symbol entries first (with dummy offsets), then compute size.
    let mut all_symbols: Vec<(usize, String)> = Vec::new(); // (member_index, name)
    for (i, data) in member_data_refs.iter().enumerate() {
        if let Ok(syms) = elf::extract_global_symbols(data) {
            for name in syms {
                all_symbols.push((i, name));
            }
        }
    }

    let sym_count = all_symbols.len();
    let sym_names_len: usize = all_symbols.iter().map(|(_, n)| n.len() + 1).sum();
    let symtab_content_size = 4 + sym_count * 4 + sym_names_len;

    // Now compute all offsets
    let symtab_member_start = 8; // after magic
    let symtab_content_start = symtab_member_start + MEMBER_HDR_SIZE;
    let mut cursor = symtab_content_start + symtab_content_size;
    if !cursor.is_multiple_of(2) {
        cursor += 1;
    }

    // Extended names member (only if there are long names)
    let extnames_member_start = cursor;
    if !ext_table.data.is_empty() {
        cursor += MEMBER_HDR_SIZE + ext_table.data.len();
        if !cursor.is_multiple_of(2) {
            cursor += 1;
        }
    }

    // __version.doj member (only if version data exists)
    let version_member_start = cursor;
    if let Some(ref ver_elf) = version_elf {
        cursor += MEMBER_HDR_SIZE + ver_elf.len();
        if !cursor.is_multiple_of(2) {
            cursor += 1;
        }
    }

    // Object members
    let mut member_offsets: Vec<u32> = Vec::with_capacity(archive.members.len());
    for member in &archive.members {
        member_offsets.push(cursor as u32);
        cursor += MEMBER_HDR_SIZE + member.data.len();
        if !cursor.is_multiple_of(2) {
            cursor += 1;
        }
    }

    // Now build the actual symbol index with correct offsets
    let mut symtab_entries: Vec<symindex::SymEntry> = Vec::with_capacity(sym_count);
    for (member_idx, name) in &all_symbols {
        symtab_entries.push(symindex::SymEntry {
            name: name.clone(),
            offset: member_offsets[*member_idx],
        });
    }

    // Serialize symbol index
    let symtab_content = serialize_symindex(&symtab_entries);
    debug_assert_eq!(symtab_content.len(), symtab_content_size);

    // --- Now write everything ---

    // Magic
    out.extend_from_slice(selelf::archive::ELFA_MAGIC);

    // Symbol table member
    let now = current_timestamp();
    write_member_header(&mut out, "/", now, 0, 1, 1, symtab_content.len());
    out.extend_from_slice(&symtab_content);
    pad_to_even(&mut out);

    // Extended names member
    if !ext_table.data.is_empty() {
        debug_assert_eq!(out.len(), extnames_member_start);
        write_member_header(&mut out, "//", now, 0, 1, 1, ext_table.data.len());
        out.extend_from_slice(&ext_table.data);
        pad_to_even(&mut out);
    }

    // __version.doj member (only if version data exists)
    if let Some(ref ver_elf) = version_elf {
        debug_assert_eq!(out.len(), version_member_start);
        write_member_header(&mut out, "__version.doj", now, 0, 0, 0o100666, ver_elf.len());
        out.extend_from_slice(ver_elf);
        pad_to_even(&mut out);
    }

    // Object members
    for (i, member) in archive.members.iter().enumerate() {
        debug_assert_eq!(out.len(), member_offsets[i] as usize);
        let ar_name = format_ar_name(&member.name, ext_table.offsets[i]);
        write_member_header_raw(
            &mut out,
            &ar_name,
            member.timestamp,
            member.uid,
            member.gid,
            member.mode,
            member.data.len(),
        );
        out.extend_from_slice(&member.data);
        pad_to_even(&mut out);
    }

    Ok(out)
}

/// Write an archive to a file path.
pub fn write_file(archive: &Archive, path: &Path) -> Result<()> {
    let data = write(archive)?;
    fs::write(path, data)?;
    Ok(())
}

fn serialize_symindex(entries: &[symindex::SymEntry]) -> Vec<u8> {
    let count = entries.len() as u32;
    let mut out = Vec::new();
    out.extend_from_slice(&count.to_le_bytes());
    for entry in entries {
        out.extend_from_slice(&entry.offset.to_le_bytes());
    }
    for entry in entries {
        out.extend_from_slice(entry.name.as_bytes());
        out.push(0);
    }
    out
}

fn format_ar_name(name: &str, ext_offset: Option<usize>) -> String {
    if let Some(offset) = ext_offset {
        format!("/{offset}")
    } else {
        format!("{name}/")
    }
}

fn write_member_header(
    out: &mut Vec<u8>,
    name: &str,
    timestamp: u64,
    uid: u32,
    gid: u32,
    mode: u32,
    size: usize,
) {
    let ar_name = if name == "/" || name == "//" {
        name.to_string()
    } else {
        format!("{name}/")
    };
    write_member_header_raw(out, &ar_name, timestamp, uid, gid, mode, size);
}

fn write_member_header_raw(
    out: &mut Vec<u8>,
    ar_name: &str,
    timestamp: u64,
    uid: u32,
    gid: u32,
    mode: u32,
    size: usize,
) {
    let mut hdr = [b' '; MEMBER_HDR_SIZE];

    // ar_name[0..16]
    let name_bytes = ar_name.as_bytes();
    let n = name_bytes.len().min(16);
    hdr[0..n].copy_from_slice(&name_bytes[..n]);

    // ar_date[16..28]
    let date_str = format!("{timestamp}");
    let date_bytes = date_str.as_bytes();
    hdr[16..16 + date_bytes.len().min(12)].copy_from_slice(&date_bytes[..date_bytes.len().min(12)]);

    // ar_uid[28..34]
    let uid_str = format!("{uid}");
    let uid_bytes = uid_str.as_bytes();
    hdr[28..28 + uid_bytes.len().min(6)].copy_from_slice(&uid_bytes[..uid_bytes.len().min(6)]);

    // ar_gid[34..40]
    let gid_str = format!("{gid}");
    let gid_bytes = gid_str.as_bytes();
    hdr[34..34 + gid_bytes.len().min(6)].copy_from_slice(&gid_bytes[..gid_bytes.len().min(6)]);

    // ar_mode[40..48] - written as octal
    let mode_str = format!("{mode:o}");
    let mode_bytes = mode_str.as_bytes();
    hdr[40..40 + mode_bytes.len().min(8)].copy_from_slice(&mode_bytes[..mode_bytes.len().min(8)]);

    // ar_size[48..58]
    let size_str = format!("{size}");
    let size_bytes = size_str.as_bytes();
    hdr[48..48 + size_bytes.len().min(10)]
        .copy_from_slice(&size_bytes[..size_bytes.len().min(10)]);

    // ar_fmag[58..60]
    hdr[58..60].copy_from_slice(AR_FMAG);

    out.extend_from_slice(&hdr);
}

fn pad_to_even(out: &mut Vec<u8>) {
    if !out.len().is_multiple_of(2) {
        out.push(b'\n');
    }
}

fn current_timestamp() -> u64 {
    SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .map(|d| d.as_secs())
        .unwrap_or(0)
}

/// Standard file mode: regular file + rw-rw-rw- (0o100666).
const MEMBER_FILE_MODE: u32 = 0o100666;

/// Print member list to stdout, with version info header.
pub fn print_members(archive: &Archive, writer: &mut dyn Write) -> io::Result<()> {
    // Version info header comes first
    let ver_str = archive.version_info.format_version();
    if !ver_str.is_empty() {
        writeln!(writer, "{ver_str}")?;
    }
    for member in &archive.members {
        writeln!(writer, "{}", member.name)?;
    }
    Ok(())
}

/// Print version info.
pub fn print_version(archive: &Archive, all: bool, writer: &mut dyn Write) -> io::Result<()> {
    if all {
        writeln!(writer, "{}", archive.version_info.format_all())?;
    } else {
        let ver_str = archive.version_info.format_version();
        if !ver_str.is_empty() {
            writeln!(writer, "{ver_str}")?;
        }
    }
    Ok(())
}

/// Extract specified members to the current directory.
pub fn extract_members(archive: &Archive, names: &[String]) -> Result<()> {
    for name_pattern in names {
        let mut found = false;
        for member in &archive.members {
            if selelf::glob::matches(name_pattern, &member.name) {
                fs::write(&member.name, &member.data)?;
                found = true;
            }
        }
        if !found {
            return Err(selelf::error::Error::MemberNotFound(name_pattern.clone()).into());
        }
    }
    Ok(())
}

/// Delete specified members from the archive.
pub fn delete_members(archive: &mut Archive, names: &[String]) -> Result<()> {
    for name_pattern in names {
        let before = archive.members.len();
        archive
            .members
            .retain(|m| !selelf::glob::matches(name_pattern, &m.name));
        if archive.members.len() == before {
            return Err(selelf::error::Error::MemberNotFound(name_pattern.clone()).into());
        }
    }
    Ok(())
}

/// Replace specified members in the archive.
pub fn replace_members(archive: &mut Archive, new_members: &[Member]) -> Result<()> {
    for new in new_members {
        let found = archive.members.iter_mut().find(|m| m.name == new.name);
        match found {
            Some(existing) => {
                existing.data = new.data.clone();
                existing.timestamp = new.timestamp;
            }
            None => {
                return Err(
                    selelf::error::Error::MemberNotFound(new.name.clone()).into(),
                )
            }
        }
    }
    Ok(())
}

/// Load object files from filesystem paths, stripping to base name.
pub fn load_members_from_files(paths: &[String]) -> Result<Vec<Member>> {
    let mut members = Vec::new();
    let now = current_timestamp();

    for path_str in paths {
        // Expand wildcards using read_dir + pattern match
        let matched_paths: Vec<String> = if path_str.contains('*') {
            let path = Path::new(path_str);
            let dir = path.parent().unwrap_or(Path::new("."));
            let pattern = path
                .file_name()
                .map(|n| n.to_string_lossy().to_string())
                .unwrap_or_else(|| path_str.clone());
            let mut matches = Vec::new();
            if let Ok(entries) = fs::read_dir(dir) {
                for entry in entries.flatten() {
                    let fname = entry.file_name().to_string_lossy().to_string();
                    if selelf::glob::matches(&pattern, &fname) {
                        matches.push(entry.path().to_string_lossy().to_string());
                    }
                }
            }
            matches.sort();
            matches
        } else {
            vec![path_str.clone()]
        };

        for p in matched_paths {
            let path = Path::new(&p);
            let data = fs::read(path)?;
            let name = path
                .file_name()
                .map(|n| n.to_string_lossy().to_string())
                .unwrap_or_else(|| p.clone());
            // Always use 100666 (rw-rw-rw-) regardless of filesystem.
            let mode = MEMBER_FILE_MODE;
            members.push(Member {
                name,
                timestamp: now,
                uid: 0,
                gid: 0,
                mode,
                data,
            });
        }
    }

    Ok(members)
}

#[cfg(test)]
mod tests {
    use super::*;
    use selelf::testutil;

    #[test]
    fn test_member_names_are_basenames() {
        let obj = testutil::make_sharc_object(&["_test"]);
        let mut archive = Archive::new();
        archive.members.push(Member {
            name: "test.doj".into(),
            timestamp: 0,
            uid: 0,
            gid: 0,
            mode: 0,
            data: obj,
        });
        let bytes = write(&archive).unwrap();
        let parsed = selelf::archive::read(&bytes).unwrap();
        assert!(!parsed.members[0].name.contains('/'));
    }

    #[test]
    fn test_write_roundtrip() {
        let obj1 = testutil::make_sharc_object(&["_alpha", "_beta"]);
        let obj2 = testutil::make_sharc_object(&["_gamma"]);

        let mut archive = Archive::new();
        archive.members.push(Member {
            name: "alpha.doj".into(),
            timestamp: 1000,
            uid: 0,
            gid: 1,
            mode: 1,
            data: obj1.clone(),
        });
        archive.members.push(Member {
            name: "gamma.doj".into(),
            timestamp: 1000,
            uid: 0,
            gid: 1,
            mode: 1,
            data: obj2.clone(),
        });

        let bytes = write(&archive).unwrap();
        let parsed = selelf::archive::read(&bytes).unwrap();

        assert_eq!(parsed.members.len(), 2);
        assert_eq!(parsed.members[0].name, "alpha.doj");
        assert_eq!(parsed.members[1].name, "gamma.doj");
        assert_eq!(parsed.members[0].data, obj1);
        assert_eq!(parsed.members[1].data, obj2);
    }

    #[test]
    fn test_long_name_members() {
        let obj = testutil::make_sharc_object(&["_long_sym"]);

        let mut archive = Archive::new();
        let long_name = "this_is_a_very_long_member_name.doj";
        archive.members.push(Member {
            name: long_name.into(),
            timestamp: 1000,
            uid: 0,
            gid: 1,
            mode: 1,
            data: obj.clone(),
        });

        let bytes = write(&archive).unwrap();
        let parsed = selelf::archive::read(&bytes).unwrap();

        assert_eq!(parsed.members.len(), 1);
        assert_eq!(parsed.members[0].name, long_name);
        assert_eq!(parsed.members[0].data, obj);
    }
}
