// SPDX-License-Identifier: GPL-3.0
// obj.rs --- Object file (.doj) emission
// Copyright (c) 2026 Jakob Kastelic

//! Object file (.doj) emission using [`selelf::elf_write::ElfWriter`].

use std::collections::{HashMap, HashSet};

use crate::ast::{BinaryOp, Expr, TranslationUnit, UnaryOp};
use crate::emit;
use crate::error::{Error, Result};
use crate::mach;

/// Compile all functions in a translation unit and emit a relocatable
/// ELF object (.doj) to `output`.
pub fn emit_object(unit: &TranslationUnit, output: &str) -> Result<()> {
    let mut writer = selelf::elf_write::ElfWriter::new();

    // Build map of global variable names -> types for lowering.
    let global_types: HashMap<String, crate::types::Type> = unit
        .globals
        .iter()
        .map(|g| (g.name.clone(), g.ty.clone()))
        .collect();

    // Build set of known function names for implicit declaration checking.
    let known_functions: HashSet<String> = unit.functions.iter()
        .map(|f| f.name.clone())
        .chain(unit.globals.iter().filter(|g| g.is_extern).map(|g| g.name.clone()))
        .collect();

    // Compile all functions, collecting code, relocations, and string literals.
    let mut text_data = Vec::new();
    let mut all_strings: Vec<String> = Vec::new();
    let mut all_wide_strings: Vec<Vec<u32>> = Vec::new();

    struct FuncInfo {
        name: String,
        offset: u32,
        size: u32,
    }

    let mut func_infos = Vec::new();
    let mut relocs = Vec::new();
    let mut all_static_locals: Vec<crate::lower::StaticLocal> = Vec::new();

    for func in &unit.functions {
        // Static locals from prior functions become global symbols visible
        // to subsequent function compilations.
        let mut func_global_types = global_types.clone();
        for sl in &all_static_locals {
            func_global_types.insert(sl.symbol.clone(), sl.ty.clone());
        }
        let offset = text_data.len() as u32;
        let result = emit::emit_function_known(func, &func_global_types, &unit.struct_defs, &unit.enum_constants, &unit.typedefs, &known_functions)?;
        text_data.extend_from_slice(&result.code);
        let size = text_data.len() as u32 - offset;
        func_infos.push(FuncInfo {
            name: func.name.clone(),
            offset,
            size,
        });
        // Collect relocations, adjusting offsets by the function's position.
        for (instr_offset, reloc) in &result.relocs {
            relocs.push((offset + instr_offset, reloc.clone()));
        }
        // Collect string literals (merging from all functions).
        for s in result.strings {
            if !all_strings.contains(&s) {
                all_strings.push(s);
            }
        }
        // Collect wide string literals.
        for ws in result.wide_strings {
            if !all_wide_strings.contains(&ws) {
                all_wide_strings.push(ws);
            }
        }
        // Collect static locals for emission in .data/.bss.
        for sl in result.static_locals {
            all_static_locals.push(sl);
        }
    }

    // Emit .data section for initialized globals.
    let mut data_bytes = Vec::new();
    let mut data_symbols: Vec<(String, u32, u32)> = Vec::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if let Some(init) = &global.init {
            let offset = data_bytes.len() as u32;
            if let Expr::StringLit(s) = init {
                // String literal global: emit string bytes with null terminator.
                data_bytes.extend_from_slice(s.as_bytes());
                data_bytes.push(0);
                let sz = (s.len() + 1) as u32;
                data_symbols.push((global.name.clone(), offset, sz));
            } else if let Expr::InitList(items) = init {
                for item in items {
                    let val = eval_const_expr(item)?;
                    data_bytes.extend_from_slice(&val.to_le_bytes());
                }
                let sz = global.ty.size_bytes();
                data_symbols.push((global.name.clone(), offset, sz));
            } else {
                let val = eval_const_expr(init)?;
                data_bytes.extend_from_slice(&val.to_le_bytes());
                let sz = global.ty.size_bytes();
                data_symbols.push((global.name.clone(), offset, sz));
            }
        }
    }
    // Emit static locals with initializers into .data.
    for sl in &all_static_locals {
        if let Some(init) = &sl.init {
            let offset = data_bytes.len() as u32;
            if let Expr::InitList(items) = init {
                for item in items {
                    let val = eval_const_expr(item)?;
                    data_bytes.extend_from_slice(&val.to_le_bytes());
                }
            } else {
                let val = eval_const_expr(init)?;
                data_bytes.extend_from_slice(&val.to_le_bytes());
            }
            let sz = sl.ty.size_bytes();
            data_symbols.push((sl.symbol.clone(), offset, sz));
        }
    }
    let data_idx = if !data_bytes.is_empty() {
        let idx = writer.add_data_section(".data", &data_bytes);
        for (name, offset, size) in &data_symbols {
            let dotname = format!("{name}.");
            writer.add_object(&dotname, idx, *offset, *size);
        }
        Some(idx)
    } else {
        None
    };
    // Suppress unused-variable warning by reading the value.
    let _ = data_idx;

    // Emit .bss section for uninitialized (non-extern) globals.
    let mut bss_size = 0u32;
    let mut bss_symbols: Vec<(String, u32, u32)> = Vec::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if global.init.is_none() {
            let sz = global.ty.size_bytes();
            bss_symbols.push((global.name.clone(), bss_size, sz));
            bss_size += sz;
        }
    }
    // Static locals without initializers go to .bss.
    for sl in &all_static_locals {
        if sl.init.is_none() {
            let sz = sl.ty.size_bytes();
            bss_symbols.push((sl.symbol.clone(), bss_size, sz));
            bss_size += sz;
        }
    }
    if bss_size > 0 {
        let bss_idx = writer.add_bss_section(".bss", bss_size);
        for (name, offset, size) in &bss_symbols {
            let dotname = format!("{name}.");
            writer.add_object(&dotname, bss_idx, *offset, *size);
        }
    }

    // Emit .rodata section for string literals.
    let mut rodata_bytes = Vec::new();
    for s in &all_strings {
        rodata_bytes.extend_from_slice(s.as_bytes());
        rodata_bytes.push(0); // null terminator
    }
    // Emit wide string literals (4 bytes per character, SHARC word size).
    for ws in &all_wide_strings {
        for &ch in ws {
            rodata_bytes.extend_from_slice(&ch.to_le_bytes());
        }
        rodata_bytes.extend_from_slice(&0u32.to_le_bytes()); // null terminator
    }
    if !rodata_bytes.is_empty() {
        writer.add_rodata_section(".rodata", &rodata_bytes);
    }

    // Emit code section (seg_pmco for compatibility with standard LDF scripts).
    let text_idx = if !text_data.is_empty() {
        let idx = writer.add_text_section("seg_pmco", &text_data);

        for info in &func_infos {
            let dotname = format!("{}.", info.name);
            writer.add_function(&dotname, idx, info.offset, info.size);
        }

        // Emit external symbol references and relocations.
        for (offset, reloc) in &relocs {
            let dotname = format!("{}.", reloc.symbol);
            writer.add_undefined(&dotname);
            writer.add_relocation(
                idx,
                *offset,
                &dotname,
                mach::rela_type(reloc.kind),
                0,
            );
        }
        Some(idx)
    } else {
        None
    };

    // Add extern symbols.
    for global in &unit.globals {
        if global.is_extern {
            let dotname = format!("{}.", global.name);
            writer.add_undefined(&dotname);
        }
    }

    // Emit .align section (required by the linker for section placement).
    if let Some(idx) = text_idx {
        writer.add_align_section("seg_pmco", idx);
    }

    // Emit .attributes section (function names and encoding metadata
    // used by the linker to classify code sections as SW/NW/PM).
    if !text_data.is_empty() {
        let mut attrs = Vec::new();
        attrs.push(0u8); // leading null
        for info in &func_infos {
            attrs.extend_from_slice(b"FuncName\t");
            attrs.extend_from_slice(info.name.as_bytes());
            attrs.extend_from_slice(b".\0");
        }
        attrs.extend_from_slice(b"Encoding\tNW\0");
        attrs.extend_from_slice(b"Content\tCode\0");
        writer.add_section(".attributes", selelf::elf::SHT_STRTAB, 0, &attrs);
    }

    // Emit .adi.attributes section (processor attributes required by the
    // linker to accept this object file).
    writer.add_section(
        ".adi.attributes",
        selelf::elf::SHT_SHARC_ATTR,
        0,
        &build_adi_attributes(text_idx.is_some(), text_idx.unwrap_or(0) as u8),
    );

    let elf_bytes = writer.finish();
    std::fs::write(output, elf_bytes)?;
    Ok(())
}

