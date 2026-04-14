// SPDX-License-Identifier: GPL-3.0
// dump.rs --- ELF and archive content rendering
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;
use std::io::{self, Write};

use selelf::archive::Archive;
use selelf::elf::{
    self, Elf32Header, Elf32Shdr, SHF_EXECINSTR, SHT_DYNSYM, SHT_NOTE, SHT_PROGBITS, SHT_REL,
    SHT_RELA, SHT_SHARC_ATTR, SHT_SHARC_ALIGN, SHT_SHARC_SYMCONSTR, SHT_STRTAB, SHT_SYMTAB,
};
use selelf::glob;
use selelf::extnames;
use selelf::symindex;

use crate::cli::{ContentFormat, Options};
use crate::hex;

/// Context for dumping an ELF file.
struct ElfCtx<'a> {
    data: &'a [u8],
    header: &'a Elf32Header,
    sections: &'a [Elf32Shdr],
    shstrtab: &'a [u8],
}

/// Top-level dump entry point for a single ELF object.
pub fn dump_elf(data: &[u8], opts: &Options, w: &mut dyn Write) -> io::Result<()> {
    let header = match elf::parse_header(data) {
        Ok(h) => h,
        Err(e) => {
            writeln!(w, "Error: {e}")?;
            return Ok(());
        }
    };

    let sections = parse_all_sections(data, &header);
    let shstrtab = get_shstrtab(data, &header, &sections);

    let ctx = ElfCtx {
        data,
        header: &header,
        sections: &sections,
        shstrtab,
    };

    let show_section_headers = opts.show_section_headers || !opts.has_display_option();

    if opts.show_file_header {
        dump_file_header(&ctx, w)?;
    }

    if opts.show_program_headers {
        dump_program_headers(data, &header, w)?;
    }

    if show_section_headers {
        dump_section_headers(&ctx, w)?;
    }

    if opts.show_notes {
        dump_notes(&ctx, w)?;
    }

    // Section content by name (-n)
    for (name_pattern, fmt) in &opts.section_names {
        dump_sections_by_name(&ctx, name_pattern, fmt, opts.omit_string_tables, w)?;
    }

    // Section content by index (-i)
    for &(start, end, ref fmt) in &opts.section_indices {
        dump_sections_by_index(&ctx, start, end, fmt, opts.omit_string_tables, w)?;
    }

    Ok(())
}

/// Dump the ELF file header in compact tabular format.
fn dump_file_header(ctx: &ElfCtx<'_>, w: &mut dyn Write) -> io::Result<()> {
    let header = ctx.header;
    let class_str = "32-bit";
    let data_str = match header.ei_data {
        elf::Endian::Little => "2LSB",
        elf::Endian::Big => "2MSB",
    };
    let type_str = match header.e_type {
        0 => "none",
        1 => "relo",
        2 => "exec",
        3 => "dyn",
        4 => "core",
        _ => "????",
    };
    let machine_str: String = if header.e_machine == 0x85 {
        "SHARC".to_string()
    } else {
        format!("0x{:x}", header.e_machine)
    };

    writeln!(w, "\n---- ELF File Header ----\n")?;
    writeln!(w, "ELF Header ")?;
    writeln!(
        w,
        " class  data  type        machine  ver     entry  ehsize     flags"
    )?;
    writeln!(
        w,
        "{class:>6}  {data:>4}  {etype:<12}  {machine:>5}  {ver:>3}  {entry:08x}  {ehsize:>6}  {flags:08x}",
        class = class_str,
        data = data_str,
        etype = type_str,
        machine = machine_str,
        ver = header.e_version,
        entry = header.e_entry,
        ehsize = header.e_ehsize,
        flags = header.e_flags,
    )?;
    writeln!(w)?;
    writeln!(
        w,
        "   phoff  phsz  phnum     shoff  shsz  shnum  shstr"
    )?;
    writeln!(
        w,
        "{phoff:08x}  {phsz:>4}  {phnum:>5}  {shoff:08x}  {shsz:>4}  {shnum:>5}  {shstr:>5}",
        phoff = header.e_phoff,
        phsz = header.e_phentsize,
        phnum = header.e_phnum,
        shoff = header.e_shoff,
        shsz = header.e_shentsize,
        shnum = header.e_shnum,
        shstr = header.e_shstrndx,
    )?;

    // Parse .adi.attributes for Processor and Silicon revision
    if let Some((processor, si_rev)) = parse_proc_attributes(ctx) {
        writeln!(w)?;
        writeln!(w, "Processor:\t\t{processor}")?;
        writeln!(w, "Silicon revision:\t{si_rev}")?;
    }

    Ok(())
}

/// Parsed contents of an `.adi.attributes` section.
struct ProcAttributes {
    cpu_name: Option<String>,
    cpu_proc_index: Option<u64>,
    si_revision: Option<u64>,
    /// Per-section attributes: (section_index, mem_kind)
    section_attrs: Vec<(u64, u64)>,
}

/// Parse `.adi.attributes` section data into structured form.
///
/// Format:
///   'A' (0x41) byte
///   u32 total_length
///   "AnonADI\0" producer name
///   Tag-value pairs using ULEB128 encoding
fn parse_proc_attr_data(data: &[u8]) -> Option<ProcAttributes> {
    if data.len() < 6 || data[0] != 0x41 {
        return None;
    }

    let mut pos = 1;
    // Skip total_length (u32, 4 bytes)
    if pos + 4 > data.len() {
        return None;
    }
    pos += 4;

    // Skip producer name (null-terminated, expect "AnonADI")
    while pos < data.len() && data[pos] != 0 {
        pos += 1;
    }
    if pos >= data.len() {
        return None;
    }
    pos += 1; // skip null terminator

    let mut result = ProcAttributes {
        cpu_name: None,
        cpu_proc_index: None,
        si_revision: None,
        section_attrs: Vec::new(),
    };

    parse_proc_attr_tags(data, &mut pos, &mut result, false);
    Some(result)
}

/// Parse ULEB128-encoded tag-value pairs from processor attributes data.
///
/// When `in_subsection` is true, we are inside a tag 2/3 sub-subsection
/// and track section index (tag 9) and mem_kind (tag 0x12) pairs.
fn parse_proc_attr_tags(data: &[u8], pos: &mut usize, result: &mut ProcAttributes, in_subsection: bool) {
    let mut cur_section_idx: Option<u64> = None;

    while *pos < data.len() {
        let tag = elf::decode_uleb128(data, pos);
        match tag {
            1 => {
                // File-scope sub-subsection: u32 LE length.
                // Contents follow inline (not bounded by length — the
                // length accounts for tag 2/3 headers too).
                if *pos + 4 > data.len() {
                    return;
                }
                *pos += 4; // skip length, parse contents inline
            }
            2 | 3 => {
                // Per-section sub-subsection: u32 LE total size
                // (includes the tag byte + 4-byte length field).
                if *pos + 4 > data.len() {
                    return;
                }
                let total = elf::Endian::Little.read_u32(&data[*pos..]) as usize;
                *pos += 4;
                let content_len = total.saturating_sub(5); // subtract tag(1) + len(4)
                let end = (*pos + content_len).min(data.len());
                // Content: u16 LE section index, then optional ULEB128 tag-value pairs
                if *pos + 2 <= end {
                    let sec_idx = elf::Endian::Little.read_u16(&data[*pos..]) as u64;
                    *pos += 2;
                    // Parse remaining content for mem_kind (tag 0x12)
                    while *pos < end {
                        let inner_tag = data[*pos];
                        *pos += 1;
                        if inner_tag == 0 {
                            continue;
                        }
                        if inner_tag == 0x12 && *pos < end {
                            let mem_kind = data[*pos] as u64;
                            *pos += 1;
                            result.section_attrs.push((sec_idx, mem_kind));
                        } else {
                            // Unknown inner tag, skip remaining
                            *pos = end;
                        }
                    }
                }
                *pos = end;
            }
            4 => {
                // Null-terminated string (CPU_name)
                let str_start = *pos;
                while *pos < data.len() && data[*pos] != 0 {
                    *pos += 1;
                }
                let name = String::from_utf8_lossy(&data[str_start..*pos]).to_string();
                if *pos < data.len() {
                    *pos += 1; // skip null
                }
                result.cpu_name = Some(name);
            }
            5 => {
                let _val = elf::decode_uleb128(data, pos);
            }
            6 => {
                let val = elf::decode_uleb128(data, pos);
                result.cpu_proc_index = Some(val);
            }
            7 => {
                // __SILICON_REVISION__ encoding
                let val = elf::decode_uleb128(data, pos);
                result.si_revision = Some(val);
            }
            8 => {
                let _val = elf::decode_uleb128(data, pos);
            }
            9 => {
                let val = elf::decode_uleb128(data, pos);
                if in_subsection {
                    cur_section_idx = Some(val);
                }
            }
            0x12 => {
                let val = elf::decode_uleb128(data, pos);
                if let (true, Some(sec_idx)) = (in_subsection, cur_section_idx) {
                    result.section_attrs.push((sec_idx, val));
                }
            }
            _ => {
                // Unknown tag: assume ULEB128 value and skip
                let _val = elf::decode_uleb128(data, pos);
            }
        }
    }
}

