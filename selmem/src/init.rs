// SPDX-License-Identifier: GPL-3.0
// init.rs --- Core memory initialization logic for selmem
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};
use selelf::elf::{self, Elf32Header, Elf32Shdr, Endian, SHF_ALLOC, SHT_NOBITS, SHT_PROGBITS};

const SKIP_SECTIONS: &[&str] = &["seg_init", "seg_rth", "seg_pmco"];

/// A section that needs to be initialized at boot.
#[derive(Debug)]
struct InitBlock {
    name: String,
    addr: u32,
    size: u32,
    data: Vec<u8>,
    is_nobits: bool,
}

/// Parsed ELF context for processing.
struct ElfContext {
    header: Elf32Header,
    sections: Vec<Elf32Shdr>,
    shstrtab: Vec<u8>,
}

fn parse_elf(data: &[u8]) -> Result<ElfContext> {
    let header = elf::parse_header(data)?;
    let e = header.ei_data;
    let shnum = header.e_shnum as usize;
    let shoff = header.e_shoff as usize;
    let shentsz = header.e_shentsize as usize;

    let mut sections = Vec::with_capacity(shnum);
    for i in 0..shnum {
        let off = shoff + i * shentsz;
        if off + shentsz > data.len() {
            return Err(
                selelf::error::Error::InvalidElf("section header out of bounds".into()).into(),
            );
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

    Ok(ElfContext {
        header,
        sections,
        shstrtab,
    })
}

fn section_name<'a>(ctx: &'a ElfContext, shdr: &Elf32Shdr) -> &'a str {
    elf::read_string_at(&ctx.shstrtab, shdr.sh_name)
}

/// Find the index of the seg_init section.
fn find_seg_init(ctx: &ElfContext) -> Result<usize> {
    for (i, shdr) in ctx.sections.iter().enumerate() {
        if section_name(ctx, shdr) == "seg_init" {
            return Ok(i);
        }
    }
    Err(Error::SegInitMissing)
}

/// Test whether a section should be processed for initialization.
fn is_processable(ctx: &ElfContext, shdr: &Elf32Shdr) -> bool {
    if shdr.sh_flags & SHF_ALLOC == 0 {
        return false;
    }
    if shdr.sh_type != SHT_PROGBITS && shdr.sh_type != SHT_NOBITS {
        return false;
    }
    if shdr.sh_size == 0 {
        return false;
    }
    let name = section_name(ctx, shdr);
    !SKIP_SECTIONS.contains(&name)
}

/// Collect all sections that need initialization.
fn collect_init_sections(ctx: &ElfContext, data: &[u8]) -> Vec<InitBlock> {
    let mut blocks = Vec::new();
    for shdr in &ctx.sections {
        if !is_processable(ctx, shdr) {
            continue;
        }
        let is_nobits = shdr.sh_type == SHT_NOBITS;
        let section_data = if is_nobits {
            Vec::new()
        } else {
            let off = shdr.sh_offset as usize;
            let sz = shdr.sh_size as usize;
            if off + sz <= data.len() {
                data[off..off + sz].to_vec()
            } else {
                vec![0u8; sz]
            }
        };
        blocks.push(InitBlock {
            name: section_name(ctx, shdr).to_string(),
            addr: shdr.sh_addr,
            size: shdr.sh_size,
            data: section_data,
            is_nobits,
        });
    }
    blocks
}

/// Build the initialization stream from collected blocks.
///
/// Stream format (all values in target endianness):
///   u32  block_count
///   For each block:
///     u32  destination_address
///     u32  word_count  (size in bytes)
///     [u8] data payload (size bytes), or zero for NOBITS
fn build_stream(blocks: &[InitBlock], endian: Endian) -> Vec<u8> {
    let mut stream = Vec::new();

    // Header: number of blocks
    stream.extend_from_slice(&endian.write_u32(blocks.len() as u32));

    for block in blocks {
        // Destination address
        stream.extend_from_slice(&endian.write_u32(block.addr));
        // Size in bytes
        stream.extend_from_slice(&endian.write_u32(block.size));
        if block.is_nobits {
            // Zero-fill: write `size` bytes of zeros
            stream.resize(stream.len() + block.size as usize, 0);
        } else {
            stream.extend_from_slice(&block.data);
        }
    }

    stream
}

