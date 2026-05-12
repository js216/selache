// SPDX-License-Identifier: GPL-3.0
// elf.rs --- ELF32 format constants, structures, and parsing
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

// ELF constants
pub const ELF_MAGIC: [u8; 4] = [0x7f, b'E', b'L', b'F'];
pub const ELFDATA2LSB: u8 = 1;
pub const ELFDATA2MSB: u8 = 2;
pub const SHT_SYMTAB: u32 = 2;
pub const SHT_STRTAB: u32 = 3;
pub const STB_GLOBAL: u8 = 1;
pub const STB_WEAK: u8 = 2;
pub const SHN_UNDEF: u16 = 0;

// ELF object file types
pub const ET_REL: u16 = 1;
pub const ET_EXEC: u16 = 2;

// Section header type constants
pub const SHT_NULL: u32 = 0;
pub const SHT_PROGBITS: u32 = 1;
pub const SHT_RELA: u32 = 4;
pub const SHT_HASH: u32 = 5;
pub const SHT_DYNAMIC: u32 = 6;
pub const SHT_NOTE: u32 = 7;
pub const SHT_NOBITS: u32 = 8;
pub const SHT_REL: u32 = 9;
pub const SHT_SHLIB: u32 = 10;
pub const SHT_DYNSYM: u32 = 11;
pub const SHT_INIT_ARRAY: u32 = 14;
pub const SHT_FINI_ARRAY: u32 = 15;

