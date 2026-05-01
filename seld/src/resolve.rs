// SPDX-License-Identifier: GPL-3.0
// resolve.rs --- Symbol resolution across input object files
// Copyright (c) 2026 Jakob Kastelic

use std::collections::{HashMap, HashSet};

use selelf::elf::{
    self, Elf32Shdr, Elf32Sym, SHN_UNDEF, SHT_RELA, SHT_STRTAB, SHT_SYMTAB, STB_GLOBAL, STB_WEAK,
};

use crate::error::{Error, Result};

/// Information about a loaded input object file.
#[derive(Debug)]
pub struct InputObject {
    pub path: String,
    pub data: Vec<u8>,
    pub sections: Vec<Elf32Shdr>,
    pub section_names: Vec<String>,
    pub endian: elf::Endian,
}

/// A resolved symbol definition.
#[derive(Debug, Clone)]
pub struct ResolvedSymbol {
    pub object_idx: usize,
    pub value: u32,
    pub size: u32,
    pub section_idx: u16,
    pub info: u8,
    pub is_weak: bool,
}

/// The global symbol table after resolution.
#[derive(Debug)]
pub struct SymbolTable {
    pub symbols: HashMap<String, ResolvedSymbol>,
    pub undefined: Vec<String>,
}

/// Load an ELF relocatable object from raw bytes.
pub fn load_object(path: &str, data: Vec<u8>) -> Result<InputObject> {
    let hdr = elf::parse_header(&data)?;
    let endian = hdr.ei_data;

    let mut sections = Vec::with_capacity(hdr.e_shnum as usize);
    for i in 0..hdr.e_shnum as usize {
        let off = hdr.e_shoff as usize + i * hdr.e_shentsize as usize;
        if off + hdr.e_shentsize as usize > data.len() {
            return Err(Error::Shared(selelf::error::Error::InvalidElf(
                "section header out of bounds".into(),
            )));
        }
        sections.push(elf::parse_section_header(&data[off..], endian));
    }

    // Read section names
    let mut section_names = Vec::with_capacity(sections.len());
    let shstrtab = if (hdr.e_shstrndx as usize) < sections.len() {
        let s = &sections[hdr.e_shstrndx as usize];
        let off = s.sh_offset as usize;
        let sz = s.sh_size as usize;
        if off + sz <= data.len() {
            &data[off..off + sz]
        } else {
            &[] as &[u8]
        }
    } else {
        &[] as &[u8]
    };

    for sec in &sections {
        let name = elf::read_string_at(shstrtab, sec.sh_name);
        section_names.push(name.to_string());
    }

    Ok(InputObject {
        path: path.to_string(),
        data,
        sections,
        section_names,
        endian,
    })
}

/// Read symbols from an input object.
pub fn read_symbols(obj: &InputObject) -> Vec<(Elf32Sym, String)> {
    let mut result = Vec::new();

    for sec in &obj.sections {
        if sec.sh_type != SHT_SYMTAB {
            continue;
        }
        let entsize = if sec.sh_entsize > 0 {
            sec.sh_entsize as usize
        } else {
            16
        };
        let strtab_idx = sec.sh_link as usize;
        let strtab =
            if strtab_idx < obj.sections.len() && obj.sections[strtab_idx].sh_type == SHT_STRTAB {
                let s = &obj.sections[strtab_idx];
                let off = s.sh_offset as usize;
                let sz = s.sh_size as usize;
                if off + sz <= obj.data.len() {
                    &obj.data[off..off + sz]
                } else {
                    &[] as &[u8]
                }
            } else {
                &[] as &[u8]
            };

        let sym_off = sec.sh_offset as usize;
        let sym_sz = sec.sh_size as usize;
        if sym_off + sym_sz > obj.data.len() {
            continue;
        }

        let nsyms = sym_sz / entsize;
        for i in 0..nsyms {
            let off = sym_off + i * entsize;
            if off + entsize > obj.data.len() {
                break;
            }
            let sym = elf::parse_symbol(&obj.data[off..], obj.endian);
            let name = elf::read_string_at(strtab, sym.st_name).to_string();
            result.push((sym, name));
        }
    }

    result
}

