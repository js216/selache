// SPDX-License-Identifier: GPL-3.0
// ldr.rs --- Boot stream block generation for ADSP-2156x LDR files
// Copyright (c) 2026 Jakob Kastelic

use crate::cli::Options;
use crate::crc32::Crc32;
use crate::error::{Error, Result};
use selelf::elf::{self, SHF_ALLOC, SHF_EXECINSTR, SHT_PROGBITS};

/// ELF type: executable.
const ET_EXEC: u16 = 2;

/// SHARC+ e_machine value.
const EM_SHARC: u16 = 0x85;

/// Boot block header signature for ARM/core0.
const SIG_CORE0: u8 = 0xAD;

/// Default boot address when entry point is zero (IVT base + 4).
const DEFAULT_BOOT_ADDR: u32 = 0x0009_0004;

// Block flag bit positions (dBlockCode bits 15:8 in byte 1).
const BFLAG_FINAL: u32 = 1 << 15;
const BFLAG_FIRST: u32 = 1 << 14;
const BFLAG_IGNORE: u32 = 1 << 12;
const BFLAG_INIT: u32 = 1 << 11;
const BFLAG_CALLBACK: u32 = 1 << 10;
const BFLAG_FILL: u32 = 1 << 8;
/// Encode the BFLAG+BCODE combination into the two low bytes of the
/// dBlockCode header word.
///
/// Returns (byte0, byte1) where:
///   byte0 = BFLAG[7:4] | BCODE[3:0]
///   byte1 = BFLAG[15:8]
fn encode_bflag(flags: u32, bcode: u32) -> (u8, u8) {
    let combined = (flags & 0xFFF0) | (bcode & 0x000F);
    let byte0 = (combined & 0xFF) as u8;
    let byte1 = ((combined >> 8) & 0xFF) as u8;
    (byte0, byte1)
}

/// A single boot stream block.
#[derive(Debug)]
pub struct Block {
    pub flags: u32,
    pub bcode: u32,
    pub target_addr: u32,
    pub data: Vec<u8>,
    pub argument: u32,
    /// For FILL blocks: the byte count written to the header (fill size).
    /// FILL blocks carry no payload in the stream; `data` is empty.
    pub fill_count: u32,
}

impl Block {
    /// Number of padding bytes needed to align payload to 4 bytes.
    fn padding(&self) -> usize {
        (4 - (self.data.len() % 4)) % 4
    }

    /// Total serialized size in the boot stream.
    /// FILL blocks contribute only the 16-byte header (no payload).
    pub fn wire_size(&self) -> usize {
        if self.flags & BFLAG_FILL != 0 {
            16
        } else {
            16 + self.data.len() + self.padding()
        }
    }

    /// Serialize this block into bytes.
    ///
    /// The 16-byte header layout (little-endian):
    ///   [0]  BFLAG[7:4] | BCODE[3:0]
    ///   [1]  BFLAG[15:8]
    ///   [2]  HDR_CHK  (XOR of all other 15 header bytes)
    ///   [3]  HDRSIGN  (0xAD)
    ///   [4..8]   target address
    ///   [8..12]  byte count (payload size, or fill count for FILL blocks)
    ///   [12..16] argument
    ///
    /// FILL blocks have no payload in the stream; the byte count field
    /// holds the fill size instead.
    pub fn to_bytes(&self) -> Vec<u8> {
        let (byte0, byte1) = encode_bflag(self.flags, self.bcode);
        let is_fill = self.flags & BFLAG_FILL != 0;
        let byte_count = if is_fill { self.fill_count } else { self.data.len() as u32 };
        let pad = if is_fill { 0 } else { self.padding() };

        let mut hdr = [0u8; 16];
        hdr[0] = byte0;
        hdr[1] = byte1;
        hdr[3] = SIG_CORE0;
        hdr[4..8].copy_from_slice(&self.target_addr.to_le_bytes());
        hdr[8..12].copy_from_slice(&byte_count.to_le_bytes());
        hdr[12..16].copy_from_slice(&self.argument.to_le_bytes());

        // HDR_CHK = XOR of all 15 non-checksum bytes
        let mut chk: u8 = 0;
        for (i, &b) in hdr.iter().enumerate() {
            if i != 2 {
                chk ^= b;
            }
        }
        hdr[2] = chk;

        let mut out = Vec::with_capacity(16 + self.data.len() + pad);
        out.extend_from_slice(&hdr);
        if !is_fill {
            out.extend_from_slice(&self.data);
            out.extend(std::iter::repeat_n(0u8, pad));
        }
        out
    }
}

