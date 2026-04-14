// SPDX-License-Identifier: GPL-3.0
// output.rs --- ELF executable (.dxe) generation
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;

use selelf::elf::{
    Endian, ELFDATA2LSB, ELF_MAGIC, ET_EXEC, PF_R, PF_W, PF_X, PT_LOAD, SHF_ALLOC,
    SHF_EXECINSTR, SHF_WRITE, SHT_NOBITS, SHT_PROGBITS, SHT_STRTAB, SHT_SYMTAB, STB_LOCAL,
    STT_SECTION,
};

use crate::error::Result;
use crate::layout::{Layout, PlacedSection};
use crate::ldf_ast::SectionQualifier;
use crate::resolve::{InputObject, SymbolTable};

const ELF_HEADER_SIZE: usize = 52;
const SHDR_SIZE: usize = 40;
const PHDR_SIZE: usize = 32;
const SYM_ENTRY_SIZE: usize = 16;
const SHARC_MACHINE: u16 = 0x85;

/// Configuration for output generation.
pub struct OutputConfig {
    pub strip_all: bool,
}

/// Generate the final executable ELF (.dxe) file.
pub fn generate(
    layout: &Layout,
    _objects: &[InputObject],
    symtab: &SymbolTable,
    config: &OutputConfig,
) -> Result<Vec<u8>> {
    let e = Endian::Little;

    // Group placed sections by output name, preserving order
    let output_sections = collect_output_sections(&layout.placed);

    // We need: ELF header, program headers, section data, symtab, strtab, shstrtab, section headers

    // Build .shstrtab
    let mut shstrtab = vec![0u8]; // leading null
    let mut shstrtab_offsets: Vec<u32> = Vec::new();

    // Section [0] = NULL (name offset 0)
    shstrtab_offsets.push(0);

    // User output sections
    for sec in &output_sections {
        let off = shstrtab.len() as u32;
        shstrtab_offsets.push(off);
        shstrtab.extend_from_slice(sec.name.as_bytes());
        shstrtab.push(0);
    }

    // .symtab
    let symtab_name_off = shstrtab.len() as u32;
    shstrtab.extend_from_slice(b".symtab\0");

    // .strtab
    let strtab_name_off = shstrtab.len() as u32;
    shstrtab.extend_from_slice(b".strtab\0");

    // .shstrtab
    let shstrtab_name_off = shstrtab.len() as u32;
    shstrtab.extend_from_slice(b".shstrtab\0");

    // Total sections: NULL + output_sections + .symtab + .strtab + .shstrtab
    let num_output_secs = output_sections.len();
    let has_symtab = !config.strip_all;
    let total_sections = 1 + num_output_secs + if has_symtab { 3 } else { 1 };
    // (without symtab we still need .shstrtab)

    let shstrtab_sec_idx = if has_symtab {
        1 + num_output_secs + 2
    } else {
        1 + num_output_secs
    };

    // Compute program headers (one per loadable output section)
    let loadable_count = output_sections.iter().filter(|s| !s.is_nobits || s.size > 0).count();

    // Layout: ELF header -> program headers -> section data -> symtab -> strtab -> shstrtab -> section headers
    let phdr_offset = ELF_HEADER_SIZE;
    let data_offset = phdr_offset + loadable_count * PHDR_SIZE;

    // Place section data
    let mut section_file_offsets: Vec<u32> = Vec::new();
    let mut section_data_blobs: Vec<Vec<u8>> = Vec::new();
    let mut current_offset = data_offset;

    for sec in &output_sections {
        // Align to 4 bytes
        let padding = (4 - (current_offset % 4)) % 4;
        current_offset += padding;

        section_file_offsets.push(current_offset as u32);
        section_data_blobs.push(sec.data.clone());
        current_offset += sec.data.len();
    }

    // Symbol table and string table
    let mut sym_strtab = vec![0u8]; // leading null
    let mut sym_entries: Vec<[u8; SYM_ENTRY_SIZE]> = Vec::new();

    // Null symbol
    sym_entries.push([0u8; SYM_ENTRY_SIZE]);

    let mut first_global = 1usize;

    if has_symtab {
        // Section symbols (local)
        for (i, _sec) in output_sections.iter().enumerate() {
            let mut entry = [0u8; SYM_ENTRY_SIZE];
            // st_name = 0
            // st_value = section address
            let addr = output_sections[i].address;
            entry[4..8].copy_from_slice(&e.write_u32(addr));
            // st_info = STB_LOCAL << 4 | STT_SECTION
            entry[12] = (STB_LOCAL << 4) | STT_SECTION;
            // st_shndx
            let shndx = (i + 1) as u16;
            entry[14..16].copy_from_slice(&e.write_u16(shndx));
            sym_entries.push(entry);
        }
        first_global = sym_entries.len();

        // Global symbols (sorted for deterministic output)
        let mut sorted_syms: Vec<_> = symtab.symbols.iter().collect();
        sorted_syms.sort_by_key(|(name, _)| name.as_str());
        for (name, resolved) in sorted_syms {
            let name_off = sym_strtab.len() as u32;
            sym_strtab.extend_from_slice(name.as_bytes());
            sym_strtab.push(0);

            // Find the output section index for this symbol
            let mut shndx: u16 = 0;
            let mut sym_value = resolved.value;

            // Find which placed section contains this symbol
            for (i, sec) in output_sections.iter().enumerate() {
                for ps in &sec.placed {
                    if ps.object_idx == resolved.object_idx
                        && ps.input_section_idx == resolved.section_idx as usize
                    {
                        shndx = (i + 1) as u16;
                        sym_value = ps.address + resolved.value;
                        break;
                    }
                }
            }

            let mut entry = [0u8; SYM_ENTRY_SIZE];
            entry[0..4].copy_from_slice(&e.write_u32(name_off));
            entry[4..8].copy_from_slice(&e.write_u32(sym_value));
            entry[8..12].copy_from_slice(&e.write_u32(resolved.size));
            entry[12] = resolved.info;
            entry[14..16].copy_from_slice(&e.write_u16(shndx));
            sym_entries.push(entry);
        }
    }

    let symtab_data: Vec<u8> = sym_entries.iter().flat_map(|e| e.iter().copied()).collect();

    // Compute file offsets for metadata sections
    let padding_before_symtab = if has_symtab { (4 - (current_offset % 4)) % 4 } else { 0 };
    current_offset += padding_before_symtab;

    let symtab_file_off = current_offset as u32;
    if has_symtab {
        current_offset += symtab_data.len();
    }

    let strtab_file_off = current_offset as u32;
    if has_symtab {
        current_offset += sym_strtab.len();
    }

    let shstrtab_file_off = current_offset as u32;
    current_offset += shstrtab.len();

    // Section header table
    let padding_before_shdr = (4 - (current_offset % 4)) % 4;
    current_offset += padding_before_shdr;
    let shdr_offset = current_offset;
    let total_file_size = shdr_offset + total_sections * SHDR_SIZE;

    // Build the output
    let mut out = vec![0u8; total_file_size];

    // ELF header
    out[0..4].copy_from_slice(&ELF_MAGIC);
    out[4] = 1; // ELFCLASS32
    out[5] = ELFDATA2LSB;
    out[6] = 1; // EV_CURRENT
    out[16..18].copy_from_slice(&e.write_u16(ET_EXEC));
    out[18..20].copy_from_slice(&e.write_u16(SHARC_MACHINE));
    out[20..24].copy_from_slice(&e.write_u32(1)); // e_version
    out[24..28].copy_from_slice(&e.write_u32(layout.entry_address.unwrap_or(0)));
    out[28..32].copy_from_slice(&e.write_u32(phdr_offset as u32));
    out[32..36].copy_from_slice(&e.write_u32(shdr_offset as u32));
    out[40..42].copy_from_slice(&e.write_u16(ELF_HEADER_SIZE as u16));
    out[42..44].copy_from_slice(&e.write_u16(PHDR_SIZE as u16));
    out[44..46].copy_from_slice(&e.write_u16(loadable_count as u16));
    out[46..48].copy_from_slice(&e.write_u16(SHDR_SIZE as u16));
    out[48..50].copy_from_slice(&e.write_u16(total_sections as u16));
    out[50..52].copy_from_slice(&e.write_u16(shstrtab_sec_idx as u16));

    // Program headers
    let mut phdr_pos = phdr_offset;
    for (i, sec) in output_sections.iter().enumerate() {
        if sec.is_nobits && sec.size == 0 {
            continue;
        }
        let mut flags = PF_R;
        if sec.is_writable {
            flags |= PF_W;
        }
        if sec.is_executable {
            flags |= PF_X;
        }

        out[phdr_pos..phdr_pos + 4].copy_from_slice(&e.write_u32(PT_LOAD));
        out[phdr_pos + 4..phdr_pos + 8].copy_from_slice(&e.write_u32(section_file_offsets[i]));
        out[phdr_pos + 8..phdr_pos + 12].copy_from_slice(&e.write_u32(sec.address));
        out[phdr_pos + 12..phdr_pos + 16].copy_from_slice(&e.write_u32(sec.address)); // p_paddr
        let filesz = if sec.is_nobits { 0 } else { sec.data.len() as u32 };
        out[phdr_pos + 16..phdr_pos + 20].copy_from_slice(&e.write_u32(filesz));
        out[phdr_pos + 20..phdr_pos + 24].copy_from_slice(&e.write_u32(sec.size));
        out[phdr_pos + 24..phdr_pos + 28].copy_from_slice(&e.write_u32(flags));
        out[phdr_pos + 28..phdr_pos + 32].copy_from_slice(&e.write_u32(4)); // p_align
        phdr_pos += PHDR_SIZE;
    }

    // Section data
    for (i, blob) in section_data_blobs.iter().enumerate() {
        let off = section_file_offsets[i] as usize;
        if off + blob.len() <= out.len() {
            out[off..off + blob.len()].copy_from_slice(blob);
        }
    }

    // Symtab + strtab
    if has_symtab {
        let off = symtab_file_off as usize;
        if off + symtab_data.len() <= out.len() {
            out[off..off + symtab_data.len()].copy_from_slice(&symtab_data);
        }
        let off = strtab_file_off as usize;
        if off + sym_strtab.len() <= out.len() {
            out[off..off + sym_strtab.len()].copy_from_slice(&sym_strtab);
        }
    }

    // .shstrtab
    let off = shstrtab_file_off as usize;
    if off + shstrtab.len() <= out.len() {
        out[off..off + shstrtab.len()].copy_from_slice(&shstrtab);
    }

    // Section header table
    // [0] NULL
    let mut shdr_pos = shdr_offset;
    shdr_pos += SHDR_SIZE; // NULL section

    // Output sections
    for (i, sec) in output_sections.iter().enumerate() {
        let sh_type = if sec.is_nobits { SHT_NOBITS } else { SHT_PROGBITS };
        let mut sh_flags = SHF_ALLOC;
        if sec.is_executable {
            sh_flags |= SHF_EXECINSTR;
        }
        if sec.is_writable {
            sh_flags |= SHF_WRITE;
        }

        write_shdr(&mut out, shdr_pos, e, &ShdrFields {
            sh_name: shstrtab_offsets[i + 1],
            sh_type,
            sh_flags,
            sh_addr: sec.address,
            sh_offset: section_file_offsets[i],
            sh_size: if sec.is_nobits { sec.size } else { sec.data.len() as u32 },
            sh_link: 0,
            sh_info: 0,
            sh_addralign: 4,
            sh_entsize: if sec.is_short_word { 1 } else { 0 },
        });
        shdr_pos += SHDR_SIZE;
    }

    if has_symtab {
        // .symtab
        let symtab_sec_idx = 1 + num_output_secs;
        let strtab_sec_idx = symtab_sec_idx + 1;

        write_shdr(&mut out, shdr_pos, e, &ShdrFields {
            sh_name: symtab_name_off,
            sh_type: SHT_SYMTAB,
            sh_flags: 0,
            sh_addr: 0,
            sh_offset: symtab_file_off,
            sh_size: symtab_data.len() as u32,
            sh_link: strtab_sec_idx as u32,
            sh_info: first_global as u32,
            sh_addralign: 4,
            sh_entsize: SYM_ENTRY_SIZE as u32,
        });
        shdr_pos += SHDR_SIZE;

        // .strtab
        write_shdr(&mut out, shdr_pos, e, &ShdrFields {
            sh_name: strtab_name_off,
            sh_type: SHT_STRTAB,
            sh_flags: 0,
            sh_addr: 0,
            sh_offset: strtab_file_off,
            sh_size: sym_strtab.len() as u32,
            sh_link: 0,
            sh_info: 0,
            sh_addralign: 1,
            sh_entsize: 0,
        });
        shdr_pos += SHDR_SIZE;
    }

    // .shstrtab
    write_shdr(&mut out, shdr_pos, e, &ShdrFields {
        sh_name: shstrtab_name_off,
        sh_type: SHT_STRTAB,
        sh_flags: 0,
        sh_addr: 0,
        sh_offset: shstrtab_file_off,
        sh_size: shstrtab.len() as u32,
        sh_link: 0,
        sh_info: 0,
        sh_addralign: 1,
        sh_entsize: 0,
    });

    Ok(out)
}