/// Collect the set of symbol names referenced by at least one
/// relocation across all input objects. Used to distinguish
/// "extern declaration that some code actually calls" from
/// "extern declaration that no code currently uses". The second
/// class is a common idiom in hand-written SHARC CRT headers
/// (e.g. `21569_hdr.doj` declares `_adi_osal_MsgQueuePost`,
/// `_adi_osal_SemPost`, etc. as `UNDEF global` but no relocation
/// actually targets them). Such unused externs must be silently
/// ignored: a symbol that no `.rela.*` entry points at is not
/// load-bearing by definition.
pub fn relocation_referenced_symbols(objects: &[InputObject]) -> HashSet<String> {
    let mut referenced: HashSet<String> = HashSet::new();
    for obj in objects {
        // Build an index of this object's symbol table so the
        // `r_info >> 8` index inside a relocation entry can be
        // translated to the symbol's string name.
        let syms = read_symbols(obj);
        for sec in &obj.sections {
            if sec.sh_type != SHT_RELA {
                continue;
            }
            let off = sec.sh_offset as usize;
            let sz = sec.sh_size as usize;
            let entsize = if sec.sh_entsize > 0 {
                sec.sh_entsize as usize
            } else {
                12
            };
            if off + sz > obj.data.len() {
                continue;
            }
            let nrelas = sz / entsize;
            for j in 0..nrelas {
                let roff = off + j * entsize;
                if roff + entsize > obj.data.len() {
                    break;
                }
                let rela = elf::parse_rela(&obj.data[roff..], obj.endian);
                let sym_idx = (rela.r_info >> 8) as usize;
                if sym_idx < syms.len() {
                    let name = &syms[sym_idx].1;
                    if !name.is_empty() {
                        referenced.insert(name.clone());
                    }
                }
            }
        }
    }
    referenced
}

/// Return the list of alternative names to try when an exact symbol
/// lookup fails. This accounts for the two-dialect symbol naming in
/// the SHARC toolchain: the assembler emits C names with a leading
/// `_` prefix, while the C compiler emits them with a trailing `.`
/// suffix. Both forms coexist in archive symbol indices, and a
/// reference in one dialect must match a definition in the other.
/// `__builtin_<name>.` references from the C front end resolve to
/// the same library entry as a plain `<name>.` reference.
pub fn name_aliases(name: &str) -> Vec<String> {
    let mut out: Vec<String> = Vec::new();
    let mut push = |s: String| {
        if s != name && !out.contains(&s) {
            out.push(s);
        }
    };

    // Compiler-intrinsic prefix: `__builtin_strcpy.` behaves as
    // `strcpy.` for the purposes of link-time resolution. Strip it
    // first so the remaining alias rules can apply to the stripped
    // form.
    if let Some(stripped) = name.strip_prefix("__builtin_") {
        push(stripped.to_string());
        // Recurse one level so trailing-dot / leading-underscore
        // variants of the stripped name are also considered.
        for alias in name_aliases(stripped) {
            push(alias);
        }
    }

    // Trailing-dot tolerance: `foo` <-> `foo.`
    if let Some(stripped) = name.strip_suffix('.') {
        push(stripped.to_string());
    } else {
        push(format!("{name}."));
    }

    // Leading-underscore (assembler form) vs trailing-dot
    // (compiler form) of the same C symbol.
    if let Some(stripped) = name.strip_prefix('_') {
        push(stripped.to_string());
        push(format!("{stripped}."));
    } else {
        push(format!("_{name}"));
        if let Some(s) = name.strip_suffix('.') {
            push(format!("_{s}"));
        }
    }

    out
}

