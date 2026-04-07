// SPDX-License-Identifier: GPL-3.0
// dwarf.rs --- DWARF2 debug section renderers
// Copyright (c) 2026 Jakob Kastelic

//! DWARF2 debug section renderers.
//!
//! Provides structured rendering for `.debug_abbrev`, `.debug_info`,
//! and `.debug_line` sections, matching the standard seldump output format.

use std::io::{self, Write};

use selelf::elf::{self, Elf32Shdr, Endian};

// ---------------------------------------------------------------------------
// ULEB128 decoding
// ---------------------------------------------------------------------------

/// Decode an unsigned LEB128 value from `data[pos..]`.
/// Returns `(value, bytes_consumed)`.
fn decode_uleb128(data: &[u8], pos: usize) -> (u64, usize) {
    let mut result: u64 = 0;
    let mut shift: u32 = 0;
    let mut i = pos;
    loop {
        if i >= data.len() {
            break;
        }
        let byte = data[i];
        i += 1;
        result |= u64::from(byte & 0x7f) << shift;
        if byte & 0x80 == 0 {
            break;
        }
        shift += 7;
        if shift >= 64 {
            break;
        }
    }
    (result, i - pos)
}

// ---------------------------------------------------------------------------
// DW_TAG names (DWARF2 standard tags)
// ---------------------------------------------------------------------------

fn dw_tag_name(tag: u64) -> &'static str {
    match tag {
        0x01 => "DW_TAG_array_type",
        0x02 => "DW_TAG_class_type",
        0x03 => "DW_TAG_entry_point",
        0x04 => "DW_TAG_enumeration_type",
        0x05 => "DW_TAG_formal_parameter",
        0x08 => "DW_TAG_imported_declaration",
        0x0a => "DW_TAG_label",
        0x0b => "DW_TAG_lexical_block",
        0x0d => "DW_TAG_member",
        0x0f => "DW_TAG_pointer_type",
        0x10 => "DW_TAG_reference_type",
        0x11 => "DW_TAG_compile_unit",
        0x12 => "DW_TAG_string_type",
        0x13 => "DW_TAG_structure_type",
        0x15 => "DW_TAG_subroutine_type",
        0x16 => "DW_TAG_typedef",
        0x17 => "DW_TAG_union_type",
        0x18 => "DW_TAG_unspecified_parameters",
        0x19 => "DW_TAG_variant",
        0x1a => "DW_TAG_common_block",
        0x1b => "DW_TAG_common_inclusion",
        0x1c => "DW_TAG_inheritance",
        0x1d => "DW_TAG_inlined_subroutine",
        0x1e => "DW_TAG_module",
        0x1f => "DW_TAG_ptr_to_member_type",
        0x20 => "DW_TAG_set_type",
        0x21 => "DW_TAG_subrange_type",
        0x22 => "DW_TAG_with_stmt",
        0x23 => "DW_TAG_access_declaration",
        0x24 => "DW_TAG_base_type",
        0x25 => "DW_TAG_catch_block",
        0x26 => "DW_TAG_const_type",
        0x27 => "DW_TAG_constant",
        0x28 => "DW_TAG_enumerator",
        0x29 => "DW_TAG_file_type",
        0x2a => "DW_TAG_friend",
        0x2b => "DW_TAG_namelist",
        0x2c => "DW_TAG_namelist_item",
        0x2d => "DW_TAG_packed_type",
        0x2e => "DW_TAG_subprogram",
        0x2f => "DW_TAG_template_type_param",
        0x30 => "DW_TAG_template_value_param",
        0x31 => "DW_TAG_thrown_type",
        0x32 => "DW_TAG_try_block",
        0x33 => "DW_TAG_variant_part",
        0x34 => "DW_TAG_variable",
        0x35 => "DW_TAG_volatile_type",
        // DWARF3+ tags that may appear
        0x36 => "DW_TAG_dwarf_procedure",
        0x37 => "DW_TAG_restrict_type",
        0x38 => "DW_TAG_interface_type",
        0x39 => "DW_TAG_namespace",
        0x3a => "DW_TAG_imported_module",
        0x3b => "DW_TAG_unspecified_type",
        0x3c => "DW_TAG_partial_unit",
        0x3d => "DW_TAG_imported_unit",
        0x3f => "DW_TAG_condition",
        0x40 => "DW_TAG_shared_type",
        _ => "",
    }
}

// ---------------------------------------------------------------------------
// DW_AT names (DWARF2 standard attributes)
// ---------------------------------------------------------------------------