// SHARC relocation types
pub const R_SHARC_NONE: u32 = 0;
pub const R_SHARC_ADDR32: u32 = 1;
pub const R_SHARC_PCREL: u32 = 0x2;
/// Absolute 24-bit program-memory target for direct `JUMP`/`CALL`
/// and conditional-branch instructions. The target is split between the
/// low 8 bits of the middle 16-bit word of the 48-bit instruction
/// (carrying target bits 23..16) and the entire last 16-bit word
/// (target bits 15..0). The upper 8 bits of the middle word hold
/// opcode/flag fields and must not be disturbed. The `r_offset` field
/// is expressed in 16-bit word units and points at the first word of
/// the 48-bit instruction.
pub const R_SHARC_PM24: u32 = 0xb;
/// Full 32-bit immediate in the low two 16-bit words of a 48-bit
/// program-memory instruction. Used by `Rn=imm32` register loads and
/// by the software-branch-return helper that pushes a 32-bit PC value
/// onto the return stack (`dm(i7,m7)=imm32`). The immediate occupies
/// bytes 2..5 of the instruction as a big-endian word; the top 16-bit
/// word (opcode) is preserved. `r_offset` counts 16-bit words.
pub const R_SHARC_PM32: u32 = 0xc;
/// Full 32-bit absolute address written into a data-memory word.
/// Targets a `.VAR`-style data definition whose initialiser is a
/// symbol address (for example the `heap_table` initialiser that
/// stores `ldf_heap_space` and `ldf_heap_length`). The 32-bit
/// absolute value replaces the whole four-byte DM word in the
/// containing section, stored in little-endian byte order to match
/// the ELF file's overall data encoding. `r_offset` is a plain byte
/// offset into the target section.
pub const R_SHARC_DM_ADDR32: u32 = 0xd;
/// 24-bit signed PC-relative program-memory branch offset. Used by
/// conditional-jump instructions (`if cc jump (pc, N)`), including
/// delayed variants. The delta is written into bits 23..0 of the
/// 48-bit instruction (bytes 3..5 in big-endian order); the top 24
/// bits are opcode/condition fields and are preserved. `r_offset`
/// counts 16-bit words.
pub const R_SHARC_PM_PCREL24: u32 = 0xf;
/// 6-bit signed PC-relative program-memory branch offset used by the
/// compute-with-jump instruction form (`if cc jump (pc, N) [(db)],
/// compute-op`). This is the narrow branch variant that fuses a short
/// conditional branch with a single-cycle compute operation, which
/// leaves only six bits of the 48-bit instruction for the PC delta.
/// The delta is split across two non-adjacent byte positions: the low
/// five bits occupy bits 7..3 of byte 2 of the instruction, and the
/// sign bit (bit five of the six-bit field) occupies bit 0 of byte 1.
/// All other bits of bytes 1 and 2 carry the condition code, the
/// delayed-branch flag, and parts of the compute-operation opcode and
/// must be preserved. `r_offset` counts 16-bit words.
pub const R_SHARC_PM_PCREL6: u32 = 0xe;
/// 16-bit signed PC-relative program-memory loop-end offset used by
/// `lcntr=N, do (pc, N) until lce` setup instructions. The delta is
/// written into the last 16-bit word of the 48-bit instruction (bytes
/// 4..5 in big-endian order); the top 32 bits carry the loop-counter
/// and opcode fields and are preserved. `r_offset` counts 16-bit
/// words.
pub const R_SHARC_PM_LOOP16: u32 = 0x1b;
/// Software-branch return-target load: the symbol's address is
/// written into the 32-bit immediate field of the 48-bit instruction
/// at bytes 2..5 (big-endian). Appears as the first of a four-relocation
/// group at a single `dm(i7,m7)=imm32` slot, where the full expression
/// is `sw_return_label - 1`; the subtraction is carried out by a
/// paired `R_SHARC_PM32_SUB` reloc. `r_offset` counts 16-bit words.
pub const R_SHARC_PM_SW_BRANCHRETURN: u32 = 0xe0;
/// Subtract an addend from a previously-written 32-bit program-memory
/// immediate. Used by the software-branch-return expression to
/// decrement the return label by one; the reloc's symbol is the
/// ABI-internal `.__constant` placeholder, and the addend carries the
/// constant being subtracted. Bytes 2..5 of the 48-bit instruction are
/// interpreted as a big-endian 32-bit field, decremented, and written
/// back. `r_offset` counts 16-bit words.
pub const R_SHARC_PM32_SUB: u32 = 0xe1;
/// Expression-operator marker for the software-branch-return relocation
/// group. Carries no data of its own: its symbol is always the ABI-
/// internal `.__operator` placeholder. Applying it is a no-op, but the
/// reloc must be decoded rather than rejected so that the containing
/// group links cleanly. `r_offset` counts 16-bit words.
/// Expression-add marker: the second operand of a two-symbol
/// addition expression. The first operand was deposited by a
/// preceding `R_SHARC_PM_SW_BRANCHRETURN`; this relocation adds
/// its target value to the already-written field. Symbol is
/// typically the second LDF expression operand.
pub const R_SHARC_PM_EXPR_ADD: u32 = 0xe2;
pub const R_SHARC_PM_EXPR_MARKER: u32 = 0xe3;
pub const R_SHARC_DATA6: u32 = 0x11;
pub const R_SHARC_DATA7: u32 = 0x12;
pub const R_SHARC_DATA16: u32 = 0x14;
pub const R_SHARC_DATA32: u32 = 0x15;
pub const R_SHARC_ADDR_VAR: u32 = 0x1a;

// SHARC processor-specific section types
pub const SHT_LOPROC: u32 = 0x7000_0000;
pub const SHT_SHARC_ALIGN: u32 = SHT_LOPROC;
pub const SHT_SHARC_SYMCONSTR: u32 = SHT_LOPROC + 1;
pub const SHT_SHARC_ATTR: u32 = SHT_LOPROC + 2;
pub const SHT_SHARC_SEG_INFO: u32 = SHT_LOPROC + 3;

// Section header flag constants
pub const SHF_WRITE: u32 = 0x1;
pub const SHF_ALLOC: u32 = 0x2;
pub const SHF_EXECINSTR: u32 = 0x4;
pub const SHF_MERGE: u32 = 0x10;
pub const SHF_STRINGS: u32 = 0x20;

// Program header type constants
pub const PT_NULL: u32 = 0;
pub const PT_LOAD: u32 = 1;
pub const PT_DYNAMIC: u32 = 2;
pub const PT_INTERP: u32 = 3;
pub const PT_NOTE: u32 = 4;
pub const PT_SHLIB: u32 = 5;
pub const PT_PHDR: u32 = 6;

