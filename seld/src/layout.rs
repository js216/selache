// SPDX-License-Identifier: GPL-3.0
// layout.rs --- Section placement into memory segments
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;

use selelf::elf::{SHT_NOBITS, SHT_PROGBITS};

use crate::error::{Error, Result};
use crate::gc::LiveSections;
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
    /// Memory region name -> (start, end) in byte addresses. End is
    /// inclusive of the last usable byte. Populated from the LDF
    /// MEMORY block; makes region endpoints available to the script
    /// expression evaluator for symbols like `mem_heap` and
    /// `MEMORY_START(...)`.
    pub memory_regions: std::collections::HashMap<String, (u32, u32)>,
    /// Reserve name -> (start byte address, length in bytes). A
    /// `RESERVE` inside an output section carves out a fixed block at
    /// the current cursor position in the target segment. A
    /// subsequent `RESERVE_EXPAND` grows the block to cover whatever
    /// space is still free after normal placement completes. The
    /// evaluator consults this map when `stack_and_heap_in_<x>` or
    /// `stack_and_heap_in_<x>_length` appear in constant expressions.
    pub reserves: std::collections::HashMap<String, (u32, u32)>,
}

/// Tracks allocation position within a memory segment.
struct SegmentCursor {
    current: u32,
    /// Inclusive last unit address of the segment. `end` is the last
    /// usable unit, not a half-open limit; a section that ends
    /// exactly at `end + 1` (i.e. `aligned + size_units == end + 1`)
    /// still fits.
    end: u32,
    /// Segment name, used in overflow error messages.
    name: String,
    /// Bytes per addressable unit inside this segment. SHARC memory
    /// segments with `WIDTH(48)` (program memory) address 48-bit
    /// instructions; the ELF section data for that segment is six
    /// bytes per unit. `WIDTH(32)` data segments store one
    /// 32-bit word per unit (four bytes per unit). `WIDTH(8)` byte
    /// segments address individual bytes. An input section's
    /// `sh_size` comes from ELF in bytes, so the allocator converts
    /// it to unit count before comparing to `START`/`END`, which are
    /// in unit addresses.
    byte_stride: u32,
}

impl SegmentCursor {
    fn new(seg: &MemorySegment) -> Self {
        Self {
            current: seg.start,
            end: seg.end,
            name: seg.name.clone(),
            byte_stride: byte_stride_for_width(seg.width),
        }
    }

    fn allocate(&mut self, size_bytes: u32, align: u32, section_name: &str) -> Result<u32> {
        let effective_align = if align == 0 { 1 } else { align };
        let aligned = (self.current + effective_align - 1) & !(effective_align - 1);
        // Convert the byte size into unit count (words for PM,
        // dwords for DM, bytes for BW). Round up so that a
        // partially-filled final unit is still counted.
        let size_units = size_bytes.div_ceil(self.byte_stride.max(1));
        // The segment spans `[start, end]` inclusive in unit
        // addresses. The section occupies `[aligned, aligned +
        // size_units - 1]`, so the first unit past the section is
        // `aligned + size_units`. That value must be no greater
        // than `end + 1` for the section to fit. A section that
        // does not fit is a hard error: the caller gets a precise
        // message naming the section, the target segment, the
        // requested unit count, and the number of units still
        // available from the current cursor.
        let end_exclusive = self.end.saturating_add(1);
        if aligned > end_exclusive || size_units > end_exclusive - aligned {
            let remaining = end_exclusive.saturating_sub(aligned);
            return Err(Error::LayoutOverflow {
                section: section_name.to_string(),
                segment: self.name.clone(),
                requested: size_units,
                remaining,
            });
        }
        self.current = aligned + size_units;
        Ok(aligned)
    }
}

/// Translate a memory segment `WIDTH(n)` declaration to the number of
/// bytes that occupy one addressable unit of that segment in the
/// corresponding ELF section data. Unknown widths fall back to 1 so
/// the allocator remains usable on unusual memory definitions.
fn byte_stride_for_width(width: u32) -> u32 {
    match width {
        0..=8 => 1,
        9..=16 => 2,
        17..=32 => 4,
        33..=48 => 6,
        49..=64 => 8,
        _ => 1,
    }
}

