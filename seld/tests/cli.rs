// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Synthetic integration tests for the seld linker
// Copyright (c) 2026 Jakob Kastelic

use std::path::{Path, PathBuf};
use std::process::Command;
use std::sync::atomic::{AtomicU64, Ordering};

// ---------------------------------------------------------------------------
// Test harness
// ---------------------------------------------------------------------------

fn seld_bin() -> PathBuf {
    PathBuf::from(env!("CARGO_BIN_EXE_seld"))
}

static WORK_COUNTER: AtomicU64 = AtomicU64::new(0);

fn make_workdir(tag: &str) -> PathBuf {
    let n = WORK_COUNTER.fetch_add(1, Ordering::SeqCst);
    let mut dir = std::env::temp_dir();
    dir.push(format!("seld_test_{}_{}_{}", tag, std::process::id(), n));
    let _ = std::fs::remove_dir_all(&dir);
    std::fs::create_dir_all(&dir).unwrap();
    dir
}

fn run_seld(args: &[&str], work: &Path) -> (i32, String, String) {
    let out = Command::new(seld_bin())
        .args(args)
        .current_dir(work)
        .output()
        .unwrap_or_else(|e| panic!("failed to spawn seld: {e}"));
    (
        out.status.code().unwrap_or(-1),
        String::from_utf8_lossy(&out.stdout).into_owned(),
        String::from_utf8_lossy(&out.stderr).into_owned(),
    )
}

fn write_file(dir: &Path, name: &str, data: &[u8]) -> PathBuf {
    let path = dir.join(name);
    std::fs::write(&path, data).unwrap();
    path
}

fn write_text(dir: &Path, name: &str, text: &str) -> PathBuf {
    write_file(dir, name, text.as_bytes())
}

// ---------------------------------------------------------------------------
// Synthetic .doj builder
// ---------------------------------------------------------------------------

struct DojSection<'a> {
    name: &'a str,
    data: &'a [u8],
    sh_type: u32,  // 1 = PROGBITS, 8 = NOBITS
    sh_flags: u32, // 0x6 = code (AX), 0x3 = data (WA)
}

struct DojSymbol<'a> {
    name: &'a str,
    section_index_1based: usize, // 0 = UNDEF, 1+ = user section
    value: u32,
    bind: u8,  // 1 = GLOBAL, 2 = WEAK
    stype: u8, // 0 = NOTYPE, 1 = OBJECT, 2 = FUNC
}

#[derive(Default)]
struct Shdr {
    sh_name: u32,
    sh_type: u32,
    sh_flags: u32,
    sh_addr: u32,
    sh_offset: u32,
    sh_size: u32,
    sh_link: u32,
    sh_info: u32,
    sh_align: u32,
    sh_entsize: u32,
}

fn write_shdr(out: &mut [u8], base: usize, s: &Shdr) {
    out[base..base + 4].copy_from_slice(&s.sh_name.to_le_bytes());
    out[base + 4..base + 8].copy_from_slice(&s.sh_type.to_le_bytes());
    out[base + 8..base + 12].copy_from_slice(&s.sh_flags.to_le_bytes());
    out[base + 12..base + 16].copy_from_slice(&s.sh_addr.to_le_bytes());
    out[base + 16..base + 20].copy_from_slice(&s.sh_offset.to_le_bytes());
    out[base + 20..base + 24].copy_from_slice(&s.sh_size.to_le_bytes());
    out[base + 24..base + 28].copy_from_slice(&s.sh_link.to_le_bytes());
    out[base + 28..base + 32].copy_from_slice(&s.sh_info.to_le_bytes());
    out[base + 32..base + 36].copy_from_slice(&s.sh_align.to_le_bytes());
    out[base + 36..base + 40].copy_from_slice(&s.sh_entsize.to_le_bytes());
}