/// Extract processor name and silicon revision for the file header display.
fn parse_proc_attributes(ctx: &ElfCtx<'_>) -> Option<(String, String)> {
    let attrs = find_proc_attributes(ctx)?;
    let proc_name = attrs.cpu_name?;
    let rev = decode_si_revision(attrs.si_revision);
    Some((proc_name, rev))
}

/// Find and parse the `.adi.attributes` section from the ELF context.
fn find_proc_attributes(ctx: &ElfCtx<'_>) -> Option<ProcAttributes> {
    for sec in ctx.sections {
        let name = elf::read_string_at(ctx.shstrtab, sec.sh_name);
        if name != ".adi.attributes" {
            continue;
        }
        let start = sec.sh_offset as usize;
        let end = start + sec.sh_size as usize;
        if end > ctx.data.len() || sec.sh_size < 6 {
            return None;
        }
        return parse_proc_attr_data(&ctx.data[start..end]);
    }
    None
}

/// Decode __SILICON_REVISION__ value to display string.
///
/// 0xffff = "any"
/// Otherwise: major = value >> 8, minor = (value >> 4) & 0xf
fn decode_si_revision(rev: Option<u64>) -> String {
    match rev {
        None => "0.0".to_string(),
        Some(0xffff) => "any".to_string(),
        Some(val) => {
            let major = val >> 8;
            let minor = (val >> 4) & 0xf;
            format!("{major}.{minor}")
        }
    }
}

/// Derive CPU_arch from CPU_name prefix.
fn cpu_arch_from_name(name: &str) -> &str {
    if name.starts_with("ADSP-2156") {
        "ADSP-2156x"
    } else if name.starts_with("ADSP-2158") {
        "ADSP-2158x"
    } else if name.starts_with("ADSP-SC5") {
        "ADSP-SC5xx"
    } else {
        name
    }
}

/// Map mem_kind value to display string.
fn mem_kind_name(kind: u64) -> &'static str {
    match kind {
        1 => "PM",
        2 => "SW",
        3 => "DM",
        _ => "unknown",
    }
}

/// Render `.adi.attributes` section in structured format.
fn dump_proc_attributes(ctx: &ElfCtx<'_>, data: &[u8], w: &mut dyn Write) -> io::Result<()> {
    let attrs = match parse_proc_attr_data(data) {
        Some(a) => a,
        None => return hex::dump_hex_ascii(data, 0, w),
    };

    writeln!(w, "File:")?;
    writeln!(w, "  version = 1")?;

    if let Some(ref name) = attrs.cpu_name {
        writeln!(w, "  CPU_name = {name}")?;
        let arch = cpu_arch_from_name(name);
        writeln!(w, "  CPU_arch = {arch}")?;
        if let Some(proc_idx) = attrs.cpu_proc_index {
            writeln!(w, "  CPU_proc = {name} ({proc_idx})")?;
        }
    }

    let rev_str = decode_si_revision(attrs.si_revision);
    writeln!(w, "  CPU_silicon_revision = {rev_str}")?;

    for (sec_idx, mem_kind) in &attrs.section_attrs {
        let idx = *sec_idx as usize;
        let sec_name = if idx < ctx.sections.len() {
            elf::read_string_at(ctx.shstrtab, ctx.sections[idx].sh_name)
        } else {
            "?"
        };
        writeln!(w)?;
        writeln!(w, "Section {sec_name} [{idx}]:")?;
        writeln!(w, "  mem_kind = {}", mem_kind_name(*mem_kind))?;
    }

    Ok(())
}

/// Dump program headers in standard format.
pub fn dump_program_headers(
    data: &[u8],
    header: &Elf32Header,
    w: &mut dyn Write,
) -> io::Result<()> {
    if header.e_phnum == 0 || header.e_phentsize == 0 {
        writeln!(w, "\n---- ELF Program Header Table ----\n")?;
        writeln!(w, "(empty)")?;
        return Ok(());
    }
    writeln!(w, "\n---- ELF Program Header Table ----\n")?;
    writeln!(w, " Program Header Table ")?;
    writeln!(
        w,
        "    type    offset     vaddr     paddr    filesz     memsz  flags     align"
    )?;
    writeln!(w)?;
    for i in 0..header.e_phnum as usize {
        let off = header.e_phoff as usize + i * header.e_phentsize as usize;
        if off + header.e_phentsize as usize > data.len() {
            break;
        }
        let phdr = elf::parse_program_header(&data[off..], header.ei_data);
        let type_name = elf::phdr_type_name(phdr.p_type).to_lowercase();
        let flags = format_phdr_flags(phdr.p_flags);
        writeln!(
            w,
            "{type_name:>8}  {off:08x}  {va:08x}  {pa:08x}  {fsz:08x}  {msz:08x}    {flags}  {align:08x}",
            off = phdr.p_offset,
            va = phdr.p_vaddr,
            pa = phdr.p_paddr,
            fsz = phdr.p_filesz,
            msz = phdr.p_memsz,
            align = phdr.p_align,
        )?;
    }
    Ok(())
}

fn format_phdr_flags(flags: u32) -> String {
    let mut s = String::with_capacity(3);
    s.push(if flags & elf::PF_R != 0 { 'R' } else { '-' });
    s.push(if flags & elf::PF_W != 0 { 'W' } else { '-' });
    s.push(if flags & elf::PF_X != 0 { 'X' } else { '-' });
    s
}

/// Return a lowercase section type name for standard format.
fn section_type_name_lower(sh_type: u32) -> &'static str {
    match sh_type {
        elf::SHT_NULL => "null",
        elf::SHT_PROGBITS => "progbits",
        elf::SHT_SYMTAB => "symtab",
        elf::SHT_STRTAB => "strtab",
        elf::SHT_RELA => "rela",
        elf::SHT_HASH => "hash",
        elf::SHT_DYNAMIC => "dynamic",
        elf::SHT_NOTE => "note",
        elf::SHT_NOBITS => "nobits",
        elf::SHT_REL => "rel",
        elf::SHT_SHLIB => "shlib",
        elf::SHT_DYNSYM => "dynsym",
        elf::SHT_INIT_ARRAY => "init_array",
        elf::SHT_FINI_ARRAY => "fini_array",
        elf::SHT_SHARC_ALIGN => "align",
        elf::SHT_SHARC_SYMCONSTR => "symconstr",
        elf::SHT_SHARC_ATTR => "proc_attr",
        elf::SHT_SHARC_SEG_INFO => "seg info",
        _ => "unknown",
    }
}

/// Dump section header table in standard format.
fn dump_section_headers(ctx: &ElfCtx<'_>, w: &mut dyn Write) -> io::Result<()> {
    writeln!(w, "\n---- ELF Section Header Table ----\n")?;
    writeln!(w, " Section Header Table ")?;
    writeln!(
        w,
        "index     type   flags    addr    offset  size:Bytes  link info align ensz name"
    )?;
    writeln!(w)?;
    for (i, sec) in ctx.sections.iter().enumerate() {
        let name = elf::read_string_at(ctx.shstrtab, sec.sh_name);
        let type_name = section_type_name_lower(sec.sh_type);
        writeln!(
            w,
            "{idx:04x} {tname:>9} {flags:08x} {addr:08x} {off:08x} {size:08x}:B {link:>4} {info:>4} {align:>4} {ensz:>4}   '{name}' ",
            idx = i,
            tname = type_name,
            flags = sec.sh_flags,
            addr = sec.sh_addr,
            off = sec.sh_offset,
            size = sec.sh_size,
            link = sec.sh_link,
            info = sec.sh_info,
            align = sec.sh_addralign,
            ensz = sec.sh_entsize,
        )?;
    }
    Ok(())
}

/// Dump note sections (-notes).
fn dump_notes(ctx: &ElfCtx<'_>, w: &mut dyn Write) -> io::Result<()> {
    for sec in ctx.sections {
        if sec.sh_type != SHT_NOTE {
            continue;
        }
        let name = elf::read_string_at(ctx.shstrtab, sec.sh_name);
        let start = sec.sh_offset as usize;
        let end = start + sec.sh_size as usize;
        if end > ctx.data.len() {
            continue;
        }
        let data = &ctx.data[start..end];
        writeln!(w, "\nNote section '{name}':")?;
        dump_note_data(data, ctx.header.ei_data, w)?;
    }
    Ok(())
}

