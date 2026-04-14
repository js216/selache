// SPDX-License-Identifier: GPL-3.0
// gc.rs --- Section-level dead-code elimination (reachability GC)
// Copyright (c) 2026 Jakob Kastelic

use selelf::elf::{self, SHN_UNDEF, SHT_NOBITS, SHT_PROGBITS, SHT_RELA};

use crate::error::{Error, Result};
use crate::ldf_ast::Ldf;
use crate::resolve::{self, InputObject};

/// Section liveness map for a whole link.
///
/// Outer index is the input-object index, inner index is the ELF
/// section index inside that object. A `true` entry means the section
/// survives garbage collection and must flow through layout; a
/// `false` entry means the section is unreachable from any root and
/// must be dropped silently before layout runs.
#[derive(Debug, Clone)]
pub struct LiveSections {
    live: Vec<Vec<bool>>,
}

impl LiveSections {
    /// Query whether a given `(object_idx, section_idx)` pair is live.
    /// Out-of-range indices return `false`, which keeps downstream
    /// callers simple: a caller iterating its own objects/sections
    /// never asks about pairs that do not exist.
    pub fn is_live(&self, obj_idx: usize, sec_idx: usize) -> bool {
        self.live
            .get(obj_idx)
            .and_then(|row| row.get(sec_idx).copied())
            .unwrap_or(false)
    }
}