/// Process the input ELF: build init stream, write into seg_init, clear
/// processed sections, and return the modified ELF bytes.
pub fn process(input: &[u8], verbose: bool) -> Result<Vec<u8>> {
    let ctx = parse_elf(input)?;
    let seg_init_idx = find_seg_init(&ctx)?;

    let blocks = collect_init_sections(&ctx, input);

    if verbose {
        for block in &blocks {
            eprintln!(
                "Processing section '{}' (addr=0x{:08X}, size=0x{:X})",
                block.name, block.addr, block.size
            );
        }
    }

    let stream = build_stream(&blocks, ctx.header.ei_data);

    let seg_init = &ctx.sections[seg_init_idx];
    let capacity = seg_init.sh_size as usize;
    if stream.len() > capacity {
        return Err(Error::SegInitTooSmall {
            need: stream.len(),
            have: capacity,
        });
    }

    let mut output = input.to_vec();

    // Write init stream into seg_init
    let init_off = seg_init.sh_offset as usize;
    output[init_off..init_off + stream.len()].copy_from_slice(&stream);
    // Zero-pad remaining space in seg_init
    for b in &mut output[init_off + stream.len()..init_off + capacity] {
        *b = 0;
    }

    // Clear processed sections' data in the output
    for shdr in &ctx.sections {
        if !is_processable(&ctx, shdr) {
            continue;
        }
        if shdr.sh_type == SHT_PROGBITS {
            let off = shdr.sh_offset as usize;
            let sz = shdr.sh_size as usize;
            if off + sz <= output.len() {
                for b in &mut output[off..off + sz] {
                    *b = 0;
                }
            }
        }
    }

    Ok(output)
}

#[cfg(test)]
mod tests {
    use super::*;
    use selelf::elf::ELFDATA2LSB;

    /// Build a minimal executable ELF with named sections for testing.
    ///
    /// Creates sections: seg_rth, seg_pmco, seg_init (with given capacity),
    /// and any additional sections specified.
    struct TestElfBuilder {
        sections: Vec<TestSection>,
    }

    struct TestSection {
        name: String,
        sh_type: u32,
        sh_flags: u32,
        addr: u32,
        data: Vec<u8>,
    }

    impl TestElfBuilder {
        fn new() -> Self {
            Self {
                sections: Vec::new(),
            }
        }

        fn add_section(
            &mut self,
            name: &str,
            sh_type: u32,
            sh_flags: u32,
            addr: u32,
            data: &[u8],
        ) -> &mut Self {
            self.sections.push(TestSection {
                name: name.to_string(),
                sh_type,
                sh_flags,
                addr,
                data: data.to_vec(),
            });
            self
        }

        fn build(&self) -> Vec<u8> {
            let endian = ELFDATA2LSB;

            // Build shstrtab
            let mut shstrtab = vec![0u8];
            let shstrtab_name_off = shstrtab.len();
            shstrtab.extend_from_slice(b".shstrtab\0");
            let mut name_offsets = Vec::new();
            for sec in &self.sections {
                name_offsets.push(shstrtab.len());
                shstrtab.extend_from_slice(sec.name.as_bytes());
                shstrtab.push(0);
            }

            // Layout: ELF header, then section data, then shstrtab, then section headers
            let ehdr_size = 52usize;
            let mut cursor = ehdr_size;

            // Section data offsets
            let mut data_offsets = Vec::new();
            for sec in &self.sections {
                data_offsets.push(cursor);
                cursor += sec.data.len();
            }
            let shstrtab_off = cursor;
            cursor += shstrtab.len();
            let shtab_off = cursor;

            // Sections: [0] NULL, [1] .shstrtab, [2..] user sections
            let num_sections = 2 + self.sections.len();
            let total_size = shtab_off + num_sections * 40;
            let mut out = vec![0u8; total_size];

            // ELF header
            out[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
            out[4] = 1; // ELFCLASS32
            out[5] = endian;
            out[6] = 1; // EV_CURRENT
            write_u16_le(&mut out[16..], 2); // ET_EXEC
            write_u16_le(&mut out[18..], 0x85); // SHARC
            write_u32_le(&mut out[20..], 1); // e_version
            write_u32_le(&mut out[32..], shtab_off as u32); // e_shoff
            write_u16_le(&mut out[44..], 52); // e_ehsize
            write_u16_le(&mut out[46..], 40); // e_shentsize
            write_u16_le(&mut out[48..], num_sections as u16); // e_shnum
            write_u16_le(&mut out[50..], 1); // e_shstrndx

            // Copy section data
            for (i, sec) in self.sections.iter().enumerate() {
                let off = data_offsets[i];
                out[off..off + sec.data.len()].copy_from_slice(&sec.data);
            }
            out[shstrtab_off..shstrtab_off + shstrtab.len()].copy_from_slice(&shstrtab);

            // Section header [0]: NULL (already zeros)
            // Section header [1]: .shstrtab
            let base = shtab_off + 40;
            write_u32_le(&mut out[base..], shstrtab_name_off as u32); // sh_name
            write_u32_le(&mut out[base + 4..], 3); // SHT_STRTAB
            write_u32_le(&mut out[base + 16..], shstrtab_off as u32); // sh_offset
            write_u32_le(&mut out[base + 20..], shstrtab.len() as u32); // sh_size

            // User sections
            for (i, sec) in self.sections.iter().enumerate() {
                let base = shtab_off + (2 + i) * 40;
                write_u32_le(&mut out[base..], name_offsets[i] as u32);
                write_u32_le(&mut out[base + 4..], sec.sh_type);
                write_u32_le(&mut out[base + 8..], sec.sh_flags);
                write_u32_le(&mut out[base + 12..], sec.addr);
                write_u32_le(&mut out[base + 16..], data_offsets[i] as u32);
                write_u32_le(&mut out[base + 20..], sec.data.len() as u32);
            }

            out
        }
    }

