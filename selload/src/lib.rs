// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selload: SHARC+ boot stream generator library
// Copyright (c) 2026 Jakob Kastelic

pub mod cli;
pub mod crc32;
pub mod error;
pub mod format;
pub mod ldr;

/// Run the full boot-stream generation pipeline for the given options,
/// writing the result to the output file selected by `opts`. The driver
/// is responsible only for argument parsing and error reporting.
pub fn run(opts: &cli::Options) -> error::Result<()> {
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
        cli::OutputFormat::Hex => {
            // Compute block boundary offsets for record alignment.
            let breaks = format::block_offsets(&blocks);
            format::write_hex(&raw, &breaks, &mut out_file)?;
        }
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
