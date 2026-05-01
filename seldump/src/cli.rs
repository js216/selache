// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

/// Content format for section dumps.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ContentFormat {
    /// Choose based on section type.
    Default,
    /// Hex + ASCII, 16 bytes per line.
    HexAscii,
    /// Hex dump, N bytes per group (default 4).
    Hex { group_size: usize },
    /// Hex dump using section entry size as line width.
    EntrySize,
    /// Hexlet dump, N bytes per group, optionally reversed.
    Hexlet { group_size: usize, reverse: bool },
    /// Disassembly.
    Disasm,
    /// Disassembly with labels.
    DisasmLabels,
    /// Disassembly mnemonic only.
    DisasmMnemonic,
}

/// Parsed command-line options.
#[derive(Debug)]
pub struct Options {
    pub show_file_header: bool,
    pub show_program_headers: bool,
    pub show_section_headers: bool,
    pub show_notes: bool,
    pub section_names: Vec<(String, ContentFormat)>,
    pub section_indices: Vec<(u32, u32, ContentFormat)>,
    pub omit_string_tables: bool,
    pub show_version: bool,
    pub show_help: bool,
    pub show_arsym: bool,
    pub show_arall: bool,
    pub file: Option<String>,
    pub archive_member: Option<String>,
}

impl Options {
    /// Returns true if any display option was explicitly requested.
    pub fn has_display_option(&self) -> bool {
        self.show_file_header
            || self.show_program_headers
            || self.show_section_headers
            || self.show_notes
            || !self.section_names.is_empty()
            || !self.section_indices.is_empty()
            || self.show_version
            || self.show_help
            || self.show_arsym
            || self.show_arall
    }
}

/// Parse a format modifier string (the part after -n or -i, before the argument).
/// Returns (format, remaining_chars) where remaining_chars might contain width spec.
fn parse_format_modifier(modifier: &str) -> Result<ContentFormat> {
    if modifier.is_empty() {
        return Ok(ContentFormat::Default);
    }
    let bytes = modifier.as_bytes();
    match bytes[0] {
        b'a' => Ok(ContentFormat::HexAscii),
        b'x' => {
            let rest = &modifier[1..];
            if rest.is_empty() {
                Ok(ContentFormat::Hex { group_size: 4 })
            } else {
                let n: usize = rest.parse().map_err(|_| {
                    Error::Usage(format!("invalid group size in modifier: {modifier}"))
                })?;
                if n == 0 {
                    Ok(ContentFormat::Hex { group_size: 4 })
                } else {
                    Ok(ContentFormat::Hex { group_size: n })
                }
            }
        }
        b't' => Ok(ContentFormat::EntrySize),
        b'h' => {
            let rest = &modifier[1..];
            let group_size: usize = if rest.is_empty() {
                4
            } else {
                rest.parse().map_err(|_| {
                    Error::Usage(format!("invalid group size in modifier: {modifier}"))
                })?
            };
            Ok(ContentFormat::Hexlet {
                group_size: if group_size == 0 { 4 } else { group_size },
                reverse: false,
            })
        }
        b'H' => {
            let rest = &modifier[1..];
            let group_size: usize = if rest.is_empty() {
                4
            } else {
                rest.parse().map_err(|_| {
                    Error::Usage(format!("invalid group size in modifier: {modifier}"))
                })?
            };
            Ok(ContentFormat::Hexlet {
                group_size: if group_size == 0 { 4 } else { group_size },
                reverse: true,
            })
        }
        b'i' => Ok(ContentFormat::Disasm),
        b's' => Ok(ContentFormat::DisasmLabels),
        b'm' => Ok(ContentFormat::DisasmMnemonic),
        _ => Err(Error::Usage(format!("unknown format modifier: {modifier}"))),
    }
}

