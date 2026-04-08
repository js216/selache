// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for selmem
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

#[derive(Debug)]
pub struct Options {
    pub input_file: String,
    pub output_file: String,
    pub verbose: bool,
    pub show_help: bool,
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut output_file: Option<String> = None;
    let mut verbose = false;
    let mut show_help = false;
    let mut positionals: Vec<String> = Vec::new();

    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "-h" | "--help" => {
                show_help = true;
            }
            "-v" => {
                verbose = true;
            }
            "-o" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -o".into()));
                }
                output_file = Some(args[i].clone());
            }
            other => {
                if other.starts_with('-') {
                    return Err(Error::Usage(format!("unknown option: {other}")));
                }
                positionals.push(args[i].clone());
            }
        }
        i += 1;
    }

    if show_help {
        return Ok(Options {
            input_file: String::new(),
            output_file: String::new(),
            verbose: false,
            show_help: true,
        });
    }

    if positionals.is_empty() {
        return Err(Error::NoInput);
    }
    if positionals.len() > 1 {
        return Err(Error::Usage("too many positional arguments".into()));
    }

    let output_file = output_file.ok_or(Error::NoOutput)?;

    Ok(Options {
        input_file: positionals.into_iter().next().unwrap_or_default(),
        output_file,
        verbose,
        show_help: false,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(strs: &[&str]) -> Vec<String> {
        strs.iter().map(|s| s.to_string()).collect()
    }

    #[test]
    fn test_parse_basic() {
        let opts = parse_args(&args(&["-o", "out.dxe", "in.dxe"])).unwrap();
        assert_eq!(opts.input_file, "in.dxe");
        assert_eq!(opts.output_file, "out.dxe");
        assert!(!opts.verbose);
        assert!(!opts.show_help);
    }

    #[test]
    fn test_parse_verbose() {
        let opts = parse_args(&args(&["-v", "-o", "out.dxe", "in.dxe"])).unwrap();
        assert!(opts.verbose);
    }

    #[test]
    fn test_parse_help() {
        let opts = parse_args(&args(&["-h"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_missing_input() {
        let result = parse_args(&args(&["-o", "out.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::NoInput));
    }

    #[test]
    fn test_missing_output() {
        let result = parse_args(&args(&["in.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::NoOutput));
    }

    #[test]
    fn test_missing_o_arg() {
        let result = parse_args(&args(&["-o"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn test_unknown_option() {
        let result = parse_args(&args(&["-x", "-o", "out.dxe", "in.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }
}
