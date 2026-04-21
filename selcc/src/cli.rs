// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StopAfter {
    Preprocess,
    Compile,
    Assemble,
    Link,
}

#[derive(Debug)]
pub struct Options {
    pub inputs: Vec<String>,
    pub output: Option<String>,
    pub stop_after: StopAfter,
    pub processor: Option<String>,
    pub si_revision: Option<String>,
    pub optimize: u8,
    pub debug: bool,
    pub include_dirs: Vec<String>,
    pub defines: Vec<String>,
    pub undefines: Vec<String>,
    pub show_version: bool,
    pub verbose: bool,
    pub save_temps: bool,
    pub char_size: u8,
    pub double_size: u8,
    pub swc: bool,
    pub ldf_file: Option<String>,
    pub lib_paths: Vec<String>,
    pub no_std_inc: bool,
}

impl Default for Options {
    fn default() -> Self {
        Options {
            inputs: Vec::new(),
            output: None,
            stop_after: StopAfter::Link,
            processor: None,
            si_revision: None,
            optimize: 0,
            debug: false,
            include_dirs: Vec::new(),
            defines: Vec::new(),
            undefines: Vec::new(),
            show_version: false,
            verbose: false,
            save_temps: false,
            char_size: 32,
            double_size: 64,
            swc: false,
            ldf_file: None,
            lib_paths: Vec::new(),
            no_std_inc: false,
        }
    }
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut opts = Options::default();
    let mut i = 0;

    while i < args.len() {
        let arg = &args[i];
        match arg.as_str() {
            "-c" => opts.stop_after = StopAfter::Assemble,
            "-S" => opts.stop_after = StopAfter::Compile,
            "-E" | "-P" => opts.stop_after = StopAfter::Preprocess,
            "-g" => opts.debug = true,
            "-O" => opts.optimize = 1,
            "-O0" => opts.optimize = 0,
            "-O1" => opts.optimize = 1,
            "-Oa" => opts.optimize = 2,
            "-Os" => opts.optimize = 3,
            "-verbose" => opts.verbose = true,
            "-save-temps" => opts.save_temps = true,
            "-version" => opts.show_version = true,
            "-help" => opts.show_version = true,
            "-swc" => opts.swc = true,
            "-no-std-inc" => opts.no_std_inc = true,
            "-o" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-o".into()));
                }
                opts.output = Some(args[i].clone());
            }
            "-proc" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-proc".into()));
                }
                opts.processor = Some(args[i].clone());
            }
            "-si-revision" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-si-revision".into()));
                }
                opts.si_revision = Some(args[i].clone());
            }
            "-I" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-I".into()));
                }
                opts.include_dirs.push(args[i].clone());
            }
            "-D" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-D".into()));
                }
                opts.defines.push(args[i].clone());
            }
            "-U" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-U".into()));
                }
                opts.undefines.push(args[i].clone());
            }
            "-T" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-T".into()));
                }
                opts.ldf_file = Some(args[i].clone());
            }
            "-L" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-L".into()));
                }
                opts.lib_paths.push(args[i].clone());
            }
            "-char-size-8" => opts.char_size = 8,
            "-char-size-32" => opts.char_size = 32,
            "-double-size-32" => opts.double_size = 32,
            "-double-size-64" => opts.double_size = 64,
            s if s.starts_with("-D") => {
                opts.defines.push(s[2..].to_string());
            }
            s if s.starts_with("-I") => {
                opts.include_dirs.push(s[2..].to_string());
            }
            s if s.starts_with("-U") => {
                opts.undefines.push(s[2..].to_string());
            }
            s if s.starts_with('-') => {
                // Accept but ignore unrecognized switches for now,
                // consuming an argument if the switch is known to take one.
                if matches!(s, "-l" | "-R" | "-Map"
                    | "-flags-compiler" | "-flags-asm" | "-flags-link"
                    | "-flags-mem" | "-flags-pp"
                    | "-Werror" | "-Wsuppress" | "-Wremarks"
                    | "-section-id" | "-overlay-group"
                    | "-pgo-session" | "-misra-suppress-advisory")
                {
                    i += 1;
                }
            }
            _ => {
                opts.inputs.push(arg.clone());
            }
        }
        i += 1;
    }

    Ok(opts)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(s: &str) -> Vec<String> {
        s.split_whitespace().map(String::from).collect()
    }

    #[test]
    fn basic_compile() {
        let opts = parse_args(&args("-proc ADSP-21569 -c -o test.doj test.c")).unwrap();
        assert_eq!(opts.processor.as_deref(), Some("ADSP-21569"));
        assert_eq!(opts.stop_after, StopAfter::Assemble);
        assert_eq!(opts.output.as_deref(), Some("test.doj"));
        assert_eq!(opts.inputs, vec!["test.c"]);
    }

    #[test]
    fn defines_and_includes() {
        let opts = parse_args(&args("-DCORE0 -I../include -Dfoo=bar test.c")).unwrap();
        assert_eq!(opts.defines, vec!["CORE0", "foo=bar"]);
        assert_eq!(opts.include_dirs, vec!["../include"]);
    }

    #[test]
    fn char_double_size() {
        let opts = parse_args(&args("-char-size-8 -double-size-32 test.c")).unwrap();
        assert_eq!(opts.char_size, 8);
        assert_eq!(opts.double_size, 32);
    }
}
