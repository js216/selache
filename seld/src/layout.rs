// SPDX-License-Identifier: GPL-3.0
// layout.rs --- Section placement into memory segments
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;

use selelf::elf::{SHT_NOBITS, SHT_PROGBITS};

use crate::error::{Error, Result};
use crate::ldf_ast::{Ldf, MemorySegment, OutputSection, SectionQualifier};
use crate::resolve::InputObject;

/// A section that has been placed at a final address.
#[derive(Debug, Clone)]
pub struct PlacedSection {
    pub output_name: String,
    pub object_idx: usize,
    pub input_section_idx: usize,
    pub address: u32,
    pub size: u32,
    pub data: Vec<u8>,
    pub is_nobits: bool,
    pub qualifier: SectionQualifier,
    pub target_memory: String,
}

/// The result of laying out all sections.
#[derive(Debug)]
pub struct Layout {
    pub placed: Vec<PlacedSection>,
    pub entry_address: Option<u32>,
}

/// Tracks allocation position within a memory segment.
struct SegmentCursor {
    name: String,
    end: u32,
    current: u32,
}

impl SegmentCursor {
    fn new(seg: &MemorySegment) -> Self {
        Self {
            name: seg.name.clone(),
            end: seg.end,
            current: seg.start,
        }
    }

    fn allocate(&mut self, size: u32, align: u32, section_name: &str) -> Result<u32> {
        let effective_align = if align == 0 { 1 } else { align };
        let aligned = (self.current + effective_align - 1) & !(effective_align - 1);
        if size > 0 && aligned + size - 1 > self.end {
            return Err(Error::LayoutOverflow {
                section: section_name.to_string(),
                segment: self.name.clone(),
            });
        }
        self.current = aligned + size;
        Ok(aligned)
    }
}

/// Perform section layout according to the LDF.
pub fn layout(
    ldf: &Ldf,
    objects: &[InputObject],
    variables: &HashMap<String, Vec<String>>,
    entry_name: Option<&str>,
) -> Result<Layout> {
    let mut placed = Vec::new();

    // Build segment cursors
    let mut cursors: HashMap<String, SegmentCursor> = HashMap::new();
    for seg in &ldf.memory {
        cursors.insert(seg.name.clone(), SegmentCursor::new(seg));
    }

    // Process each processor's sections
    for proc in &ldf.processors {
        for out_sec in &proc.sections {
            place_output_section(out_sec, objects, variables, &mut cursors, &mut placed)?;
        }
    }

    // Resolve entry point address
    let entry_address = if let Some(entry) = entry_name {
        // Look for the entry symbol in placed sections' objects
        find_entry_address(entry, objects, &placed)
    } else {
        // Check processor ENTRY directives
        ldf.processors
            .iter()
            .filter_map(|p| p.entry.as_deref())
            .find_map(|name| find_entry_address(name, objects, &placed))
    };

    Ok(Layout {
        placed,
        entry_address,
    })
}

fn place_output_section(
    out_sec: &OutputSection,
    objects: &[InputObject],
    variables: &HashMap<String, Vec<String>>,
    cursors: &mut HashMap<String, SegmentCursor>,
    placed: &mut Vec<PlacedSection>,
) -> Result<()> {
    let cursor = cursors.get_mut(&out_sec.target_memory).ok_or_else(|| {
        Error::Parse(format!(
            "output section `{}` targets unknown memory `{}`",
            out_sec.name, out_sec.target_memory
        ))
    })?;

    // Apply section alignment if specified
    let sec_align = out_sec.alignment.unwrap_or(1);

    for input_spec in &out_sec.input_sections {
        // Resolve which objects this spec refers to
        let obj_refs = resolve_object_refs(&input_spec.objects, variables);

        for (obj_idx, obj) in objects.iter().enumerate() {
            // Check if this object matches any of the references
            if !object_matches(&obj.path, &obj_refs) {
                continue;
            }

            // Find matching sections in this object
            for (sec_idx, sec_name) in obj.section_names.iter().enumerate() {
                if !input_spec.sections.contains(sec_name) {
                    continue;
                }

                let sec = &obj.sections[sec_idx];
                let is_nobits = sec.sh_type == SHT_NOBITS;

                if sec.sh_type != SHT_PROGBITS && sec.sh_type != SHT_NOBITS {
                    continue;
                }

                let size = sec.sh_size;
                let data = if is_nobits {
                    Vec::new()
                } else {
                    let off = sec.sh_offset as usize;
                    let sz = sec.sh_size as usize;
                    if off + sz > obj.data.len() {
                        continue;
                    }
                    obj.data[off..off + sz].to_vec()
                };

                let input_align = sec.sh_addralign;
                let effective_align = sec_align.max(input_align);
                let addr = cursor.allocate(size, effective_align, &out_sec.name)?;

                placed.push(PlacedSection {
                    output_name: out_sec.name.clone(),
                    object_idx: obj_idx,
                    input_section_idx: sec_idx,
                    address: addr,
                    size,
                    data,
                    is_nobits,
                    qualifier: out_sec.qualifier,
                    target_memory: out_sec.target_memory.clone(),
                });
            }
        }
    }

    Ok(())
}

