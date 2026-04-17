// SPDX-License-Identifier: GPL-3.0
// relocate.rs --- Relocation processing for SHARC ELF objects
// Copyright (c) 2026 Jakob Kastelic

use selelf::elf::{
    self, Elf32Rela, R_SHARC_ADDR32, R_SHARC_ADDR_VAR, R_SHARC_DATA16, R_SHARC_DATA32,
    R_SHARC_DATA6, R_SHARC_DATA7, R_SHARC_DM_ADDR32, R_SHARC_NONE, R_SHARC_PCREL, R_SHARC_PM24,
    R_SHARC_PM32, R_SHARC_PM32_SUB, R_SHARC_PM_EXPR_ADD, R_SHARC_PM_EXPR_MARKER,
    R_SHARC_PM_LOOP16, R_SHARC_PM_PCREL6, R_SHARC_PM_PCREL24, R_SHARC_PM_SW_BRANCHRETURN,
    SHN_UNDEF, SHT_RELA,
};

use crate::error::{Error, Result};
use crate::layout::PlacedSection;
use crate::ldf_ast::SectionQualifier;
use crate::resolve::{InputObject, SymbolTable};

/// Classification of a relocation's effect on the target slot.
/// `Write` is the default path: the computed value replaces (part of)
/// the bits in the target slot. `Subtract` is used by the linker-time
/// expression relocations emitted by the software-branch-return ABI:
/// it decrements the existing 32-bit field by the value returned
/// from `compute_reloc_value`, which was already set by an earlier
/// reloc in the same expression group. `Noop` covers the expression
/// marker relocations whose only job is to confirm the shape of the
/// group.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RelocEffect {
    Write,
    Add,
    Subtract,
    Noop,
}

/// The ABI-internal symbol that marks the "operator" position in a
/// linker-time expression. When a reloc's symbol name matches this,
/// the reloc carries no numeric value and simply sequences the
/// expression.
const SYM_OPERATOR: &str = ".__operator";
/// The ABI-internal symbol that marks a "constant" operand in a
/// linker-time expression. The constant value lives in the reloc's
/// addend, not in the symbol's own `st_value`.
const SYM_CONSTANT: &str = ".__constant";