fn dump_note_data(data: &[u8], endian: elf::Endian, w: &mut dyn Write) -> io::Result<()> {
    let mut pos = 0;
    while pos + 12 <= data.len() {
        let namesz = endian.read_u32(&data[pos..]) as usize;
        let descsz = endian.read_u32(&data[pos + 4..]) as usize;
        let note_type = endian.read_u32(&data[pos + 8..]);
        pos += 12;

        // Read name (aligned to 4)
        let name_end = pos + namesz;
        let name = if namesz > 0 && name_end <= data.len() {
            let s = std::str::from_utf8(&data[pos..name_end])
                .unwrap_or("")
                .trim_end_matches('\0');
            s.to_string()
        } else {
            String::new()
        };
        pos = align4(pos + namesz);

        // Read descriptor (aligned to 4)
        let desc_end = pos + descsz;
        let desc = if descsz > 0 && desc_end <= data.len() {
            &data[pos..desc_end]
        } else {
            &[]
        };
        pos = align4(pos + descsz);

        write!(w, "  Name: {name}, Type: {note_type}")?;
        if desc.is_empty() {
            writeln!(w)?;
        } else {
            write!(w, ", Desc:")?;
            for &b in desc {
                write!(w, " {b:02x}")?;
            }
            writeln!(w)?;
        }
    }
    Ok(())
}

fn align4(v: usize) -> usize {
    (v + 3) & !3
}

/// Write the section title line.
fn write_section_title(w: &mut dyn Write, name: &str, index: usize) -> io::Result<()> {
    writeln!(w, "\n---- Section: {name} [{index}] ----\n")
}

/// Dump sections matching a name pattern.
fn dump_sections_by_name(
    ctx: &ElfCtx<'_>,
    pattern: &str,
    fmt: &ContentFormat,
    omit_strtab: bool,
    w: &mut dyn Write,
) -> io::Result<()> {
    for (i, sec) in ctx.sections.iter().enumerate() {
        let name = elf::read_string_at(ctx.shstrtab, sec.sh_name);
        if glob::matches(pattern, name) {
            dump_section_content(ctx, i, sec, name, fmt, omit_strtab, w)?;
        }
    }
    Ok(())
}

/// Dump sections by index range.
fn dump_sections_by_index(
    ctx: &ElfCtx<'_>,
    start: u32,
    end: u32,
    fmt: &ContentFormat,
    omit_strtab: bool,
    w: &mut dyn Write,
) -> io::Result<()> {
    for i in start..=end {
        let idx = i as usize;
        if idx >= ctx.sections.len() {
            break;
        }
        let sec = &ctx.sections[idx];
        let name = elf::read_string_at(ctx.shstrtab, sec.sh_name);
        dump_section_content(ctx, idx, sec, name, fmt, omit_strtab, w)?;
    }
    Ok(())
}

/// Dump a single section's content.
fn dump_section_content(
    ctx: &ElfCtx<'_>,
    sec_idx: usize,
    sec: &Elf32Shdr,
    name: &str,
    fmt: &ContentFormat,
    omit_strtab: bool,
    w: &mut dyn Write,
) -> io::Result<()> {
    // When -ost is active and this is a string table with default format,
    // skip it entirely (no header, no content) to match reference behavior.
    if omit_strtab && sec.sh_type == SHT_STRTAB && matches!(fmt, ContentFormat::Default) {
        return Ok(());
    }

    write_section_title(w, name, sec_idx)?;

    if sec.sh_size == 0 {
        writeln!(w, "(empty)")?;
        return Ok(());
    }

    let start = sec.sh_offset as usize;
    let end = start + sec.sh_size as usize;
    if end > ctx.data.len() {
        writeln!(w, "  (section data out of bounds)")?;
        return Ok(());
    }
    let data = &ctx.data[start..end];

    match fmt {
        ContentFormat::Default => {
            dump_section_default(ctx, sec, name, data, w)?;
        }
        ContentFormat::HexAscii => {
            hex::dump_hex_ascii(data, sec.sh_addr, w)?;
        }
        ContentFormat::Hex { group_size } => {
            hex::dump_hex(data, sec.sh_addr, *group_size, *group_size, w)?;
        }
        ContentFormat::EntrySize => {
            hex::dump_entry_size(data, sec.sh_addr, sec.sh_entsize as usize, w)?;
        }
        ContentFormat::Hexlet {
            group_size,
            reverse,
        } => {
            hex::dump_hexlet(data, sec.sh_addr, *group_size, *reverse, w)?;
        }
        ContentFormat::Disasm => {
            let is_le = ctx.header.ei_data == elf::Endian::Little;
            let symbols = collect_symbols(ctx);
            dump_disasm(data, sec.sh_addr, is_le, &DisasmOpts {
                show_labels: false, mnemonic_only: false, symbols: &symbols,
                is_visa: detect_byte_width(sec) == 2,
            }, w)?;
        }
        ContentFormat::DisasmLabels => {
            let is_le = ctx.header.ei_data == elf::Endian::Little;
            let symbols = collect_symbols(ctx);
            dump_disasm(data, sec.sh_addr, is_le, &DisasmOpts {
                show_labels: true, mnemonic_only: false, symbols: &symbols,
                is_visa: detect_byte_width(sec) == 2,
            }, w)?;
        }
        ContentFormat::DisasmMnemonic => {
            let is_le = ctx.header.ei_data == elf::Endian::Little;
            let symbols = collect_symbols(ctx);
            dump_disasm(data, sec.sh_addr, is_le, &DisasmOpts {
                show_labels: false, mnemonic_only: true, symbols: &symbols,
                is_visa: detect_byte_width(sec) == 2,
            }, w)?;
        }
    }
    Ok(())
}

/// Default formatting: choose based on section type.
fn dump_section_default(
    ctx: &ElfCtx<'_>,
    sec: &Elf32Shdr,
    name: &str,
    data: &[u8],
    w: &mut dyn Write,
) -> io::Result<()> {
    // Try DWARF debug section renderers first
    if name.starts_with(".debug_") {
        let handled = crate::dwarf::try_dump_debug_section(
            name,
            data,
            ctx.sections,
            ctx.shstrtab,
            ctx.data,
            ctx.header.ei_data,
            w,
        )?;
        if handled {
            return Ok(());
        }
    }

    match sec.sh_type {
        SHT_SYMTAB | SHT_DYNSYM => dump_symbol_table(ctx, sec, data, w),
        SHT_STRTAB if name == ".attributes" => dump_attributes_table(data, name, w),
        SHT_STRTAB => dump_string_table(data, name, w),
        SHT_RELA => dump_rela_table(ctx, sec, name, data, w),
        SHT_REL => dump_rel_table(ctx, sec, name, data, w),
        SHT_NOTE => dump_note_data(data, ctx.header.ei_data, w),
        SHT_SHARC_ATTR => dump_proc_attributes(ctx, data, w),
        SHT_SHARC_ALIGN => dump_align_table(ctx, sec, data, w),
        SHT_SHARC_SYMCONSTR => dump_symconstraint_table(ctx, sec, data, w),
        SHT_PROGBITS if sec.sh_flags & SHF_EXECINSTR != 0 => {
            let is_le = ctx.header.ei_data == elf::Endian::Little;
            let symbols = collect_symbols(ctx);
            dump_disasm(data, sec.sh_addr, is_le, &DisasmOpts {
                show_labels: false, mnemonic_only: false, symbols: &symbols,
                is_visa: detect_byte_width(sec) == 2,
            }, w)
        }
        _ if name == ".adi.attributes" => dump_proc_attributes(ctx, data, w),
        _ => hex::dump_hex_ascii(data, sec.sh_addr, w),
    }
}

/// Dump a SHARC alignment table section (SHT_SHARC_ALIGN).
///
/// Each entry is `sh_entsize` bytes (typically 12). The section's `sh_info`
/// points to the related code section whose name appears in the title.
///
/// Entry layout (3 x u32):
///   u32[0]: offset
///   u32[1]: (count << 16) | value
///   u32[2]: (ptype << 24) | (pAPI << 16) | (iaType << 8) | (iaSrc << 4) | pass
fn dump_align_table(
    ctx: &ElfCtx<'_>,
    sec: &Elf32Shdr,
    data: &[u8],
    w: &mut dyn Write,
) -> io::Result<()> {
    let endian = ctx.header.ei_data;
    let entsize = if sec.sh_entsize > 0 {
        sec.sh_entsize as usize
    } else {
        12
    };

    // Resolve the related section name from sh_info.
    let related_name = if (sec.sh_info as usize) < ctx.sections.len() {
        let related = &ctx.sections[sec.sh_info as usize];
        elf::read_string_at(ctx.shstrtab, related.sh_name)
    } else {
        ""
    };

    writeln!(w, "\nAlignment Table for section {related_name}")?;
    writeln!(
        w,
        "    offset    count    value ptype pAPI iaType iaSrc pass"
    )?;
    writeln!(w)?;

    let count = data.len() / entsize;
    for i in 0..count {
        let off = i * entsize;
        if off + 12 > data.len() {
            break;
        }
        let offset = endian.read_u32(&data[off..]);
        let word1 = endian.read_u32(&data[off + 4..]);
        let word2 = endian.read_u32(&data[off + 8..]);

        let cnt = (word1 >> 16) & 0xFFFF;
        let value = word1 & 0xFFFF;
        let ptype = (word2 >> 24) & 0xFF;
        let p_api = (word2 >> 16) & 0xFF;
        let ia_type = (word2 >> 8) & 0xFF;
        let ia_src = (word2 >> 4) & 0xF;
        let pass = word2 & 0xF;

        writeln!(
            w,
            "0x{offset:08x} {cnt:>8} {value:>8} {ptype:>5} {p_api:>4} {ia_type:>6} {ia_src:>5} {pass:>4}",
        )?;
    }
    Ok(())
}