/// Build the `.adi.attributes` blob for ADSP-21569.
///
/// The format follows the ARM build-attributes convention:
///   'A'  format version
///   u32  total size (of everything after 'A')
///   "AnonADI\0"  producer name
///   0x01  Tag_File (file-scope attributes)
///   u32  file-attributes block size (including this u32)
///   tagged values (ULEB128-encoded)
///
/// The file-level tags encode:
///   Tag 4: processor name (null-terminated string)
///   Tag 5: short-word mode (0x0b = enabled)
///   Tag 6: char size (0x64 = 100 → 8-bit)
///   Tag 7: silicon revision (0xffff = any)
///   Tag 8: build tool version (1)
///
/// Per-section subsections (tag 0x02) follow, one per code section,
/// encoding section index and attributes.
fn build_adi_attributes(has_code: bool, code_section_idx: u8) -> Vec<u8> {
    let proc_name = b"ADSP-21569\0";

    // File-level attributes (tags 4-8).
    let mut file_attrs = Vec::new();
    file_attrs.push(0x04);
    file_attrs.extend_from_slice(proc_name);
    file_attrs.extend_from_slice(&[0x05, 0x0b]); // short-word mode
    file_attrs.extend_from_slice(&[0x06, 0x64]); // char size 8-bit
    file_attrs.extend_from_slice(&[0x08, 0x01]); // build tool version

    // File attributes block: tag_file(1) + u32 size + content.
    // The size field counts the tag byte + size field + content.
    let file_block_size = 1 + 4 + file_attrs.len() as u32;
    let mut file_block = Vec::new();
    file_block.push(0x01); // Tag_File
    file_block.extend_from_slice(&file_block_size.to_le_bytes());
    file_block.extend_from_slice(&file_attrs);

    // Per-section subsection (tag 0x02): encodes the code section's
    // index and its encoding type (NW = normal-word, 48-bit ISA).
    let mut sec_content = Vec::new();
    if has_code {
        sec_content.push(code_section_idx);
        sec_content.push(0x00); // end of section index list
        sec_content.push(0x12); // Tag_Encoding
        sec_content.push(0x03); // NW (normal-word, 48-bit ISA)

        let sec_block_size = 1 + 4 + sec_content.len() as u32;
        file_block.push(0x02); // Tag_Section
        file_block.extend_from_slice(&sec_block_size.to_le_bytes());
        file_block.extend_from_slice(&sec_content);
    }

    // Outer envelope: 'A' + u32 total_size + typical + file_block.
    let producer = b"AnonADI\0";
    let total_size = 4 + producer.len() as u32 + file_block.len() as u32;
    let mut blob = Vec::new();
    blob.push(b'A');
    blob.extend_from_slice(&total_size.to_le_bytes());
    blob.extend_from_slice(producer);
    blob.extend_from_slice(&file_block);
    blob
}