/// Resolve symbols across all input objects. Build a global symbol table.
pub fn resolve(objects: &[InputObject]) -> Result<SymbolTable> {
    let mut global: HashMap<String, ResolvedSymbol> = HashMap::new();
    let mut all_undefined: Vec<(String, usize)> = Vec::new();

    for (obj_idx, obj) in objects.iter().enumerate() {
        let syms = read_symbols(obj);
        for (sym, name) in &syms {
            if name.is_empty() {
                continue;
            }
            let bind = sym.bind();
            if bind != STB_GLOBAL && bind != STB_WEAK {
                continue;
            }

            if sym.st_shndx == SHN_UNDEF {
                all_undefined.push((name.clone(), obj_idx));
                continue;
            }

            let is_weak = bind == STB_WEAK;
            let resolved = ResolvedSymbol {
                object_idx: obj_idx,
                value: sym.st_value,
                size: sym.st_size,
                section_idx: sym.st_shndx,
                info: sym.st_info,
                is_weak,
            };

            if let Some(existing) = global.get(name) {
                // Strong overrides weak
                if existing.is_weak && !is_weak {
                    global.insert(name.clone(), resolved);
                } else if !existing.is_weak && !is_weak {
                    return Err(Error::DuplicateSymbol {
                        name: name.clone(),
                        first: objects[existing.object_idx].path.clone(),
                        second: obj.path.clone(),
                    });
                }
                // If new is weak and existing is strong, keep existing
            } else {
                global.insert(name.clone(), resolved);
            }
        }
    }

    // Install name-variant aliases for every defined global symbol so
    // that a reference in one dialect (assembler `_foo`) matches a
    // definition in the other (compiler `foo.`). Collect first, then
    // insert; iterating the map while mutating it is not allowed.
    let alias_inserts: Vec<(String, ResolvedSymbol)> = global
        .iter()
        .flat_map(|(name, resolved)| {
            name_aliases(name)
                .into_iter()
                .map(move |alias| (alias, resolved.clone()))
        })
        .collect();
    for (alias, resolved) in alias_inserts {
        global.entry(alias).or_insert(resolved);
    }

    // Check for unresolved symbols. A reference counts as resolved if
    // any of its aliases is defined.
    let mut undefined = Vec::new();
    for (name, _obj_idx) in &all_undefined {
        if global.contains_key(name) {
            continue;
        }
        if name_aliases(name)
            .iter()
            .any(|alias| global.contains_key(alias))
        {
            continue;
        }
        if !undefined.contains(name) {
            undefined.push(name.clone());
        }
    }

    Ok(SymbolTable {
        symbols: global,
        undefined,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use selelf::elf::ELFDATA2LSB;
    use selelf::testutil;

    #[test]
    fn load_simple_object() {
        let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
        let obj = load_object("test.doj", data).unwrap();
        assert_eq!(obj.path, "test.doj");
        assert!(!obj.sections.is_empty());
    }

    #[test]
    fn read_symbols_from_object() {
        let data =
            testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true), ("_helper", true)]);
        let obj = load_object("test.doj", data).unwrap();
        let syms = read_symbols(&obj);
        let names: Vec<&str> = syms.iter().map(|(_, n)| n.as_str()).collect();
        assert!(names.contains(&"_main"));
        assert!(names.contains(&"_helper"));
    }

    #[test]
    fn resolve_defined_symbols() {
        let data1 = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
        let data2 = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_helper", true)]);
        let obj1 = load_object("a.doj", data1).unwrap();
        let obj2 = load_object("b.doj", data2).unwrap();
        let table = resolve(&[obj1, obj2]).unwrap();
        assert!(table.symbols.contains_key("_main"));
        assert!(table.symbols.contains_key("_helper"));
        assert!(table.undefined.is_empty());
    }

    #[test]
    fn resolve_undefined_satisfied() {
        let data1 = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_helper", false)]);
        let data2 = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_helper", true)]);
        let obj1 = load_object("a.doj", data1).unwrap();
        let obj2 = load_object("b.doj", data2).unwrap();
        let table = resolve(&[obj1, obj2]).unwrap();
        assert!(table.undefined.is_empty());
        assert!(table.symbols.contains_key("_helper"));
    }

    #[test]
    fn duplicate_strong_is_error() {
        let data1 = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
        let data2 = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
        let obj1 = load_object("a.doj", data1).unwrap();
        let obj2 = load_object("b.doj", data2).unwrap();
        let result = resolve(&[obj1, obj2]);
        assert!(matches!(result.unwrap_err(), Error::DuplicateSymbol { .. }));
    }
}
