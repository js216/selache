// SPDX-License-Identifier: GPL-3.0
// main.rs --- selcc entry point: C compiler for ADSP-2156x
// Copyright (c) 2026 Jakob Kastelic

mod ast;
mod cli;
mod emit;
mod error;
mod ir;
mod ir_opt;
mod isel;
mod lex;
mod lower;
mod mach;
mod obj;
mod parse;
mod preproc;
mod regalloc;
mod target;
mod token;
mod types;

use std::process;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(1);
    }

    if let Err(e) = run(&args) {
        eprintln!("selcc: {e}");
        process::exit(1);
    }
}

fn run(args: &[String]) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    if opts.show_version {
        println!("Selache C Compiler for SHARC+");
        println!("Version {}", env!("CARGO_PKG_VERSION"));
        return Ok(());
    }

    if opts.inputs.is_empty() {
        return Err(error::Error::MissingInput);
    }

    let input = &opts.inputs[0];
    let src = std::fs::read_to_string(input)?;

    // Preprocess.
    let mut pp = preproc::Preprocessor::new();
    for def in &opts.defines {
        if let Some((name, val)) = def.split_once('=') {
            pp.define(name, val);
        } else {
            pp.define(def, "1");
        }
    }
    for undef in &opts.undefines {
        pp.undefine(undef);
    }
    for dir in &opts.include_dirs {
        pp.add_include_dir(dir);
    }
    if let Some(proc_name) = &opts.processor {
        pp.set_processor(proc_name);
    }
    // Set addressing mode macros based on char-size.
    if opts.char_size == 8 {
        pp.define("__BYTE_ADDRESSING__", "1");
    }
    if opts.swc {
        pp.define("__SWC__", "1");
    }
    let processed = pp.process(&src, input)?;

    if opts.stop_after == cli::StopAfter::Preprocess {
        print!("{processed}");
        return Ok(());
    }

    let unit = parse::parse(&processed)?;

    eprintln!(
        "parsed {} function(s), {} global(s) from {input}",
        unit.functions.len(),
        unit.globals.len(),
    );

    // Determine output path.
    let output = match &opts.output {
        Some(o) => o.clone(),
        None => {
            // Replace .c extension with .doj.
            let stem = input.strip_suffix(".c").unwrap_or(input);
            format!("{stem}.doj")
        }
    };

    obj::emit_object(&unit, &output)?;
    eprintln!("wrote {output}");

    Ok(())
}

fn print_usage() {
    eprintln!("Usage: selcc [-switch [...]] sourcefile [sourcefile ...]");
    eprintln!();
    eprintln!("Options:");
    eprintln!("    -c            Compile and assemble only (do not link)");
    eprintln!("    -S            Compile only (produce assembly)");
    eprintln!("    -E            Preprocess only");
    eprintln!("    -o file       Place output in file");
    eprintln!("    -proc name    Target processor (e.g. ADSP-21569)");
    eprintln!("    -O            Enable optimization");
    eprintln!("    -g            Generate debug information");
    eprintln!("    -I dir        Add include search path");
    eprintln!("    -D name=val   Define preprocessor macro");
    eprintln!("    -version      Display version information");
    eprintln!("    -help         Display this help");
}