    fn write_u16_le(buf: &mut [u8], val: u16) {
        buf[0..2].copy_from_slice(&val.to_le_bytes());
    }

    fn write_u32_le(buf: &mut [u8], val: u32) {
        buf[0..4].copy_from_slice(&val.to_le_bytes());
    }

    fn read_u32_le(data: &[u8]) -> u32 {
        u32::from_le_bytes([data[0], data[1], data[2], data[3]])
    }

    #[test]
    fn test_missing_seg_init() {
        let elf = TestElfBuilder::new()
            .add_section("seg_rth", SHT_PROGBITS, SHF_ALLOC, 0x0009_0000, &[0; 16])
            .build();

        let result = process(&elf, false);
        assert!(matches!(result.unwrap_err(), Error::SegInitMissing));
    }

    #[test]
    fn test_empty_init_only_seg_init_present() {
        // Only seg_init, seg_rth, seg_pmco -- nothing to initialize
        let mut builder = TestElfBuilder::new();
        builder
            .add_section("seg_rth", SHT_PROGBITS, SHF_ALLOC, 0x0009_0000, &[0; 16])
            .add_section("seg_pmco", SHT_PROGBITS, SHF_ALLOC, 0x0009_0100, &[0; 32])
            .add_section("seg_init", SHT_PROGBITS, SHF_ALLOC, 0x0009_0200, &[0; 64]);
        let elf = builder.build();
        let result = process(&elf, false).unwrap();

        // seg_init should contain block_count=0 (4 bytes LE)
        let ctx = parse_elf(&result).unwrap();
        let seg_init_idx = find_seg_init(&ctx).unwrap();
        let seg_init = &ctx.sections[seg_init_idx];
        let off = seg_init.sh_offset as usize;
        let count = read_u32_le(&result[off..]);
        assert_eq!(count, 0);
    }

    #[test]
    fn test_data_section_initialized() {
        let dmda_data: Vec<u8> = (0..24).collect();
        let seg_init_capacity = 256;

        let mut builder = TestElfBuilder::new();
        builder
            .add_section("seg_rth", SHT_PROGBITS, SHF_ALLOC, 0x0009_0000, &[0; 16])
            .add_section("seg_pmco", SHT_PROGBITS, SHF_ALLOC, 0x0009_0100, &[0; 32])
            .add_section(
                "seg_init",
                SHT_PROGBITS,
                SHF_ALLOC,
                0x0009_0200,
                &vec![0; seg_init_capacity],
            )
            .add_section("seg_dmda", SHT_PROGBITS, SHF_ALLOC, 0x000B_0000, &dmda_data);
        let elf = builder.build();
        let result = process(&elf, false).unwrap();

        // Check init stream in seg_init
        let ctx = parse_elf(&result).unwrap();
        let seg_init_idx = find_seg_init(&ctx).unwrap();
        let seg_init = &ctx.sections[seg_init_idx];
        let off = seg_init.sh_offset as usize;

        let block_count = read_u32_le(&result[off..]);
        assert_eq!(block_count, 1);

        let dest_addr = read_u32_le(&result[off + 4..]);
        assert_eq!(dest_addr, 0x000B_0000);

        let size = read_u32_le(&result[off + 8..]);
        assert_eq!(size, 24);

        let payload = &result[off + 12..off + 12 + 24];
        assert_eq!(payload, &dmda_data);

        // Check that seg_dmda data is zeroed in output
        let dmda_section = &ctx.sections[5]; // seg_dmda is section index 5 (NULL, shstrtab, rth, pmco, init, dmda)
        let dmda_off = dmda_section.sh_offset as usize;
        assert!(result[dmda_off..dmda_off + 24].iter().all(|&b| b == 0));
    }

