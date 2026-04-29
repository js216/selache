// SPDX-License-Identifier: GPL-3.0
// elf_write.rs --- ELF32 relocatable object (.doj) builder
// Copyright (c) 2026 Jakob Kastelic

//! Builder API for constructing ELF32 relocatable object files (.doj).
//!
//! Produces valid ELF32 files targeting the SHARC+ processor,
//! suitable for linking with the SHARC toolchain.

use crate::elf::{
    Endian, ELFDATA2LSB, ELF_MAGIC, SHF_ALLOC, SHF_EXECINSTR, SHF_WRITE, SHN_UNDEF, SHT_NOBITS,
    SHT_PROGBITS, SHT_RELA, SHT_STRTAB, SHT_SYMTAB, SHT_SHARC_ALIGN, STB_GLOBAL, STB_LOCAL,
    STB_WEAK, STT_FUNC, STT_NOTYPE, STT_OBJECT, STT_SECTION,
};

const ELF_HEADER_SIZE: usize = 52;
const SHDR_SIZE: usize = 40;
const SYM_ENTRY_SIZE: usize = 16;
const RELA_ENTRY_SIZE: usize = 12;
const SHARC_MACHINE: u16 = 0x85;
const ET_REL: u16 = 1;
const ELFCLASS32: u8 = 1;
const EV_CURRENT: u8 = 1;

/// A user-defined section to be placed in the ELF.
struct Section {
    name: String,
    sh_type: u32,
    sh_flags: u32,
    data: Vec<u8>,
    /// For SHT_NOBITS, the logical size (no file data).
    nobits_size: u32,
    /// Section alignment (sh_addralign). Default is 4.
    alignment: u32,
    /// Entry size (sh_entsize). 0 for most sections; 1 for SW code.
    entsize: u32,
    /// Section link (sh_link). Written as-is; 0 means "use symtab"
    /// when the `link_to_symtab` flag is set.
    link_to_symtab: bool,
    /// Section info (sh_info). Points to another user section index.
    info_section: u16,
}

/// A symbol to be emitted in the symbol table.
struct Symbol {
    name: String,
    section_idx: u16,
    value: u32,
    size: u32,
    binding: u8,
    sym_type: u8,
}

/// A relocation entry targeting a section.
struct Relocation {
    /// Index of the section being relocated (user section index, 1-based).
    section_idx: u16,
    offset: u32,
    symbol_name: String,
    rela_type: u8,
    addend: i32,
}

/// Builder for constructing ELF32 relocatable objects (.doj).
pub struct ElfWriter {
    sections: Vec<Section>,
    symbols: Vec<Symbol>,
    relocations: Vec<Relocation>,
}

impl Default for ElfWriter {
    fn default() -> Self {
        Self::new()
    }
}

impl ElfWriter {
    /// Create a new writer targeting SHARC (e_machine=0x85), little-endian.
    pub fn new() -> Self {
        Self {
            sections: Vec::new(),
            symbols: Vec::new(),
            relocations: Vec::new(),
        }
    }

    /// Add a code section (SHT_PROGBITS, SHF_ALLOC|SHF_EXECINSTR).
    /// Returns the section index.
    pub fn add_text_section(&mut self, name: &str, data: &[u8]) -> u16 {
        self.add_section(name, SHT_PROGBITS, SHF_ALLOC | SHF_EXECINSTR, data)
    }

    /// Add a short-word code section (alignment 1, entsize 1) matching
    /// the standard `seg_swco` layout.
    pub fn add_text_section_sw(&mut self, name: &str, data: &[u8]) -> u16 {
        self.sections.push(Section {
            name: name.to_string(),
            sh_type: SHT_PROGBITS,
            sh_flags: SHF_ALLOC | SHF_EXECINSTR,
            data: data.to_vec(),
            nobits_size: 0,
            alignment: 1,
            entsize: 1,
            link_to_symtab: false,
            info_section: 0,
        });
        self.sections.len() as u16
    }

    /// Add a VISA code section (alignment 2 instead of 4).
    pub fn add_text_section_visa(&mut self, name: &str, data: &[u8]) -> u16 {
        self.sections.push(Section {
            name: name.to_string(),
            sh_type: SHT_PROGBITS,
            sh_flags: SHF_ALLOC | SHF_EXECINSTR,
            data: data.to_vec(),
            nobits_size: 0,
            alignment: 2,
            entsize: 0,
            link_to_symtab: false,
            info_section: 0,
        });
        self.sections.len() as u16
    }

    /// Add a data section (SHT_PROGBITS, SHF_ALLOC|SHF_WRITE).
    ///
    /// Sets `sh_entsize = 1` (byte) and `sh_addralign = 8` to match
    /// the SHARC+ BW (byte-width) data section layout. The SHARC+
    /// linker uses `sh_entsize` to identify byte-addressable sections
    /// when laying them out in memory; without `entsize=1` it treats
    /// the section as word-addressed and emits relocations whose
    /// runtime addresses point 4x too high (or to a different memory
    /// bank entirely). The `addralign=8` matches the expected symbol
    /// alignment for byte-width data.
    pub fn add_data_section(&mut self, name: &str, data: &[u8]) -> u16 {
        let idx = self.add_section(name, SHT_PROGBITS, SHF_ALLOC | SHF_WRITE, data);
        if let Some(sec) = self.sections.last_mut() {
            sec.entsize = 1;
            sec.alignment = 8;
        }
        idx
    }