// Program header flag constants
pub const PF_X: u32 = 0x1;
pub const PF_W: u32 = 0x2;
pub const PF_R: u32 = 0x4;

// Symbol binding/type constants
pub const STB_LOCAL: u8 = 0;
pub const STT_NOTYPE: u8 = 0;
pub const STT_OBJECT: u8 = 1;
pub const STT_FUNC: u8 = 2;
pub const STT_SECTION: u8 = 3;
pub const STT_FILE: u8 = 4;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Endian {
    Little,
    Big,
}

impl Endian {
    pub fn read_u16(self, data: &[u8]) -> u16 {
        let bytes: [u8; 2] = [data[0], data[1]];
        match self {
            Endian::Little => u16::from_le_bytes(bytes),
            Endian::Big => u16::from_be_bytes(bytes),
        }
    }

    pub fn read_u32(self, data: &[u8]) -> u32 {
        let bytes: [u8; 4] = [data[0], data[1], data[2], data[3]];
        match self {
            Endian::Little => u32::from_le_bytes(bytes),
            Endian::Big => u32::from_be_bytes(bytes),
        }
    }

    pub fn read_i32(self, data: &[u8]) -> i32 {
        let bytes: [u8; 4] = [data[0], data[1], data[2], data[3]];
        match self {
            Endian::Little => i32::from_le_bytes(bytes),
            Endian::Big => i32::from_be_bytes(bytes),
        }
    }

    pub fn write_u16(self, val: u16) -> [u8; 2] {
        match self {
            Endian::Little => val.to_le_bytes(),
            Endian::Big => val.to_be_bytes(),
        }
    }

    pub fn write_u32(self, val: u32) -> [u8; 4] {
        match self {
            Endian::Little => val.to_le_bytes(),
            Endian::Big => val.to_be_bytes(),
        }
    }
}

#[derive(Debug)]
pub struct Elf32Header {
    pub ei_data: Endian,
    pub ei_class: u8,
    pub ei_version: u8,
    pub ei_osabi: u8,
    pub e_type: u16,
    pub e_machine: u16,
    pub e_version: u32,
    pub e_entry: u32,
    pub e_phoff: u32,
    pub e_shoff: u32,
    pub e_flags: u32,
    pub e_ehsize: u16,
    pub e_phentsize: u16,
    pub e_phnum: u16,
    pub e_shentsize: u16,
    pub e_shnum: u16,
    pub e_shstrndx: u16,
}

#[derive(Debug)]
pub struct Elf32Shdr {
    pub sh_name: u32,
    pub sh_type: u32,
    pub sh_flags: u32,
    pub sh_addr: u32,
    pub sh_offset: u32,
    pub sh_size: u32,
    pub sh_link: u32,
    pub sh_info: u32,
    pub sh_addralign: u32,
    pub sh_entsize: u32,
}

#[derive(Debug)]
pub struct Elf32Sym {
    pub st_name: u32,
    pub st_value: u32,
    pub st_size: u32,
    pub st_info: u8,
    pub st_other: u8,
    pub st_shndx: u16,
}

impl Elf32Sym {
    pub fn bind(&self) -> u8 {
        self.st_info >> 4
    }

    pub fn sym_type(&self) -> u8 {
        self.st_info & 0xf
    }
}

#[derive(Debug)]
pub struct Elf32Phdr {
    pub p_type: u32,
    pub p_offset: u32,
    pub p_vaddr: u32,
    pub p_paddr: u32,
    pub p_filesz: u32,
    pub p_memsz: u32,
    pub p_flags: u32,
    pub p_align: u32,
}

#[derive(Debug)]
pub struct Elf32Rela {
    pub r_offset: u32,
    pub r_info: u32,
    pub r_addend: i32,
}

#[derive(Debug)]
pub struct Elf32Rel {
    pub r_offset: u32,
    pub r_info: u32,
}