fn dw_at_name(at: u64) -> &'static str {
    match at {
        0x01 => "DW_AT_sibling",
        0x02 => "DW_AT_location",
        0x03 => "DW_AT_name",
        0x09 => "DW_AT_ordering",
        0x0b => "DW_AT_byte_size",
        0x0c => "DW_AT_bit_offset",
        0x0d => "DW_AT_bit_size",
        0x10 => "DW_AT_stmt_list",
        0x11 => "DW_AT_low_pc",
        0x12 => "DW_AT_high_pc",
        0x13 => "DW_AT_language",
        0x15 => "DW_AT_discr",
        0x16 => "DW_AT_discr_value",
        0x17 => "DW_AT_visibility",
        0x18 => "DW_AT_import",
        0x19 => "DW_AT_string_length",
        0x1a => "DW_AT_common_reference",
        0x1b => "DW_AT_comp_dir",
        0x1c => "DW_AT_const_value",
        0x1d => "DW_AT_containing_type",
        0x1e => "DW_AT_default_value",
        0x20 => "DW_AT_inline",
        0x21 => "DW_AT_is_optional",
        0x22 => "DW_AT_lower_bound",
        0x25 => "DW_AT_producer",
        0x27 => "DW_AT_prototyped",
        0x2a => "DW_AT_return_addr",
        0x2c => "DW_AT_start_scope",
        0x2e => "DW_AT_stride_size",
        0x2f => "DW_AT_upper_bound",
        0x31 => "DW_AT_abstract_origin",
        0x32 => "DW_AT_accessibility",
        0x33 => "DW_AT_address_class",
        0x34 => "DW_AT_artificial",
        0x35 => "DW_AT_base_types",
        0x36 => "DW_AT_calling_convention",
        0x37 => "DW_AT_count",
        0x38 => "DW_AT_data_member_location",
        0x39 => "DW_AT_decl_column",
        0x3a => "DW_AT_decl_file",
        0x3b => "DW_AT_decl_line",
        0x3c => "DW_AT_declaration",
        0x3d => "DW_AT_discr_list",
        0x3e => "DW_AT_encoding",
        0x3f => "DW_AT_external",
        0x40 => "DW_AT_frame_base",
        0x41 => "DW_AT_friend",
        0x42 => "DW_AT_identifier_case",
        0x43 => "DW_AT_macro_info",
        0x44 => "DW_AT_namelist_item",
        0x45 => "DW_AT_priority",
        0x46 => "DW_AT_segment",
        0x47 => "DW_AT_specification",
        0x48 => "DW_AT_static_link",
        0x49 => "DW_AT_type",
        0x4a => "DW_AT_use_location",
        0x4b => "DW_AT_variable_parameter",
        0x4c => "DW_AT_virtuality",
        0x4d => "DW_AT_vtable_elem_location",
        // DWARF3+
        0x4e => "DW_AT_allocated",
        0x4f => "DW_AT_associated",
        0x50 => "DW_AT_data_location",
        0x51 => "DW_AT_byte_stride",
        0x52 => "DW_AT_entry_pc",
        0x53 => "DW_AT_use_UTF8",
        0x54 => "DW_AT_extension",
        0x55 => "DW_AT_ranges",
        0x56 => "DW_AT_trampoline",
        0x57 => "DW_AT_call_column",
        0x58 => "DW_AT_call_file",
        0x59 => "DW_AT_call_line",
        0x5a => "DW_AT_description",
        0x5b => "DW_AT_binary_scale",
        0x5c => "DW_AT_decimal_scale",
        0x5d => "DW_AT_small",
        0x5e => "DW_AT_decimal_sign",
        0x5f => "DW_AT_digit_count",
        0x60 => "DW_AT_picture_string",
        0x61 => "DW_AT_mutable",
        0x62 => "DW_AT_threads_scaled",
        0x63 => "DW_AT_explicit",
        0x64 => "DW_AT_object_pointer",
        0x65 => "DW_AT_endianity",
        0x66 => "DW_AT_elemental",
        0x67 => "DW_AT_pure",
        0x68 => "DW_AT_recursive",
        _ => "",
    }
}

/// Format a DW_AT value, including extensions.
fn format_dw_at(at: u64) -> String {
    let name = dw_at_name(at);
    if !name.is_empty() {
        return name.to_string();
    }
    // Extension range (0x2000..0x3fff per DWARF spec)
    if (0x2900..=0x29ff).contains(&at) {
        return format!("DW_AT_typical_{at:#x}");
    }
    format!("{at:#x}")
}

// ---------------------------------------------------------------------------
// DW_FORM names (DWARF2 standard forms)
// ---------------------------------------------------------------------------

fn dw_form_name(form: u64) -> &'static str {
    match form {
        0x01 => "DW_FORM_addr",
        0x03 => "DW_FORM_block2",
        0x04 => "DW_FORM_block4",
        0x05 => "DW_FORM_data2",
        0x06 => "DW_FORM_data4",
        0x07 => "DW_FORM_data8",
        0x08 => "DW_FORM_string",
        0x09 => "DW_FORM_block",
        0x0a => "DW_FORM_block1",
        0x0b => "DW_FORM_data1",
        0x0c => "DW_FORM_flag",
        0x0d => "DW_FORM_sdata",
        0x0e => "DW_FORM_strp",
        0x0f => "DW_FORM_udata",
        0x10 => "DW_FORM_ref_addr",
        0x11 => "DW_FORM_ref1",
        0x12 => "DW_FORM_ref2",
        0x13 => "DW_FORM_ref4",
        0x14 => "DW_FORM_ref8",
        0x15 => "DW_FORM_ref_udata",
        0x16 => "DW_FORM_indirect",
        _ => "",
    }
}

fn format_dw_form(form: u64) -> String {
    let name = dw_form_name(form);
    if !name.is_empty() {
        return name.to_string();
    }
    format!("{form:#x}")
}

// ---------------------------------------------------------------------------
// DW_LANG names
// ---------------------------------------------------------------------------

fn dw_lang_name(lang: u64) -> &'static str {
    match lang {
        0x01 => "DW_LANG_C89",
        0x02 => "DW_LANG_C",
        0x03 => "DW_LANG_Ada83",
        0x04 => "DW_LANG_C_plus_plus",
        0x05 => "DW_LANG_Cobol74",
        0x06 => "DW_LANG_Cobol85",
        0x07 => "DW_LANG_Fortran77",
        0x08 => "DW_LANG_Fortran90",
        0x09 => "DW_LANG_Pascal83",
        0x0a => "DW_LANG_Modula2",
        0x0b => "DW_LANG_Java",
        0x0c => "DW_LANG_C99",
        0x0d => "DW_LANG_Ada95",
        0x0e => "DW_LANG_Fortran95",
        0x0f => "DW_LANG_PLI",
        0x10 => "DW_LANG_ObjC",
        0x11 => "DW_LANG_ObjC_plus_plus",
        0x12 => "DW_LANG_UPC",
        0x13 => "DW_LANG_D",
        _ => "",
    }
}

// ---------------------------------------------------------------------------
// DW_ATE names
// ---------------------------------------------------------------------------

