// SPDX-License-Identifier: GPL-3.0
// assemble.rs --- Assembler orchestrator: parse, encode, emit .doj
// Copyright (c) 2026 Jakob Kastelic

//! Multi-section assembler orchestrator: reads .s files, parses, encodes, and
//! emits .doj ELF objects with per-section code and relocation support.

use std::collections::HashMap;

use crate::asmparse::{AsmParser, Directive, ParsedLine};
use crate::error::Result;

/// Per-section accumulated code and symbol data.
struct SectionData {
    code: Vec<u8>,
    symbols: Vec<(String, u32)>,
    is_pm: bool,
    /// Whether this section uses VISA encoding.
    is_visa: bool,
    /// Parcel count for VISA mode (each parcel = 1 address unit).
    /// In ISA mode this is not used; word_offset() uses byte length.
    parcel_count: u32,
}

impl SectionData {
    fn new(is_pm: bool, is_visa: bool) -> Self {
        Self {
            code: Vec::new(),
            symbols: Vec::new(),
            is_pm,
            is_visa: is_visa && is_pm,
            parcel_count: 0,
        }
    }

    /// Current word offset.  In ISA mode: PM instructions are 6 bytes;
    /// DM data words are 4 bytes.  In VISA mode: parcel_count tracks
    /// address units directly.
    fn word_offset(&self) -> u32 {
        let unit = if self.is_pm { 6 } else { 4 };
        (self.code.len() / unit) as u32
    }

    /// Current address in VISA mode (parcel-based).
    fn visa_offset(&self) -> u32 {
        self.parcel_count
    }
}

/// Parse a `.SECTION` name string produced by the parser.
///
/// The parser yields strings like `"PM seg_pmco;"` (after stripping the
/// leading `/`).  We extract the qualifier (PM, SW, DM, DOUBLE32) and the
/// bare section name (without trailing semicolons or whitespace).
/// `DOUBLE32` is a byte-addressed DM variant with 32-bit-aligned words
/// that a cross-section `R1 = symbol.;` reference from a code section
/// can resolve against; the word-addressed `DM` qualifier rejects such
/// relocations at link time.
fn parse_section_name(raw: &str) -> (String, bool) {
    let s = raw.trim().trim_end_matches(';').trim();
    let upper = s.to_uppercase();

    // Order matters: longer keywords first so "DOUBLE32" is not misread as "DM".
    for (kw, is_pm) in [
        ("DOUBLE32", false),
        ("PM", true),
        ("SW", true),
        ("DM", false),
    ] {
        if upper.starts_with(kw) {
            let name = s[kw.len()..].trim();
            if !name.is_empty() {
                return (name.to_string(), is_pm);
            }
        }
    }

    // No qualifier: default to non-PM.
    (s.to_string(), false)
}

/// Initializer value for a `.VAR` directive.
///
/// `Num` is a literal numeric constant that is laid down in-place.
/// `Sym` is a reference to another symbol (typically a function or a
/// global variable address) and is materialised by reserving four
/// zero bytes plus an `R_SHARC_ADDR32` relocation that the linker
/// patches with the absolute address of `name`. This is what makes
/// file-scope arrays of function pointers (and pointer-typed globals
/// initialised by an address) work end-to-end.
enum VarInit {
    Num(u32),
    Sym(String),
}

/// Parse a `.VAR` body string like `_name = 0x12345678`, `_name = sym`,
/// or just `_name`. Returns `(name, optional_init_value)`.
fn parse_var_body(raw: &str) -> (String, Option<VarInit>) {
    let s = raw.trim().trim_end_matches(';').trim();

    if let Some((lhs, rhs)) = s.split_once('=') {
        let name = lhs.trim().to_string();
        let val_str = rhs.trim();
        if let Some(num) = parse_u32_literal(val_str) {
            (name, Some(VarInit::Num(num)))
        } else if !val_str.is_empty() {
            (name, Some(VarInit::Sym(val_str.to_string())))
        } else {
            (name, None)
        }
    } else {
        (s.to_string(), None)
    }
}

/// Parse a numeric literal: hex (0x...), octal (0...), or decimal.
fn parse_u32_literal(s: &str) -> Option<u32> {
    let s = s.trim();
    if let Some(hex) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        u32::from_str_radix(hex, 16).ok()
    } else if s.starts_with('0') && s.len() > 1 && s.chars().all(|c| c.is_ascii_digit()) {
        u32::from_str_radix(s, 8).ok()
    } else {
        s.parse::<u32>().ok()
    }
}

/// Preprocess source text before parsing.
///
/// Strips `.ENDSEG` directives (which the parser does not handle) by replacing
/// them with blank lines so that line numbering is preserved.
fn preprocess(src: &str) -> String {
    let mut out = String::with_capacity(src.len());
    for line in src.lines() {
        let stripped = line.trim().trim_end_matches(';').trim();
        if stripped.eq_ignore_ascii_case(".ENDSEG") {
            out.push('\n');
        } else {
            out.push_str(line);
            out.push('\n');
        }
    }
    out
}

/// Ensure the named section exists in the section list, and return its index.
fn ensure_section(
    sections: &mut Vec<(String, SectionData)>,
    name: &str,
    is_pm: bool,
    visa: bool,
) -> usize {
    if let Some(idx) = sections.iter().position(|(n, _)| n == name) {
        return idx;
    }
    sections.push((name.to_string(), SectionData::new(is_pm, visa)));
    sections.len() - 1
}

/// Return the current section index, creating a default `.text` PM section if
/// none has been set yet.
fn current_or_default(
    sections: &mut Vec<(String, SectionData)>,
    current: &mut Option<usize>,
    default_name: &str,
    default_pm: bool,
    visa: bool,
) -> usize {
    if let Some(idx) = *current {
        return idx;
    }
    let idx = ensure_section(sections, default_name, default_pm, visa);
    *current = Some(idx);
    idx
}

/// An instruction that may need label resolution in a second pass.
struct PendingInstr {
    section_idx: usize,
    byte_offset: usize,
    byte_len: usize,
    /// Word/parcel offset of this instruction within its section, captured
    /// at encode time. In VISA mode this cannot be recovered from
    /// `byte_offset` alone because earlier instructions may be 2, 4, or 6
    /// bytes. Used by pass 2 to compute correct PC-relative offsets.
    word_offset: u32,
    instr: selinstr::encode::Instruction,
    label_ref: String,
}

/// A relocation to emit against an undefined label. Produced in pass 2
/// when a pending label reference cannot be resolved in-file.
struct PendingReloc {
    section_idx: usize,
    byte_offset: u32,
    symbol: String,
    rela_type: u8,
    addend: i32,
}

