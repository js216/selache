// SPDX-License-Identifier: GPL-3.0
// main.rs --- selcc driver: gcc/clang-style compile/assemble/link entry point
// Copyright (c) 2026 Jakob Kastelic

use std::ffi::OsStr;
use std::path::{Path, PathBuf};
use std::process;

use selcc::cli::{self, StopAfter};
use selcc::error::{self, Error};

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

fn print_usage() {
    eprintln!("Usage: selcc [-switch [...]] sourcefile [sourcefile ...]");
    eprintln!();
    eprintln!("Options:");
    eprintln!("    -c            Compile and assemble only (do not link)");
    eprintln!("    -S            Compile only (produce assembly)");
    eprintln!("    -E            Preprocess only");
    eprintln!("    -o file       Place output in file");
    eprintln!("    -T file       Linker description file (LDF)");
    eprintln!("    -L dir        Add library search path (for linking)");
    eprintln!("    -proc name    Target processor (e.g. ADSP-21569)");
    eprintln!("    -O            Enable optimization");
    eprintln!("    -g            Generate debug information");
    eprintln!("    -I dir        Add include search path");
    eprintln!("    -D name=val   Define preprocessor macro");
    eprintln!("    -version      Display version information");
    eprintln!("    -help         Display this help");
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum InputKind {
    C,
    Asm,
    Object,
}

fn classify(path: &str) -> Option<InputKind> {
    let ext = Path::new(path).extension().and_then(OsStr::to_str)?;
    match ext {
        "c" => Some(InputKind::C),
        "s" | "S" | "asm" => Some(InputKind::Asm),
        "doj" | "o" => Some(InputKind::Object),
        _ => None,
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
        return Err(Error::MissingInput);
    }

    match opts.stop_after {
        StopAfter::Preprocess => drive_preprocess(&opts),
        StopAfter::Compile => drive_compile(&opts),
        StopAfter::Assemble => drive_assemble(&opts),
        StopAfter::Link => drive_link(&opts),
    }
}

fn drive_preprocess(opts: &cli::Options) -> error::Result<()> {
    for input in &opts.inputs {
        let src = std::fs::read_to_string(input)?;
        let text = selcc::preprocess_only(&src, input, opts)?;
        match opts.output.as_deref() {
            Some("-") | None if opts.inputs.len() == 1 => print!("{text}"),
            Some(out) if opts.inputs.len() == 1 => std::fs::write(out, text)?,
            _ => {
                // Multiple preprocess inputs to disk: use input.i by default.
                let out = replace_ext(input, "i");
                std::fs::write(out, text)?;
            }
        }
    }
    Ok(())
}

fn drive_compile(opts: &cli::Options) -> error::Result<()> {
    for input in &opts.inputs {
        match classify(input) {
            Some(InputKind::C) => {
                let src = std::fs::read_to_string(input)?;
                let asm = selcc::compile_to_asm(&src, input, opts)?;
                let out = pick_output(opts, input, "s", opts.inputs.len() == 1);
                std::fs::write(&out, asm)?;
            }
            Some(InputKind::Asm) => {
                // -S on an asm input is a no-op copy when an output is given;
                // otherwise the input already is the asm.
                if let Some(out) = &opts.output {
                    std::fs::copy(input, out)?;
                }
            }
            Some(InputKind::Object) | None => {
                return Err(Error::NotImplemented(format!(
                    "cannot compile non-C input with -S: {input}"
                )));
            }
        }
    }
    Ok(())
}

fn drive_assemble(opts: &cli::Options) -> error::Result<()> {
    for input in &opts.inputs {
        let kind = classify(input)
            .ok_or_else(|| Error::NotImplemented(format!("unknown input type: {input}")))?;
        match kind {
            InputKind::C => {
                let src = std::fs::read_to_string(input)?;
                let asm = selcc::compile_to_asm(&src, input, opts)?;
                let bytes = assemble_text(&asm, opts)?;
                let out = pick_output(opts, input, "doj", opts.inputs.len() == 1);
                std::fs::write(&out, bytes)?;
            }
            InputKind::Asm => {
                let asm = std::fs::read_to_string(input)?;
                let bytes = assemble_text(&asm, opts)?;
                let out = pick_output(opts, input, "doj", opts.inputs.len() == 1);
                std::fs::write(&out, bytes)?;
            }
            InputKind::Object => {
                return Err(Error::NotImplemented(format!(
                    "cannot -c a pre-assembled object: {input}"
                )));
            }
        }
    }
    Ok(())
}

fn drive_link(opts: &cli::Options) -> error::Result<()> {
    let ldf = opts.ldf_file.clone().ok_or_else(|| Error::MissingArgument(
        "-T <ldf> (required when linking)".into(),
    ))?;

    let tmp_dir = std::env::temp_dir().join(format!("selcc-{}", std::process::id()));
    std::fs::create_dir_all(&tmp_dir)?;

    let mut doj_paths: Vec<String> = Vec::new();
    let mut temp_paths: Vec<PathBuf> = Vec::new();

    for (idx, input) in opts.inputs.iter().enumerate() {
        let kind = classify(input)
            .ok_or_else(|| Error::NotImplemented(format!("unknown input type: {input}")))?;
        match kind {
            InputKind::C => {
                let src = std::fs::read_to_string(input)?;
                let asm = selcc::compile_to_asm(&src, input, opts)?;
                let bytes = assemble_text(&asm, opts)?;
                let p = tmp_dir.join(format!("selcc-{idx}.doj"));
                std::fs::write(&p, bytes)?;
                doj_paths.push(p.to_string_lossy().into_owned());
                temp_paths.push(p);
            }
            InputKind::Asm => {
                let asm = std::fs::read_to_string(input)?;
                let bytes = assemble_text(&asm, opts)?;
                let p = tmp_dir.join(format!("selcc-{idx}.doj"));
                std::fs::write(&p, bytes)?;
                doj_paths.push(p.to_string_lossy().into_owned());
                temp_paths.push(p);
            }
            InputKind::Object => {
                doj_paths.push(input.clone());
            }
        }
    }

    let output_file = opts
        .output
        .clone()
        .unwrap_or_else(|| "a.out".to_string());

    let seld_opts = seld::cli::Options {
        ldf_file: Some(ldf),
        output_file: Some(output_file.clone()),
        input_files: doj_paths,
        lib_paths: opts.lib_paths.clone(),
        processor: opts.processor.clone(),
        si_revision: opts.si_revision.clone(),
        verbose: opts.verbose,
        ..Default::default()
    };

    let link_result = seld::link(&seld_opts)?;
    std::fs::write(&output_file, &link_result.image)?;

    for p in &temp_paths {
        let _ = std::fs::remove_file(p);
    }
    let _ = std::fs::remove_dir(&tmp_dir);

    Ok(())
}

fn assemble_text(asm: &str, opts: &cli::Options) -> error::Result<Vec<u8>> {
    let defines: Vec<(String, String)> = opts
        .defines
        .iter()
        .map(|d| match d.split_once('=') {
            Some((n, v)) => (n.to_string(), v.to_string()),
            None => (d.clone(), "1".to_string()),
        })
        .collect();
    let is_visa = opts
        .processor
        .as_deref()
        .is_some_and(|p| p.eq_ignore_ascii_case("ADSP-21569"));
    let bytes = selas::assemble_text(
        asm,
        opts.processor.as_deref(),
        &defines,
        &opts.include_dirs,
        is_visa,
    )?;
    Ok(bytes)
}

/// Choose the output file for a single-file transformation.
/// If the caller supplied `-o`, use that when `allow_o` is true;
/// otherwise derive `<stem>.<new_ext>` alongside the input.
fn pick_output(opts: &cli::Options, input: &str, new_ext: &str, allow_o: bool) -> String {
    if allow_o {
        if let Some(o) = &opts.output {
            return o.clone();
        }
    }
    replace_ext(input, new_ext)
}

fn replace_ext(input: &str, new_ext: &str) -> String {
    let path = Path::new(input);
    let stem = path
        .file_stem()
        .and_then(OsStr::to_str)
        .unwrap_or(input);
    let parent = path.parent().and_then(|p| p.to_str()).unwrap_or("");
    if parent.is_empty() {
        format!("{stem}.{new_ext}")
    } else {
        format!("{parent}/{stem}.{new_ext}")
    }
}
