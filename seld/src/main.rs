// SPDX-License-Identifier: GPL-3.0
// main.rs --- Thin driver for the LDF-driven seld linker
// Copyright (c) 2026 Jakob Kastelic

use std::process;

const BANNER: &str = "\
ADSP-2156x Family LDF Linker\n\
Version: ";

fn print_banner() {
    eprintln!("{BANNER}{}", env!("CARGO_PKG_VERSION"));
    eprintln!("Copyright (c) 2026 Jakob Kastelic");
}

fn print_usage() {
    print_banner();
    eprintln!();
    eprintln!("Usage: seld [options] file1.doj [file2.doj ...]");
    eprintln!();
    eprintln!("Options:");
    eprintln!("  -proc processor     Target processor (e.g. ADSP-21569)");
    eprintln!("  -T filename         LDF (Linker Description File)");
    eprintln!("  -o filename         Output executable file (.dxe)");
    eprintln!("  -L path             Library search path (repeatable)");
    eprintln!("  -e                  Eliminate unused symbols");
    eprintln!("  -ek secName         Keep section from elimination");
    eprintln!("  -entry symbol       Entry point symbol");
    eprintln!("  -Map filename       Generate map file");
    eprintln!("  -s                  Strip all symbols");
    eprintln!("  -S                  Strip debug symbols only");
    eprintln!("  -t                  Trace linked objects");
    eprintln!("  -tx                 Trace linked objects (full paths)");
    eprintln!("  -selinit            Post-process with memory initializer");
    eprintln!("  -MD macro[=def]     Define preprocessor macro");
    eprintln!("  -MUD macro          Undefine preprocessor macro");
    eprintln!("  -i/-I directory     Include search directory");
    eprintln!("  -si-revision ver    Silicon revision");
    eprintln!("  -sp                 Skip LDF preprocessing");
    eprintln!("  -save-temps         Keep temporary files");
    eprintln!("  -W<number>          Disable specific warning");
    eprintln!("  -Werror <number>    Promote warning to error");
    eprintln!("  -xref               Cross-reference listing");
    eprintln!("  @filename           Response file");
    eprintln!("  -v/-verbose         Verbose output");
    eprintln!("  -h/-help            Display this help");
    eprintln!("  -version            Version information");
}

fn fatal(msg: &str) -> ! {
    eprintln!();
    eprintln!("%seld - FATAL ERROR");
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

    let opts = match seld::cli::parse_args(&args) {
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

    if opts.show_version {
        print_banner();
        return;
    }

    let result = seld::link(&opts).and_then(|out| {
        let output_path = opts
            .output_file
            .as_ref()
            .ok_or(seld::error::Error::NoOutput)?;
        std::fs::write(output_path, &out.image)?;
        if opts.verbose {
            eprintln!("Written {} bytes to {output_path}", out.image.len());
        }
        if let (Some(map_path), Some(map)) = (opts.map_file.as_ref(), out.map_file.as_ref()) {
            std::fs::write(map_path, map)?;
            if opts.verbose {
                eprintln!("Map file written to {map_path}");
            }
        }
        if opts.verbose {
            eprintln!("Link successful.");
        }
        Ok(())
    });

    if let Err(e) = result {
        fatal(&e.to_string());
    }
}
