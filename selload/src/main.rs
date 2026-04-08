// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for selload SHARC boot stream generator
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod crc32;
mod error;
mod format;
mod ldr;

use std::process;

const BANNER: &str = "\
ADSP-2156x Family ELF Loader\n\
Version: ";

fn print_banner() {
    eprintln!("{BANNER}{}", env!("CARGO_PKG_VERSION"));
    eprintln!("Copyright (c) 2026 Jakob Kastelic");
}

fn print_usage() {
    print_banner();
    eprintln!();
    eprintln!("Usage: selload [options] inputfile");
    eprintln!();
    eprintln!("Required:");
    eprintln!("  -proc processor    Target processor (ADSP-21569, ADSP-21568, etc.)");
    eprintln!();
    eprintln!("Options:");
    eprintln!("  -b mode            Boot mode: SPI|SPIHOST|LPHOST|UARTHOST|OSPI|eMMC (default: SPI)");
    eprintln!("  -bcode #           BCODE field value for SPI boot");
    eprintln!("  -o filename        Output file (default: input stem + .ldr)");
    eprintln!("  -f format          Output format: binary|hex|ascii|include (default: binary)");
    eprintln!("  -CRC32 [poly]      Enable CRC32 (default polynomial: 0xD8018001)");
    eprintln!("  -MaxBlockSize #    Max block byte size (must be multiple of 4)");
    eprintln!("  -MaxImageSize #    Max output image size in bytes");
    eprintln!("  -Width 8           External memory device width (only 8 supported)");
    eprintln!("  -NoFillBlock       Do not produce FILL blocks");
    eprintln!("  -si-revision ver   Silicon revision");
    eprintln!("  -v                 Verbose output");
    eprintln!("  -W                 Suppress warnings");
    eprintln!("  -h / -help         Display this help");
    eprintln!("  -version           Display version information");
}

fn fatal(msg: &str) -> ! {
    eprintln!();
    eprintln!("%selload - FATAL ERROR");
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

    if opts.show_version {
        print_banner();
        return;
    }

    print_banner();

    if let Err(e) = run(&opts) {
        fatal(&e.to_string());
    }
}

fn run(opts: &cli::Options) -> error::Result<()> {
    if opts.verbose {
        eprintln!("Processor: {}", opts.processor);
        eprintln!("Boot mode: {:?}", opts.boot_mode);
        if let Some(w) = opts.width {
            eprintln!("Width: {w}");
        }
        if let Some(ref rev) = opts.si_revision {
            eprintln!("Silicon revision: {rev}");
        }
        if opts.no_fill_block {
            eprintln!("FILL blocks disabled");
        }
        if opts.suppress_warnings {
            eprintln!("Warnings suppressed");
        }
    }

    let input_data = std::fs::read(&opts.input_file)?;

    let blocks = ldr::generate_boot_stream(&input_data, opts)?;
    let raw = ldr::serialize_blocks(&blocks);

    if let Some(max) = opts.max_image_size {
        if raw.len() > max {
            return Err(error::Error::OutputTooLarge {
                size: raw.len(),
                max,
            });
        }
    }

    let output_file = opts
        .output_file
        .clone()
        .unwrap_or_else(|| cli::default_output_name(&opts.input_file));

    let mut out_file = std::fs::File::create(&output_file)?;
    match opts.format {
        cli::OutputFormat::Binary => format::write_binary(&raw, &mut out_file)?,
        cli::OutputFormat::Hex => format::write_hex(&raw, &mut out_file)?,
        cli::OutputFormat::Ascii => format::write_ascii(&raw, &mut out_file)?,
        cli::OutputFormat::Include => format::write_include(&raw, &mut out_file)?,
    }

    if opts.verbose {
        eprintln!(
            "Wrote {} blocks ({} bytes) to {}",
            blocks.len(),
            raw.len(),
            output_file
        );
    }

    Ok(())
}
