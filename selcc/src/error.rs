// SPDX-License-Identifier: GPL-3.0
// error.rs --- Compiler error types
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Shared(selelf::error::Error),
    MissingInput,
    MissingArgument(String),
    NotImplemented(String),
    Lex { line: u32, col: u32, msg: String },
    Parse { line: u32, col: u32, msg: String },
    Preprocess { file: String, line: u32, msg: String },
    Compile { msg: String },
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Shared(e) => write!(f, "{e}"),
            Error::MissingInput => write!(f, "no input files"),
            Error::MissingArgument(what) => write!(f, "missing argument for {what}"),
            Error::NotImplemented(what) => write!(f, "{what}: not yet implemented"),
            Error::Lex { line, col, msg } => write!(f, "{line}:{col}: {msg}"),
            Error::Parse { line, col, msg } => write!(f, "{line}:{col}: {msg}"),
            Error::Preprocess { file, line, msg } => {
                write!(f, "{file}:{line}: {msg}")
            }
            Error::Compile { msg } => write!(f, "error: {msg}"),
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
