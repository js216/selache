// SPDX-License-Identifier: GPL-3.0
// error.rs --- Error types for selar
// Copyright (c) 2026 Jakob Kastelic

use std::fmt;
use std::io;

#[derive(Debug)]
pub enum Error {
    Shared(selelf::error::Error),
    MultipleActions,
    NoAction,
    MissingLibrary,
    MissingArgument(String),
    NotImplemented(String),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Shared(e) => write!(f, "{e}"),
            Error::MultipleActions => {
                write!(f, "only one action switch (-a/-c/-d/-e/-p/-r/-s) allowed")
            }
            Error::NoAction => write!(f, "no action switch specified"),
            Error::MissingLibrary => write!(f, "no library file specified"),
            Error::MissingArgument(what) => write!(f, "missing argument for {what}"),
            Error::NotImplemented(what) => write!(f, "{what}: not yet implemented"),
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