/// Parse command-line arguments into Options.
pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut opts = Options {
        show_file_header: false,
        show_program_headers: false,
        show_section_headers: false,
        show_notes: false,
        section_names: Vec::new(),
        section_indices: Vec::new(),
        omit_string_tables: false,
        show_version: false,
        show_help: false,
        show_arsym: false,
        show_arall: false,
        file: None,
        archive_member: None,
    };

    let mut i = 0;
    while i < args.len() {
        let arg = &args[i];

        if arg == "-fh" {
            opts.show_file_header = true;
        } else if arg == "-ph" {
            opts.show_program_headers = true;
        } else if arg == "-sh" {
            opts.show_section_headers = true;
        } else if arg == "-notes" {
            opts.show_notes = true;
        } else if arg == "-all" {
            opts.show_file_header = true;
            opts.show_program_headers = true;
            opts.show_section_headers = true;
            opts.show_notes = true;
            opts.section_names
                .push(("*".to_string(), ContentFormat::Default));
        } else if arg == "-ost" || arg == "-c" || arg == "-s" {
            opts.omit_string_tables = true;
        } else if arg == "-v" {
            opts.show_version = true;
        } else if arg == "-help" {
            opts.show_help = true;
        } else if arg == "-arsym" {
            opts.show_arsym = true;
        } else if arg == "-arall" {
            opts.show_arall = true;
        } else if arg.starts_with("-n") && arg.len() >= 2 {
            // -n[modifier] name
            let modifier = &arg[2..];
            let fmt = parse_format_modifier(modifier)?;
            i += 1;
            if i >= args.len() {
                return Err(Error::Usage(
                    "-n requires a section name argument".to_string(),
                ));
            }
            let name = args[i].clone();
            opts.section_names.push((name, fmt));
        } else if arg.starts_with("-i") && arg.len() >= 2 {
            // -i[modifier] range
            let modifier = &arg[2..];
            let fmt = parse_format_modifier(modifier)?;
            i += 1;
            if i >= args.len() {
                return Err(Error::Usage("-i requires a range argument".to_string()));
            }
            let range_str = &args[i];
            let (start, end) = parse_index_range(range_str)?;
            opts.section_indices.push((start, end, fmt));
        } else if arg.starts_with('-') {
            return Err(Error::Usage(format!("unknown option: {arg}")));
        } else {
            // Object file argument -- parse A(B) form
            let (file, member) = parse_file_arg(arg);
            opts.file = Some(file);
            opts.archive_member = member;
        }
        i += 1;
    }

    Ok(opts)
}

/// Parse an index range "x0" or "x0-x1".
fn parse_index_range(s: &str) -> Result<(u32, u32)> {
    if let Some(pos) = s.find('-') {
        let start: u32 = s[..pos]
            .parse()
            .map_err(|_| Error::Usage(format!("invalid range start: {}", &s[..pos])))?;
        let end: u32 = s[pos + 1..]
            .parse()
            .map_err(|_| Error::Usage(format!("invalid range end: {}", &s[pos + 1..])))?;
        Ok((start, end))
    } else {
        let idx: u32 = s
            .parse()
            .map_err(|_| Error::Usage(format!("invalid section index: {s}")))?;
        Ok((idx, idx))
    }
}

/// Parse a file argument, handling the A(B) archive member form.
fn parse_file_arg(arg: &str) -> (String, Option<String>) {
    if let Some(paren_start) = arg.find('(') {
        if arg.ends_with(')') {
            let file = arg[..paren_start].to_string();
            let member = arg[paren_start + 1..arg.len() - 1].to_string();
            return (file, Some(member));
        }
    }
    (arg.to_string(), None)
}

