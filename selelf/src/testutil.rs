// SPDX-License-Identifier: GPL-3.0
// testutil.rs --- Test utilities for building synthetic ELF objects and archives
// Copyright (c) 2026 Jakob Kastelic

//! Test utilities for building synthetic ELF objects and archives.
//!
//! These helpers construct minimal valid ELF32 binaries for unit tests.

use crate::elf::ELFDATA2LSB;

/// Build a minimal ELF32 relocatable object file.
///
/// - `machine`: ELF e_machine value (0x85 for SHARC, 0x0 for version objects)
/// - `endian`: ELFDATA2LSB (1) or ELFDATA2MSB (2)
/// - `symbols`: list of (name, is_global_defined). If `is_global_defined` is true,
///   the symbol gets STB_GLOBAL binding and sh_shndx pointing to .text.
///   If false, it gets STB_GLOBAL binding but SHN_UNDEF (undefined reference).
pub fn make_elf_object(machine: u16, endian: u8, symbols: &[(&str, bool)]) -> Vec<u8> {
    let is_le = endian == ELFDATA2LSB;

    // We'll build:
    //   Section [0]: NULL
    //   Section [1]: .shstrtab (section name string table)
    //   Section [2]: .text (dummy code section)
    //   Section [3]: .strtab (symbol string table)
    //   Section [4]: .symtab (symbol table)

    // Build .shstrtab
    let mut shstrtab = vec![0u8]; // initial null
    let shstrtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".shstrtab\0");
    let text_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".text\0");
    let strtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".strtab\0");
    let symtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".symtab\0");

    // Build .strtab (symbol names)
    let mut strtab = vec![0u8]; // initial null
    let mut sym_name_offsets: Vec<usize> = Vec::new();
    for (name, _) in symbols {
        sym_name_offsets.push(strtab.len());
        strtab.extend_from_slice(name.as_bytes());
        strtab.push(0);
    }

    // Build .text (4 bytes of dummy data)
    let text_data = vec![0u8; 4];

    // Build .symtab
    // First entry: null symbol (16 bytes of zeros)
    // Then one local symbol for .text section (not exported)
    // Then global symbols
    let sym_entry_size = 16usize; // ELF32_Sym size
    let first_global = 2usize; // index 0 = null, index 1 = .text section sym, index 2+ = globals
    let total_syms = 2 + symbols.len();
    let mut symtab = vec![0u8; total_syms * sym_entry_size];

    // Symbol [1]: .text section symbol (local, defined)
    {
        let base = sym_entry_size;
        // st_name = text_name_off in strtab? No, section symbols typically have st_name=0
        // st_info = STB_LOCAL << 4 | STT_SECTION (3)
        symtab[base + 12] = 3; // STB_LOCAL | STT_SECTION
        // st_shndx = 2 (.text section index)
        write_u16(&mut symtab[base + 14..], 2, is_le);
    }

    // Global symbols
    for (i, (name, is_defined)) in symbols.iter().enumerate() {
        let base = (2 + i) * sym_entry_size;
        // st_name
        write_u32(&mut symtab[base..], sym_name_offsets[i] as u32, is_le);
        // st_info = STB_GLOBAL << 4 | STT_NOTYPE (0) or STT_FUNC (2)
        symtab[base + 12] = if name.starts_with('.') {
            (1 << 4) | 3 // STB_GLOBAL | STT_SECTION
        } else {
            (1 << 4) | 2 // STB_GLOBAL | STT_FUNC
        };
        // st_shndx
        if *is_defined {
            write_u16(&mut symtab[base + 14..], 2, is_le); // .text section
        } else {
            write_u16(&mut symtab[base + 14..], 0, is_le); // SHN_UNDEF
        }
    }

    // Now layout everything
    let ehdr_size = 52usize;
    let shstrtab_off = ehdr_size;
    let text_off = shstrtab_off + shstrtab.len();
    let strtab_off = text_off + text_data.len();
    let symtab_off = strtab_off + strtab.len();
    let shtab_off = symtab_off + symtab.len();

    let num_sections = 5u16;

    // Total size
    let total_size = shtab_off + num_sections as usize * 40;
    let mut out = vec![0u8; total_size];

    // ELF header
    out[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
    out[4] = 1; // ELFCLASS32
    out[5] = endian;
    out[6] = 1; // EV_CURRENT
    // e_type = ET_REL (1)
    write_u16(&mut out[16..], 1, is_le);
    // e_machine
    write_u16(&mut out[18..], machine, is_le);
    // e_version
    write_u32(&mut out[20..], 1, is_le);
    // e_shoff
    write_u32(&mut out[32..], shtab_off as u32, is_le);
    // e_ehsize
    write_u16(&mut out[44..], 52, is_le);
    // e_shentsize
    write_u16(&mut out[46..], 40, is_le);
    // e_shnum
    write_u16(&mut out[48..], num_sections, is_le);
    // e_shstrndx
    write_u16(&mut out[50..], 1, is_le);

    // Copy section contents
    out[shstrtab_off..shstrtab_off + shstrtab.len()].copy_from_slice(&shstrtab);
    out[text_off..text_off + text_data.len()].copy_from_slice(&text_data);
    out[strtab_off..strtab_off + strtab.len()].copy_from_slice(&strtab);
    out[symtab_off..symtab_off + symtab.len()].copy_from_slice(&symtab);

    // Section headers (40 bytes each)
    // [0] NULL (all zeros)
    // [1] .shstrtab
    write_shdr(&mut out, shtab_off + 40, &ShdrFields {
        sh_name: shstrtab_name_off as u32,
        sh_type: 3, // SHT_STRTAB
        sh_offset: shstrtab_off as u32,
        sh_size: shstrtab.len() as u32,
        sh_link: 0,
        sh_info: 0,
        sh_entsize: 0,
    }, is_le);
    // [2] .text
    write_shdr(&mut out, shtab_off + 2 * 40, &ShdrFields {
        sh_name: text_name_off as u32,
        sh_type: 1, // SHT_PROGBITS
        sh_offset: text_off as u32,
        sh_size: text_data.len() as u32,
        sh_link: 0,
        sh_info: 0,
        sh_entsize: 0,
    }, is_le);
    // [3] .strtab
    write_shdr(&mut out, shtab_off + 3 * 40, &ShdrFields {
        sh_name: strtab_name_off as u32,
        sh_type: 3, // SHT_STRTAB
        sh_offset: strtab_off as u32,
        sh_size: strtab.len() as u32,
        sh_link: 0,
        sh_info: 0,
        sh_entsize: 0,
    }, is_le);
    // [4] .symtab
    write_shdr(&mut out, shtab_off + 4 * 40, &ShdrFields {
        sh_name: symtab_name_off as u32,
        sh_type: 2, // SHT_SYMTAB
        sh_offset: symtab_off as u32,
        sh_size: symtab.len() as u32,
        sh_link: 3, // .strtab section index
        sh_info: first_global as u32,
        sh_entsize: sym_entry_size as u32,
    }, is_le);

    out
}