/// Dump a SHARC symbol constraint table section (SHT_SHARC_SYMCONSTR).
///
/// Each entry is `sh_entsize` bytes (typically 16): four u32 fields
/// representing sym1_name_offset, sym2_name_offset, type, and info.
/// Name offsets index into the string table linked via the symtab
/// (sh_link -> symtab -> sh_link -> strtab).
fn dump_symconstraint_table(
    ctx: &ElfCtx<'_>,
    sec: &Elf32Shdr,
    data: &[u8],
    w: &mut dyn Write,
) -> io::Result<()> {
    let endian = ctx.header.ei_data;
    let entsize = if sec.sh_entsize > 0 {
        sec.sh_entsize as usize
    } else {
        16
    };

    // Resolve the strtab: sh_link -> symtab -> sh_link -> strtab.
    let (_, strtab) = resolve_rela_symbols(ctx, sec);

    writeln!(w, "\nSymbol Constraint Table")?;
    writeln!(w, "symbol1   symbol2     type      info")?;

    let count = data.len() / entsize;
    for i in 0..count {
        let off = i * entsize;
        if off + 16 > data.len() {
            break;
        }
        let sym1_off = endian.read_u32(&data[off..]);
        let sym2_off = endian.read_u32(&data[off + 4..]);
        let ctype = endian.read_u32(&data[off + 8..]);
        let info = endian.read_u32(&data[off + 12..]);

        let sym1 = elf::read_string_at(strtab, sym1_off);
        let sym2 = elf::read_string_at(strtab, sym2_off);

        // Render empty sym2 as <null> appended to sym1.
        if sym2.is_empty() {
            writeln!(
                w,
                "{sym1}<null> {ctype:>12} {info:>8}",
            )?;
        } else {
            let pad = 10usize.saturating_sub(sym1.len());
            let spaces = " ".repeat(pad);
            writeln!(
                w,
                "{sym1}{spaces}{sym2} {ctype:>12} {info:>8}",
            )?;
        }
    }
    Ok(())
}

/// Dump a symbol table section in standard format.
fn dump_symbol_table(
    ctx: &ElfCtx<'_>,
    sec: &Elf32Shdr,
    data: &[u8],
    w: &mut dyn Write,
) -> io::Result<()> {
    let entsize = if sec.sh_entsize > 0 {
        sec.sh_entsize as usize
    } else {
        16
    };
    let strtab_idx = sec.sh_link as usize;
    let strtab = if strtab_idx < ctx.sections.len() {
        let strsec = &ctx.sections[strtab_idx];
        let off = strsec.sh_offset as usize;
        let sz = strsec.sh_size as usize;
        if off + sz <= ctx.data.len() {
            &ctx.data[off..off + sz]
        } else {
            &[]
        }
    } else {
        &[]
    };

    writeln!(w, "\n Symbol Table ")?;
    writeln!(
        w,
        "ndx   shndx     value      size      type      bind     flags    name                             demangled name"
    )?;
    let nsyms = data.len() / entsize;
    for i in 0..nsyms {
        let off = i * entsize;
        if off + entsize > data.len() {
            break;
        }
        let sym = elf::parse_symbol(&data[off..], ctx.header.ei_data);
        let name = elf::read_string_at(strtab, sym.st_name);
        let bind = symbol_bind_lower(sym.bind());
        let stype = symbol_type_lower(sym.sym_type());
        let ndx_str = format_shndx(sym.st_shndx);
        writeln!(
            w,
            "{idx:04x} {ndx:>8} {val:08x}  {size:08x}  {stype:>8}  {bind:>8}  {flags:08x}  '{name}'",
            idx = i,
            ndx = ndx_str,
            val = sym.st_value,
            size = sym.st_size,
            flags = 0u32,
        )?;
    }
    Ok(())
}

/// Format the shndx field for symbol table output.
fn format_shndx(shndx: u16) -> String {
    const SHN_ABS: u16 = 0xfff1;
    if shndx == elf::SHN_UNDEF {
        "UNDEF".to_string()
    } else if shndx == SHN_ABS {
        "ABS".to_string()
    } else {
        format!("{:08x}", shndx)
    }
}

/// Lowercase symbol type name for standard output.
fn symbol_type_lower(stype: u8) -> &'static str {
    match stype {
        elf::STT_NOTYPE => "none",
        elf::STT_OBJECT => "object",
        elf::STT_FUNC => "function",
        elf::STT_SECTION => "section",
        elf::STT_FILE => "file",
        _ => "unknown",
    }
}

/// Lowercase symbol bind name for standard output.
fn symbol_bind_lower(bind: u8) -> &'static str {
    match bind {
        elf::STB_LOCAL => "local",
        elf::STB_GLOBAL => "global",
        elf::STB_WEAK => "weak",
        _ => "unknown",
    }
}

/// Dump a string table section in standard format.
pub fn dump_string_table(data: &[u8], name: &str, w: &mut dyn Write) -> io::Result<()> {
    writeln!(w, "\n String Table for section {name}  ")?;
    let mut pos = 0;
    while pos < data.len() {
        let start = pos;
        // Find the null terminator
        let end = data[pos..]
            .iter()
            .position(|&b| b == 0)
            .map(|p| pos + p)
            .unwrap_or(data.len());
        let s = std::str::from_utf8(&data[start..end]).unwrap_or("<invalid>");
        writeln!(w, "0x{start:x}\t'{s}' ")?;
        pos = end + 1;
    }
    Ok(())
}

/// Dump an `.attributes` section as a tab-separated key-value table.
///
/// The `.attributes` section has type STRTAB but contains tab-separated
/// key-value pairs set by the assembler via `.FILE_ATTR` directives.
fn dump_attributes_table(data: &[u8], name: &str, w: &mut dyn Write) -> io::Result<()> {
    writeln!(w, "\n Attributes Table {name} (strtab)")?;
    writeln!(w, "offset\tattribute\tvalue\n")?;
    let mut pos = 0;
    while pos < data.len() {
        let start = pos;
        let end = data[pos..]
            .iter()
            .position(|&b| b == 0)
            .map(|p| pos + p)
            .unwrap_or(data.len());
        let s = std::str::from_utf8(&data[start..end]).unwrap_or("<invalid>");
        if let Some((attr, val)) = s.split_once('\t') {
            writeln!(w, "0x{start:x}\t'{attr}'\t'{val}' ")?;
        } else {
            writeln!(w, "0x{start:x}\t'{s}' ")?;
        }
        pos = end + 1;
    }
    Ok(())
}

/// Resolve the symbol string table for a relocation section by following
/// sh_link (-> symtab) -> sh_link (-> strtab).
fn resolve_rela_symbols<'a>(ctx: &ElfCtx<'a>, rela_sec: &Elf32Shdr) -> (&'a [u8], &'a [u8]) {
    let symtab_idx = rela_sec.sh_link as usize;
    if symtab_idx >= ctx.sections.len() {
        return (&[], &[]);
    }
    let symtab_sec = &ctx.sections[symtab_idx];
    let sym_off = symtab_sec.sh_offset as usize;
    let sym_sz = symtab_sec.sh_size as usize;
    if sym_off + sym_sz > ctx.data.len() {
        return (&[], &[]);
    }
    let sym_data = &ctx.data[sym_off..sym_off + sym_sz];

    let strtab_idx = symtab_sec.sh_link as usize;
    if strtab_idx >= ctx.sections.len() {
        return (sym_data, &[]);
    }
    let strtab_sec = &ctx.sections[strtab_idx];
    let str_off = strtab_sec.sh_offset as usize;
    let str_sz = strtab_sec.sh_size as usize;
    if str_off + str_sz > ctx.data.len() {
        return (sym_data, &[]);
    }
    (sym_data, &ctx.data[str_off..str_off + str_sz])
}

/// Look up the name of a symbol by index in the symbol table data.
fn lookup_symbol_name<'a>(
    sym_data: &[u8],
    strtab: &'a [u8],
    sym_idx: u32,
    endian: elf::Endian,
) -> &'a str {
    let entsize = 16usize; // Elf32_Sym
    let off = sym_idx as usize * entsize;
    if off + entsize > sym_data.len() {
        return "";
    }
    let sym = elf::parse_symbol(&sym_data[off..], endian);
    elf::read_string_at(strtab, sym.st_name)
}

/// Dump a SHT_RELA relocation table in standard format.
fn dump_rela_table(
    ctx: &ElfCtx<'_>,
    sec: &Elf32Shdr,
    name: &str,
    data: &[u8],
    w: &mut dyn Write,
) -> io::Result<()> {
    let endian = ctx.header.ei_data;
    let (sym_data, strtab) = resolve_rela_symbols(ctx, sec);
    writeln!(w, "\n Relocation Table for section {name}  ")?;
    writeln!(w, "  offset      type    addend  symbol")?;
    writeln!(w)?;
    let entry_size = 12; // Elf32_Rela
    let count = data.len() / entry_size;
    for i in 0..count {
        let off = i * entry_size;
        if off + entry_size > data.len() {
            break;
        }
        let rela = elf::parse_rela(&data[off..], endian);
        let sym_idx = rela.r_info >> 8;
        let rel_type = rela.r_info & 0xff;
        let name = lookup_symbol_name(sym_data, strtab, sym_idx, endian);
        writeln!(
            w,
            "{roff:08x}      0x{rel_type:02x} {addend:08x}  {name}",
            roff = rela.r_offset,
            addend = rela.r_addend as u32,
        )?;
    }
    Ok(())
}

