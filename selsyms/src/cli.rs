// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for selsyms
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

pub struct Options {
    pub files: Vec<String>,
    pub include_syms: Vec<String>,
    pub exclude_syms: Vec<String>,
    pub show_help: bool,
    pub show_version: bool,
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut opts = Options {
        files: Vec::new(),
        include_syms: Vec::new(),
        exclude_syms: Vec::new(),
        show_help: false,
        show_version: false,
    };

    let mut i = 0;
    while i < args.len() {
        let arg = &args[i];
        match arg.as_str() {
            "-h" | "-help" => {
                opts.show_help = true;
            }
            "-v" | "-version" => {
                opts.show_version = true;
            }
            "-i" | "-include" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage(
                        "missing argument for -include".into(),
                    ));
                }
                for name in args[i].split(',') {
                    if !name.is_empty() {
                        opts.include_syms.push(name.to_string());
                    }
                }
            }
            "-e" | "-exclude" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage(
                        "missing argument for -exclude".into(),
                    ));
                }
                for name in args[i].split(',') {
                    if !name.is_empty() {
                        opts.exclude_syms.push(name.to_string());
                    }
                }
            }
            _ => {
                opts.files.push(arg.clone());
            }
        }
        i += 1;
    }

    Ok(opts)
}

pub fn print_help<W: std::io::Write + ?Sized>(w: &mut W) -> std::io::Result<()> {
    writeln!(w, "Usage: selsyms [options] [files]")?;
    writeln!(w)?;
    writeln!(
        w,
        "Print symbols in the specified ELF files in a format suitable for"
    )?;
    writeln!(
        w,
        "inclusion into linker description files. Only function and object"
    )?;
    writeln!(
        w,
        "symbols with global or weak binding are printed."
    )?;
    writeln!(w)?;
    writeln!(w, "Options:")?;
    writeln!(w, "-i|-include <name>[,<name>]...")?;
    writeln!(w, "        Only include named symbols in output.")?;
    writeln!(w, "-e|-exclude <name>[,<name>]...")?;
    writeln!(w, "        Exclude named symbols from output.")?;
    writeln!(w, "-h|-help")?;
    writeln!(w, "        Show this help message.")?;
    writeln!(w, "-v|-version")?;
    writeln!(w, "        Show version information.")?;
    Ok(())
}

pub fn print_version<W: std::io::Write + ?Sized>(w: &mut W) -> std::io::Result<()> {
    writeln!(w, "selsyms {}", env!("CARGO_PKG_VERSION"))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(strs: &[&str]) -> Vec<String> {
        strs.iter().map(|s| s.to_string()).collect()
    }

    #[test]
    fn test_parse_help() {
        let opts = parse_args(&args(&["-h"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_parse_help_long() {
        let opts = parse_args(&args(&["-help"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_parse_version() {
        let opts = parse_args(&args(&["-v"])).unwrap();
        assert!(opts.show_version);
    }

    #[test]
    fn test_parse_version_long() {
        let opts = parse_args(&args(&["-version"])).unwrap();
        assert!(opts.show_version);
    }

    #[test]
    fn test_parse_files() {
        let opts = parse_args(&args(&["a.doj", "b.doj"])).unwrap();
        assert_eq!(opts.files, vec!["a.doj", "b.doj"]);
    }

    #[test]
    fn test_parse_include() {
        let opts = parse_args(&args(&["-i", "foo,bar", "a.doj"])).unwrap();
        assert_eq!(opts.include_syms, vec!["foo", "bar"]);
        assert_eq!(opts.files, vec!["a.doj"]);
    }

    #[test]
    fn test_parse_include_long() {
        let opts =
            parse_args(&args(&["-include", "foo", "a.doj"])).unwrap();
        assert_eq!(opts.include_syms, vec!["foo"]);
    }

    #[test]
    fn test_parse_exclude() {
        let opts = parse_args(&args(&["-e", "baz", "a.doj"])).unwrap();
        assert_eq!(opts.exclude_syms, vec!["baz"]);
    }

    #[test]
    fn test_parse_exclude_long() {
        let opts =
            parse_args(&args(&["-exclude", "baz", "a.doj"])).unwrap();
        assert_eq!(opts.exclude_syms, vec!["baz"]);
    }

    #[test]
    fn test_missing_include_arg() {
        let result = parse_args(&args(&["-i"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_missing_exclude_arg() {
        let result = parse_args(&args(&["-e"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_print_help_output() {
        let mut buf = Vec::new();
        print_help(&mut buf).unwrap();
        let text = String::from_utf8(buf).unwrap();
        assert!(text.contains("Usage: selsyms"));
        assert!(text.contains("-i|-include"));
        assert!(text.contains("-e|-exclude"));
    }

    #[test]
    fn test_print_version_output() {
        let mut buf = Vec::new();
        print_version(&mut buf).unwrap();
        let text = String::from_utf8(buf).unwrap();
        assert!(text.starts_with("selsyms "));
    }
}