fn make_doj(sections: &[DojSection], symbols: &[DojSymbol]) -> Vec<u8> {
    const EHDR_SIZE: usize = 52;
    const SHDR_SIZE: usize = 40;
    const SYM_SIZE: usize = 16;

    let mut shstrtab: Vec<u8> = vec![0];
    let shstrtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".shstrtab\0");

    let mut sec_name_offsets = Vec::with_capacity(sections.len());
    for s in sections {
        sec_name_offsets.push(shstrtab.len());
        shstrtab.extend_from_slice(s.name.as_bytes());
        shstrtab.push(0);
    }

    let strtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".strtab\0");
    let symtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".symtab\0");

    let mut strtab: Vec<u8> = vec![0];
    let mut sym_name_offsets = Vec::with_capacity(symbols.len());
    for sym in symbols {
        sym_name_offsets.push(strtab.len());
        strtab.extend_from_slice(sym.name.as_bytes());
        strtab.push(0);
    }

    let num_sec_syms = sections.len();
    let first_global = 1 + num_sec_syms;
    let total_syms = 1 + num_sec_syms + symbols.len();
    let mut symtab = vec![0u8; total_syms * SYM_SIZE];

    for i in 0..num_sec_syms {
        let base = (1 + i) * SYM_SIZE;
        symtab[base + 12] = 3; // STB_LOCAL | STT_SECTION
        let shndx = (i as u16) + 2; // NULL(0) + .shstrtab(1) + user sections
        symtab[base + 14..base + 16].copy_from_slice(&shndx.to_le_bytes());
    }

    for (i, sym) in symbols.iter().enumerate() {
        let base = (1 + num_sec_syms + i) * SYM_SIZE;
        symtab[base..base + 4]
            .copy_from_slice(&(sym_name_offsets[i] as u32).to_le_bytes());
        symtab[base + 4..base + 8].copy_from_slice(&sym.value.to_le_bytes());
        symtab[base + 12] = (sym.bind << 4) | sym.stype;
        let elf_shndx: u16 = if sym.section_index_1based == 0 {
            0
        } else {
            (sym.section_index_1based as u16) + 1
        };
        symtab[base + 14..base + 16].copy_from_slice(&elf_shndx.to_le_bytes());
    }

    let shstrtab_off = EHDR_SIZE;
    let mut offset = shstrtab_off + shstrtab.len();
    let mut sec_offs = Vec::with_capacity(sections.len());
    let mut sec_sizes = Vec::with_capacity(sections.len());
    for s in sections {
        sec_offs.push(offset);
        let sz = s.data.len();
        sec_sizes.push(sz);
        if s.sh_type != 8 {
            offset += sz;
        }
    }
    let strtab_off = offset;
    offset += strtab.len();
    let symtab_off = offset;
    offset += symtab.len();
    let shtab_off = offset;

    let num_sections = 2 + sections.len() + 2;
    let total_size = shtab_off + num_sections * SHDR_SIZE;
    let mut out = vec![0u8; total_size];

    out[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
    out[4] = 1;
    out[5] = 1;
    out[6] = 1;
    out[16..18].copy_from_slice(&1u16.to_le_bytes()); // ET_REL
    out[18..20].copy_from_slice(&0x85u16.to_le_bytes()); // SHARC
    out[20..24].copy_from_slice(&1u32.to_le_bytes());
    out[32..36].copy_from_slice(&(shtab_off as u32).to_le_bytes());
    out[40..42].copy_from_slice(&52u16.to_le_bytes());
    out[46..48].copy_from_slice(&(SHDR_SIZE as u16).to_le_bytes());
    out[48..50].copy_from_slice(&(num_sections as u16).to_le_bytes());
    out[50..52].copy_from_slice(&1u16.to_le_bytes());

    out[shstrtab_off..shstrtab_off + shstrtab.len()].copy_from_slice(&shstrtab);
    for (i, s) in sections.iter().enumerate() {
        if s.sh_type != 8 && !s.data.is_empty() {
            let off = sec_offs[i];
            out[off..off + s.data.len()].copy_from_slice(s.data);
        }
    }
    out[strtab_off..strtab_off + strtab.len()].copy_from_slice(&strtab);
    out[symtab_off..symtab_off + symtab.len()].copy_from_slice(&symtab);

    let strtab_sec_idx = 2 + sections.len();
    let symtab_sec_idx = strtab_sec_idx + 1;

    write_shdr(
        &mut out,
        shtab_off + SHDR_SIZE,
        &Shdr {
            sh_name: shstrtab_name_off as u32,
            sh_type: 3,
            sh_offset: shstrtab_off as u32,
            sh_size: shstrtab.len() as u32,
            sh_align: 1,
            ..Shdr::default()
        },
    );

    for (i, s) in sections.iter().enumerate() {
        write_shdr(
            &mut out,
            shtab_off + (2 + i) * SHDR_SIZE,
            &Shdr {
                sh_name: sec_name_offsets[i] as u32,
                sh_type: s.sh_type,
                sh_flags: s.sh_flags,
                sh_offset: sec_offs[i] as u32,
                sh_size: sec_sizes[i] as u32,
                sh_align: 4,
                ..Shdr::default()
            },
        );
    }

    write_shdr(
        &mut out,
        shtab_off + strtab_sec_idx * SHDR_SIZE,
        &Shdr {
            sh_name: strtab_name_off as u32,
            sh_type: 3,
            sh_offset: strtab_off as u32,
            sh_size: strtab.len() as u32,
            sh_align: 1,
            ..Shdr::default()
        },
    );
    write_shdr(
        &mut out,
        shtab_off + symtab_sec_idx * SHDR_SIZE,
        &Shdr {
            sh_name: symtab_name_off as u32,
            sh_type: 2,
            sh_offset: symtab_off as u32,
            sh_size: symtab.len() as u32,
            sh_link: strtab_sec_idx as u32,
            sh_info: first_global as u32,
            sh_align: 4,
            sh_entsize: SYM_SIZE as u32,
            ..Shdr::default()
        },
    );

    out
}

