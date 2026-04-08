// SPDX-License-Identifier: GPL-3.0
// init.rs --- Core initialization stream builder and ELF patcher
// Copyright (c) 2026 Jakob Kastelic

use crate::cli::Options;
use crate::error::{Error, Result};
use selelf::elf::{
    self, Elf32Header, Elf32Shdr, Endian, SHF_ALLOC, SHT_NOBITS, SHT_PROGBITS, SHT_SYMTAB,
};

/// Default sections excluded from automatic processing.
const AUTO_EXCLUDE: &[&str] = &["seg_init", "seg_rth", "seg_pmco"];

/// Collected section data ready for stream building.
#[derive(Debug)]
pub struct SectionData {
    pub name: String,
    pub addr: u32,
    pub data: Vec<u8>,
    pub is_nobits: bool,
    pub section_idx: usize,
}

/// Parsed ELF context used by the initializer.
struct ElfCtx {
    header: Elf32Header,
    sections: Vec<Elf32Shdr>,
    section_names: Vec<String>,
}

fn parse_elf_ctx(data: &[u8]) -> Result<ElfCtx> {
    let header = elf::parse_header(data)?;
    let e = header.ei_data;
    let shent = header.e_shentsize as usize;
    let shoff = header.e_shoff as usize;

    let mut sections = Vec::with_capacity(header.e_shnum as usize);
    for i in 0..header.e_shnum as usize {
        let off = shoff + i * shent;
        if off + shent > data.len() {
            return Err(Error::Shared(selelf::error::Error::InvalidElf(
                "section header out of bounds".into(),
            )));
        }
        sections.push(elf::parse_section_header(&data[off..], e));
    }

    let shstrtab = if (header.e_shstrndx as usize) < sections.len() {
        let s = &sections[header.e_shstrndx as usize];
        let off = s.sh_offset as usize;
        let sz = s.sh_size as usize;
        if off + sz <= data.len() {
            data[off..off + sz].to_vec()
        } else {
            Vec::new()
        }
    } else {
        Vec::new()
    };

    let section_names: Vec<String> = sections
        .iter()
        .map(|s| elf::read_string_at(&shstrtab, s.sh_name).to_string())
        .collect();

    Ok(ElfCtx {
        header,
        sections,
        section_names,
    })
}

/// Identify which sections to process based on options.
pub fn collect_sections(data: &[u8], opts: &Options) -> Result<Vec<SectionData>> {
    let ctx = parse_elf_ctx(data)?;
    let mut result = Vec::new();

    for (i, shdr) in ctx.sections.iter().enumerate() {
        let name = &ctx.section_names[i];

        if should_process(name, shdr, opts) {
            let section_data = if shdr.sh_type == SHT_NOBITS {
                Vec::new()
            } else {
                let off = shdr.sh_offset as usize;
                let sz = shdr.sh_size as usize;
                if off + sz > data.len() {
                    return Err(Error::Shared(selelf::error::Error::InvalidElf(
                        format!("section {name} data out of bounds"),
                    )));
                }
                data[off..off + sz].to_vec()
            };

            result.push(SectionData {
                name: name.clone(),
                addr: shdr.sh_addr,
                data: section_data,
                is_nobits: shdr.sh_type == SHT_NOBITS,
                section_idx: i,
            });
        }
    }

    Ok(result)
}

/// Determine if a section should be processed.
fn should_process(name: &str, shdr: &Elf32Shdr, opts: &Options) -> bool {
    if name.is_empty() {
        return false;
    }

    if opts.ignore_sections.iter().any(|s| s == name) {
        return false;
    }

    if opts.extra_sections.iter().any(|s| s == name) {
        return true;
    }

    if opts.no_auto {
        return false;
    }

    if AUTO_EXCLUDE.contains(&name) {
        return false;
    }

    let is_progbits = shdr.sh_type == SHT_PROGBITS;
    let is_nobits = shdr.sh_type == SHT_NOBITS;
    let is_alloc = shdr.sh_flags & SHF_ALLOC != 0;

    (is_progbits || is_nobits) && is_alloc
}

