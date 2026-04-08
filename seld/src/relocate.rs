// SPDX-License-Identifier: GPL-3.0
// relocate.rs --- Relocation processing for SHARC ELF objects
// Copyright (c) 2026 Jakob Kastelic

use selelf::elf::{
    self, Elf32Rela, SHN_UNDEF, SHT_RELA, R_SHARC_ADDR32, R_SHARC_ADDR_VAR, R_SHARC_DATA16,
    R_SHARC_DATA32, R_SHARC_DATA6, R_SHARC_DATA7, R_SHARC_NONE, R_SHARC_PCREL,
};

use crate::error::{Error, Result};
use crate::layout::PlacedSection;
use crate::resolve::{InputObject, SymbolTable};

/// Compute the relocated value for a single relocation entry.
fn compute_reloc_value(rela: &Elf32Rela, sym_addr: u32, pc_addr: u32) -> Result<u32> {
    let rela_type = rela.r_info & 0xff;
    let target = (sym_addr as i64 + rela.r_addend as i64) as u32;

    match rela_type {
        R_SHARC_NONE => Ok(0),
        R_SHARC_ADDR32 | R_SHARC_ADDR_VAR => Ok(target),
        R_SHARC_PCREL => {
            let offset = target.wrapping_sub(pc_addr);
            Ok(offset)
        }
        R_SHARC_DATA6 => Ok(target & 0x3f),
        R_SHARC_DATA7 => Ok(target & 0x7f),
        R_SHARC_DATA16 => Ok(target & 0xffff),
        R_SHARC_DATA32 => Ok(target),
        _ => Err(Error::Relocation(format!(
            "unsupported relocation type 0x{rela_type:x}"
        ))),
    }
}

/// Patch section data with a relocated value according to relocation type.
fn patch_reloc(data: &mut [u8], offset: usize, rela_type: u32, value: u32) {
    match rela_type {
        R_SHARC_ADDR32 | R_SHARC_DATA32 | R_SHARC_ADDR_VAR | R_SHARC_PCREL => {
            if offset + 4 <= data.len() {
                data[offset..offset + 4].copy_from_slice(&value.to_le_bytes());
            }
        }
        R_SHARC_DATA16 => {
            if offset + 2 <= data.len() {
                data[offset..offset + 2].copy_from_slice(&(value as u16).to_le_bytes());
            }
        }
        R_SHARC_DATA6 => {
            if offset < data.len() {
                data[offset] = (data[offset] & 0xc0) | (value as u8 & 0x3f);
            }
        }
        R_SHARC_DATA7 => {
            if offset < data.len() {
                data[offset] = (data[offset] & 0x80) | (value as u8 & 0x7f);
            }
        }
        _ => {}
    }
}

/// Apply all relocations, patching placed section data in place.
pub fn apply_relocations(
    objects: &[InputObject],
    symtab: &SymbolTable,
    placed: &mut [PlacedSection],
) -> Result<()> {
    for (obj_idx, obj) in objects.iter().enumerate() {
        let rela_groups = collect_relas(obj);
        let syms = crate::resolve::read_symbols(obj);

        for (target_sec_idx, relas) in &rela_groups {
            for rela in relas {
                let sym_idx = (rela.r_info >> 8) as usize;
                let rela_type = rela.r_info & 0xff;

                if rela_type == R_SHARC_NONE {
                    continue;
                }

                if sym_idx >= syms.len() {
                    return Err(Error::Relocation(format!(
                        "relocation references symbol index {sym_idx} but only {} symbols in {}",
                        syms.len(),
                        obj.path
                    )));
                }

                let (sym, sym_name) = &syms[sym_idx];
                validate_relocation(rela_type, &obj.path)?;

                // Resolve the symbol's final address
                let sym_final_addr = if sym.st_shndx == SHN_UNDEF {
                    // Look up in global symtab, then find placed section
                    let resolved = symtab.symbols.get(sym_name).ok_or_else(|| {
                        Error::UnresolvedSymbol(sym_name.clone())
                    })?;
                    find_symbol_address(resolved.object_idx, resolved.section_idx as usize, resolved.value, placed)
                        .ok_or_else(|| Error::Relocation(format!(
                            "symbol `{sym_name}` resolved but no placed section found"
                        )))?
                } else {
                    // Defined in this object
                    let sec_idx = sym.st_shndx as usize;
                    find_symbol_address(obj_idx, sec_idx, sym.st_value, placed)
                        .ok_or_else(|| Error::Relocation(format!(
                            "symbol `{sym_name}` section not placed"
                        )))?
                };

                // Find the placed section containing the relocation site
                let site_ps_idx = placed.iter().position(|ps| {
                    ps.object_idx == obj_idx && ps.input_section_idx == *target_sec_idx
                });
                let site_ps_idx = match site_ps_idx {
                    Some(i) => i,
                    None => continue, // section not placed, skip
                };

                let pc_addr = placed[site_ps_idx].address + rela.r_offset;
                let value = compute_reloc_value(rela, sym_final_addr, pc_addr)?;
                let offset = rela.r_offset as usize;
                patch_reloc(&mut placed[site_ps_idx].data, offset, rela_type, value);
            }
        }
    }

    Ok(())
}

/// Find a symbol's final address given its defining object, section, and value.
fn find_symbol_address(
    object_idx: usize,
    section_idx: usize,
    st_value: u32,
    placed: &[PlacedSection],
) -> Option<u32> {
    for ps in placed {
        if ps.object_idx == object_idx && ps.input_section_idx == section_idx {
            return Some(ps.address + st_value);
        }
    }
    None
}