/// Shorthand: make a SHARC LE object with all symbols global+defined.
pub fn make_sharc_object(symbols: &[&str]) -> Vec<u8> {
    let sym_defs: Vec<(&str, bool)> = symbols.iter().map(|s| (*s, true)).collect();
    make_elf_object(0x85, ELFDATA2LSB, &sym_defs)
}

/// Build raw archive bytes from member name/data pairs.
/// Includes magic, symbol table, extended names, and members.
///
/// This constructs the archive by directly writing the binary format,
/// to avoid circular dependency with the archive write path in selar.
pub fn make_archive_bytes(members: &[(&str, &[u8])]) -> Vec<u8> {
    use crate::elf;
    use crate::extnames;
    use crate::symindex;

    let elfa_magic: &[u8; 8] = b"!<elfa>\n";
    let ar_fmag: &[u8; 2] = b"`\n";
    let member_hdr_size: usize = 60;

    let names: Vec<&str> = members.iter().map(|&(n, _)| n).collect();
    let ext_table = extnames::build(&names);

    // Collect all symbols
    let mut all_symbols: Vec<(usize, String)> = Vec::new();
    for (i, &(_, data)) in members.iter().enumerate() {
        if let Ok(syms) = elf::extract_global_symbols(data) {
            for name in syms {
                all_symbols.push((i, name));
            }
        }
    }

    let sym_count = all_symbols.len();
    let sym_names_len: usize = all_symbols.iter().map(|(_, n)| n.len() + 1).sum();
    let symtab_content_size = 4 + sym_count * 4 + sym_names_len;

    // Compute offsets
    let symtab_member_start = 8;
    let symtab_content_start = symtab_member_start + member_hdr_size;
    let mut cursor = symtab_content_start + symtab_content_size;
    if !cursor.is_multiple_of(2) {
        cursor += 1;
    }

    if !ext_table.data.is_empty() {
        cursor += member_hdr_size + ext_table.data.len();
        if !cursor.is_multiple_of(2) {
            cursor += 1;
        }
    }

    // Version member (minimal)
    let version_elf = make_minimal_version_elf();
    let version_member_start = cursor;
    cursor += member_hdr_size + version_elf.len();
    if !cursor.is_multiple_of(2) {
        cursor += 1;
    }

    let mut member_offsets: Vec<u32> = Vec::with_capacity(members.len());
    for &(_, data) in members {
        member_offsets.push(cursor as u32);
        cursor += member_hdr_size + data.len();
        if !cursor.is_multiple_of(2) {
            cursor += 1;
        }
    }

    // Build symbol index entries
    let mut symtab_entries: Vec<symindex::SymEntry> = Vec::with_capacity(sym_count);
    for (member_idx, name) in &all_symbols {
        symtab_entries.push(symindex::SymEntry {
            name: name.clone(),
            offset: member_offsets[*member_idx],
        });
    }
    let symtab_content = symindex::serialize(&symtab_entries).unwrap();

    // Write everything
    let mut out = Vec::new();
    out.extend_from_slice(elfa_magic);

    // Symbol table member header
    write_test_member_header(&mut out, "/", symtab_content.len(), ar_fmag);
    out.extend_from_slice(&symtab_content);
    pad_to_even(&mut out);

    // Extended names
    if !ext_table.data.is_empty() {
        write_test_member_header(&mut out, "//", ext_table.data.len(), ar_fmag);
        out.extend_from_slice(&ext_table.data);
        pad_to_even(&mut out);
    }

    // Version member
    debug_assert_eq!(out.len(), version_member_start);
    write_test_member_header(&mut out, "__version.doj/", version_elf.len(), ar_fmag);
    out.extend_from_slice(&version_elf);
    pad_to_even(&mut out);

    // Object members
    for (i, &(name, data)) in members.iter().enumerate() {
        debug_assert_eq!(out.len(), member_offsets[i] as usize);
        let ar_name = format_ar_name(name, ext_table.offsets[i]);
        write_test_member_header(&mut out, &ar_name, data.len(), ar_fmag);
        out.extend_from_slice(data);
        pad_to_even(&mut out);
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

fn write_test_member_header(out: &mut Vec<u8>, name: &str, size: usize, ar_fmag: &[u8; 2]) {
    let member_hdr_size = 60;
    let mut hdr = [b' '; 60];
    let name_bytes = name.as_bytes();
    let n = name_bytes.len().min(16);
    hdr[0..n].copy_from_slice(&name_bytes[..n]);

    // timestamp
    let ts = b"1000000";
    hdr[16..16 + ts.len()].copy_from_slice(ts);
    // uid
    hdr[28] = b'0';
    // gid
    hdr[34] = b'1';
    // mode
    hdr[40] = b'1';
    // size
    let size_str = format!("{size}");
    let size_bytes = size_str.as_bytes();
    hdr[48..48 + size_bytes.len().min(10)].copy_from_slice(&size_bytes[..size_bytes.len().min(10)]);
    // fmag
    hdr[member_hdr_size - 2..member_hdr_size].copy_from_slice(ar_fmag);

    out.extend_from_slice(&hdr);
}

fn pad_to_even(out: &mut Vec<u8>) {
    if !out.len().is_multiple_of(2) {
        out.push(b'\n');
    }
}

/// Build a minimal version ELF for test archives.
fn make_minimal_version_elf() -> Vec<u8> {
    use crate::elf::{ELFDATA2MSB, ELF_MAGIC, SHT_STRTAB};

    let e = crate::elf::Endian::Big;

    // Minimal: ELF header + null section + shstrtab section
    let mut shstrtab = vec![0u8];
    let strtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".strtab\0");

    let ehdr_size: usize = 52;
    let shstrtab_file_off = ehdr_size;
    let sh_table_off = shstrtab_file_off + shstrtab.len();
    let total_sections = 2; // NULL + .strtab
    let total_size = sh_table_off + total_sections * 40;
    let mut out = vec![0u8; total_size];

    out[0..4].copy_from_slice(&ELF_MAGIC);
    out[4] = 1;
    out[5] = ELFDATA2MSB;
    out[6] = 1;
    out[16..18].copy_from_slice(&e.write_u16(2)); // ET_EXEC
    out[20..24].copy_from_slice(&e.write_u32(1)); // e_version
    out[32..36].copy_from_slice(&e.write_u32(sh_table_off as u32));
    out[44..46].copy_from_slice(&e.write_u16(52));
    out[46..48].copy_from_slice(&e.write_u16(40));
    out[48..50].copy_from_slice(&e.write_u16(total_sections as u16));
    out[50..52].copy_from_slice(&e.write_u16(1)); // shstrndx

    out[shstrtab_file_off..shstrtab_file_off + shstrtab.len()].copy_from_slice(&shstrtab);

    // Section [1]: .strtab (shstrtab)
    let base = sh_table_off + 40;
    out[base..base + 4].copy_from_slice(&e.write_u32(strtab_name_off as u32));
    out[base + 4..base + 8].copy_from_slice(&e.write_u32(SHT_STRTAB));
    out[base + 16..base + 20].copy_from_slice(&e.write_u32(shstrtab_file_off as u32));
    out[base + 20..base + 24].copy_from_slice(&e.write_u32(shstrtab.len() as u32));

    out
}

fn write_u16(buf: &mut [u8], val: u16, is_le: bool) {
    let bytes = if is_le {
        val.to_le_bytes()
    } else {
        val.to_be_bytes()
    };
    buf[0..2].copy_from_slice(&bytes);
}

fn write_u32(buf: &mut [u8], val: u32, is_le: bool) {
    let bytes = if is_le {
        val.to_le_bytes()
    } else {
        val.to_be_bytes()
    };
    buf[0..4].copy_from_slice(&bytes);
}

struct ShdrFields {
    sh_name: u32,
    sh_type: u32,
    sh_offset: u32,
    sh_size: u32,
    sh_link: u32,
    sh_info: u32,
    sh_entsize: u32,
}

/// Build an ELF32 relocatable object with an alignment section.
///
/// The resulting ELF contains:
///   [0] NULL, [1] .shstrtab, [2] .text, [3] .strtab, [4] .symtab,
///   [5] .align.text (SHT_SHARC_ALIGN, sh_link=4, sh_info=2)
///
/// `align_data` is the raw bytes for the alignment section content.
pub fn make_elf_with_align(align_data: &[u8], entsize: u32) -> Vec<u8> {
    let is_le = true;
    let endian: u8 = ELFDATA2LSB;

    // Build .shstrtab
    let mut shstrtab = vec![0u8]; // initial null
    let shstrtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".shstrtab\0");
    let text_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".text\0");
    let strtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".strtab\0");
    let symtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".symtab\0");
    let align_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".align.text\0");

    // Build .strtab (empty, just null)
    let strtab = vec![0u8];

    // Build .text (4 bytes dummy)
    let text_data = vec![0u8; 4];

    // Build .symtab (just the null symbol)
    let symtab = vec![0u8; 16];

    // Layout
    let ehdr_size = 52usize;
    let shstrtab_off = ehdr_size;
    let text_off = shstrtab_off + shstrtab.len();
    let strtab_off = text_off + text_data.len();
    let symtab_off = strtab_off + strtab.len();
    let align_off = symtab_off + symtab.len();
    let shtab_off = align_off + align_data.len();

    let num_sections = 6u16;
    let total_size = shtab_off + num_sections as usize * 40;
    let mut out = vec![0u8; total_size];

    // ELF header
    out[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
    out[4] = 1; // ELFCLASS32
    out[5] = endian;
    out[6] = 1;
    write_u16(&mut out[16..], 1, is_le); // ET_REL
    write_u16(&mut out[18..], 0x85, is_le); // SHARC
    write_u32(&mut out[20..], 1, is_le);
    write_u32(&mut out[32..], shtab_off as u32, is_le);
    write_u16(&mut out[44..], 52, is_le);
    write_u16(&mut out[46..], 40, is_le);
    write_u16(&mut out[48..], num_sections, is_le);
    write_u16(&mut out[50..], 1, is_le); // shstrndx

    // Copy section data
    out[shstrtab_off..shstrtab_off + shstrtab.len()].copy_from_slice(&shstrtab);
    out[text_off..text_off + text_data.len()].copy_from_slice(&text_data);
    out[strtab_off..strtab_off + strtab.len()].copy_from_slice(&strtab);
    out[symtab_off..symtab_off + symtab.len()].copy_from_slice(&symtab);
    out[align_off..align_off + align_data.len()].copy_from_slice(align_data);

    // Section headers
    // [0] NULL (zeros)
    // [1] .shstrtab
    write_shdr(&mut out, shtab_off + 40, &ShdrFields {
        sh_name: shstrtab_name_off as u32,
        sh_type: 3,
        sh_offset: shstrtab_off as u32,
        sh_size: shstrtab.len() as u32,
        sh_link: 0, sh_info: 0, sh_entsize: 0,
    }, is_le);
    // [2] .text
    write_shdr(&mut out, shtab_off + 2 * 40, &ShdrFields {
        sh_name: text_name_off as u32,
        sh_type: 1,
        sh_offset: text_off as u32,
        sh_size: text_data.len() as u32,
        sh_link: 0, sh_info: 0, sh_entsize: 0,
    }, is_le);
    // [3] .strtab
    write_shdr(&mut out, shtab_off + 3 * 40, &ShdrFields {
        sh_name: strtab_name_off as u32,
        sh_type: 3,
        sh_offset: strtab_off as u32,
        sh_size: strtab.len() as u32,
        sh_link: 0, sh_info: 0, sh_entsize: 0,
    }, is_le);
    // [4] .symtab
    write_shdr(&mut out, shtab_off + 4 * 40, &ShdrFields {
        sh_name: symtab_name_off as u32,
        sh_type: 2,
        sh_offset: symtab_off as u32,
        sh_size: symtab.len() as u32,
        sh_link: 3, sh_info: 1, sh_entsize: 16,
    }, is_le);
    // [5] .align.text (SHT_SHARC_ALIGN = 0x70000000)
    write_shdr(&mut out, shtab_off + 5 * 40, &ShdrFields {
        sh_name: align_name_off as u32,
        sh_type: 0x7000_0000,
        sh_offset: align_off as u32,
        sh_size: align_data.len() as u32,
        sh_link: 4, // symtab
        sh_info: 2, // .text section
        sh_entsize: entsize,
    }, is_le);

    out
}