/// Swap bytes within each 16-bit half-word: [a,b,c,d] → [b,a,d,c].
fn swap_16(data: &mut [u8]) {
    let mut i = 0;
    while i + 1 < data.len() {
        data.swap(i, i + 1);
        i += 2;
    }
}

/// Reverse each 6-byte instruction word: [a,b,c,d,e,f] → [f,e,d,c,b,a].
fn reverse_48(data: &mut [u8]) {
    let mut i = 0;
    while i + 5 < data.len() {
        data.swap(i, i + 5);
        data.swap(i + 1, i + 4);
        data.swap(i + 2, i + 3);
        i += 6;
    }
}

/// Convert a 40-bit-per-word section to 32-bit-per-word boot stream data.
///
/// The ELF stores each DM word as 5 bytes in big-endian order within
/// the 40-bit field.  The boot ROM expects 4 bytes per word in
/// little-endian order.  So for each 5-byte group `[b0,b1,b2,b3,b4]`,
/// we emit `[b3,b2,b1,b0]` (byte-reverse the lower 4 bytes, drop b4).
fn convert_nw_to_boot(raw: &[u8]) -> Vec<u8> {
    let num_words = raw.len().div_ceil(5);
    let mut out = Vec::with_capacity(num_words * 4);
    for w in 0..num_words {
        let base = w * 5;
        let b = |i: usize| {
            if base + i < raw.len() { raw[base + i] } else { 0 }
        };
        out.push(b(3));
        out.push(b(2));
        out.push(b(1));
        out.push(b(0));
    }
    out
}

/// Pad data to a 4-byte boundary with zeros.
fn pad_to_4(data: &mut Vec<u8>) {
    let pad = (4 - (data.len() % 4)) % 4;
    data.extend(std::iter::repeat_n(0u8, pad));
}

/// A data or fill segment within a section, produced by zero-run compression.
enum Segment {
    /// Non-zero data to include in the boot stream.
    Data(Vec<u8>),
    /// A run of zeros to be filled by the boot ROM (no payload in stream).
    Fill(u32),
}

/// Compress a section by stripping trailing zeros and splitting at
/// large interior zero runs (>= 32 bytes).  Small zero runs are kept
/// in the data payload.
/// If `fixed_fill` is Some(n), each fill is clipped to exactly n bytes
/// placed at the END of the zero run (code sections).  Otherwise the
/// entire zero run becomes a fill (data sections).
///
fn compress_zero_runs(data: &[u8], fixed_fill: Option<usize>, threshold: usize) -> Vec<Segment> {
    let step = 4;
    let min_fill = threshold;

    // Find the last non-zero 4-byte word.
    let mut last_nonzero = 0usize;
    let mut pos = 0;
    while pos + step <= data.len() {
        if !data[pos..pos + step].iter().all(|&b| b == 0) {
            last_nonzero = pos + step;
        }
        pos += step;
    }
    if pos < data.len() && !data[pos..].iter().all(|&b| b == 0) {
        last_nonzero = data.len();
    }

    if last_nonzero == 0 {
        return vec![Segment::Data(data.to_vec())];
    }

    let data_part = &data[..last_nonzero];
    let fill_part = data.len() - last_nonzero;

    let mut segs = Vec::new();
    let mut i = 0;
    while i < data_part.len() {
        let mut run_start = None;
        let mut j = i;
        while j + step <= data_part.len() {
            if data_part[j..j + step].iter().all(|&b| b == 0) {
                if run_start.is_none() {
                    run_start = Some(j);
                }
            } else if let Some(rs) = run_start {
                let run_len = j - rs;
                if run_len >= min_fill {
                    // For code sections (fixed_fill), clip the fill to
                    // exactly fixed_fill bytes at the END of the run.
                    // Extra leading zeros stay in the data block.
                    let (fill_start, fill_len) = if let Some(ff) = fixed_fill {
                        let raw_start = j - ff;
                        let aligned = (raw_start + 3) & !3;
                        (aligned, j - aligned)
                    } else {
                        (rs, run_len)
                    };
                    if fill_start > i {
                        segs.push(Segment::Data(data_part[i..fill_start].to_vec()));
                    }
                    segs.push(Segment::Fill(fill_len as u32));
                    i = j;
                    run_start = None;
                    continue;
                }
                run_start = None;
            }
            j += step;
        }
        if let Some(rs) = run_start {
            let run_end = data_part.len();
            let run_len = run_end - rs;
            if run_len >= min_fill {
                let (fill_start, fill_len) = if let Some(ff) = fixed_fill {
                    (run_end - ff.min(run_len), ff.min(run_len))
                } else {
                    (rs, run_len)
                };
                if fill_start > i {
                    segs.push(Segment::Data(data_part[i..fill_start].to_vec()));
                }
                segs.push(Segment::Fill(fill_len as u32));
                i = run_end;
                continue;
            }
        }
        if i < data_part.len() {
            segs.push(Segment::Data(data_part[i..].to_vec()));
        }
        break;
    }

    if fill_part >= min_fill {
        segs.push(Segment::Fill(fill_part as u32));
    } else if fill_part > 0 {
        // Too small to compress — append trailing zeros to the last
        // data segment or create a new one.
        let zeros = vec![0u8; fill_part];
        if let Some(Segment::Data(ref mut d)) = segs.last_mut() {
            d.extend_from_slice(&zeros);
        } else {
            segs.push(Segment::Data(zeros));
        }
    }

    segs
}

