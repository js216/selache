// SPDX-License-Identifier: GPL-3.0
// ldr.rs --- Boot stream block generation for ADSP-2156x LDR files
// Copyright (c) 2026 Jakob Kastelic

use crate::cli::Options;
use crate::crc32::Crc32;
use crate::error::{Error, Result};
use selelf::elf::{self, PT_LOAD};

/// ELF type: executable.
const ET_EXEC: u16 = 2;

/// SHARC+ e_machine value.
const EM_SHARC: u16 = 0x85;

/// Boot block header signature for ARM/core0.
const SIG_CORE0: u8 = 0xAD;

// Block flag bit positions.
const FLAG_FINAL: u32 = 1 << 15;
const FLAG_FIRST: u32 = 1 << 14;

/// A single boot stream block.
#[derive(Debug)]
pub struct Block {
    pub flags: u32,
    pub bcode: u32,
    pub target_addr: u32,
    pub data: Vec<u8>,
    pub argument: u32,
}

impl Block {
    /// Number of padding bytes needed to align payload to 4 bytes.
    fn padding(&self) -> usize {
        (4 - (self.data.len() % 4)) % 4
    }

    /// Serialize this block into bytes (16-byte header + padded payload).
    pub fn to_bytes(&self) -> Vec<u8> {
        let header_word = build_header_word(SIG_CORE0, self.flags, self.bcode);
        let byte_count = self.data.len() as u32;
        let pad = self.padding();

        let mut out = Vec::with_capacity(16 + self.data.len() + pad);
        out.extend_from_slice(&header_word.to_le_bytes());
        out.extend_from_slice(&self.target_addr.to_le_bytes());
        out.extend_from_slice(&byte_count.to_le_bytes());
        out.extend_from_slice(&self.argument.to_le_bytes());
        out.extend_from_slice(&self.data);
        out.extend(std::iter::repeat_n(0u8, pad));
        out
    }
}

/// Build the 32-bit header word with signature, XOR checksum, flags, and
/// bcode.
///
/// Layout (little-endian bytes):
///   byte 0: flags[3:0] (bcode) | flags[7:4]
///   byte 1: XOR checksum (computed over bytes 0, 2, 3)
///   byte 2: flags[15:8]
///   byte 3: signature
fn build_header_word(signature: u8, flags: u32, bcode: u32) -> u32 {
    let combined = (flags & 0xFFF0) | (bcode & 0x000F);
    let byte0 = (combined & 0xFF) as u8;
    let byte2 = ((combined >> 8) & 0xFF) as u8;
    let byte3 = signature;

    let xor = byte0 ^ byte2 ^ byte3;

    u32::from_le_bytes([byte0, xor, byte2, byte3])
}