/// Pick the ELF relocation type that matches the byte layout of a given
/// instruction. SHARC+ PM code references use a small family of
/// relocation types, one per instruction field layout:
///   * `R_SHARC_PM32` (0x0c) patches bytes 2..5 of a 48-bit instruction
///     with a 32-bit absolute value. Used by Type 17 `Ureg = imm32`
///     (`LoadImm`).
///   * `R_SHARC_PM24` (0x0b) patches bytes 3..5 of a 48-bit instruction
///     with a 24-bit absolute value. Used by Type 8a direct
///     `JUMP`/`CALL` and Type 25a `CJUMP`.
///   * `R_SHARC_PM_PCREL24` (0x0f) patches the same bytes 3..5, but
///     seld computes `target - pc` first. Used by Type 8b PC-relative
///     direct branches and by Type 12/13 `DO ... UNTIL` loops whose
///     RELADDR field is itself PC-relative to the DO instruction.
///
/// `R_SHARC_ADDR32` (0x01) writes a 32-bit value at the raw byte
/// offset and will clobber the opcode bytes of a 48-bit instruction,
/// so it must never be used for code-section relocations. It was the
/// type this code emitted originally, and it is the reason external
/// CALL/LoadImm targets silently produced broken bytes in the linked
/// image even when the link itself succeeded.
fn reloc_type_for(instr: &selinstr::encode::Instruction) -> u8 {
    use selinstr::encode::{BranchTarget, Instruction};
    match instr {
        Instruction::LoadImm { .. } => selelf::elf::R_SHARC_PM32 as u8,
        Instruction::Branch { target: BranchTarget::Absolute(_), .. } => {
            selelf::elf::R_SHARC_PM24 as u8
        }
        Instruction::Branch { target: BranchTarget::PcRelative(_), .. } => {
            selelf::elf::R_SHARC_PM_PCREL24 as u8
        }
        Instruction::CJump { .. } => selelf::elf::R_SHARC_PM24 as u8,
        Instruction::DoLoop { .. } | Instruction::DoUntil { .. } => {
            selelf::elf::R_SHARC_PM_PCREL24 as u8
        }
        Instruction::UregAbsAccess { .. } => selelf::elf::R_SHARC_PM32 as u8,
        Instruction::ImmStore { .. } => selelf::elf::R_SHARC_PM32 as u8,
        // Any other instruction landing in the relocation path is a
        // bug in either the parser or the backend: every case we
        // actually produce is handled above. Panicking here makes such
        // a bug loud instead of silently emitting the wrong reloc
        // type.
        other => panic!(
            "relocation emitted for unsupported instruction shape: {other:?}"
        ),
    }
}

/// Resolve a symbolic label reference inside an instruction.
///
/// Returns `Some(new_instr)` when the reference can be rewritten into a
/// position-independent form: a PC-relative Type 8b direct branch for a
/// same-section `JUMP`/`CALL`, or a Type 12/13 DO loop whose RELADDR
/// field is `label_addr - instr_word_offset` (SHARC ISR, Program Flow
/// Control, Type 12/13: RELADDR is "the end-of-loop address relative
/// to the DO LOOP instruction address"). The rewritten bytes need no
/// further linker fixup and the caller patches the encoded instruction
/// in place.
///
/// Returns `None` when the reference must instead become a link-time
/// relocation:
///   - `LoadImm`: the immediate is a runtime address that the linker
///     must patch, regardless of whether the symbol is locally defined.
///   - `CJump`: Type 25a has no PC-relative variant, so there is no
///     position-independent rewrite available.
///   - Any cross-section reference: a PC-relative offset between two
///     sections is not a fixed constant because the linker is free to
///     place the sections arbitrarily far apart.
///   - Any label that is not defined in this file at all.
///
/// The caller turns `None` into an R_SHARC_ADDR24 relocation against a
/// local symbol (if the label is defined somewhere in this file) or an
/// external symbol (if it is not).
///
/// `instr_section_idx` and `instr_word_offset` locate the instruction
/// being resolved in the section list.
fn resolve_labels(
    instr: &selinstr::encode::Instruction,
    label_name: &str,
    label_map: &std::collections::HashMap<String, (usize, u32)>,
    instr_section_idx: usize,
    instr_word_offset: u32,
) -> Option<selinstr::encode::Instruction> {
    use selinstr::encode::{BranchTarget, Instruction};
    if matches!(*instr, Instruction::LoadImm { value: 0, .. }) {
        return None;
    }
    if matches!(*instr, Instruction::CJump { addr: 0, .. }) {
        return None;
    }
    // ImmStore with a symbolic value (e.g. a return-address label pushed
    // onto the stack in a CJUMP delay slot) needs a linker relocation for
    // the absolute address, just like LoadImm and CJump.
    if matches!(*instr, Instruction::ImmStore { .. }) {
        return None;
    }
    let (label_section, label_word_offset) = *label_map.get(label_name)?;
    if label_section != instr_section_idx {
        return None;
    }
    let offset = (label_word_offset as i32) - (instr_word_offset as i32);
    let resolved = match *instr {
        Instruction::Branch { call, cond, target: BranchTarget::Absolute(0), delayed } => {
            Instruction::Branch {
                call,
                cond,
                target: BranchTarget::PcRelative(offset),
                delayed,
            }
        }
        Instruction::DoLoop { counter, end_pc: 0 } => {
            Instruction::DoLoop { counter, end_pc: offset as u32 }
        }
        Instruction::DoUntil { addr: 0, term } => {
            Instruction::DoUntil { addr: offset as u32, term }
        }
        other => other,
    };
    Some(resolved)
}

/// Assemble an input .s file to an output .doj ELF object.
///
/// When `visa` is true, PM code sections use VISA variable-width encoding
/// (16/32/48-bit instructions) targeting ADSP-21569.
pub fn assemble_file(input: &str, output: &str) -> Result<()> {
    let raw_src = std::fs::read_to_string(input)?;
    let bytes = assemble_source(&raw_src, false)?;
    std::fs::write(output, bytes)?;
    Ok(())
}

/// Assemble with VISA encoding for PM code sections.
pub fn assemble_file_visa(input: &str, output: &str) -> Result<()> {
    let raw_src = std::fs::read_to_string(input)?;
    let bytes = assemble_source(&raw_src, true)?;
    std::fs::write(output, bytes)?;
    Ok(())
}

/// Assemble already-preprocessed source text and return the raw .doj ELF
/// bytes. Callers that already have the source in memory can use this to
/// avoid a round-trip through the filesystem.
pub fn assemble_source(src: &str, visa: bool) -> Result<Vec<u8>> {
    assemble_source_inner(src, visa)
}

/// Map every label defined in any section to its `(section_idx, word_offset)`.
/// Used by the label-resolution pass to decide whether a reference can be
/// rewritten position-independently (same section) or must become a
/// relocation (cross-section, external, or ISA-mandated absolute target).
fn build_label_map(
    sections: &[(String, SectionData)],
) -> std::collections::HashMap<String, (usize, u32)> {
    let mut map = std::collections::HashMap::new();
    for (sec_idx, (_, sec)) in sections.iter().enumerate() {
        for (name, offset) in &sec.symbols {
            map.insert(name.clone(), (sec_idx, *offset));
        }
    }
    map
}

