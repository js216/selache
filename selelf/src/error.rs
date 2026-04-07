// SPDX-License-Identifier: GPL-3.0
// error.rs --- Shared error types
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Io(io::Error),
    InvalidMagic,
    InvalidMemberHeader,
    InvalidElf(String),
    MemberNotFound(String),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Io(e) => write!(f, "I/O error: {e}"),
            Error::InvalidMagic => write!(f, "not a valid ELF archive (bad magic)"),
            Error::InvalidMemberHeader => write!(f, "corrupt member header"),
            Error::InvalidElf(msg) => write!(f, "invalid ELF: {msg}"),
            Error::MemberNotFound(name) => write!(f, "member not found: {name}"),
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
