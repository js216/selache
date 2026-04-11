// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selelf: ELF object file library for the Selache toolchain
// Copyright (c) 2026 Jakob Kastelic

pub mod archive;
pub mod elf;
pub mod elf_write;
pub mod error;
pub mod extnames;
pub mod glob;
pub mod symindex;
pub mod testutil;
pub mod version;