/// Build the initialization stream from collected sections.
///
/// Stream format:
///   - u32: number of data blocks
///   - For each block:
///     - u32: destination address
///     - u32: word count (size in bytes / 4, or byte count for sub-word sections)
///     - u32: flags (0 = data follows, 1 = zero-fill)
///     - [u8]: data words (only if flags == 0)
pub fn build_init_stream(sections: &[SectionData], endian: Endian) -> Vec<u8> {
    let mut stream = Vec::new();
    let blocks = build_blocks(sections);

    let block_count = blocks.len() as u32;
    stream.extend_from_slice(&endian.write_u32(block_count));

    for block in &blocks {
        stream.extend_from_slice(&endian.write_u32(block.addr));
        stream.extend_from_slice(&endian.write_u32(block.word_count));
        stream.extend_from_slice(&endian.write_u32(block.flags));
        if block.flags == 0 {
            stream.extend_from_slice(&block.data);
        }
    }

    stream
}

/// A single data block in the init stream.
struct InitBlock {
    addr: u32,
    word_count: u32,
    flags: u32,
    data: Vec<u8>,
}

/// Build init blocks from section data, compressing zero-fill regions.
fn build_blocks(sections: &[SectionData]) -> Vec<InitBlock> {
    let mut blocks = Vec::new();

    for section in sections {
        if section.is_nobits || is_all_zeros(&section.data) {
            let word_count = if section.is_nobits {
                section.data.len() as u32
            } else {
                section.data.len() as u32 / 4
            };
            if word_count > 0 || section.is_nobits {
                blocks.push(InitBlock {
                    addr: section.addr,
                    word_count: if section.is_nobits {
                        0
                    } else {
                        word_count
                    },
                    flags: 1,
                    data: Vec::new(),
                });
            }
            continue;
        }

        let mut sub_blocks = split_zero_runs(&section.data, section.addr);
        blocks.append(&mut sub_blocks);
    }

    blocks
}

/// Split section data into runs of non-zero data and zero-fill regions.
/// A run of 16 or more zero bytes (4+ words) is worth compressing.
fn split_zero_runs(data: &[u8], base_addr: u32) -> Vec<InitBlock> {
    let mut blocks = Vec::new();
    let word_size = 4usize;
    let min_zero_words = 4usize;

    let total_words = data.len() / word_size;
    if total_words == 0 {
        if !data.is_empty() {
            blocks.push(InitBlock {
                addr: base_addr,
                word_count: data.len() as u32,
                flags: 2,
                data: data.to_vec(),
            });
        }
        return blocks;
    }

    let mut i = 0;
    let mut data_start = 0;

    while i < total_words {
        let word_off = i * word_size;
        let word_slice = &data[word_off..word_off + word_size];

        if word_slice == [0, 0, 0, 0] {
            let zero_start = i;
            while i < total_words {
                let off = i * word_size;
                if data[off..off + word_size] != [0, 0, 0, 0] {
                    break;
                }
                i += 1;
            }
            let zero_count = i - zero_start;

            if zero_count >= min_zero_words {
                if data_start < zero_start {
                    let d_off = data_start * word_size;
                    let d_end = zero_start * word_size;
                    blocks.push(InitBlock {
                        addr: base_addr + d_off as u32,
                        word_count: (zero_start - data_start) as u32,
                        flags: 0,
                        data: data[d_off..d_end].to_vec(),
                    });
                }
                blocks.push(InitBlock {
                    addr: base_addr + (zero_start * word_size) as u32,
                    word_count: zero_count as u32,
                    flags: 1,
                    data: Vec::new(),
                });
                data_start = i;
            } else {
                i = zero_start + zero_count;
            }
        } else {
            i += 1;
        }
    }

    if data_start < total_words {
        let d_off = data_start * word_size;
        let remaining = &data[d_off..];
        blocks.push(InitBlock {
            addr: base_addr + d_off as u32,
            word_count: (total_words - data_start) as u32,
            flags: 0,
            data: remaining.to_vec(),
        });
    }

    blocks
}

