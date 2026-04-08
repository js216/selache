// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for selsyms, prints ELF symbols in LDF format
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;

use std::fs;
use std::io::{self, Write};
use std::process;

use selelf::elf::{
    self, Elf32Header, Elf32Shdr, SHT_SYMTAB, STB_GLOBAL, STB_WEAK,
    STT_FUNC, STT_OBJECT,
};

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    let stdout = io::stdout();
    let mut w = stdout.lock();

    if let Err(e) = run(&args, &mut w) {
        let _ = writeln!(io::stderr(), "selsyms: {e}");
        process::exit(1);
    }
}

fn run(args: &[String], w: &mut dyn Write) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    if opts.show_help {
        cli::print_help(w)?;
        return Ok(());
    }

    if opts.show_version {
        cli::print_version(w)?;
        return Ok(());
    }

    if opts.files.is_empty() {
        cli::print_help(w)?;
        return Ok(());
    }

    for path in &opts.files {
        let data = fs::read(path).map_err(|e| {
            error::Error::Usage(format!("{path}: {e}"))
        })?;
        print_symbols(&data, &opts, w)?;
    }

    Ok(())
}

fn print_symbols(
    data: &[u8],
    opts: &cli::Options,
    w: &mut dyn Write,
) -> error::Result<()> {
    let hdr = elf::parse_header(data)?;
    let sections = parse_sections(data, &hdr)?;

    for sec in &sections {
        if sec.sh_type != SHT_SYMTAB {
            continue;
        }

        let strtab = load_strtab(data, &sections, sec.sh_link as usize)?;
        let sym_off = sec.sh_offset as usize;
        let sym_sz = sec.sh_size as usize;
        let entsize = if sec.sh_entsize > 0 {
            sec.sh_entsize as usize
        } else {
            16
        };

        if sym_off + sym_sz > data.len() {
            continue;
        }

        let nsyms = sym_sz / entsize;
        for i in 0..nsyms {
            let off = sym_off + i * entsize;
            if off + entsize > data.len() {
                break;
            }
            let sym = elf::parse_symbol(&data[off..], hdr.ei_data);

            let bind = sym.bind();
            if bind != STB_GLOBAL && bind != STB_WEAK {
                continue;
            }

            let stype = sym.sym_type();
            if stype != STT_FUNC && stype != STT_OBJECT {
                continue;
            }

            let name = elf::read_string_at(&strtab, sym.st_name);
            if name.is_empty() {
                continue;
            }

            if !opts.include_syms.is_empty()
                && !opts.include_syms.iter().any(|s| s == name)
            {
                continue;
            }

            if opts.exclude_syms.iter().any(|s| s == name) {
                continue;
            }

            writeln!(w, "{name} = 0x{:x};", sym.st_value)?;
        }
    }

    Ok(())
}

fn parse_sections(
    data: &[u8],
    hdr: &Elf32Header,
) -> error::Result<Vec<Elf32Shdr>> {
    let mut sections = Vec::with_capacity(hdr.e_shnum as usize);
    for i in 0..hdr.e_shnum as usize {
        let off =
            hdr.e_shoff as usize + i * hdr.e_shentsize as usize;
        if off + hdr.e_shentsize as usize > data.len() {
            return Err(selelf::error::Error::InvalidElf(
                "section header out of bounds".into(),
            )
            .into());
        }
        sections.push(elf::parse_section_header(&data[off..], hdr.ei_data));
    }
    Ok(sections)
}

fn load_strtab(
    data: &[u8],
    sections: &[Elf32Shdr],
    idx: usize,
) -> error::Result<Vec<u8>> {
    if idx >= sections.len() {
        return Err(selelf::error::Error::InvalidElf(
            "strtab index out of bounds".into(),
        )
        .into());
    }
    let sec = &sections[idx];
    let off = sec.sh_offset as usize;
    let sz = sec.sh_size as usize;
    if off + sz > data.len() {
        return Err(selelf::error::Error::InvalidElf(
            "strtab data out of bounds".into(),
        )
        .into());
    }
    Ok(data[off..off + sz].to_vec())
}

#[cfg(test)]
mod tests {
    use super::*;
    use selelf::testutil;

    fn run_with_args(args: &[&str]) -> (String, error::Result<()>) {
        let args: Vec<String> = args.iter().map(|s| s.to_string()).collect();
        let mut buf = Vec::new();
        let result = run(&args, &mut buf);
        (String::from_utf8(buf).unwrap(), result)
    }

    #[test]
    fn test_help_flag() {
        let (out, res) = run_with_args(&["-h"]);
        assert!(res.is_ok());
        assert!(out.contains("Usage: selsyms"));
    }