/// Convert raw ELF section data to boot stream format.
fn convert_to_boot(raw: &[u8], width: WordWidth) -> Vec<u8> {
    match width {
        WordWidth::SwCode => {
            let mut d = raw.to_vec();
            swap_16(&mut d);
            pad_to_4(&mut d);
            d
        }
        WordWidth::IvCode => {
            let mut d = raw.to_vec();
            reverse_48(&mut d);
            pad_to_4(&mut d);
            d
        }
        WordWidth::ByteWidth => {
            let mut d = raw.to_vec();
            pad_to_4(&mut d);
            d
        }
        WordWidth::NormalWord => {
            convert_nw_to_boot(raw)
        }
    }
}

/// Determine the word width of a section from its name suffix.
///
/// `_bw` = byte width (8-bit), data used as-is.
/// `_nw` = normal word (32-bit), stored as 40-bit in ELF.
/// No recognized suffix on a non-code section = normal word (40→32 conversion).
fn section_is_byte_width(name: &str) -> bool {
    // Split on last underscore-delimited token before any priority suffix
    name.contains("_bw")
}

/// Word-width encoding of a section, determining how to convert ELF
/// data to boot stream format.
#[derive(Clone, Copy)]
enum WordWidth {
    /// Code with align=2: 16-bit pair swap.
    SwCode,
    /// Code with align=1: 48-bit word reversal.
    IvCode,
    /// Byte-width data: no conversion.
    ByteWidth,
    /// Normal-word data: 40-bit → 32-bit.
    NormalWord,
}

/// A loadable section extracted from an ELF executable.
struct LoadableSection {
    addr: u32,
    /// Raw section data from the ELF (before byte-order conversion).
    raw: Vec<u8>,
    width: WordWidth,
    /// True if FILL compression can be applied to this section.
    compressible: bool,
}

