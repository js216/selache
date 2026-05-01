// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for selpatch
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

#[derive(Debug, PartialEq, Eq)]
pub enum Action {
    Get,
    Replace,
}

#[derive(Debug)]
pub struct Options {
    pub action: Action,
    pub section_name: String,
    pub output_file: Option<String>,
    pub bits_file: Option<String>,
    pub text_mode: bool,
    pub input_file: String,
    pub show_help: bool,
    pub show_version: bool,
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut action: Option<Action> = None;
    let mut section_name: Option<String> = None;
    let mut output_file: Option<String> = None;
    let mut bits_file: Option<String> = None;
    let mut text_mode = false;
    let mut show_help = false;
    let mut show_version = false;
    let mut positionals: Vec<String> = Vec::new();

    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "-get" | "-replace" => {
                if action.is_some() {
                    return Err(Error::Usage("only one of -get or -replace allowed".into()));
                }
                let act = if args[i] == "-get" {
                    Action::Get
                } else {
                    Action::Replace
                };
                action = Some(act);
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage(format!(
                        "missing section name after {}",
                        args[i - 1]
                    )));
                }
                section_name = Some(args[i].clone());
            }
            "-o" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -o".into()));
                }
                output_file = Some(args[i].clone());
            }
            "-bits" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -bits".into()));
                }
                bits_file = Some(args[i].clone());
            }
            "-text" => {
                text_mode = true;
            }
            "-help" | "--help" => {
                show_help = true;
            }
            "-version" | "--version" => {
                show_version = true;
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

    if show_help || show_version {
        return Ok(Options {
            action: Action::Get,
            section_name: String::new(),
            output_file: None,
            bits_file: None,
            text_mode: false,
            input_file: String::new(),
            show_help,
            show_version,
        });
    }

    let action = action.ok_or_else(|| Error::Usage("must specify -get or -replace".into()))?;

    if positionals.is_empty() {
        return Err(Error::Usage("missing input ELF filename".into()));
    }
    if positionals.len() > 1 {
        return Err(Error::Usage("too many positional arguments".into()));
    }

    Ok(Options {
        action,
        section_name: section_name.unwrap_or_default(),
        output_file,
        bits_file,
        text_mode,
        input_file: positionals.remove(0),
        show_help,
        show_version,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(strs: &[&str]) -> Vec<String> {
        strs.iter().map(|s| s.to_string()).collect()
    }

    #[test]
    fn test_parse_get() {
        let opts = parse_args(&args(&["-get", "seg_pmco", "input.doj"])).unwrap();
        assert_eq!(opts.action, Action::Get);
        assert_eq!(opts.section_name, "seg_pmco");
        assert_eq!(opts.input_file, "input.doj");
        assert!(!opts.text_mode);
        assert!(opts.output_file.is_none());
    }

    #[test]
    fn test_parse_get_with_text_and_output() {
        let opts = parse_args(&args(&[
            "-get", "L1_code", "-o", "out.bin", "-text", "p0.dxe",
        ]))
        .unwrap();
        assert_eq!(opts.action, Action::Get);
        assert_eq!(opts.section_name, "L1_code");
        assert_eq!(opts.output_file.as_deref(), Some("out.bin"));
        assert!(opts.text_mode);
        assert_eq!(opts.input_file, "p0.dxe");
    }

    #[test]
    fn test_parse_replace() {
        let opts = parse_args(&args(&[
            "-replace",
            "_ov_os_overlay_1",
            "-o",
            "out.ovl",
            "-bits",
            "bytes.bin",
            "input.ovl",
        ]))
        .unwrap();
        assert_eq!(opts.action, Action::Replace);
        assert_eq!(opts.section_name, "_ov_os_overlay_1");
        assert_eq!(opts.output_file.as_deref(), Some("out.ovl"));
        assert_eq!(opts.bits_file.as_deref(), Some("bytes.bin"));
        assert_eq!(opts.input_file, "input.ovl");
    }

    #[test]
    fn test_parse_help() {
        let opts = parse_args(&args(&["-help"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_parse_version() {
        let opts = parse_args(&args(&["-version"])).unwrap();
        assert!(opts.show_version);
    }

    #[test]
    fn test_missing_section_name() {
        let result = parse_args(&args(&["-get"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_missing_input_file() {
        let result = parse_args(&args(&["-get", "section"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_duplicate_action() {
        let result = parse_args(&args(&["-get", "s1", "-replace", "s2", "f"]));
        assert!(result.is_err());
    }
}