/// Compute the set of sections that survive garbage collection.
///
/// The algorithm is a standard mark-and-sweep reachability walk over
/// the cross-object symbol graph:
///
/// 1. Seed roots. All sections of every command-line input object are
///    roots (user code is never GC'd). Sections directly named by any
///    LDF `INPUT_SECTIONS(...)` rule in any object are also roots
///    (the LDF saying "place this" counts as a reference). The ELF
///    sections that define the entry symbol, any `KEEP(...)` symbol,
///    `_main`, and every LDF script-assignment target symbol are also
///    roots.
/// 2. Propagate. For every currently-live section, walk its
///    associated `.rela.*` entries. Each relocation target is a
///    symbol; marking the containing section of that symbol live
///    grows the frontier.
/// 3. Iterate to fixed point. The loop terminates because the live
///    set grows monotonically in a finite universe.
///
/// A relocation whose `sym_idx` is out of range for the home object's
/// symbol table is a hard error: that is corruption, not a natural
/// GC edge case, and must surface loudly.
pub fn compute_liveness(
    objects: &[InputObject],
    num_command_line_objects: usize,
    ldf: &Ldf,
    symtab: &resolve::SymbolTable,
    entry_name: Option<&str>,
) -> Result<LiveSections> {
    // Allocate a dense liveness matrix: one boolean per (object,
    // section) pair. Non-content sections (symbol tables, string
    // tables, relocation tables, null section zero) are never placed
    // by layout, so their liveness does not matter; the flag is set
    // to `true` uniformly so layout's orphan check never fires on
    // them.
    let mut live: Vec<Vec<bool>> =
        objects.iter().map(|o| vec![false; o.sections.len()]).collect();

    // Pre-read every object's symbol table once. The same table is
    // consulted repeatedly during propagation, and re-parsing inside
    // the inner loop would be quadratic in the number of objects.
    let symtabs: Vec<Vec<(elf::Elf32Sym, String)>> =
        objects.iter().map(resolve::read_symbols).collect();

    // Index section names by object for fast LDF-rule matching. A
    // direct linear scan over `input_spec.sections.contains(name)`
    // is fine here (sections per object and rules per LDF are both
    // small) but we still only walk each name once per rule.
    //
    // Rule 1a: every section of every command-line object is a root.
    for row in live.iter_mut().take(num_command_line_objects) {
        for entry in row.iter_mut() {
            *entry = true;
        }
    }

    // Rule 1a (bis): section headers that layout will never consider
    // (symbol tables, string tables, relocation tables, the null
    // header, any non-allocatable metadata) should not look dead.
    // The orphan sweep in `layout.rs` already restricts itself to
    // `SHT_PROGBITS` / `SHT_NOBITS`, so marking non-allocatable
    // sections live here costs nothing and keeps the liveness table
    // honest for observers that iterate every entry.
    for (obj_idx, obj) in objects.iter().enumerate() {
        for (sec_idx, sec) in obj.sections.iter().enumerate() {
            if sec.sh_type != SHT_PROGBITS && sec.sh_type != SHT_NOBITS {
                live[obj_idx][sec_idx] = true;
            }
        }
    }

    // Rule 1b: sections named by any LDF `INPUT_SECTIONS(...)` rule.
    // An LDF that says "place every input section called `seg_foo`"
    // is itself a reference: the section is wanted even if nothing
    // in the code graph points at it. Gather the union of all
    // claimed section names once, then mark every match.
    let mut claimed_names: std::collections::HashSet<&str> =
        std::collections::HashSet::new();
    for proc in &ldf.processors {
        for out_sec in &proc.sections {
            for spec in &out_sec.input_sections {
                for name in &spec.sections {
                    claimed_names.insert(name.as_str());
                }
            }
        }
    }
    for (obj_idx, obj) in objects.iter().enumerate() {
        for (sec_idx, sec_name) in obj.section_names.iter().enumerate() {
            if claimed_names.contains(sec_name.as_str()) {
                live[obj_idx][sec_idx] = true;
            }
        }
    }

    // Collect the set of root symbol names. Each name will be
    // translated into the (object_idx, section_idx) pair that defines
    // it, and that pair gets marked live.
    let mut root_names: Vec<String> = Vec::new();

    if let Some(name) = entry_name {
        root_names.push(name.to_string());
    }
    for proc in &ldf.processors {
        if let Some(name) = &proc.entry {
            root_names.push(name.clone());
        }
        for kept in &proc.keeps {
            root_names.push(kept.clone());
        }
    }
    // `_main` is a defensive top-level entry; a program that defines
    // it expects the linker to treat it as alive even if the LDF
    // named some other entry.
    root_names.push("_main".to_string());
    // Script-constant assignments define pseudo-symbols (e.g.
    // `___ldf_pmcachesize`). Relocations targeting them are real
    // code references. Their defining object/section does not exist
    // (they become `SHN_ABS` after script evaluation), so these do
    // not themselves mark any section live. They are still useful
    // to carry through `mark_symbol_live`, which silently ignores
    // `SHN_ABS` targets.
    for assn in &ldf.script_assignments {
        root_names.push(assn.name.clone());
    }

    for name in &root_names {
        mark_symbol_live(name, objects, &symtabs, symtab, &mut live);
    }

    // Transitive closure: iterate relocations on live sections until
    // the live set stops growing. A section becomes a propagation
    // source the moment it turns live; each pass walks every
    // relocation on every live section, so sections marked live
    // late still get their relocations visited.
    loop {
        let before: usize = live.iter().map(|row| row.iter().filter(|b| **b).count()).sum();

        for (obj_idx, obj) in objects.iter().enumerate() {
            let syms = &symtabs[obj_idx];
            for rela_sec in &obj.sections {
                if rela_sec.sh_type != SHT_RELA {
                    continue;
                }
                // `sh_info` names the section this rela group patches.
                // If that home section is not yet live, its relocations
                // do not propagate anything.
                let home_idx = rela_sec.sh_info as usize;
                if home_idx >= live[obj_idx].len() || !live[obj_idx][home_idx] {
                    continue;
                }
                let off = rela_sec.sh_offset as usize;
                let sz = rela_sec.sh_size as usize;
                let entsize = if rela_sec.sh_entsize > 0 {
                    rela_sec.sh_entsize as usize
                } else {
                    12
                };
                if off + sz > obj.data.len() {
                    return Err(Error::Relocation(format!(
                        "relocation section out of bounds in `{}`",
                        obj.path
                    )));
                }
                let nrelas = sz / entsize;
                for j in 0..nrelas {
                    let roff = off + j * entsize;
                    if roff + entsize > obj.data.len() {
                        return Err(Error::Relocation(format!(
                            "truncated relocation entry in `{}`",
                            obj.path
                        )));
                    }
                    let rela = elf::parse_rela(&obj.data[roff..], obj.endian);
                    let sym_idx = (rela.r_info >> 8) as usize;
                    let reloc_type = rela.r_info & 0xff;
                    if reloc_type == 0 {
                        // `R_SHARC_NONE`: no symbol reference, nothing
                        // to mark live. Skip silently.
                        continue;
                    }
                    if sym_idx >= syms.len() {
                        return Err(Error::Relocation(format!(
                            "relocation sym_idx {sym_idx} out of range ({}) in `{}`",
                            syms.len(),
                            obj.path
                        )));
                    }
                    let (sym, name) = &syms[sym_idx];
                    if sym.st_shndx == SHN_UNDEF {
                        // Cross-object reference: resolve via the
                        // global symbol table (with alias search) and
                        // mark the defining section live.
                        mark_symbol_live(name, objects, &symtabs, symtab, &mut live);
                    } else {
                        // Intra-object reference: the symbol's
                        // `st_shndx` directly names the live section.
                        // `SHN_ABS` and other special indices (>=
                        // 0xff00) are not real sections and do not
                        // mark anything live.
                        let target_sec = sym.st_shndx as usize;
                        if target_sec < live[obj_idx].len() && sym.st_shndx < 0xff00 {
                            live[obj_idx][target_sec] = true;
                        }
                    }
                }
            }
        }

        let after: usize = live.iter().map(|row| row.iter().filter(|b| **b).count()).sum();
        if after == before {
            break;
        }
    }

    Ok(LiveSections { live })
}