fn assemble_source_inner(raw_src: &str, visa: bool) -> Result<Vec<u8>> {
    let src = preprocess(raw_src);
    let mut parser = AsmParser::new(&src);
    let lines = parser.parse_all()?;

    let mut sections: Vec<(String, SectionData)> = Vec::new();
    let mut globals: Vec<String> = Vec::new();
    let mut externs: Vec<String> = Vec::new();
    let mut aliases: HashMap<String, String> =
        HashMap::new();
    let mut current_section_idx: Option<usize> = None;
    let mut pending: Vec<PendingInstr> = Vec::new();
    // SHARC+ hardware DO loops forbid VISA-compressed instructions in
    // the loop body: the hardware DO unit steps the PC in 48-bit
    // instruction units, so any parcel-compressed body instruction
    // desynchronises the loop-end compare and the board hangs. While
    // `no_compress_label` is set, VISA compression is suppressed and
    // every body instruction is emitted in full 48-bit ISA form. The
    // flag is armed by `LCNTR = ..., DO end_lbl UNTIL LCE` whose
    // end-of-loop target is a symbolic label. It is cleared after the
    // first instruction encoded at-or-after the end label is written,
    // so the label's own instruction -- whether on the same line as
    // the label or on a following line, since a standalone label
    // names the next instruction's address -- is the last one of the
    // body and is still forced to 48-bit.
    let mut no_compress_label: Option<String> = None;
    let mut end_label_seen: bool = false;
    // Relocations produced by `.VAR sym = other_symbol;` directives.
    // Folded into the main relocation table at the end of pass 2 so
    // the linker patches symbol addresses into data words for
    // file-scope arrays of function pointers and pointer-typed
    // globals initialised with an address.
    let mut var_relocs: Vec<PendingReloc> = Vec::new();

    // Pass 1: encode instructions, build label map, track unresolved refs
    for line in &lines {
        let mut state = DirectiveState {
            sections: &mut sections,
            globals: &mut globals,
            externs: &mut externs,
            aliases: &mut aliases,
            current_section_idx: &mut current_section_idx,
            var_relocs: &mut var_relocs,
            visa,
        };
        process_directives(line, &mut state);

        if let Some(label) = &line.label {
            let idx = current_or_default(
                &mut sections, &mut current_section_idx, ".text", true, visa,
            );
            let sec = &mut sections[idx].1;
            let word_off = if visa && sec.is_pm {
                sec.visa_offset()
            } else {
                sec.word_offset()
            };
            sec.symbols.push((label.clone(), word_off));
            if no_compress_label.as_deref() == Some(label.as_str()) {
                end_label_seen = true;
            }
        }

        if let Some(instr) = &line.instruction {
            let idx = current_or_default(
                &mut sections, &mut current_section_idx, ".text", true, visa,
            );
            let sec = &mut sections[idx].1;
            let byte_offset = sec.code.len();
            // Capture the word/parcel offset of this instruction *before*
            // encoding it, so pass 2 can compute PC-relative offsets
            // correctly even when earlier instructions in the section had
            // varying widths (VISA: 2/4/6 bytes).
            let word_offset = if visa && sec.is_pm {
                sec.visa_offset()
            } else {
                sec.word_offset()
            };
            if visa && sec.is_pm {
                let isa_bytes =
                    selinstr::encode::encode(instr).expect("instruction encoding failed");
                // Force the 48-bit ISA form under either of two
                // conditions:
                //   1. We are inside a hardware DO loop body, where the
                //      DO unit steps its PC in 48-bit instruction units
                //      and a compressed body instruction hangs the core.
                //   2. The instruction carries a pending relocation
                //      against a symbolic label. The SHARC+ PM reloc
                //      types (`R_SHARC_PM32` / `R_SHARC_PM24` / their
                //      PC-relative cousins) all patch byte slots 2..5
                //      or 3..5 of a 48-bit instruction. If selas
                //      compresses the instruction into a 2/4-byte VISA
                //      form, the linker's patcher writes past the
                //      instruction end -- or, in the former (mis-
                //      typed) case, straight over the opcode -- and
                //      the resulting code is corrupt. The only
                //      instruction that visa_encode currently
                //      compresses in practice is `LoadImm` via the
                //      Type 17b path, but checking `label_ref` is
                //      future-proof and costs nothing at call sites
                //      that do not have a reloc.
                let force_isa = no_compress_label.is_some() || line.label_ref.is_some();
                let encoded = if force_isa {
                    selinstr::visa_encode::VisaEncoded::W48(isa_bytes)
                } else {
                    selinstr::visa_encode::visa_encode(instr, &isa_bytes)
                };
                let bytes = encoded.to_bytes();
                sec.parcel_count += encoded.parcels();
                sec.code.extend_from_slice(&bytes);
            } else {
                let bytes =
                    selinstr::encode::encode(instr).expect("instruction encoding failed");
                sec.code.extend_from_slice(&bytes);
            }
            let byte_len = sec.code.len() - byte_offset;
            if let Some(ref label_ref) = line.label_ref {
                pending.push(PendingInstr {
                    section_idx: idx,
                    byte_offset,
                    byte_len,
                    word_offset,
                    instr: *instr,
                    label_ref: label_ref.clone(),
                });
            }
        }

        // Clear the "force 48-bit" flag once the first instruction at-
        // or-after the end-label has been encoded. `end_label_seen` is
        // set when the label definition is processed (above); the
        // instruction belonging to that label is the last body
        // instruction and has just been written in 48-bit form, so
        // compression can resume from the next line.
        if end_label_seen && line.instruction.is_some() {
            no_compress_label = None;
            end_label_seen = false;
        }

        // Arm the flag after encoding a `DO end_lbl UNTIL LCE` so the
        // body instructions that follow it are forced to 48-bit. The
        // DO instruction itself is not a body instruction.
        if let Some(instr) = &line.instruction {
            if matches!(
                instr,
                selinstr::encode::Instruction::DoLoop { .. }
                    | selinstr::encode::Instruction::DoUntil { .. }
            ) {
                if let Some(lbl) = &line.label_ref {
                    no_compress_label = Some(lbl.clone());
                    end_label_seen = false;
                }
            }
        }
    }

    // Pass 2: resolve label references in branch and loop instructions.
    // Labels defined in the same section as the referring instruction
    // become a position-independent rewrite (PC-relative branch or DO
    // loop RELADDR). Cross-section, external, and ISA-mandated-absolute
    // targets become R_SHARC_ADDR24 relocations that the linker patches.
    // Local-label relocations are backed by STB_LOCAL symbols emitted
    // into the symbol table so the linker can resolve them against the
    // in-file definition.
    let mut relocs: Vec<PendingReloc> = Vec::new();
    let mut local_refs: Vec<(String, usize, u32)> = Vec::new();
    if !pending.is_empty() {
        let label_map = build_label_map(&sections);
        for pi in &pending {
            match resolve_labels(
                &pi.instr,
                &pi.label_ref,
                &label_map,
                pi.section_idx,
                pi.word_offset,
            ) {
                Some(resolved) => {
                    let sec = &mut sections[pi.section_idx].1;
                    if visa && sec.is_visa {
                        let isa_bytes = selinstr::encode::encode(&resolved)
                            .expect("instruction re-encode failed");
                        let encoded =
                            selinstr::visa_encode::visa_encode(&resolved, &isa_bytes);
                        let bytes = encoded.to_bytes();
                        sec.code[pi.byte_offset..pi.byte_offset + pi.byte_len]
                            .copy_from_slice(&bytes);
                    } else {
                        let bytes = selinstr::encode::encode(&resolved)
                            .expect("instruction re-encode failed");
                        sec.code[pi.byte_offset..pi.byte_offset + pi.byte_len]
                            .copy_from_slice(&bytes);
                    }
                }
                None => {
                    match label_map.get(&pi.label_ref) {
                        Some(&(sec_idx, word_offset)) => {
                            if !local_refs.iter().any(|(n, _, _)| n == &pi.label_ref) {
                                local_refs.push((
                                    pi.label_ref.clone(),
                                    sec_idx,
                                    word_offset,
                                ));
                            }
                        }
                        None => {
                            if !externs.contains(&pi.label_ref) {
                                externs.push(pi.label_ref.clone());
                            }
                        }
                    }
                    // Local branch labels (.L_branch_*, .L_doloop_*)
                    // should have been resolved above by resolve_labels
                    // into PC-relative form. Emitting them as linker
                    // relocations would fail because the linker doesn't
                    // know about .L_ symbols. Skip them — but NOT
                    // .L_ret_ labels, which are return-address labels
                    // inserted by selcc's CJUMP delay-slot code and need
                    // absolute-address relocations via local symbols.
                    if pi.label_ref.starts_with(".L_") && !pi.label_ref.starts_with(".L_ret_") {
                        continue;
                    }
                    // All code-section relocations use the SHARC+ PM
                    // relocation family, whose `r_offset` is counted in
                    // 16-bit parcel units. `pi.byte_offset` is the byte
                    // offset inside the section; dividing by 2 gives
                    // the parcel offset the linker expects.
                    // For ImmStore with a non-zero value (e.g. from
                    // a `symbol-1` expression), the value becomes the
                    // relocation addend so the linker computes
                    // symbol_address + addend.
                    let addend = if let selinstr::encode::Instruction::ImmStore { value, .. } = &pi.instr {
                        *value as i32
                    } else {
                        0
                    };
                    relocs.push(PendingReloc {
                        section_idx: pi.section_idx,
                        byte_offset: (pi.byte_offset / 2) as u32,
                        symbol: pi.label_ref.clone(),
                        rela_type: reloc_type_for(&pi.instr),
                        addend,
                    });
                }
            }
        }
    }

    // Resolve .SET aliases into section symbol tables.
    resolve_aliases(&mut sections, &aliases);

    // Fold in relocations harvested from `.VAR sym = other_symbol;`
    // directives. Each one targets either a label defined elsewhere
    // in this file (recorded as a local symbol so the linker resolves
    // it locally) or an external symbol (added to the externs list
    // so the linker resolves it at link time).
    {
        let label_map = build_label_map(&sections);
        for vr in &var_relocs {
            match label_map.get(&vr.symbol) {
                Some(&(sec_idx, word_offset)) => {
                    if !local_refs.iter().any(|(n, _, _)| n == &vr.symbol) {
                        local_refs.push((vr.symbol.clone(), sec_idx, word_offset));
                    }
                }
                None => {
                    if !externs.contains(&vr.symbol) {
                        externs.push(vr.symbol.clone());
                    }
                }
            }
        }
    }
    relocs.extend(var_relocs);

    Ok(emit_elf_bytes(&sections, &globals, &externs, &local_refs, &relocs))
}

