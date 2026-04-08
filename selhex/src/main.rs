// SPDX-License-Identifier: GPL-3.0
// main.rs --- Intel HEX32 to Motorola S-record converter
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;
mod ihex;
mod srec;

use std::fs;
use std::io::{self, BufWriter, Write};
use std::process;

use cli::OutputFormat;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();

    if let Err(e) = run(&args) {
        let is_no_input = matches!(e, error::Error::NoInput);
        format_error(&e);
        if is_no_input {
            eprintln!();
        }
        print_totals(1, 0);
        process::exit(1);
    }
}

fn run(args: &[String]) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    let input = fs::read_to_string(&opts.input_file)?;
    let records = ihex::parse_ihex(&input)?;

    let output_path = opts.output_path();
    let file = fs::File::create(&output_path)?;
    let mut w = BufWriter::new(file);

    match opts.format {
        OutputFormat::StripHex => srec::write_binary(&records, &mut w)?,
        OutputFormat::S1 => srec::write_s1(&records, &mut w)?,
        OutputFormat::S2 => srec::write_s2(&records, &mut w)?,
        OutputFormat::S3 => srec::write_s3(&records, &mut w)?,
    }

    w.flush()?;
    Ok(())
}

/// Print an error in standard format.
fn format_error(err: &error::Error) {
    match err {
        error::Error::NoInput => {
            eprintln!("[Error ut1007]   No input file");
        }
        error::Error::Io(e) => {
            eprintln!("[Error ut1001]   {e}");
        }
        error::Error::Parse { line, msg } => {
            eprintln!("[Error ut1002]   line {line}: {msg}");
        }
        error::Error::InvalidChecksum { line } => {
            eprintln!("[Error ut1003]   line {line}: invalid checksum");
        }
        error::Error::Usage(msg) => {
            eprintln!("[Error ut1004]   {msg}");
        }
    }
}

fn print_totals(errors: u32, warnings: u32) {
    let _ = writeln!(
        io::stderr(),
        "HEX2S totals: {errors} error(s) and {warnings} warning(s)"
    );
}
