// SPDX-License-Identifier: GPL-3.0
// xtest.rs --- Integration tests for seldump
// Copyright (c) 2026 Jakob Kastelic

use selelf::elf::ELFDATA2LSB;
use selelf::testutil;

// We need to test seldump internals, but since it's a binary crate we test
// via the library-like modules. We'll build synthetic ELF data and verify
// the dump output by calling the binary as a subprocess or by importing
// the modules directly.
//
// Since seldump is a binary crate, we test by building synthetic data and
// running the binary. But for unit-style tests we rely on the in-crate #[cfg(test)].
// These integration tests focus on end-to-end scenarios via subprocess.

use std::io::Write;
use std::process::Command;

fn seldump_bin() -> std::path::PathBuf {
    // Build path to the binary
    let mut path = std::path::PathBuf::from(env!("CARGO_BIN_EXE_seldump"));
    // If not found, try the target directory
    if !path.exists() {
        path = std::path::PathBuf::from("target/debug/seldump");
    }
    path
}

fn write_temp_file(data: &[u8], name: &str) -> std::path::PathBuf {
    let dir = std::env::temp_dir().join("seldump_test");
    std::fs::create_dir_all(&dir).unwrap();
    let path = dir.join(name);
    let mut f = std::fs::File::create(&path).unwrap();
    f.write_all(data).unwrap();
    path
}

#[test]
fn test_file_header_dump() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[]);
    let path = write_temp_file(&data, "test_fh.doj");
    let output = Command::new(seldump_bin())
        .args(["-fh", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    assert!(stdout.contains("---- ELF File Header ----"));
    assert!(stdout.contains("ELF Header"));
    assert!(stdout.contains("2LSB"));
    assert!(stdout.contains("relo"));
    assert!(stdout.contains("SHARC"));
    assert!(stdout.contains("32-bit"));
}

#[test]
fn test_section_header_dump() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
    let path = write_temp_file(&data, "test_sh.doj");
    let output = Command::new(seldump_bin())
        .args(["-sh", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("---- ELF Section Header Table ----"));
    assert!(stdout.contains("Section Header Table"));
    assert!(stdout.contains(".shstrtab"));
    assert!(stdout.contains(".text"));
    assert!(stdout.contains(".symtab"));
}

#[test]
fn test_symbol_table_dump() {
    let data = testutil::make_elf_object(
        0x85,
        ELFDATA2LSB,
        &[("_main", true), ("_helper", true)],
    );
    let path = write_temp_file(&data, "test_sym.doj");
    let output = Command::new(seldump_bin())
        .args(["-n", ".symtab", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("_main"));
    assert!(stdout.contains("_helper"));
    assert!(stdout.contains("global"));
}

#[test]
fn test_string_table_dump() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
    let path = write_temp_file(&data, "test_strtab.doj");
    let output = Command::new(seldump_bin())
        .args(["-n", ".strtab", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("_main"));
    assert!(stdout.contains("String Table for section .strtab"));
}

#[test]
fn test_hex_ascii_dump() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[]);
    let path = write_temp_file(&data, "test_hexa.doj");
    let output = Command::new(seldump_bin())
        .args(["-na", ".text", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("---- Section: .text"));
    // hex+ascii format: 4-byte groups, ASCII after 3 spaces
    assert!(stdout.contains("00000000:"));
}

#[test]
fn test_hex_dump_group_sizes() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[]);
    let path = write_temp_file(&data, "test_hexg.doj");
    let output = Command::new(seldump_bin())
        .args(["-nx", ".text", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("---- Section: .text"));
}

#[test]
fn test_disassembly() {
    // Build an ELF with a code section containing some known bytes
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[]);
    let path = write_temp_file(&data, "test_disasm.doj");
    // The .text section has 4 bytes but we need 6+ for a full instruction.
    // With -ni it will attempt disassembly; with < 6 bytes it just produces nothing.
    let output = Command::new(seldump_bin())
        .args(["-ni", ".text", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("---- Section: .text"));
}

#[test]
fn test_archive_member_access() {
    let obj1 = testutil::make_sharc_object(&["_main"]);
    let obj2 = testutil::make_sharc_object(&["_helper"]);
    let ar_data = testutil::make_archive_bytes(&[("main.doj", &obj1), ("helper.doj", &obj2)]);
    let path = write_temp_file(&ar_data, "test_ar.dlb");

    // Access specific member
    let arg = format!("{}(main.doj)", path.to_str().unwrap());
    let output = Command::new(seldump_bin())
        .args(["-sh", &arg])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    assert!(stdout.contains("main.doj"));
    assert!(stdout.contains("---- ELF Section Header Table ----"));
}