    /// Add a read-only data section (SHT_PROGBITS, SHF_ALLOC).
    pub fn add_rodata_section(&mut self, name: &str, data: &[u8]) -> u16 {
        self.add_section(name, SHT_PROGBITS, SHF_ALLOC, data)
    }

    /// Add a BSS section (SHT_NOBITS, SHF_ALLOC|SHF_WRITE).
    pub fn add_bss_section(&mut self, name: &str, size: u32) -> u16 {
        self.sections.push(Section {
            name: name.to_string(),
            sh_type: SHT_NOBITS,
            sh_flags: SHF_ALLOC | SHF_WRITE,
            data: Vec::new(),
            nobits_size: size,
            alignment: 4,
            entsize: 0,
            link_to_symtab: false,
            info_section: 0,
        });
        // Section indices: 0 = NULL, 1..N = user sections
        self.sections.len() as u16
    }

    /// Add a custom section with explicit type and flags.
    pub fn add_section(&mut self, name: &str, sh_type: u32, sh_flags: u32, data: &[u8]) -> u16 {
        self.sections.push(Section {
            name: name.to_string(),
            sh_type,
            sh_flags,
            data: data.to_vec(),
            nobits_size: 0,
            alignment: 4,
            entsize: 0,
            link_to_symtab: false,
            info_section: 0,
        });
        self.sections.len() as u16
    }

    /// Add an alignment section (`.align.<name>`) that the linker
    /// uses for section placement metadata.
    pub fn add_align_section(&mut self, code_section_name: &str, code_section_idx: u16) -> u16 {
        let name = format!(".align.{code_section_name}");
        // Single entry: offset=0, info=0, addend=0x001000c0
        let mut data = Vec::with_capacity(12);
        data.extend_from_slice(&0u32.to_le_bytes()); // offset
        data.extend_from_slice(&0u32.to_le_bytes()); // info
        data.extend_from_slice(&0x001000c0u32.to_le_bytes()); // addend
        self.sections.push(Section {
            name,
            sh_type: SHT_SHARC_ALIGN,
            sh_flags: 0,
            data,
            nobits_size: 0,
            alignment: 1,
            entsize: 12,
            link_to_symtab: true,
            info_section: code_section_idx,
        });
        self.sections.len() as u16
    }