/// Perform section layout according to the LDF.
///
/// `live_sections` is the result of the preceding GC pass. Any
/// `(object, section)` pair not marked live is silently skipped by
/// both the placement loop and the orphan sweep: a dead section is
/// not an error, it is simply not emitted. A live section that no
/// LDF rule claims is still the `OrphanSection` error path.
pub fn layout(
    ldf: &Ldf,
    objects: &[InputObject],
    variables: &HashMap<String, Vec<String>>,
    entry_name: Option<&str>,
    live_sections: &LiveSections,
) -> Result<Layout> {
    let mut placed = Vec::new();

    // Build segment cursors
    let mut cursors: HashMap<String, SegmentCursor> = HashMap::new();
    for seg in &ldf.memory {
        cursors.insert(seg.name.clone(), SegmentCursor::new(seg));
    }

    // Memory region byte-address map. Converts the segment's unit
    // addresses into byte addresses suitable for the script
    // evaluator. A `WIDTH(48)` PM segment with `START(0x00090000)`
    // yields byte range `0x00090000*6 ... 0x000900a7*6 + 5`; the
    // conversion keeps the start unchanged so addresses resolved by
    // relocation and addresses seen by host tools line up without
    // extra translation. End is inclusive.
    let mut memory_regions: HashMap<String, (u32, u32)> = HashMap::new();
    for seg in &ldf.memory {
        memory_regions.insert(seg.name.clone(), (seg.start, seg.end));
    }

    // Track which (object_idx, section_idx) pairs have already been
    // placed by an earlier output-section rule. Placement is
    // winner-takes-all: the first LDF output-section rule to claim
    // an input section gets to own it, and every later rule ignores
    // that section. Without this, a wildcarded `$OBJS_LIBS(seg_pmco)`
    // spec placed in several output sections would duplicate every
    // library member's `seg_pmco` into each of them, overflowing the
    // destination memory segments.
    let mut claimed: std::collections::HashSet<(usize, usize)> =
        std::collections::HashSet::new();

    // Reserve allocations. Keyed by reserve base name; the value is a
    // mutable (start, length) pair in byte units. Each entry is
    // initialized when the first `RESERVE(name, ...)` directive fires
    // and may be grown by a later `RESERVE_EXPAND(name, ...)`.
    let mut reserves: HashMap<String, (u32, u32)> = HashMap::new();

    // Process each processor's sections
    for proc in &ldf.processors {
        for out_sec in &proc.sections {
            // Allocate the reserve (if any) for this output section
            // before claiming input sections. RESERVE grabs space at
            // the current cursor position; RESERVE_EXPAND grows the
            // existing reservation to absorb whatever space remains
            // in the same target segment.
            if let Some(r) = &out_sec.reserve {
                allocate_reserve(r, &out_sec.target_memory, &mut cursors, &mut reserves)?;
            }
            place_output_section(
                out_sec,
                objects,
                variables,
                &mut cursors,
                &mut placed,
                &mut claimed,
                live_sections,
            )?;
        }
    }

    // Second pass: handle `RESERVE_EXPAND` directives. A plain
    // RESERVE carved out a fixed chunk of its target segment above.
    // An expanding reserve also wants to soak up whatever space is
    // still free in the same segment after every placement and
    // every later plain RESERVE has run. Expanding happens here,
    // after the full placement loop, so that the reserve learns the
    // true remaining capacity.
    for proc in &ldf.processors {
        for out_sec in &proc.sections {
            let Some(r) = &out_sec.reserve else { continue };
            if !r.expand || r.name.is_empty() {
                continue;
            }
            let Some(entry) = reserves.get_mut(&r.name) else { continue };
            let Some(cur) = cursors.get_mut(&out_sec.target_memory) else { continue };
            // The current cursor position marks the first byte
            // beyond all claimed reserves and placements. The
            // segment extends through `end` (inclusive, in unit
            // addresses). Convert both to bytes and grow the
            // reserve to cover the unclaimed tail. A reserve that
            // already starts past the cursor (because it was carved
            // before later placements) keeps its original start and
            // only its length changes.
            let end_byte_exclusive = cur.end.saturating_add(1)
                .saturating_mul(cur.byte_stride);
            let start_byte = entry.0;
            if end_byte_exclusive > start_byte {
                entry.1 = end_byte_exclusive - start_byte;
            }
            // Advance the cursor past the expanded reserve so later
            // output sections targeting the same segment do not
            // reclaim the space.
            cur.current = cur.end.saturating_add(1);
        }
    }

    // Orphan detection: any *live* PROGBITS / NOBITS input section
    // that carries non-trivial content but was never claimed by an
    // LDF output rule is a hard link failure. A section that is
    // dead under garbage collection is not an orphan; it was
    // already silently dropped above by the `is_live` check in
    // `place_output_section`, which never attempted to place it in
    // the first place. Live-but-unplaced still fires: that means
    // the LDF has no rule for a section the code graph actually
    // needs, which is a real LDF gap.
    for (obj_idx, obj) in objects.iter().enumerate() {
        for (sec_idx, sec_name) in obj.section_names.iter().enumerate() {
            if claimed.contains(&(obj_idx, sec_idx)) {
                continue;
            }
            if !live_sections.is_live(obj_idx, sec_idx) {
                continue;
            }
            let sec = &obj.sections[sec_idx];
            let is_nobits = sec.sh_type == SHT_NOBITS;
            if sec.sh_type != SHT_PROGBITS && !is_nobits {
                continue;
            }
            if sec.sh_size == 0 {
                continue;
            }
            return Err(Error::OrphanSection {
                section: sec_name.clone(),
                object: obj.path.clone(),
            });
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
        memory_regions,
        reserves,
    })
}

