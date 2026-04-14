// SPDX-License-Identifier: GPL-3.0
// main.rs --- selas entry point: thin driver over the selas library
// Copyright (c) 2026 Jakob Kastelic

use std::process;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(1);
    }

    if let Err(e) = selas::cli::parse_args(&args).and_then(|opts| selas::run(&opts)) {
        eprintln!("selas: {e}");
        process::exit(1);
    }
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
