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
/// leading `/`).  We extract the qualifier (PM or DM) and the bare section
/// name (without trailing semicolons or whitespace).
fn parse_section_name(raw: &str) -> (String, bool) {
    let s = raw.trim().trim_end_matches(';').trim();
    let upper = s.to_uppercase();

    if upper.starts_with("PM") {
        let name = s[2..].trim();
        if !name.is_empty() {
            return (name.to_string(), true);
        }
    }
    if upper.starts_with("DM") {
        let name = s[2..].trim();
        if !name.is_empty() {
            return (name.to_string(), false);
        }
    }

    // No qualifier: default to non-PM.
    (s.to_string(), false)
}

/// Parse a `.VAR` body string like `_name = 0x12345678` or just `_name`.
/// Returns `(name, optional_init_value)`.
fn parse_var_body(raw: &str) -> (String, Option<u32>) {
    let s = raw.trim().trim_end_matches(';').trim();

    if let Some((lhs, rhs)) = s.split_once('=') {
        let name = lhs.trim().to_string();
        let val_str = rhs.trim();
        let val = parse_u32_literal(val_str);
        (name, val)
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
    instr: selelf::encode::Instruction,
    label_ref: String,
}

/// Resolve a symbolic label reference inside an instruction, replacing the
/// placeholder address (0) with the actual word offset from `label_map`.
fn resolve_labels(
    instr: &selelf::encode::Instruction,
    label_name: &str,
    label_map: &std::collections::HashMap<String, u32>,
) -> selelf::encode::Instruction {
    let addr = match label_map.get(label_name) {
        Some(&a) => a,
        None => {
            eprintln!("warning: undefined label: {label_name}");
            return *instr;
        }
    };

    use selelf::encode::{BranchTarget, Instruction};
    match *instr {
        Instruction::Branch { call, cond, target: BranchTarget::Absolute(0), delayed } => {
            Instruction::Branch { call, cond, target: BranchTarget::Absolute(addr), delayed }
        }
        Instruction::DoLoop { counter, end_pc: 0 } => {
            Instruction::DoLoop { counter, end_pc: addr }
        }
        Instruction::DoUntil { addr: 0, term } => {
            Instruction::DoUntil { addr, term }
        }
        Instruction::CJump { addr: 0, delayed } => {
            Instruction::CJump { addr, delayed }
        }
        other => other,
    }
}

/// Assemble an input .s file to an output .doj ELF object.
///
/// When `visa` is true, PM code sections use VISA variable-width encoding
/// (16/32/48-bit instructions) targeting ADSP-21569.
pub fn assemble_file(input: &str, output: &str) -> Result<()> {
    assemble_file_inner(input, output, false)
}

/// Assemble with VISA encoding for PM code sections.
pub fn assemble_file_visa(input: &str, output: &str) -> Result<()> {
    assemble_file_inner(input, output, true)
}

/// Build a label -> address map from all section symbols.
fn build_label_map(sections: &[(String, SectionData)]) -> std::collections::HashMap<String, u32> {
    let mut map = std::collections::HashMap::new();
    for (_, sec) in sections {
        for (name, offset) in &sec.symbols {
            map.insert(name.clone(), *offset);
        }
    }
    map
}

fn assemble_file_inner(input: &str, output: &str, visa: bool) -> Result<()> {
    let raw_src = std::fs::read_to_string(input)?;
    let src = preprocess(&raw_src);
    let mut parser = AsmParser::new(&src);
    let lines = parser.parse_all()?;

    let mut sections: Vec<(String, SectionData)> = Vec::new();
    let mut globals: Vec<String> = Vec::new();
    let mut externs: Vec<String> = Vec::new();
    let mut aliases: HashMap<String, String> =
        HashMap::new();
    let mut current_section_idx: Option<usize> = None;
    let mut pending: Vec<PendingInstr> = Vec::new();

    // Pass 1: encode instructions, build label map, track unresolved refs
    for line in &lines {
        process_directives(
            line,
            &mut sections,
            &mut globals,
            &mut externs,
            &mut aliases,
            &mut current_section_idx,
            visa,
        );

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
        }

        if let Some(instr) = &line.instruction {
            let idx = current_or_default(
                &mut sections, &mut current_section_idx, ".text", true, visa,
            );
            let sec = &mut sections[idx].1;
            let byte_offset = sec.code.len();
            if visa && sec.is_pm {
                let isa_bytes =
                    selelf::encode::encode(instr).expect("instruction encoding failed");
                let encoded = selelf::visa_encode::visa_encode(instr, &isa_bytes);
                let bytes = encoded.to_bytes();
                sec.parcel_count += encoded.parcels();
                sec.code.extend_from_slice(&bytes);
            } else {
                let bytes =
                    selelf::encode::encode(instr).expect("instruction encoding failed");
                sec.code.extend_from_slice(&bytes);
            }
            let byte_len = sec.code.len() - byte_offset;
            if let Some(ref label_ref) = line.label_ref {
                pending.push(PendingInstr {
                    section_idx: idx,
                    byte_offset,
                    byte_len,
                    instr: *instr,
                    label_ref: label_ref.clone(),
                });
            }
        }
    }

    // Pass 2: resolve label references in branch and loop instructions.
    if !pending.is_empty() {
        let label_map = build_label_map(&sections);
        for pi in &pending {
            let resolved = resolve_labels(&pi.instr, &pi.label_ref, &label_map);
            let sec = &mut sections[pi.section_idx].1;
            if visa && sec.is_visa {
                let isa_bytes =
                    selelf::encode::encode(&resolved).expect("instruction re-encode failed");
                let encoded = selelf::visa_encode::visa_encode(&resolved, &isa_bytes);
                let bytes = encoded.to_bytes();
                sec.code[pi.byte_offset..pi.byte_offset + pi.byte_len]
                    .copy_from_slice(&bytes);
            } else {
                let bytes =
                    selelf::encode::encode(&resolved).expect("instruction re-encode failed");
                sec.code[pi.byte_offset..pi.byte_offset + pi.byte_len]
                    .copy_from_slice(&bytes);
            }
        }
    }

    // Resolve .SET aliases into section symbol tables.
    resolve_aliases(&mut sections, &aliases);

    emit_elf(&sections, &globals, &externs, output)
}

