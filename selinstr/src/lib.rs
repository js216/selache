// SPDX-License-Identifier: GPL-3.0
// lib.rs --- selinstr: SHARC+ instruction encoding and decoding
// Copyright (c) 2026 Jakob Kastelic

pub mod disasm;
pub mod encode;
pub mod visa;
pub mod visa_encode;

/// Format an `Instruction` as the canonical disassembly text that the
/// selas assembler parses. Implemented as `encode_word` followed by
/// `decode_instruction` so callers automatically stay in sync with the
/// round-trip boundary used by selas's asm parser.
pub fn instruction_to_text(
    instr: &encode::Instruction,
) -> Result<String, encode::EncodeError> {
    let word = encode::encode_word(instr)?;
    Ok(disasm::decode_instruction(word))
}
