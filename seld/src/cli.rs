// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for seld
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};
use std::collections::HashMap;

#[derive(Debug, Default)]
pub struct Options {
    pub processor: Option<String>,
    pub ldf_file: Option<String>,
    pub output_file: Option<String>,
    pub lib_paths: Vec<String>,
    pub include_paths: Vec<String>,
    pub input_files: Vec<String>,
    pub entry: Option<String>,
    pub map_file: Option<String>,
    pub eliminate: bool,
    pub keep_sections: Vec<String>,
    pub strip_all: bool,
    pub strip_debug: bool,
    pub trace: bool,
    pub trace_full: bool,
    pub verbose: bool,
    pub show_help: bool,
    pub show_version: bool,
    pub mem_init: bool,
    pub skip_preprocess: bool,
    pub save_temps: bool,
    pub xref: bool,
    pub defines: HashMap<String, String>,
    pub undefines: Vec<String>,
    pub si_revision: Option<String>,
    pub disabled_warnings: Vec<u32>,
    pub error_warnings: Vec<u32>,
}

/// Expand response files (@filename) into argument lists.
fn expand_response_files(args: &[String]) -> Result<Vec<String>> {
    let mut expanded = Vec::new();
    for arg in args {
        if let Some(path) = arg.strip_prefix('@') {
            let content = std::fs::read_to_string(path)
                .map_err(|e| Error::Usage(format!("cannot read response file `{path}`: {e}")))?;
            for token in content.split_whitespace() {
                expanded.push(token.to_string());
            }
        } else {
            expanded.push(arg.clone());
        }
    }
    Ok(expanded)
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let args = expand_response_files(args)?;
    let mut opts = Options::default();

    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "-h" | "-help" | "--help" => {
                opts.show_help = true;
            }
            "-v" | "-verbose" => {
                opts.verbose = true;
            }
            "-version" | "--version" => {
                opts.show_version = true;
            }
            "-proc" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing argument after -proc".into()));
                }
                opts.processor = Some(args[i].clone());
            }
            "-T" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -T".into()));
                }
                opts.ldf_file = Some(args[i].clone());
            }
            "-o" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -o".into()));
                }
                opts.output_file = Some(args[i].clone());
            }
            "-L" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing path after -L".into()));
                }
                opts.lib_paths.push(args[i].clone());
            }
            "-i" | "-I" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing directory after -i/-I".into()));
                }
                opts.include_paths.push(args[i].clone());
            }
            "-e" => {
                opts.eliminate = true;
            }
            "-ek" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing section name after -ek".into()));
                }
                opts.keep_sections.push(args[i].clone());
            }
            "-entry" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing symbol after -entry".into()));
                }
                opts.entry = Some(args[i].clone());
            }
            "-Map" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -Map".into()));
                }
                opts.map_file = Some(args[i].clone());
            }
            "-s" => {
                opts.strip_all = true;
            }
            "-S" => {
                opts.strip_debug = true;
            }
            "-t" => {
                opts.trace = true;
            }
            "-tx" => {
                opts.trace_full = true;
            }
            "-selinit" => {
                opts.mem_init = true;
            }
            "-sp" => {
                opts.skip_preprocess = true;
            }
            "-save-temps" => {
                opts.save_temps = true;
            }
            "-xref" => {
                opts.xref = true;
            }
            "-si-revision" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing version after -si-revision".into()));
                }
                opts.si_revision = Some(args[i].clone());
            }
            "-MD" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing macro after -MD".into()));
                }
                let arg = &args[i];
                if let Some(eq_pos) = arg.find('=') {
                    let name = arg[..eq_pos].to_string();
                    let val = arg[eq_pos + 1..].to_string();
                    opts.defines.insert(name, val);
                } else {
                    opts.defines.insert(arg.clone(), "1".into());
                }
            }
            "-MUD" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing macro after -MUD".into()));
                }
                opts.undefines.push(args[i].clone());
            }
            "-Werror" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing number after -Werror".into()));
                }
                let n: u32 = args[i].parse().map_err(|_| {
                    Error::Usage(format!("invalid warning number: {}", args[i]))
                })?;
                opts.error_warnings.push(n);
            }
            other => {
                if let Some(rest) = other.strip_prefix("-W") {
                    if let Ok(n) = rest.parse::<u32>() {
                        opts.disabled_warnings.push(n);
                    } else {
                        return Err(Error::Usage(format!("unknown option: {other}")));
                    }
                } else if other.starts_with('-') {
                    return Err(Error::Usage(format!("unknown option: {other}")));
                } else {
                    opts.input_files.push(other.to_string());
                }
            }
        }
        i += 1;
    }

    Ok(opts)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(strs: &[&str]) -> Vec<String> {
        strs.iter().map(|s| s.to_string()).collect()
    }

    #[test]
    fn basic_parse() {
        let opts = parse_args(&args(&[
            "-proc", "ADSP-21569", "-T", "app.ldf", "-o", "out.dxe", "main.doj",
        ]))
        .unwrap();
        assert_eq!(opts.processor.as_deref(), Some("ADSP-21569"));
        assert_eq!(opts.ldf_file.as_deref(), Some("app.ldf"));
        assert_eq!(opts.output_file.as_deref(), Some("out.dxe"));
        assert_eq!(opts.input_files, vec!["main.doj"]);
    }

    #[test]
    fn help_flag() {
        let opts = parse_args(&args(&["-h"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn version_flag() {
        let opts = parse_args(&args(&["-version"])).unwrap();
        assert!(opts.show_version);
    }

    #[test]
    fn verbose_flag() {
        let opts = parse_args(&args(&["-v"])).unwrap();
        assert!(opts.verbose);
        let opts = parse_args(&args(&["-verbose"])).unwrap();
        assert!(opts.verbose);
    }

    #[test]
    fn lib_and_include_paths() {
        let opts = parse_args(&args(&[
            "-L", "/path/a", "-L", "/path/b", "-I", "/inc",
        ]))
        .unwrap();
        assert_eq!(opts.lib_paths, vec!["/path/a", "/path/b"]);
        assert_eq!(opts.include_paths, vec!["/inc"]);
    }

    #[test]
    fn strip_flags() {
        let opts = parse_args(&args(&["-s"])).unwrap();
        assert!(opts.strip_all);
        let opts = parse_args(&args(&["-S"])).unwrap();
        assert!(opts.strip_debug);
    }

    #[test]
    fn trace_flags() {
        let opts = parse_args(&args(&["-t"])).unwrap();
        assert!(opts.trace);
        let opts = parse_args(&args(&["-tx"])).unwrap();
        assert!(opts.trace_full);
    }

    #[test]
    fn entry_point() {
        let opts = parse_args(&args(&["-entry", "_main"])).unwrap();
        assert_eq!(opts.entry.as_deref(), Some("_main"));
    }

    #[test]
    fn define_macro() {
        let opts = parse_args(&args(&["-MD", "FOO=bar"])).unwrap();
        assert_eq!(opts.defines.get("FOO").map(String::as_str), Some("bar"));
    }

    #[test]
    fn define_macro_no_value() {
        let opts = parse_args(&args(&["-MD", "FOO"])).unwrap();
        assert_eq!(opts.defines.get("FOO").map(String::as_str), Some("1"));
    }

    #[test]
    fn undefine_macro() {
        let opts = parse_args(&args(&["-MUD", "FOO"])).unwrap();
        assert_eq!(opts.undefines, vec!["FOO"]);
    }

    #[test]
    fn warning_control() {
        let opts = parse_args(&args(&["-W1234", "-Werror", "5678"])).unwrap();
        assert_eq!(opts.disabled_warnings, vec![1234]);
        assert_eq!(opts.error_warnings, vec![5678]);
    }

    #[test]
    fn map_file() {
        let opts = parse_args(&args(&["-Map", "out.map"])).unwrap();
        assert_eq!(opts.map_file.as_deref(), Some("out.map"));
    }

    #[test]
    fn eliminate_and_keep() {
        let opts = parse_args(&args(&["-e", "-ek", "mysec"])).unwrap();
        assert!(opts.eliminate);
        assert_eq!(opts.keep_sections, vec!["mysec"]);
    }

    #[test]
    fn si_revision() {
        let opts = parse_args(&args(&["-si-revision", "1.0"])).unwrap();
        assert_eq!(opts.si_revision.as_deref(), Some("1.0"));
    }

    #[test]
    fn mem_init_flag() {
        let opts = parse_args(&args(&["-selinit"])).unwrap();
        assert!(opts.mem_init);
    }

    #[test]
    fn skip_preprocess() {
        let opts = parse_args(&args(&["-sp"])).unwrap();
        assert!(opts.skip_preprocess);
    }

    #[test]
    fn save_temps() {
        let opts = parse_args(&args(&["-save-temps"])).unwrap();
        assert!(opts.save_temps);
    }

    #[test]
    fn xref_flag() {
        let opts = parse_args(&args(&["-xref"])).unwrap();
        assert!(opts.xref);
    }

    #[test]
    fn unknown_option() {
        let result = parse_args(&args(&["-unknown"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn missing_argument() {
        assert!(parse_args(&args(&["-o"])).is_err());
        assert!(parse_args(&args(&["-T"])).is_err());
        assert!(parse_args(&args(&["-proc"])).is_err());
    }

    #[test]
    fn multiple_input_files() {
        let opts = parse_args(&args(&["a.doj", "b.doj", "c.doj"])).unwrap();
        assert_eq!(opts.input_files, vec!["a.doj", "b.doj", "c.doj"]);
    }
}