    /// Add a global function symbol in the given section.
    pub fn add_function(&mut self, name: &str, section: u16, offset: u32, size: u32) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: section,
            value: offset,
            size,
            binding: STB_GLOBAL,
            sym_type: STT_FUNC,
        });
    }

    /// Add a weak function symbol in the given section.
    pub fn add_weak_function(&mut self, name: &str, section: u16, offset: u32, size: u32) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: section,
            value: offset,
            size,
            binding: STB_WEAK,
            sym_type: STT_FUNC,
        });
    }

    /// Add a global object (data) symbol.
    pub fn add_object(&mut self, name: &str, section: u16, offset: u32, size: u32) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: section,
            value: offset,
            size,
            binding: STB_GLOBAL,
            sym_type: STT_OBJECT,
        });
    }

    /// Add a weak object symbol.
    pub fn add_weak_object(&mut self, name: &str, section: u16, offset: u32, size: u32) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: section,
            value: offset,
            size,
            binding: STB_WEAK,
            sym_type: STT_OBJECT,
        });
    }

    /// Add an undefined symbol reference.
    pub fn add_undefined(&mut self, name: &str) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: SHN_UNDEF,
            value: 0,
            size: 0,
            binding: STB_GLOBAL,
            sym_type: STT_NOTYPE,
        });
    }

    /// Add a local symbol.
    pub fn add_local(&mut self, name: &str, section: u16, offset: u32) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: section,
            value: offset,
            size: 0,
            binding: STB_LOCAL,
            sym_type: STT_NOTYPE,
        });
    }

    /// Add a local data-object symbol. Used for static / file-scope
    /// initialised data (e.g. string literals). The SHARC+ linker walks
    /// `STT_OBJECT` symbols when laying out a byte-width data section
    /// and assigns them byte-addressed positions; a `STT_NOTYPE` local
    /// at the same offset is treated as just a label (its address is
    /// emitted as a *word*-relative offset), so byte loads through the
    /// symbol read garbage.
    pub fn add_local_object(&mut self, name: &str, section: u16, offset: u32, size: u32) {
        self.symbols.push(Symbol {
            name: name.to_string(),
            section_idx: section,
            value: offset,
            size,
            binding: STB_LOCAL,
            sym_type: STT_OBJECT,
        });
    }

    /// Add a relocation entry for a section.
    pub fn add_relocation(
        &mut self,
        section: u16,
        offset: u32,
        symbol: &str,
        rela_type: u8,
        addend: i32,
    ) {
        self.relocations.push(Relocation {
            section_idx: section,
            offset,
            symbol_name: symbol.to_string(),
            rela_type,
            addend,
        });
    }

    /// Serialize the complete ELF to bytes.
    ///
    /// Layout:
    ///   1. ELF header (52 bytes)
    ///   2. User section contents
    ///   3. .strtab content
    ///   4. .symtab content
    ///   5. .rela.* section contents
    ///   6. .shstrtab content
    ///   7. Section header table
    pub fn finish(&self) -> Vec<u8> {
        let e = Endian::Little;

        // Partition symbols into locals and globals. Section symbols are local.
        // Order: local symbols first (including section symbols), then globals.
        let mut local_syms: Vec<&Symbol> = Vec::new();
        let mut global_syms: Vec<&Symbol> = Vec::new();
        for sym in &self.symbols {
            if sym.binding == STB_LOCAL {
                local_syms.push(sym);
            } else {
                global_syms.push(sym);
            }
        }

        // Build section-index-to-section-symbol mapping.
        // We emit a STT_SECTION symbol for each user section.
        let num_section_syms = self.sections.len();

        // Total symbol count: null + section symbols + local user + global user
        let total_syms = 1 + num_section_syms + local_syms.len() + global_syms.len();
        // first_global = 1 + num_section_syms + local_syms.len()
        let first_global = 1 + num_section_syms + local_syms.len();

        // Build .strtab (symbol name string table)
        let mut strtab = vec![0u8]; // leading null byte
        // We need name offsets for all user symbols. Section symbols use st_name=0.
        // Build a map: symbol name -> strtab offset (dedup names for relocations too)
        let mut strtab_lookup = std::collections::HashMap::new();
        for sym in local_syms.iter().chain(global_syms.iter()) {
            if !strtab_lookup.contains_key(&sym.name) {
                let off = strtab.len() as u32;
                strtab.extend_from_slice(sym.name.as_bytes());
                strtab.push(0);
                strtab_lookup.insert(sym.name.clone(), off);
            }
        }
        // Also add relocation symbol names that might not be in the symbol list
        for rela in &self.relocations {
            if !strtab_lookup.contains_key(&rela.symbol_name) {
                let off = strtab.len() as u32;
                strtab.extend_from_slice(rela.symbol_name.as_bytes());
                strtab.push(0);
                strtab_lookup.insert(rela.symbol_name.clone(), off);
            }
        }

        // Build symtab bytes
        let mut symtab_data = vec![0u8; total_syms * SYM_ENTRY_SIZE];

        // Symbol [0]: null (already zeroed)

        // Section symbols [1..num_section_syms]
        for (i, _sec) in self.sections.iter().enumerate() {
            let idx = 1 + i;
            let base = idx * SYM_ENTRY_SIZE;
            // st_name = 0
            // st_value = 0
            // st_size = 0
            // st_info = STB_LOCAL << 4 | STT_SECTION
            symtab_data[base + 12] = (STB_LOCAL << 4) | STT_SECTION;
            // st_other = 0
            // st_shndx = section index (1-based, matching user section)
            let shndx = (i + 1) as u16;
            symtab_data[base + 14..base + 16].copy_from_slice(&e.write_u16(shndx));
        }

        // Local user symbols
        for (i, sym) in local_syms.iter().enumerate() {
            let idx = 1 + num_section_syms + i;
            write_sym_entry(&mut symtab_data, idx, &SymEntryFields {
                st_name: strtab_lookup[&sym.name],
                st_value: sym.value,
                st_size: sym.size,
                binding: sym.binding,
                sym_type: sym.sym_type,
                st_shndx: sym.section_idx,
            }, e);
        }

        // Global symbols
        for (i, sym) in global_syms.iter().enumerate() {
            let idx = first_global + i;
            write_sym_entry(&mut symtab_data, idx, &SymEntryFields {
                st_name: strtab_lookup[&sym.name],
                st_value: sym.value,
                st_size: sym.size,
                binding: sym.binding,
                sym_type: sym.sym_type,
                st_shndx: sym.section_idx,
            }, e);
        }

        // Build a map from symbol name to symtab index for relocations
        let mut sym_name_to_idx: std::collections::HashMap<String, usize> =
            std::collections::HashMap::new();
        // Section symbols
        for (i, sec) in self.sections.iter().enumerate() {
            sym_name_to_idx.insert(sec.name.clone(), 1 + i);
        }
        // User local symbols
        for (i, sym) in local_syms.iter().enumerate() {
            sym_name_to_idx.insert(sym.name.to_string(), 1 + num_section_syms + i);
        }
        // User global symbols
        for (i, sym) in global_syms.iter().enumerate() {
            sym_name_to_idx.insert(sym.name.to_string(), first_global + i);
        }

        // Group relocations by target section
        let mut rela_by_section: std::collections::BTreeMap<u16, Vec<&Relocation>> =
            std::collections::BTreeMap::new();
        for rela in &self.relocations {
            rela_by_section
                .entry(rela.section_idx)
                .or_default()
                .push(rela);
        }

        // Build rela section data
        let rela_sections: Vec<(u16, Vec<u8>)> = rela_by_section
            .iter()
            .map(|(&sec_idx, relas)| {
                let mut data = Vec::with_capacity(relas.len() * RELA_ENTRY_SIZE);
                for rela in relas {
                    let sym_idx = sym_name_to_idx
                        .get(&rela.symbol_name)
                        .copied()
                        .unwrap_or(0);
                    let r_info =
                        ((sym_idx as u32) << 8) | (rela.rela_type as u32);
                    data.extend_from_slice(&e.write_u32(rela.offset));
                    data.extend_from_slice(&e.write_u32(r_info));
                    data.extend_from_slice(&rela.addend.to_le_bytes());
                }
                (sec_idx, data)
            })
            .collect();

        // Build .shstrtab (section name string table)
        let mut shstrtab = vec![0u8]; // leading null
        let mut shstrtab_offsets: Vec<u32> = Vec::new();

        // Names for user sections
        for sec in &self.sections {
            shstrtab_offsets.push(shstrtab.len() as u32);
            shstrtab.extend_from_slice(sec.name.as_bytes());
            shstrtab.push(0);
        }

        // Name for .strtab
        let strtab_name_off = shstrtab.len() as u32;
        shstrtab.extend_from_slice(b".strtab\0");

        // Name for .symtab
        let symtab_name_off = shstrtab.len() as u32;
        shstrtab.extend_from_slice(b".symtab\0");

        // Names for .rela.* sections
        let mut rela_name_offs: Vec<u32> = Vec::new();
        for &(sec_idx, _) in &rela_sections {
            let sec = &self.sections[(sec_idx - 1) as usize];
            rela_name_offs.push(shstrtab.len() as u32);
            shstrtab.extend_from_slice(b".rela");
            if !sec.name.starts_with('.') {
                shstrtab.push(b'.');
            }
            shstrtab.extend_from_slice(sec.name.as_bytes());
            shstrtab.push(0);
        }

        // Name for .shstrtab
        let shstrtab_name_off = shstrtab.len() as u32;
        shstrtab.extend_from_slice(b".shstrtab\0");

        // Determine section header count:
        //   [0] NULL
        //   [1..N] user sections
        //   [N+1] .strtab
        //   [N+2] .symtab
        //   [N+3..] .rela.* sections
        //   [last] .shstrtab
        let num_user = self.sections.len();
        let strtab_shidx = num_user + 1;
        let symtab_shidx = num_user + 2;
        let rela_shidx_base = num_user + 3;
        let shstrtab_shidx = rela_shidx_base + rela_sections.len();
        let total_shdrs = shstrtab_shidx + 1;

        // Compute file offsets for section contents
        let mut offset = ELF_HEADER_SIZE;

        // User section offsets
        let mut user_section_offsets: Vec<usize> = Vec::new();
        for sec in &self.sections {
            user_section_offsets.push(offset);
            if sec.sh_type != SHT_NOBITS {
                offset = align_up(offset, sec.alignment as usize);
                if let Some(o) = user_section_offsets.last_mut() {
                    *o = offset;
                }
                offset += sec.data.len();
            }
        }

        // .strtab offset
        let strtab_file_off = align_up(offset, 1);
        offset = strtab_file_off + strtab.len();

        // .symtab offset (align to 4)
        let symtab_file_off = align_up(offset, 4);
        offset = symtab_file_off + symtab_data.len();

        // .rela.* offsets (align to 4)
        let mut rela_file_offs: Vec<usize> = Vec::new();
        for (_, rela_data) in &rela_sections {
            let off = align_up(offset, 4);
            rela_file_offs.push(off);
            offset = off + rela_data.len();
        }

        // .shstrtab offset
        let shstrtab_file_off = align_up(offset, 1);
        offset = shstrtab_file_off + shstrtab.len();

        // Section header table offset (align to 4)
        let shtab_off = align_up(offset, 4);
        let total_size = shtab_off + total_shdrs * SHDR_SIZE;

        // Allocate output buffer
        let mut out = vec![0u8; total_size];

        // Write ELF header
        out[0..4].copy_from_slice(&ELF_MAGIC);
        out[4] = ELFCLASS32;
        out[5] = ELFDATA2LSB;
        out[6] = EV_CURRENT;
        out[16..18].copy_from_slice(&e.write_u16(ET_REL));
        out[18..20].copy_from_slice(&e.write_u16(SHARC_MACHINE));
        out[20..24].copy_from_slice(&e.write_u32(1)); // e_version
        // e_entry = 0, e_phoff = 0
        out[32..36].copy_from_slice(&e.write_u32(shtab_off as u32)); // e_shoff
        // e_flags = 0
        out[40..42].copy_from_slice(&e.write_u16(ELF_HEADER_SIZE as u16)); // e_ehsize
        // e_phentsize = 0, e_phnum = 0
        out[46..48].copy_from_slice(&e.write_u16(SHDR_SIZE as u16)); // e_shentsize
        out[48..50].copy_from_slice(&e.write_u16(total_shdrs as u16)); // e_shnum
        out[50..52].copy_from_slice(&e.write_u16(shstrtab_shidx as u16)); // e_shstrndx

        // Write user section contents
        for (i, sec) in self.sections.iter().enumerate() {
            if sec.sh_type != SHT_NOBITS && !sec.data.is_empty() {
                let off = user_section_offsets[i];
                out[off..off + sec.data.len()].copy_from_slice(&sec.data);
            }
        }

        // Write .strtab
        out[strtab_file_off..strtab_file_off + strtab.len()].copy_from_slice(&strtab);

        // Write .symtab
        out[symtab_file_off..symtab_file_off + symtab_data.len()].copy_from_slice(&symtab_data);

        // Write .rela.* sections
        for (i, (_, rela_data)) in rela_sections.iter().enumerate() {
            let off = rela_file_offs[i];
            out[off..off + rela_data.len()].copy_from_slice(rela_data);
        }

        // Write .shstrtab
        out[shstrtab_file_off..shstrtab_file_off + shstrtab.len()].copy_from_slice(&shstrtab);

        // Write section headers
        // [0] NULL (already zeroed)

        // User sections
        for (i, sec) in self.sections.iter().enumerate() {
            let sh_idx = i + 1;
            let base = shtab_off + sh_idx * SHDR_SIZE;
            let sh_size = if sec.sh_type == SHT_NOBITS {
                sec.nobits_size
            } else {
                sec.data.len() as u32
            };
            let sh_offset = if sec.sh_type == SHT_NOBITS {
                0
            } else {
                user_section_offsets[i] as u32
            };
            let sh_link = if sec.link_to_symtab {
                symtab_shidx as u32
            } else {
                0
            };
            let sh_info = if sec.info_section > 0 {
                sec.info_section as u32
            } else {
                0
            };
            write_shdr(&mut out, base, &ShdrFields {
                sh_name: shstrtab_offsets[i],
                sh_type: sec.sh_type,
                sh_flags: sec.sh_flags,
                sh_offset,
                sh_size,
                sh_link,
                sh_info,
                sh_addralign: sec.alignment,
                sh_entsize: sec.entsize,
            }, e);
        }

        // .strtab section header
        write_shdr(&mut out, shtab_off + strtab_shidx * SHDR_SIZE, &ShdrFields {
            sh_name: strtab_name_off,
            sh_type: SHT_STRTAB,
            sh_flags: 0,
            sh_offset: strtab_file_off as u32,
            sh_size: strtab.len() as u32,
            sh_link: 0,
            sh_info: 0,
            sh_addralign: 1,
            sh_entsize: 0,
        }, e);

        // .symtab section header
        write_shdr(&mut out, shtab_off + symtab_shidx * SHDR_SIZE, &ShdrFields {
            sh_name: symtab_name_off,
            sh_type: SHT_SYMTAB,
            sh_flags: 0,
            sh_offset: symtab_file_off as u32,
            sh_size: symtab_data.len() as u32,
            sh_link: strtab_shidx as u32,
            sh_info: first_global as u32,
            sh_addralign: 4,
            sh_entsize: SYM_ENTRY_SIZE as u32,
        }, e);

        // .rela.* section headers
        for (i, &(sec_idx, ref rela_data)) in rela_sections.iter().enumerate() {
            let sh_idx = rela_shidx_base + i;
            write_shdr(&mut out, shtab_off + sh_idx * SHDR_SIZE, &ShdrFields {
                sh_name: rela_name_offs[i],
                sh_type: SHT_RELA,
                sh_flags: 0,
                sh_offset: rela_file_offs[i] as u32,
                sh_size: rela_data.len() as u32,
                sh_link: symtab_shidx as u32,
                sh_info: sec_idx as u32,
                sh_addralign: 4,
                sh_entsize: RELA_ENTRY_SIZE as u32,
            }, e);
        }

        // .shstrtab section header
        write_shdr(&mut out, shtab_off + shstrtab_shidx * SHDR_SIZE, &ShdrFields {
            sh_name: shstrtab_name_off,
            sh_type: SHT_STRTAB,
            sh_flags: 0,
            sh_offset: shstrtab_file_off as u32,
            sh_size: shstrtab.len() as u32,
            sh_link: 0,
            sh_info: 0,
            sh_addralign: 1,
            sh_entsize: 0,
        }, e);

        out
    }
}