/// Compute the relocated value and effect for a single relocation
/// entry. Unknown relocation types are a hard error: every
/// relocation in every input object must be decoded, or the link
/// fails with a message naming the unknown type, the byte offset,
/// the containing section, and the containing object. A silently-
/// skipped relocation produces a `.dxe` whose code and data fields
/// disagree with the symbol table.
fn compute_reloc_value(
    rela: &Elf32Rela,
    sym_addr: u32,
    pc_addr: u32,
    sym_name: &str,
    section_name: &str,
    object_path: &str,
) -> Result<(u32, RelocEffect)> {
    let rela_type = rela.r_info & 0xff;
    let target = (sym_addr as i64 + rela.r_addend as i64) as u32;

    // A reloc whose symbol is the expression-operator placeholder is
    // always a structural no-op, regardless of type. It appears on
    // every slot of a four-relocation software-branch-return
    // expression group as part of a postfix encoding; the real
    // write-and-subtract work is done by the other two entries of
    // the group. Recognising the placeholder up front keeps every
    // real reloc type's arm free of group-shape conditionals.
    if sym_name == SYM_OPERATOR {
        return Ok((0, RelocEffect::Noop));
    }

    match rela_type {
        R_SHARC_NONE => Ok((0, RelocEffect::Noop)),
        R_SHARC_ADDR32 | R_SHARC_ADDR_VAR => Ok((target, RelocEffect::Write)),
        R_SHARC_PCREL => {
            let offset = target.wrapping_sub(pc_addr);
            Ok((offset, RelocEffect::Write))
        }
        R_SHARC_PM24 => Ok((target & 0x00ff_ffff, RelocEffect::Write)),
        // `R_SHARC_PM32` and `R_SHARC_PM_SW_BRANCHRETURN` both write
        // the full target absolute address into the 32-bit immediate
        // slot of a 48-bit PM instruction. The difference between
        // the two is which expression the source symbol is part of,
        // not how the value gets laid out in the instruction.
        R_SHARC_PM32 => Ok((target, RelocEffect::Write)),
        // Expression operand: ADD to the field rather than overwrite.
        // The field starts at zero (from encoding), so the first 0xe0
        // effectively writes; a second 0xe0 in the same expression
        // group accumulates (e.g. ldf_stack_space + ldf_stack_length).
        R_SHARC_PM_SW_BRANCHRETURN => Ok((target, RelocEffect::Add)),
        // PC-relative 24-bit PM branch: the delta is `target - pc`
        // where both sides are in 16-bit PM word units. The result
        // is masked to 24 bits and, because the field is signed,
        // negative deltas wrap into the upper bits of the 24-bit
        // field; the patcher writes the low three bytes verbatim so
        // the bit pattern already has the right sign extension.
        R_SHARC_PM_PCREL24 => {
            let delta = target.wrapping_sub(pc_addr);
            Ok((delta & 0x00ff_ffff, RelocEffect::Write))
        }
        // PC-relative 16-bit PM loop-end offset: same formula as
        // the 24-bit case, but the field is narrower and only
        // covers short-body `do ... until` loops. Sixteen bits of
        // signed range is enough for every SHARC loop whose body
        // fits in one instruction block.
        R_SHARC_PM_LOOP16 => {
            let delta = target.wrapping_sub(pc_addr);
            Ok((delta & 0xffff, RelocEffect::Write))
        }
        // PC-relative 6-bit PM branch offset used by the compute-
        // with-jump instruction form. The field is signed, so we
        // mask to six bits; the patcher splits the result across
        // two non-adjacent byte positions in the instruction.
        R_SHARC_PM_PCREL6 => {
            let delta = target.wrapping_sub(pc_addr);
            Ok((delta & 0x3f, RelocEffect::Write))
        }
        // `R_SHARC_PM32_SUB` subtracts its addend from the already-
        // patched 32-bit field. The existing bits carry the value
        // deposited by the earlier `R_SHARC_PM_SW_BRANCHRETURN` in
        // the same expression group, and the delta is computed and
        // written in `patch_reloc`; `compute_reloc_value` just
        // surfaces the addend so the patcher knows how much to
        // subtract. The paired symbol is always `.__constant`.
        R_SHARC_PM32_SUB => {
            if sym_name != SYM_CONSTANT {
                return Err(Error::Relocation(format!(
                    "R_SHARC_PM32_SUB at offset 0x{:x} in `{}` references `{}`, expected `{}`",
                    rela.r_offset, section_name, sym_name, SYM_CONSTANT
                )));
            }
            Ok((rela.r_addend as u32, RelocEffect::Subtract))
        }
        // Expression-marker relocations from the software-branch-
        // return group carry no data. They exist so the ABI can
        // encode an arbitrary linker-time expression as a sequence
        // of relocs; the marker itself is a structural no-op but
        // must still be decoded here so the group as a whole is
        // not flagged as unsupported. The matching symbol is always
        // `.__operator`, which was already handled at the top of
        // this function; reaching this arm means the relocation
        // escaped the placeholder check and something is off.
        // Expression-add: add the target value to the already-written
        // field. Part of a two-symbol addition expression group where
        // the first operand was written by R_SHARC_PM_SW_BRANCHRETURN.
        R_SHARC_PM_EXPR_ADD => Ok((target, RelocEffect::Add)),
        R_SHARC_PM_EXPR_MARKER => Err(Error::Relocation(format!(
            "R_SHARC_PM_EXPR_MARKER at offset 0x{:x} in `{}` references `{}`, expected `{}`",
            rela.r_offset, section_name, sym_name, SYM_OPERATOR
        ))),
        R_SHARC_DATA6 => Ok((target & 0x3f, RelocEffect::Write)),
        R_SHARC_DATA7 => Ok((target & 0x7f, RelocEffect::Write)),
        R_SHARC_DATA16 => Ok((target & 0xffff, RelocEffect::Write)),
        R_SHARC_DATA32 => Ok((target, RelocEffect::Write)),
        // Full 32-bit absolute address into a data-memory word. The
        // reloc is used by `.VAR` initialisers that embed the address
        // of another symbol; the entire four-byte slot becomes the
        // target's final address.
        R_SHARC_DM_ADDR32 => Ok((target, RelocEffect::Write)),
        _ => Err(Error::UnsupportedRelocationType {
            reloc_type: rela_type,
            offset: rela.r_offset,
            section: section_name.to_string(),
            object: object_path.to_string(),
        }),
    }
}