fn is_all_zeros(data: &[u8]) -> bool {
    data.iter().all(|&b| b == 0)
}

/// Find the index and offset of `seg_init` section.
fn find_seg_init(ctx: &ElfCtx) -> Result<usize> {
    for (i, name) in ctx.section_names.iter().enumerate() {
        if name == "seg_init" {
            return Ok(i);
        }
    }
    Err(Error::SegInitMissing)
}

/// Find a symbol by name in the symbol table. Returns its value (address).
fn find_symbol_value(data: &[u8], ctx: &ElfCtx, symbol_name: &str) -> Result<u32> {
    let e = ctx.header.ei_data;

    for shdr in &ctx.sections {
        if shdr.sh_type != SHT_SYMTAB {
            continue;
        }
        let strtab_idx = shdr.sh_link as usize;
        if strtab_idx >= ctx.sections.len() {
            break;
        }
        let strtab_shdr = &ctx.sections[strtab_idx];
        let strtab_off = strtab_shdr.sh_offset as usize;
        let strtab_sz = strtab_shdr.sh_size as usize;
        if strtab_off + strtab_sz > data.len() {
            break;
        }
        let strtab = &data[strtab_off..strtab_off + strtab_sz];

        let sym_off = shdr.sh_offset as usize;
        let sym_sz = shdr.sh_size as usize;
        let entsize = if shdr.sh_entsize > 0 {
            shdr.sh_entsize as usize
        } else {
            16
        };

        if sym_off + sym_sz > data.len() {
            break;
        }

        let nsyms = sym_sz / entsize;
        for j in 0..nsyms {
            let off = sym_off + j * entsize;
            if off + entsize > data.len() {
                break;
            }
            let sym = elf::parse_symbol(&data[off..], e);
            let name = elf::read_string_at(strtab, sym.st_name);
            if name == symbol_name {
                return Ok(sym.st_value);
            }
        }

        break;
    }

    Err(Error::SymbolNotFound(symbol_name.to_string()))
}

/// Patch the executable: embed the init stream and optionally erase sections.
pub fn patch_executable(
    elf_data: &[u8],
    sections: &[SectionData],
    stream: &[u8],
    opts: &Options,
) -> Result<Vec<u8>> {
    let ctx = parse_elf_ctx(elf_data)?;
    let seg_init_idx = find_seg_init(&ctx)?;
    let seg_init = &ctx.sections[seg_init_idx];
    let seg_init_off = seg_init.sh_offset as usize;
    let seg_init_sz = seg_init.sh_size as usize;

    if stream.len() > seg_init_sz {
        return Err(Error::SegInitTooSmall {
            need: stream.len(),
            have: seg_init_sz,
        });
    }

    let _sym_value = find_symbol_value(elf_data, &ctx, &opts.begin_init)?;

    let mut out = elf_data.to_vec();

    // Write the init stream into seg_init, zero-padding the remainder.
    out[seg_init_off..seg_init_off + stream.len()].copy_from_slice(stream);
    for b in &mut out[seg_init_off + stream.len()..seg_init_off + seg_init_sz] {
        *b = 0;
    }

    // Erase processed sections unless -NoErase.
    if !opts.no_erase {
        for section in sections {
            let shdr = &ctx.sections[section.section_idx];
            if shdr.sh_type == SHT_NOBITS {
                continue;
            }
            let off = shdr.sh_offset as usize;
            let sz = shdr.sh_size as usize;
            if off + sz <= out.len() {
                for b in &mut out[off..off + sz] {
                    *b = 0;
                }
            }
        }
    }

    Ok(out)
}