/// Allocate a RESERVE directive inside an output section. The
/// reserve's initial length comes from the LDF (which is zero for
/// RESERVE_EXPAND, which will be grown to fill in the post-pass);
/// its alignment is also specified. The allocation advances the
/// target cursor so subsequent input-section placements do not
/// overlap the reservation. A zero-name reserve is ignored.
fn allocate_reserve(
    r: &crate::ldf_ast::Reserve,
    target: &str,
    cursors: &mut HashMap<String, SegmentCursor>,
    reserves: &mut HashMap<String, (u32, u32)>,
) -> Result<()> {
    if r.name.is_empty() || target.is_empty() {
        return Ok(());
    }
    let cursor = cursors.get_mut(target).ok_or_else(|| {
        Error::Parse(format!(
            "reserve `{}` targets unknown memory `{}`",
            r.name, target
        ))
    })?;
    let align_bytes = if r.align == 0 { 1 } else { r.align };
    let stride = cursor.byte_stride.max(1);
    // Alignment is expressed in bytes; convert to unit addresses
    // using the segment's byte stride. Rounding up ensures that a
    // sub-unit alignment value still produces a well-defined aligned
    // position. A zero result is bumped to one.
    let align_units = align_bytes.div_ceil(stride).max(1);
    let aligned_unit = (cursor.current + align_units - 1) & !(align_units - 1);
    let start_byte = aligned_unit.saturating_mul(stride);
    let length_units = r.length.div_ceil(stride);
    // Zero-length reserves do not advance the cursor; growing them
    // happens in the post-pass. Non-zero length reserves consume
    // their bytes immediately so placements cannot overlap.
    if length_units > 0 {
        let end_exclusive = cursor.end.saturating_add(1);
        if aligned_unit > end_exclusive || length_units > end_exclusive - aligned_unit {
            let remaining = end_exclusive.saturating_sub(aligned_unit);
            return Err(Error::LayoutOverflow {
                section: r.name.clone(),
                segment: cursor.name.clone(),
                requested: length_units,
                remaining,
            });
        }
        cursor.current = aligned_unit + length_units;
    } else {
        cursor.current = aligned_unit;
    }
    // Record or merge the reserve entry. The first directive
    // establishes the start address; a second directive with the
    // same name (RESERVE_EXPAND after RESERVE) preserves the
    // original start and updates only the length.
    reserves
        .entry(r.name.clone())
        .and_modify(|e| {
            if r.length > e.1 {
                e.1 = r.length;
            }
        })
        .or_insert((start_byte, r.length));
    Ok(())
}