/// Patch section data with a relocated value according to relocation
/// type and effect. This function is only reachable for relocation
/// types that `compute_reloc_value` has already accepted, so the
/// match is exhaustive over the supported set. An unexpected type is
/// an internal invariant violation.
fn patch_reloc(data: &mut [u8], offset: usize, rela_type: u32, value: u32, effect: RelocEffect) {
    if effect == RelocEffect::Noop {
        return;
    }
    if effect == RelocEffect::Add {
        // Expression-add: read back the big-endian 32-bit field at
        // bytes 2..5, add the new value, and write it back. This
        // composes with the base value already written by an earlier
        // R_SHARC_PM_SW_BRANCHRETURN in the same expression group.
        patch_pm32_add(data, offset, value);
        return;
    }
    if effect == RelocEffect::Subtract {
        // The only subtract effect in the current ABI targets the
        // 32-bit big-endian immediate slot at bytes 2..5 of a
        // 48-bit PM instruction. Reading it back, decrementing,
        // and writing it again preserves the opcode bytes and
        // composes with the earlier `R_SHARC_PM_SW_BRANCHRETURN`
        // that wrote the base value into the same four bytes.
        patch_pm32_subtract(data, offset, value);
        return;
    }
    match rela_type {
        R_SHARC_ADDR32 | R_SHARC_DATA32 | R_SHARC_DM_ADDR32 | R_SHARC_ADDR_VAR | R_SHARC_PCREL => {
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
        R_SHARC_PM24 => patch_pm24(data, offset, value),
        R_SHARC_PM32 => patch_pm32(data, offset, value),
        R_SHARC_PM_PCREL24 => patch_pm_pcrel24(data, offset, value),
        R_SHARC_PM_LOOP16 => patch_pm_loop16(data, offset, value),
        R_SHARC_PM_PCREL6 => patch_pm_pcrel6(data, offset, value),
        R_SHARC_NONE => {}
        _ => unreachable!(
            "patch_reloc called with unsupported type 0x{rela_type:x}; compute_reloc_value should have rejected it"
        ),
    }
}

/// Patch a 32-bit immediate into bytes 2..5 of a 48-bit program-memory
/// instruction. The PM section is a stream of big-endian 16-bit words,
/// so the 32-bit value is written high word first: bytes 2..3 hold
/// bits 31..16 and bytes 4..5 hold bits 15..0. The opcode word at
/// bytes 0..1 is preserved. Used by both `Rn=imm32` loads and the
/// `dm(i7,m7)=imm32` software-branch-return slot.
fn patch_pm32(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    data[offset + 2] = ((value >> 24) & 0xff) as u8;
    data[offset + 3] = ((value >> 16) & 0xff) as u8;
    data[offset + 4] = ((value >> 8) & 0xff) as u8;
    data[offset + 5] = (value & 0xff) as u8;
}

/// Subtract a 32-bit value from the big-endian 32-bit immediate at
/// bytes 2..5 of a 48-bit program-memory instruction. The current
/// field is read in big-endian order, decremented with wrapping
/// arithmetic, and written back the same way. Used only by the
/// `R_SHARC_PM32_SUB` expression reloc; the value being subtracted
/// was supplied in the reloc's addend.
/// Add a 32-bit value to the big-endian 32-bit immediate at bytes 2..5
/// of a 48-bit program-memory instruction. Used by `R_SHARC_PM_EXPR_ADD`
/// to compose the second operand of an addition expression with the base
/// value already written by `R_SHARC_PM_SW_BRANCHRETURN`.
fn patch_pm32_add(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    let current = ((data[offset + 2] as u32) << 24)
        | ((data[offset + 3] as u32) << 16)
        | ((data[offset + 4] as u32) << 8)
        | (data[offset + 5] as u32);
    let updated = current.wrapping_add(value);
    data[offset + 2] = ((updated >> 24) & 0xff) as u8;
    data[offset + 3] = ((updated >> 16) & 0xff) as u8;
    data[offset + 4] = ((updated >> 8) & 0xff) as u8;
    data[offset + 5] = (updated & 0xff) as u8;
}

fn patch_pm32_subtract(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    let current = ((data[offset + 2] as u32) << 24)
        | ((data[offset + 3] as u32) << 16)
        | ((data[offset + 4] as u32) << 8)
        | (data[offset + 5] as u32);
    let updated = current.wrapping_sub(value);
    data[offset + 2] = ((updated >> 24) & 0xff) as u8;
    data[offset + 3] = ((updated >> 16) & 0xff) as u8;
    data[offset + 4] = ((updated >> 8) & 0xff) as u8;
    data[offset + 5] = (updated & 0xff) as u8;
}

/// Patch a 24-bit signed PC-relative delta into bytes 3..5 of a
/// 48-bit program-memory instruction. The opcode/condition bits in
/// bytes 0..2 are preserved; bytes 3..5 hold bits 23..0 of the
/// signed delta in big-endian order. Used by conditional branches
/// (`if cc jump (pc, N)`), including delayed variants.
fn patch_pm_pcrel24(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    data[offset + 3] = ((value >> 16) & 0xff) as u8;
    data[offset + 4] = ((value >> 8) & 0xff) as u8;
    data[offset + 5] = (value & 0xff) as u8;
}

/// Patch a 16-bit signed PC-relative loop-end delta into bytes 4..5
/// of a 48-bit program-memory instruction. Bytes 0..3 carry the
/// lcntr initialiser and loop-type flags and are preserved; bytes
/// 4..5 hold bits 15..0 of the signed delta in big-endian order.
/// Used by `do (pc, N) until lce` loop-setup instructions.
fn patch_pm_loop16(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    data[offset + 4] = ((value >> 8) & 0xff) as u8;
    data[offset + 5] = (value & 0xff) as u8;
}

/// Patch a 6-bit signed PC-relative delta into the compute-with-jump
/// instruction form. The six-bit field is split across two non-
/// adjacent byte positions in the 48-bit instruction: the low five
/// bits land in bits 7..3 of byte 2, and the sign bit (bit 5 of the
/// field) lands in bit 0 of byte 1. Every other bit in bytes 1 and 2
/// carries condition, delayed-branch, and compute-opcode information
/// and must be preserved. Bytes 0, 3, 4, and 5 are untouched: they
/// hold the major opcode and the compute-operation operands.
fn patch_pm_pcrel6(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    let field = (value & 0x3f) as u8;
    let low5 = field & 0x1f;
    let sign = (field >> 5) & 0x01;
    data[offset + 2] = (data[offset + 2] & 0x07) | (low5 << 3);
    data[offset + 1] = (data[offset + 1] & 0xfe) | sign;
}

/// Patch a 24-bit absolute target into a 48-bit branch instruction.
///
/// The `offset` is the byte index of the first of the three 16-bit words
/// that make up the instruction. Inside each 16-bit word the bytes are
/// stored high-byte first (the program-memory section is a stream of
/// big-endian 16-bit words, regardless of the ELF file's overall data
/// encoding). The target occupies the low 8 bits of the middle word
/// (target bits 23..16) and the whole last word (target bits 15..0).
/// The upper 8 bits of the middle word carry opcode and flag fields
/// (for example the delayed-branch bit) and are preserved.
fn patch_pm24(data: &mut [u8], offset: usize, value: u32) {
    if offset + 6 > data.len() {
        return;
    }
    // Middle word bytes: [offset+2] = opcode/flag high byte (preserve),
    // [offset+3] = target[23:16].
    data[offset + 3] = ((value >> 16) & 0xff) as u8;
    // Last word bytes: [offset+4] = target[15:8], [offset+5] = target[7:0].
    data[offset + 4] = ((value >> 8) & 0xff) as u8;
    data[offset + 5] = (value & 0xff) as u8;
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
            // A relocation group whose home section was never
            // placed belongs to a section that garbage collection
            // dropped. Skip the whole group: there is nothing to
            // patch, and the individual relocations may reference
            // symbols whose own defining sections are also dead.
            // The previous hard error here assumed every section
            // flowed through layout, which is no longer true.
            let home_placed = placed
                .iter()
                .any(|ps| ps.object_idx == obj_idx && ps.input_section_idx == *target_sec_idx);
            if !home_placed {
                continue;
            }
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

                // Resolve the symbol's final address
                let sym_final_addr = if sym.st_shndx == SHN_UNDEF {
                    // Look up in global symtab, then find placed
                    // section. Honour alias names so that a `_foo`
                    // reference can bind to a `foo.` definition and
                    // vice versa.
                    let maybe_resolved = symtab.symbols.get(sym_name).or_else(|| {
                        crate::resolve::name_aliases(sym_name)
                            .into_iter()
                            .find_map(|a| symtab.symbols.get(&a))
                    });
                    if let Some(resolved) = maybe_resolved {
                        // ELF SHN_ABS (0xfff1) marks an absolute-value
                        // symbol that has no defining section: its
                        // `value` is already the final address. Used
                        // by LDF script-evaluated constants such as
                        // `ldf_stack_space`, `___ldf_pmcachesize`,
                        // etc. Looking those up in the placed-section
                        // table is a category error.
                        if resolved.section_idx == 0xfff1 {
                            resolved.value
                        } else {
                            find_symbol_address(resolved.object_idx, resolved.section_idx as usize, resolved.value, placed)
                                .ok_or_else(|| Error::Relocation(format!(
                                    "symbol `{sym_name}` resolved but no placed section found"
                                )))?
                        }
                    } else {
                        return Err(Error::UnresolvedSymbol(sym_name.clone()));
                    }
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
                    None => {
                        return Err(Error::Relocation(format!(
                            "relocation in `{}` targets section index {target_sec_idx} which is not placed",
                            obj.path
                        )));
                    }
                };

                // The PC address is the relocation site in PM space.
                // For SW sections: address is BW, r_offset is in
                // 16-bit parcels; convert (addr + offset*2) / 2.
                // For PM48 and other sections: address is already in
                // the native unit and r_offset is in those units.
                let pc_addr = match placed[site_ps_idx].qualifier {
                    SectionQualifier::Sw => {
                        (placed[site_ps_idx].address + rela.r_offset * 2) / 2
                    }
                    _ => placed[site_ps_idx].address + rela.r_offset,
                };
                let section_name = obj
                    .section_names
                    .get(*target_sec_idx)
                    .cloned()
                    .unwrap_or_default();
                let (value, effect) = compute_reloc_value(
                    rela,
                    sym_final_addr,
                    pc_addr,
                    sym_name,
                    &section_name,
                    &obj.path,
                )?;
                let offset = reloc_byte_offset(rela_type, rela.r_offset, placed[site_ps_idx].qualifier);
                patch_reloc(
                    &mut placed[site_ps_idx].data,
                    offset,
                    rela_type,
                    value,
                    effect,
                );
            }
        }
    }

    Ok(())
}