fn dw_ate_name(ate: u64) -> &'static str {
    match ate {
        0x01 => "DW_ATE_address",
        0x02 => "DW_ATE_boolean",
        0x03 => "DW_ATE_complex_float",
        0x04 => "DW_ATE_float",
        0x05 => "DW_ATE_signed",
        0x06 => "DW_ATE_signed_char",
        0x07 => "DW_ATE_unsigned",
        0x08 => "DW_ATE_unsigned_char",
        0x09 => "DW_ATE_imaginary_float",
        0x0a => "DW_ATE_packed_decimal",
        0x0b => "DW_ATE_numeric_string",
        0x0c => "DW_ATE_edited",
        0x0d => "DW_ATE_signed_fixed",
        0x0e => "DW_ATE_unsigned_fixed",
        0x0f => "DW_ATE_decimal_float",
        _ => "",
    }
}

// ---------------------------------------------------------------------------
// Abbreviation table parsing
// ---------------------------------------------------------------------------

/// A single attribute spec within an abbreviation.
struct AbbrevAttr {
    at: u64,
    form: u64,
}

/// A parsed abbreviation entry.
struct AbbrevEntry {
    number: u64,
    tag: u64,
    has_children: bool,
    attrs: Vec<AbbrevAttr>,
}

/// Parse the entire `.debug_abbrev` section into a list of abbreviation entries.
fn parse_abbrev_table(data: &[u8]) -> Vec<AbbrevEntry> {
    let mut entries = Vec::new();
    let mut pos = 0;
    loop {
        if pos >= data.len() {
            break;
        }
        let (number, n) = decode_uleb128(data, pos);
        pos += n;
        if number == 0 {
            break;
        }
        let (tag, n) = decode_uleb128(data, pos);
        pos += n;
        if pos >= data.len() {
            break;
        }
        let has_children = data[pos] != 0;
        pos += 1;

        let mut attrs = Vec::new();
        loop {
            if pos >= data.len() {
                break;
            }
            let (at, n) = decode_uleb128(data, pos);
            pos += n;
            let (form, n) = decode_uleb128(data, pos);
            pos += n;
            if at == 0 && form == 0 {
                break;
            }
            attrs.push(AbbrevAttr { at, form });
        }
        entries.push(AbbrevEntry {
            number,
            tag,
            has_children,
            attrs,
        });
    }
    entries
}

/// Look up an abbreviation by number in the parsed table.
fn find_abbrev(table: &[AbbrevEntry], number: u64) -> Option<&AbbrevEntry> {
    table.iter().find(|e| e.number == number)
}

// ---------------------------------------------------------------------------
// .debug_abbrev renderer
// ---------------------------------------------------------------------------

/// Render the `.debug_abbrev` section in standard format.
pub fn dump_debug_abbrev(data: &[u8], w: &mut dyn Write) -> io::Result<()> {
    let mut pos: usize = 0;
    loop {
        if pos >= data.len() {
            break;
        }
        let entry_start = pos;
        let (number, n) = decode_uleb128(data, pos);
        pos += n;
        if number == 0 {
            break;
        }
        writeln!(w, "{entry_start:08x}: {number:#x} {{")?;

        let tag_pos = pos;
        let (tag, n) = decode_uleb128(data, pos);
        pos += n;
        let tag_name = dw_tag_name(tag);
        if tag_name.is_empty() {
            writeln!(w, "{tag_pos:08x}:   {tag:#x}")?;
        } else {
            writeln!(w, "{tag_pos:08x}:   {tag_name}")?;
        }

        if pos >= data.len() {
            break;
        }
        let children_pos = pos;
        let children = data[pos];
        pos += 1;
        let children_str = if children != 0 {
            "DW_CHILDREN_yes"
        } else {
            "DW_CHILDREN_no"
        };
        writeln!(w, "{children_pos:08x}:   {children_str}")?;

        loop {
            if pos >= data.len() {
                break;
            }
            let attr_pos = pos;
            let (at, n) = decode_uleb128(data, pos);
            pos += n;
            let (form, n) = decode_uleb128(data, pos);
            pos += n;
            if at == 0 && form == 0 {
                writeln!(w, "{attr_pos:08x}:   {{ 0, 0 }} }}")?;
                break;
            }
            let at_str = format_dw_at(at);
            let form_str = format_dw_form(form);
            writeln!(w, "{attr_pos:08x}:   {{ {at_str}, {form_str} }}")?;
        }
    }
    Ok(())
}

// ---------------------------------------------------------------------------
// .debug_info renderer
// ---------------------------------------------------------------------------

/// Compute the byte size consumed by reading one attribute value of the given form.
/// Returns `None` if the form is unknown or the data is truncated.
fn form_value_size(
    form: u64,
    data: &[u8],
    pos: usize,
    address_size: u8,
    endian: Endian,
) -> Option<usize> {
    match form {
        0x01 => Some(address_size as usize), // DW_FORM_addr
        0x03 => {
            // DW_FORM_block2: u16 length + block
            if pos + 2 > data.len() {
                return None;
            }
            let len = endian.read_u16(&data[pos..]) as usize;
            Some(2 + len)
        }
        0x04 => {
            // DW_FORM_block4: u32 length + block
            if pos + 4 > data.len() {
                return None;
            }
            let len = endian.read_u32(&data[pos..]) as usize;
            Some(4 + len)
        }
        0x05 => Some(2),            // DW_FORM_data2
        0x06 => Some(4),            // DW_FORM_data4
        0x07 => Some(8),            // DW_FORM_data8
        0x08 => {
            // DW_FORM_string: null-terminated
            let start = pos;
            let mut p = pos;
            while p < data.len() && data[p] != 0 {
                p += 1;
            }
            if p < data.len() {
                Some(p - start + 1) // include null
            } else {
                Some(p - start)
            }
        }
        0x09 => {
            // DW_FORM_block: ULEB128 length + block
            let (len, n) = decode_uleb128(data, pos);
            Some(n + len as usize)
        }
        0x0a => {
            // DW_FORM_block1: u8 length + block
            if pos >= data.len() {
                return None;
            }
            let len = data[pos] as usize;
            Some(1 + len)
        }
        0x0b => Some(1),            // DW_FORM_data1
        0x0c => Some(1),            // DW_FORM_flag
        0x0d => {
            // DW_FORM_sdata: SLEB128
            let (_, n) = decode_uleb128(data, pos); // same byte consumption
            Some(n)
        }
        0x0e => Some(4),            // DW_FORM_strp (offset into .debug_str)
        0x0f => {
            // DW_FORM_udata: ULEB128
            let (_, n) = decode_uleb128(data, pos);
            Some(n)
        }
        0x10 => Some(address_size as usize), // DW_FORM_ref_addr
        0x11 => Some(1),            // DW_FORM_ref1
        0x12 => Some(2),            // DW_FORM_ref2
        0x13 => Some(4),            // DW_FORM_ref4
        0x14 => Some(8),            // DW_FORM_ref8
        0x15 => {
            // DW_FORM_ref_udata: ULEB128
            let (_, n) = decode_uleb128(data, pos);
            Some(n)
        }
        _ => None,
    }
}