/// Collect relocation entries grouped by the section they apply to.
/// Each entry is (target_section_index, relocations_for_that_section).
fn collect_relas(obj: &InputObject) -> Vec<(usize, Vec<Elf32Rela>)> {
    let mut groups = Vec::new();
    for sec in &obj.sections {
        if sec.sh_type != SHT_RELA {
            continue;
        }
        let target_sec_idx = sec.sh_info as usize;
        let off = sec.sh_offset as usize;
        let sz = sec.sh_size as usize;
        let entsize = if sec.sh_entsize > 0 { sec.sh_entsize as usize } else { 12 };

        if off + sz > obj.data.len() {
            continue;
        }

        let nrelas = sz / entsize;
        let mut entries = Vec::new();
        for j in 0..nrelas {
            let roff = off + j * entsize;
            if roff + entsize > obj.data.len() {
                break;
            }
            entries.push(elf::parse_rela(&obj.data[roff..], obj.endian));
        }
        groups.push((target_sec_idx, entries));
    }
    groups
}

fn validate_relocation(rela_type: u32, path: &str) -> Result<()> {
    match rela_type {
        R_SHARC_NONE | R_SHARC_ADDR32 | R_SHARC_PCREL | R_SHARC_DATA6 | R_SHARC_DATA7
        | R_SHARC_DATA16 | R_SHARC_DATA32 | R_SHARC_ADDR_VAR => Ok(()),
        _ => Err(Error::Relocation(format!(
            "unsupported relocation type 0x{rela_type:x} in {path}"
        ))),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ldf_ast::SectionQualifier;

    #[test]
    fn compute_addr32() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_ADDR32,
            r_addend: 4,
        };
        let val = compute_reloc_value(&rela, 0x1000, 0).unwrap();
        assert_eq!(val, 0x1004);
    }

    #[test]
    fn compute_pcrel() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PCREL,
            r_addend: 0,
        };
        let val = compute_reloc_value(&rela, 0x2000, 0x1000).unwrap();
        assert_eq!(val, 0x1000);
    }

    #[test]
    fn compute_data16() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DATA16,
            r_addend: 0,
        };
        let val = compute_reloc_value(&rela, 0x12345678, 0).unwrap();
        assert_eq!(val, 0x5678);
    }

    #[test]
    fn compute_data6() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DATA6,
            r_addend: 0,
        };
        let val = compute_reloc_value(&rela, 0xFF, 0).unwrap();
        assert_eq!(val, 0x3F);
    }

    #[test]
    fn compute_data7() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DATA7,
            r_addend: 0,
        };
        let val = compute_reloc_value(&rela, 0xFF, 0).unwrap();
        assert_eq!(val, 0x7F);
    }

    #[test]
    fn compute_none() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_NONE,
            r_addend: 42,
        };
        let val = compute_reloc_value(&rela, 0x1000, 0).unwrap();
        assert_eq!(val, 0);
    }

    #[test]
    fn compute_addr_var() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_ADDR_VAR,
            r_addend: 10,
        };
        let val = compute_reloc_value(&rela, 0x500, 0).unwrap();
        assert_eq!(val, 0x50A);
    }

    #[test]
    fn unsupported_type() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: 0xFF,
            r_addend: 0,
        };
        assert!(compute_reloc_value(&rela, 0, 0).is_err());
    }

    #[test]
    fn patch_addr32_writes_4_bytes_le() {
        let mut data = vec![0u8; 8];
        patch_reloc(&mut data, 2, R_SHARC_ADDR32, 0xDEADBEEF);
        assert_eq!(&data[2..6], &0xDEADBEEFu32.to_le_bytes());
        // bytes before and after untouched
        assert_eq!(data[0], 0);
        assert_eq!(data[1], 0);
        assert_eq!(data[6], 0);
        assert_eq!(data[7], 0);
    }

    #[test]
    fn patch_data16_writes_2_bytes_le() {
        let mut data = vec![0u8; 4];
        patch_reloc(&mut data, 1, R_SHARC_DATA16, 0x1234);
        assert_eq!(&data[1..3], &0x1234u16.to_le_bytes());
    }

    #[test]
    fn patch_data6_preserves_upper_bits() {
        let mut data = vec![0xC0u8; 2];
        patch_reloc(&mut data, 0, R_SHARC_DATA6, 0x15);
        assert_eq!(data[0], 0xC0 | 0x15);
        assert_eq!(data[1], 0xC0); // untouched
    }

    #[test]
    fn patch_data7_preserves_upper_bit() {
        let mut data = vec![0x80u8; 2];
        patch_reloc(&mut data, 0, R_SHARC_DATA7, 0x55);
        assert_eq!(data[0], 0x80 | 0x55);
    }

    #[test]
    fn apply_relocations_no_relas_is_noop() {
        let mut placed = vec![PlacedSection {
            output_name: "code".into(),
            object_idx: 0,
            input_section_idx: 2,
            address: 0x1000,
            size: 8,
            data: vec![0u8; 8],
            is_nobits: false,
            qualifier: SectionQualifier::Pm,
            target_memory: "mem_code".into(),
        }];

        let data = selelf::testutil::make_elf_object(
            0x85, selelf::elf::ELFDATA2LSB, &[("_target", true)],
        );
        let obj = crate::resolve::load_object("test.doj", data).unwrap();
        let symtab = crate::resolve::resolve(std::slice::from_ref(&obj)).unwrap();

        // The test object has no .rela sections, so apply_relocations
        // should succeed without modifying any data.
        let result = apply_relocations(std::slice::from_ref(&obj), &symtab, &mut placed);
        assert!(result.is_ok());
        assert_eq!(placed[0].data, vec![0u8; 8]);
    }
}
