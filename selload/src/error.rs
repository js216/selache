// SPDX-License-Identifier: GPL-3.0
// error.rs --- Error types for selload
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Shared(selelf::error::Error),
    Io(io::Error),
    NoInput,
    Usage(String),
    InvalidElf(String),
    OutputTooLarge { size: usize, max: usize },
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Shared(e) => write!(f, "{e}"),
            Error::Io(e) => write!(f, "I/O error: {e}"),
            Error::NoInput => write!(f, "no input file specified"),
            Error::Usage(msg) => write!(f, "{msg}"),
            Error::InvalidElf(msg) => write!(f, "invalid ELF: {msg}"),
            Error::OutputTooLarge { size, max } => {
                write!(f, "output size {size} exceeds MaxImageSize {max}")
            }
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
