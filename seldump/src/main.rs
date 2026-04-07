// SPDX-License-Identifier: GPL-3.0
// main.rs --- ELF inspector entry point
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod dump;
mod dwarf;
mod error;
mod hex;

use std::fs;
use std::io::{self, Write};
use std::process;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    let stdout = io::stdout();
    let mut w = stdout.lock();

    if let Err(e) = run(&args, &mut w) {
        let _ = writeln!(io::stderr(), "seldump: {e}");
        process::exit(1);
    }
}

fn run(args: &[String], w: &mut dyn Write) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    if opts.show_help {
        cli::print_help(w).map_err(error::Error::Io)?;
        return Ok(());
    }

    if opts.show_version {
        writeln!(w, "seldump version 0.1.0").map_err(error::Error::Io)?;
        return Ok(());
    }

    let file_path = opts.file.as_deref().ok_or(error::Error::NoFile)?;
    let file_data = fs::read(file_path)?;

    // Check if this is an archive
    let is_archive = file_data.len() >= 8 && &file_data[0..8] == b"!<elfa>\n";

    if is_archive {
        if opts.show_arsym {
            dump::dump_arsym(&file_data, w).map_err(error::Error::Io)?;
        }

        let archive = selelf::archive::read(&file_data)?;

        if opts.archive_member.is_some() || opts.show_arall {
            dump::dump_archive(&archive, opts.archive_member.as_deref(), &opts, w)
                .map_err(error::Error::Io)?;
        } else if !opts.show_arsym {
            // No member specified and not -arsym -- dump the archive members list
            dump::dump_archive(&archive, opts.archive_member.as_deref(), &opts, w)
                .map_err(error::Error::Io)?;
        }
    } else {
        dump::dump_elf(&file_data, &opts, w).map_err(error::Error::Io)?;
    }

    Ok(())
}