/// An output section after merging all placed input sections.
struct MergedSection {
    name: String,
    address: u32,
    size: u32,
    data: Vec<u8>,
    is_nobits: bool,
    is_executable: bool,
    is_writable: bool,
    /// True for SW-qualified code sections, which hold mixed VISA
    /// (16/32/48-bit) instructions. The output section header gets
    /// `sh_entsize = 1` so downstream tools such as seldump can
    /// distinguish a VISA-layout section from a pure ISA (48-bit)
    /// one; plain-PM output sections keep `sh_entsize = 0`.
    is_short_word: bool,
    placed: Vec<PlacedSection>,
}

fn collect_output_sections(placed: &[PlacedSection]) -> Vec<MergedSection> {
    let mut sections: Vec<MergedSection> = Vec::new();
    let mut name_to_idx: HashMap<String, usize> = HashMap::new();

    for ps in placed {
        let idx = if let Some(&idx) = name_to_idx.get(&ps.output_name) {
            idx
        } else {
            // SW-qualified sections hold short-word code: the SHARC+
            // assembler's VISA output, a mix of 16/32/48-bit
            // instructions placed in a byte-wide RAM block. They are
            // code and need SHF_EXECINSTR so dis-assemblers and
            // loaders recognise them, but the backing memory is still
            // writable RAM so they keep SHF_WRITE as well.
            let is_exec = matches!(
                ps.qualifier,
                SectionQualifier::Pm | SectionQualifier::Sw
            );
            let is_write = matches!(
                ps.qualifier,
                SectionQualifier::Dm | SectionQualifier::Bw | SectionQualifier::Sw
                    | SectionQualifier::ZeroInit | SectionQualifier::NoInit
                    | SectionQualifier::Data64 | SectionQualifier::None
            );
            let is_sw = matches!(ps.qualifier, SectionQualifier::Sw);

            let idx = sections.len();
            sections.push(MergedSection {
                name: ps.output_name.clone(),
                address: ps.address,
                size: 0,
                data: Vec::new(),
                is_nobits: ps.is_nobits,
                is_executable: is_exec,
                is_writable: is_write,
                is_short_word: is_sw,
                placed: Vec::new(),
            });
            name_to_idx.insert(ps.output_name.clone(), idx);
            idx
        };

        let merged = &mut sections[idx];

        // Pad to reach this section's address
        if !ps.is_nobits {
            let expected_offset = (ps.address - merged.address) as usize;
            if expected_offset > merged.data.len() {
                merged.data.resize(expected_offset, 0);
            }
            merged.data.extend_from_slice(&ps.data);
        }

        let end = ps.address + ps.size;
        let section_end = merged.address + merged.size;
        if end > section_end {
            merged.size = end - merged.address;
        }

        merged.placed.push(ps.clone());
    }

    sections
}