/// Read a null-terminated string from `data[pos..]`.
fn read_cstring(data: &[u8], pos: usize) -> &str {
    let start = pos;
    let mut end = pos;
    while end < data.len() && data[end] != 0 {
        end += 1;
    }
    std::str::from_utf8(&data[start..end]).unwrap_or("<invalid>")
}

/// Format an attribute value for display.
/// Some well-known attributes get symbolic rendering (language, encoding).
fn format_attr_value(
    at: u64,
    form: u64,
    data: &[u8],
    pos: usize,
    endian: Endian,
    address_size: u8,
) -> String {
    match form {
        0x08 => {
            // DW_FORM_string
            let s = read_cstring(data, pos);
            format!("\"{s}\"")
        }
        0x0b => {
            // DW_FORM_data1
            if pos >= data.len() {
                return "???".to_string();
            }
            let val = data[pos];
            format_known_constant(at, val as u64, format!("{val:#04x}"))
        }
        0x05 => {
            // DW_FORM_data2
            if pos + 2 > data.len() {
                return "???".to_string();
            }
            let val = endian.read_u16(&data[pos..]);
            format_known_constant(at, val as u64, format!("{val:#06x}"))
        }
        0x06 | 0x0e => {
            // DW_FORM_data4 / DW_FORM_strp
            if pos + 4 > data.len() {
                return "???".to_string();
            }
            let val = endian.read_u32(&data[pos..]);
            format!("{val:#010x}")
        }
        0x07 => {
            // DW_FORM_data8
            if pos + 8 > data.len() {
                return "???".to_string();
            }
            let lo = endian.read_u32(&data[pos..]) as u64;
            let hi = endian.read_u32(&data[pos + 4..]) as u64;
            let val = if matches!(endian, Endian::Little) {
                lo | (hi << 32)
            } else {
                (lo << 32) | hi
            };
            format!("{val:#018x}")
        }
        0x01 | 0x10 => {
            // DW_FORM_addr / DW_FORM_ref_addr
            if address_size == 4 {
                if pos + 4 > data.len() {
                    return "???".to_string();
                }
                let val = endian.read_u32(&data[pos..]);
                format!("{val:#010x}")
            } else {
                "???".to_string()
            }
        }
        0x0c => {
            // DW_FORM_flag
            if pos >= data.len() {
                return "???".to_string();
            }
            let val = data[pos];
            if val != 0 { "yes".to_string() } else { "no".to_string() }
        }
        0x0f => {
            // DW_FORM_udata
            let (val, _) = decode_uleb128(data, pos);
            format_known_constant(at, val, format!("{val:#x}"))
        }
        0x0d => {
            // DW_FORM_sdata
            let (val, _) = decode_uleb128(data, pos);
            format!("{:#x}", val as i64)
        }
        0x11 => {
            // DW_FORM_ref1
            if pos >= data.len() {
                return "???".to_string();
            }
            let val = data[pos];
            format!("{val:#04x}")
        }
        0x12 => {
            // DW_FORM_ref2
            if pos + 2 > data.len() {
                return "???".to_string();
            }
            let val = endian.read_u16(&data[pos..]);
            format!("{val:#06x}")
        }
        0x13 => {
            // DW_FORM_ref4
            if pos + 4 > data.len() {
                return "???".to_string();
            }
            let val = endian.read_u32(&data[pos..]);
            format!("{val:#010x}")
        }
        0x09 | 0x0a | 0x03 | 0x04 => {
            // DW_FORM_block, block1, block2, block4
            let (block_len, header_size) = match form {
                0x0a => {
                    if pos >= data.len() {
                        return "???".to_string();
                    }
                    (data[pos] as usize, 1)
                }
                0x03 => {
                    if pos + 2 > data.len() {
                        return "???".to_string();
                    }
                    (endian.read_u16(&data[pos..]) as usize, 2)
                }
                0x04 => {
                    if pos + 4 > data.len() {
                        return "???".to_string();
                    }
                    (endian.read_u32(&data[pos..]) as usize, 4)
                }
                _ => {
                    // DW_FORM_block (ULEB128 length)
                    let (len, n) = decode_uleb128(data, pos);
                    (len as usize, n)
                }
            };
            let block_start = pos + header_size;
            let block_end = (block_start + block_len).min(data.len());
            let mut s = format!("{block_len} bytes:");
            for &b in &data[block_start..block_end] {
                s.push_str(&format!(" {b:02x}"));
            }
            s
        }
        _ => {
            "???".to_string()
        }
    }
}

/// For well-known attributes, try to show a symbolic name instead of raw hex.
fn format_known_constant(at: u64, val: u64, fallback: String) -> String {
    match at {
        0x13 => {
            // DW_AT_language
            let name = dw_lang_name(val);
            if name.is_empty() { fallback } else { name.to_string() }
        }
        0x3e => {
            // DW_AT_encoding
            let name = dw_ate_name(val);
            if name.is_empty() { fallback } else { name.to_string() }
        }
        0x32 => {
            // DW_AT_accessibility
            match val {
                1 => "DW_ACCESS_public".to_string(),
                2 => "DW_ACCESS_protected".to_string(),
                3 => "DW_ACCESS_private".to_string(),
                _ => fallback,
            }
        }
        0x20 => {
            // DW_AT_inline
            match val {
                0 => "DW_INL_not_inlined".to_string(),
                1 => "DW_INL_inlined".to_string(),
                2 => "DW_INL_declared_not_inlined".to_string(),
                3 => "DW_INL_declared_inlined".to_string(),
                _ => fallback,
            }
        }
        _ => fallback,
    }
}

