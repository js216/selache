// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for selinit memory initializer
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;
mod init;

use std::process;

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
        print_help();
        return Ok(());
    }

    let elf_data = std::fs::read(&opts.input_file)?;
    let result = init::run(&elf_data, &opts)?;

    let output_path = opts.output_path();
    std::fs::write(&output_path, &result)?;

    if opts.verbose {
        eprintln!("selinit: wrote {output_path}");
    }

    Ok(())
}

fn print_usage() {
    eprintln!("Usage: selinit [options] Input.dxe");
    eprintln!("Use -help for a list of options.");
}

fn print_help() {
    println!(
        "   -BeginInit Symbol
                  \"Symbol\" points to the start address of the initialization
                   stream in the destination section. The default symbol is
                  \"___inits\" if this switch is absent.
   -h[elp]
                  Display a summary of the command line options
   -IgnoreSection SectName
                  Specify a section that is not to be processed by the
                  memory initializer. This switch can be used repeatedly.
   -Init InitCode.dxe
                  Specify an executable file to be inserted into the
                  initialization stream and executed as a callback during
                  the booting process. The switch can be used repeatedly
                  to specify a number of initialization executables.
   Input.dxe
                  Specify an input file name
   -NoAuto
                  Directs the memory initializer to not process sections in
                  the input file based on the section header flags (i.e. the
                  sections specified as either ZERO_INIT and RUNTIME_INIT in
                  the .ldf file). Instead, the memory initializer shall only
                  process sections specified on the command line using the
                  -section SectionName switch.
   -NoErase
                  Direct MemInit to not erase the processed sections in the
                  output file
   -o Output.dxe
                  Specify an output file name. A default file name will be
                  made if this switch is absent.
   -Section SectName
                  Specify a section in the input file in which the data
                  will be processed. This switch can be repeated to specify
                  a number of sections from the input file to be processed.
   -v
                  Generate verbose output as the memory initializer
                  processes the executable"
    );
}
