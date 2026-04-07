// SPDX-License-Identifier: GPL-3.0
// error.rs --- Error types for seldump
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Elf(selelf::error::Error),
    Io(io::Error),
    Usage(String),
    NoFile,
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Elf(e) => write!(f, "{e}"),
            Error::Io(e) => write!(f, "I/O error: {e}"),
            Error::Usage(msg) => write!(f, "{msg}"),
            Error::NoFile => write!(f, "no object file specified"),
        }
    }
}

impl std::error::Error for Error {}

impl From<selelf::error::Error> for Error {
    fn from(e: selelf::error::Error) -> Self {
        Error::Elf(e)
    }
}

impl From<io::Error> for Error {
    fn from(e: io::Error) -> Self {
        Error::Io(e)
    }
}

pub type Result<T> = std::result::Result<T, Error>;
