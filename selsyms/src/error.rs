// SPDX-License-Identifier: GPL-3.0
// error.rs --- Error types for selsyms
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Shared(selelf::error::Error),
    Io(io::Error),
    Usage(String),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Shared(e) => write!(f, "{e}"),
            Error::Io(e) => write!(f, "{e}"),
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

impl From<selelf::error::Error> for Error {
    fn from(e: selelf::error::Error) -> Self {
        Error::Shared(e)
    }
}

pub type Result<T> = std::result::Result<T, Error>;
