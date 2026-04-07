// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

#[derive(Debug, PartialEq, Eq)]
pub enum Action {
    Create,
    Append,
    Delete,
    Extract,
    Print,
    Replace,
    Encrypt,
    PrintVersion,
}

#[derive(Debug, PartialEq, Eq)]
pub enum VersionTag {
    /// -t "string"
    Simple(String),
    /// -tx filename
    File(String),
    /// -twc nn.nn.nn
    Validated(String),
}

#[derive(Debug)]
pub struct Options {
    pub action: Action,
    pub library: String,
    pub files: Vec<String>,
    pub verbose: bool,
    pub version_tag: Option<VersionTag>,
    pub clear_version: bool,
    pub print_all_version: bool,
    pub show_version: bool,
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut action: Option<Action> = None;
    let mut library: Option<String> = None;
    let mut files: Vec<String> = Vec::new();
    let mut verbose = false;
    let mut version_tag: Option<VersionTag> = None;
    let mut clear_version = false;
    let mut print_all_version = false;
    let mut show_version = false;

    let mut i = 0;
    while i < args.len() {
        let arg = args[i].to_lowercase();
        match arg.as_str() {
            "-c" => set_action(&mut action, Action::Create)?,
            "-a" => set_action(&mut action, Action::Append)?,
            "-d" => set_action(&mut action, Action::Delete)?,
            "-e" => set_action(&mut action, Action::Extract)?,
            "-p" => set_action(&mut action, Action::Print)?,
            "-r" => set_action(&mut action, Action::Replace)?,
            "-s" => set_action(&mut action, Action::Encrypt)?,
            "-pv" => {
                set_action(&mut action, Action::PrintVersion)?;
            }
            "-pva" => {
                set_action(&mut action, Action::PrintVersion)?;
                print_all_version = true;
            }
            "-anv" => {
                set_action(&mut action, Action::Append)?;
                clear_version = true;
            }
            "-dnv" => {
                set_action(&mut action, Action::Delete)?;
                clear_version = true;
            }
            "-tnv" => {
                clear_version = true;
            }
            "-v" => verbose = true,
            "-w" | "-m" | "-mm" => {
                // Accepted but not yet implemented: -w (suppress warnings),
                // -M (print deps), -MM (print deps + create)
            }
            "-version" | "--version" => show_version = true,
            "-t" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-t".into()));
                }
                version_tag = Some(VersionTag::Simple(args[i].clone()));
            }
            "-tx" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-tx".into()));
                }
                version_tag = Some(VersionTag::File(args[i].clone()));
            }
            "-twc" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-twc".into()));
                }
                version_tag = Some(VersionTag::Validated(args[i].clone()));
            }
            "-i" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::MissingArgument("-i".into()));
                }
                let content =
                    std::fs::read_to_string(&args[i]).map_err(selelf::error::Error::Io)?;
                for name in content.split_whitespace() {
                    files.push(name.to_string());
                }
            }
            other => {
                // Check for -Wnnnn (selective warning suppression, accepted but ignored)
                let lower = other.to_lowercase();
                if let Some(num_str) = lower.strip_prefix("-w") {
                    if num_str.parse::<u32>().is_ok() {
                        i += 1;
                        continue;
                    }
                }
                // Otherwise it's a positional argument (library or file)
                if library.is_none() && (action.is_some() || show_version) {
                    library = Some(args[i].clone());
                } else {
                    files.push(args[i].clone());
                }
            }
        }
        i += 1;
    }

    if show_version && action.is_none() {
        return Ok(Options {
            action: Action::Print, // dummy
            library: String::new(),
            files,
            verbose,
            version_tag,
            clear_version,
            print_all_version,
            show_version,
        });
    }

    let action = action.ok_or(Error::NoAction)?;

    if library.is_none() && !show_version {
        if !files.is_empty() {
            library = Some(files.remove(0));
        } else {
            return Err(Error::MissingLibrary);
        }
    }

    Ok(Options {
        action,
        library: library.unwrap_or_default(),
        files,
        verbose,
        version_tag,
        clear_version,
        print_all_version,
        show_version,
    })
}

fn set_action(current: &mut Option<Action>, new: Action) -> Result<()> {
    if current.is_some() {
        return Err(Error::MultipleActions);
    }
    *current = Some(new);
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    fn args(strs: &[&str]) -> Vec<String> {
        strs.iter().map(|s| s.to_string()).collect()
    }

    #[test]
    fn test_parse_create() {
        let opts = parse_args(&args(&["-c", "lib.dlb", "a.doj", "b.doj"])).unwrap();
        assert_eq!(opts.action, Action::Create);
        assert_eq!(opts.library, "lib.dlb");
        assert_eq!(opts.files, vec!["a.doj", "b.doj"]);
    }

    #[test]
    fn test_parse_print() {
        let opts = parse_args(&args(&["-p", "lib.dlb"])).unwrap();
        assert_eq!(opts.action, Action::Print);
        assert_eq!(opts.library, "lib.dlb");
    }

    #[test]
    fn test_mutually_exclusive_actions() {
        let result = parse_args(&args(&["-c", "-a", "lib.dlb"]));
        assert!(result.is_err());
    }

    #[test]
    fn test_case_insensitive() {
        let opts = parse_args(&args(&["-C", "lib.dlb", "a.doj"])).unwrap();
        assert_eq!(opts.action, Action::Create);
    }

    #[test]
    fn test_version_switches() {
        let opts = parse_args(&args(&["-c", "-t", "1.0", "lib.dlb", "a.doj"])).unwrap();
        assert_eq!(opts.action, Action::Create);
        assert_eq!(opts.version_tag, Some(VersionTag::Simple("1.0".into())));
    }

    #[test]
    fn test_pv_switch() {
        let opts = parse_args(&args(&["-pv", "lib.dlb"])).unwrap();
        assert_eq!(opts.action, Action::PrintVersion);
        assert!(!opts.print_all_version);
    }

    #[test]
    fn test_pva_switch() {
        let opts = parse_args(&args(&["-pva", "lib.dlb"])).unwrap();
        assert_eq!(opts.action, Action::PrintVersion);
        assert!(opts.print_all_version);
    }
}
