// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for selinit
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

#[derive(Debug)]
pub struct Options {
    pub input_file: String,
    pub output_file: Option<String>,
    pub begin_init: String,
    pub ignore_sections: Vec<String>,
    pub init_files: Vec<String>,
    pub extra_sections: Vec<String>,
    pub no_auto: bool,
    pub no_erase: bool,
    pub verbose: bool,
    pub show_help: bool,
}

impl Options {
    /// Derive the output filename from the input when -o is not given.
    /// Appends "1" before the extension: "input.dxe" -> "input1.dxe".
    pub fn output_path(&self) -> String {
        if let Some(ref o) = self.output_file {
            return o.clone();
        }
        let input = &self.input_file;
        if let Some(dot) = input.rfind('.') {
            format!("{}1{}", &input[..dot], &input[dot..])
        } else {
            format!("{input}1")
        }
    }
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut input_file: Option<String> = None;
    let mut output_file: Option<String> = None;
    let mut begin_init = "___inits".to_string();
    let mut ignore_sections: Vec<String> = Vec::new();
    let mut init_files: Vec<String> = Vec::new();
    let mut extra_sections: Vec<String> = Vec::new();
    let mut no_auto = false;
    let mut no_erase = false;
    let mut verbose = false;
    let mut show_help = false;

    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "-h" | "-help" => {
                show_help = true;
            }
            "-v" | "-verbose" => {
                verbose = true;
            }
            "-NoAuto" => {
                no_auto = true;
            }
            "-NoErase" => {
                no_erase = true;
            }
            "-BeginInit" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing symbol name after -BeginInit".into()));
                }
                begin_init = args[i].clone();
            }
            "-IgnoreSection" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage(
                        "missing section name after -IgnoreSection".into(),
                    ));
                }
                ignore_sections.push(args[i].clone());
            }
            "-Init" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -Init".into()));
                }
                init_files.push(args[i].clone());
            }
            "-Section" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing section name after -Section".into()));
                }
                extra_sections.push(args[i].clone());
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
                if input_file.is_some() {
                    return Err(Error::Usage("multiple input files not supported".into()));
                }
                input_file = Some(args[i].clone());
            }
        }
        i += 1;
    }

    if show_help {
        return Ok(Options {
            input_file: String::new(),
            output_file: None,
            begin_init,
            ignore_sections,
            init_files,
            extra_sections,
            no_auto,
            no_erase,
            verbose,
            show_help,
        });
    }

    let input_file = input_file.ok_or(Error::NoInput)?;

    Ok(Options {
        input_file,
        output_file,
        begin_init,
        ignore_sections,
        init_files,
        extra_sections,
        no_auto,
        no_erase,
        verbose,
        show_help,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(strs: &[&str]) -> Vec<String> {
        strs.iter().map(|s| s.to_string()).collect()
    }

    #[test]
    fn test_parse_minimal() {
        let opts = parse_args(&args(&["input.dxe"])).unwrap();
        assert_eq!(opts.input_file, "input.dxe");
        assert_eq!(opts.begin_init, "___inits");
        assert!(!opts.no_auto);
        assert!(!opts.no_erase);
        assert!(!opts.verbose);
        assert!(!opts.show_help);
        assert_eq!(opts.output_path(), "input1.dxe");
    }

    #[test]
    fn test_parse_all_options() {
        let opts = parse_args(&args(&[
            "-BeginInit",
            "my_sym",
            "-IgnoreSection",
            "seg_rth",
            "-IgnoreSection",
            "seg_pmco",
            "-Init",
            "callback.dxe",
            "-Section",
            "my_data",
            "-NoAuto",
            "-NoErase",
            "-v",
            "-o",
            "out.dxe",
            "in.dxe",
        ]))
        .unwrap();
        assert_eq!(opts.input_file, "in.dxe");
        assert_eq!(opts.output_file.as_deref(), Some("out.dxe"));
        assert_eq!(opts.begin_init, "my_sym");
        assert_eq!(opts.ignore_sections, vec!["seg_rth", "seg_pmco"]);
        assert_eq!(opts.init_files, vec!["callback.dxe"]);
        assert_eq!(opts.extra_sections, vec!["my_data"]);
        assert!(opts.no_auto);
        assert!(opts.no_erase);
        assert!(opts.verbose);
        assert_eq!(opts.output_path(), "out.dxe");
    }

    #[test]
    fn test_parse_help() {
        let opts = parse_args(&args(&["-help"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_parse_h() {
        let opts = parse_args(&args(&["-h"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_no_input() {
        let result = parse_args(&args(&["-NoAuto"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_multiple_inputs() {
        let result = parse_args(&args(&["a.dxe", "b.dxe"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_unknown_option() {
        let result = parse_args(&args(&["-unknown", "in.dxe"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_default_output_no_extension() {
        let opts = parse_args(&args(&["input"])).unwrap();
        assert_eq!(opts.output_path(), "input1");
    }

    #[test]
    fn test_default_output_with_path() {
        let opts = parse_args(&args(&["dir/sub/file.dxe"])).unwrap();
        assert_eq!(opts.output_path(), "dir/sub/file1.dxe");
    }

    #[test]
    fn test_missing_begin_init_arg() {
        let result = parse_args(&args(&["-BeginInit"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_missing_o_arg() {
        let result = parse_args(&args(&["-o"]));
        assert!(result.is_err());
    }
}
