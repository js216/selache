// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for selpatch ELF section extract/replace tool
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;
mod patch;

use std::io::{self, Read, Write};
use std::process;

use cli::Action;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(1);
    }

    if let Err(e) = run(&args) {
        eprintln!("{e}");
        process::exit(1);
    }
}

fn run(args: &[String]) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    if opts.show_help {
        print_usage();
        return Ok(());
    }

    if opts.show_version {
        println!(" Selache ELF Patch utility");
        println!(" Version {}", env!("CARGO_PKG_VERSION"));
        return Ok(());
    }

    let elf_data = std::fs::read(&opts.input_file)?;

    match opts.action {
        Action::Get => {
            let section_data = patch::extract_section(&elf_data, &opts.section_name)?;
            let output = if opts.text_mode {
                patch::bytes_to_hex(&section_data).into_bytes()
            } else {
                section_data
            };
            write_output(&opts.output_file, &output)?;
        }
        Action::Replace => {
            let input_bytes = read_input(&opts.bits_file)?;
            let new_data = if opts.text_mode {
                let text = String::from_utf8_lossy(&input_bytes);
                patch::hex_to_bytes(&text)?
            } else {
                input_bytes
            };
            let patched = patch::replace_section(&elf_data, &opts.section_name, &new_data)?;
            match opts.output_file {
                Some(ref path) => std::fs::write(path, &patched)?,
                None => {
                    return Err(error::Error::Usage(
                        "replace requires -o output-filename".into(),
                    ));
                }
            }
        }
    }

    Ok(())
}

fn write_output(output_file: &Option<String>, data: &[u8]) -> error::Result<()> {
    match output_file {
        Some(path) => {
            std::fs::write(path, data)?;
        }
        None => {
            let stdout = io::stdout();
            let mut out = stdout.lock();
            out.write_all(data)?;
            out.flush()?;
        }
    }
    Ok(())
}

fn read_input(bits_file: &Option<String>) -> error::Result<Vec<u8>> {
    match bits_file {
        Some(path) => Ok(std::fs::read(path)?),
        None => {
            let mut buf = Vec::new();
            io::stdin().read_to_end(&mut buf)?;
            Ok(buf)
        }
    }
}

fn print_usage() {
    eprintln!("Usage: ");
    eprintln!(
        "       selpatch -get section-name [-o output-bits-filename] [-text] input-elf-filename"
    );
    eprintln!("       selpatch -replace section-name [-o output-filename] [-bits input-bits-filename] [-text] input-elf-filename");
    eprintln!("       selpatch [-help | -version]");
    eprintln!("Examples:");
    eprintln!("       selpatch -get _ov_os_overlay_1 -o bytes_bin o1.ovl(overlay1.elf)");
    eprintln!("       selpatch -get L1_code -o bytes_txt -text p0.dxe");
    eprintln!("       selpatch -replace _ov_os_overlay_1 -o o1_new_from_txt.ovl -bits bytes_txt -text o1.ovl(overlay1.elf)");
    eprintln!("       selpatch -replace L1_code -o p0_new.dxe -bits bytes_bin p0.dxe");
}