/// Dump a SHT_REL relocation table.
fn dump_rel_table(
    ctx: &ElfCtx<'_>,
    sec: &Elf32Shdr,
    name: &str,
    data: &[u8],
    w: &mut dyn Write,
) -> io::Result<()> {
    let endian = ctx.header.ei_data;
    let (sym_data, strtab) = resolve_rela_symbols(ctx, sec);
    writeln!(w, "\n Relocation Table for section {name}  ")?;
    writeln!(w, "  offset      type  symbol")?;
    writeln!(w)?;
    let entry_size = 8; // Elf32_Rel
    let count = data.len() / entry_size;
    for i in 0..count {
        let off = i * entry_size;
        if off + entry_size > data.len() {
            break;
        }
        let rel = elf::parse_rel(&data[off..], endian);
        let sym_idx = rel.r_info >> 8;
        let rel_type = rel.r_info & 0xff;
        let name = lookup_symbol_name(sym_data, strtab, sym_idx, endian);
        writeln!(
            w,
            "{roff:08x}      0x{rel_type:02x}  {name}",
            roff = rel.r_offset,
        )?;
    }
    Ok(())
}

/// Collect all symbols from the ELF for label lookup in disassembly.
fn collect_symbols(ctx: &ElfCtx<'_>) -> Vec<(u32, String, u32, u8)> {
    let mut symbols = Vec::new();
    for sec in ctx.sections {
        if sec.sh_type != SHT_SYMTAB && sec.sh_type != SHT_DYNSYM {
            continue;
        }
        let entsize = if sec.sh_entsize > 0 {
            sec.sh_entsize as usize
        } else {
            16
        };
        let strtab_idx = sec.sh_link as usize;
        let strtab = if strtab_idx < ctx.sections.len() {
            let strsec = &ctx.sections[strtab_idx];
            let off = strsec.sh_offset as usize;
            let sz = strsec.sh_size as usize;
            if off + sz <= ctx.data.len() {
                &ctx.data[off..off + sz]
            } else {
                continue;
            }
        } else {
            continue;
        };

        let sym_off = sec.sh_offset as usize;
        let sym_end = sym_off + sec.sh_size as usize;
        if sym_end > ctx.data.len() {
            continue;
        }
        let sym_data = &ctx.data[sym_off..sym_end];
        let nsyms = sym_data.len() / entsize;
        for i in 0..nsyms {
            let off = i * entsize;
            if off + entsize > sym_data.len() {
                break;
            }
            let sym = elf::parse_symbol(&sym_data[off..], ctx.header.ei_data);
            if sym.st_shndx != elf::SHN_UNDEF {
                let name = elf::read_string_at(strtab, sym.st_name);
                if !name.is_empty() {
                    symbols.push((sym.st_value, name.to_string(), sym.st_size, sym.bind()));
                }
            }
        }
    }
    symbols
}

/// Detect byte width for a code section.
/// Returns 2 for VISA, 6 for ISA.
///
/// The short-word-code ("seg_swco") layout used by selas for
/// VISA-mode output sets `sh_entsize = 1` on the section header, and
/// that is the authoritative signal: every VISA section emitted by
/// `ElfWriter::add_text_section_sw` carries it, while plain ISA
/// sections leave `sh_entsize = 0`. `sh_addralign == 2` is the
/// signal for the alternative VISA layout
/// (`add_text_section_visa`). Falling back to "size not a multiple of
/// 6" only catches VISA sections that happen to contain at least one
/// compressed parcel whose length is not evenly divisible by 6 -- a
/// correct VISA loop body of exactly four 48-bit instructions, for
/// instance, would be 24 bytes and would be misdetected as ISA.
fn detect_byte_width(sec: &Elf32Shdr) -> u32 {
    if sec.sh_entsize == 1 {
        return 2;
    }
    if sec.sh_addralign == 2 {
        return 2;
    }
    if !sec.sh_size.is_multiple_of(6) && sec.sh_size.is_multiple_of(2) {
        return 2;
    }
    6
}

/// Score a symbol name for preference when multiple symbols share an address.
/// Higher score = more preferred.
fn symbol_priority(name: &str, size: u32, binding: u8) -> u32 {
    let mut score = 0u32;
    // Prefer symbols with non-zero size (they're "real" definitions)
    if size > 0 {
        score += 100;
    }
    // Weak symbols are least preferred
    if binding != elf::STB_WEAK {
        score += 200;
    }
    // Compiler-generated local labels like `.P33L7` are least preferred
    let is_local_label = name.starts_with(".P") && name.contains('L');
    if !is_local_label {
        score += 50;
    }
    // Prefer names that don't start with underscore
    if !name.starts_with('_') {
        score += 10;
    }
    // Prefer shorter names (tie-breaker)
    score += (200u32.saturating_sub(name.len() as u32)) / 10;
    score
}

/// Build a HashMap from address to symbol name for fast lookup.
fn build_symbol_map(symbols: &[(u32, String, u32, u8)]) -> HashMap<u32, String> {
    let mut map: HashMap<u32, (String, u32)> = HashMap::new();
    for (addr, name, size, binding) in symbols {
        // Skip file-path symbols and empty names.
        if name.is_empty() || name.contains('\\') || name.contains('/') {
            continue;
        }
        let new_prio = symbol_priority(name, *size, *binding);
        let dominated = map.get(addr).is_some_and(|(_existing, existing_prio)| {
            *existing_prio >= new_prio
        });
        if !dominated {
            map.insert(*addr, (name.clone(), new_prio));
        }
    }
    map.into_iter().map(|(addr, (name, _))| (addr, name)).collect()
}

/// Format a symbol name for disassembly output.
///
/// Symbol names from the ELF already include standard conventions (trailing `.`
/// for globals, `.` prefix for local labels), so we use them as-is.
fn format_symbol(name: &str) -> String {
    name.to_string()
}

/// Replace hex addresses in disassembly text with symbol names.
///
/// Handles:
/// - Absolute addresses: `0x{hex}` → symbol name
/// - PC-relative in `(pc,0x{hex})`: compute target = line_addr + offset, look up
fn resolve_symbols_in_text(
    text: &str,
    line_addr: u32,
    sym_map: &HashMap<u32, String>,
) -> String {
    // Handle PC-relative: `(pc,0x{hex})` or `(pc,-0x{hex})`
    // For PC-relative, the offset in the text is the raw value; target = line_addr + offset
    // But we need to check: the offset is a signed value relative to PC.
    // Our disassembler outputs unsigned hex. Let's handle both positive and negative.
    let result = resolve_pc_relative(text, line_addr, sym_map);
    // Handle absolute addresses: standalone `0x{hex}` not inside `(pc,...)`
    resolve_absolute(&result, sym_map)
}

/// Replace PC-relative offsets with symbol names.
fn resolve_pc_relative(
    text: &str,
    line_addr: u32,
    sym_map: &HashMap<u32, String>,
) -> String {
    let mut result = text.to_string();
    // Pattern: (pc,0x{hex}) or (pc,-0x{hex})
    let mut search_from = 0;
    loop {
        let pc_pat = "(pc,";
        let start = match result[search_from..].find(pc_pat) {
            Some(pos) => search_from + pos,
            None => break,
        };
        let after_pc = start + pc_pat.len();
        let rest = &result[after_pc..];

        let negative = rest.starts_with('-');
        // Do not resolve negative (backward) PC-relative offsets
        // to symbols — skip them.
        if negative {
            search_from = after_pc;
            continue;
        }
        let hex_start = if !rest.starts_with("0x") {
            search_from = after_pc;
            continue;
        } else {
            2 // skip "0x"
        };

        let hex_str_start = after_pc + hex_start;
        let hex_end = result[hex_str_start..]
            .find(|c: char| !c.is_ascii_hexdigit())
            .map_or(result.len(), |p| hex_str_start + p);
        let hex_str = &result[hex_str_start..hex_end];
        if hex_str.is_empty() {
            search_from = after_pc;
            continue;
        }
        let offset = match u32::from_str_radix(hex_str, 16) {
            Ok(v) => v,
            Err(_) => {
                search_from = after_pc;
                continue;
            }
        };
        let target = line_addr.wrapping_add(offset);
        if let Some(sym_name) = sym_map.get(&target) {
            let replacement = format_symbol(sym_name);
            let replace_start = after_pc; // start of "-0x..." or "0x..."
            let replace_end = hex_end;
            result = format!(
                "{}{}{}",
                &result[..replace_start],
                replacement,
                &result[replace_end..]
            );
            search_from = replace_start + replacement.len();
        } else {
            search_from = after_pc;
        }
    }
    result
}