/// Resolve a variable reference like `$OBJECTS` into a list of file paths/names.
fn resolve_object_refs(
    var_name: &str,
    variables: &HashMap<String, Vec<String>>,
) -> Vec<String> {
    resolve_object_refs_inner(var_name, variables, 0)
}

fn resolve_object_refs_inner(
    var_name: &str,
    variables: &HashMap<String, Vec<String>>,
    depth: usize,
) -> Vec<String> {
    if depth > 32 {
        return Vec::new();
    }
    if let Some(values) = variables.get(var_name) {
        let mut result = Vec::new();
        for v in values {
            if v.starts_with('$') {
                // Recursive variable reference
                result.extend(resolve_object_refs_inner(v, variables, depth + 1));
            } else {
                result.push(v.clone());
            }
        }
        result
    } else if var_name == "$COMMAND_LINE_OBJECTS" {
        // Special: matches all command-line objects
        vec!["*".to_string()]
    } else {
        vec![var_name.to_string()]
    }
}

/// Check if an object path matches any of the reference patterns.
fn object_matches(path: &str, refs: &[String]) -> bool {
    if refs.iter().any(|r| r == "*") {
        return true;
    }
    let basename = std::path::Path::new(path)
        .file_name()
        .and_then(|f| f.to_str())
        .unwrap_or(path);
    refs.iter().any(|r| r == path || r == basename)
}