/// Mutable state threaded through directive processing. Bundling the
/// references into one struct keeps `process_directives` to a small
/// argument count and makes the data flow obvious: pass 1 mutates
/// `sections`, `globals`, `externs`, `aliases`, and `var_relocs`
/// while advancing `current_section_idx`.
struct DirectiveState<'a> {
    sections: &'a mut Vec<(String, SectionData)>,
    globals: &'a mut Vec<String>,
    externs: &'a mut Vec<String>,
    aliases: &'a mut HashMap<String, String>,
    current_section_idx: &'a mut Option<usize>,
    /// Link-time relocations produced by `.VAR sym = other_symbol;`
    /// directives, folded into the final relocation table after
    /// pass 2 alongside the instruction-level relocations.
    var_relocs: &'a mut Vec<PendingReloc>,
    visa: bool,
}

/// Process directive and section-state effects from a parsed line.
fn process_directives(
    line: &ParsedLine,
    state: &mut DirectiveState<'_>,
) {
    let directive = match &line.directive {
        Some(d) => d,
        None => return,
    };

    match directive {
        Directive::Section(raw_name) => {
            let (name, is_pm) = parse_section_name(raw_name);
            let idx = ensure_section(state.sections, &name, is_pm, state.visa);
            *state.current_section_idx = Some(idx);
        }
        Directive::Global(name) => {
            if !state.globals.contains(name) {
                state.globals.push(name.clone());
            }
        }
        Directive::Extern(name) => {
            if !state.externs.contains(name) {
                state.externs.push(name.clone());
            }
        }
        Directive::Var(raw_body) => {
            let idx = current_or_default(
                state.sections, state.current_section_idx, ".data", false, state.visa,
            );
            let (var_name, init_val) = parse_var_body(raw_body);
            let sec = &mut state.sections[idx].1;
            // DM data sections use byte offsets in symbol values so
            // the linker (which treats BW sections as byte-addressed)
            // places each variable at the correct byte boundary.
            let byte_off = sec.code.len() as u32;
            // A bare `.VAR` (no name on the lhs) means a continuation
            // word that extends the most recently named array; in
            // that case we do not register a new symbol.
            if !var_name.is_empty() {
                sec.symbols.push((var_name, byte_off));
            }

            match init_val {
                Some(VarInit::Num(val)) => {
                    sec.code.extend_from_slice(&val.to_le_bytes());
                }
                Some(VarInit::Sym(target)) => {
                    // Reserve a 32-bit slot of zeros and emit a
                    // link-time `R_SHARC_ADDR32` against the named
                    // symbol so the linker patches the absolute
                    // runtime address of `target` into the data word.
                    // This is the path that handles file-scope arrays
                    // of function pointers and `void *p = &g;`-shaped
                    // pointer globals.
                    sec.code.extend_from_slice(&0u32.to_le_bytes());
                    state.var_relocs.push(PendingReloc {
                        section_idx: idx,
                        byte_offset: byte_off,
                        symbol: target,
                        rela_type: selelf::elf::R_SHARC_ADDR32 as u8,
                        addend: 0,
                    });
                }
                None => {}
            }
        }
        Directive::Byte(data) => {
            let idx = current_or_default(
                state.sections, state.current_section_idx, ".text", true, state.visa,
            );
            state.sections[idx].1.code.extend_from_slice(data);
        }
        Directive::Align(boundary) => {
            if let Some(idx) = *state.current_section_idx {
                let sec = &mut state.sections[idx].1;
                let unit = if sec.is_pm { 6 } else { 4 };
                let current_words = sec.code.len() / unit;
                let b = *boundary as usize;
                if b > 0 {
                    let remainder = current_words % b;
                    if remainder != 0 {
                        let pad_words = b - remainder;
                        sec.code
                            .extend(std::iter::repeat_n(0u8, pad_words * unit));
                    }
                }
            }
        }
        Directive::Set(name, value) => {
            state.aliases.insert(name.clone(), value.clone());
        }
    }
}

