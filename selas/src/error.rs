// SPDX-License-Identifier: GPL-3.0
// error.rs --- Assembler error types
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Shared(selelf::error::Error),
    Parse { line: u32, msg: String },
    UnknownMnemonic { line: u32, text: String },
    UnknownRegister { line: u32, name: String },
    UnknownCondition { line: u32, name: String },
    MissingArgument(String),
    NoInput,
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Shared(e) => write!(f, "{e}"),
            Error::Parse { line, msg } => write!(f, "line {line}: {msg}"),
            Error::UnknownMnemonic { line, text } => {
                write!(f, "line {line}: unknown mnemonic: {text}")
            }
            Error::UnknownRegister { line, name } => {
                write!(f, "line {line}: unknown register: {name}")
            }
            Error::UnknownCondition { line, name } => {
                write!(f, "line {line}: unknown condition: {name}")
            }
            Error::MissingArgument(what) => write!(f, "missing argument: {what}"),
            Error::NoInput => write!(f, "no input file specified"),
        }
    }
}

impl std::error::Error for Error {}

impl From<io::Error> for Error {
    fn from(e: io::Error) -> Self {
        Error::Shared(selelf::error::Error::Io(e))
    }
}

impl From<selelf::error::Error> for Error {
    fn from(e: selelf::error::Error) -> Self {
        Error::Shared(e)
    }
}

pub type Result<T> = std::result::Result<T, Error>;