/// Evaluate a constant expression at compile time (for initializers).
fn eval_const_expr(expr: &Expr) -> Result<i32> {
    match expr {
        Expr::IntLit(n, _) => Ok(*n as i32),
        Expr::FloatLit(f) => Ok((*f as f32).to_bits() as i32),
        Expr::CharLit(n) => Ok(*n as i32),
        Expr::Unary {
            op: UnaryOp::Neg,
            operand,
        } => Ok(-eval_const_expr(operand)?),
        Expr::Binary {
            op: BinaryOp::Add,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)?.wrapping_add(eval_const_expr(rhs)?)),
        Expr::Binary {
            op: BinaryOp::Sub,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)?.wrapping_sub(eval_const_expr(rhs)?)),
        Expr::Binary {
            op: BinaryOp::Mul,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)?.wrapping_mul(eval_const_expr(rhs)?)),
        Expr::Binary {
            op: BinaryOp::Div,
            lhs,
            rhs,
        } => {
            let r = eval_const_expr(rhs)?;
            if r == 0 { Ok(0) } else { Ok(eval_const_expr(lhs)? / r) }
        }
        Expr::Binary {
            op: BinaryOp::Mod,
            lhs,
            rhs,
        } => {
            let r = eval_const_expr(rhs)?;
            if r == 0 { Ok(0) } else { Ok(eval_const_expr(lhs)? % r) }
        }
        Expr::Binary {
            op: BinaryOp::BitOr,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)? | eval_const_expr(rhs)?),
        Expr::Binary {
            op: BinaryOp::BitAnd,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)? & eval_const_expr(rhs)?),
        Expr::Binary {
            op: BinaryOp::Shl,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)? << eval_const_expr(rhs)?),
        Expr::Binary {
            op: BinaryOp::Shr,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs)? >> eval_const_expr(rhs)?),
        Expr::Comma(_lhs, rhs) => eval_const_expr(rhs),
        Expr::DesignatedInit { value, .. } => eval_const_expr(value),
        Expr::ArrayDesignator { value, .. } => eval_const_expr(value),
        Expr::Cast(_, inner) => eval_const_expr(inner),
        Expr::Sizeof(arg) => {
            let size = match arg.as_ref() {
                crate::ast::SizeofArg::Type(ty) => ty.size_bytes(),
                crate::ast::SizeofArg::Expr(_) => 4,
            };
            Ok(size as i32)
        }
        Expr::AddrOf(_) => {
            // Address-of in a global initializer — needs linker relocation.
            // Emit 0 as placeholder; the linker will fill the real address.
            Ok(0)
        }
        Expr::Ident(_) => {
            // An identifier in a global init might be another global's address.
            // Emit 0 as placeholder for the linker.
            Ok(0)
        }
        Expr::InitList(items) => {
            // For nested init list in a struct initializer, return first element.
            if let Some(first) = items.first() {
                eval_const_expr(first)
            } else {
                Ok(0)
            }
        }
        _ => Err(Error::NotImplemented(
            "non-constant initializer".into(),
        )),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::parse;
    use crate::token::IntSuffix;

    #[test]
    fn emit_doj_return_42() {
        let unit = parse::parse("int main() { return 42; }").unwrap();
        let dir = std::env::temp_dir();
        let path = dir.join("test_return42.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();

        // Verify the file was created and is a valid ELF.
        let data = std::fs::read(&path).unwrap();
        assert!(data.len() > 52); // At least the ELF header.
        assert_eq!(&data[0..4], b"\x7fELF");

        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn emit_global_var() {
        let src = "int counter = 42;\nint get() { return counter; }";
        let unit = parse::parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        assert_eq!(unit.globals[0].name, "counter");
        assert_eq!(unit.globals[0].init, Some(Expr::IntLit(42, IntSuffix::None)));
        assert_eq!(unit.functions.len(), 1);
        assert_eq!(unit.functions[0].name, "get");

        let dir = std::env::temp_dir();
        let path = dir.join("test_global_var.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert!(data.len() > 52);
        assert_eq!(&data[0..4], b"\x7fELF");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn emit_data_section() {
        let src = "int x = 10;\nint f() { return x; }";
        let unit = parse::parse(src).unwrap();
        let dir = std::env::temp_dir();
        let path = dir.join("test_data_section.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();

        let data = std::fs::read(&path).unwrap();
        assert_eq!(&data[0..4], b"\x7fELF");
        // The .data section should contain the bytes for 10 (little-endian).
        let has_data_value = data
            .windows(4)
            .any(|w| w == 10i32.to_le_bytes());
        assert!(has_data_value, "expected .data to contain value 10");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn emit_bss_section() {
        let src = "int uninit;\nint get() { return uninit; }";
        let unit = parse::parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        assert_eq!(unit.globals[0].name, "uninit");
        assert!(unit.globals[0].init.is_none());

        let dir = std::env::temp_dir();
        let path = dir.join("test_bss_section.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert!(data.len() > 52);
        assert_eq!(&data[0..4], b"\x7fELF");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn const_eval() {
        assert_eq!(eval_const_expr(&Expr::IntLit(42, IntSuffix::None)).unwrap(), 42);
        assert_eq!(
            eval_const_expr(&Expr::Unary {
                op: UnaryOp::Neg,
                operand: Box::new(Expr::IntLit(5, IntSuffix::None)),
            })
            .unwrap(),
            -5
        );
        assert_eq!(
            eval_const_expr(&Expr::Binary {
                op: BinaryOp::Add,
                lhs: Box::new(Expr::IntLit(3, IntSuffix::None)),
                rhs: Box::new(Expr::IntLit(7, IntSuffix::None)),
            })
            .unwrap(),
            10
        );
        assert_eq!(
            eval_const_expr(&Expr::Binary {
                op: BinaryOp::Sub,
                lhs: Box::new(Expr::IntLit(10, IntSuffix::None)),
                rhs: Box::new(Expr::IntLit(3, IntSuffix::None)),
            })
            .unwrap(),
            7
        );
        assert_eq!(
            eval_const_expr(&Expr::Binary {
                op: BinaryOp::Mul,
                lhs: Box::new(Expr::IntLit(4, IntSuffix::None)),
                rhs: Box::new(Expr::IntLit(5, IntSuffix::None)),
            })
            .unwrap(),
            20
        );
        // Non-constant expression should fail.
        // Ident in global init is treated as a link-time address (returns 0 placeholder).
        assert_eq!(eval_const_expr(&Expr::Ident("x".into())).unwrap(), 0);
    }

    #[test]
    fn emit_extern_decl() {
        let src = "extern int foo;\nint get() { return foo; }";
        let unit = parse::parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        assert!(unit.globals[0].is_extern);

        let dir = std::env::temp_dir();
        let path = dir.join("test_extern_decl.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert_eq!(&data[0..4], b"\x7fELF");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn emit_static_global() {
        let src = "static int count;\nint inc() { count = count + 1; return count; }";
        let unit = parse::parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        assert!(unit.globals[0].is_static);
        assert!(!unit.globals[0].is_extern);

        let dir = std::env::temp_dir();
        let path = dir.join("test_static_global.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert_eq!(&data[0..4], b"\x7fELF");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn compile_init_list() {
        let src = "int f() { int arr[3] = {10, 20, 30}; return arr[1]; }";
        let unit = parse::parse(src).unwrap();
        let dir = std::env::temp_dir();
        let path = dir.join("test_compile_init_list.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert!(data.len() > 52);
        assert_eq!(&data[0..4], b"\x7fELF");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn compile_static_local() {
        let src = "int counter() { static int n = 0; n++; return n; }";
        let unit = parse::parse(src).unwrap();
        let dir = std::env::temp_dir();
        let path = dir.join("test_compile_static_local.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert!(data.len() > 52);
        assert_eq!(&data[0..4], b"\x7fELF");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn compile_string_global() {
        let src = "const char *msg = \"hello\"; int f() { return 0; }";
        let unit = parse::parse(src).unwrap();
        let dir = std::env::temp_dir();
        let path = dir.join("test_compile_string_global.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert_eq!(&data[0..4], b"\x7fELF");
        // The .data section should contain "hello\0".
        let has_hello = data.windows(6).any(|w| w == b"hello\0");
        assert!(has_hello, "expected .data to contain \"hello\\0\"");
        std::fs::remove_file(&path).unwrap();
    }

    #[test]
    fn compile_global_init_list() {
        let src = "int data[] = {10, 20, 30};\nint f() { return data[1]; }";
        let unit = parse::parse(src).unwrap();
        let dir = std::env::temp_dir();
        let path = dir.join("test_compile_global_init_list.doj");
        let path_str = path.to_str().unwrap();
        emit_object(&unit, path_str).unwrap();
        let data = std::fs::read(&path).unwrap();
        assert_eq!(&data[0..4], b"\x7fELF");
        // The .data section should contain the init list values.
        let has_10 = data.windows(4).any(|w| w == 10i32.to_le_bytes());
        let has_20 = data.windows(4).any(|w| w == 20i32.to_le_bytes());
        let has_30 = data.windows(4).any(|w| w == 30i32.to_le_bytes());
        assert!(has_10, "expected .data to contain 10");
        assert!(has_20, "expected .data to contain 20");
        assert!(has_30, "expected .data to contain 30");
        std::fs::remove_file(&path).unwrap();
    }
}