// ---------------------------------------------------------------------------
// ELF parsing for verifying linker output
// ---------------------------------------------------------------------------

struct ElfHeader {
    e_type: u16,
    e_machine: u16,
    e_phoff: u32,
    e_shoff: u32,
    e_phnum: u16,
    e_shnum: u16,
    e_shstrndx: u16,
}

struct SectionHeader {
    sh_name: u32,
    sh_addr: u32,
    sh_offset: u32,
    sh_size: u32,
}

struct ProgramHeader {
    p_type: u32,
}

fn read_u16(data: &[u8], off: usize) -> u16 {
    u16::from_le_bytes(data[off..off + 2].try_into().unwrap())
}
fn read_u32(data: &[u8], off: usize) -> u32 {
    u32::from_le_bytes(data[off..off + 4].try_into().unwrap())
}

fn parse_elf_header(data: &[u8]) -> Option<ElfHeader> {
    if data.len() < 52 || &data[0..4] != b"\x7fELF" {
        return None;
    }
    Some(ElfHeader {
        e_type: read_u16(data, 16),
        e_machine: read_u16(data, 18),
        e_phoff: read_u32(data, 28),
        e_shoff: read_u32(data, 32),
        e_phnum: read_u16(data, 44),
        e_shnum: read_u16(data, 48),
        e_shstrndx: read_u16(data, 50),
    })
}

fn parse_section_headers(data: &[u8], hdr: &ElfHeader) -> Vec<SectionHeader> {
    let mut out = Vec::new();
    for i in 0..hdr.e_shnum as usize {
        let off = hdr.e_shoff as usize + i * 40;
        if off + 40 > data.len() {
            break;
        }
        out.push(SectionHeader {
            sh_name: read_u32(data, off),
            sh_addr: read_u32(data, off + 12),
            sh_offset: read_u32(data, off + 16),
            sh_size: read_u32(data, off + 20),
        });
    }
    out
}