pub fn parse_header(data: &[u8]) -> Result<Elf32Header> {
    if data.len() < 52 {
        return Err(Error::InvalidElf("file too small for ELF header".into()));
    }
    if data[0..4] != ELF_MAGIC {
        return Err(Error::InvalidElf("bad ELF magic".into()));
    }
    if data[4] != 1 {
        return Err(Error::InvalidElf("not ELF32".into()));
    }
    let endian = match data[5] {
        ELFDATA2LSB => Endian::Little,
        ELFDATA2MSB => Endian::Big,
        _ => return Err(Error::InvalidElf("invalid endianness".into())),
    };
    let e = endian;
    Ok(Elf32Header {
        ei_data: endian,
        ei_class: data[4],
        ei_version: data[6],
        ei_osabi: data[7],
        e_type: e.read_u16(&data[16..]),
        e_machine: e.read_u16(&data[18..]),
        e_version: e.read_u32(&data[20..]),
        e_entry: e.read_u32(&data[24..]),
        e_phoff: e.read_u32(&data[28..]),
        e_shoff: e.read_u32(&data[32..]),
        e_flags: e.read_u32(&data[36..]),
        e_ehsize: e.read_u16(&data[40..]),
        e_phentsize: e.read_u16(&data[42..]),
        e_phnum: e.read_u16(&data[44..]),
        e_shentsize: e.read_u16(&data[46..]),
        e_shnum: e.read_u16(&data[48..]),
        e_shstrndx: e.read_u16(&data[50..]),
    })
}

pub fn parse_section_header(data: &[u8], endian: Endian) -> Elf32Shdr {
    let e = endian;
    Elf32Shdr {
        sh_name: e.read_u32(&data[0..]),
        sh_type: e.read_u32(&data[4..]),
        sh_flags: e.read_u32(&data[8..]),
        sh_addr: e.read_u32(&data[12..]),
        sh_offset: e.read_u32(&data[16..]),
        sh_size: e.read_u32(&data[20..]),
        sh_link: e.read_u32(&data[24..]),
        sh_info: e.read_u32(&data[28..]),
        sh_addralign: e.read_u32(&data[32..]),
        sh_entsize: e.read_u32(&data[36..]),
    }
}

pub fn parse_symbol(data: &[u8], endian: Endian) -> Elf32Sym {
    let e = endian;
    Elf32Sym {
        st_name: e.read_u32(&data[0..]),
        st_value: e.read_u32(&data[4..]),
        st_size: e.read_u32(&data[8..]),
        st_info: data[12],
        st_other: data[13],
        st_shndx: e.read_u16(&data[14..]),
    }
}

pub fn parse_program_header(data: &[u8], endian: Endian) -> Elf32Phdr {
    let e = endian;
    Elf32Phdr {
        p_type: e.read_u32(&data[0..]),
        p_offset: e.read_u32(&data[4..]),
        p_vaddr: e.read_u32(&data[8..]),
        p_paddr: e.read_u32(&data[12..]),
        p_filesz: e.read_u32(&data[16..]),
        p_memsz: e.read_u32(&data[20..]),
        p_flags: e.read_u32(&data[24..]),
        p_align: e.read_u32(&data[28..]),
    }
}

pub fn parse_rela(data: &[u8], endian: Endian) -> Elf32Rela {
    let e = endian;
    Elf32Rela {
        r_offset: e.read_u32(&data[0..]),
        r_info: e.read_u32(&data[4..]),
        r_addend: e.read_i32(&data[8..]),
    }
}

pub fn parse_rel(data: &[u8], endian: Endian) -> Elf32Rel {
    let e = endian;
    Elf32Rel {
        r_offset: e.read_u32(&data[0..]),
        r_info: e.read_u32(&data[4..]),
    }
}

pub fn read_string_at(strtab: &[u8], offset: u32) -> &str {
    let start = offset as usize;
    if start >= strtab.len() {
        return "";
    }
    let end = strtab[start..]
        .iter()
        .position(|&b| b == 0)
        .map(|p| start + p)
        .unwrap_or(strtab.len());
    std::str::from_utf8(&strtab[start..end]).unwrap_or("")
}

