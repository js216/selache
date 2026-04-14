// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selcc: C compiler driver library for the Selache toolchain
// Copyright (c) 2026 Jakob Kastelic

//! The selcc library: turns C source into SHARC+ assembly text that the
//! `selas` assembler consumes. The `selcc` binary is a thin gcc/clang-
//! style driver on top of this library.

pub mod ast;
pub mod cli;
pub mod emit_asm;
pub mod error;
pub mod ir;
pub mod ir_opt;
pub mod isel;
pub mod lex;
pub mod lower;
pub mod mach;
pub mod parse;
pub mod preproc;
pub mod regalloc;
pub mod target;
pub mod token;
pub mod types;

use crate::error::Result;

/// Configure a `preproc::Preprocessor` from the CLI options.
fn make_preprocessor(opts: &cli::Options) -> preproc::Preprocessor {
    let mut pp = preproc::Preprocessor::new();
    for def in &opts.defines {
        if let Some((name, val)) = def.split_once('=') {
            pp.define(name, val);
        } else {
            pp.define(def, "1");
        }
    }
    for undef in &opts.undefines {
        pp.undefine(undef);
    }
    for dir in &opts.include_dirs {
        pp.add_include_dir(dir);
    }
    if let Some(proc_name) = &opts.processor {
        pp.set_processor(proc_name);
    }
    if opts.char_size == 8 {
        pp.define("__BYTE_ADDRESSING__", "1");
    }
    if opts.swc {
        pp.define("__SWC__", "1");
    }
    pp
}

/// Run only the C preprocessor and return the expanded source.
pub fn preprocess_only(src: &str, filename: &str, opts: &cli::Options) -> Result<String> {
    let mut pp = make_preprocessor(opts);
    pp.process(src, filename)
}

/// Preprocess, parse, and lower the given C source to SHARC+ assembly text.
pub fn compile_to_asm(src: &str, filename: &str, opts: &cli::Options) -> Result<String> {
    let processed = preprocess_only(src, filename, opts)?;
    let unit = parse::parse(&processed)?;
    let module = emit_asm::emit_module(&unit)?;
    Ok(module.text)
}