fn read_cstr(data: &[u8], off: usize) -> String {
    let end = data[off..]
        .iter()
        .position(|&b| b == 0)
        .map(|n| off + n)
        .unwrap_or(data.len());
    String::from_utf8_lossy(&data[off..end]).into_owned()
}

fn get_section_names(
    data: &[u8],
    hdr: &ElfHeader,
    sections: &[SectionHeader],
) -> Vec<String> {
    if (hdr.e_shstrndx as usize) >= sections.len() {
        return vec![String::new(); sections.len()];
    }
    let shstrtab = &sections[hdr.e_shstrndx as usize];
    let base = shstrtab.sh_offset as usize;
    let end = base + shstrtab.sh_size as usize;
    let strtab = &data[base..end];
    sections
        .iter()
        .map(|s| read_cstr(strtab, s.sh_name as usize))
        .collect()
}

fn parse_program_headers(data: &[u8], hdr: &ElfHeader) -> Vec<ProgramHeader> {
    let mut out = Vec::new();
    for i in 0..hdr.e_phnum as usize {
        let off = hdr.e_phoff as usize + i * 32;
        if off + 32 > data.len() {
            break;
        }
        out.push(ProgramHeader {
            p_type: read_u32(data, off),
        });
    }
    out
}

// ---------------------------------------------------------------------------
// LDF fragments shared across tests
// ---------------------------------------------------------------------------

const LDF_SINGLE_CODE: &str = r#"ARCHITECTURE(ADSP-21569)

MEMORY {
    mem_code { TYPE(PM RAM) START(0x00090000) END(0x0009FFFF) WIDTH(48) }
}

PROCESSOR core0 {
    OUTPUT($COMMAND_LINE_OUTPUT_FILE)
    ENTRY(_main)
    SECTIONS {
        dxe_code PM {
            INPUT_SECTIONS( $COMMAND_LINE_OBJECTS(seg_pmco) )
        } > mem_code
    }
}
"#;

const LDF_CODE_AND_DATA: &str = r#"ARCHITECTURE(ADSP-21569)
MEMORY {
    mem_code { TYPE(PM RAM) START(0x00090000) END(0x0009FFFF) WIDTH(48) }
    mem_data { TYPE(DM RAM) START(0x000B0000) END(0x000BFFFF) WIDTH(32) }
}
PROCESSOR core0 {
    OUTPUT($COMMAND_LINE_OUTPUT_FILE)
    ENTRY(_main)
    SECTIONS {
        dxe_code PM {
            INPUT_SECTIONS( $COMMAND_LINE_OBJECTS(seg_pmco) )
        } > mem_code
        dxe_data DM {
            INPUT_SECTIONS( $COMMAND_LINE_OBJECTS(seg_dmda) )
        } > mem_data
    }
}
"#;

