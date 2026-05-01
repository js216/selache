// SPDX-License-Identifier: GPL-3.0
// error.rs --- Error types for seld
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Shared(selelf::error::Error),
    Io(io::Error),
    Usage(String),
    NoInput,
    NoOutput,
    NoLdf,
    Parse(String),
    UnresolvedSymbol(String),
    DuplicateSymbol {
        name: String,
        first: String,
        second: String,
    },
    Relocation(String),
    LayoutOverflow {
        section: String,
        segment: String,
        requested: u32,
        remaining: u32,
    },
    UnsupportedRelocationType {
        reloc_type: u32,
        offset: u32,
        section: String,
        object: String,
    },
    OrphanSection {
        section: String,
        object: String,
    },
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Shared(e) => write!(f, "{e}"),
            Error::Io(e) => write!(f, "I/O error: {e}"),
            Error::Usage(msg) => write!(f, "{msg}"),
            Error::NoInput => write!(f, "no input files specified"),
            Error::NoOutput => write!(f, "no output file specified (-o)"),
            Error::NoLdf => write!(f, "no LDF file specified (-T)"),
            Error::Parse(msg) => write!(f, "LDF parse error: {msg}"),
            Error::UnresolvedSymbol(name) => {
                write!(f, "unresolved symbol: `{name}`")
            }
            Error::DuplicateSymbol { name, first, second } => {
                write!(
                    f,
                    "duplicate symbol `{name}`: defined in `{first}` and `{second}`"
                )
            }
            Error::Relocation(msg) => write!(f, "relocation error: {msg}"),
            Error::LayoutOverflow {
                section,
                segment,
                requested,
                remaining,
            } => write!(
                f,
                "layout overflow: section `{section}` requires {requested} units in segment `{segment}` but only {remaining} units remain"
            ),
            Error::UnsupportedRelocationType {
                reloc_type,
                offset,
                section,
                object,
            } => write!(
                f,
                "unsupported relocation type 0x{reloc_type:x} at offset 0x{offset:x} in section `{section}` of `{object}`"
            ),
            Error::OrphanSection { section, object } => write!(
                f,
                "orphan section: `{section}` in `{object}` was not claimed by any LDF output section"
            ),
        }
    }
}

impl std::error::Error for Error {}

impl From<io::Error> for Error {
    fn from(e: io::Error) -> Self {
        Error::Io(e)
    }
}

impl From<selelf::error::Error> for Error {
    fn from(e: selelf::error::Error) -> Self {
        Error::Shared(e)
    }
}

pub type Result<T> = std::result::Result<T, Error>;