/// Return a human-readable name for a section header type.
pub fn section_type_name(sh_type: u32) -> &'static str {
    match sh_type {
        SHT_NULL => "NULL",
        SHT_PROGBITS => "PROGBITS",
        SHT_SYMTAB => "SYMTAB",
        SHT_STRTAB => "STRTAB",
        SHT_RELA => "RELA",
        SHT_HASH => "HASH",
        SHT_DYNAMIC => "DYNAMIC",
        SHT_NOTE => "NOTE",
        SHT_NOBITS => "NOBITS",
        SHT_REL => "REL",
        SHT_SHLIB => "SHLIB",
        SHT_DYNSYM => "DYNSYM",
        SHT_INIT_ARRAY => "INIT_ARRAY",
        SHT_FINI_ARRAY => "FINI_ARRAY",
        SHT_SHARC_ALIGN => "ALIGN",
        SHT_SHARC_SYMCONSTR => "SYMCONSTR",
        SHT_SHARC_ATTR => "PROC_ATTR",
        SHT_SHARC_SEG_INFO => "SEG_INFO",
        _ => "UNKNOWN",
    }
}

/// Return a string representation of section header flags.
pub fn section_flags_str(flags: u32) -> String {
    let mut s = String::new();
    if flags & SHF_WRITE != 0 {
        s.push('W');
    }
    if flags & SHF_ALLOC != 0 {
        s.push('A');
    }
    if flags & SHF_EXECINSTR != 0 {
        s.push('X');
    }
    if flags & SHF_MERGE != 0 {
        s.push('M');
    }
    if flags & SHF_STRINGS != 0 {
        s.push('S');
    }
    s
}

/// Return a human-readable name for a program header type.
pub fn phdr_type_name(p_type: u32) -> &'static str {
    match p_type {
        PT_NULL => "NULL",
        PT_LOAD => "LOAD",
        PT_DYNAMIC => "DYNAMIC",
        PT_INTERP => "INTERP",
        PT_NOTE => "NOTE",
        PT_SHLIB => "SHLIB",
        PT_PHDR => "PHDR",
        _ => "UNKNOWN",
    }
}

/// Decode a ULEB128 (Unsigned Little-Endian Base 128) value from `data`
/// starting at `*pos`. Advances `*pos` past the encoded bytes.
pub fn decode_uleb128(data: &[u8], pos: &mut usize) -> u64 {
    let mut result: u64 = 0;
    let mut shift: u32 = 0;
    loop {
        if *pos >= data.len() {
            break;
        }
        let byte = data[*pos];
        *pos += 1;
        result |= u64::from(byte & 0x7f) << shift;
        if byte & 0x80 == 0 {
            break;
        }
        shift += 7;
    }
    result
}

/// Return a human-readable name for a symbol binding value.
pub fn symbol_bind_name(bind: u8) -> &'static str {
    match bind {
        STB_LOCAL => "LOCAL",
        STB_GLOBAL => "GLOBAL",
        STB_WEAK => "WEAK",
        _ => "UNKNOWN",
    }
}

/// Return a human-readable name for a symbol type value.
pub fn symbol_type_name(stype: u8) -> &'static str {
    match stype {
        STT_NOTYPE => "NOTYPE",
        STT_OBJECT => "OBJECT",
        STT_FUNC => "FUNC",
        STT_SECTION => "SECTION",
        STT_FILE => "FILE",
        _ => "UNKNOWN",
    }
}