/// Resolve `.SET` aliases into section symbol tables.
///
/// For each alias, look up the value: if it names an existing symbol in any
/// section, copy that symbol's address; if it parses as a numeric literal,
/// use that value directly.  Chains (A = B, B = C) are resolved transitively
/// up to a bounded depth.
fn resolve_aliases(
    sections: &mut [(String, SectionData)],
    aliases: &HashMap<String, String>,
) {
    for (alias_name, raw_value) in aliases {
        // Resolve transitive chains: follow symbol names through the alias map.
        let mut value = raw_value.clone();
        for _ in 0..16 {
            match aliases.get(&value) {
                Some(next) => value = next.clone(),
                None => break,
            }
        }

        // Try to find the resolved value as an existing symbol.
        let mut found = false;
        for sec in sections.iter_mut() {
            let hit = sec.1.symbols.iter().find(|(n, _)| *n == value).map(|(_, off)| *off);
            if let Some(addr) = hit {
                sec.1.symbols.push((alias_name.clone(), addr));
                found = true;
                break;
            }
        }

        if !found {
            // Try as a numeric literal; add to the first section (or skip).
            if let Some(num) = parse_u32_literal(&value) {
                if let Some(first) = sections.first_mut() {
                    first.1.symbols.push((alias_name.clone(), num));
                }
            }
        }
    }
}

/// Serialize the accumulated sections and symbols to ELF .doj bytes.
fn emit_elf_bytes(
    sections: &[(String, SectionData)],
    globals: &[String],
    externs: &[String],
    local_refs: &[(String, usize, u32)],
    relocs: &[PendingReloc],
) -> Vec<u8> {
    let mut writer = selelf::elf_write::ElfWriter::new();

    // Add sections and collect their ELF section indices. VISA-encoded PM
    // sections use the short-word layout (alignment 1, entsize 1) so the
    // linker accepts them when cross-linking against `-swc` C objects.
    let mut elf_indices: Vec<u16> = Vec::new();
    for (name, sec_data) in sections {
        let idx = if sec_data.is_visa {
            writer.add_text_section_sw(name, &sec_data.code)
        } else if sec_data.is_pm {
            writer.add_text_section(name, &sec_data.code)
        } else {
            writer.add_data_section(name, &sec_data.code)
        };
        elf_indices.push(idx);
    }

    // Register locally-defined labels that are the targets of relocations
    // in this file. These have to appear in the symbol table as STB_LOCAL
    // so the linker can resolve the relocation against the in-file
    // definition instead of treating the label as an unresolved external.
    //
    // Labels that originated from a `.VAR` directive in a data section
    // (i.e. they appear in `sections[*].symbols`) are emitted as
    // `STT_OBJECT`. the SHARC+ linker treats `STT_NOTYPE` locals as plain
    // labels and resolves them with *word*-granular addresses, while
    // it walks `STT_OBJECT` symbols for byte-granular layout in BW
    // data sections. Without the OBJECT type the relocation against
    // a string literal points 4 byte-addresses higher than the actual
    // first byte (for SwCode-aligned symbols this is hidden by the
    // /4 multiplier; in BW memory it leaves printf reading the
    // padding byte 0x00 instead of the real first character of the
    // format string).
    for (name, sec_idx, word_offset) in local_refs {
        // Skip names that are already declared `.GLOBAL` — those will
        // be emitted as STT_FUNC/STT_OBJECT globals later in this
        // function. Adding a duplicate STB_LOCAL entry for the same
        // name produces two symtab entries that point at the same
        // address; the SHARC+ linker resolves later in-file references
        // (CJUMPs, address-of) to the first match it sees, which is
        // the local NOTYPE — and a NOTYPE symbol is treated as a
        // word-granular label, so byte-addressed data references
        // (and even some PM cjumps) resolve to the wrong runtime
        // value.
        if globals.iter().any(|g| g == name) {
            continue;
        }
        let elf_idx = elf_indices[*sec_idx];
        let from_var = sections.get(*sec_idx)
            .map(|(_, sd)| sd.symbols.iter().any(|(n, _)| n == name))
            .unwrap_or(false);
        let is_data_sec = sections.get(*sec_idx)
            .map(|(_, sd)| !sd.is_pm)
            .unwrap_or(false);
        if from_var && is_data_sec {
            writer.add_local_object(name, elf_idx, *word_offset, 0);
        } else {
            writer.add_local(name, elf_idx, *word_offset);
        }
    }

    // Register extern (undefined) symbols.
    for ext in externs {
        writer.add_undefined(ext);
    }

    // Register symbols per section. Track globally-exported function names
    // for each PM section so we can populate the `.attributes` metadata.
    // Each entry is (elf index, section name, VISA flag, exported functions).
    let mut pm_section_funcs: Vec<(u16, String, bool, Vec<String>)> = Vec::new();
    for (sec_idx, (name, sec_data)) in sections.iter().enumerate() {
        let elf_idx = elf_indices[sec_idx];
        let mut funcs = Vec::new();
        for (sym_name, word_off) in &sec_data.symbols {
            let is_global = globals.iter().any(|g| g == sym_name);
            if is_global {
                if sec_data.is_pm {
                    writer.add_function(sym_name, elf_idx, *word_off, 0);
                    funcs.push(sym_name.clone());
                } else {
                    writer.add_object(sym_name, elf_idx, *word_off, 0);
                }
            }
        }
        if sec_data.is_pm {
            pm_section_funcs.push((elf_idx, name.clone(), sec_data.is_visa, funcs));
        }
    }

    // Globals declared but not found as labels: attach to first section.
    let first_elf_idx = elf_indices.first().copied().unwrap_or(0);
    for g in globals {
        let found = sections
            .iter()
            .any(|(_, sd)| sd.symbols.iter().any(|(n, _)| n == g));
        if !found {
            writer.add_function(g, first_elf_idx, 0, 0);
        }
    }

    // Emit deferred relocations against undefined symbols.
    for r in relocs {
        let elf_idx = elf_indices[r.section_idx];
        writer.add_relocation(elf_idx, r.byte_offset, &r.symbol, r.rela_type, r.addend);
    }

    // Emit `.align.<name>` sections for every PM section. The linker
    // requires this placement metadata to accept the object file.
    for (idx, name, _, _) in &pm_section_funcs {
        writer.add_align_section(name, *idx);
    }

    // Emit a `.attributes` string table naming the exported functions and
    // the encoding / content tags the linker uses to classify code sections.
    // VISA sections are tagged as SW (short-word) for compatibility with
    // `-swc` compiled C objects; non-VISA PM sections stay NW.
    if !pm_section_funcs.is_empty() {
        let any_visa = pm_section_funcs.iter().any(|(_, _, v, _)| *v);
        let encoding: &[u8] = if any_visa { b"SW" } else { b"NW" };
        let mut attrs = Vec::new();
        attrs.push(0u8); // leading null
        for (_, _, _, funcs) in &pm_section_funcs {
            for f in funcs {
                attrs.extend_from_slice(b"FuncName\t");
                attrs.extend_from_slice(f.as_bytes());
                attrs.push(0);
            }
        }
        attrs.extend_from_slice(b"Encoding\t");
        attrs.extend_from_slice(encoding);
        attrs.push(0);
        attrs.extend_from_slice(b"Content\tCode\0");
        writer.add_section(".attributes", selelf::elf::SHT_STRTAB, 0, &attrs);
    }

    // Emit `.adi.attributes` with the processor identity and per-section
    // encoding metadata. Without this section the linker rejects the file.
    let first_pm = pm_section_funcs.first().map(|(i, _, v, _)| (*i as u8, *v));
    writer.add_section(
        ".adi.attributes",
        selelf::elf::SHT_SHARC_ATTR,
        0,
        &build_adi_attributes(first_pm),
    );

    writer.finish()
}