/// Collect loadable sections from an ELF executable.
///
/// Returns sections with SHT_PROGBITS type, SHF_ALLOC flag, non-zero
/// address, and non-zero size.  Applies word-width conversion and
/// byte-swap as appropriate for the boot ROM.
fn collect_sections(elf_data: &[u8], header: &elf::Elf32Header) -> Result<Vec<LoadableSection>> {
    let endian = header.ei_data;
    let shnum = header.e_shnum as usize;
    let shoff = header.e_shoff as usize;
    let shentsz = header.e_shentsize as usize;

    // Read shstrtab for section name lookup.
    let shstrtab = if (header.e_shstrndx as usize) < shnum {
        let idx_off = shoff + header.e_shstrndx as usize * shentsz;
        if idx_off + shentsz <= elf_data.len() {
            let st_shdr = elf::parse_section_header(&elf_data[idx_off..], endian);
            let st_off = st_shdr.sh_offset as usize;
            let st_sz = st_shdr.sh_size as usize;
            if st_off + st_sz <= elf_data.len() {
                Some(&elf_data[st_off..st_off + st_sz])
            } else {
                None
            }
        } else {
            None
        }
    } else {
        None
    };

    let mut sections = Vec::new();

    for i in 0..shnum {
        let off = shoff + i * shentsz;
        if off + shentsz > elf_data.len() {
            return Err(Error::InvalidElf(
                "section header out of bounds".into(),
            ));
        }
        let shdr = elf::parse_section_header(&elf_data[off..], endian);

        if shdr.sh_type != SHT_PROGBITS {
            continue;
        }
        if shdr.sh_flags & SHF_ALLOC == 0 {
            continue;
        }
        if shdr.sh_addr == 0 {
            continue;
        }
        if shdr.sh_size == 0 {
            continue;
        }

        let data_off = shdr.sh_offset as usize;
        let data_sz = shdr.sh_size as usize;
        if data_off + data_sz > elf_data.len() {
            return Err(Error::InvalidElf(
                "section data out of bounds".into(),
            ));
        }

        let raw = elf_data[data_off..data_off + data_sz].to_vec();
        let is_code = shdr.sh_flags & SHF_EXECINSTR != 0;

        let name = shstrtab
            .map(|st| elf::read_string_at(st, shdr.sh_name))
            .unwrap_or("");

        let width = if is_code {
            if shdr.sh_addralign <= 1 {
                WordWidth::IvCode
            } else {
                WordWidth::SwCode
            }
        } else if section_is_byte_width(name) {
            WordWidth::ByteWidth
        } else {
            WordWidth::NormalWord
        };

        // Code sections with align=1 (e.g. interrupt vector tables) are
        // not FILL-compressed.  align>=2 code and all data sections are.
        let compressible = !matches!(width, WordWidth::IvCode);

        sections.push(LoadableSection {
            addr: shdr.sh_addr,
            raw,
            width,
            compressible,
        });
    }

    sections.sort_by_key(|s| s.addr);
    Ok(sections)
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

    let sections = collect_sections(elf_data, &header)?;

    let bcode = opts.bcode.unwrap_or(0);

    let boot_addr = if header.e_entry != 0 {
        header.e_entry
    } else {
        DEFAULT_BOOT_ADDR
    };

    // Empty ELF with no loadable sections collapses to a single FIRST|FINAL.
    if sections.is_empty() && !opts.crc32_enabled {
        return Ok(vec![Block {
            flags: BFLAG_FIRST | BFLAG_FINAL,
            bcode,
            target_addr: boot_addr,
            data: Vec::new(),
            argument: 0,
            fill_count: 0,


        }]);
    }

    // Build data blocks.  When FILL compression is enabled (default),
    // zero runs within sections are replaced with FILL blocks that carry
    // no payload in the stream.
    let use_fill = !opts.no_fill_block;
    let mut data_blocks: Vec<Block> = Vec::new();

    for sec in &sections {
        // Compress on the RAW (pre-conversion) data so that zero-run
        // boundaries match instruction/word alignment in the original ELF.
        // Then convert each data segment to boot stream format.
        // Code sections use fixed 68-byte fills at the end of zero runs
        // and 2-byte scan step (half-word alignment).
        // Data sections use variable-length fills and 4-byte scan step.
        let is_code = matches!(sec.width, WordWidth::SwCode);
        let fixed = if is_code { Some(68) } else { None };
        let min_fill = if is_code { 68 } else { 36 };

        let segments = if use_fill && sec.compressible {
            compress_zero_runs(&sec.raw, fixed, min_fill)
        } else if opts.max_block_size.is_some() && sec.compressible {
            // In NoFill+MBS mode, compute FILL boundaries and use them
            // as MBS restart points.  Fill regions become zero-data
            // segments so MBS splits each independently.
            compress_zero_runs(&sec.raw, fixed, min_fill)
                .into_iter()
                .map(|s| match s {
                    Segment::Fill(n) => Segment::Data(vec![0u8; n as usize]),
                    other => other,
                })
                .collect()
        } else {
            vec![Segment::Data(sec.raw.clone())]
        };

        let mut sec_offset = 0u32;
        for seg in segments {
            match seg {
                Segment::Data(raw_chunk) => {
                    let boot_data = convert_to_boot(&raw_chunk, sec.width);
                    let block_addr = sec.addr + sec_offset;
                    sec_offset += raw_chunk.len() as u32;

                    if let Some(max) = opts.max_block_size {
                        let max = max as usize;
                        let mut off = 0;
                        while off < boot_data.len() {
                            let end = (off + max).min(boot_data.len());
                            data_blocks.push(Block {
                                flags: 0,
                                bcode,
                                target_addr: block_addr + off as u32,
                                data: boot_data[off..end].to_vec(),
                                argument: 0,
                                fill_count: 0,
                            });
                            off = end;
                        }
                    } else {
                        data_blocks.push(Block {
                            flags: 0,
                            bcode,
                            target_addr: block_addr,
                            data: boot_data,
                            argument: 0,
                            fill_count: 0,
                        });
                    }
                }
                Segment::Fill(count) => {
                    data_blocks.push(Block {
                        flags: BFLAG_FILL,
                        bcode,
                        target_addr: sec.addr + sec_offset,
                        data: Vec::new(),
                        argument: 0,
                        fill_count: count,
                    });
                    sec_offset += count;
                }
            }
        }
    }

    // Merge adjacent sub-MBS data blocks that are contiguous in
    // address.  Only in NoFill+MBS mode where fill-derived zero
    // segments produce small trailing blocks that should be merged
    // with the following data block.
    if let Some(max) = opts.max_block_size.filter(|_| opts.no_fill_block) {
        let max = max as usize;
        let mut merged = Vec::<Block>::new();
        for block in data_blocks {
            if block.flags != 0 {
                merged.push(block);
                continue;
            }
            if let Some(prev) = merged.last_mut() {
                let contiguous = prev.flags == 0
                    && prev.target_addr + prev.data.len() as u32 == block.target_addr
                    && prev.data.len() + block.data.len() <= max;
                if contiguous {
                    prev.data.extend_from_slice(&block.data);
                    continue;
                }
            }
            merged.push(block);
        }
        data_blocks = merged;
    }

    // Build FINAL block.
    let final_block = Block {
        flags: BFLAG_FINAL,
        bcode,
        target_addr: boot_addr,
        data: Vec::new(),
        argument: 0,
        fill_count: 0,
    };

    // Compute the total wire size of everything after the FIRST block:
    // all data blocks + FINAL block.
    let stream_size_after_first: u32 = data_blocks
        .iter()
        .map(|b| b.wire_size() as u32)
        .sum::<u32>()
        + final_block.wire_size() as u32;

    // Build FIRST marker block.
    let first_block = Block {
        flags: BFLAG_FIRST | BFLAG_IGNORE,
        bcode,
        target_addr: boot_addr,
        data: Vec::new(),
        argument: stream_size_after_first,
        fill_count: 0,
    };

    // Assemble the full block list.
    let mut blocks = Vec::new();

    if opts.crc32_enabled {
        let crc_ctx = Crc32::new(opts.crc32_polynomial);

        // CRC preamble: two blocks before the FIRST marker.
        // Block 0: FIRST|IGNORE, arg = 0x10 (size of the next block).
        blocks.push(Block {
            flags: BFLAG_FIRST | BFLAG_IGNORE,
            bcode,
            target_addr: boot_addr,
            data: Vec::new(),
            argument: 0x10,
            fill_count: 0,


        });

        // Block 1: INIT block, addr = CRC control register, arg = polynomial.
        blocks.push(Block {
            flags: BFLAG_INIT,
            bcode,
            target_addr: 0x00B4_003C,
            data: Vec::new(),
            argument: opts.crc32_polynomial,
            fill_count: 0,


        });

        // FIRST marker (same as non-CRC case).
        blocks.push(first_block);

        // Data blocks with CALLBACK flag and CRC arg.
        // FILL blocks keep their FILL flag only (no CALLBACK, no CRC).
        // CRC is computed on the boot-stream payload (post-swap for code).
        for mut block in data_blocks {
            if block.flags & BFLAG_FILL == 0 {
                block.flags |= BFLAG_CALLBACK;
                block.argument = crc_ctx.checksum(&block.data);
            }
            blocks.push(block);
        }

        // FINAL block (no CALLBACK, arg=0).
        blocks.push(final_block);
    } else {
        blocks.push(first_block);
        blocks.extend(data_blocks);
        blocks.push(final_block);
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

/// Serialize a list of blocks into a raw byte stream.
pub fn serialize_blocks(blocks: &[Block]) -> Vec<u8> {
    let total: usize = blocks.iter().map(|b| b.wire_size()).sum();
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
    fn test_encode_bflag_first() {
        let (b0, b1) = encode_bflag(BFLAG_FIRST, 0);
        // BFLAG_FIRST = 0x4000 => byte0 = 0x00, byte1 = 0x40
        assert_eq!(b0, 0x00);
        assert_eq!(b1, 0x40);
    }

    #[test]
    fn test_encode_bflag_with_bcode() {
        let (b0, _) = encode_bflag(0, 5);
        assert_eq!(b0 & 0x0F, 5);
    }

    #[test]
    fn test_encode_bflag_final() {
        let (_, b1) = encode_bflag(BFLAG_FINAL, 0);
        // BFLAG_FINAL = 0x8000 => byte1 bit 7 set
        assert_eq!(b1, 0x80);
    }

    #[test]
    fn test_header_checksum() {
        let block = Block {
            flags: BFLAG_FIRST | BFLAG_IGNORE,
            bcode: 1,
            target_addr: 0x0009_0004,
            data: Vec::new(),
            argument: 0x30,
            fill_count: 0,


        };
        let bytes = block.to_bytes();

        // Verify HDR_CHK: XOR of all 15 non-checksum header bytes
        let mut chk: u8 = 0;
        for i in 0..16 {
            if i != 2 {
                chk ^= bytes[i];
            }
        }
        assert_eq!(chk, bytes[2]);

        // Verify signature
        assert_eq!(bytes[3], 0xAD);
    }

    #[test]
    fn test_block_to_bytes_length() {
        let block = Block {
            flags: BFLAG_FIRST | BFLAG_IGNORE,
            bcode: 0,
            target_addr: 0x0009_0000,
            data: vec![0xAA; 32],
            argument: 0,
            fill_count: 0,


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
            fill_count: 0,


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

    /// Build a minimal SHARC ELF executable with one SHT_PROGBITS section
    /// for testing. Includes both section headers and a program header for
    /// ELF validity.
    fn make_test_elf(addr: u32, data: &[u8]) -> Vec<u8> {
        make_test_elf_with_entry(addr, data, 0)
    }

    /// Build a test ELF with a custom entry point address.
    fn make_test_elf_with_entry(addr: u32, data: &[u8], entry: u32) -> Vec<u8> {
        let ehdr_size = 52usize;
        let shdr_size = 40usize;
        // We need 3 section headers: SHT_NULL, SHT_PROGBITS (our data),
        // and SHT_STRTAB (section name string table).
        let num_sections = 3usize;
        let shstrtab_content = b"\0.text\0.shstrtab\0";
        let shstrtab_len = shstrtab_content.len();

        // Layout: ELF header | section data | shstrtab | section headers
        let data_off = ehdr_size;
        let shstrtab_off = data_off + data.len();
        let shdr_off = shstrtab_off + shstrtab_len;
        // Align shdr_off to 4 bytes
        let shdr_off = (shdr_off + 3) & !3;
        let total = shdr_off + num_sections * shdr_size;

        let mut elf = vec![0u8; total];

        // ELF header
        elf[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
        elf[4] = 1; // ELFCLASS32
        elf[5] = 1; // ELFDATA2LSB
        elf[6] = 1; // EV_CURRENT
        elf[16..18].copy_from_slice(&2u16.to_le_bytes()); // ET_EXEC
        elf[18..20].copy_from_slice(&0x85u16.to_le_bytes()); // EM_SHARC
        elf[20..24].copy_from_slice(&1u32.to_le_bytes()); // e_version
        elf[24..28].copy_from_slice(&entry.to_le_bytes()); // e_entry
        // e_phoff = 0 (no program headers needed for section-based loading)
        elf[32..36].copy_from_slice(&(shdr_off as u32).to_le_bytes()); // e_shoff
        elf[40..42].copy_from_slice(&(ehdr_size as u16).to_le_bytes()); // e_ehsize
        elf[42..44].copy_from_slice(&0u16.to_le_bytes()); // e_phentsize
        elf[44..46].copy_from_slice(&0u16.to_le_bytes()); // e_phnum
        elf[46..48].copy_from_slice(&(shdr_size as u16).to_le_bytes()); // e_shentsize
        elf[48..50].copy_from_slice(&(num_sections as u16).to_le_bytes()); // e_shnum
        elf[50..52].copy_from_slice(&2u16.to_le_bytes()); // e_shstrndx = 2

        // Section data
        elf[data_off..data_off + data.len()].copy_from_slice(data);

        // Shstrtab content
        elf[shstrtab_off..shstrtab_off + shstrtab_len].copy_from_slice(shstrtab_content);

        // Section header 0: SHT_NULL (all zeros, already done)

        // Section header 1: SHT_PROGBITS (.text)
        let sh1 = shdr_off + shdr_size;
        elf[sh1..sh1 + 4].copy_from_slice(&1u32.to_le_bytes()); // sh_name = 1 (".text")
        elf[sh1 + 4..sh1 + 8].copy_from_slice(&SHT_PROGBITS.to_le_bytes());
        elf[sh1 + 8..sh1 + 12].copy_from_slice(&(SHF_ALLOC | 0x4).to_le_bytes()); // SHF_ALLOC|SHF_EXECINSTR
        elf[sh1 + 12..sh1 + 16].copy_from_slice(&addr.to_le_bytes()); // sh_addr
        elf[sh1 + 16..sh1 + 20].copy_from_slice(&(data_off as u32).to_le_bytes()); // sh_offset
        elf[sh1 + 20..sh1 + 24].copy_from_slice(&(data.len() as u32).to_le_bytes()); // sh_size

        // Section header 2: SHT_STRTAB (.shstrtab)
        let sh2 = shdr_off + 2 * shdr_size;
        elf[sh2..sh2 + 4].copy_from_slice(&7u32.to_le_bytes()); // sh_name = 7 (".shstrtab")
        elf[sh2 + 4..sh2 + 8].copy_from_slice(&3u32.to_le_bytes()); // SHT_STRTAB
        elf[sh2 + 16..sh2 + 20].copy_from_slice(&(shstrtab_off as u32).to_le_bytes());
        elf[sh2 + 20..sh2 + 24].copy_from_slice(&(shstrtab_len as u32).to_le_bytes());

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

        // FIRST marker + one data block + FINAL block
        assert_eq!(blocks.len(), 3);

        // FIRST marker: FIRST|IGNORE, addr=boot_addr, arg=remaining size
        assert_ne!(blocks[0].flags & BFLAG_FIRST, 0);
        assert_ne!(blocks[0].flags & BFLAG_IGNORE, 0);
        assert_eq!(blocks[0].data.len(), 0);

        // Data block
        assert_eq!(blocks[1].target_addr, 0x0009_0000);
        assert_eq!(blocks[1].data.len(), 64);

        // FINAL block
        assert_ne!(blocks[2].flags & BFLAG_FINAL, 0);
        assert_eq!(blocks[2].data.len(), 0);
    }

    #[test]
    fn test_generate_first_arg_is_remaining_size() {
        let data = vec![0xAA; 64];
        let elf = make_test_elf(0x0009_0000, &data);
        let opts = default_opts();
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        // FIRST block's arg = wire size of (data block + FINAL block)
        // data block: 16 header + 64 data = 80
        // FINAL block: 16 header + 0 data = 16
        assert_eq!(blocks[0].argument, 80 + 16);
    }

    #[test]
    fn test_generate_with_max_block_size() {
        let data = vec![0xBB; 100];
        let elf = make_test_elf(0x1000, &data);
        let mut opts = default_opts();
        opts.max_block_size = Some(32);
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        // FIRST marker + 4 data blocks (32+32+32+4) + FINAL = 6
        assert_eq!(blocks.len(), 6);
        assert_ne!(blocks[0].flags & BFLAG_FIRST, 0);
        assert_eq!(blocks[1].data.len(), 32);
        assert_eq!(blocks[1].target_addr, 0x1000);
        assert_eq!(blocks[2].data.len(), 32);
        assert_eq!(blocks[2].target_addr, 0x1020);
        assert_eq!(blocks[3].data.len(), 32);
        assert_eq!(blocks[4].data.len(), 4);
        assert_eq!(blocks[4].target_addr, 0x1060);
        assert_ne!(blocks[5].flags & BFLAG_FINAL, 0);
    }

    #[test]
    fn test_generate_with_crc32() {
        let data = vec![0xCC; 16];
        let elf = make_test_elf(0x2000, &data);
        let mut opts = default_opts();
        opts.crc32_enabled = true;
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        // CRC preamble (2) + FIRST marker + data block + FINAL = 5
        assert_eq!(blocks.len(), 5);

        // Preamble block 0: FIRST|IGNORE, arg=0x10
        assert_ne!(blocks[0].flags & BFLAG_FIRST, 0);
        assert_ne!(blocks[0].flags & BFLAG_IGNORE, 0);
        assert_eq!(blocks[0].argument, 0x10);

        // Preamble block 1: INIT, addr=0x00B4003C
        assert_ne!(blocks[1].flags & BFLAG_INIT, 0);
        assert_eq!(blocks[1].target_addr, 0x00B4_003C);
        assert_eq!(blocks[1].argument, crate::crc32::DEFAULT_POLYNOMIAL);

        // FIRST marker
        assert_ne!(blocks[2].flags & BFLAG_FIRST, 0);
        assert_ne!(blocks[2].flags & BFLAG_IGNORE, 0);

        // Data block with CALLBACK and CRC
        assert_ne!(blocks[3].flags & BFLAG_CALLBACK, 0);
        let expected_crc = Crc32::new(crate::crc32::DEFAULT_POLYNOMIAL).checksum(&data);
        assert_eq!(blocks[3].argument, expected_crc);

        // FINAL block: no CALLBACK, arg=0
        assert_ne!(blocks[4].flags & BFLAG_FINAL, 0);
        assert_eq!(blocks[4].flags & BFLAG_CALLBACK, 0);
        assert_eq!(blocks[4].argument, 0);
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
    fn test_empty_elf_no_sections() {
        // ELF with no section headers (and no program headers)
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
        // Collapsed FIRST|FINAL block
        assert_eq!(blocks.len(), 1);
        assert_ne!(blocks[0].flags & BFLAG_FIRST, 0);
        assert_ne!(blocks[0].flags & BFLAG_FINAL, 0);
    }

    #[test]
    fn test_final_block_uses_boot_addr() {
        let data = vec![0xAA; 32];
        let entry = 0x0009_0100;
        let elf = make_test_elf_with_entry(0x0009_0000, &data, entry);
        let opts = default_opts();
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        // FIRST + data + FINAL = 3
        assert_eq!(blocks.len(), 3);

        // FIRST marker uses boot addr
        assert_eq!(blocks[0].target_addr, entry);

        // FINAL block uses boot addr
        let final_block = &blocks[2];
        assert_ne!(final_block.flags & BFLAG_FINAL, 0);
        assert_eq!(final_block.target_addr, entry);
    }

    #[test]
    fn test_default_boot_addr_when_entry_zero() {
        let data = vec![0xAA; 32];
        let elf = make_test_elf(0x0009_0000, &data); // entry = 0
        let opts = default_opts();
        let blocks = generate_boot_stream(&elf, &opts).unwrap();

        assert_eq!(blocks[0].target_addr, DEFAULT_BOOT_ADDR);
    }

    #[test]
    fn test_block_to_bytes_alignment() {
        let block = Block {
            flags: 0,
            bcode: 0,
            target_addr: 0x1000,
            data: vec![0xBB; 13],
            argument: 0,
            fill_count: 0,


        };
        let bytes = block.to_bytes();
        // Total length must be a multiple of 4 (16-byte header + 13 data + 3 pad = 32).
        assert_eq!(bytes.len() % 4, 0);
        assert_eq!(bytes.len(), 32);
        // byte_count field should reflect original unpadded size.
        let byte_count = u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]);
        assert_eq!(byte_count, 13);
    }

    #[test]
    fn test_bflag_constants() {
        // Verify flag bit positions match the expected header byte layout.
        assert_eq!(BFLAG_FINAL, 0x8000);
        assert_eq!(BFLAG_FIRST, 0x4000);
        assert_eq!(BFLAG_IGNORE, 0x1000);
        assert_eq!(BFLAG_INIT, 0x0800);
        assert_eq!(BFLAG_CALLBACK, 0x0400);

        // Verify encode_bflag round-trips FILL (0x0100) correctly.
        let (b0, b1) = encode_bflag(0x0100, 0);
        assert_eq!(b0, 0x00);
        assert_eq!(b1, 0x01);
    }
}