/// Replace absolute hex addresses (0x{hex}) with symbol names.
fn resolve_absolute(text: &str, sym_map: &HashMap<u32, String>) -> String {
    let mut result = text.to_string();
    let mut search_from = 0;
    loop {
        let hex_prefix = "0x";
        let start = match result[search_from..].find(hex_prefix) {
            Some(pos) => search_from + pos,
            None => break,
        };

        // Make sure this isn't inside a (pc,...) — those are already handled
        // Check if preceded by "(pc," within the last few chars
        let context_start = start.saturating_sub(4);
        if result[context_start..start].contains("pc,")
            || result[context_start..start].contains("pc,-")
        {
            search_from = start + 2;
            continue;
        }

        let hex_start = start + 2;
        let hex_end = result[hex_start..]
            .find(|c: char| !c.is_ascii_hexdigit())
            .map_or(result.len(), |p| hex_start + p);
        let hex_str = &result[hex_start..hex_end];
        if hex_str.is_empty() {
            search_from = start + 2;
            continue;
        }
        let addr = match u32::from_str_radix(hex_str, 16) {
            Ok(v) => v,
            Err(_) => {
                search_from = start + 2;
                continue;
            }
        };
        if let Some(sym_name) = sym_map.get(&addr) {
            let replacement = format_symbol(sym_name);
            result = format!(
                "{}{}{}",
                &result[..start],
                replacement,
                &result[hex_end..]
            );
            search_from = start + replacement.len();
        } else {
            search_from = start + 2;
        }
    }
    result
}

struct DisasmOpts<'a> {
    show_labels: bool,
    mnemonic_only: bool,
    symbols: &'a [(u32, String, u32, u8)],
    is_visa: bool,
}

/// Dump disassembly (ISA or VISA depending on byte width).
fn dump_disasm(
    data: &[u8],
    base_addr: u32,
    _little_endian: bool,
    opts: &DisasmOpts<'_>,
    w: &mut dyn Write,
) -> io::Result<()> {
    let show_labels = opts.show_labels;
    let mnemonic_only = opts.mnemonic_only;
    let symbols = opts.symbols;
    let sym_map = build_symbol_map(symbols);
    if opts.is_visa {
        let lines = selinstr::visa::disassemble_visa(
            data,
            base_addr,
            selinstr::disasm::decode_instruction,
        );
        for line in &lines {
            if show_labels {
                for (addr, name, _size, _bind) in symbols {
                    if *addr == line.addr {
                        writeln!(w, "{name}:")?;
                    }
                }
            }
            let text = if sym_map.is_empty() {
                line.text.clone()
            } else {
                resolve_symbols_in_text(&line.text, line.addr, &sym_map)
            };
            if mnemonic_only {
                writeln!(w, "  {text}")?;
            } else {
                write!(w, "  {:08x}   ", line.addr)?;
                for &b in &line.raw {
                    write!(w, "{b:02x}")?;
                }
                writeln!(w, "   {text}")?;
            }
        }
    } else {
        // SHARC+ instructions are always stored in big-endian byte order
        // within ELF sections, regardless of the ELF's EI_DATA field.
        let lines = selinstr::disasm::disassemble(data, base_addr, false);
        for line in &lines {
            if show_labels {
                for (addr, name, _size, _bind) in symbols {
                    if *addr == line.addr {
                        writeln!(w, "{name}:")?;
                    }
                }
            }
            let text = if sym_map.is_empty() {
                line.text.clone()
            } else {
                resolve_symbols_in_text(&line.text, line.addr, &sym_map)
            };
            if mnemonic_only {
                writeln!(w, "  {text}")?;
            } else {
                write!(w, "  {:08x}   ", line.addr)?;
                for &b in &line.raw {
                    write!(w, "{b:02x}")?;
                }
                writeln!(w, "   {text}")?;
            }
        }
    }
    Ok(())
}

/// Dump archive symbol table (-arsym) in standard format.
pub fn dump_arsym(archive_data: &[u8], w: &mut dyn Write) -> io::Result<()> {
    // Find the `/` member manually -- it's the first member after the magic
    let magic_len = 8;
    if archive_data.len() < magic_len + 60 {
        writeln!(w, "No archive symbol table found.")?;
        return Ok(());
    }

    let hdr = &archive_data[magic_len..magic_len + 60];
    // Check fmag
    if &hdr[58..60] != b"`\n" {
        writeln!(w, "No archive symbol table found.")?;
        return Ok(());
    }
    let raw_name = std::str::from_utf8(&hdr[0..16])
        .unwrap_or("")
        .trim_end();
    if raw_name != "/" {
        writeln!(w, "No archive symbol table found.")?;
        return Ok(());
    }

    let raw_size = std::str::from_utf8(&hdr[48..58]).unwrap_or("").trim();
    let size: usize = raw_size.parse().unwrap_or(0);
    let content_start = magic_len + 60;
    let content_end = content_start + size;
    if content_end > archive_data.len() {
        writeln!(w, "Archive symbol table truncated.")?;
        return Ok(());
    }
    let symtab_data = &archive_data[content_start..content_end];

    // Locate the extended names member (`//`) for resolving long member names
    let extnames = find_extnames_data(archive_data);

    match symindex::parse(symtab_data) {
        Ok(entries) => {
            writeln!(w, "Archive Symbol Table ")?;
            writeln!(w, " name   off hash ")?;
            for (name, offset) in &entries {
                let member =
                    member_name_at_offset(archive_data, *offset, &extnames);
                // standard format: name + gap = at least 34 chars, with a
                // minimum gap of 2 spaces before the offset.
                let pad = (34usize.saturating_sub(name.len())).max(2);
                let spaces = " ".repeat(pad);
                writeln!(
                    w,
                    "{name}{spaces}{offset}  {member}",
                )?;
            }
        }
        Err(e) => {
            writeln!(w, "Error parsing archive symbol table: {e}")?;
        }
    }
    Ok(())
}

/// Find the extended names (`//`) member data in an archive.
fn find_extnames_data(archive_data: &[u8]) -> Vec<u8> {
    let magic_len = 8;
    let mut pos = magic_len;
    while pos + 60 <= archive_data.len() {
        let hdr = &archive_data[pos..pos + 60];
        if &hdr[58..60] != b"`\n" {
            break;
        }
        let raw_name = std::str::from_utf8(&hdr[0..16]).unwrap_or("").trim_end();
        let raw_size = std::str::from_utf8(&hdr[48..58]).unwrap_or("").trim();
        let size: usize = raw_size.parse().unwrap_or(0);
        let content_start = pos + 60;
        let content_end = content_start + size;
        if raw_name == "//" && content_end <= archive_data.len() {
            return archive_data[content_start..content_end].to_vec();
        }
        // Advance to next member (size padded to 2-byte boundary)
        let padded = (size + 1) & !1;
        pos = content_start + padded;
    }
    Vec::new()
}

/// Read an archive member name from the member header at a given offset,
/// resolving extended names via the `//` table when necessary.
fn member_name_at_offset(archive_data: &[u8], offset: u32, extnames: &[u8]) -> String {
    let off = offset as usize;
    if off + 60 > archive_data.len() {
        return String::new();
    }
    let hdr = &archive_data[off..off + 60];
    // Verify fmag
    if &hdr[58..60] != b"`\n" {
        return String::new();
    }
    let raw_name = std::str::from_utf8(&hdr[0..16]).unwrap_or("").trim();
    // Resolve extended name references like `/123`
    if let Some(rest) = raw_name.strip_prefix('/') {
        if let Ok(ext_offset) = rest.parse::<usize>() {
            if let Some(resolved) = extnames::lookup(extnames, ext_offset) {
                return resolved;
            }
        }
    }
    raw_name.strip_suffix('/').unwrap_or(raw_name).to_string()
}

/// Dump an archive, dispatching to dump_elf for each matching member.
pub fn dump_archive(
    archive: &Archive,
    member_pattern: Option<&str>,
    opts: &Options,
    w: &mut dyn Write,
) -> io::Result<()> {
    for member in &archive.members {
        let matches = match member_pattern {
            Some(pat) => glob::matches(pat, &member.name),
            None => opts.show_arall,
        };
        if matches {
            writeln!(w, "\n=== Archive member: {} ===", member.name)?;
            dump_elf(&member.data, opts, w)?;
        }
    }
    Ok(())
}

// --- Internal helpers ---

fn parse_all_sections(data: &[u8], header: &Elf32Header) -> Vec<Elf32Shdr> {
    let mut sections = Vec::with_capacity(header.e_shnum as usize);
    for i in 0..header.e_shnum as usize {
        let off = header.e_shoff as usize + i * header.e_shentsize as usize;
        if off + header.e_shentsize as usize > data.len() {
            break;
        }
        sections.push(elf::parse_section_header(&data[off..], header.ei_data));
    }
    sections
}