fn align_up(offset: usize, align: usize) -> usize {
    if align == 0 {
        return offset;
    }
    (offset + align - 1) & !(align - 1)
}

struct SymEntryFields {
    st_name: u32,
    st_value: u32,
    st_size: u32,
    binding: u8,
    sym_type: u8,
    st_shndx: u16,
}

fn write_sym_entry(buf: &mut [u8], idx: usize, f: &SymEntryFields, e: Endian) {
    let base = idx * SYM_ENTRY_SIZE;
    buf[base..base + 4].copy_from_slice(&e.write_u32(f.st_name));
    buf[base + 4..base + 8].copy_from_slice(&e.write_u32(f.st_value));
    buf[base + 8..base + 12].copy_from_slice(&e.write_u32(f.st_size));
    buf[base + 12] = (f.binding << 4) | f.sym_type;
    buf[base + 13] = 0; // st_other
    buf[base + 14..base + 16].copy_from_slice(&e.write_u16(f.st_shndx));
}

struct ShdrFields {
    sh_name: u32,
    sh_type: u32,
    sh_flags: u32,
    sh_offset: u32,
    sh_size: u32,
    sh_link: u32,
    sh_info: u32,
    sh_addralign: u32,
    sh_entsize: u32,
}

fn write_shdr(out: &mut [u8], base: usize, f: &ShdrFields, e: Endian) {
    out[base..base + 4].copy_from_slice(&e.write_u32(f.sh_name));
    out[base + 4..base + 8].copy_from_slice(&e.write_u32(f.sh_type));
    out[base + 8..base + 12].copy_from_slice(&e.write_u32(f.sh_flags));
    // sh_addr = 0 (relocatable)
    out[base + 16..base + 20].copy_from_slice(&e.write_u32(f.sh_offset));
    out[base + 20..base + 24].copy_from_slice(&e.write_u32(f.sh_size));
    out[base + 24..base + 28].copy_from_slice(&e.write_u32(f.sh_link));
    out[base + 28..base + 32].copy_from_slice(&e.write_u32(f.sh_info));
    out[base + 32..base + 36].copy_from_slice(&e.write_u32(f.sh_addralign));
    out[base + 36..base + 40].copy_from_slice(&e.write_u32(f.sh_entsize));
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::elf;

    /// Helper to get section headers from parsed ELF.
    fn get_section_headers(data: &[u8]) -> (elf::Elf32Header, Vec<elf::Elf32Shdr>) {
        let hdr = elf::parse_header(data).unwrap();
        let mut shdrs = Vec::new();
        for i in 0..hdr.e_shnum as usize {
            let off = hdr.e_shoff as usize + i * hdr.e_shentsize as usize;
            shdrs.push(elf::parse_section_header(&data[off..], hdr.ei_data));
        }
        (hdr, shdrs)
    }

    /// Helper to read the section name string table.
    fn get_shstrtab<'a>(data: &'a [u8], hdr: &elf::Elf32Header, shdrs: &[elf::Elf32Shdr]) -> &'a [u8] {
        let shstrtab = &shdrs[hdr.e_shstrndx as usize];
        let off = shstrtab.sh_offset as usize;
        &data[off..off + shstrtab.sh_size as usize]
    }

    /// Helper to find a section by name.
    fn find_section<'a>(
        shdrs: &'a [elf::Elf32Shdr],
        shstrtab: &[u8],
        name: &str,
    ) -> Option<(usize, &'a elf::Elf32Shdr)> {
        shdrs
            .iter()
            .enumerate()
            .find(|(_, s)| elf::read_string_at(shstrtab, s.sh_name) == name)
    }

    /// Helper to parse all symbols from the symtab section.
    fn get_symbols(
        data: &[u8],
        shdrs: &[elf::Elf32Shdr],
        e: Endian,
    ) -> Vec<(elf::Elf32Sym, String)> {
        let symtab_sec = shdrs.iter().find(|s| s.sh_type == SHT_SYMTAB).unwrap();
        let strtab_sec = &shdrs[symtab_sec.sh_link as usize];
        let strtab_off = strtab_sec.sh_offset as usize;
        let strtab =
            &data[strtab_off..strtab_off + strtab_sec.sh_size as usize];

        let sym_off = symtab_sec.sh_offset as usize;
        let nsyms = symtab_sec.sh_size as usize / SYM_ENTRY_SIZE;
        let mut result = Vec::new();
        for i in 0..nsyms {
            let off = sym_off + i * SYM_ENTRY_SIZE;
            let sym = elf::parse_symbol(&data[off..], e);
            let name = elf::read_string_at(strtab, sym.st_name).to_string();
            result.push((sym, name));
        }
        result
    }

    #[test]
    fn basic_text_section() {
        let mut w = ElfWriter::new();
        let text = w.add_text_section(".text", &[0u8; 12]);
        w.add_function("main", text, 0, 12);
        let data = w.finish();

        let (hdr, shdrs) = get_section_headers(&data);
        assert_eq!(hdr.e_machine, 0x85);
        assert_eq!(hdr.e_type, 1); // ET_REL
        assert_eq!(hdr.ei_data, Endian::Little);

        let shstrtab = get_shstrtab(&data, &hdr, &shdrs);

        // Verify NULL section
        assert_eq!(shdrs[0].sh_type, elf::SHT_NULL);

        // Find .text section
        let (text_idx, text_sec) = find_section(&shdrs, shstrtab, ".text").unwrap();
        assert_eq!(text_idx, 1);
        assert_eq!(text_sec.sh_type, SHT_PROGBITS);
        assert_eq!(text_sec.sh_flags, SHF_ALLOC | SHF_EXECINSTR);
        assert_eq!(text_sec.sh_size, 12);

        // Verify .symtab exists
        let (_, symtab_sec) = find_section(&shdrs, shstrtab, ".symtab").unwrap();
        assert_eq!(symtab_sec.sh_type, SHT_SYMTAB);
        assert_eq!(symtab_sec.sh_entsize, SYM_ENTRY_SIZE as u32);

        // Verify symbols
        let syms = get_symbols(&data, &shdrs, hdr.ei_data);
        // Expect: null, .text section sym, main
        assert_eq!(syms.len(), 3);
        assert_eq!(syms[0].1, ""); // null symbol
        assert_eq!(syms[1].0.sym_type(), STT_SECTION); // .text section sym
        assert_eq!(syms[2].1, "main");
        assert_eq!(syms[2].0.bind(), STB_GLOBAL);
        assert_eq!(syms[2].0.sym_type(), STT_FUNC);
        assert_eq!(syms[2].0.st_size, 12);
    }

    #[test]
    fn multiple_sections() {
        let mut w = ElfWriter::new();
        let text = w.add_text_section(".text", &[1, 2, 3, 4, 5, 6]);
        let data_sec = w.add_data_section(".data", &[0xAA, 0xBB]);
        let rodata = w.add_rodata_section(".rodata", &[0x42]);
        let bss = w.add_bss_section(".bss", 256);

        w.add_function("foo", text, 0, 6);
        w.add_object("my_var", data_sec, 0, 2);
        w.add_object("ro_const", rodata, 0, 1);
        w.add_object("bss_buf", bss, 0, 256);

        let elf = w.finish();
        let (hdr, shdrs) = get_section_headers(&elf);
        let shstrtab = get_shstrtab(&elf, &hdr, &shdrs);

        // Check .data section
        let (_, data_shdr) = find_section(&shdrs, shstrtab, ".data").unwrap();
        assert_eq!(data_shdr.sh_type, SHT_PROGBITS);
        assert_eq!(data_shdr.sh_flags, SHF_ALLOC | SHF_WRITE);
        assert_eq!(data_shdr.sh_size, 2);

        // Check .rodata section
        let (_, ro_shdr) = find_section(&shdrs, shstrtab, ".rodata").unwrap();
        assert_eq!(ro_shdr.sh_type, SHT_PROGBITS);
        assert_eq!(ro_shdr.sh_flags, SHF_ALLOC);

        // Check .bss section
        let (_, bss_shdr) = find_section(&shdrs, shstrtab, ".bss").unwrap();
        assert_eq!(bss_shdr.sh_type, SHT_NOBITS);
        assert_eq!(bss_shdr.sh_flags, SHF_ALLOC | SHF_WRITE);
        assert_eq!(bss_shdr.sh_size, 256);
        // BSS has no file data
        assert_eq!(bss_shdr.sh_offset, 0);

        // Check content of .data section is correct
        let d_off = data_shdr.sh_offset as usize;
        assert_eq!(&elf[d_off..d_off + 2], &[0xAA, 0xBB]);
    }

    #[test]
    fn symbols_ordering() {
        let mut w = ElfWriter::new();
        let text = w.add_text_section(".text", &[0u8; 24]);
        // Add locals and globals in mixed order
        w.add_local("local_a", text, 0);
        w.add_function("global_func", text, 0, 12);
        w.add_local("local_b", text, 12);
        w.add_undefined("extern_sym");

        let elf = w.finish();
        let (hdr, shdrs) = get_section_headers(&elf);
        let shstrtab = get_shstrtab(&elf, &hdr, &shdrs);
        let syms = get_symbols(&elf, &shdrs, hdr.ei_data);

        let (_, symtab_sec) = find_section(&shdrs, shstrtab, ".symtab").unwrap();
        let first_global = symtab_sec.sh_info as usize;

        // All symbols before first_global must be local
        for sym in &syms[..first_global] {
            assert_eq!(sym.0.bind(), STB_LOCAL);
        }
        // All symbols from first_global onward must be global
        for sym in &syms[first_global..] {
            assert_eq!(sym.0.bind(), STB_GLOBAL);
        }

        // Check that our named locals appear before first_global
        let local_names: Vec<&str> = syms[..first_global]
            .iter()
            .map(|s| s.1.as_str())
            .collect();
        assert!(local_names.contains(&"local_a"));
        assert!(local_names.contains(&"local_b"));

        // Check globals
        let global_names: Vec<&str> = syms[first_global..]
            .iter()
            .map(|s| s.1.as_str())
            .collect();
        assert!(global_names.contains(&"global_func"));
        assert!(global_names.contains(&"extern_sym"));
    }

    #[test]
    fn relocations() {
        let mut w = ElfWriter::new();
        let text = w.add_text_section(".text", &[0u8; 24]);
        w.add_function("foo", text, 0, 12);
        w.add_undefined("bar");
        w.add_relocation(text, 4, "bar", 1, 0);
        w.add_relocation(text, 16, "bar", 2, -8);

        let elf = w.finish();
        let (hdr, shdrs) = get_section_headers(&elf);
        let shstrtab = get_shstrtab(&elf, &hdr, &shdrs);

        // Find .rela.text
        let (_, rela_sec) = find_section(&shdrs, shstrtab, ".rela.text").unwrap();
        assert_eq!(rela_sec.sh_type, SHT_RELA);
        assert_eq!(rela_sec.sh_entsize, RELA_ENTRY_SIZE as u32);

        // sh_info should point to .text section index
        let (text_idx, _) = find_section(&shdrs, shstrtab, ".text").unwrap();
        assert_eq!(rela_sec.sh_info, text_idx as u32);

        // sh_link should point to .symtab
        let (symtab_idx, _) = find_section(&shdrs, shstrtab, ".symtab").unwrap();
        assert_eq!(rela_sec.sh_link, symtab_idx as u32);

        // Parse relocations
        let rela_off = rela_sec.sh_offset as usize;
        let nrelas = rela_sec.sh_size as usize / RELA_ENTRY_SIZE;
        assert_eq!(nrelas, 2);

        let rela0 = elf::parse_rela(&elf[rela_off..], hdr.ei_data);
        assert_eq!(rela0.r_offset, 4);
        assert_eq!(rela0.r_info & 0xff, 1); // type
        assert_eq!(rela0.r_addend, 0);

        let rela1 = elf::parse_rela(&elf[rela_off + RELA_ENTRY_SIZE..], hdr.ei_data);
        assert_eq!(rela1.r_offset, 16);
        assert_eq!(rela1.r_info & 0xff, 2); // type
        assert_eq!(rela1.r_addend, -8);
    }

    #[test]
    fn extract_global_symbols_roundtrip() {
        let mut w = ElfWriter::new();
        let text = w.add_text_section(".text", &[0u8; 48]);
        let data = w.add_data_section(".data", &[0u8; 16]);
        w.add_function("_main", text, 0, 24);
        w.add_function("_helper", text, 24, 24);
        w.add_object("_global_var", data, 0, 16);
        w.add_undefined("_extern_func");
        w.add_local("local_thing", text, 0);

        let elf = w.finish();
        let syms = elf::extract_global_symbols(&elf).unwrap();

        // Should contain defined globals but not undefined or locals
        assert!(syms.contains(&"_main".to_string()));
        assert!(syms.contains(&"_helper".to_string()));
        assert!(syms.contains(&"_global_var".to_string()));
        // Undefined symbols are excluded by extract_global_symbols
        assert!(!syms.contains(&"_extern_func".to_string()));
        // Local symbols are excluded
        assert!(!syms.contains(&"local_thing".to_string()));
    }

    #[test]
    fn empty_object() {
        let w = ElfWriter::new();
        let elf = w.finish();

        let (hdr, shdrs) = get_section_headers(&elf);
        assert_eq!(hdr.e_machine, 0x85);
        assert_eq!(hdr.e_type, 1);

        // Should have NULL, .strtab, .symtab, .shstrtab
        assert_eq!(shdrs.len(), 4);
        assert_eq!(shdrs[0].sh_type, elf::SHT_NULL);

        let shstrtab = get_shstrtab(&elf, &hdr, &shdrs);
        find_section(&shdrs, shstrtab, ".strtab").unwrap();
        find_section(&shdrs, shstrtab, ".symtab").unwrap();
        find_section(&shdrs, shstrtab, ".shstrtab").unwrap();
    }

    #[test]
    fn bss_no_file_content() {
        let mut w = ElfWriter::new();
        let text = w.add_text_section(".text", &[0u8; 6]);
        let bss = w.add_bss_section(".bss", 1024);

        w.add_function("start", text, 0, 6);
        w.add_object("buffer", bss, 0, 1024);

        let elf = w.finish();
        let (hdr, shdrs) = get_section_headers(&elf);
        let shstrtab = get_shstrtab(&elf, &hdr, &shdrs);

        let (_, bss_sec) = find_section(&shdrs, shstrtab, ".bss").unwrap();
        assert_eq!(bss_sec.sh_type, SHT_NOBITS);
        assert_eq!(bss_sec.sh_size, 1024);

        // The file should not be bloated by BSS size
        assert!((elf.len() as u32) < 1024);
    }

    #[test]
    fn custom_section() {
        let mut w = ElfWriter::new();
        let note_data = b"test note data";
        let idx = w.add_section(".note.test", elf::SHT_NOTE, 0, note_data);
        assert_eq!(idx, 1);

        let elf = w.finish();
        let (hdr, shdrs) = get_section_headers(&elf);
        let shstrtab = get_shstrtab(&elf, &hdr, &shdrs);

        let (_, note_sec) = find_section(&shdrs, shstrtab, ".note.test").unwrap();
        assert_eq!(note_sec.sh_type, elf::SHT_NOTE);
        assert_eq!(note_sec.sh_size, note_data.len() as u32);

        let off = note_sec.sh_offset as usize;
        assert_eq!(&elf[off..off + note_data.len()], note_data);
    }
}