/// Build the `.adi.attributes` blob for ADSP-21569.
///
/// An ARM-style build-attributes envelope carrying file-level tags
/// (processor name, short-word mode, char size, silicon revision, tool
/// version) and an optional per-section subsection that names the first
/// PM section. SHARC+ code, whether VISA or fixed-width, uses Tag_Encoding
/// value 0x03.
fn build_adi_attributes(first_pm: Option<(u8, bool)>) -> Vec<u8> {
    let proc_name = b"ADSP-21569\0";

    let mut file_attrs = Vec::new();
    file_attrs.push(0x04);
    file_attrs.extend_from_slice(proc_name);
    file_attrs.extend_from_slice(&[0x05, 0x0b]); // short-word mode
    file_attrs.extend_from_slice(&[0x06, 0x64]); // char size 8-bit
    file_attrs.extend_from_slice(&[0x07, 0xff, 0xff, 0x03]); // silicon rev = any (ULEB128 0xffff)
    file_attrs.extend_from_slice(&[0x08, 0x01]); // build tool version

    let file_block_size = 1 + 4 + file_attrs.len() as u32;
    let mut file_block = Vec::new();
    file_block.push(0x01); // Tag_File
    file_block.extend_from_slice(&file_block_size.to_le_bytes());
    file_block.extend_from_slice(&file_attrs);

    if let Some((idx, _is_visa)) = first_pm {
        let sec_content = vec![
            idx,
            0x00, // end of section index list
            0x12, // Tag_Encoding
            0x03,
        ];

        let sec_block_size = 1 + 4 + sec_content.len() as u32;
        file_block.push(0x02); // Tag_Section
        file_block.extend_from_slice(&sec_block_size.to_le_bytes());
        file_block.extend_from_slice(&sec_content);
    }

    let producer = b"AnonADI\0";
    let total_size = 4 + producer.len() as u32 + file_block.len() as u32;
    let mut blob = Vec::new();
    blob.push(b'A');
    blob.extend_from_slice(&total_size.to_le_bytes());
    blob.extend_from_slice(producer);
    blob.extend_from_slice(&file_block);
    blob
}

// -----------------------------------------------------------------------
// Helpers for tests: parse ELF section headers
// -----------------------------------------------------------------------