struct ShdrFields {
    sh_name: u32,
    sh_type: u32,
    sh_flags: u32,
    sh_addr: u32,
    sh_offset: u32,
    sh_size: u32,
    sh_link: u32,
    sh_info: u32,
    sh_addralign: u32,
    sh_entsize: u32,
}

fn write_shdr(out: &mut [u8], offset: usize, e: Endian, f: &ShdrFields) {
    out[offset..offset + 4].copy_from_slice(&e.write_u32(f.sh_name));
    out[offset + 4..offset + 8].copy_from_slice(&e.write_u32(f.sh_type));
    out[offset + 8..offset + 12].copy_from_slice(&e.write_u32(f.sh_flags));
    out[offset + 12..offset + 16].copy_from_slice(&e.write_u32(f.sh_addr));
    out[offset + 16..offset + 20].copy_from_slice(&e.write_u32(f.sh_offset));
    out[offset + 20..offset + 24].copy_from_slice(&e.write_u32(f.sh_size));
    out[offset + 24..offset + 28].copy_from_slice(&e.write_u32(f.sh_link));
    out[offset + 28..offset + 32].copy_from_slice(&e.write_u32(f.sh_info));
    out[offset + 32..offset + 36].copy_from_slice(&e.write_u32(f.sh_addralign));
    out[offset + 36..offset + 40].copy_from_slice(&e.write_u32(f.sh_entsize));
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn collect_sections_empty() {
        let placed = vec![];
        let merged = collect_output_sections(&placed);
        assert!(merged.is_empty());
    }

    #[test]
    fn collect_sections_single() {
        let placed = vec![PlacedSection {
            output_name: "code".into(),
            object_idx: 0,
            input_section_idx: 1,
            address: 0x1000,
            size: 4,
            data: vec![0xAA, 0xBB, 0xCC, 0xDD],
            is_nobits: false,
            qualifier: SectionQualifier::Pm,
            target_memory: "mem".into(),
        }];
        let merged = collect_output_sections(&placed);
        assert_eq!(merged.len(), 1);
        assert_eq!(merged[0].name, "code");
        assert_eq!(merged[0].address, 0x1000);
        assert_eq!(merged[0].data, vec![0xAA, 0xBB, 0xCC, 0xDD]);
        assert!(merged[0].is_executable);
    }

    #[test]
    fn collect_sections_merge() {
        let placed = vec![
            PlacedSection {
                output_name: "code".into(),
                object_idx: 0,
                input_section_idx: 1,
                address: 0x1000,
                size: 4,
                data: vec![0x11, 0x22, 0x33, 0x44],
                is_nobits: false,
                qualifier: SectionQualifier::Pm,
                target_memory: "mem".into(),
            },
            PlacedSection {
                output_name: "code".into(),
                object_idx: 1,
                input_section_idx: 1,
                address: 0x1004,
                size: 2,
                data: vec![0x55, 0x66],
                is_nobits: false,
                qualifier: SectionQualifier::Pm,
                target_memory: "mem".into(),
            },
        ];
        let merged = collect_output_sections(&placed);
        assert_eq!(merged.len(), 1);
        assert_eq!(merged[0].data, vec![0x11, 0x22, 0x33, 0x44, 0x55, 0x66]);
        assert_eq!(merged[0].size, 6);
    }

    #[test]
    fn write_shdr_roundtrip() {
        let e = Endian::Little;
        let mut buf = vec![0u8; SHDR_SIZE];
        write_shdr(&mut buf, 0, e, &ShdrFields {
            sh_name: 1, sh_type: 2, sh_flags: 3, sh_addr: 4,
            sh_offset: 5, sh_size: 6, sh_link: 7, sh_info: 8,
            sh_addralign: 9, sh_entsize: 10,
        });
        let shdr = selelf::elf::parse_section_header(&buf, e);
        assert_eq!(shdr.sh_name, 1);
        assert_eq!(shdr.sh_type, 2);
        assert_eq!(shdr.sh_flags, 3);
        assert_eq!(shdr.sh_addr, 4);
        assert_eq!(shdr.sh_offset, 5);
        assert_eq!(shdr.sh_size, 6);
        assert_eq!(shdr.sh_link, 7);
        assert_eq!(shdr.sh_info, 8);
        assert_eq!(shdr.sh_addralign, 9);
        assert_eq!(shdr.sh_entsize, 10);
    }
}