/// Render the `.debug_info` section in standard format.
///
/// `abbrev_data` is the raw bytes of the `.debug_abbrev` section needed
/// to decode DIEs.
pub fn dump_debug_info(
    data: &[u8],
    abbrev_data: &[u8],
    endian: Endian,
    w: &mut dyn Write,
) -> io::Result<()> {
    let mut cu_offset: usize = 0;
    while cu_offset < data.len() {
        if cu_offset + 11 > data.len() {
            break;
        }
        // Compilation unit header
        let length = endian.read_u32(&data[cu_offset..]);
        writeln!(w, "{cu_offset:08x}: length = {length:#010x}")?;

        let version = endian.read_u16(&data[cu_offset + 4..]);
        writeln!(w, "{:08x}: version = {version:#06x}", cu_offset + 4)?;

        let abbrev_offset = endian.read_u32(&data[cu_offset + 6..]);
        writeln!(
            w,
            "{:08x}: offset = {abbrev_offset:#010x}",
            cu_offset + 6
        )?;

        let address_size = data[cu_offset + 10];
        writeln!(
            w,
            "{:08x}: address_size = {address_size:#04x}",
            cu_offset + 10
        )?;

        // Parse abbrev table at the indicated offset
        let abbrev_end = abbrev_data.len();
        let abbrev_start = (abbrev_offset as usize).min(abbrev_end);
        let abbrev_table = parse_abbrev_table(&abbrev_data[abbrev_start..]);

        let cu_data_start = cu_offset + 11;
        let cu_end = cu_offset + 4 + length as usize;
        let cu_end = cu_end.min(data.len());

        // Track nesting depth for indentation
        let mut depth: usize = 0;
        let mut pos = cu_data_start;

        while pos < cu_end {
            let die_offset = pos;
            let (abbrev_num, n) = decode_uleb128(data, pos);
            pos += n;

            if abbrev_num == 0 {
                // Null entry -- decrease depth
                depth = depth.saturating_sub(1);
                continue;
            }

            let abbrev = match find_abbrev(&abbrev_table, abbrev_num) {
                Some(a) => a,
                None => {
                    writeln!(w, "{die_offset:08x}: <unknown abbrev {abbrev_num}>")?;
                    break;
                }
            };

            // Print tag line with indentation
            let indent = build_indent(depth);
            let tag_name = dw_tag_name(abbrev.tag);
            if tag_name.is_empty() {
                writeln!(w, "{die_offset:08x}: {indent}--- {:#x}", abbrev.tag)?;
            } else {
                writeln!(w, "{die_offset:08x}: {indent}--- {tag_name}")?;
            }

            // Print attributes
            for attr in &abbrev.attrs {
                let attr_offset = pos;
                let val_str =
                    format_attr_value(attr.at, attr.form, data, pos, endian, address_size);
                let at_str = format_dw_at(attr.at);
                let indent_attr = build_indent_attr(depth);
                writeln!(w, "{attr_offset:08x}: {indent_attr}{at_str} = {val_str}")?;

                // Advance pos past this attribute value
                match form_value_size(attr.form, data, pos, address_size, endian) {
                    Some(sz) => pos += sz,
                    None => {
                        // Unknown form -- can't continue
                        writeln!(w, "  <unknown form {:#x}, stopping>", attr.form)?;
                        pos = cu_end;
                        break;
                    }
                }
            }

            if abbrev.has_children {
                depth += 1;
            }
        }

        cu_offset = cu_end;
    }
    Ok(())
}

/// Build indentation prefix for a DIE at the given nesting depth.
/// Standard format uses `|` characters with spaces.
fn build_indent(depth: usize) -> String {
    let mut s = String::new();
    for _ in 0..depth {
        s.push_str("  |  ");
    }
    s
}

/// Build indentation prefix for an attribute line at the given depth.
fn build_indent_attr(depth: usize) -> String {
    let mut s = String::new();
    s.push_str("  |");
    for _ in 0..depth {
        s.push_str("     ");
    }
    s.push_str("    ");
    s
}

// ---------------------------------------------------------------------------
// .debug_line renderer
// ---------------------------------------------------------------------------