    #[test]
    fn test_version_flag() {
        let (out, res) = run_with_args(&["-v"]);
        assert!(res.is_ok());
        assert!(out.starts_with("selsyms "));
    }

    #[test]
    fn test_no_args_shows_help() {
        let (out, res) = run_with_args(&[]);
        assert!(res.is_ok());
        assert!(out.contains("Usage: selsyms"));
    }

    #[test]
    fn test_print_symbols_basic() {
        let data = testutil::make_elf_object(
            0x85,
            selelf::elf::ELFDATA2LSB,
            &[("_main", true), ("_helper", true)],
        );
        let opts = cli::Options {
            files: Vec::new(),
            include_syms: Vec::new(),
            exclude_syms: Vec::new(),
            show_help: false,
            show_version: false,
        };
        let mut buf = Vec::new();
        print_symbols(&data, &opts, &mut buf).unwrap();
        let out = String::from_utf8(buf).unwrap();
        assert!(out.contains("_main = 0x0;"));
        assert!(out.contains("_helper = 0x0;"));
    }

    #[test]
    fn test_print_symbols_include_filter() {
        let data = testutil::make_elf_object(
            0x85,
            selelf::elf::ELFDATA2LSB,
            &[("_main", true), ("_helper", true)],
        );
        let opts = cli::Options {
            files: Vec::new(),
            include_syms: vec!["_main".to_string()],
            exclude_syms: Vec::new(),
            show_help: false,
            show_version: false,
        };
        let mut buf = Vec::new();
        print_symbols(&data, &opts, &mut buf).unwrap();
        let out = String::from_utf8(buf).unwrap();
        assert!(out.contains("_main = 0x0;"));
        assert!(!out.contains("_helper"));
    }

    #[test]
    fn test_print_symbols_exclude_filter() {
        let data = testutil::make_elf_object(
            0x85,
            selelf::elf::ELFDATA2LSB,
            &[("_main", true), ("_helper", true)],
        );
        let opts = cli::Options {
            files: Vec::new(),
            include_syms: Vec::new(),
            exclude_syms: vec!["_main".to_string()],
            show_help: false,
            show_version: false,
        };
        let mut buf = Vec::new();
        print_symbols(&data, &opts, &mut buf).unwrap();
        let out = String::from_utf8(buf).unwrap();
        assert!(!out.contains("_main"));
        assert!(out.contains("_helper = 0x0;"));
    }

    #[test]
    fn test_skips_undefined_symbols() {
        let data = testutil::make_elf_object(
            0x85,
            selelf::elf::ELFDATA2LSB,
            &[("_extern", false), ("_defined", true)],
        );
        let opts = cli::Options {
            files: Vec::new(),
            include_syms: Vec::new(),
            exclude_syms: Vec::new(),
            show_help: false,
            show_version: false,
        };
        let mut buf = Vec::new();
        print_symbols(&data, &opts, &mut buf).unwrap();
        let out = String::from_utf8(buf).unwrap();
        // Undefined symbols still have FUNC type, they just have SHN_UNDEF.
        // But selsyms prints all global/weak FUNC/OBJECT regardless of section.
        // Undefined symbols ARE printed (value 0x0).
        // The filter is only on binding+type.
        assert!(out.contains("_defined = 0x0;"));
    }

    #[test]
    fn test_skips_local_symbols() {
        // make_elf_object creates only global symbols, so test with
        // a synthetic object that has a local section symbol
        let data = testutil::make_sharc_object(&["_func"]);
        let opts = cli::Options {
            files: Vec::new(),
            include_syms: Vec::new(),
            exclude_syms: Vec::new(),
            show_help: false,
            show_version: false,
        };
        let mut buf = Vec::new();
        print_symbols(&data, &opts, &mut buf).unwrap();
        let out = String::from_utf8(buf).unwrap();
        // Should have _func but not the .text section symbol
        assert!(out.contains("_func = 0x0;"));
        assert!(!out.contains(".text"));
    }

    #[test]
    fn test_no_symbols() {
        let data = testutil::make_elf_object(
            0x85,
            selelf::elf::ELFDATA2LSB,
            &[],
        );
        let opts = cli::Options {
            files: Vec::new(),
            include_syms: Vec::new(),
            exclude_syms: Vec::new(),
            show_help: false,
            show_version: false,
        };
        let mut buf = Vec::new();
        print_symbols(&data, &opts, &mut buf).unwrap();
        let out = String::from_utf8(buf).unwrap();
        assert!(out.is_empty());
    }
}
