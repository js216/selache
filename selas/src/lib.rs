// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selas: SHARC+ assembler library for the Selache toolchain
// Copyright (c) 2026 Jakob Kastelic

pub mod asmparse;
pub mod assemble;
pub mod cli;
pub mod error;
pub mod preproc;

use std::path::{Path, PathBuf};

/// Walk up from the executable path to find the selache toolchain root.
/// The root is identified by containing a `libsel/include` directory.
pub fn find_toolchain_root(exe_path: &Path) -> Option<PathBuf> {
    let mut dir = exe_path.parent()?;
    for _ in 0..5 {
        let candidate = dir.join("libsel").join("include");
        if candidate.is_dir() {
            return Some(dir.to_path_buf());
        }
        dir = dir.parent()?;
    }
    None
}

/// Assemble in-memory source text and return the raw .doj ELF bytes.
///
/// Runs the selas preprocessor with the given processor/defines/includes,
/// then encodes the result directly. When `visa` is true, PM code sections
/// use VISA variable-width encoding.
pub fn assemble_text(
    src: &str,
    proc: Option<&str>,
    defines: &[(String, String)],
    include_dirs: &[String],
    visa: bool,
) -> error::Result<Vec<u8>> {
    let mut pp = preproc::Preprocessor::new(proc, include_dirs, defines);
    let processed = pp.process(src, "<memory>")?;
    assemble::assemble_source(&processed, visa)
}

pub fn run(opts: &cli::Options) -> error::Result<()> {
    if opts.show_version {
        println!("SHARC+ Assembler");
        println!("Version {}", env!("CARGO_PKG_VERSION"));
        return Ok(());
    }

    // Auto-add standard library include path
    let mut include_dirs = opts.include_dirs.clone();
    if let Ok(exe_path) = std::env::current_exe() {
        if let Some(root) = find_toolchain_root(&exe_path) {
            let lib_include = root.join("libsel").join("include");
            include_dirs.push(lib_include.to_string_lossy().to_string());
        }
    }

    if opts.verbose {
        eprintln!("assembling {} -> {}", opts.input, opts.output);
    }

    // Read and preprocess the source
    let src = std::fs::read_to_string(&opts.input)?;
    let mut pp = preproc::Preprocessor::new(opts.proc.as_deref(), &include_dirs, &opts.defines);
    let processed = pp.process(&src, &opts.input)?;

    if opts.preprocess_only {
        if opts.output.is_empty() || opts.output == "/dev/null" {
            print!("{processed}");
        } else {
            std::fs::write(&opts.output, &processed)?;
        }
        return Ok(());
    }

    let is_visa = opts
        .proc
        .as_deref()
        .is_some_and(|p| p.eq_ignore_ascii_case("ADSP-21569"));
    let bytes = assemble::assemble_source(&processed, is_visa)?;
    std::fs::write(&opts.output, bytes)?;

    if opts.verbose {
        eprintln!("done");
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_find_toolchain_root() {
        let tmp = std::env::temp_dir().join("test_selache_root");
        let _ = std::fs::create_dir_all(tmp.join("libsel/include"));
        let _ = std::fs::create_dir_all(tmp.join("target/release"));
        let fake_exe = tmp.join("target/release/selas");

        let root = find_toolchain_root(&fake_exe);
        assert_eq!(root, Some(tmp.clone()));

        let _ = std::fs::remove_dir_all(&tmp);
    }

    #[test]
    fn test_find_toolchain_root_not_found() {
        let fake_exe = std::path::PathBuf::from("/tmp/no_such_root/bin/selas");
        assert_eq!(find_toolchain_root(&fake_exe), None);
    }
}