/// Parse an ELF executable and generate the boot stream blocks.
pub fn generate_boot_stream(elf_data: &[u8], opts: &Options) -> Result<Vec<Block>> {
    let header = elf::parse_header(elf_data)?;

    if header.e_type != ET_EXEC {
        return Err(Error::InvalidElf(format!(
            "expected ET_EXEC (2), got {}",
            header.e_type
        )));
    }
    if header.e_machine != EM_SHARC {
        return Err(Error::InvalidElf(format!(
            "expected SHARC machine (0x85), got 0x{:04X}",
            header.e_machine
        )));
    }

    let endian = header.ei_data;
    let phnum = header.e_phnum as usize;
    let phoff = header.e_phoff as usize;
    let phentsz = header.e_phentsize as usize;

    // Collect PT_LOAD segments.
    let mut segments: Vec<(u32, Vec<u8>)> = Vec::new();
    for i in 0..phnum {
        let off = phoff + i * phentsz;
        if off + phentsz > elf_data.len() {
            return Err(Error::InvalidElf(
                "program header out of bounds".into(),
            ));
        }
        let phdr = elf::parse_program_header(&elf_data[off..], endian);
        if phdr.p_type != PT_LOAD {
            continue;
        }
        if phdr.p_filesz == 0 {
            continue;
        }
        let data_off = phdr.p_offset as usize;
        let data_sz = phdr.p_filesz as usize;
        if data_off + data_sz > elf_data.len() {
            return Err(Error::InvalidElf(
                "segment data out of bounds".into(),
            ));
        }
        let addr = load_address(&phdr);
        segments.push((addr, elf_data[data_off..data_off + data_sz].to_vec()));
    }

    // Sort by target address.
    segments.sort_by_key(|(addr, _)| *addr);

    let bcode = opts.bcode.unwrap_or(0);
    let mut blocks = Vec::new();

    for (addr, data) in &segments {
        if let Some(max) = opts.max_block_size {
            let max = max as usize;
            let mut offset = 0;
            while offset < data.len() {
                let end = (offset + max).min(data.len());
                let chunk = data[offset..end].to_vec();
                let block_addr = addr + offset as u32;
                blocks.push(Block {
                    flags: 0,
                    bcode,
                    target_addr: block_addr,
                    data: chunk,
                    argument: 0,
                });
                offset = end;
            }
        } else {
            blocks.push(Block {
                flags: 0,
                bcode,
                target_addr: *addr,
                data: data.clone(),
                argument: 0,
            });
        }
    }

    // Set FIRST flag on first block.
    if let Some(first) = blocks.first_mut() {
        first.flags |= FLAG_FIRST;
    }

    // Append final block with entry point address for the boot ROM.
    blocks.push(Block {
        flags: FLAG_FINAL,
        bcode,
        target_addr: header.e_entry,
        data: Vec::new(),
        argument: 0,
    });

    // If there were no data blocks, the final block is also the first.
    if blocks.len() == 1 {
        blocks[0].flags |= FLAG_FIRST;
    }

    // Compute CRC32 per block if enabled.
    if opts.crc32_enabled {
        let crc_ctx = Crc32::new(opts.crc32_polynomial);
        for block in &mut blocks {
            block.argument = crc_ctx.checksum(&block.data);
        }
    }

    if opts.verbose {
        for (i, block) in blocks.iter().enumerate() {
            eprintln!(
                "Block {i}: addr=0x{:08X} size={} flags=0x{:04X} arg=0x{:08X}",
                block.target_addr,
                block.data.len(),
                block.flags | (block.bcode & 0xF),
                block.argument,
            );
        }
    }

    Ok(blocks)
}

/// Determine the load address for a segment. Use `p_paddr` (the physical
/// address) which is what the boot ROM targets.
fn load_address(phdr: &elf::Elf32Phdr) -> u32 {
    phdr.p_paddr
}