/// Find a symbol's final address given its defining object, section, and value.
/// Returns the PM-space address for SW code sections so that PM-family
/// relocations (R_SHARC_PM32, etc.) resolve correctly.
///
/// For SW sections: `ps.address` is a BW (byte) address; `st_value` is
/// in parcel (16-bit PM) units, already a PM-relative offset. The final
/// PM address is `ps.address/2 + st_value`, NOT `(ps.address + st_value)/2`.
fn find_symbol_address(
    object_idx: usize,
    section_idx: usize,
    st_value: u32,
    placed: &[PlacedSection],
) -> Option<u32> {
    for ps in placed {
        if ps.object_idx == object_idx && ps.input_section_idx == section_idx {
            let addr = match ps.qualifier {
                SectionQualifier::Sw => ps.address / 2 + st_value,
                _ => ps.address + st_value,
            };
            return Some(addr);
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

/// Convert a relocation `r_offset` into a byte offset within the
/// section data. Most reloc types use byte offsets directly. Every
/// program-memory instruction relocation numbers its offsets in
/// 16-bit word units because PM instructions are addressed in 16-bit
/// word granularity, so the value is doubled.
fn reloc_byte_offset(rela_type: u32, r_offset: u32, qualifier: SectionQualifier) -> usize {
    match rela_type {
        R_SHARC_PM24
        | R_SHARC_PM32
        | R_SHARC_PM_PCREL24
        | R_SHARC_PM_PCREL6
        | R_SHARC_PM_LOOP16
        | R_SHARC_PM_SW_BRANCHRETURN
        | R_SHARC_PM32_SUB
        | R_SHARC_PM_EXPR_MARKER => {
            // SW sections address in 16-bit parcels (byte = parcel*2).
            // PM 48-bit sections address in instructions (byte = instr*6).
            match qualifier {
                SectionQualifier::Pm => (r_offset as usize) * 6,
                _ => (r_offset as usize) * 2,
            }
        }
        _ => r_offset as usize,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ldf_ast::SectionQualifier;

    fn call(rela: &Elf32Rela, sym: u32, pc: u32) -> Result<u32> {
        compute_reloc_value(rela, sym, pc, "_unused_", "sec", "obj").map(|(v, _)| v)
    }

    fn call_with_sym(rela: &Elf32Rela, sym: u32, pc: u32, name: &str) -> Result<(u32, RelocEffect)> {
        compute_reloc_value(rela, sym, pc, name, "sec", "obj")
    }

    #[test]
    fn compute_addr32() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_ADDR32,
            r_addend: 4,
        };
        let val = call(&rela, 0x1000, 0).unwrap();
        assert_eq!(val, 0x1004);
    }

    #[test]
    fn compute_pcrel() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PCREL,
            r_addend: 0,
        };
        let val = call(&rela, 0x2000, 0x1000).unwrap();
        assert_eq!(val, 0x1000);
    }

    #[test]
    fn compute_data16() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DATA16,
            r_addend: 0,
        };
        let val = call(&rela, 0x12345678, 0).unwrap();
        assert_eq!(val, 0x5678);
    }

    #[test]
    fn compute_data6() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DATA6,
            r_addend: 0,
        };
        let val = call(&rela, 0xFF, 0).unwrap();
        assert_eq!(val, 0x3F);
    }

    #[test]
    fn compute_data7() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DATA7,
            r_addend: 0,
        };
        let val = call(&rela, 0xFF, 0).unwrap();
        assert_eq!(val, 0x7F);
    }

    #[test]
    fn compute_none() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_NONE,
            r_addend: 42,
        };
        let val = call(&rela, 0x1000, 0).unwrap();
        assert_eq!(val, 0);
    }

    #[test]
    fn compute_addr_var() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_ADDR_VAR,
            r_addend: 10,
        };
        let val = call(&rela, 0x500, 0).unwrap();
        assert_eq!(val, 0x50A);
    }

    #[test]
    fn unsupported_type_is_hard_error() {
        // Unknown relocation types fail the link with a precise
        // error that names the type, offset, section, and object.
        let rela = Elf32Rela {
            r_offset: 0x42,
            r_info: 0xFF,
            r_addend: 0,
        };
        let err = compute_reloc_value(&rela, 0, 0, "sym", "code", "a.doj").unwrap_err();
        match err {
            Error::UnsupportedRelocationType {
                reloc_type,
                offset,
                section,
                object,
            } => {
                assert_eq!(reloc_type, 0xFF);
                assert_eq!(offset, 0x42);
                assert_eq!(section, "code");
                assert_eq!(object, "a.doj");
            }
            other => panic!("expected UnsupportedRelocationType, got {other:?}"),
        }
    }

    #[test]
    fn patch_addr32_writes_4_bytes_le() {
        let mut data = vec![0u8; 8];
        patch_reloc(&mut data, 2, R_SHARC_ADDR32, 0xDEADBEEF, RelocEffect::Write);
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
        patch_reloc(&mut data, 1, R_SHARC_DATA16, 0x1234, RelocEffect::Write);
        assert_eq!(&data[1..3], &0x1234u16.to_le_bytes());
    }

    #[test]
    fn patch_data6_preserves_upper_bits() {
        let mut data = vec![0xC0u8; 2];
        patch_reloc(&mut data, 0, R_SHARC_DATA6, 0x15, RelocEffect::Write);
        assert_eq!(data[0], 0xC0 | 0x15);
        assert_eq!(data[1], 0xC0); // untouched
    }

    #[test]
    fn patch_data7_preserves_upper_bit() {
        let mut data = vec![0x80u8; 2];
        patch_reloc(&mut data, 0, R_SHARC_DATA7, 0x55, RelocEffect::Write);
        assert_eq!(data[0], 0x80 | 0x55);
    }

    #[test]
    fn compute_pm24_masks_to_24_bits() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM24,
            r_addend: 0,
        };
        let val = call(&rela, 0xdead_beef, 0).unwrap();
        assert_eq!(val, 0x00ad_beef);
    }

    #[test]
    fn patch_pm24_splits_target_across_middle_and_last_words() {
        // Synthetic 3-word call instruction: opcode 0x06be, middle word
        // 0x04_00 (flag byte 0x04 plus target-high placeholder), target-low
        // placeholder 0x0000. Bytes are big-endian within each 16-bit word.
        let mut data = vec![0x06, 0xbe, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff];
        patch_reloc(&mut data, 0, R_SHARC_PM24, 0x0038_1234, RelocEffect::Write);
        // Word 0 unchanged
        assert_eq!(&data[0..2], &[0x06, 0xbe]);
        // Word 1: flag byte preserved, low byte = target[23:16] = 0x38
        assert_eq!(&data[2..4], &[0x04, 0x38]);
        // Word 2: target[15:0] = 0x1234 in big-endian byte order
        assert_eq!(&data[4..6], &[0x12, 0x34]);
        // Trailing bytes outside the instruction are untouched
        assert_eq!(&data[6..8], &[0xff, 0xff]);
    }

    #[test]
    fn reloc_byte_offset_converts_pm24_word_units() {
        assert_eq!(reloc_byte_offset(R_SHARC_PM24, 9, SectionQualifier::Sw), 18);
        assert_eq!(reloc_byte_offset(R_SHARC_PM24, 9, SectionQualifier::Pm), 54);
        assert_eq!(reloc_byte_offset(R_SHARC_ADDR32, 9, SectionQualifier::Sw), 9);
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

    #[test]
    fn compute_pm32_returns_target() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM32,
            r_addend: 0,
        };
        let (val, effect) = call_with_sym(&rela, 0x001c_0906, 0, "___lib_start").unwrap();
        assert_eq!(val, 0x001c_0906);
        assert_eq!(effect, RelocEffect::Write);
    }

    #[test]
    fn patch_pm32_writes_be_32bit_into_bytes_2_to_5() {
        // Synthetic 48-bit load-immediate: opcode word 0x0f00, two
        // placeholder immediate words. Bytes are big-endian inside
        // each 16-bit word. The patch must replace bytes 2..5 with
        // the target value in big-endian byte order and leave the
        // opcode word alone.
        let mut data = vec![0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa];
        patch_reloc(
            &mut data,
            0,
            R_SHARC_PM32,
            0x001c_0906,
            RelocEffect::Write,
        );
        assert_eq!(&data[0..2], &[0x0f, 0x00]);
        assert_eq!(&data[2..6], &[0x00, 0x1c, 0x09, 0x06]);
        assert_eq!(&data[6..8], &[0xaa, 0xaa]);
    }

    #[test]
    fn compute_pm_pcrel24_backward_delta_masks_to_24_bits() {
        // `if tf jump (pc, -3) (db)` is assembled with the 24-bit
        // PC-relative field set to -3. The compute step should
        // return the value masked to 24 bits so the patcher can
        // copy the low three bytes straight into the instruction.
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM_PCREL24,
            r_addend: 0,
        };
        // target 0x1000, pc 0x1003 -> delta = -3
        let (val, effect) = call_with_sym(&rela, 0x1000, 0x1003, ".pop_loop_stack").unwrap();
        assert_eq!(val, 0x00ff_fffd);
        assert_eq!(effect, RelocEffect::Write);
    }

    #[test]
    fn patch_pm_pcrel24_writes_bytes_3_to_5() {
        // Opcode bytes 0..2 carry the jump family and delayed-branch
        // flag and must be preserved. The 24-bit PC-relative field
        // lands in bytes 3..5 in big-endian order.
        let mut data = vec![0x07, 0x3e, 0x04, 0x00, 0x00, 0x00, 0xaa];
        patch_reloc(
            &mut data,
            0,
            R_SHARC_PM_PCREL24,
            0x00ff_fffd,
            RelocEffect::Write,
        );
        assert_eq!(&data[0..3], &[0x07, 0x3e, 0x04]);
        assert_eq!(&data[3..6], &[0xff, 0xff, 0xfd]);
        assert_eq!(data[6], 0xaa);
    }

    #[test]
    fn compute_pm_loop16_forward_delta() {
        // A cache-init loop body is three instructions; the
        // `do (pc, 3) until lce` setup reloc resolves to a +3 delta
        // from the address of the `do` instruction to the last
        // instruction of the loop.
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM_LOOP16,
            r_addend: 0,
        };
        let (val, effect) = call_with_sym(&rela, 0x1003, 0x1000, ".BTB_init_loop").unwrap();
        assert_eq!(val, 0x0003);
        assert_eq!(effect, RelocEffect::Write);
    }

    #[test]
    fn patch_pm_loop16_writes_only_bytes_4_and_5() {
        // `lcntr=0x400, do (pc, 3) until lce (f)` before the patch
        // has the loop-end field zeroed. Byte 3 holds the `f` flag
        // (`0x80`) and must not be disturbed; bytes 4..5 receive
        // the 16-bit PC-relative delta in big-endian order.
        let mut data = vec![0x0c, 0x04, 0x00, 0x80, 0x00, 0x00];
        patch_reloc(
            &mut data,
            0,
            R_SHARC_PM_LOOP16,
            0x0003,
            RelocEffect::Write,
        );
        assert_eq!(data, vec![0x0c, 0x04, 0x00, 0x80, 0x00, 0x03]);
    }

    #[test]
    fn compute_pm_sw_branchreturn_writes_symbol() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM_SW_BRANCHRETURN,
            r_addend: 0,
        };
        let (val, effect) = call_with_sym(
            &rela,
            0x001c_0a0f,
            0x001c_0a0c,
            "___ADI_AGL_CRT_SW_BRANCHRETURN_31126",
        )
        .unwrap();
        assert_eq!(val, 0x001c_0a0f);
        assert_eq!(effect, RelocEffect::Add);
    }

    #[test]
    fn compute_pm32_sub_returns_addend_as_subtract() {
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM32_SUB,
            r_addend: 1,
        };
        let (val, effect) = call_with_sym(&rela, 0, 0, SYM_CONSTANT).unwrap();
        assert_eq!(val, 1);
        assert_eq!(effect, RelocEffect::Subtract);
    }

    #[test]
    fn compute_operator_marker_is_noop_regardless_of_type() {
        // Every reloc in the software-branch-return expression
        // group that names the `.__operator` placeholder is a
        // structural no-op, regardless of the reloc type byte.
        // Both the dedicated marker type and the terminal 0x0c
        // entry of the group should return a no-op effect.
        for ty in [R_SHARC_PM_EXPR_MARKER, R_SHARC_PM32] {
            let rela = Elf32Rela {
                r_offset: 0,
                r_info: ty,
                r_addend: 0,
            };
            let (val, effect) = call_with_sym(&rela, 0x1234_5678, 0, SYM_OPERATOR).unwrap();
            assert_eq!(val, 0);
            assert_eq!(effect, RelocEffect::Noop);
        }
    }

    #[test]
    fn compute_pm_pcrel6_forward_delta() {
        // A `if tf jump (pc, 7) (db) , r0=r0+1` reloc: target is
        // seven words past the branch, so the computed value is
        // seven masked to the six-bit field width.
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM_PCREL6,
            r_addend: 0,
        };
        let (val, effect) =
            call_with_sym(&rela, 0x133, 0x12c, ".atomic_clr_mode1_bit_1").unwrap();
        assert_eq!(val, 0x07);
        assert_eq!(effect, RelocEffect::Write);
    }

    #[test]
    fn compute_pm_pcrel6_backward_delta_masks_to_6_bits() {
        // `jump (pc, -7) (db) , r0=r0+1`: delta = -7, packed into
        // the six-bit signed field as 0x39.
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_PM_PCREL6,
            r_addend: 0,
        };
        let (val, effect) = call_with_sym(&rela, 0x100, 0x107, ".back").unwrap();
        assert_eq!(val, 0x39);
        assert_eq!(effect, RelocEffect::Write);
    }

    #[test]
    fn patch_pm_pcrel6_positive_delta_splits_bytes_1_and_2() {
        // Real compute-with-jump instruction from libc's
        // cache_set_range_ba.doj at the word holding the branch to
        // `.atomic_clr_mode1_bit_1`. Only the low five bits of byte 2
        // and bit 0 of byte 1 are touched.
        let mut data = vec![0x09, 0x1a, 0x04, 0x02, 0x90, 0x00];
        patch_reloc(&mut data, 0, R_SHARC_PM_PCREL6, 0x07, RelocEffect::Write);
        assert_eq!(data, vec![0x09, 0x1a, 0x3c, 0x02, 0x90, 0x00]);
    }

    #[test]
    fn patch_pm_pcrel6_negative_delta_sets_sign_bit_in_byte_1() {
        // `jump (pc, -7) (db) , r0=r0+1`: the sign bit of the
        // six-bit field lands in bit 0 of byte 1, which is 0 in the
        // pre-patch instruction and must become 1 after the write.
        // The low five bits (0x19) go into bits 7..3 of byte 2.
        let mut data = vec![0x09, 0x3e, 0x04, 0x02, 0x90, 0x00];
        patch_reloc(&mut data, 0, R_SHARC_PM_PCREL6, 0x39, RelocEffect::Write);
        assert_eq!(data, vec![0x09, 0x3f, 0xcc, 0x02, 0x90, 0x00]);
    }

    #[test]
    fn reloc_byte_offset_converts_pm_pcrel6_word_units() {
        assert_eq!(reloc_byte_offset(R_SHARC_PM_PCREL6, 0x12c, SectionQualifier::Sw), 0x258);
    }

    #[test]
    fn compute_dm_addr32_returns_target_absolute() {
        // R_SHARC_DM_ADDR32 writes the full 32-bit absolute address
        // of the target symbol into a data-memory word. It applies
        // to `.VAR` initialisers that embed a symbol address, such
        // as the `heap_table` initialiser whose two entries point at
        // `ldf_heap_space` and `ldf_heap_length`.
        let rela = Elf32Rela {
            r_offset: 0,
            r_info: R_SHARC_DM_ADDR32,
            r_addend: 0,
        };
        let (val, effect) = call_with_sym(&rela, 0x0025_8934, 0, "ldf_heap_space").unwrap();
        assert_eq!(val, 0x0025_8934);
        assert_eq!(effect, RelocEffect::Write);
    }

    #[test]
    fn patch_dm_addr32_writes_4_bytes_le_at_byte_offset() {
        // Re-create the two-entry `heap_table` from libc's
        // heap_table_ba.doj: two consecutive 32-bit DM words, each
        // with an `R_SHARC_DM_ADDR32` reloc at byte offsets 0 and 4
        // naming `ldf_heap_space` and `ldf_heap_length`. After the
        // patches the four-byte slots must hold the absolute
        // addresses in little-endian byte order.
        let mut data = vec![0u8; 0x18];
        patch_reloc(
            &mut data,
            reloc_byte_offset(R_SHARC_DM_ADDR32, 0, SectionQualifier::Bw),
            R_SHARC_DM_ADDR32,
            0x0025_8934,
            RelocEffect::Write,
        );
        patch_reloc(
            &mut data,
            reloc_byte_offset(R_SHARC_DM_ADDR32, 4, SectionQualifier::Bw),
            R_SHARC_DM_ADDR32,
            0x0001_76cc,
            RelocEffect::Write,
        );
        assert_eq!(&data[0..4], &[0x34, 0x89, 0x25, 0x00]);
        assert_eq!(&data[4..8], &[0xcc, 0x76, 0x01, 0x00]);
        // The remaining 16 bytes of the table stay zero because no
        // reloc targets them.
        assert!(data[8..].iter().all(|&b| b == 0));
    }

    #[test]
    fn reloc_byte_offset_dm_addr32_is_byte_indexed() {
        // `R_SHARC_DM_ADDR32` targets a data-memory word whose
        // `r_offset` is a plain byte offset, not a 16-bit-word
        // index. Unlike the PM-instruction relocs, the value must
        // pass through unchanged.
        assert_eq!(reloc_byte_offset(R_SHARC_DM_ADDR32, 4, SectionQualifier::Bw), 4);
        assert_eq!(reloc_byte_offset(R_SHARC_DM_ADDR32, 0x10, SectionQualifier::Bw), 0x10);
    }

    #[test]
    fn sw_branchreturn_group_composes_to_label_minus_one() {
        // Re-create the four-relocation group for every
        // `dm(i7, m7) = sw_return_label - 1` slot in the CRT header:
        // write the label, subtract one, and fire two expression
        // markers. Running all four in order must leave the 32-bit
        // big-endian immediate at bytes 2..5 equal to `label - 1`.
        let label: u32 = 0x001c_0a0f;
        let mut data = vec![0x9f, 0xc0, 0x00, 0x00, 0x00, 0x00];

        // Step 1: R_SHARC_PM_SW_BRANCHRETURN with the label.
        let (val, effect) = call_with_sym(
            &Elf32Rela {
                r_offset: 0,
                r_info: R_SHARC_PM_SW_BRANCHRETURN,
                r_addend: 0,
            },
            label,
            0,
            "___ADI_AGL_CRT_SW_BRANCHRETURN_31126",
        )
        .unwrap();
        patch_reloc(&mut data, 0, R_SHARC_PM_SW_BRANCHRETURN, val, effect);

        // Step 2: R_SHARC_PM32_SUB with .__constant and addend 1.
        let (val, effect) = call_with_sym(
            &Elf32Rela {
                r_offset: 0,
                r_info: R_SHARC_PM32_SUB,
                r_addend: 1,
            },
            0,
            0,
            SYM_CONSTANT,
        )
        .unwrap();
        patch_reloc(&mut data, 0, R_SHARC_PM32_SUB, val, effect);

        // Step 3: R_SHARC_PM_EXPR_MARKER with .__operator.
        let (val, effect) = call_with_sym(
            &Elf32Rela {
                r_offset: 0,
                r_info: R_SHARC_PM_EXPR_MARKER,
                r_addend: 0,
            },
            0,
            0,
            SYM_OPERATOR,
        )
        .unwrap();
        patch_reloc(&mut data, 0, R_SHARC_PM_EXPR_MARKER, val, effect);

        // Step 4: terminal 0x0c with .__operator (no-op).
        let (val, effect) = call_with_sym(
            &Elf32Rela {
                r_offset: 0,
                r_info: R_SHARC_PM32,
                r_addend: 0,
            },
            0,
            0,
            SYM_OPERATOR,
        )
        .unwrap();
        patch_reloc(&mut data, 0, R_SHARC_PM32, val, effect);

        // Final bytes: opcode preserved, immediate = label - 1
        // in big-endian byte order.
        assert_eq!(&data[0..2], &[0x9f, 0xc0]);
        let expected = label - 1;
        assert_eq!(
            &data[2..6],
            &[
                ((expected >> 24) & 0xff) as u8,
                ((expected >> 16) & 0xff) as u8,
                ((expected >> 8) & 0xff) as u8,
                (expected & 0xff) as u8,
            ]
        );
    }
}