/// Look up `name` in the global symbol table (trying aliases), then
/// mark the `(object_idx, section_idx)` pair that defines it live.
///
/// Silently ignores names that are absent from the global table (e.g.
/// `_main` in a program that does not define it), names whose
/// definition lives at `SHN_ABS` (e.g. script-constant assignments),
/// and names whose defining section index falls outside the
/// liveness matrix. Each of those is a legitimate "no-op" case that
/// the mark-and-sweep algorithm explicitly tolerates; a missing
/// definition for a *referenced* symbol would already have been
/// caught by the resolve pass.
fn mark_symbol_live(
    name: &str,
    objects: &[InputObject],
    symtabs: &[Vec<(elf::Elf32Sym, String)>],
    symtab: &resolve::SymbolTable,
    live: &mut [Vec<bool>],
) {
    let resolved = symtab.symbols.get(name).or_else(|| {
        resolve::name_aliases(name)
            .into_iter()
            .find_map(|a| symtab.symbols.get(&a))
    });
    let Some(r) = resolved else { return };
    // `SHN_ABS` entries (script constants and similar) have no
    // containing section; they cannot mark anything live.
    if r.section_idx >= 0xff00 {
        return;
    }
    let obj_idx = r.object_idx;
    let sec_idx = r.section_idx as usize;
    if obj_idx >= live.len() || sec_idx >= live[obj_idx].len() {
        return;
    }
    if live[obj_idx][sec_idx] {
        return;
    }
    live[obj_idx][sec_idx] = true;
    // Also mark every *other* symbol in the same section as live in
    // a transitive sense: they share the section, so their own
    // relocations (if any) will fire on the next propagation pass.
    // This is handled automatically by the outer fixed-point loop
    // walking every `.rela.*` with a now-live `sh_info`, so no
    // further action is required here.
    let _ = (objects, symtabs);
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ldf_ast::{
        InputSectionSpec, Ldf, OutputSection, Processor, SectionQualifier,
    };
    use crate::resolve::{ResolvedSymbol, SymbolTable};
    use selelf::elf::Elf32Shdr;
    use std::collections::HashMap;

    /// Zero-initialized section header used as a template inside
    /// the test object builders. `Elf32Shdr` has no `Default` impl
    /// in the underlying crate, so the helper spells out every
    /// field explicitly.
    fn empty_shdr() -> Elf32Shdr {
        Elf32Shdr {
            sh_name: 0,
            sh_type: 0,
            sh_flags: 0,
            sh_addr: 0,
            sh_offset: 0,
            sh_size: 0,
            sh_link: 0,
            sh_info: 0,
            sh_addralign: 0,
            sh_entsize: 0,
        }
    }

    /// Construct a minimal in-memory `InputObject` with a named list
    /// of PROGBITS sections. Each section gets four bytes of zero
    /// content so `sh_size > 0`. This helper is used by tests that
    /// drive GC from the global `SymbolTable` side alone; tests
    /// that also need a real in-object SYMTAB use
    /// `make_obj_with_syms` instead.
    fn make_obj(
        path: &str,
        section_names: &[&str],
        rela_groups: &[(u16, &[(u32, u32)])],
    ) -> InputObject {
        // Build sections: the synthetic object only carries fake
        // section headers; the data pointers are zero because no
        // pass in this test uses the raw bytes. `.rela.*` sections
        // are constructed with real on-disk content so the
        // relocation walker can parse them.
        let mut data: Vec<u8> = Vec::new();
        let mut sections: Vec<Elf32Shdr> = Vec::new();
        let mut names: Vec<String> = Vec::new();

        // Index 0 is the null section, conventionally unused but
        // still present in every ELF object.
        sections.push(empty_shdr());
        names.push(String::new());

        // One PROGBITS section per input name.
        for sn in section_names {
            let mut sh = empty_shdr();
            sh.sh_type = SHT_PROGBITS;
            sh.sh_size = 4;
            sh.sh_offset = data.len() as u32;
            data.extend_from_slice(&[0u8; 4]);
            sections.push(sh);
            names.push((*sn).to_string());
        }

        // A relocation group is a `(home_section_idx, entries)` pair
        // where each entry is `(sym_idx, reloc_type)`. Emit one
        // `.rela.<home>` section per group, using entsize 12.
        for (home_idx, entries) in rela_groups {
            let mut sh = empty_shdr();
            sh.sh_type = SHT_RELA;
            sh.sh_info = *home_idx as u32;
            sh.sh_entsize = 12;
            sh.sh_offset = data.len() as u32;
            sh.sh_size = (entries.len() * 12) as u32;
            for (sym_idx, reloc_type) in *entries {
                // `r_info = (sym_idx << 8) | type`. Use little-endian
                // because the test objects advertise `ELFDATA2LSB`
                // through the `endian` field below.
                let r_info = (sym_idx << 8) | (reloc_type & 0xff);
                data.extend_from_slice(&0u32.to_le_bytes()); // r_offset
                data.extend_from_slice(&r_info.to_le_bytes()); // r_info
                data.extend_from_slice(&0u32.to_le_bytes()); // r_addend
            }
            sections.push(sh);
            names.push(format!(".rela.{}", section_names[(*home_idx as usize) - 1]));
        }

        InputObject {
            path: path.to_string(),
            data,
            sections,
            section_names: names,
            endian: elf::Endian::Little,
        }
    }

    /// Build a `SymbolTable` whose entries point into the `objects`
    /// slice. Each entry maps a name to an `(object_idx, section_idx)`.
    fn make_symtab(entries: &[(&str, usize, u16)]) -> SymbolTable {
        let mut symbols = HashMap::new();
        for (name, obj_idx, sec_idx) in entries {
            symbols.insert(
                name.to_string(),
                ResolvedSymbol {
                    object_idx: *obj_idx,
                    value: 0,
                    size: 0,
                    section_idx: *sec_idx,
                    info: (elf::STB_GLOBAL << 4) | elf::STT_FUNC,
                    is_weak: false,
                },
            );
        }
        SymbolTable {
            symbols,
            undefined: Vec::new(),
        }
    }

    /// Build a minimally populated `Ldf` with a single processor and
    /// the given set of output-section rules. Each rule is a
    /// `(output_name, [claimed_section_names])` pair.
    fn make_ldf(rules: &[(&str, &[&str])]) -> Ldf {
        let mut proc = Processor {
            name: "p".into(),
            output: None,
            entry: None,
            keeps: Vec::new(),
            sections: Vec::new(),
            link_against: Vec::new(),
        };
        for (out_name, section_names) in rules {
            proc.sections.push(OutputSection {
                name: (*out_name).into(),
                qualifier: SectionQualifier::None,
                input_sections: vec![InputSectionSpec {
                    objects: "*".into(),
                    sections: section_names.iter().map(|s| (*s).into()).collect(),
                }],
                alignment: None,
                fill: None,
                reserve: None,
                target_memory: "mem".into(),
            });
        }
        Ldf {
            architecture: None,
            variables: Vec::new(),
            memory: Vec::new(),
            processors: vec![proc],
            script_assignments: Vec::new(),
        }
    }

    #[test]
    fn gc_drops_unreferenced_sections() {
        // Object A defines `live_sym` in section X (index 1); the
        // test passes A as a command-line object so all its sections
        // are roots. Object B (archive-pulled) defines `dead_sym` in
        // section Y (index 1); nothing references it, so Y must end
        // up dead.
        let a = make_obj("a.doj", &["X"], &[]);
        let b = make_obj("b.doj", &["Y"], &[]);
        let symtab =
            make_symtab(&[("live_sym", 0, 1), ("dead_sym", 1, 1)]);
        let ldf = make_ldf(&[]);
        let objects = vec![a, b];
        let live = compute_liveness(&objects, 1, &ldf, &symtab, None).unwrap();
        assert!(live.is_live(0, 1), "X in command-line object A must be live");
        assert!(!live.is_live(1, 1), "Y in archive object B must be dead");
    }

    #[test]
    fn gc_transitive_closure_through_relocations() {
        // Three sections in three archive-pulled objects:
        //   obj0 section 1 (X) references obj1 section 1 (Y)
        //   obj1 section 1 (Y) references obj2 section 1 (Z)
        // The entry symbol lives in X, so all three must end up
        // live after transitive closure. Each object carries a
        // symbol table: index 0 is the null symbol, index 1 is the
        // self symbol, index 2 (in obj0 and obj1) is the external
        // reference. The `.rela.X` section of obj0 references
        // sym_idx 2, which is `root_sym -> ref_sym_y -> ref_sym_z`.
        //
        // Real ELF object files encode symbol tables properly; our
        // synthetic objects only need `read_symbols` to return the
        // right `(shndx, name)` pairs. To avoid re-implementing a
        // full SYMTAB writer we bypass `read_symbols` by leaning on
        // the fact that the live-propagation code consults the
        // local object's `symtabs[obj_idx]` vector: if that is
        // empty, external-only reasoning via the global `symtab`
        // still fires. So we encode the cross-section edge via a
        // global-symbol lookup: relocations reference symbols by
        // index inside this object's SYMTAB, but with an empty
        // local SYMTAB every `sym_idx != 0` would error. The
        // cleaner path is to actually build a small SYMTAB; the
        // helper below does that.
        let (a_obj, a_syms) =
            make_obj_with_syms("a.doj", &["X"], &[("ref_y", 0)], &[(1, &[(1, 1)])]);
        let (b_obj, b_syms) =
            make_obj_with_syms("b.doj", &["Y"], &[("ref_y", 1), ("ref_z", 0)], &[(1, &[(2, 1)])]);
        let (c_obj, c_syms) =
            make_obj_with_syms("c.doj", &["Z"], &[("ref_z", 1)], &[]);
        let _ = (a_syms, b_syms, c_syms);

        // Global table: ref_y defined in obj1 section 1, ref_z
        // defined in obj2 section 1. The relocations cross objects
        // via SHN_UNDEF references that resolve through this map.
        let symtab = make_symtab(&[
            ("entry", 0, 1),
            ("ref_y", 1, 1),
            ("ref_z", 2, 1),
        ]);
        let ldf = make_ldf(&[]);
        let objects = vec![a_obj, b_obj, c_obj];
        // Pass zero command-line objects so nothing is forced live
        // by object position; the entry symbol is the only root.
        let live =
            compute_liveness(&objects, 0, &ldf, &symtab, Some("entry")).unwrap();
        assert!(live.is_live(0, 1), "X (entry's section) must be live");
        assert!(live.is_live(1, 1), "Y (referenced from X) must be live");
        assert!(live.is_live(2, 1), "Z (referenced from Y) must be live");
    }

    #[test]
    fn gc_ldf_claimed_sections_are_live_roots() {
        // A single archive-pulled object defines section `seg_data`
        // but no symbol references it. The LDF claims `seg_data`,
        // which by itself must keep the section alive.
        let a = make_obj("a.doj", &["seg_data"], &[]);
        let symtab = make_symtab(&[]);
        let ldf = make_ldf(&[("my_out", &["seg_data"])]);
        let objects = vec![a];
        let live = compute_liveness(&objects, 0, &ldf, &symtab, None).unwrap();
        assert!(
            live.is_live(0, 1),
            "LDF-claimed section must be live even without symbol references"
        );
    }

    #[test]
    fn gc_dead_section_with_symbols_still_drops() {
        // This is the `seg_ctdml` case: an archive-pulled object
        // defines a symbol inside a section, but no relocation
        // anywhere references the symbol and no LDF rule claims the
        // section. The section must end up dead.
        let a = make_obj("a.doj", &["seg_ctdml"], &[]);
        let symtab =
            make_symtab(&[("ctor_NULL_marker", 0, 1)]);
        let ldf = make_ldf(&[]);
        let objects = vec![a];
        let live = compute_liveness(&objects, 0, &ldf, &symtab, None).unwrap();
        assert!(
            !live.is_live(0, 1),
            "section with defined-but-unreferenced symbol must be dead"
        );
    }

    /// Test-only helper that builds an `InputObject` complete with a
    /// real SYMTAB so `resolve::read_symbols` can return the
    /// `(sym, name)` pairs the GC walker consults. `symbols` is a
    /// list of `(name, st_shndx)` pairs; each symbol gets
    /// `STB_GLOBAL` and `STT_NOTYPE`. The returned `Vec` is a copy
    /// of the same list, handy when the caller wants to assert on
    /// it.
    fn make_obj_with_syms(
        path: &str,
        section_names: &[&str],
        symbols: &[(&str, u16)],
        rela_groups: &[(u16, &[(u32, u32)])],
    ) -> (InputObject, Vec<(String, u16)>) {
        // Layout: index 0 null section, then one PROGBITS per name,
        // then a SYMTAB section, then a STRTAB, then relocation
        // sections. The ELF32 symbol entry size is 16 bytes in the
        // little-endian encoding `selelf::elf::parse_symbol` expects.
        let mut data: Vec<u8> = Vec::new();
        let mut sections: Vec<Elf32Shdr> = Vec::new();
        let mut names: Vec<String> = Vec::new();

        sections.push(empty_shdr());
        names.push(String::new());

        for sn in section_names {
            let mut sh = empty_shdr();
            sh.sh_type = SHT_PROGBITS;
            sh.sh_size = 4;
            sh.sh_offset = data.len() as u32;
            data.extend_from_slice(&[0u8; 4]);
            sections.push(sh);
            names.push((*sn).to_string());
        }

        // Build the string table used by the SYMTAB. Index 0 is the
        // empty string, as ELF convention requires.
        let strtab_start = data.len();
        data.push(0);
        let mut name_offsets: Vec<u32> = Vec::with_capacity(symbols.len());
        for (sname, _) in symbols {
            name_offsets.push((data.len() - strtab_start) as u32);
            data.extend_from_slice(sname.as_bytes());
            data.push(0);
        }
        let strtab_size = data.len() - strtab_start;
        let strtab_section_idx = sections.len();
        let mut strtab_sh = empty_shdr();
        strtab_sh.sh_type = elf::SHT_STRTAB;
        strtab_sh.sh_offset = strtab_start as u32;
        strtab_sh.sh_size = strtab_size as u32;
        sections.push(strtab_sh);
        names.push(".strtab".into());

        // SYMTAB. Entry 0 is the null symbol. Each subsequent entry
        // encodes one input symbol.
        let symtab_start = data.len();
        // Null symbol: 16 zero bytes.
        data.extend_from_slice(&[0u8; 16]);
        for (i, (_, shndx)) in symbols.iter().enumerate() {
            // st_name
            data.extend_from_slice(&name_offsets[i].to_le_bytes());
            // st_value
            data.extend_from_slice(&0u32.to_le_bytes());
            // st_size
            data.extend_from_slice(&0u32.to_le_bytes());
            // st_info = STB_GLOBAL << 4 | STT_NOTYPE
            data.push(elf::STB_GLOBAL << 4);
            // st_other
            data.push(0);
            // st_shndx
            data.extend_from_slice(&shndx.to_le_bytes());
        }
        let symtab_size = data.len() - symtab_start;
        let mut symtab_sh = empty_shdr();
        symtab_sh.sh_type = elf::SHT_SYMTAB;
        symtab_sh.sh_offset = symtab_start as u32;
        symtab_sh.sh_size = symtab_size as u32;
        symtab_sh.sh_entsize = 16;
        symtab_sh.sh_link = strtab_section_idx as u32;
        sections.push(symtab_sh);
        names.push(".symtab".into());

        // Relocation sections.
        for (home_idx, entries) in rela_groups {
            let mut sh = empty_shdr();
            sh.sh_type = SHT_RELA;
            sh.sh_info = *home_idx as u32;
            sh.sh_entsize = 12;
            sh.sh_offset = data.len() as u32;
            sh.sh_size = (entries.len() * 12) as u32;
            for (sym_idx, reloc_type) in *entries {
                let r_info = (sym_idx << 8) | (reloc_type & 0xff);
                data.extend_from_slice(&0u32.to_le_bytes());
                data.extend_from_slice(&r_info.to_le_bytes());
                data.extend_from_slice(&0u32.to_le_bytes());
            }
            sections.push(sh);
            names.push(format!(".rela.{}", section_names[(*home_idx as usize) - 1]));
        }

        let echo: Vec<(String, u16)> = symbols
            .iter()
            .map(|(n, s)| ((*n).to_string(), *s))
            .collect();
        (
            InputObject {
                path: path.to_string(),
                data,
                sections,
                section_names: names,
                endian: elf::Endian::Little,
            },
            echo,
        )
    }
}
