// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selelf: shared ELF/SHARC library for the Selache toolchain
// Copyright (c) 2026 Jakob Kastelic

pub mod archive;
pub mod disasm;
pub mod elf;
pub mod elf_write;
pub mod encode;
pub mod error;
pub mod extnames;
pub mod glob;
pub mod symindex;
pub mod testutil;
pub mod version;
pub mod visa;
pub mod visa_encode;
