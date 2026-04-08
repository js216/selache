// SPDX-License-Identifier: GPL-3.0
// cli.rs --- Command-line argument parsing for selload
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

/// Known ADSP-2156x processor variants.
const KNOWN_PROCESSORS: &[&str] = &[
    "ADSP-21562", "ADSP-21563", "ADSP-21565", "ADSP-21566",
    "ADSP-21567", "ADSP-21568", "ADSP-21569",
];

/// Supported boot modes.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BootMode {
    Spi,
    SpiHost,
    LpHost,
    UartHost,
    Ospi,
    Emmc,
}

impl BootMode {
    fn from_str(s: &str) -> std::result::Result<Self, String> {
        match s {
            "SPI" => Ok(BootMode::Spi),
            "SPIHOST" => Ok(BootMode::SpiHost),
            "LPHOST" => Ok(BootMode::LpHost),
            "UARTHOST" => Ok(BootMode::UartHost),
            "OSPI" => Ok(BootMode::Ospi),
            "eMMC" => Ok(BootMode::Emmc),
            _ => Err(format!("unknown boot mode: {s}")),
        }
    }
}

/// Supported output formats.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OutputFormat {
    Binary,
    Hex,
    Ascii,
    Include,
}

impl OutputFormat {
    fn from_str(s: &str) -> std::result::Result<Self, String> {
        match s {
            "binary" => Ok(OutputFormat::Binary),
            "hex" => Ok(OutputFormat::Hex),
            "ascii" => Ok(OutputFormat::Ascii),
            "include" => Ok(OutputFormat::Include),
            _ => Err(format!("unknown output format: {s}")),
        }
    }
}

/// Parsed command-line options.
#[derive(Debug)]
pub struct Options {
    pub processor: String,
    pub boot_mode: BootMode,
    pub bcode: Option<u32>,
    pub input_file: String,
    pub output_file: Option<String>,
    pub format: OutputFormat,
    pub crc32_enabled: bool,
    pub crc32_polynomial: u32,
    pub max_block_size: Option<u32>,
    pub max_image_size: Option<usize>,
    pub width: Option<u32>,
    pub verbose: bool,
    pub show_help: bool,
    pub show_version: bool,
    pub suppress_warnings: bool,
    pub no_fill_block: bool,
    pub si_revision: Option<String>,
}

/// Derive the output filename from the input filename by replacing the
/// extension with `.ldr`.
pub fn default_output_name(input: &str) -> String {
    if let Some(dot) = input.rfind('.') {
        format!("{}.ldr", &input[..dot])
    } else {
        format!("{input}.ldr")
    }
}

/// Try to parse a numeric string as u32, accepting both decimal and
/// `0x`-prefixed hexadecimal.
fn parse_u32(s: &str) -> std::result::Result<u32, String> {
    if let Some(hex) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        u32::from_str_radix(hex, 16).map_err(|e| format!("invalid number '{s}': {e}"))
    } else {
        s.parse::<u32>().map_err(|e| format!("invalid number '{s}': {e}"))
    }
}

/// Returns true if `s` looks like a numeric literal (starts with a digit).
fn looks_like_number(s: &str) -> bool {
    s.starts_with(|c: char| c.is_ascii_digit())
}