fn find_entry_address(
    name: &str,
    objects: &[InputObject],
    placed: &[PlacedSection],
) -> Option<u32> {
    use selelf::elf::{SHN_UNDEF, SHT_SYMTAB, STB_GLOBAL, STB_WEAK};

    for (obj_idx, obj) in objects.iter().enumerate() {
        for sec in &obj.sections {
            if sec.sh_type != SHT_SYMTAB {
                continue;
            }
            let entsize = if sec.sh_entsize > 0 { sec.sh_entsize as usize } else { 16 };
            let strtab_idx = sec.sh_link as usize;
            if strtab_idx >= obj.sections.len() {
                continue;
            }
            let strtab_sec = &obj.sections[strtab_idx];
            let strtab_off = strtab_sec.sh_offset as usize;
            let strtab_sz = strtab_sec.sh_size as usize;
            if strtab_off + strtab_sz > obj.data.len() {
                continue;
            }
            let strtab = &obj.data[strtab_off..strtab_off + strtab_sz];

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
                let sym = selelf::elf::parse_symbol(&obj.data[off..], obj.endian);
                let sym_name = selelf::elf::read_string_at(strtab, sym.st_name);
                if sym_name != name {
                    continue;
                }
                let bind = sym.bind();
                if bind != STB_GLOBAL && bind != STB_WEAK {
                    continue;
                }
                if sym.st_shndx == SHN_UNDEF {
                    continue;
                }
                // Find the placed section for this symbol's section
                let sec_idx = sym.st_shndx as usize;
                for ps in placed {
                    if ps.object_idx == obj_idx && ps.input_section_idx == sec_idx {
                        return Some(ps.address + sym.st_value);
                    }
                }
            }
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ldf_ast::*;

    #[test]
    fn object_matches_wildcard() {
        assert!(object_matches("foo.doj", &["*".into()]));
    }

    #[test]
    fn object_matches_basename() {
        assert!(object_matches("/path/to/foo.doj", &["foo.doj".into()]));
    }

    #[test]
    fn object_matches_exact() {
        assert!(object_matches("foo.doj", &["foo.doj".into()]));
    }

    #[test]
    fn object_no_match() {
        assert!(!object_matches("foo.doj", &["bar.doj".into()]));
    }

    #[test]
    fn resolve_var_refs() {
        let mut vars = HashMap::new();
        vars.insert("$OBJS".to_string(), vec!["a.doj".into(), "b.doj".into()]);
        let refs = resolve_object_refs("$OBJS", &vars);
        assert_eq!(refs, vec!["a.doj", "b.doj"]);
    }

    #[test]
    fn resolve_command_line_objects() {
        let vars = HashMap::new();
        let refs = resolve_object_refs("$COMMAND_LINE_OBJECTS", &vars);
        assert_eq!(refs, vec!["*"]);
    }

    #[test]
    fn segment_cursor_basic() {
        let seg = MemorySegment {
            name: "test".into(),
            seg_type: SegType::Pm,
            mem_kind: MemKind::Ram,
            start: 0x1000,
            end: 0x1FFF,
            width: 48,
        };
        let mut cursor = SegmentCursor::new(&seg);
        let addr = cursor.allocate(0x100, 1, "sec").unwrap();
        assert_eq!(addr, 0x1000);
        let addr2 = cursor.allocate(0x100, 1, "sec2").unwrap();
        assert_eq!(addr2, 0x1100);
    }

    #[test]
    fn segment_cursor_alignment() {
        let seg = MemorySegment {
            name: "test".into(),
            seg_type: SegType::Dm,
            mem_kind: MemKind::Ram,
            start: 0x1000,
            end: 0x1FFF,
            width: 32,
        };
        let mut cursor = SegmentCursor::new(&seg);
        cursor.allocate(3, 1, "sec").unwrap();
        // Next alloc with alignment 4
        let addr = cursor.allocate(4, 4, "sec2").unwrap();
        assert_eq!(addr, 0x1004);
    }

    #[test]
    fn segment_cursor_overflow() {
        let seg = MemorySegment {
            name: "test".into(),
            seg_type: SegType::Pm,
            mem_kind: MemKind::Ram,
            start: 0x1000,
            end: 0x100F,
            width: 48,
        };
        let mut cursor = SegmentCursor::new(&seg);
        let result = cursor.allocate(0x20, 1, "big_sec");
        assert!(matches!(result.unwrap_err(), Error::LayoutOverflow { .. }));
    }

    #[test]
    fn recursive_var_resolution() {
        let mut vars = HashMap::new();
        vars.insert("$A".to_string(), vec!["$B".into(), "c.doj".into()]);
        vars.insert("$B".to_string(), vec!["b.doj".into()]);
        let refs = resolve_object_refs("$A", &vars);
        assert_eq!(refs, vec!["b.doj", "c.doj"]);
    }

    #[test]
    fn circular_var_refs_do_not_overflow() {
        let mut vars = HashMap::new();
        vars.insert("$A".to_string(), vec!["$B".into()]);
        vars.insert("$B".to_string(), vec!["$A".into()]);
        let refs = resolve_object_refs("$A", &vars);
        // Should return empty rather than stack overflow
        assert!(refs.is_empty());
    }

    #[test]
    fn section_alignment_honored() {
        // Allocate a 1-byte section, then allocate a section with align=8.
        // The second should land at an 8-aligned address.
        let seg = MemorySegment {
            name: "test".into(),
            seg_type: SegType::Dm,
            mem_kind: MemKind::Ram,
            start: 0x1000,
            end: 0x1FFF,
            width: 32,
        };
        let mut cursor = SegmentCursor::new(&seg);
        cursor.allocate(1, 1, "sec1").unwrap();
        // sec_align=1, but input section has sh_addralign=8 -> effective=8
        let addr = cursor.allocate(4, 8, "sec2").unwrap();
        assert_eq!(addr & 7, 0, "address 0x{addr:x} should be 8-aligned");
        assert_eq!(addr, 0x1008);
    }
}
