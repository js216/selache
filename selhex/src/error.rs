// SPDX-License-Identifier: GPL-3.0
// error.rs --- Error types for selhex
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Io(io::Error),
    NoInput,
    Parse { line: usize, msg: String },
    InvalidChecksum { line: usize },
    Usage(String),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Io(e) => write!(f, "I/O error: {e}"),
            Error::NoInput => write!(f, "No input file"),
            Error::Parse { line, msg } => write!(f, "line {line}: {msg}"),
            Error::InvalidChecksum { line } => write!(f, "line {line}: invalid checksum"),
            Error::Usage(msg) => write!(f, "{msg}"),
        }
    }
}

impl std::error::Error for Error {}

impl From<io::Error> for Error {
    fn from(e: io::Error) -> Self {
        Error::Io(e)
    }
}

pub type Result<T> = std::result::Result<T, Error>;