pub fn parse_args(args: &[String]) -> Result<Options> {
    let mut processor: Option<String> = None;
    let mut boot_mode = BootMode::Spi;
    let mut bcode: Option<u32> = None;
    let mut output_file: Option<String> = None;
    let mut format = OutputFormat::Binary;
    let mut crc32_enabled = false;
    let mut crc32_polynomial = crate::crc32::DEFAULT_POLYNOMIAL;
    let mut max_block_size: Option<u32> = None;
    let mut max_image_size: Option<usize> = None;
    let mut width: Option<u32> = None;
    let mut verbose = false;
    let mut show_help = false;
    let mut show_version = false;
    let mut suppress_warnings = false;
    let mut no_fill_block = false;
    let mut si_revision: Option<String> = None;
    let mut positionals: Vec<String> = Vec::new();

    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "-h" | "-help" => {
                show_help = true;
            }
            "-version" => {
                show_version = true;
            }
            "-v" => {
                verbose = true;
            }
            "-W" => {
                // Accepted for compatibility; not used in stream generation.
                suppress_warnings = true;
            }
            "-NoFillBlock" => {
                // Accepted for compatibility; not used in stream generation.
                no_fill_block = true;
            }
            "-proc" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing processor after -proc".into()));
                }
                processor = Some(args[i].clone());
            }
            "-b" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing boot mode after -b".into()));
                }
                boot_mode = BootMode::from_str(&args[i])
                    .map_err(Error::Usage)?;
            }
            "-bcode" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing value after -bcode".into()));
                }
                bcode = Some(parse_u32(&args[i]).map_err(Error::Usage)?);
            }
            "-o" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing filename after -o".into()));
                }
                output_file = Some(args[i].clone());
            }
            "-f" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing format after -f".into()));
                }
                format = OutputFormat::from_str(&args[i])
                    .map_err(Error::Usage)?;
            }
            "-CRC32" => {
                crc32_enabled = true;
                // Optional polynomial argument: peek at next arg
                if i + 1 < args.len() && looks_like_number(&args[i + 1]) {
                    i += 1;
                    crc32_polynomial = parse_u32(&args[i]).map_err(Error::Usage)?;
                }
            }
            "-MaxBlockSize" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing value after -MaxBlockSize".into()));
                }
                let val = parse_u32(&args[i]).map_err(Error::Usage)?;
                if val % 4 != 0 {
                    return Err(Error::Usage(
                        "MaxBlockSize must be a multiple of 4".into(),
                    ));
                }
                max_block_size = Some(val);
            }
            "-MaxImageSize" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing value after -MaxImageSize".into()));
                }
                let val = parse_u32(&args[i]).map_err(Error::Usage)?;
                max_image_size = Some(val as usize);
            }
            "-Width" => {
                // Accepted for compatibility; not used in stream generation.
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage("missing value after -Width".into()));
                }
                let val = parse_u32(&args[i]).map_err(Error::Usage)?;
                if val != 8 {
                    return Err(Error::Usage(
                        "only -Width 8 is supported".into(),
                    ));
                }
                width = Some(val);
            }
            "-si-revision" => {
                i += 1;
                if i >= args.len() {
                    return Err(Error::Usage(
                        "missing version after -si-revision".into(),
                    ));
                }
                si_revision = Some(args[i].clone());
            }
            // Stubs: parsed but unused
            "-callback" | "-init" | "-M" | "-MM" | "-Mo" | "-Mt"
            | "-core0" | "-core1" | "-core2" => {
                // Consume trailing arguments for switches that take them
                match args[i].as_str() {
                    "-callback" | "-init" => {
                        // Skip until next flag or end
                        while i + 1 < args.len()
                            && !args[i + 1].starts_with('-')
                        {
                            i += 1;
                        }
                    }
                    "-Mo" | "-Mt" => {
                        i += 1; // These take one argument
                    }
                    _ => {}
                }
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
            processor: String::new(),
            boot_mode,
            bcode,
            input_file: String::new(),
            output_file: None,
            format,
            crc32_enabled,
            crc32_polynomial,
            max_block_size,
            max_image_size,
            width,
            verbose,
            show_help,
            show_version,
            suppress_warnings,
            no_fill_block,
            si_revision,
        });
    }

    if positionals.is_empty() {
        return Err(Error::NoInput);
    }
    if positionals.len() > 1 {
        return Err(Error::Usage("too many positional arguments".into()));
    }

    let processor = processor.ok_or(Error::Usage("-proc is required".into()))?;

    if !KNOWN_PROCESSORS.iter().any(|p| p.eq_ignore_ascii_case(&processor)) {
        return Err(Error::Usage(format!("unknown processor: {processor}")));
    }

    Ok(Options {
        processor,
        boot_mode,
        bcode,
        input_file: positionals.into_iter().next().unwrap_or_default(),
        output_file,
        format,
        crc32_enabled,
        crc32_polynomial,
        max_block_size,
        max_image_size,
        width,
        verbose,
        show_help,
        show_version,
        suppress_warnings,
        no_fill_block,
        si_revision,
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
        let opts = parse_args(&args(&["-proc", "ADSP-21569", "input.dxe"])).unwrap();
        assert_eq!(opts.processor, "ADSP-21569");
        assert_eq!(opts.input_file, "input.dxe");
        assert_eq!(opts.boot_mode, BootMode::Spi);
        assert_eq!(opts.format, OutputFormat::Binary);
        assert!(!opts.crc32_enabled);
        assert!(!opts.verbose);
    }

    #[test]
    fn test_parse_all_flags() {
        let opts = parse_args(&args(&[
            "-proc", "ADSP-21569",
            "-b", "OSPI",
            "-bcode", "3",
            "-o", "out.ldr",
            "-f", "hex",
            "-CRC32", "0x04C11DB7",
            "-MaxBlockSize", "1024",
            "-MaxImageSize", "65536",
            "-Width", "8",
            "-v",
            "-W",
            "-NoFillBlock",
            "-si-revision", "1.0",
            "input.dxe",
        ])).unwrap();
        assert_eq!(opts.processor, "ADSP-21569");
        assert_eq!(opts.boot_mode, BootMode::Ospi);
        assert_eq!(opts.bcode, Some(3));
        assert_eq!(opts.output_file, Some("out.ldr".into()));
        assert_eq!(opts.format, OutputFormat::Hex);
        assert!(opts.crc32_enabled);
        assert_eq!(opts.crc32_polynomial, 0x04C1_1DB7);
        assert_eq!(opts.max_block_size, Some(1024));
        assert_eq!(opts.max_image_size, Some(65536));
        assert_eq!(opts.width, Some(8));
        assert!(opts.verbose);
        assert!(opts.suppress_warnings);
        assert!(opts.no_fill_block);
        assert_eq!(opts.si_revision, Some("1.0".into()));
    }

    #[test]
    fn test_crc32_default_poly() {
        let opts = parse_args(&args(&[
            "-proc", "ADSP-21569", "-CRC32", "input.dxe",
        ])).unwrap();
        assert!(opts.crc32_enabled);
        assert_eq!(opts.crc32_polynomial, crate::crc32::DEFAULT_POLYNOMIAL);
        assert_eq!(opts.input_file, "input.dxe");
    }

    #[test]
    fn test_help() {
        let opts = parse_args(&args(&["-help"])).unwrap();
        assert!(opts.show_help);
    }

    #[test]
    fn test_version() {
        let opts = parse_args(&args(&["-version"])).unwrap();
        assert!(opts.show_version);
    }

    #[test]
    fn test_no_input() {
        let result = parse_args(&args(&["-proc", "ADSP-21569"]));
        assert!(matches!(result.unwrap_err(), Error::NoInput));
    }

    #[test]
    fn test_missing_proc() {
        let result = parse_args(&args(&["input.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn test_unknown_option() {
        let result = parse_args(&args(&["-proc", "ADSP-21569", "-zzz", "input.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn test_bad_boot_mode() {
        let result = parse_args(&args(&["-proc", "ADSP-21569", "-b", "NOPE", "input.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn test_bad_width() {
        let result = parse_args(&args(&["-proc", "ADSP-21569", "-Width", "16", "input.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn test_max_block_size_not_multiple_of_4() {
        let result = parse_args(&args(&[
            "-proc", "ADSP-21569", "-MaxBlockSize", "13", "input.dxe",
        ]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }

    #[test]
    fn test_default_output_name() {
        assert_eq!(default_output_name("foo.dxe"), "foo.ldr");
        assert_eq!(default_output_name("bar"), "bar.ldr");
        assert_eq!(default_output_name("path/to/test.elf"), "path/to/test.ldr");
    }

    #[test]
    fn test_stub_options_accepted() {
        // Make sure stub options don't cause errors
        let opts = parse_args(&args(&[
            "-proc", "ADSP-21569", "-core0", "-M", "input.dxe",
        ])).unwrap();
        assert_eq!(opts.input_file, "input.dxe");
    }

    #[test]
    fn test_valid_processors() {
        for proc in KNOWN_PROCESSORS {
            let opts = parse_args(&args(&["-proc", proc, "input.dxe"])).unwrap();
            assert_eq!(opts.processor, *proc);
        }
    }

    #[test]
    fn test_processor_case_insensitive() {
        let opts = parse_args(&args(&["-proc", "adsp-21569", "input.dxe"])).unwrap();
        assert_eq!(opts.processor, "adsp-21569");
    }

    #[test]
    fn test_unknown_processor() {
        let result = parse_args(&args(&["-proc", "ADSP-99999", "input.dxe"]));
        assert!(matches!(result.unwrap_err(), Error::Usage(_)));
    }
}