/// Render the `.debug_line` section header, include directories,
/// and file name entries in standard format.
pub fn dump_debug_line(data: &[u8], endian: Endian, w: &mut dyn Write) -> io::Result<()> {
    let mut pos: usize = 0;

    while pos < data.len() {
        if pos + 4 > data.len() {
            break;
        }

        let unit_start = pos;

        let total_length = endian.read_u32(&data[pos..]);
        writeln!(w, "{pos:08x}: total_length = {total_length:#010x}")?;
        pos += 4;

        let unit_end = (unit_start + 4 + total_length as usize).min(data.len());

        if pos + 2 > unit_end {
            break;
        }
        let version = endian.read_u16(&data[pos..]);
        writeln!(w, "{pos:08x}: version = {version:#06x}")?;
        pos += 2;

        if pos + 4 > unit_end {
            break;
        }
        let prologue_length = endian.read_u32(&data[pos..]);
        writeln!(w, "{pos:08x}: prologue_length = {prologue_length:#010x}")?;
        pos += 4;

        if pos >= unit_end {
            break;
        }
        let min_insn_length = data[pos];
        writeln!(
            w,
            "{pos:08x}: minimum_instruction_length = {min_insn_length:#04x}"
        )?;
        pos += 1;

        if pos >= unit_end {
            break;
        }
        let default_is_stmt = data[pos];
        writeln!(w, "{pos:08x}: default_is_stmt = {default_is_stmt:#04x}")?;
        pos += 1;

        if pos >= unit_end {
            break;
        }
        let line_base = data[pos] as i8;
        writeln!(w, "{pos:08x}: line_base = {line_base:#04x}")?;
        pos += 1;

        if pos >= unit_end {
            break;
        }
        let line_range = data[pos];
        writeln!(w, "{pos:08x}: line_range = {line_range:#04x}")?;
        pos += 1;

        if pos >= unit_end {
            break;
        }
        let opcode_base = data[pos];
        writeln!(w, "{pos:08x}: opcode_base = {opcode_base:#04x}")?;
        pos += 1;

        // Standard opcode lengths
        if opcode_base > 1 {
            for i in 1..opcode_base {
                if pos >= unit_end {
                    break;
                }
                let len = data[pos];
                writeln!(w, "{pos:08x}: standard_opcode_lengths[{i}] = {len}")?;
                pos += 1;
            }
        }

        // Include directories
        let mut dir_idx: u64 = 1;
        loop {
            if pos >= unit_end {
                break;
            }
            if data[pos] == 0 {
                pos += 1; // skip terminating null
                break;
            }
            let dir = read_cstring(data, pos);
            writeln!(w, "{pos:08x}: included_directories[{dir_idx:#x}] = \"{dir}\"")?;
            pos += dir.len() + 1;
            dir_idx += 1;
        }

        // File name entries
        let mut file_idx: u64 = 1;
        loop {
            if pos >= unit_end {
                break;
            }
            if data[pos] == 0 {
                break;
            }
            let fname_pos = pos;
            let fname = read_cstring(data, pos);
            pos += fname.len() + 1;

            let (dir_index, n) = decode_uleb128(data, pos);
            pos += n;
            let (time, n) = decode_uleb128(data, pos);
            pos += n;
            let (size, n) = decode_uleb128(data, pos);
            pos += n;

            writeln!(
                w,
                "{fname_pos:08x}: file_names[{file_idx:#x}] = {{ \"{fname}\", {dir_index:#x}, {time:#x}, {size:#x} }}"
            )?;
            file_idx += 1;
        }

        // Skip past any remaining line number program bytes in this unit
        pos = unit_end;
    }
    Ok(())
}

// ---------------------------------------------------------------------------
// Dispatcher: find debug sections and render them
// ---------------------------------------------------------------------------

/// Check if a section name is a DWARF debug section we handle specially,
/// and if so, render it. Returns `true` if the section was handled.
pub fn try_dump_debug_section(
    name: &str,
    data: &[u8],
    sections: &[Elf32Shdr],
    shstrtab: &[u8],
    elf_data: &[u8],
    endian: Endian,
    w: &mut dyn Write,
) -> io::Result<bool> {
    match name {
        ".debug_abbrev" => {
            dump_debug_abbrev(data, w)?;
            Ok(true)
        }
        ".debug_info" => {
            // Find .debug_abbrev section data for cross-reference
            let abbrev_data = find_section_data(sections, shstrtab, elf_data, ".debug_abbrev");
            dump_debug_info(data, abbrev_data, endian, w)?;
            Ok(true)
        }
        ".debug_line" => {
            dump_debug_line(data, endian, w)?;
            Ok(true)
        }
        _ => Ok(false),
    }
}