/// Extract globally-defined symbol names from an ELF object.
/// Returns symbol names suitable for the archive symbol index.
pub fn extract_global_symbols(data: &[u8]) -> Result<Vec<String>> {
    let hdr = parse_header(data)?;
    let e = hdr.ei_data;

    if hdr.e_shoff == 0 || hdr.e_shnum == 0 {
        return Ok(Vec::new());
    }

    // Read all section headers
    let mut sections = Vec::with_capacity(hdr.e_shnum as usize);
    for i in 0..hdr.e_shnum as usize {
        let off = hdr.e_shoff as usize + i * hdr.e_shentsize as usize;
        if off + hdr.e_shentsize as usize > data.len() {
            return Err(Error::InvalidElf("section header out of bounds".into()));
        }
        sections.push(parse_section_header(&data[off..], e));
    }

    // Collect section names from shstrtab
    let mut section_names = std::collections::HashSet::new();
    if (hdr.e_shstrndx as usize) < sections.len() {
        let shstrtab_sec = &sections[hdr.e_shstrndx as usize];
        let shstrtab_off = shstrtab_sec.sh_offset as usize;
        let shstrtab_sz = shstrtab_sec.sh_size as usize;
        if shstrtab_off + shstrtab_sz <= data.len() {
            let shstrtab = &data[shstrtab_off..shstrtab_off + shstrtab_sz];
            for sec in &sections {
                let name = read_string_at(shstrtab, sec.sh_name);
                if !name.is_empty() {
                    section_names.insert(name.to_string());
                }
            }
        }
    }

    // Find SHT_SYMTAB
    let mut symbols = Vec::new();
    for sec in &sections {
        if sec.sh_type != SHT_SYMTAB {
            continue;
        }
        let sym_off = sec.sh_offset as usize;
        let sym_sz = sec.sh_size as usize;
        let entsize = if sec.sh_entsize > 0 {
            sec.sh_entsize as usize
        } else {
            16 // ELF32 sym size
        };
        let first_global = sec.sh_info as usize;

        // Read linked string table
        let strtab_idx = sec.sh_link as usize;
        if strtab_idx >= sections.len() {
            continue;
        }
        let strtab_sec = &sections[strtab_idx];
        let strtab_off = strtab_sec.sh_offset as usize;
        let strtab_sz = strtab_sec.sh_size as usize;
        if strtab_off + strtab_sz > data.len() {
            continue;
        }
        let strtab = &data[strtab_off..strtab_off + strtab_sz];

        if sym_off + sym_sz > data.len() {
            continue;
        }

        let nsyms = sym_sz / entsize;
        for i in first_global..nsyms {
            let off = sym_off + i * entsize;
            if off + entsize > data.len() {
                break;
            }
            let sym = parse_symbol(&data[off..], e);

            // Skip undefined symbols
            if sym.st_shndx == SHN_UNDEF {
                continue;
            }
            // Must be global or weak binding
            let bind = sym.bind();
            if bind != STB_GLOBAL && bind != STB_WEAK {
                continue;
            }
            let name = read_string_at(strtab, sym.st_name);
            if name.is_empty() {
                continue;
            }
            // Skip dot-prefixed names (section names used as symbols)
            if name.starts_with('.') {
                continue;
            }
            // Skip names that match section names
            if section_names.contains(name) {
                continue;
            }
            symbols.push(name.to_string());
        }
    }

    Ok(symbols)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::testutil;

    #[test]
    fn test_parse_le_elf_header() {
        let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[]);
        let hdr = parse_header(&data).unwrap();
        assert_eq!(hdr.ei_data, Endian::Little);
        assert_eq!(hdr.e_machine, 0x85);
        assert_eq!(hdr.e_type, 1); // ET_REL
    }

    #[test]
    fn test_parse_be_elf_header() {
        let data = testutil::make_elf_object(0x0, ELFDATA2MSB, &[]);
        let hdr = parse_header(&data).unwrap();
        assert_eq!(hdr.ei_data, Endian::Big);
        assert_eq!(hdr.e_machine, 0x0);
    }

    #[test]
    fn test_extract_global_symbols() {
        let data = testutil::make_elf_object(
            0x85,
            ELFDATA2LSB,
            &[("_main", true), ("_helper", true), (".text", true)],
        );
        let syms = extract_global_symbols(&data).unwrap();
        assert!(syms.contains(&"_main".to_string()));
        assert!(syms.contains(&"_helper".to_string()));
        assert!(!syms.iter().any(|s| s == ".text"));
    }

    #[test]
    fn test_skip_undefined_symbols() {
        let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_extern", false)]);
        let syms = extract_global_symbols(&data).unwrap();
        assert!(!syms.contains(&"_extern".to_string()));
    }

    #[test]
    fn test_skip_dot_prefixed_symbols() {
        let data = testutil::make_elf_object(
            0x85,
            ELFDATA2LSB,
            &[(".data", true), (".bss", true), ("_real", true)],
        );
        let syms = extract_global_symbols(&data).unwrap();
        assert_eq!(syms, vec!["_real".to_string()]);
    }

    #[test]
    fn test_section_type_name() {
        assert_eq!(section_type_name(SHT_NULL), "NULL");
        assert_eq!(section_type_name(SHT_PROGBITS), "PROGBITS");
        assert_eq!(section_type_name(SHT_SYMTAB), "SYMTAB");
        assert_eq!(section_type_name(SHT_STRTAB), "STRTAB");
        assert_eq!(section_type_name(SHT_SHARC_ALIGN), "ALIGN");
        assert_eq!(section_type_name(SHT_SHARC_SYMCONSTR), "SYMCONSTR");
        assert_eq!(section_type_name(SHT_SHARC_ATTR), "PROC_ATTR");
        assert_eq!(section_type_name(0xffff_ffff), "UNKNOWN");
    }

    #[test]
    fn test_section_flags_str() {
        assert_eq!(section_flags_str(SHF_WRITE | SHF_ALLOC), "WA");
        assert_eq!(section_flags_str(SHF_ALLOC | SHF_EXECINSTR), "AX");
        assert_eq!(section_flags_str(0), "");
    }

    #[test]
    fn test_symbol_names() {
        assert_eq!(symbol_bind_name(STB_GLOBAL), "GLOBAL");
        assert_eq!(symbol_bind_name(STB_LOCAL), "LOCAL");
        assert_eq!(symbol_type_name(STT_FUNC), "FUNC");
        assert_eq!(symbol_type_name(STT_OBJECT), "OBJECT");
    }

    #[test]
    fn test_phdr_type_name() {
        assert_eq!(phdr_type_name(PT_LOAD), "LOAD");
        assert_eq!(phdr_type_name(PT_NULL), "NULL");
        assert_eq!(phdr_type_name(0xffff_ffff), "UNKNOWN");
    }

    #[test]
    fn test_decode_uleb128_single_byte() {
        let data = [0x05];
        let mut pos = 0;
        assert_eq!(decode_uleb128(&data, &mut pos), 5);
        assert_eq!(pos, 1);
    }

    #[test]
    fn test_decode_uleb128_two_bytes() {
        // 0x80 | 0x01 followed by 0x01 => 128
        let data = [0x80, 0x01];
        let mut pos = 0;
        assert_eq!(decode_uleb128(&data, &mut pos), 128);
        assert_eq!(pos, 2);
    }

    #[test]
    fn test_decode_uleb128_multibyte() {
        // 624485 = 0xE5 0x8E 0x26
        let data = [0xe5, 0x8e, 0x26];
        let mut pos = 0;
        assert_eq!(decode_uleb128(&data, &mut pos), 624485);
        assert_eq!(pos, 3);
    }

    #[test]
    fn test_decode_uleb128_zero() {
        let data = [0x00];
        let mut pos = 0;
        assert_eq!(decode_uleb128(&data, &mut pos), 0);
        assert_eq!(pos, 1);
    }

    #[test]
    fn test_decode_uleb128_at_offset() {
        let data = [0xff, 0x05, 0x03];
        let mut pos = 1;
        assert_eq!(decode_uleb128(&data, &mut pos), 5);
        assert_eq!(pos, 2);
    }

    #[test]
    fn test_decode_uleb128_max_single() {
        // 127 = 0x7f
        let data = [0x7f];
        let mut pos = 0;
        assert_eq!(decode_uleb128(&data, &mut pos), 127);
        assert_eq!(pos, 1);
    }
}