/// Process directive and section-state effects from a parsed line.
fn process_directives(
    line: &ParsedLine,
    sections: &mut Vec<(String, SectionData)>,
    globals: &mut Vec<String>,
    externs: &mut Vec<String>,
    aliases: &mut HashMap<String, String>,
    current_section_idx: &mut Option<usize>,
    visa: bool,
) {
    let directive = match &line.directive {
        Some(d) => d,
        None => return,
    };

    match directive {
        Directive::Section(raw_name) => {
            let (name, is_pm) = parse_section_name(raw_name);
            let idx = ensure_section(sections, &name, is_pm, visa);
            *current_section_idx = Some(idx);
        }
        Directive::Global(name) => {
            if !globals.contains(name) {
                globals.push(name.clone());
            }
        }
        Directive::Extern(name) => {
            if !externs.contains(name) {
                externs.push(name.clone());
            }
        }
        Directive::Var(raw_body) => {
            let idx = current_or_default(
                sections, current_section_idx, ".data", false, visa,
            );
            let (var_name, init_val) = parse_var_body(raw_body);
            let sec = &mut sections[idx].1;
            let word_off = sec.word_offset();
            sec.symbols.push((var_name, word_off));

            if let Some(val) = init_val {
                sec.code.extend_from_slice(&val.to_le_bytes());
            }
        }
        Directive::Byte(data) => {
            let idx = current_or_default(
                sections, current_section_idx, ".text", true, visa,
            );
            sections[idx].1.code.extend_from_slice(data);
        }
        Directive::Align(boundary) => {
            if let Some(idx) = *current_section_idx {
                let sec = &mut sections[idx].1;
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
            aliases.insert(name.clone(), value.clone());
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

/// Write the accumulated sections and symbols to an ELF .doj file.
fn emit_elf(
    sections: &[(String, SectionData)],
    globals: &[String],
    externs: &[String],
    output: &str,
) -> Result<()> {
    let mut writer = selelf::elf_write::ElfWriter::new();

    // Add sections and collect their ELF section indices.
    let mut elf_indices: Vec<u16> = Vec::new();
    for (name, sec_data) in sections {
        let idx = if sec_data.is_visa {
            writer.add_text_section_visa(name, &sec_data.code)
        } else if sec_data.is_pm {
            writer.add_text_section(name, &sec_data.code)
        } else {
            writer.add_data_section(name, &sec_data.code)
        };
        elf_indices.push(idx);
    }

    // Register extern (undefined) symbols.
    for ext in externs {
        writer.add_undefined(ext);
    }

    // Register symbols per section.
    for (sec_idx, (_, sec_data)) in sections.iter().enumerate() {
        let elf_idx = elf_indices[sec_idx];
        for (sym_name, word_off) in &sec_data.symbols {
            let is_global = globals.iter().any(|g| g == sym_name);
            if is_global {
                if sec_data.is_pm {
                    writer.add_function(sym_name, elf_idx, *word_off, 0);
                } else {
                    writer.add_object(sym_name, elf_idx, *word_off, 0);
                }
            }
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

    let elf_data = writer.finish();
    std::fs::write(output, elf_data)?;
    Ok(())
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
        assert_eq!(val, Some(0x12345678));
    }

    #[test]
    fn test_parse_var_body_no_init() {
        let (name, val) = parse_var_body("_data;");
        assert_eq!(name, "_data");
        assert_eq!(val, None);
    }

    #[test]
    fn test_parse_var_body_decimal() {
        let (name, val) = parse_var_body("_count = 42;");
        assert_eq!(name, "_count");
        assert_eq!(val, Some(42));
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
        let decoded = selelf::disasm::decode_instruction(word);
        assert!(
            decoded.contains("0x000000"),
            "JUMP should target address 0 (_start), got: {decoded}"
        );
    }

    #[test]
    fn test_forward_branch_label() {
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
        let decoded = selelf::disasm::decode_instruction(word);
        assert!(
            decoded.contains("0x000002"),
            "JUMP should target address 2 (_end), got: {decoded}"
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
}