/// Build an ELF32 relocatable object with a symconstraint section.
///
/// The resulting ELF contains:
///   [0] NULL, [1] .shstrtab, [2] .text, [3] .strtab, [4] .symtab,
///   [5] .symconstraint (SHT_SHARC_SYMCONSTR, sh_link=4)
///
/// `symconstr_data` is the raw bytes for the symconstraint section content.
/// `strtab_content` is the content of .strtab (including leading null).
pub fn make_elf_with_symconstr(
    strtab_content: &[u8],
    symconstr_data: &[u8],
    entsize: u32,
) -> Vec<u8> {
    let is_le = true;
    let endian: u8 = ELFDATA2LSB;

    // Build .shstrtab
    let mut shstrtab = vec![0u8];
    let shstrtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".shstrtab\0");
    let text_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".text\0");
    let strtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".strtab\0");
    let symtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".symtab\0");
    let symconstr_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".symconstraint\0");

    // Build .text (4 bytes dummy)
    let text_data = vec![0u8; 4];

    // Build .symtab (just the null symbol)
    let symtab = vec![0u8; 16];

    // Layout
    let ehdr_size = 52usize;
    let shstrtab_off = ehdr_size;
    let text_off = shstrtab_off + shstrtab.len();
    let strtab_off = text_off + text_data.len();
    let symtab_off = strtab_off + strtab_content.len();
    let symconstr_off = symtab_off + symtab.len();
    let shtab_off = symconstr_off + symconstr_data.len();

    let num_sections = 6u16;
    let total_size = shtab_off + num_sections as usize * 40;
    let mut out = vec![0u8; total_size];

    // ELF header
    out[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
    out[4] = 1;
    out[5] = endian;
    out[6] = 1;
    write_u16(&mut out[16..], 1, is_le);
    write_u16(&mut out[18..], 0x85, is_le);
    write_u32(&mut out[20..], 1, is_le);
    write_u32(&mut out[32..], shtab_off as u32, is_le);
    write_u16(&mut out[44..], 52, is_le);
    write_u16(&mut out[46..], 40, is_le);
    write_u16(&mut out[48..], num_sections, is_le);
    write_u16(&mut out[50..], 1, is_le);

    // Copy section data
    out[shstrtab_off..shstrtab_off + shstrtab.len()].copy_from_slice(&shstrtab);
    out[text_off..text_off + text_data.len()].copy_from_slice(&text_data);
    out[strtab_off..strtab_off + strtab_content.len()].copy_from_slice(strtab_content);
    out[symtab_off..symtab_off + symtab.len()].copy_from_slice(&symtab);
    out[symconstr_off..symconstr_off + symconstr_data.len()].copy_from_slice(symconstr_data);

    // Section headers
    // [0] NULL
    // [1] .shstrtab
    write_shdr(&mut out, shtab_off + 40, &ShdrFields {
        sh_name: shstrtab_name_off as u32,
        sh_type: 3,
        sh_offset: shstrtab_off as u32,
        sh_size: shstrtab.len() as u32,
        sh_link: 0, sh_info: 0, sh_entsize: 0,
    }, is_le);
    // [2] .text
    write_shdr(&mut out, shtab_off + 2 * 40, &ShdrFields {
        sh_name: text_name_off as u32,
        sh_type: 1,
        sh_offset: text_off as u32,
        sh_size: text_data.len() as u32,
        sh_link: 0, sh_info: 0, sh_entsize: 0,
    }, is_le);
    // [3] .strtab
    write_shdr(&mut out, shtab_off + 3 * 40, &ShdrFields {
        sh_name: strtab_name_off as u32,
        sh_type: 3,
        sh_offset: strtab_off as u32,
        sh_size: strtab_content.len() as u32,
        sh_link: 0, sh_info: 0, sh_entsize: 0,
    }, is_le);
    // [4] .symtab
    write_shdr(&mut out, shtab_off + 4 * 40, &ShdrFields {
        sh_name: symtab_name_off as u32,
        sh_type: 2,
        sh_offset: symtab_off as u32,
        sh_size: symtab.len() as u32,
        sh_link: 3, sh_info: 1, sh_entsize: 16,
    }, is_le);
    // [5] .symconstraint (SHT_SHARC_SYMCONSTR = 0x70000001)
    write_shdr(&mut out, shtab_off + 5 * 40, &ShdrFields {
        sh_name: symconstr_name_off as u32,
        sh_type: 0x7000_0001,
        sh_offset: symconstr_off as u32,
        sh_size: symconstr_data.len() as u32,
        sh_link: 4, // symtab
        sh_info: 0,
        sh_entsize: entsize,
    }, is_le);

    out
}

fn write_shdr(out: &mut [u8], offset: usize, f: &ShdrFields, is_le: bool) {
    write_u32(&mut out[offset..], f.sh_name, is_le);
    write_u32(&mut out[offset + 4..], f.sh_type, is_le);
    // sh_flags = 0, sh_addr = 0 (already zero)
    write_u32(&mut out[offset + 16..], f.sh_offset, is_le);
    write_u32(&mut out[offset + 20..], f.sh_size, is_le);
    write_u32(&mut out[offset + 24..], f.sh_link, is_le);
    write_u32(&mut out[offset + 28..], f.sh_info, is_le);
    // sh_addralign = 0
    write_u32(&mut out[offset + 36..], f.sh_entsize, is_le);
}