fn get_shstrtab<'a>(data: &'a [u8], header: &Elf32Header, sections: &[Elf32Shdr]) -> &'a [u8] {
    let idx = header.e_shstrndx as usize;
    if idx < sections.len() {
        let sec = &sections[idx];
        let off = sec.sh_offset as usize;
        let sz = sec.sh_size as usize;
        if off + sz <= data.len() {
            return &data[off..off + sz];
        }
    }
    &[]
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_file_header_dump() {
        let data = selelf::testutil::make_elf_object(0x85, elf::ELFDATA2LSB, &[]);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };
        let mut out = Vec::new();
        dump_file_header(&ctx, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("---- ELF File Header ----"));
        assert!(s.contains("ELF Header"));
        assert!(s.contains("2LSB"));
        assert!(s.contains("relo"));
        assert!(s.contains("SHARC"));
        assert!(s.contains("32-bit"));
    }

    #[test]
    fn test_section_headers_dump() {
        let data =
            selelf::testutil::make_elf_object(0x85, elf::ELFDATA2LSB, &[("_main", true)]);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };
        let mut out = Vec::new();
        dump_section_headers(&ctx, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("---- ELF Section Header Table ----"));
        assert!(s.contains("Section Header Table"));
        assert!(s.contains(".shstrtab"));
        assert!(s.contains(".text"));
        assert!(s.contains(".symtab"));
        assert!(s.contains("symtab"));
    }

    #[test]
    fn test_symbol_table_dump() {
        let data = selelf::testutil::make_elf_object(
            0x85,
            elf::ELFDATA2LSB,
            &[("_main", true), ("_helper", true)],
        );
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        // Find symtab section
        let symtab_sec = sections.iter().find(|s| s.sh_type == SHT_SYMTAB).unwrap();
        let sym_data = &data[symtab_sec.sh_offset as usize
            ..(symtab_sec.sh_offset + symtab_sec.sh_size) as usize];
        let mut out = Vec::new();
        dump_symbol_table(&ctx, symtab_sec, sym_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("_main"));
        assert!(s.contains("_helper"));
        assert!(s.contains("global"));
        assert!(s.contains("function"));
    }

    #[test]
    fn test_string_table_dump() {
        let data = b"\0hello\0world\0";
        let mut out = Vec::new();
        dump_string_table(data, ".strtab", &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("hello"));
        assert!(s.contains("world"));
        assert!(s.contains("String Table for section .strtab"));
        // Should include the empty string at offset 0
        assert!(s.contains("0x0\t''"));
    }

    #[test]
    fn test_dump_elf_default_shows_section_headers() {
        let data = selelf::testutil::make_elf_object(0x85, elf::ELFDATA2LSB, &[]);
        let opts = Options {
            show_file_header: false,
            show_program_headers: false,
            show_section_headers: false,
            show_notes: false,
            section_names: vec![],
            section_indices: vec![],
            omit_string_tables: false,
            show_version: false,
            show_help: false,
            show_arsym: false,
            show_arall: false,
            file: None,
            archive_member: None,
        };
        let mut out = Vec::new();
        dump_elf(&data, &opts, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("---- ELF Section Header Table ----"));
    }

    #[test]
    fn test_program_headers_none() {
        let data = selelf::testutil::make_elf_object(0x85, elf::ELFDATA2LSB, &[]);
        let header = elf::parse_header(&data).unwrap();
        let mut out = Vec::new();
        dump_program_headers(&data, &header, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        // Synthetic ELF has e_phentsize=0, treated as no program headers.
        assert!(s.contains("(empty)"), "output was: {s}");
    }

    /// Build a synthetic `.adi.attributes` section blob.
    ///
    /// Encodes: 'A' + u32 length + "AnonADI\0" + file-scope tag 1 +
    /// tags 4 (cpu_name), 5 (version=1), 6 (cpu_proc), 7 (si_rev).
    fn make_proc_attr_section(cpu_name: &str, proc_idx: u64, si_rev: u64) -> Vec<u8> {
        let mut tags = Vec::new();

        // Tag 1: file-scope sub-subsection (tag as ULEB128, length as u32 LE)
        encode_uleb128(&mut tags, 1);
        // Build inner content first to compute length
        let mut inner = Vec::new();
        // Tag 4: CPU_name (null-terminated string)
        encode_uleb128(&mut inner, 4);
        inner.extend_from_slice(cpu_name.as_bytes());
        inner.push(0);
        // Tag 5: version = 1
        encode_uleb128(&mut inner, 5);
        encode_uleb128(&mut inner, 1);
        // Tag 6: CPU_proc index
        encode_uleb128(&mut inner, 6);
        encode_uleb128(&mut inner, proc_idx);
        // Tag 7: silicon revision
        encode_uleb128(&mut inner, 7);
        encode_uleb128(&mut inner, si_rev);

        tags.extend_from_slice(&(inner.len() as u32).to_le_bytes());
        tags.extend_from_slice(&inner);

        let producer = b"AnonADI\0";
        let total_len = (4 + producer.len() + tags.len()) as u32;

        let mut data = Vec::new();
        data.push(0x41); // 'A'
        data.extend_from_slice(&total_len.to_le_bytes());
        data.extend_from_slice(producer);
        data.extend_from_slice(&tags);
        data
    }

    /// Build a synthetic `.adi.attributes` with per-section attributes.
    fn make_proc_attr_with_sections(
        cpu_name: &str,
        proc_idx: u64,
        si_rev: u64,
        section_attrs: &[(u64, u64)], // (section_index, mem_kind)
    ) -> Vec<u8> {
        let mut tags = Vec::new();

        // Tag 1: file-scope sub-subsection (u32 LE length)
        encode_uleb128(&mut tags, 1);
        let mut inner = Vec::new();
        encode_uleb128(&mut inner, 4);
        inner.extend_from_slice(cpu_name.as_bytes());
        inner.push(0);
        encode_uleb128(&mut inner, 5);
        encode_uleb128(&mut inner, 1);
        encode_uleb128(&mut inner, 6);
        encode_uleb128(&mut inner, proc_idx);
        encode_uleb128(&mut inner, 7);
        encode_uleb128(&mut inner, si_rev);
        tags.extend_from_slice(&(inner.len() as u32).to_le_bytes());
        tags.extend_from_slice(&inner);

        // Per-section attributes via tag 2 sub-subsections
        // Format: tag(1) + u32_total_size + u16_section_index + tag(0x12) + mem_kind(1)
        for (sec_idx, mem_kind) in section_attrs {
            tags.push(2); // tag
            let content_len = 2 + 1 + 1; // u16 sec_idx + tag 0x12 + mem_kind byte
            let total = 1 + 4 + content_len; // tag + length + content
            tags.extend_from_slice(&(total as u32).to_le_bytes());
            tags.extend_from_slice(&(*sec_idx as u16).to_le_bytes());
            tags.push(0x12);
            tags.push(*mem_kind as u8);
        }

        let producer = b"AnonADI\0";
        let total_len = (4 + producer.len() + tags.len()) as u32;

        let mut data = Vec::new();
        data.push(0x41);
        data.extend_from_slice(&total_len.to_le_bytes());
        data.extend_from_slice(producer);
        data.extend_from_slice(&tags);
        data
    }

    fn encode_uleb128(buf: &mut Vec<u8>, mut val: u64) {
        loop {
            let byte = (val & 0x7f) as u8;
            val >>= 7;
            if val == 0 {
                buf.push(byte);
                break;
            }
            buf.push(byte | 0x80);
        }
    }

    #[test]
    fn test_parse_proc_attr_data_basic() {
        let data = make_proc_attr_section("ADSP-21584", 78, 0x100);
        let attrs = parse_proc_attr_data(&data).unwrap();
        assert_eq!(attrs.cpu_name.as_deref(), Some("ADSP-21584"));
        assert_eq!(attrs.cpu_proc_index, Some(78));
        assert_eq!(attrs.si_revision, Some(0x100));
        assert!(attrs.section_attrs.is_empty());
    }

    #[test]
    fn test_parse_proc_attr_data_any_revision() {
        let data = make_proc_attr_section("ADSP-21569", 42, 0xffff);
        let attrs = parse_proc_attr_data(&data).unwrap();
        assert_eq!(attrs.si_revision, Some(0xffff));
    }

    #[test]
    fn test_parse_proc_attr_with_sections() {
        let data = make_proc_attr_with_sections(
            "ADSP-21584",
            78,
            0x100,
            &[(3, 1), (5, 3)], // section 3 = PM, section 5 = DM
        );
        let attrs = parse_proc_attr_data(&data).unwrap();
        assert_eq!(attrs.section_attrs.len(), 2);
        assert_eq!(attrs.section_attrs[0], (3, 1));
        assert_eq!(attrs.section_attrs[1], (5, 3));
    }

    #[test]
    fn test_decode_si_revision_values() {
        assert_eq!(decode_si_revision(None), "0.0");
        assert_eq!(decode_si_revision(Some(0xffff)), "any");
        assert_eq!(decode_si_revision(Some(0x100)), "1.0");
        assert_eq!(decode_si_revision(Some(0x001)), "0.0");
        assert_eq!(decode_si_revision(Some(0x010)), "0.1");
    }

    #[test]
    fn test_cpu_arch_from_name() {
        assert_eq!(cpu_arch_from_name("ADSP-21569"), "ADSP-2156x");
        assert_eq!(cpu_arch_from_name("ADSP-21584"), "ADSP-2158x");
        assert_eq!(cpu_arch_from_name("ADSP-SC589"), "ADSP-SC5xx");
        assert_eq!(cpu_arch_from_name("SomeOther"), "SomeOther");
    }

    #[test]
    fn test_mem_kind_name() {
        assert_eq!(mem_kind_name(1), "PM");
        assert_eq!(mem_kind_name(2), "SW");
        assert_eq!(mem_kind_name(3), "DM");
        assert_eq!(mem_kind_name(99), "unknown");
    }

    #[test]
    fn test_dump_proc_attributes_output() {
        let attr_data = make_proc_attr_section("ADSP-21584", 78, 0x100);

        // Build a minimal ELF context (we just need shstrtab/sections for
        // the renderer, but since there are no per-section attrs, empty is fine)
        let elf_data = selelf::testutil::make_elf_object(0x85, elf::ELFDATA2LSB, &[]);
        let header = elf::parse_header(&elf_data).unwrap();
        let sections = parse_all_sections(&elf_data, &header);
        let shstrtab = get_shstrtab(&elf_data, &header, &sections);
        let ctx = ElfCtx {
            data: &elf_data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let mut out = Vec::new();
        dump_proc_attributes(&ctx, &attr_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();

        assert!(s.contains("File:"), "output: {s}");
        assert!(s.contains("version = 1"), "output: {s}");
        assert!(s.contains("CPU_name = ADSP-21584"), "output: {s}");
        assert!(s.contains("CPU_arch = ADSP-2158x"), "output: {s}");
        assert!(s.contains("CPU_proc = ADSP-21584 (78)"), "output: {s}");
        assert!(s.contains("CPU_silicon_revision = 1.0"), "output: {s}");
    }

    #[test]
    fn test_dump_proc_attributes_any_revision() {
        let attr_data = make_proc_attr_section("ADSP-21569", 42, 0xffff);
        let elf_data = selelf::testutil::make_elf_object(0x85, elf::ELFDATA2LSB, &[]);
        let header = elf::parse_header(&elf_data).unwrap();
        let sections = parse_all_sections(&elf_data, &header);
        let shstrtab = get_shstrtab(&elf_data, &header, &sections);
        let ctx = ElfCtx {
            data: &elf_data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let mut out = Vec::new();
        dump_proc_attributes(&ctx, &attr_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("CPU_silicon_revision = any"), "output: {s}");
        assert!(s.contains("CPU_arch = ADSP-2156x"), "output: {s}");
    }

    #[test]
    fn test_parse_proc_attr_invalid() {
        // Too short
        assert!(parse_proc_attr_data(&[0x41]).is_none());
        // Wrong magic
        assert!(parse_proc_attr_data(&[0x00, 0, 0, 0, 0, 0]).is_none());
    }

    #[test]
    fn test_align_table_dump() {
        let mut align_data = vec![0u8; 12];
        align_data[0..4].copy_from_slice(&0u32.to_le_bytes());
        align_data[4..8].copy_from_slice(&1u32.to_le_bytes());
        let word2: u32 = (3 << 24) | (1 << 8);
        align_data[8..12].copy_from_slice(&word2.to_le_bytes());

        let data = selelf::testutil::make_elf_with_align(&align_data, 12);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let align_sec = sections
            .iter()
            .find(|s| s.sh_type == SHT_SHARC_ALIGN)
            .unwrap();
        let sec_data = &data[align_sec.sh_offset as usize
            ..(align_sec.sh_offset + align_sec.sh_size) as usize];
        let mut out = Vec::new();
        dump_align_table(&ctx, align_sec, sec_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(
            s.contains("Alignment Table for section .text"),
            "output was: {s}"
        );
        assert!(s.contains("0x00000000"), "output was: {s}");
        for field in ["offset", "count", "ptype", "pAPI", "iaType", "iaSrc", "pass"] {
            assert!(s.contains(field), "missing header field {field}: {s}");
        }
    }

    #[test]
    fn test_align_table_two_entries() {
        let mut align_data = vec![0u8; 24];
        align_data[0..4].copy_from_slice(&0u32.to_le_bytes());
        align_data[4..8].copy_from_slice(&1u32.to_le_bytes());
        align_data[8..12].copy_from_slice(&((3u32 << 24) | (1 << 8)).to_le_bytes());
        align_data[12..16].copy_from_slice(&0x100u32.to_le_bytes());
        align_data[16..20].copy_from_slice(&((2u32 << 16) | 4).to_le_bytes());
        align_data[20..24]
            .copy_from_slice(&((1u32 << 24) | (1 << 16) | (1 << 4) | 2).to_le_bytes());

        let data = selelf::testutil::make_elf_with_align(&align_data, 12);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let align_sec = sections
            .iter()
            .find(|s| s.sh_type == SHT_SHARC_ALIGN)
            .unwrap();
        let sec_data = &data[align_sec.sh_offset as usize
            ..(align_sec.sh_offset + align_sec.sh_size) as usize];
        let mut out = Vec::new();
        dump_align_table(&ctx, align_sec, sec_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        let data_lines: Vec<&str> = s.lines().filter(|l| l.starts_with("0x")).collect();
        assert_eq!(data_lines.len(), 2, "expected 2 entries, got: {s}");
        assert!(data_lines[0].contains("0x00000000"), "entry 0: {s}");
        assert!(data_lines[1].contains("0x00000100"), "entry 1: {s}");
    }

    #[test]
    fn test_align_table_empty_section() {
        let data = selelf::testutil::make_elf_with_align(&[], 12);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let align_sec = sections
            .iter()
            .find(|s| s.sh_type == SHT_SHARC_ALIGN)
            .unwrap();
        let mut out = Vec::new();
        dump_align_table(&ctx, align_sec, &[], &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(
            s.contains("Alignment Table for section .text"),
            "output was: {s}"
        );
        let data_lines: Vec<&str> = s.lines().filter(|l| l.starts_with("0x")).collect();
        assert_eq!(data_lines.len(), 0, "expected 0 entries, got: {s}");
    }

    #[test]
    fn test_symconstraint_table_dump() {
        let mut strtab = vec![0u8];
        let sym1_off = strtab.len() as u32;
        strtab.extend_from_slice(b"___int_EMUI\0");
        strtab.extend_from_slice(b"other_sym\0");

        let mut entry = vec![0u8; 16];
        entry[0..4].copy_from_slice(&sym1_off.to_le_bytes());
        entry[4..8].copy_from_slice(&0u32.to_le_bytes());
        entry[8..12].copy_from_slice(&2u32.to_le_bytes());
        entry[12..16].copy_from_slice(&0u32.to_le_bytes());

        let data = selelf::testutil::make_elf_with_symconstr(&strtab, &entry, 16);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let sc_sec = sections
            .iter()
            .find(|s| s.sh_type == SHT_SHARC_SYMCONSTR)
            .unwrap();
        let sec_data = &data[sc_sec.sh_offset as usize
            ..(sc_sec.sh_offset + sc_sec.sh_size) as usize];
        let mut out = Vec::new();
        dump_symconstraint_table(&ctx, sc_sec, sec_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("Symbol Constraint Table"), "output was: {s}");
        assert!(s.contains("___int_EMUI"), "output was: {s}");
        assert!(s.contains("<null>"), "output was: {s}");
        assert!(s.contains("symbol1"), "output was: {s}");
        assert!(s.contains("symbol2"), "output was: {s}");
    }

    #[test]
    fn test_symconstraint_with_both_symbols() {
        let mut strtab = vec![0u8];
        let sym1_off = strtab.len() as u32;
        strtab.extend_from_slice(b"alpha\0");
        let sym2_off = strtab.len() as u32;
        strtab.extend_from_slice(b"beta\0");

        let mut entry = vec![0u8; 16];
        entry[0..4].copy_from_slice(&sym1_off.to_le_bytes());
        entry[4..8].copy_from_slice(&sym2_off.to_le_bytes());
        entry[8..12].copy_from_slice(&5u32.to_le_bytes());
        entry[12..16].copy_from_slice(&7u32.to_le_bytes());

        let data = selelf::testutil::make_elf_with_symconstr(&strtab, &entry, 16);
        let header = elf::parse_header(&data).unwrap();
        let sections = parse_all_sections(&data, &header);
        let shstrtab = get_shstrtab(&data, &header, &sections);
        let ctx = ElfCtx {
            data: &data,
            header: &header,
            sections: &sections,
            shstrtab,
        };

        let sc_sec = sections
            .iter()
            .find(|s| s.sh_type == SHT_SHARC_SYMCONSTR)
            .unwrap();
        let sec_data = &data[sc_sec.sh_offset as usize
            ..(sc_sec.sh_offset + sc_sec.sh_size) as usize];
        let mut out = Vec::new();
        dump_symconstraint_table(&ctx, sc_sec, sec_data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("alpha"), "output was: {s}");
        assert!(s.contains("beta"), "output was: {s}");
        assert!(!s.contains("<null>"), "output was: {s}");
    }
}