    #[test]
    fn test_nobits_section() {
        let seg_init_capacity = 256;

        let mut builder = TestElfBuilder::new();
        builder
            .add_section("seg_rth", SHT_PROGBITS, SHF_ALLOC, 0x0009_0000, &[0; 16])
            .add_section(
                "seg_init",
                SHT_PROGBITS,
                SHF_ALLOC,
                0x0009_0200,
                &vec![0; seg_init_capacity],
            )
            .add_section("seg_bss", SHT_NOBITS, SHF_ALLOC, 0x000C_0000, &[0; 32]);
        let elf = builder.build();
        let result = process(&elf, false).unwrap();

        let ctx = parse_elf(&result).unwrap();
        let seg_init_idx = find_seg_init(&ctx).unwrap();
        let seg_init = &ctx.sections[seg_init_idx];
        let off = seg_init.sh_offset as usize;

        let block_count = read_u32_le(&result[off..]);
        assert_eq!(block_count, 1);

        let dest_addr = read_u32_le(&result[off + 4..]);
        assert_eq!(dest_addr, 0x000C_0000);

        let size = read_u32_le(&result[off + 8..]);
        assert_eq!(size, 32);

        // NOBITS payload should be all zeros
        let payload = &result[off + 12..off + 12 + 32];
        assert!(payload.iter().all(|&b| b == 0));
    }

    #[test]
    fn test_seg_init_too_small() {
        let dmda_data = vec![0xAA; 100];
        let seg_init_capacity = 8; // Way too small

        let mut builder = TestElfBuilder::new();
        builder
            .add_section(
                "seg_init",
                SHT_PROGBITS,
                SHF_ALLOC,
                0x0009_0200,
                &vec![0; seg_init_capacity],
            )
            .add_section("seg_dmda", SHT_PROGBITS, SHF_ALLOC, 0x000B_0000, &dmda_data);
        let elf = builder.build();
        let result = process(&elf, false);
        assert!(matches!(result.unwrap_err(), Error::SegInitTooSmall { .. }));
    }

    #[test]
    fn test_multiple_sections() {
        let data_a: Vec<u8> = vec![0x11; 8];
        let data_b: Vec<u8> = vec![0x22; 12];
        let seg_init_capacity = 512;

        let mut builder = TestElfBuilder::new();
        builder
            .add_section("seg_rth", SHT_PROGBITS, SHF_ALLOC, 0x0009_0000, &[0; 16])
            .add_section("seg_pmco", SHT_PROGBITS, SHF_ALLOC, 0x0009_0100, &[0; 32])
            .add_section(
                "seg_init",
                SHT_PROGBITS,
                SHF_ALLOC,
                0x0009_0200,
                &vec![0; seg_init_capacity],
            )
            .add_section("seg_dmda", SHT_PROGBITS, SHF_ALLOC, 0x000B_0000, &data_a)
            .add_section("seg_pmda", SHT_PROGBITS, SHF_ALLOC, 0x000C_0000, &data_b);
        let elf = builder.build();
        let result = process(&elf, false).unwrap();

        let ctx = parse_elf(&result).unwrap();
        let seg_init_idx = find_seg_init(&ctx).unwrap();
        let seg_init = &ctx.sections[seg_init_idx];
        let off = seg_init.sh_offset as usize;

        let block_count = read_u32_le(&result[off..]);
        assert_eq!(block_count, 2);

        // Block 0: seg_dmda
        let addr0 = read_u32_le(&result[off + 4..]);
        assert_eq!(addr0, 0x000B_0000);
        let size0 = read_u32_le(&result[off + 8..]);
        assert_eq!(size0, 8);
        assert_eq!(&result[off + 12..off + 12 + 8], &data_a);

        // Block 1: seg_pmda
        let b1_off = off + 12 + 8;
        let addr1 = read_u32_le(&result[b1_off..]);
        assert_eq!(addr1, 0x000C_0000);
        let size1 = read_u32_le(&result[b1_off + 4..]);
        assert_eq!(size1, 12);
        assert_eq!(&result[b1_off + 8..b1_off + 8 + 12], &data_b);
    }

    #[test]
    fn test_non_alloc_section_skipped() {
        let seg_init_capacity = 256;

        let mut builder = TestElfBuilder::new();
        builder
            .add_section(
                "seg_init",
                SHT_PROGBITS,
                SHF_ALLOC,
                0x0009_0200,
                &vec![0; seg_init_capacity],
            )
            .add_section(
                ".comment",
                SHT_PROGBITS,
                0, // No SHF_ALLOC
                0,
                &[0x41; 20],
            );
        let elf = builder.build();
        let result = process(&elf, false).unwrap();

        let ctx = parse_elf(&result).unwrap();
        let seg_init_idx = find_seg_init(&ctx).unwrap();
        let seg_init = &ctx.sections[seg_init_idx];
        let off = seg_init.sh_offset as usize;

        let block_count = read_u32_le(&result[off..]);
        assert_eq!(block_count, 0);
    }
}
