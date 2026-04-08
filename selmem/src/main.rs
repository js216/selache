// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for selmem SHARC memory initializer
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;
mod init;

use std::process;

const BANNER: &str = "\
ADSP-21xxx Family Memory Initializer\n\
Version: ";

fn print_banner() {
    eprintln!("{BANNER}{}", env!("CARGO_PKG_VERSION"));
    eprintln!("Copyright (c) 2026 Jakob Kastelic");
}

fn print_usage() {
    print_banner();
    eprintln!();
    eprintln!("Usage: selmem [-h  -v ] -o outputfile inputfile");
    eprintln!("Where:");
    eprintln!("\t-h\tDisplay usage");
    eprintln!("\t-v\tVerbose");
    eprintln!("\t-o\tSpecify output file name");
}

fn fatal(msg: &str) -> ! {
    eprintln!();
    eprintln!("%selmem - FATAL ERROR");
    eprintln!();
    eprintln!("{msg}");
    process::exit(255)
}

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(255);
    }

    let opts = match cli::parse_args(&args) {
        Ok(opts) => opts,
        Err(e) => {
            print_banner();
            fatal(&e.to_string());
        }
    };

    if opts.show_help {
        print_usage();
        return;
    }

    print_banner();

    if let Err(e) = run(&opts) {
        fatal(&e.to_string());
    }
}

fn run(opts: &cli::Options) -> error::Result<()> {
    let input_data = std::fs::read(&opts.input_file)?;
    let output_data = init::process(&input_data, opts.verbose)?;
    std::fs::write(&opts.output_file, &output_data)?;
    Ok(())
}