/// Run the full selinit pipeline on a loaded executable.
pub fn run(elf_data: &[u8], opts: &Options) -> Result<Vec<u8>> {
    let header = elf::parse_header(elf_data)?;
    let endian = header.ei_data;

    if opts.verbose {
        eprintln!("selinit: processing {}", opts.input_file);
    }

    let sections = collect_sections(elf_data, opts)?;

    if opts.verbose {
        eprintln!("selinit: {} sections to process", sections.len());
        for s in &sections {
            let kind = if s.is_nobits { "NOBITS" } else { "PROGBITS" };
            eprintln!(
                "  {} at 0x{:08x}, {} bytes ({})",
                s.name,
                s.addr,
                s.data.len(),
                kind
            );
        }
    }

    // Load callback init files.
    let mut callbacks: Vec<Vec<u8>> = Vec::new();
    for path in &opts.init_files {
        let cb_data = std::fs::read(path)?;
        callbacks.push(cb_data);
        if opts.verbose {
            eprintln!("selinit: loaded callback {path}");
        }
    }

    let stream = build_init_stream(&sections, endian);

    if opts.verbose {
        eprintln!("selinit: init stream is {} bytes", stream.len());
    }

    let result = patch_executable(elf_data, &sections, &stream, opts)?;

    if opts.verbose {
        eprintln!("selinit: done");
    }

    Ok(result)
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a minimal SHARC executable with seg_init and a data section.
    /// Returns the ELF bytes.
    fn make_test_dxe(
        data_name: &str,
        data_content: &[u8],
        seg_init_size: usize,
        init_symbol: &str,
    ) -> Vec<u8> {
        let endian_byte: u8 = 1; // ELFDATA2LSB

        // Sections:
        //   [0] NULL
        //   [1] .shstrtab
        //   [2] data section (PROGBITS, ALLOC|WRITE)
        //   [3] seg_init (PROGBITS, ALLOC)
        //   [4] .strtab (symbol string table)
        //   [5] .symtab

        // Build shstrtab
        let mut shstrtab = vec![0u8];
        let shstrtab_name = shstrtab.len();
        shstrtab.extend_from_slice(b".shstrtab\0");
        let data_name_off = shstrtab.len();
        shstrtab.extend_from_slice(data_name.as_bytes());
        shstrtab.push(0);
        let seg_init_name = shstrtab.len();
        shstrtab.extend_from_slice(b"seg_init\0");
        let strtab_name = shstrtab.len();
        shstrtab.extend_from_slice(b".strtab\0");
        let symtab_name = shstrtab.len();
        shstrtab.extend_from_slice(b".symtab\0");

        // Build strtab (symbol names)
        let mut strtab = vec![0u8];
        let init_sym_off = strtab.len();
        strtab.extend_from_slice(init_symbol.as_bytes());
        strtab.push(0);

        // Build symtab
        // [0] null, [1] init symbol (global, pointing to seg_init)
        let sym_entry_size = 16usize;
        let mut symtab = vec![0u8; 2 * sym_entry_size];
        // Symbol [1]: the init symbol
        {
            let base = sym_entry_size;
            write_u32_le(&mut symtab[base..], init_sym_off as u32);
            // st_value = seg_init address (we use 0x80000 as a typical address)
            write_u32_le(&mut symtab[base + 4..], 0x0008_0000);
            // st_info = STB_GLOBAL | STT_OBJECT
            symtab[base + 12] = (1 << 4) | 1;
            // st_shndx = 3 (seg_init section)
            write_u16_le(&mut symtab[base + 14..], 3);
        }

        let seg_init_data = vec![0xffu8; seg_init_size];

        // Layout
        let ehdr_size = 52usize;
        let shstrtab_off = ehdr_size;
        let data_off = shstrtab_off + shstrtab.len();
        let seg_init_off = data_off + data_content.len();
        let strtab_off = seg_init_off + seg_init_data.len();
        let symtab_off = strtab_off + strtab.len();
        let shtab_off = symtab_off + symtab.len();

        let num_sections = 6u16;
        let total_size = shtab_off + num_sections as usize * 40;
        let mut out = vec![0u8; total_size];

        // ELF header
        out[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
        out[4] = 1; // ELFCLASS32
        out[5] = endian_byte;
        out[6] = 1; // EV_CURRENT
        write_u16_le(&mut out[16..], 2); // ET_EXEC
        write_u16_le(&mut out[18..], 0x85); // SHARC
        write_u32_le(&mut out[20..], 1);
        write_u32_le(&mut out[32..], shtab_off as u32);
        write_u16_le(&mut out[44..], 52);
        write_u16_le(&mut out[46..], 40);
        write_u16_le(&mut out[48..], num_sections);
        write_u16_le(&mut out[50..], 1); // shstrndx

        // Copy section contents
        out[shstrtab_off..shstrtab_off + shstrtab.len()].copy_from_slice(&shstrtab);
        out[data_off..data_off + data_content.len()].copy_from_slice(data_content);
        out[seg_init_off..seg_init_off + seg_init_data.len()]
            .copy_from_slice(&seg_init_data);
        out[strtab_off..strtab_off + strtab.len()].copy_from_slice(&strtab);
        out[symtab_off..symtab_off + symtab.len()].copy_from_slice(&symtab);

        // Section headers
        // [0] NULL (zeros)
        // [1] .shstrtab
        write_shdr(
            &mut out,
            shtab_off + 40,
            shstrtab_name as u32,
            3, // SHT_STRTAB
            0,
            shstrtab_off as u32,
            shstrtab.len() as u32,
            0,
            0,
        );
        // [2] data section (PROGBITS, ALLOC|WRITE)
        write_shdr(
            &mut out,
            shtab_off + 2 * 40,
            data_name_off as u32,
            1, // SHT_PROGBITS
            0x3, // SHF_WRITE | SHF_ALLOC
            data_off as u32,
            data_content.len() as u32,
            0,
            0,
        );
        // [3] seg_init (PROGBITS, ALLOC)
        write_shdr(
            &mut out,
            shtab_off + 3 * 40,
            seg_init_name as u32,
            1, // SHT_PROGBITS
            0x2, // SHF_ALLOC
            seg_init_off as u32,
            seg_init_data.len() as u32,
            0,
            0,
        );
        // [4] .strtab
        write_shdr(
            &mut out,
            shtab_off + 4 * 40,
            strtab_name as u32,
            3, // SHT_STRTAB
            0,
            strtab_off as u32,
            strtab.len() as u32,
            0,
            0,
        );
        // [5] .symtab
        write_shdr(
            &mut out,
            shtab_off + 5 * 40,
            symtab_name as u32,
            2, // SHT_SYMTAB
            0,
            symtab_off as u32,
            symtab.len() as u32,
            4, // sh_link = .strtab
            1, // sh_info = first global
        );
        // Set sh_entsize for symtab
        write_u32_le(
            &mut out[shtab_off + 5 * 40 + 36..],
            sym_entry_size as u32,
        );

        out
    }

    fn write_u16_le(buf: &mut [u8], val: u16) {
        buf[0..2].copy_from_slice(&val.to_le_bytes());
    }

    fn write_u32_le(buf: &mut [u8], val: u32) {
        buf[0..4].copy_from_slice(&val.to_le_bytes());
    }

    fn write_shdr(
        out: &mut [u8],
        offset: usize,
        sh_name: u32,
        sh_type: u32,
        sh_flags: u32,
        sh_offset: u32,
        sh_size: u32,
        sh_link: u32,
        sh_info: u32,
    ) {
        write_u32_le(&mut out[offset..], sh_name);
        write_u32_le(&mut out[offset + 4..], sh_type);
        write_u32_le(&mut out[offset + 8..], sh_flags);
        // sh_addr = 0x10000 (arbitrary)
        write_u32_le(&mut out[offset + 12..], 0x0001_0000);
        write_u32_le(&mut out[offset + 16..], sh_offset);
        write_u32_le(&mut out[offset + 20..], sh_size);
        write_u32_le(&mut out[offset + 24..], sh_link);
        write_u32_le(&mut out[offset + 28..], sh_info);
    }

    fn make_default_opts() -> Options {
        Options {
            input_file: "test.dxe".to_string(),
            output_file: None,
            begin_init: "___inits".to_string(),
            ignore_sections: Vec::new(),
            init_files: Vec::new(),
            extra_sections: Vec::new(),
            no_auto: false,
            no_erase: false,
            verbose: false,
            show_help: false,
        }
    }

    #[test]
    fn test_collect_sections_basic() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let opts = make_default_opts();
        let sections = collect_sections(&dxe, &opts).unwrap();
        // Should find seg_dmda but not seg_init (excluded)
        assert_eq!(sections.len(), 1);
        assert_eq!(sections[0].name, "seg_dmda");
        assert_eq!(sections[0].data, data_content);
    }

    #[test]
    fn test_collect_sections_ignore() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let mut opts = make_default_opts();
        opts.ignore_sections.push("seg_dmda".to_string());
        let sections = collect_sections(&dxe, &opts).unwrap();
        assert!(sections.is_empty());
    }

    #[test]
    fn test_collect_sections_no_auto() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let mut opts = make_default_opts();
        opts.no_auto = true;
        let sections = collect_sections(&dxe, &opts).unwrap();
        // NoAuto means nothing auto-processed
        assert!(sections.is_empty());
    }

    #[test]
    fn test_collect_sections_no_auto_with_explicit() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let mut opts = make_default_opts();
        opts.no_auto = true;
        opts.extra_sections.push("seg_dmda".to_string());
        let sections = collect_sections(&dxe, &opts).unwrap();
        assert_eq!(sections.len(), 1);
        assert_eq!(sections[0].name, "seg_dmda");
    }

    #[test]
    fn test_build_init_stream_simple() {
        let data = vec![0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88];
        let sections = vec![SectionData {
            name: "seg_dmda".to_string(),
            addr: 0x10000,
            data: data.clone(),
            is_nobits: false,
            section_idx: 2,
        }];
        let stream = build_init_stream(&sections, Endian::Little);
        // Should have: block_count(4) + addr(4) + word_count(4) + flags(4) + data(8)
        assert_eq!(stream.len(), 4 + 4 + 4 + 4 + 8);
        // Block count = 1
        assert_eq!(u32::from_le_bytes([stream[0], stream[1], stream[2], stream[3]]), 1);
        // Addr = 0x10000
        assert_eq!(
            u32::from_le_bytes([stream[4], stream[5], stream[6], stream[7]]),
            0x10000
        );
        // Word count = 2
        assert_eq!(
            u32::from_le_bytes([stream[8], stream[9], stream[10], stream[11]]),
            2
        );
        // Flags = 0 (data follows)
        assert_eq!(
            u32::from_le_bytes([stream[12], stream[13], stream[14], stream[15]]),
            0
        );
        // Data
        assert_eq!(&stream[16..24], &data);
    }

    #[test]
    fn test_build_init_stream_zero_section() {
        let data = vec![0u8; 32];
        let sections = vec![SectionData {
            name: "seg_zero".to_string(),
            addr: 0x20000,
            data,
            is_nobits: false,
            section_idx: 2,
        }];
        let stream = build_init_stream(&sections, Endian::Little);
        // All zeros => single zero-fill block with no data payload
        assert_eq!(stream.len(), 4 + 4 + 4 + 4);
        // Block count = 1
        assert_eq!(u32::from_le_bytes([stream[0], stream[1], stream[2], stream[3]]), 1);
        // Flags = 1 (zero-fill)
        assert_eq!(
            u32::from_le_bytes([stream[12], stream[13], stream[14], stream[15]]),
            1
        );
    }

    #[test]
    fn test_patch_executable() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let opts = make_default_opts();
        let sections = collect_sections(&dxe, &opts).unwrap();
        let stream = build_init_stream(&sections, Endian::Little);
        let result = patch_executable(&dxe, &sections, &stream, &opts).unwrap();

        // seg_init should now contain the stream
        let ctx = parse_elf_ctx(&result).unwrap();
        let seg_init_idx = find_seg_init(&ctx).unwrap();
        let seg_init = &ctx.sections[seg_init_idx];
        let off = seg_init.sh_offset as usize;
        assert_eq!(&result[off..off + stream.len()], &stream[..]);

        // Processed section should be erased (not -NoErase)
        for sec in &sections {
            let shdr = &ctx.sections[sec.section_idx];
            let s_off = shdr.sh_offset as usize;
            let s_sz = shdr.sh_size as usize;
            assert!(result[s_off..s_off + s_sz].iter().all(|&b| b == 0));
        }
    }

    #[test]
    fn test_patch_executable_no_erase() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let mut opts = make_default_opts();
        opts.no_erase = true;
        let sections = collect_sections(&dxe, &opts).unwrap();
        let stream = build_init_stream(&sections, Endian::Little);
        let result = patch_executable(&dxe, &sections, &stream, &opts).unwrap();

        // Processed section should NOT be erased
        let ctx = parse_elf_ctx(&result).unwrap();
        for sec in &sections {
            let shdr = &ctx.sections[sec.section_idx];
            let s_off = shdr.sh_offset as usize;
            let s_sz = shdr.sh_size as usize;
            assert_eq!(&result[s_off..s_off + s_sz], &data_content);
        }
    }

    #[test]
    fn test_seg_init_missing() {
        // Use a plain object (no seg_init section)
        let elf = selelf::testutil::make_sharc_object(&["_main"]);
        let opts = make_default_opts();
        let sections = collect_sections(&elf, &opts).unwrap();
        let stream = build_init_stream(&sections, Endian::Little);
        let result = patch_executable(&elf, &sections, &stream, &opts);
        assert!(result.is_err());
        let msg = format!("{}", result.unwrap_err());
        assert!(msg.contains("seg_init"));
    }

    #[test]
    fn test_seg_init_too_small() {
        let data_content = [0x11u8; 64];
        // seg_init only 4 bytes, but stream will need more
        let dxe = make_test_dxe("seg_dmda", &data_content, 4, "___inits");
        let opts = make_default_opts();
        let sections = collect_sections(&dxe, &opts).unwrap();
        let stream = build_init_stream(&sections, Endian::Little);
        let result = patch_executable(&dxe, &sections, &stream, &opts);
        assert!(result.is_err());
        let msg = format!("{}", result.unwrap_err());
        assert!(msg.contains("too small"));
    }

    #[test]
    fn test_symbol_not_found() {
        let data_content = [0x11u8, 0x22, 0x33, 0x44];
        let dxe = make_test_dxe("seg_dmda", &data_content, 256, "___inits");
        let mut opts = make_default_opts();
        opts.begin_init = "nonexistent_symbol".to_string();
        let sections = collect_sections(&dxe, &opts).unwrap();
        let stream = build_init_stream(&sections, Endian::Little);
        let result = patch_executable(&dxe, &sections, &stream, &opts);
        assert!(result.is_err());
        let msg = format!("{}", result.unwrap_err());
        assert!(msg.contains("nonexistent_symbol"));
    }

    #[test]
    fn test_is_all_zeros() {
        assert!(is_all_zeros(&[]));
        assert!(is_all_zeros(&[0, 0, 0, 0]));
        assert!(!is_all_zeros(&[0, 0, 1, 0]));
    }

    #[test]
    fn test_split_zero_runs_no_zeros() {
        let data = vec![1u8, 2, 3, 4, 5, 6, 7, 8];
        let blocks = split_zero_runs(&data, 0x1000);
        assert_eq!(blocks.len(), 1);
        assert_eq!(blocks[0].flags, 0);
        assert_eq!(blocks[0].word_count, 2);
    }

    #[test]
    fn test_split_zero_runs_with_gap() {
        // 4 words nonzero, 4 words zero, 4 words nonzero
        let mut data = vec![0xAAu8; 16];
        data.extend_from_slice(&[0u8; 16]);
        data.extend_from_slice(&[0xBBu8; 16]);
        let blocks = split_zero_runs(&data, 0x1000);
        assert_eq!(blocks.len(), 3);
        assert_eq!(blocks[0].flags, 0); // data
        assert_eq!(blocks[1].flags, 1); // zero-fill
        assert_eq!(blocks[2].flags, 0); // data
    }
}