fn place_output_section(
    out_sec: &OutputSection,
    objects: &[InputObject],
    variables: &HashMap<String, Vec<String>>,
    cursors: &mut HashMap<String, SegmentCursor>,
    placed: &mut Vec<PlacedSection>,
    claimed: &mut std::collections::HashSet<(usize, usize)>,
    live_sections: &LiveSections,
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
                // A given (object, section) pair is placed exactly
                // once, by the first output-section rule that claims
                // it. Subsequent rules that happen to match the same
                // (object, section) through a wildcard are skipped.
                if claimed.contains(&(obj_idx, sec_idx)) {
                    continue;
                }
                // Dead sections (unreachable from any GC root) are
                // silently skipped here. They neither consume space
                // in the target segment nor trigger the orphan
                // sweep; the section simply disappears from the
                // output.
                if !live_sections.is_live(obj_idx, sec_idx) {
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
                claimed.insert((obj_idx, sec_idx));
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
/// The LDF refers to inputs by basename (e.g. `21569_hdr.doj`), to
/// archives by basename (e.g. `libc.dlb`), and to the user-supplied
/// inputs via the `*` wildcard. A pulled archive member carries a
/// synthetic path of the form `<archive>(<member>)`, so a ref that
/// names the archive basename should match every pulled member.
fn object_matches(path: &str, refs: &[String]) -> bool {
    if refs.iter().any(|r| r == "*") {
        return true;
    }
    let basename = std::path::Path::new(path)
        .file_name()
        .and_then(|f| f.to_str())
        .unwrap_or(path);
    // Extract the archive portion of a synthetic member path: the
    // substring before the first `(`. `libc.dlb(foo.doj)` becomes
    // `libc.dlb`; a non-archive path returns the basename unchanged.
    let archive_stem: &str = match basename.find('(') {
        Some(idx) if basename.ends_with(')') => &basename[..idx],
        _ => basename,
    };
    refs.iter().any(|r| {
        r == path || r == basename || r == archive_stem
    })
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
                        let bw_addr = ps.address + sym.st_value;
                        // SW (short-word) code sections use 16-bit
                        // parcel addressing: the PM address is half
                        // the BW (byte) address. PM sections with
                        // 48-bit instructions use BW/6*4 = 2/3 of
                        // the byte address. Other sections (BW/DM)
                        // are byte-addressed as-is.
                        let pm_addr = match ps.qualifier {
                            SectionQualifier::Sw => bw_addr / 2,
                            SectionQualifier::Pm => bw_addr / 6 * 4,
                            _ => bw_addr,
                        };
                        return Some(pm_addr);
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
        // BW segment: byte stride is one, so 0x100 bytes advance the
        // cursor by 0x100 units.
        let seg = MemorySegment {
            name: "test".into(),
            seg_type: SegType::Bw,
            mem_kind: MemKind::Ram,
            start: 0x1000,
            end: 0x1FFF,
            width: 8,
        };
        let mut cursor = SegmentCursor::new(&seg);
        let addr = cursor.allocate(0x100, 1, "sec").unwrap();
        assert_eq!(addr, 0x1000);
        let addr2 = cursor.allocate(0x100, 1, "sec2").unwrap();
        assert_eq!(addr2, 0x1100);
    }

    #[test]
    fn segment_cursor_pm48_counts_units_not_bytes() {
        // PM segment with 48-bit instructions: 6 byte stride. A
        // 12-byte section consumes 2 units of the segment.
        let seg = MemorySegment {
            name: "pm".into(),
            seg_type: SegType::Pm,
            mem_kind: MemKind::Ram,
            start: 0x0090_0000,
            end: 0x0090_00a7,
            width: 48,
        };
        let mut cursor = SegmentCursor::new(&seg);
        let a = cursor.allocate(12, 1, "first").unwrap();
        assert_eq!(a, 0x0090_0000);
        let b = cursor.allocate(6, 1, "second").unwrap();
        assert_eq!(b, 0x0090_0002);
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
        // Next alloc with alignment 4. The DM segment has a 4-byte
        // stride, so 3 bytes round up to one unit (cursor=0x1001),
        // then align(4) lifts it to 0x1004.
        let addr = cursor.allocate(4, 4, "sec2").unwrap();
        assert_eq!(addr, 0x1004);
    }

    #[test]
    fn segment_cursor_overflow_is_hard_error() {
        // Ask for more units than the segment holds. The allocator
        // refuses and returns a `LayoutOverflow` error naming the
        // section, the segment, the requested size, and the
        // remaining capacity. No silent placement.
        let seg = MemorySegment {
            name: "test".into(),
            seg_type: SegType::Bw,
            mem_kind: MemKind::Ram,
            start: 0x1000,
            end: 0x100F,
            width: 8,
        };
        let mut cursor = SegmentCursor::new(&seg);
        let err = cursor.allocate(0x20, 1, "big_sec").unwrap_err();
        match err {
            Error::LayoutOverflow {
                section,
                segment,
                requested,
                remaining,
            } => {
                assert_eq!(section, "big_sec");
                assert_eq!(segment, "test");
                assert_eq!(requested, 0x20);
                assert_eq!(remaining, 0x10);
            }
            other => panic!("expected LayoutOverflow, got {other:?}"),
        }
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