#[test]
fn test_archive_symbol_table() {
    let obj1 = testutil::make_sharc_object(&["_main"]);
    let obj2 = testutil::make_sharc_object(&["_helper"]);
    let ar_data = testutil::make_archive_bytes(&[("main.doj", &obj1), ("helper.doj", &obj2)]);
    let path = write_temp_file(&ar_data, "test_arsym.dlb");

    let output = Command::new(seldump_bin())
        .args(["-arsym", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("Archive Symbol Table"));
    assert!(stdout.contains("_main"));
    assert!(stdout.contains("_helper"));
}

#[test]
fn test_default_shows_section_headers() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[]);
    let path = write_temp_file(&data, "test_default.doj");
    // No display options -> should show section headers
    let output = Command::new(seldump_bin())
        .arg(path.to_str().unwrap())
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("---- ELF Section Header Table ----"));
}

#[test]
fn test_all_flag() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
    let path = write_temp_file(&data, "test_all.doj");
    let output = Command::new(seldump_bin())
        .args(["-all", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("---- ELF File Header ----"));
    assert!(stdout.contains("---- ELF Section Header Table ----"));
}

#[test]
fn test_ost_flag() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
    let path = write_temp_file(&data, "test_ost.doj");
    let output = Command::new(seldump_bin())
        .args(["-n", ".strtab", "-ost", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    // -ost with only a strtab requested should produce no section output
    assert!(!stdout.contains(".strtab"));
}

#[test]
fn test_section_name_glob() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
    let path = write_temp_file(&data, "test_glob.doj");
    let output = Command::new(seldump_bin())
        .args(["-n", ".s*", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    // Should match .shstrtab, .strtab, .symtab
    assert!(stdout.contains(".shstrtab"));
    assert!(stdout.contains(".strtab"));
    assert!(stdout.contains(".symtab"));
}

#[test]
fn test_section_index_range() {
    let data = testutil::make_elf_object(0x85, ELFDATA2LSB, &[("_main", true)]);
    let path = write_temp_file(&data, "test_idx.doj");
    let output = Command::new(seldump_bin())
        .args(["-i", "1-2", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    // Should dump sections 1 and 2 with standard title format
    assert!(stdout.contains("---- Section:"));
}

#[test]
fn test_version_flag() {
    let output = Command::new(seldump_bin())
        .args(["-v"])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    // -v doesn't require a file
    assert!(stdout.contains("seldump version 0.1.0"));
}

#[test]
fn test_help_flag() {
    let output = Command::new(seldump_bin())
        .args(["-help"])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(stdout.contains("Usage: seldump"));
    assert!(stdout.contains("-fh"));
    assert!(stdout.contains("-n name"));
}

#[test]
fn test_no_file_error() {
    let output = Command::new(seldump_bin())
        .args(["-fh"])
        .output()
        .unwrap();
    assert!(!output.status.success());
    let stderr = String::from_utf8(output.stderr).unwrap();
    assert!(stderr.contains("no object file"));
}

#[test]
fn test_arall_flag() {
    let obj1 = testutil::make_sharc_object(&["_main"]);
    let obj2 = testutil::make_sharc_object(&["_helper"]);
    let ar_data = testutil::make_archive_bytes(&[("main.doj", &obj1), ("helper.doj", &obj2)]);
    let path = write_temp_file(&ar_data, "test_arall.dlb");

    let output = Command::new(seldump_bin())
        .args(["-arall", "-sh", path.to_str().unwrap()])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("main.doj"));
    assert!(stdout.contains("helper.doj"));
    assert!(stdout.contains("---- ELF Section Header Table ----"));
}

#[test]
fn test_archive_member_glob() {
    let obj1 = testutil::make_sharc_object(&["_main"]);
    let obj2 = testutil::make_sharc_object(&["_helper"]);
    let ar_data = testutil::make_archive_bytes(&[("main.doj", &obj1), ("helper.doj", &obj2)]);
    let path = write_temp_file(&ar_data, "test_arglob.dlb");

    let arg = format!("{}(*.doj)", path.to_str().unwrap());
    let output = Command::new(seldump_bin())
        .args(["-sh", &arg])
        .output()
        .unwrap();
    let stdout = String::from_utf8(output.stdout).unwrap();
    assert!(output.status.success());
    assert!(stdout.contains("main.doj"));
    assert!(stdout.contains("helper.doj"));
}