fn write_main_doj(work: &Path, code_bytes: &[u8]) -> PathBuf {
    let doj = make_doj(
        &[DojSection {
            name: "seg_pmco",
            data: code_bytes,
            sh_type: 1,
            sh_flags: 0x6,
        }],
        &[DojSymbol {
            name: "_main",
            section_index_1based: 1,
            value: 0,
            bind: 1,
            stype: 2,
        }],
    );
    write_file(work, "main.doj", &doj)
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[test]
fn help_flag_prints_usage() {
    let work = make_workdir("help");
    let (rc, _, err) = run_seld(&["-h"], &work);
    assert_eq!(rc, 0, "rc={rc}");
    assert!(
        err.contains("ADSP-2156x Family LDF Linker"),
        "stderr: {err}"
    );
    assert!(err.contains("Usage:"), "stderr: {err}");
}

#[test]
fn version_flag_prints_banner() {
    let work = make_workdir("version");
    let (rc, _, err) = run_seld(&["-version"], &work);
    assert_eq!(rc, 0, "rc={rc}");
    assert!(
        err.contains("ADSP-2156x Family LDF Linker"),
        "stderr: {err}"
    );
}

#[test]
fn no_args_is_error() {
    let work = make_workdir("no_args");
    let (rc, _, err) = run_seld(&[], &work);
    assert_ne!(rc, 0, "rc={rc}");
    assert!(err.contains("Usage:"), "stderr: {err}");
}

#[test]
fn missing_ldf_is_error() {
    let work = make_workdir("missing_ldf");
    write_main_doj(&work, &[0u8; 48]);
    let (rc, _, err) = run_seld(&["-o", "out.dxe", "main.doj"], &work);
    assert_ne!(rc, 0, "rc={rc}");
    assert!(
        err.contains("LDF") || err.to_lowercase().contains("ldf"),
        "stderr: {err}"
    );
}

#[test]
fn basic_link_single_object() {
    let work = make_workdir("basic_link");
    let code: Vec<u8> = (0u8..48).collect();
    write_main_doj(&work, &code);
    write_text(&work, "test.ldf", LDF_SINGLE_CODE);

    let (rc, _, err) = run_seld(
        &["-T", "test.ldf", "-o", "out.dxe", "main.doj"],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");

    let dxe = std::fs::read(work.join("out.dxe")).expect("out.dxe missing");
    let hdr = parse_elf_header(&dxe).expect("not a valid ELF");
    assert_eq!(hdr.e_type, 2, "expected ET_EXEC");
    assert_eq!(hdr.e_machine, 0x85, "expected SHARC");

    let sections = parse_section_headers(&dxe, &hdr);
    let names = get_section_names(&dxe, &hdr, &sections);
    assert!(
        names.iter().any(|n| n == "dxe_code"),
        "sections: {names:?}"
    );

    for (i, name) in names.iter().enumerate() {
        if name == "dxe_code" {
            assert_eq!(
                sections[i].sh_addr, 0x0009_0000,
                "code section addr"
            );
            break;
        }
    }

    let phdrs = parse_program_headers(&dxe, &hdr);
    assert!(!phdrs.is_empty(), "no program headers");
    assert!(phdrs.iter().any(|p| p.p_type == 1), "no PT_LOAD segment");
}

#[test]
fn two_objects_merge_into_one_section() {
    let work = make_workdir("two_obj");
    let code1 = vec![0x11u8; 24];
    let code2 = vec![0x22u8; 24];

    let doj1 = make_doj(
        &[DojSection {
            name: "seg_pmco",
            data: &code1,
            sh_type: 1,
            sh_flags: 0x6,
        }],
        &[DojSymbol {
            name: "_main",
            section_index_1based: 1,
            value: 0,
            bind: 1,
            stype: 2,
        }],
    );
    let doj2 = make_doj(
        &[DojSection {
            name: "seg_pmco",
            data: &code2,
            sh_type: 1,
            sh_flags: 0x6,
        }],
        &[DojSymbol {
            name: "_helper",
            section_index_1based: 1,
            value: 0,
            bind: 1,
            stype: 2,
        }],
    );
    write_file(&work, "a.doj", &doj1);
    write_file(&work, "b.doj", &doj2);
    write_text(&work, "test.ldf", LDF_SINGLE_CODE);

    let (rc, _, err) = run_seld(
        &["-T", "test.ldf", "-o", "out.dxe", "a.doj", "b.doj"],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");

    let dxe = std::fs::read(work.join("out.dxe")).unwrap();
    let hdr = parse_elf_header(&dxe).unwrap();
    let sections = parse_section_headers(&dxe, &hdr);
    let names = get_section_names(&dxe, &hdr, &sections);

    let mut merged_size = 0u32;
    for (i, name) in names.iter().enumerate() {
        if name == "dxe_code" {
            merged_size = sections[i].sh_size;
            break;
        }
    }
    assert!(merged_size >= 48, "merged size: {merged_size}");
}

#[test]
fn multiple_memory_segments() {
    let work = make_workdir("multi_seg");
    let code = vec![0xAAu8; 24];
    let data_sec = vec![0xBBu8; 16];

    let doj = make_doj(
        &[
            DojSection {
                name: "seg_pmco",
                data: &code,
                sh_type: 1,
                sh_flags: 0x6,
            },
            DojSection {
                name: "seg_dmda",
                data: &data_sec,
                sh_type: 1,
                sh_flags: 0x3,
            },
        ],
        &[
            DojSymbol {
                name: "_main",
                section_index_1based: 1,
                value: 0,
                bind: 1,
                stype: 2,
            },
            DojSymbol {
                name: "_data",
                section_index_1based: 2,
                value: 0,
                bind: 1,
                stype: 1,
            },
        ],
    );
    write_file(&work, "main.doj", &doj);
    write_text(&work, "test.ldf", LDF_CODE_AND_DATA);

    let (rc, _, err) = run_seld(
        &["-T", "test.ldf", "-o", "out.dxe", "main.doj"],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");

    let dxe = std::fs::read(work.join("out.dxe")).unwrap();
    let hdr = parse_elf_header(&dxe).unwrap();
    let sections = parse_section_headers(&dxe, &hdr);
    let names = get_section_names(&dxe, &hdr, &sections);

    let mut code_found = false;
    let mut data_found = false;
    for (i, name) in names.iter().enumerate() {
        if name == "dxe_code" {
            assert_eq!(sections[i].sh_addr, 0x0009_0000, "code addr");
            code_found = true;
        }
        if name == "dxe_data" {
            assert_eq!(sections[i].sh_addr, 0x000B_0000, "data addr");
            data_found = true;
        }
    }
    assert!(code_found, "dxe_code not found");
    assert!(data_found, "dxe_data not found");
}

#[test]
fn strip_all_removes_symtab() {
    let work = make_workdir("strip_all");
    write_main_doj(&work, &[0u8; 24]);
    write_text(&work, "test.ldf", LDF_SINGLE_CODE);

    let (rc, _, err) = run_seld(
        &["-s", "-T", "test.ldf", "-o", "out.dxe", "main.doj"],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");

    let dxe = std::fs::read(work.join("out.dxe")).unwrap();
    let hdr = parse_elf_header(&dxe).unwrap();
    let sections = parse_section_headers(&dxe, &hdr);
    let names = get_section_names(&dxe, &hdr, &sections);
    assert!(!names.iter().any(|n| n == ".symtab"), "names: {names:?}");
}

#[test]
fn map_file_is_written() {
    let work = make_workdir("map_file");
    write_main_doj(&work, &[0u8; 24]);
    write_text(&work, "test.ldf", LDF_SINGLE_CODE);

    let (rc, _, err) = run_seld(
        &[
            "-T", "test.ldf", "-o", "out.dxe", "-Map", "out.map", "main.doj",
        ],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");

    let content = std::fs::read_to_string(work.join("out.map"))
        .expect("out.map missing");
    assert!(content.contains("ADSP-21569"), "map:\n{content}");
    assert!(content.contains("mem_code"), "map:\n{content}");
    assert!(content.contains("_main"), "map:\n{content}");
}

#[test]
fn script_constant_symbols_appear_in_map() {
    // A miniature LDF: a MEMORY block with two regions, one output
    // section that reserves a trailing chunk of the data region for
    // stack+heap, and the assignments that turn the reserve endpoints
    // into ldf_* public symbols. The linker must evaluate the right-
    // hand sides against the memory map and write the resulting
    // values into the map file as global symbols.
    let work = make_workdir("script_consts");
    write_main_doj(&work, &[0u8; 24]);
    let ldf = r#"ARCHITECTURE(ADSP-21569)
MEMORY {
    mem_code { TYPE(PM RAM) START(0x00090000) END(0x0009FFFF) WIDTH(48) }
    mem_bw   { TYPE(BW RAM) START(0x002403f0) END(0x0026ffff) WIDTH(8) }
}
PROCESSOR core0 {
    OUTPUT($COMMAND_LINE_OUTPUT_FILE)
    ENTRY(_main)
    SECTIONS {
        ___ldf_pmcachesize = 0;
        ___ldf_icachesize = 0xffffffff;
        dxe_code PM {
            INPUT_SECTIONS( $COMMAND_LINE_OBJECTS(seg_pmco) )
        } > mem_code
        dxe_stack_and_heap NO_INIT BW {
            RESERVE(stack_heap, stack_heap_length = 0x4000, 8)
            ldf_stack_space = stack_heap;
            ldf_stack_end = ldf_stack_space + stack_heap_length - 4;
            ldf_stack_length = ldf_stack_end - ldf_stack_space;
            ldf_heap_space = ldf_stack_end + 4;
            ldf_heap_end = ldf_stack_space + stack_heap_length;
            ldf_heap_length = ldf_heap_end - ldf_heap_space;
        } > mem_bw
    }
}
"#;
    write_text(&work, "test.ldf", ldf);
    let (rc, _, err) = run_seld(
        &[
            "-T", "test.ldf", "-o", "out.dxe", "-Map", "out.map", "main.doj",
        ],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");
    let content = std::fs::read_to_string(work.join("out.map"))
        .expect("out.map missing");
    // The reserve occupies bytes [0x2403f0, 0x2443f0) -- length 0x4000
    // from the BW segment's base address. Expected derived values:
    //   stack_heap         = 0x002403f0
    //   stack_heap_length  = 0x00004000
    //   ldf_stack_space    = 0x002403f0
    //   ldf_stack_end      = 0x002443ec
    //   ldf_heap_space     = 0x002443f0
    //   ldf_heap_end       = 0x002443f0
    //   ldf_heap_length    = 0x00000000
    for (name, expected) in [
        ("___ldf_pmcachesize", 0x00000000u32),
        ("___ldf_icachesize", 0xffffffffu32),
        ("stack_heap", 0x002403f0),
        ("stack_heap_length", 0x00004000),
        ("ldf_stack_space", 0x002403f0),
        ("ldf_stack_end", 0x002443ec),
        ("ldf_heap_space", 0x002443f0),
        ("ldf_heap_length", 0x00000000),
    ] {
        let needle = format!("{name:<32} 0x{expected:08x}");
        assert!(
            content.contains(&needle),
            "map missing `{needle}`:\n{content}"
        );
    }
}

#[test]
fn typical_ldf_cache_constants_resolve_to_defaults() {
    // End-to-end test that mirrors the usual LDF structure for
    // `___ldf_pmcachesize` / `___ldf_icachesize` / `___ldf_dmcachesize`.
    // The default cache-size branch (the final #else, which the
    // preprocessor selects when none of the PMCACHE_XX etc. macros
    // are defined) assigns 0xffffffff to every cache-size symbol.
    // The fuzz accepts either that value or zero; what matters is
    // that the expression evaluator captures the assignment from the
    // LDF and writes it into the global symbol table, instead of
    // leaving the name as an unresolved reference.
    let work = make_workdir("typical_cache");
    write_main_doj(&work, &[0u8; 24]);
    let ldf = r#"ARCHITECTURE(ADSP-21569)
MEMORY {
    mem_code { TYPE(PM RAM) START(0x00090000) END(0x0009FFFF) WIDTH(48) }
}
PROCESSOR core0 {
    OUTPUT($COMMAND_LINE_OUTPUT_FILE)
    ENTRY(_main)
    SECTIONS {
        ___ldf_pmcachesize = 0xffffffff;
        ___ldf_icachesize = 0xffffffff;
        ___ldf_dmcachesize = 0xffffffff;
        dxe_code PM {
            INPUT_SECTIONS( $COMMAND_LINE_OBJECTS(seg_pmco) )
        } > mem_code
    }
}
"#;
    write_text(&work, "test.ldf", ldf);
    let (rc, _, err) = run_seld(
        &[
            "-T", "test.ldf", "-o", "out.dxe", "-Map", "out.map", "main.doj",
        ],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");
    let content = std::fs::read_to_string(work.join("out.map"))
        .expect("out.map missing");
    for name in ["___ldf_pmcachesize", "___ldf_icachesize", "___ldf_dmcachesize"] {
        let needle = format!("{name:<32} 0xffffffff");
        assert!(
            content.contains(&needle),
            "map missing `{needle}`:\n{content}"
        );
    }
}

#[test]
fn reserve_expand_fills_segment_tail() {
    // RESERVE_EXPAND grows a reserve to cover the free tail of its
    // target segment: `stack_and_heap_in_block0` starts with a small
    // initial allocation and then absorbs whatever L1 block0 BW
    // memory is left after placing all data sections. The reserve
    // base address is fixed by the first directive that claims the
    // name; the expand step only changes the length.
    let work = make_workdir("reserve_expand");
    write_main_doj(&work, &[0u8; 24]);
    let ldf = r#"ARCHITECTURE(ADSP-21569)
MEMORY {
    mem_code { TYPE(PM RAM) START(0x00090000) END(0x0009FFFF) WIDTH(48) }
    mem_bw   { TYPE(BW RAM) START(0x00240000) END(0x0024FFFF) WIDTH(8) }
}
PROCESSOR core0 {
    OUTPUT($COMMAND_LINE_OUTPUT_FILE)
    ENTRY(_main)
    SECTIONS {
        dxe_code PM {
            INPUT_SECTIONS( $COMMAND_LINE_OBJECTS(seg_pmco) )
        } > mem_code
        dxe_reserve NO_INIT BW {
            RESERVE(stack_heap, stack_heap_length = 0x1000, 8)
        } > mem_bw
        dxe_expand NO_INIT BW {
            RESERVE_EXPAND(stack_heap, stack_heap_length, 0, 8)
            ldf_heap_length = stack_heap_length;
            ldf_heap_base = stack_heap;
        } > mem_bw
    }
}
"#;
    write_text(&work, "test.ldf", ldf);
    let (rc, _, err) = run_seld(
        &[
            "-T", "test.ldf", "-o", "out.dxe", "-Map", "out.map", "main.doj",
        ],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");
    let content = std::fs::read_to_string(work.join("out.map"))
        .expect("out.map missing");
    // The BW segment runs from 0x00240000 to 0x0024FFFF (inclusive),
    // a total of 0x10000 bytes. The first RESERVE claims 0x1000
    // bytes at 0x00240000. The RESERVE_EXPAND then grows the
    // length to 0x10000 (the entire segment from the reserve
    // start). Base stays at 0x00240000.
    for (name, expected) in [
        ("stack_heap", 0x00240000u32),
        ("stack_heap_length", 0x00010000u32),
        ("ldf_heap_base", 0x00240000u32),
        ("ldf_heap_length", 0x00010000u32),
    ] {
        let needle = format!("{name:<32} 0x{expected:08x}");
        assert!(
            content.contains(&needle),
            "map missing `{needle}`:\n{content}"
        );
    }
}

#[test]
fn verbose_flag_produces_progress_output() {
    let work = make_workdir("verbose");
    write_main_doj(&work, &[0u8; 24]);
    write_text(&work, "test.ldf", LDF_SINGLE_CODE);

    let (rc, _, err) = run_seld(
        &["-v", "-T", "test.ldf", "-o", "out.dxe", "main.doj"],
        &work,
    );
    assert_eq!(rc, 0, "rc={rc}\nstderr: {err}");
    assert!(err.contains("Parsing LDF"), "stderr: {err}");
    assert!(
        err.contains("Resolving") || err.contains("resolving"),
        "stderr: {err}"
    );
}