/// Serialize a list of blocks into a raw byte stream.
pub fn serialize_blocks(blocks: &[Block]) -> Vec<u8> {
    let total: usize = blocks.iter().map(|b| 16 + b.data.len() + b.padding()).sum();
    let mut out = Vec::with_capacity(total);
    for block in blocks {
        out.extend_from_slice(&block.to_bytes());
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_build_header_word_xor() {
        let hw = build_header_word(0xAD, FLAG_FIRST, 0);
        let bytes = hw.to_le_bytes();
        // byte0 = FLAG_FIRST low byte = 0x00 (bits 7:0 of 0x4000 = 0x00)
        // byte2 = FLAG_FIRST high byte = 0x40 (bits 15:8 of 0x4000)
        // byte3 = 0xAD
        // xor = 0x00 ^ 0x40 ^ 0xAD = 0xED
        assert_eq!(bytes[0], 0x00);
        assert_eq!(bytes[1], 0xED);
        assert_eq!(bytes[2], 0x40);
        assert_eq!(bytes[3], 0xAD);
    }

    #[test]
    fn test_build_header_word_bcode() {
        let hw = build_header_word(0xAD, 0, 5);
        let bytes = hw.to_le_bytes();
        assert_eq!(bytes[0] & 0x0F, 5);
    }

    #[test]
    fn test_build_header_word_final() {
        let hw = build_header_word(0xAD, FLAG_FINAL, 0);
        let bytes = hw.to_le_bytes();
        assert_eq!(bytes[2], 0x80); // bit 15 => byte2 bit 7
    }

    #[test]
    fn test_block_to_bytes_length() {
        let block = Block {
            flags: FLAG_FIRST,
            bcode: 0,
            target_addr: 0x0009_0000,
            data: vec![0xAA; 32],
            argument: 0,
        };
        let bytes = block.to_bytes();
        assert_eq!(bytes.len(), 16 + 32);

        // Verify byte count field
        let byte_count = u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]);
        assert_eq!(byte_count, 32);
    }

    #[test]
    fn test_block_to_bytes_target_addr() {
        let block = Block {
            flags: 0,
            bcode: 0,
            target_addr: 0xDEAD_BEEF,
            data: Vec::new(),
            argument: 0,
        };
        let bytes = block.to_bytes();
        let addr = u32::from_le_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]);
        assert_eq!(addr, 0xDEAD_BEEF);
    }

    #[test]
    fn test_serialize_blocks_empty() {
        let blocks: Vec<Block> = Vec::new();
        let result = serialize_blocks(&blocks);
        assert!(result.is_empty());
    }

    /// Build a minimal SHARC ELF executable with one PT_LOAD segment for
    /// testing.
    fn make_test_elf(addr: u32, data: &[u8]) -> Vec<u8> {
        let ehdr_size = 52usize;
        let phdr_size = 32usize;
        let phdr_off = ehdr_size;
        let data_off = phdr_off + phdr_size;
        let total = data_off + data.len();

        let mut elf = vec![0u8; total];
        // ELF magic
        elf[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
        elf[4] = 1; // ELFCLASS32
        elf[5] = 1; // ELFDATA2LSB
        elf[6] = 1; // EV_CURRENT
        // e_type = ET_EXEC (2)
        elf[16..18].copy_from_slice(&2u16.to_le_bytes());
        // e_machine = 0x85
        elf[18..20].copy_from_slice(&0x85u16.to_le_bytes());
        // e_version
        elf[20..24].copy_from_slice(&1u32.to_le_bytes());
        // e_phoff
        elf[28..32].copy_from_slice(&(phdr_off as u32).to_le_bytes());
        // e_phentsize
        elf[42..44].copy_from_slice(&(phdr_size as u16).to_le_bytes());
        // e_phnum = 1
        elf[44..46].copy_from_slice(&1u16.to_le_bytes());

        // Program header (PT_LOAD)
        let ph = phdr_off;
        elf[ph..ph + 4].copy_from_slice(&1u32.to_le_bytes()); // PT_LOAD
        elf[ph + 4..ph + 8].copy_from_slice(&(data_off as u32).to_le_bytes());
        elf[ph + 8..ph + 12].copy_from_slice(&addr.to_le_bytes()); // p_vaddr
        elf[ph + 12..ph + 16].copy_from_slice(&addr.to_le_bytes()); // p_paddr
        elf[ph + 16..ph + 20].copy_from_slice(&(data.len() as u32).to_le_bytes());
        elf[ph + 20..ph + 24].copy_from_slice(&(data.len() as u32).to_le_bytes());

        // Copy segment data
        elf[data_off..data_off + data.len()].copy_from_slice(data);

        elf
    }

    fn default_opts() -> Options {
        Options {
            processor: "ADSP-21569".into(),
            boot_mode: crate::cli::BootMode::Spi,
            bcode: None,
            input_file: String::new(),
            output_file: None,
            format: crate::cli::OutputFormat::Binary,
            crc32_enabled: false,
            crc32_polynomial: crate::crc32::DEFAULT_POLYNOMIAL,
            max_block_size: None,
            max_image_size: None,
            width: None,
            verbose: false,
            show_help: false,
            show_version: false,
            suppress_warnings: false,
            no_fill_block: false,
            si_revision: None,
        }
    }

    #[test]
    fn test_generate_single_segment() {
        let data = vec![0xAA; 64];
        let elf = make_test_elf(0x0009_0000, &data);
        let opts = default_opts();
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        // One data block + one final block
        assert_eq!(blocks.len(), 2);
        assert_ne!(blocks[0].flags & FLAG_FIRST, 0);
        assert_eq!(blocks[0].target_addr, 0x0009_0000);
        assert_eq!(blocks[0].data.len(), 64);
        assert_ne!(blocks[1].flags & FLAG_FINAL, 0);
        assert_eq!(blocks[1].data.len(), 0);
        assert_eq!(blocks[1].target_addr, 0);
    }

    #[test]
    fn test_generate_with_max_block_size() {
        let data = vec![0xBB; 100];
        let elf = make_test_elf(0x1000, &data);
        let mut opts = default_opts();
        opts.max_block_size = Some(32);
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        // 100 bytes / 32 = 4 blocks (32+32+32+4) + 1 final
        assert_eq!(blocks.len(), 5);
        assert_eq!(blocks[0].data.len(), 32);
        assert_eq!(blocks[0].target_addr, 0x1000);
        assert_eq!(blocks[1].data.len(), 32);
        assert_eq!(blocks[1].target_addr, 0x1020);
        assert_eq!(blocks[2].data.len(), 32);
        assert_eq!(blocks[3].data.len(), 4);
        assert_eq!(blocks[3].target_addr, 0x1060);
        assert_ne!(blocks[4].flags & FLAG_FINAL, 0);
    }

    #[test]
    fn test_generate_with_crc32() {
        let data = vec![0xCC; 16];
        let elf = make_test_elf(0x2000, &data);
        let mut opts = default_opts();
        opts.crc32_enabled = true;
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        let expected_crc = crate::crc32::Crc32::new(crate::crc32::DEFAULT_POLYNOMIAL).checksum(&data);
        assert_eq!(blocks[0].argument, expected_crc);
    }

    #[test]
    fn test_reject_non_exec() {
        let mut elf = make_test_elf(0x1000, &[0; 4]);
        // Change e_type to ET_REL (1)
        elf[16..18].copy_from_slice(&1u16.to_le_bytes());
        let opts = default_opts();
        let result = generate_boot_stream(&elf, &opts);
        assert!(result.is_err());
    }

    #[test]
    fn test_reject_non_sharc() {
        let mut elf = make_test_elf(0x1000, &[0; 4]);
        // Change e_machine to ARM
        elf[18..20].copy_from_slice(&40u16.to_le_bytes());
        let opts = default_opts();
        let result = generate_boot_stream(&elf, &opts);
        assert!(result.is_err());
    }

    #[test]
    fn test_empty_elf_no_segments() {
        // ELF with no program headers
        let mut elf = vec![0u8; 52];
        elf[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
        elf[4] = 1;
        elf[5] = 1;
        elf[6] = 1;
        elf[16..18].copy_from_slice(&2u16.to_le_bytes());
        elf[18..20].copy_from_slice(&0x85u16.to_le_bytes());
        elf[20..24].copy_from_slice(&1u32.to_le_bytes());

        let opts = default_opts();
        let blocks = generate_boot_stream(&elf, &opts).unwrap();
        // Only final block, which is also first
        assert_eq!(blocks.len(), 1);
        assert_ne!(blocks[0].flags & FLAG_FIRST, 0);
        assert_ne!(blocks[0].flags & FLAG_FINAL, 0);
        assert_eq!(blocks[0].target_addr, 0);
    }

    /// Build a test ELF with a custom entry point address.
    fn make_test_elf_with_entry(addr: u32, data: &[u8], entry: u32) -> Vec<u8> {
        let mut elf = make_test_elf(addr, data);
        // e_entry is at offset 24 in the ELF header.
        elf[24..28].copy_from_slice(&entry.to_le_bytes());
        elf
    }

    #[test]
    fn test_final_block_entry_point() {
        let data = vec![0xAA; 32];
        let entry = 0x0009_0100;
        let elf = make_test_elf_with_entry(0x0009_0000, &data, entry);
        let opts = default_opts();
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        assert_eq!(blocks.len(), 2);
        let final_block = &blocks[1];
        assert_ne!(final_block.flags & FLAG_FINAL, 0);
        assert_eq!(final_block.target_addr, entry);
    }

    #[test]
    fn test_block_to_bytes_alignment() {
        let block = Block {
            flags: 0,
            bcode: 0,
            target_addr: 0x1000,
            data: vec![0xBB; 13],
            argument: 0,
        };
        let bytes = block.to_bytes();
        // Total length must be a multiple of 4 (16-byte header + 13 data + 3 pad = 32).
        assert_eq!(bytes.len() % 4, 0);
        assert_eq!(bytes.len(), 32);
        // byte_count field should reflect original unpadded size.
        let byte_count = u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]);
        assert_eq!(byte_count, 13);
    }
}