/// Look up a section by name and return its raw data slice.
fn find_section_data<'a>(
    sections: &[Elf32Shdr],
    shstrtab: &[u8],
    elf_data: &'a [u8],
    target_name: &str,
) -> &'a [u8] {
    for sec in sections {
        let name = elf::read_string_at(shstrtab, sec.sh_name);
        if name == target_name {
            let start = sec.sh_offset as usize;
            let end = start + sec.sh_size as usize;
            if end <= elf_data.len() {
                return &elf_data[start..end];
            }
        }
    }
    &[]
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_decode_uleb128_single_byte() {
        let data = [0x05];
        let (val, n) = decode_uleb128(&data, 0);
        assert_eq!(val, 5);
        assert_eq!(n, 1);
    }

    #[test]
    fn test_decode_uleb128_multi_byte() {
        // 624485 = 0xE5 0x8E 0x26
        let data = [0xe5, 0x8e, 0x26];
        let (val, n) = decode_uleb128(&data, 0);
        assert_eq!(val, 624485);
        assert_eq!(n, 3);
    }

    #[test]
    fn test_decode_uleb128_zero() {
        let data = [0x00];
        let (val, n) = decode_uleb128(&data, 0);
        assert_eq!(val, 0);
        assert_eq!(n, 1);
    }

    #[test]
    fn test_decode_uleb128_127() {
        let data = [0x7f];
        let (val, n) = decode_uleb128(&data, 0);
        assert_eq!(val, 127);
        assert_eq!(n, 1);
    }

    #[test]
    fn test_decode_uleb128_128() {
        let data = [0x80, 0x01];
        let (val, n) = decode_uleb128(&data, 0);
        assert_eq!(val, 128);
        assert_eq!(n, 2);
    }

    #[test]
    fn test_dw_tag_names() {
        assert_eq!(dw_tag_name(0x11), "DW_TAG_compile_unit");
        assert_eq!(dw_tag_name(0x2e), "DW_TAG_subprogram");
        assert_eq!(dw_tag_name(0x24), "DW_TAG_base_type");
        assert_eq!(dw_tag_name(0x9999), "");
    }

    #[test]
    fn test_dw_at_names() {
        assert_eq!(dw_at_name(0x03), "DW_AT_name");
        assert_eq!(dw_at_name(0x13), "DW_AT_language");
        assert_eq!(dw_at_name(0x3e), "DW_AT_encoding");
    }

    #[test]
    fn test_dw_form_names() {
        assert_eq!(dw_form_name(0x08), "DW_FORM_string");
        assert_eq!(dw_form_name(0x0b), "DW_FORM_data1");
        assert_eq!(dw_form_name(0x06), "DW_FORM_data4");
    }

    #[test]
    fn test_format_dw_at_typical() {
        assert_eq!(format_dw_at(0x2901), "DW_AT_typical_0x2901");
        assert_eq!(format_dw_at(0x03), "DW_AT_name");
    }

    #[test]
    fn test_dw_lang_names() {
        assert_eq!(dw_lang_name(0x01), "DW_LANG_C89");
        assert_eq!(dw_lang_name(0x0c), "DW_LANG_C99");
        assert_eq!(dw_lang_name(0xff), "");
    }

    #[test]
    fn test_dw_ate_names() {
        assert_eq!(dw_ate_name(0x02), "DW_ATE_boolean");
        assert_eq!(dw_ate_name(0x05), "DW_ATE_signed");
    }

    /// Build a minimal .debug_abbrev section:
    ///   Abbrev 1: DW_TAG_compile_unit, has_children=yes
    ///     DW_AT_name / DW_FORM_string
    ///     DW_AT_language / DW_FORM_data1
    ///     (0, 0)
    ///   Terminator (0)
    fn make_test_abbrev() -> Vec<u8> {
        let mut data = Vec::new();
        data.push(0x01); // abbrev number 1
        data.push(0x11); // DW_TAG_compile_unit
        data.push(0x01); // DW_CHILDREN_yes
        data.push(0x03); // DW_AT_name
        data.push(0x08); // DW_FORM_string
        data.push(0x13); // DW_AT_language
        data.push(0x0b); // DW_FORM_data1
        data.push(0x00); // terminator at
        data.push(0x00); // terminator form
        data.push(0x00); // end of table
        data
    }

    #[test]
    fn test_dump_debug_abbrev() {
        let data = make_test_abbrev();
        let mut out = Vec::new();
        dump_debug_abbrev(&data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("0x1 {"), "output: {s}");
        assert!(s.contains("DW_TAG_compile_unit"), "output: {s}");
        assert!(s.contains("DW_CHILDREN_yes"), "output: {s}");
        assert!(
            s.contains("{ DW_AT_name, DW_FORM_string }"),
            "output: {s}"
        );
        assert!(
            s.contains("{ DW_AT_language, DW_FORM_data1 }"),
            "output: {s}"
        );
        assert!(s.contains("{ 0, 0 } }"), "output: {s}");
    }

    #[test]
    fn test_parse_abbrev_table() {
        let data = make_test_abbrev();
        let table = parse_abbrev_table(&data);
        assert_eq!(table.len(), 1);
        assert_eq!(table[0].number, 1);
        assert_eq!(table[0].tag, 0x11);
        assert!(table[0].has_children);
        assert_eq!(table[0].attrs.len(), 2);
        assert_eq!(table[0].attrs[0].at, 0x03);
        assert_eq!(table[0].attrs[0].form, 0x08);
    }

    /// Build a minimal .debug_info section that references the test abbrev:
    ///   CU header: length, version=2, abbrev_offset=0, address_size=4
    ///   DIE: abbrev 1 (compile_unit)
    ///     DW_AT_name = "test.c\0"
    ///     DW_AT_language = 0x0c (C99)
    fn make_test_debug_info() -> Vec<u8> {
        let mut data = Vec::new();

        // CU header
        let name_str = b"test.c\0";
        // length = version(2) + abbrev_off(4) + addr_size(1) + die_data
        let die_data_len = 1 + name_str.len() + 1; // abbrev_num(1) + string + language(1)
        let cu_body_len = 2 + 4 + 1 + die_data_len;
        data.extend_from_slice(&(cu_body_len as u32).to_le_bytes()); // length
        data.extend_from_slice(&2u16.to_le_bytes()); // version
        data.extend_from_slice(&0u32.to_le_bytes()); // abbrev_offset
        data.push(0x04); // address_size

        // DIE: abbrev number 1
        data.push(0x01);
        // DW_AT_name: DW_FORM_string -> null-terminated string
        data.extend_from_slice(name_str);
        // DW_AT_language: DW_FORM_data1 -> 1 byte
        data.push(0x0c); // DW_LANG_C99

        data
    }

    #[test]
    fn test_dump_debug_info() {
        let abbrev = make_test_abbrev();
        let info = make_test_debug_info();
        let mut out = Vec::new();
        dump_debug_info(&info, &abbrev, Endian::Little, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("length ="), "output: {s}");
        assert!(s.contains("version = 0x0002"), "output: {s}");
        assert!(s.contains("address_size = 0x04"), "output: {s}");
        assert!(s.contains("DW_TAG_compile_unit"), "output: {s}");
        assert!(s.contains("DW_AT_name = \"test.c\""), "output: {s}");
        assert!(s.contains("DW_AT_language = DW_LANG_C99"), "output: {s}");
    }

    #[test]
    fn test_dump_debug_info_null_die() {
        let abbrev = make_test_abbrev();
        let mut info = make_test_debug_info();
        // Add a null DIE (abbrev 0) to close the compile_unit children
        // First, adjust the CU length to include this extra byte
        let old_len = u32::from_le_bytes([info[0], info[1], info[2], info[3]]);
        let new_len = old_len + 1;
        info[0..4].copy_from_slice(&new_len.to_le_bytes());
        info.push(0x00); // null DIE

        let mut out = Vec::new();
        dump_debug_info(&info, &abbrev, Endian::Little, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("DW_TAG_compile_unit"), "output: {s}");
    }

    /// Build a minimal .debug_line section.
    fn make_test_debug_line() -> Vec<u8> {
        let mut data = Vec::new();

        // We'll build the unit content first, then prepend the total_length
        let mut body = Vec::new();

        // version
        body.extend_from_slice(&2u16.to_le_bytes());

        // Build prologue content (after prologue_length field)
        let mut prologue = Vec::new();
        prologue.push(0x01); // minimum_instruction_length
        prologue.push(0x01); // default_is_stmt
        prologue.push(0xfb_u8); // line_base (-5 as i8)
        prologue.push(14); // line_range
        prologue.push(10); // opcode_base (standard opcodes 1..9)

        // standard_opcode_lengths for opcodes 1..9
        for len in &[0u8, 1, 1, 1, 1, 0, 0, 0, 1] {
            prologue.push(*len);
        }

        // include_directories
        prologue.extend_from_slice(b"..\\src\\\0"); // dir[1]
        prologue.push(0x00); // end of include_directories

        // file_names
        prologue.extend_from_slice(b"test.c\0"); // filename
        prologue.push(0x01); // dir_index = 1
        prologue.push(0x80); // time = 128 (ULEB128: 0x80 0x01)
        prologue.push(0x01);
        prologue.push(0x64); // size = 100

        prologue.push(0x00); // end of file_names

        // prologue_length
        body.extend_from_slice(&(prologue.len() as u32).to_le_bytes());
        body.extend_from_slice(&prologue);

        // total_length
        data.extend_from_slice(&(body.len() as u32).to_le_bytes());
        data.extend_from_slice(&body);

        data
    }

    #[test]
    fn test_dump_debug_line() {
        let data = make_test_debug_line();
        let mut out = Vec::new();
        dump_debug_line(&data, Endian::Little, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("total_length ="), "output: {s}");
        assert!(s.contains("version = 0x0002"), "output: {s}");
        assert!(s.contains("prologue_length ="), "output: {s}");
        assert!(
            s.contains("minimum_instruction_length = 0x01"),
            "output: {s}"
        );
        assert!(s.contains("opcode_base ="), "output: {s}");
        assert!(
            s.contains("included_directories[0x1]"),
            "output: {s}"
        );
        assert!(s.contains("..\\src\\"), "output: {s}");
        assert!(s.contains("file_names[0x1]"), "output: {s}");
        assert!(s.contains("test.c"), "output: {s}");
    }

    #[test]
    fn test_form_value_size_string() {
        let data = b"hello\0rest";
        let sz = form_value_size(0x08, data, 0, 4, Endian::Little);
        assert_eq!(sz, Some(6)); // "hello" + null
    }

    #[test]
    fn test_form_value_size_data1() {
        let data = [0x42];
        let sz = form_value_size(0x0b, &data, 0, 4, Endian::Little);
        assert_eq!(sz, Some(1));
    }

    #[test]
    fn test_form_value_size_data4() {
        let data = [0; 4];
        let sz = form_value_size(0x06, &data, 0, 4, Endian::Little);
        assert_eq!(sz, Some(4));
    }

    #[test]
    fn test_form_value_size_udata() {
        let data = [0x80, 0x01]; // 128
        let sz = form_value_size(0x0f, &data, 0, 4, Endian::Little);
        assert_eq!(sz, Some(2));
    }

    #[test]
    fn test_form_value_size_block1() {
        let data = [0x03, 0xaa, 0xbb, 0xcc]; // length=3, then 3 bytes
        let sz = form_value_size(0x0a, &data, 0, 4, Endian::Little);
        assert_eq!(sz, Some(4));
    }

    #[test]
    fn test_form_value_size_addr() {
        let data = [0; 4];
        let sz = form_value_size(0x01, &data, 0, 4, Endian::Little);
        assert_eq!(sz, Some(4));
    }

    #[test]
    fn test_format_attr_value_flag() {
        let data = [0x01];
        let s = format_attr_value(0x3f, 0x0c, &data, 0, Endian::Little, 4);
        assert_eq!(s, "yes");

        let data = [0x00];
        let s = format_attr_value(0x3f, 0x0c, &data, 0, Endian::Little, 4);
        assert_eq!(s, "no");
    }

    #[test]
    fn test_format_attr_encoding() {
        // DW_AT_encoding with DW_FORM_data1, value=5 (DW_ATE_signed)
        let data = [0x05];
        let s = format_attr_value(0x3e, 0x0b, &data, 0, Endian::Little, 4);
        assert_eq!(s, "DW_ATE_signed");
    }

    #[test]
    fn test_try_dump_unknown_section() {
        let sections = [];
        let mut out = Vec::new();
        let handled = try_dump_debug_section(
            ".text",
            &[],
            &sections,
            &[],
            &[],
            Endian::Little,
            &mut out,
        )
        .unwrap();
        assert!(!handled);
    }

    #[test]
    fn test_try_dump_debug_abbrev_dispatches() {
        let data = make_test_abbrev();
        let mut out = Vec::new();
        let handled = try_dump_debug_section(
            ".debug_abbrev",
            &data,
            &[],
            &[],
            &[],
            Endian::Little,
            &mut out,
        )
        .unwrap();
        assert!(handled);
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("DW_TAG_compile_unit"));
    }

    #[test]
    fn test_big_endian_debug_info() {
        // Build abbrev same as LE
        let abbrev = make_test_abbrev();

        // Build debug_info in big-endian
        let mut data = Vec::new();
        let name_str = b"test.c\0";
        let die_data_len = 1 + name_str.len() + 1;
        let cu_body_len = 2 + 4 + 1 + die_data_len;
        data.extend_from_slice(&(cu_body_len as u32).to_be_bytes());
        data.extend_from_slice(&2u16.to_be_bytes());
        data.extend_from_slice(&0u32.to_be_bytes());
        data.push(0x04);
        data.push(0x01); // abbrev 1
        data.extend_from_slice(name_str);
        data.push(0x0c);

        let mut out = Vec::new();
        dump_debug_info(&data, &abbrev, Endian::Big, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.contains("DW_AT_name = \"test.c\""), "output: {s}");
        assert!(s.contains("DW_AT_language = DW_LANG_C99"), "output: {s}");
    }

    #[test]
    fn test_empty_debug_abbrev() {
        let data = [0x00]; // just terminator
        let mut out = Vec::new();
        dump_debug_abbrev(&data, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.is_empty());
    }

    #[test]
    fn test_empty_debug_info() {
        let data = [];
        let mut out = Vec::new();
        dump_debug_info(&data, &[], Endian::Little, &mut out).unwrap();
        let s = String::from_utf8(out).unwrap();
        assert!(s.is_empty());
    }
}
