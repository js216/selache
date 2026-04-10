// SPDX-License-Identifier: GPL-3.0
// main.rs --- selas entry point: SHARC+ assembler for ADSP-2156x
// Copyright (c) 2026 Jakob Kastelic

mod asmparse;
mod assemble;
mod cli;
mod error;
mod preproc;

use std::process;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(1);
    }

    if let Err(e) = run(&args) {
        eprintln!("selas: {e}");
        process::exit(1);
    }
}

fn run(args: &[String]) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    if opts.show_version {
        println!("SHARC+ Assembler");
        println!("Version {}", env!("CARGO_PKG_VERSION"));
        return Ok(());
    }

    if opts.verbose {
        eprintln!("assembling {} -> {}", opts.input, opts.output);
    }

    // Read and preprocess the source
    let src = std::fs::read_to_string(&opts.input)?;
    let mut pp = preproc::Preprocessor::new(
        opts.proc.as_deref(),
        &opts.include_dirs,
        &opts.defines,
    );
    let processed = pp.process(&src, &opts.input)?;

    if opts.preprocess_only {
        if opts.output.is_empty() || opts.output == "/dev/null" {
            print!("{processed}");
        } else {
            std::fs::write(&opts.output, &processed)?;
        }
        return Ok(());
    }

    // Write preprocessed source to a temp file for the assembler
    let tmp_dir = std::env::temp_dir();
    let tmp_path = tmp_dir.join("selas_pp.s");
    std::fs::write(&tmp_path, &processed)?;

    let tmp_str = tmp_path.to_string_lossy();
    let is_visa = opts.proc.as_deref()
        .is_some_and(|p| p.eq_ignore_ascii_case("ADSP-21569"));
    if is_visa {
        assemble::assemble_file_visa(&tmp_str, &opts.output)?;
    } else {
        assemble::assemble_file(&tmp_str, &opts.output)?;
    }

    let _ = std::fs::remove_file(&tmp_path);

    if opts.verbose {
        eprintln!("done");
    }

    Ok(())
}

fn print_usage() {
    eprintln!("Usage: selas [options] <input.s>");
    eprintln!();
    eprintln!("Options:");
    eprintln!("    -o <file>          Output file (default: input.doj)");
    eprintln!("    -proc <processor>  Target processor (e.g. ADSP-21569)");
    eprintln!("    -I <dir>           Add include search directory");
    eprintln!("    -D <sym>[=value]   Define preprocessor symbol");
    eprintln!("    --preprocess-only  Preprocess only, do not assemble");
    eprintln!("    -v                 Verbose output");
    eprintln!("    -version           Print version information");
}
