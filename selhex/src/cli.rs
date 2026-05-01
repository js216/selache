// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for selhex
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

/// Output format selection.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OutputFormat {
    S1,
    S2,
    S3,
    StripHex,
}

/// Parsed command-line options.
#[derive(Debug)]
pub struct Options {
    pub input_file: String,
    pub output_file: Option<String>,
    pub format: OutputFormat,
}

impl Options {
    /// Derive the actual output path from input file and explicit -o switch.
    pub fn output_path(&self) -> String {
        if let Some(ref path) = self.output_file {
            return path.clone();
        }
        match self.format {
            OutputFormat::StripHex => {
                // Strip extension and add .bin
                if let Some(pos) = self.input_file.rfind('.') {
                    format!("{}.bin", &self.input_file[..pos])
                } else {
                    format!("{}.bin", self.input_file)
                }
            }
            _ => {
                // Default: input_file.s
                format!("{}.s", self.input_file)
            }
        }
    }
}

/// Parse command-line arguments into Options.
pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut input_file: Option<String> = None;
    let mut output_file: Option<String> = None;
    let mut format: Option<OutputFormat> = None;

    let mut set_format = |fmt: OutputFormat| -> Result<()> {
        if format.is_some() {
            return Err(Error::Usage("only one format switch allowed".to_string()));
        }
        format = Some(fmt);
        Ok(())
    };

    let mut i = 0;
    while i < args.len() {
        let arg = &args[i];

        if arg.eq_ignore_ascii_case("-s1") {
            set_format(OutputFormat::S1)?;
        } else if arg.eq_ignore_ascii_case("-s2") {
            set_format(OutputFormat::S2)?;
        } else if arg.eq_ignore_ascii_case("-s3") {
            set_format(OutputFormat::S3)?;
        } else if arg.eq_ignore_ascii_case("-striphex") {
            set_format(OutputFormat::StripHex)?;
        } else if arg.eq_ignore_ascii_case("-o") {
            i += 1;
            if i >= args.len() {
                return Err(Error::Usage("-o requires an output filename".to_string()));
            }
            output_file = Some(args[i].clone());
        } else if arg.starts_with('-') {
            return Err(Error::Usage(format!("unknown option: {arg}")));
        } else {
            if input_file.is_some() {
                return Err(Error::Usage("only one input file allowed".to_string()));
            }
            input_file = Some(arg.clone());
        }
        i += 1;
    }

    let input_file = match input_file {
        Some(f) => f,
        None => return Err(Error::NoInput),
    };

    Ok(Options {
        input_file,
        output_file,
        format: format.unwrap_or(OutputFormat::S3),
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_no_args_gives_no_input() {
        let err = parse_args(&[]).unwrap_err();
        assert!(matches!(err, Error::NoInput));
    }

    #[test]
    fn test_input_only_defaults_s3() {
        let opts = parse_args(&["test.ldr".into()]).unwrap();
        assert_eq!(opts.input_file, "test.ldr");
        assert_eq!(opts.format, OutputFormat::S3);
        assert_eq!(opts.output_path(), "test.ldr.s");
    }

    #[test]
    fn test_s1_format() {
        let opts = parse_args(&["test.ldr".into(), "-s1".into()]).unwrap();
        assert_eq!(opts.format, OutputFormat::S1);
    }

    #[test]
    fn test_s2_format() {
        let opts = parse_args(&["test.ldr".into(), "-s2".into()]).unwrap();
        assert_eq!(opts.format, OutputFormat::S2);
    }

    #[test]
    fn test_striphex_format() {
        let opts = parse_args(&["test.ldr".into(), "-StripHex".into()]).unwrap();
        assert_eq!(opts.format, OutputFormat::StripHex);
        assert_eq!(opts.output_path(), "test.bin");
    }

    #[test]
    fn test_output_file() {
        let opts = parse_args(&["test.ldr".into(), "-o".into(), "out.s19".into()]).unwrap();
        assert_eq!(opts.output_path(), "out.s19");
    }

    #[test]
    fn test_duplicate_format_rejected() {
        let err = parse_args(&["test.ldr".into(), "-s1".into(), "-s2".into()]).unwrap_err();
        assert!(matches!(err, Error::Usage(_)));
    }

    #[test]
    fn test_unknown_option() {
        let err = parse_args(&["test.ldr".into(), "-z".into()]).unwrap_err();
        assert!(matches!(err, Error::Usage(_)));
    }

    #[test]
    fn test_duplicate_input_rejected() {
        let err = parse_args(&["a.ldr".into(), "b.ldr".into()]).unwrap_err();
        assert!(matches!(err, Error::Usage(_)));
    }

    #[test]
    fn test_o_missing_argument() {
        let err = parse_args(&["test.ldr".into(), "-o".into()]).unwrap_err();
        assert!(matches!(err, Error::Usage(_)));
    }
}