pub fn print_help(w: &mut dyn std::io::Write) -> std::io::Result<()> {
    writeln!(w, "Usage: seldump {{option}} {{objectfile}}")?;
    writeln!(w, " -fh         Print file header.")?;
    writeln!(w, " -arsym      Print the archive symbol table")?;
    writeln!(w, " -arall      Print every archive member")?;
    writeln!(w, " -ph         Print program header table.")?;
    writeln!(w, " -sh         Print section header table.")?;
    writeln!(
        w,
        "             -sh is the default if no options are specified."
    )?;
    writeln!(w, " -notes      Print note segment(s).")?;
    writeln!(
        w,
        " -n name     Print contents of the named section(s).  name may be a simple"
    )?;
    writeln!(
        w,
        "             'glob'-style pattern, using ? and * as wildcard characters."
    )?;
    writeln!(
        w,
        "             Each section's name and type determines its output format,"
    )?;
    writeln!(
        w,
        "             unless overridden by a modifier (see below)."
    )?;
    writeln!(
        w,
        " -i x0[-x1]  Print contents of the sections numbered x0 through x1, where"
    )?;
    writeln!(
        w,
        "             x0 and x1 are decimal integers, and x1 defaults to x0 if"
    )?;
    writeln!(w, "             omitted.  Formatting rules as are for -n.")?;
    writeln!(
        w,
        " -all        Print everything.  Same as -fh -ph -sh -notes -n '*'"
    )?;
    writeln!(w, " -ost        Omit string table sections.")?;
    writeln!(w, " -c          Same as -ost (deprecated)")?;
    writeln!(w, " -s          Same as -ost (deprecated)")?;
    writeln!(w, " -v          Print version")?;
    writeln!(
        w,
        " objectfile  File whose contents are to be printed.  It can be a core file,"
    )?;
    writeln!(
        w,
        "             executable, shared library, or relocatable object file.  If"
    )?;
    writeln!(
        w,
        "             the name is in the form A(B), A is assumed to be an archive"
    )?;
    writeln!(
        w,
        "             and B is an ELF element in the archive. B can be a pattern"
    )?;
    writeln!(w, "             like the one accepted by -n.")?;
    writeln!(w)?;
    writeln!(
        w,
        "The -n and -i options can have a modifier letter after the main option"
    )?;
    writeln!(
        w,
        "character which forces section contents to be formatted a certain way:"
    )?;
    writeln!(w, " a  Dump contents in hex and ASCII, 16 bytes per line.")?;
    writeln!(w, " x  Dump contents in hex, 32 bytes per line.")?;
    writeln!(
        w,
        " xN Dump contents in hex, N bytes per group (default is N=4)."
    )?;
    writeln!(
        w,
        " t  Dump contents in hex, N bytes per line, where N is the section's"
    )?;
    writeln!(
        w,
        "    table entry size.  If N is not in the range 1..32, 32 is used."
    )?;
    writeln!(w, " hN Dump contents in hexlet, N bytes per group.")?;
    writeln!(
        w,
        " HN Dump contents in hexlet in reverse byte order, N bytes per group."
    )?;
    writeln!(
        w,
        " i  Print contents as list of disassembled machine instructions."
    )?;
    writeln!(
        w,
        " s  Print contents as list of disassembled machine instructions. Also print"
    )?;
    writeln!(w, "    labels.")?;
    writeln!(
        w,
        " m  Print contents as list of disassembled machine instructions without"
    )?;
    writeln!(w, "    address/opcodes/symbols.")?;
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_default_no_args() {
        let opts = parse_args(&[]).unwrap();
        assert!(!opts.has_display_option());
        assert!(opts.file.is_none());
    }

    #[test]
    fn test_file_header() {
        let opts = parse_args(&["-fh".into(), "test.doj".into()]).unwrap();
        assert!(opts.show_file_header);
        assert_eq!(opts.file.as_deref(), Some("test.doj"));
    }

    #[test]
    fn test_all_flag() {
        let opts = parse_args(&["-all".into(), "test.doj".into()]).unwrap();
        assert!(opts.show_file_header);
        assert!(opts.show_program_headers);
        assert!(opts.show_section_headers);
        assert!(opts.show_notes);
        assert_eq!(opts.section_names.len(), 1);
        assert_eq!(opts.section_names[0].0, "*");
    }

    #[test]
    fn test_section_name() {
        let opts = parse_args(&["-n".into(), ".text".into(), "test.doj".into()]).unwrap();
        assert_eq!(opts.section_names.len(), 1);
        assert_eq!(opts.section_names[0].0, ".text");
        assert_eq!(opts.section_names[0].1, ContentFormat::Default);
    }

    #[test]
    fn test_section_name_with_format() {
        let opts = parse_args(&["-na".into(), ".data".into()]).unwrap();
        assert_eq!(opts.section_names[0].1, ContentFormat::HexAscii);

        let opts = parse_args(&["-nx8".into(), ".data".into()]).unwrap();
        assert_eq!(
            opts.section_names[0].1,
            ContentFormat::Hex { group_size: 8 }
        );

        let opts = parse_args(&["-ni".into(), ".text".into()]).unwrap();
        assert_eq!(opts.section_names[0].1, ContentFormat::Disasm);

        let opts = parse_args(&["-ns".into(), ".text".into()]).unwrap();
        assert_eq!(opts.section_names[0].1, ContentFormat::DisasmLabels);

        let opts = parse_args(&["-nm".into(), ".text".into()]).unwrap();
        assert_eq!(opts.section_names[0].1, ContentFormat::DisasmMnemonic);
    }

    #[test]
    fn test_section_index() {
        let opts = parse_args(&["-i".into(), "3".into(), "test.doj".into()]).unwrap();
        assert_eq!(opts.section_indices.len(), 1);
        assert_eq!(opts.section_indices[0], (3, 3, ContentFormat::Default));
    }

    #[test]
    fn test_section_index_range() {
        let opts = parse_args(&["-i".into(), "3-5".into()]).unwrap();
        assert_eq!(opts.section_indices[0], (3, 5, ContentFormat::Default));
    }

    #[test]
    fn test_section_index_with_format() {
        let opts = parse_args(&["-ix".into(), "2-4".into()]).unwrap();
        assert_eq!(
            opts.section_indices[0],
            (2, 4, ContentFormat::Hex { group_size: 4 })
        );
    }

    #[test]
    fn test_ost_flags() {
        let opts = parse_args(&["-ost".into()]).unwrap();
        assert!(opts.omit_string_tables);

        let opts = parse_args(&["-c".into()]).unwrap();
        assert!(opts.omit_string_tables);

        let opts = parse_args(&["-s".into()]).unwrap();
        assert!(opts.omit_string_tables);
    }

    #[test]
    fn test_archive_member_parsing() {
        let opts = parse_args(&["lib.dlb(foo.doj)".into()]).unwrap();
        assert_eq!(opts.file.as_deref(), Some("lib.dlb"));
        assert_eq!(opts.archive_member.as_deref(), Some("foo.doj"));
    }

    #[test]
    fn test_archive_member_glob() {
        let opts = parse_args(&["lib.dlb(*.doj)".into()]).unwrap();
        assert_eq!(opts.file.as_deref(), Some("lib.dlb"));
        assert_eq!(opts.archive_member.as_deref(), Some("*.doj"));
    }

    #[test]
    fn test_hexlet_format() {
        let opts = parse_args(&["-nh4".into(), ".data".into()]).unwrap();
        assert_eq!(
            opts.section_names[0].1,
            ContentFormat::Hexlet {
                group_size: 4,
                reverse: false
            }
        );

        let opts = parse_args(&["-nH8".into(), ".data".into()]).unwrap();
        assert_eq!(
            opts.section_names[0].1,
            ContentFormat::Hexlet {
                group_size: 8,
                reverse: true
            }
        );
    }

    #[test]
    fn test_entry_size_format() {
        let opts = parse_args(&["-nt".into(), ".data".into()]).unwrap();
        assert_eq!(opts.section_names[0].1, ContentFormat::EntrySize);
    }

    #[test]
    fn test_unknown_option() {
        let result = parse_args(&["-z".into()]);
        assert!(result.is_err());
    }

    #[test]
    fn test_version_and_help() {
        let opts = parse_args(&["-v".into()]).unwrap();
        assert!(opts.show_version);

        let opts = parse_args(&["-help".into()]).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_arsym_arall() {
        let opts = parse_args(&["-arsym".into(), "lib.dlb".into()]).unwrap();
        assert!(opts.show_arsym);

        let opts = parse_args(&["-arall".into(), "lib.dlb".into()]).unwrap();
        assert!(opts.show_arall);
    }

    #[test]
    fn test_multiple_options() {
        let opts = parse_args(&[
            "-fh".into(),
            "-ph".into(),
            "-n".into(),
            ".text".into(),
            "-ost".into(),
            "test.doj".into(),
        ])
        .unwrap();
        assert!(opts.show_file_header);
        assert!(opts.show_program_headers);
        assert!(opts.omit_string_tables);
        assert_eq!(opts.section_names.len(), 1);
        assert_eq!(opts.file.as_deref(), Some("test.doj"));
    }

    #[test]
    fn test_n_missing_arg() {
        let result = parse_args(&["-n".into()]);
        assert!(result.is_err());
    }

    #[test]
    fn test_i_missing_arg() {
        let result = parse_args(&["-i".into()]);
        assert!(result.is_err());
    }
}