#[cfg(test)]
fn find_section_by_name(
    data: &[u8],
    hdr: &selelf::elf::Elf32Header,
    target_name: &str,
) -> Option<selelf::elf::Elf32Shdr> {
    let shoff = hdr.e_shoff as usize;
    let shentsize = hdr.e_shentsize as usize;
    let shnum = hdr.e_shnum as usize;

    // Locate the section-header string table.
    let strtab_off = shoff + hdr.e_shstrndx as usize * shentsize;
    let strtab_shdr =
        selelf::elf::parse_section_header(&data[strtab_off..], hdr.ei_data);
    let strtab_start = strtab_shdr.sh_offset as usize;
    let strtab_end = strtab_start + strtab_shdr.sh_size as usize;
    let strtab = &data[strtab_start..strtab_end];

    for i in 0..shnum {
        let off = shoff + i * shentsize;
        let shdr = selelf::elf::parse_section_header(&data[off..], hdr.ei_data);
        let name = selelf::elf::read_string_at(strtab, shdr.sh_name);
        if name == target_name {
            return Some(shdr);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    use std::sync::atomic::{AtomicU32, Ordering};

    static TEST_SEQ: AtomicU32 = AtomicU32::new(0);

    fn assemble_str(source: &str) -> Vec<u8> {
        let seq = TEST_SEQ.fetch_add(1, Ordering::Relaxed);
        let tid = std::thread::current().id();
        let dir_name = format!("selas_mt_{seq}_{tid:?}");
        let dir = std::env::temp_dir().join(dir_name);
        let _ = std::fs::create_dir_all(&dir);
        let input_path = dir.join("test.s");
        let output_path = dir.join("test.doj");
        std::fs::write(&input_path, source).unwrap();
        assemble_file(
            input_path.to_str().unwrap(),
            output_path.to_str().unwrap(),
        )
        .unwrap();
        let data = std::fs::read(&output_path).unwrap();
        let _ = std::fs::remove_dir_all(&dir);
        data
    }

    #[test]
    fn test_assemble_and_readback() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _main;\n\
             _main:\n\
                 NOP\n\
                 RTS\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_machine, 0x85);
        assert_eq!(hdr.e_type, 1); // ET_REL

        let syms = selelf::elf::extract_global_symbols(&data).unwrap();
        assert!(syms.contains(&"_main".to_string()));
    }

    #[test]
    fn test_assemble_multiple_instructions() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _func;\n\
             _func:\n\
                 R0 = 0x0000002A\n\
                 R8 = R6 + R7\n\
                 RTS\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_machine, 0x85);

        let shdr = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        assert_eq!(shdr.sh_size, 18); // 3 instructions * 6 bytes
    }

    #[test]
    fn test_multi_section() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _main;\n\
             _main: NOP;\n\
                 RTS;\n\
             .ENDSEG;\n\
             .SECTION/DM seg_dmda;\n\
             .GLOBAL _data;\n\
             .VAR _data = 0x12345678;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();

        let pmco = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco not found");
        assert_eq!(pmco.sh_size, 12); // 2 instructions * 6 bytes

        let dmda = find_section_by_name(&data, &hdr, "seg_dmda")
            .expect("seg_dmda not found");
        assert_eq!(dmda.sh_size, 4); // one 32-bit value

        let syms = selelf::elf::extract_global_symbols(&data).unwrap();
        assert!(syms.contains(&"_main".to_string()));
        assert!(syms.contains(&"_data".to_string()));
    }

    #[test]
    fn test_endseg_handling() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             NOP;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);
    }

    #[test]
    fn test_var_data() {
        let data = assemble_str(
            ".SECTION/DM seg_dmda;\n\
             .VAR _val = 0xDEADBEEF;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();

        let shdr = find_section_by_name(&data, &hdr, "seg_dmda")
            .expect("seg_dmda not found");
        assert_eq!(shdr.sh_size, 4);

        let off = shdr.sh_offset as usize;
        let bytes = &data[off..off + 4];
        let val = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        assert_eq!(val, 0xDEADBEEF);
    }

    #[test]
    fn test_extern_symbol() {
        let data = assemble_str(
            ".EXTERN _ext_func;\n\
             .SECTION/PM seg_pmco;\n\
             .GLOBAL _main;\n\
             _main: NOP;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);

        let syms = selelf::elf::extract_global_symbols(&data).unwrap();
        assert!(syms.contains(&"_main".to_string()));
    }

    #[test]
    fn test_forward_label_reference() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _start;\n\
             .GLOBAL _end;\n\
             _start: NOP;\n\
             _end: RTS;\n\
             .ENDSEG;\n",
        );
        let syms = selelf::elf::extract_global_symbols(&data).unwrap();
        assert!(syms.contains(&"_start".to_string()));
        assert!(syms.contains(&"_end".to_string()));
    }

    #[test]
    fn test_no_section_fallback() {
        let data = assemble_str(
            ".GLOBAL _main;\n_main:\n    NOP\n    RTS\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_machine, 0x85);
        let syms = selelf::elf::extract_global_symbols(&data).unwrap();
        assert!(syms.contains(&"_main".to_string()));
    }

    #[test]
    fn test_parse_section_name_pm() {
        let (name, is_pm) = parse_section_name("PM seg_pmco;");
        assert_eq!(name, "seg_pmco");
        assert!(is_pm);
    }

    #[test]
    fn test_parse_section_name_dm() {
        let (name, is_pm) = parse_section_name("DM seg_dmda;");
        assert_eq!(name, "seg_dmda");
        assert!(!is_pm);
    }

    #[test]
    fn test_parse_section_name_bare() {
        let (name, is_pm) = parse_section_name("seg_pmco;");
        assert_eq!(name, "seg_pmco");
        assert!(!is_pm);
    }

    #[test]
    fn test_parse_var_body_with_init() {
        let (name, val) = parse_var_body("_data = 0x12345678;");
        assert_eq!(name, "_data");
        match val {
            Some(VarInit::Num(n)) => assert_eq!(n, 0x12345678),
            other => panic!("expected Num, got {:?}", other.is_some()),
        }
    }

    #[test]
    fn test_parse_var_body_no_init() {
        let (name, val) = parse_var_body("_data;");
        assert_eq!(name, "_data");
        assert!(val.is_none());
    }

    #[test]
    fn test_parse_var_body_decimal() {
        let (name, val) = parse_var_body("_count = 42;");
        assert_eq!(name, "_count");
        match val {
            Some(VarInit::Num(n)) => assert_eq!(n, 42),
            other => panic!("expected Num, got {:?}", other.is_some()),
        }
    }

    #[test]
    fn test_parse_var_body_symbolic() {
        let (name, val) = parse_var_body("_table = my_func.;");
        assert_eq!(name, "_table");
        match val {
            Some(VarInit::Sym(s)) => assert_eq!(s, "my_func."),
            other => panic!("expected Sym, got {:?}", other.is_some()),
        }
    }

    /// Read a 48-bit big-endian instruction word from 6 bytes.
    fn read_word48(bytes: &[u8]) -> u64 {
        ((bytes[0] as u64) << 40)
            | ((bytes[1] as u64) << 32)
            | ((bytes[2] as u64) << 24)
            | ((bytes[3] as u64) << 16)
            | ((bytes[4] as u64) << 8)
            | (bytes[5] as u64)
    }

    #[test]
    fn test_set_directive() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _start;\n\
             _start: NOP;\n\
             .SET _alias = _start;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);
    }

    #[test]
    fn test_set_numeric() {
        let data = assemble_str(
            ".SET _CONST = 0x1000;\n\
             .SECTION/PM seg_pmco;\n\
             NOP;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);
    }

    #[test]
    fn test_set_comma_syntax() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _start;\n\
             _start: NOP;\n\
             .SET _alias, _start;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);
    }

    #[test]
    fn test_branch_label_resolution() {
        // `_start` at word 0, JUMP at word 2, so the position-independent
        // rewrite must produce `JUMP (PC,-0x2)`.
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _start;\n\
             _start: NOP;\n\
             NOP;\n\
             JUMP _start;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);

        let shdr = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        assert_eq!(shdr.sh_size, 18); // 3 instructions * 6 bytes

        let off = shdr.sh_offset as usize;
        let word = read_word48(&data[off + 12..off + 18]);
        let decoded = selinstr::disasm::decode_instruction(word);
        assert_eq!(
            decoded, "JUMP (PC,-0x2)",
            "JUMP _start at word 2 must become JUMP (PC,-0x2)",
        );
    }

    #[test]
    fn test_forward_branch_label() {
        // JUMP at word 0, `_end` at word 2, so the rewrite must produce
        // `JUMP (PC,0x2)`.
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _start;\n\
             _start: JUMP _end;\n\
             NOP;\n\
             _end: NOP;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);

        let shdr = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        let off = shdr.sh_offset as usize;
        let word = read_word48(&data[off..off + 6]);
        let decoded = selinstr::disasm::decode_instruction(word);
        assert_eq!(
            decoded, "JUMP (PC,0x2)",
            "JUMP _end at word 0 must become JUMP (PC,0x2)",
        );
    }

    #[test]
    fn test_do_loop_label() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             LCNTR = 10, DO _end UNTIL LCE;\n\
             NOP;\n\
             _end: NOP;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();
        assert_eq!(hdr.e_type, 1);

        let shdr = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        assert_eq!(shdr.sh_size, 18); // 3 instructions * 6 bytes
    }

    /// In VISA mode, the body of a hardware `DO ... UNTIL LCE` loop
    /// must be emitted as full 48-bit ISA instructions even when one
    /// or more of the individual instructions would compress down to
    /// 16/32 bits on their own. The hardware DO unit steps its
    /// internal PC in 48-bit instruction units, so a compressed body
    /// instruction desynchronises the loop-end compare and the board
    /// hangs: a hand-written `LCNTR=10, DO sum_loop_end UNTIL LCE`
    /// built with the old code path hit `R3 = R2 + R1`, the
    /// compressor emitted the 32-bit Type 6b form, and the board
    /// locked up every time. This test assembles a hardware loop in
    /// VISA mode with a body instruction that *would* compress in
    /// normal code, then walks the seg_pmco bytes and asserts each
    /// body slot occupies a full six bytes.
    #[test]
    fn test_hardware_loop_body_is_48_bit_in_visa() {
        let src = ".SECTION/PM seg_pmco;\n\
                   .GLOBAL loop_test;\n\
                   loop_test:\n\
                   LCNTR = 0xA, DO sum_loop_end UNTIL LCE;\n\
                   R0 = R0 + R1;\n\
                   R2 = PASS R0;\n\
                   sum_loop_end:\n\
                   R3 = R2 + R1;\n\
                   RTS;\n\
                   .ENDSEG;\n";
        let data = assemble_source(src, true).expect("assemble");
        let hdr = selelf::elf::parse_header(&data).unwrap();
        let shdr = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        // DO + 3 body instructions + RTS = 5 slots, all full-width
        // 48-bit (6 bytes each) = 30 bytes of code.
        assert_eq!(shdr.sh_size, 30,
            "expected every instruction (DO + body + RTS) to be \
             48-bit; got section size {} instead of 30",
             shdr.sh_size);
    }

    /// A LoadImm of an external symbol's address has to end up in the
    /// full 48-bit Type 17 form, with an R_SHARC_PM32 relocation whose
    /// `r_offset` is in parcel units. The old code path emitted
    /// R_SHARC_ADDR32 (value 0x01, which seld patches as a raw
    /// 4-byte LE write at the byte offset) and let visa_encode
    /// compress a LoadImm of zero to the 4-byte Type 17b form. When
    /// seld then patched that slot with a 32-bit address, the write
    /// ran off the end of the 4-byte instruction and the opcode bytes
    /// were destroyed. This test pins the fix: the section must hold
    /// a single 6-byte LoadImm, the relocation must be PM32 at parcel
    /// offset 0, and the instruction bytes must match an unresolved
    /// 48-bit `Ureg = 0x0` Type 17 encoding.
    #[test]
    fn test_load_imm_of_external_is_48_bit_pm32_reloc() {
        let src = ".SECTION/PM seg_pmco;\n\
                   .GLOBAL _start;\n\
                   .EXTERN _global;\n\
                   _start: R0 = _global;\n\
                   RTS;\n\
                   .ENDSEG;\n";
        let data = assemble_source(src, true).expect("assemble");
        let hdr = selelf::elf::parse_header(&data).unwrap();

        // seg_pmco: one LoadImm (48-bit, 6 bytes) + RTS (48-bit, 6 bytes).
        let seg = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        assert_eq!(
            seg.sh_size, 12,
            "LoadImm of an extern must not compress; \
             expected 12 bytes of code, got {}",
            seg.sh_size,
        );
        // Bytes 0..6 are the LoadImm with a 0x0 immediate placeholder.
        let off = seg.sh_offset as usize;
        assert_eq!(
            &data[off..off + 6],
            &[0x0f, 0x00, 0x00, 0x00, 0x00, 0x00],
            "unresolved Type 17 LoadImm encoding",
        );

        // .rela must have exactly one entry: type PM32 (0x0c), offset 0
        // (parcel units), symbol `_global`.
        let rela = find_section_by_name(&data, &hdr, ".rela.seg_pmco")
            .expect(".rela.seg_pmco section not found");
        assert_eq!(rela.sh_size, 12, "expected exactly one rela entry");
        let rela_off = rela.sh_offset as usize;
        let r_offset = u32::from_le_bytes(
            data[rela_off..rela_off + 4].try_into().unwrap(),
        );
        let r_info = u32::from_le_bytes(
            data[rela_off + 4..rela_off + 8].try_into().unwrap(),
        );
        let r_type = r_info & 0xff;
        assert_eq!(r_offset, 0, "r_offset must be parcel 0 of seg_pmco");
        assert_eq!(
            r_type, selelf::elf::R_SHARC_PM32,
            "LoadImm of extern must use R_SHARC_PM32 (0x0c), got 0x{r_type:x}",
        );
    }

    /// A CALL of an external function must likewise be 48-bit (Branches
    /// already always are in VISA mode), and its relocation must be
    /// R_SHARC_PM24 at a parcel offset -- not R_SHARC_ADDR32 at a byte
    /// offset, which would patch bytes 0..3 and clobber the opcode.
    #[test]
    fn test_call_extern_is_pm24_reloc() {
        let src = ".SECTION/PM seg_pmco;\n\
                   .GLOBAL _start;\n\
                   .EXTERN _helper;\n\
                   _start: CALL _helper;\n\
                   RTS;\n\
                   .ENDSEG;\n";
        let data = assemble_source(src, true).expect("assemble");
        let hdr = selelf::elf::parse_header(&data).unwrap();

        let seg = find_section_by_name(&data, &hdr, "seg_pmco")
            .expect("seg_pmco section not found");
        assert_eq!(seg.sh_size, 12);

        let rela = find_section_by_name(&data, &hdr, ".rela.seg_pmco")
            .expect(".rela.seg_pmco section not found");
        assert_eq!(rela.sh_size, 12);
        let rela_off = rela.sh_offset as usize;
        let r_offset = u32::from_le_bytes(
            data[rela_off..rela_off + 4].try_into().unwrap(),
        );
        let r_info = u32::from_le_bytes(
            data[rela_off + 4..rela_off + 8].try_into().unwrap(),
        );
        let r_type = r_info & 0xff;
        assert_eq!(r_offset, 0, "r_offset must be parcel 0 of seg_pmco");
        assert_eq!(
            r_type, selelf::elf::R_SHARC_PM24,
            "CALL of extern must use R_SHARC_PM24 (0x0b), got 0x{r_type:x}",
        );
    }

    /// `CJUMP local_label` has to become an R_SHARC_PM24 relocation
    /// against a STB_LOCAL symbol: Type 25a has no PC-relative variant,
    /// so the only way to produce position-independent bytes is to let
    /// the linker patch the final address from an in-file symbol table
    /// entry. Without the local-symbol path this would either silently
    /// encode a section-relative value as absolute (wrong at runtime)
    /// or declare the local label as an undefined external (fails to
    /// link).
    #[test]
    fn test_cjump_local_label_emits_local_symbol() {
        let data = assemble_str(
            ".SECTION/PM seg_pmco;\n\
             .GLOBAL _start;\n\
             _start: NOP;\n\
             my_label: NOP;\n\
             CJUMP my_label;\n\
             .ENDSEG;\n",
        );
        let hdr = selelf::elf::parse_header(&data).unwrap();

        // The symbol table must contain `my_label` as a defined local
        // symbol pointing at word 1 of seg_pmco.
        let symtab_shdr = find_section_by_name(&data, &hdr, ".symtab")
            .expect(".symtab not found");
        let strtab_shdr = find_section_by_name(&data, &hdr, ".strtab")
            .expect(".strtab not found");
        let symtab_off = symtab_shdr.sh_offset as usize;
        let symtab_end = symtab_off + symtab_shdr.sh_size as usize;
        let strtab_off = strtab_shdr.sh_offset as usize;
        let strtab_end = strtab_off + strtab_shdr.sh_size as usize;
        let strtab = &data[strtab_off..strtab_end];

        let mut found = false;
        let mut cursor = symtab_off;
        while cursor + 16 <= symtab_end {
            let st_name = u32::from_le_bytes([
                data[cursor],
                data[cursor + 1],
                data[cursor + 2],
                data[cursor + 3],
            ]);
            let st_value = u32::from_le_bytes([
                data[cursor + 4],
                data[cursor + 5],
                data[cursor + 6],
                data[cursor + 7],
            ]);
            let st_info = data[cursor + 12];
            let st_shndx = u16::from_le_bytes([data[cursor + 14], data[cursor + 15]]);
            let name = selelf::elf::read_string_at(strtab, st_name);
            if name == "my_label" {
                let binding = st_info >> 4;
                assert_eq!(binding, selelf::elf::STB_LOCAL, "my_label must be STB_LOCAL");
                assert_ne!(st_shndx, 0, "my_label must be defined (not SHN_UNDEF)");
                assert_eq!(st_value, 1, "my_label must point at word 1 of seg_pmco");
                found = true;
                break;
            }
            cursor += 16;
        }
        assert!(found, "my_label not found in symbol table");
    }
}
