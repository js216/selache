// SPDX-License-Identifier: GPL-3.0
// emit_asm.rs --- Lower each function to SHARC+ asm text for the selas assembler
// Copyright (c) 2026 Jakob Kastelic

//! Asm-text backend for selcc.
//!
//! Replaces the previous byte-level object emitter: rather than encoding
//! each machine instruction into the final ELF, the backend produces
//! SHARC+ assembly source that `selas` re-parses. Each function goes
//! through the same IR -> instruction-selection -> register-allocation
//! -> prologue/epilogue -> branch-resolution pipeline as before; the
//! final step uses `selinstr::instruction_to_text` and patches relocated
//! branches and address loads to reference symbolic names.

use std::collections::{HashMap, HashSet};
use std::fmt::Write;

use crate::ast::{BinaryOp, Expr, Function, TranslationUnit, UnaryOp};
use crate::error::{Error, Result};
use crate::ir::Label;
use crate::ir_opt;
use crate::isel;
use crate::lower;
use crate::mach::{MachInstr, Reloc, RelocKind};
use crate::regalloc;
use crate::target;

use selinstr::encode::{self, BranchTarget, Instruction, MemWidth};

/// A fully-emitted asm module: the text ready to be handed to selas.
pub struct AsmModule {
    pub text: String,
}

/// Emit a complete translation unit as SHARC+ assembly text.
pub fn emit_module(unit: &TranslationUnit) -> Result<AsmModule> {
    let mut out = String::new();

    // Build map of global variable names -> types for lowering.
    let global_types: HashMap<String, crate::types::Type> = unit
        .globals
        .iter()
        .map(|g| (g.name.clone(), g.ty.clone()))
        .collect();

    // Known function names drive implicit-declaration checking.
    let known_functions: HashSet<String> = unit
        .functions
        .iter()
        .map(|f| f.name.clone())
        .chain(
            unit.globals
                .iter()
                .filter(|g| g.is_extern)
                .map(|g| g.name.clone()),
        )
        .collect();

    // Compile each function, threading static locals produced by earlier
    // functions back in as visible globals for later ones.
    let mut all_static_locals: Vec<lower::StaticLocal> = Vec::new();
    let mut all_strings: Vec<String> = Vec::new();
    let mut all_wide_strings: Vec<Vec<u32>> = Vec::new();

    struct CompiledFunction {
        name: String,
        instrs: Vec<MachInstr>,
        label_insertions: HashMap<usize, String>,
    }
    let mut compiled: Vec<CompiledFunction> = Vec::new();

    for func in &unit.functions {
        let mut func_global_types = global_types.clone();
        for sl in &all_static_locals {
            func_global_types.insert(sl.symbol.clone(), sl.ty.clone());
        }
        let fr = emit_function_instrs(
            func,
            &func_global_types,
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &known_functions,
        )?;
        for s in fr.strings {
            if !all_strings.contains(&s) {
                all_strings.push(s);
            }
        }
        for ws in fr.wide_strings {
            if !all_wide_strings.contains(&ws) {
                all_wide_strings.push(ws);
            }
        }
        for sl in fr.static_locals {
            all_static_locals.push(sl);
        }
        compiled.push(CompiledFunction {
            name: func.name.clone(),
            instrs: fr.instrs,
            label_insertions: fr.label_insertions,
        });
    }

    // Collect all external symbols referenced by any function: CALL
    // targets, LoadImm of a global, StoreGlobal-generated loads. Anything
    // in `known_functions` plus the names of externally-declared globals
    // or functions goes through `.EXTERN`.
    let defined_syms: HashSet<String> = compiled
        .iter()
        .map(|c| c.name.clone())
        .chain(unit.globals.iter().filter(|g| !g.is_extern).map(|g| g.name.clone()))
        .chain(all_static_locals.iter().map(|sl| sl.symbol.clone()))
        .collect();

    let mut externs: Vec<String> = Vec::new();
    for cf in &compiled {
        for mi in &cf.instrs {
            if let Some(r) = &mi.reloc {
                // Local labels generated inside a function (e.g. the
                // end-of-loop labels synthesised for hardware DO loops)
                // are never real external symbols and must not appear
                // in a `.EXTERN` declaration.
                if r.symbol.starts_with(".L") {
                    continue;
                }
                let sym = with_abi_suffix(&r.symbol);
                if !defined_syms.contains(&r.symbol) && !externs.contains(&sym) {
                    externs.push(sym);
                }
            }
        }
    }

    // Header: file-level extern declarations.
    for ext in &externs {
        let _ = writeln!(out, ".EXTERN {ext};");
    }
    if !externs.is_empty() {
        out.push('\n');
    }

    // Code section: all functions.
    if !compiled.is_empty() {
        out.push_str(".SECTION/PM seg_pmco;\n");
        for cf in &compiled {
            let sym = with_abi_suffix(&cf.name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            let _ = writeln!(out, "{sym}:");
            for (body_idx, mi) in cf.instrs.iter().enumerate() {
                if let Some(lbl) = cf.label_insertions.get(&body_idx) {
                    let _ = writeln!(out, "{lbl}:");
                }
                let line = emit_instr_line(mi).map_err(|e| Error::NotImplemented(format!("encode: {e}")))?;
                let _ = writeln!(out, "    {line};");
            }
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // Data section: initialized globals and initialized static locals.
    let mut data_entries: Vec<DataEntry> = Vec::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if let Some(init) = &global.init {
            data_entries.push(DataEntry {
                name: global.name.clone(),
                values: build_init_words(init, global.ty.size_bytes())?,
            });
        }
    }
    for sl in &all_static_locals {
        if let Some(init) = &sl.init {
            data_entries.push(DataEntry {
                name: sl.symbol.clone(),
                values: build_init_words(init, sl.ty.size_bytes())?,
            });
        }
    }
    if !data_entries.is_empty() {
        out.push_str(".SECTION/DM seg_dmda;\n");
        for e in &data_entries {
            let sym = with_abi_suffix(&e.name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            emit_var_bytes(&mut out, &sym, &e.values);
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // BSS: uninitialized globals and static locals.
    let mut bss_entries: Vec<(String, u32)> = Vec::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if global.init.is_none() {
            bss_entries.push((global.name.clone(), global.ty.size_bytes()));
        }
    }
    for sl in &all_static_locals {
        if sl.init.is_none() {
            bss_entries.push((sl.symbol.clone(), sl.ty.size_bytes()));
        }
    }
    if !bss_entries.is_empty() {
        out.push_str(".SECTION/DM seg_dmda;\n");
        for (name, sz) in &bss_entries {
            let sym = with_abi_suffix(name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            let words = sz.div_ceil(4).max(1);
            let zero = vec![0u32; words as usize];
            emit_var_bytes(&mut out, &sym, &zero);
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // Rodata: string literals.
    if !all_strings.is_empty() || !all_wide_strings.is_empty() {
        out.push_str(".SECTION/DM seg_dmda;\n");
        for (i, s) in all_strings.iter().enumerate() {
            let name = format!(".str{i}");
            let mut words: Vec<u32> = s.as_bytes().iter().map(|&b| b as u32).collect();
            words.push(0);
            emit_var_bytes(&mut out, &name, &words);
        }
        for (i, ws) in all_wide_strings.iter().enumerate() {
            let name = format!(".wstr{i}");
            let mut words: Vec<u32> = ws.clone();
            words.push(0);
            emit_var_bytes(&mut out, &name, &words);
        }
        out.push_str(".ENDSEG;\n");
    }

    Ok(AsmModule { text: out })
}

/// Append the C-ABI trailing-dot suffix unless the caller already
/// provided it. The toolchain's cross-link ABI uses `<name>.` for every
/// function and data symbol; obj.rs used to add it; we preserve that
/// here so the asm text round-trips to the same binary shape.
fn with_abi_suffix(name: &str) -> String {
    if name.ends_with('.') {
        name.to_string()
    } else {
        format!("{name}.")
    }
}

/// Emit a `.VAR name = v0, v1, ...;` initializer line. Using `.VAR`
/// keeps each logical word at 4 bytes regardless of char-size, which
/// matches what the previous byte-level emitter produced.
fn emit_var_bytes(out: &mut String, sym: &str, values: &[u32]) {
    if values.is_empty() {
        let _ = writeln!(out, ".VAR {sym};");
        return;
    }
    if values.len() == 1 {
        let _ = writeln!(out, ".VAR {sym} = 0x{:08X};", values[0]);
        return;
    }
    // Multiple words: emit one .VAR per value with a sequential helper
    // name, then rely on the primary name to point at the first.
    // selas does not support `.VAR name[] = {...}`, so for multi-word
    // initialisers we just emit the first word under the real name and
    // follow with anonymous continuation words.
    let _ = writeln!(out, ".VAR {sym} = 0x{:08X};", values[0]);
    for v in &values[1..] {
        let _ = writeln!(out, ".VAR = 0x{v:08X};");
    }
}

struct DataEntry {
    name: String,
    values: Vec<u32>,
}

/// Evaluate a const-initializer expression to a flat list of 32-bit words.
fn build_init_words(init: &Expr, size_bytes: u32) -> Result<Vec<u32>> {
    match init {
        Expr::StringLit(s) => {
            let mut v: Vec<u32> = s.as_bytes().iter().map(|&b| b as u32).collect();
            v.push(0);
            Ok(v)
        }
        Expr::InitList(items) => {
            let mut v = Vec::with_capacity(items.len());
            for item in items {
                v.push(eval_const_expr(item)? as u32);
            }
            Ok(v)
        }
        other => {
            let words = size_bytes.div_ceil(4).max(1);
            let mut v = vec![0u32; words as usize];
            v[0] = eval_const_expr(other)? as u32;
            Ok(v)
        }
    }
}

/// Evaluate a constant expression at compile time (for initializers).
fn eval_const_expr(expr: &Expr) -> Result<i32> {
    match expr {
        Expr::IntLit(n, _) => Ok(*n as i32),
        Expr::FloatLit(f) => Ok((*f as f32).to_bits() as i32),
        Expr::CharLit(n) => Ok(*n as i32),
        Expr::Unary { op: UnaryOp::Neg, operand } => Ok(-eval_const_expr(operand)?),
        Expr::Binary { op: BinaryOp::Add, lhs, rhs } => {
            Ok(eval_const_expr(lhs)?.wrapping_add(eval_const_expr(rhs)?))
        }
        Expr::Binary { op: BinaryOp::Sub, lhs, rhs } => {
            Ok(eval_const_expr(lhs)?.wrapping_sub(eval_const_expr(rhs)?))
        }
        Expr::Binary { op: BinaryOp::Mul, lhs, rhs } => {
            Ok(eval_const_expr(lhs)?.wrapping_mul(eval_const_expr(rhs)?))
        }
        Expr::Binary { op: BinaryOp::Div, lhs, rhs } => {
            let r = eval_const_expr(rhs)?;
            if r == 0 { Ok(0) } else { Ok(eval_const_expr(lhs)? / r) }
        }
        Expr::Binary { op: BinaryOp::Mod, lhs, rhs } => {
            let r = eval_const_expr(rhs)?;
            if r == 0 { Ok(0) } else { Ok(eval_const_expr(lhs)? % r) }
        }
        Expr::Binary { op: BinaryOp::BitOr, lhs, rhs } => {
            Ok(eval_const_expr(lhs)? | eval_const_expr(rhs)?)
        }
        Expr::Binary { op: BinaryOp::BitAnd, lhs, rhs } => {
            Ok(eval_const_expr(lhs)? & eval_const_expr(rhs)?)
        }
        Expr::Binary { op: BinaryOp::Shl, lhs, rhs } => {
            Ok(eval_const_expr(lhs)? << eval_const_expr(rhs)?)
        }
        Expr::Binary { op: BinaryOp::Shr, lhs, rhs } => {
            Ok(eval_const_expr(lhs)? >> eval_const_expr(rhs)?)
        }
        Expr::Comma(_l, r) => eval_const_expr(r),
        Expr::DesignatedInit { value, .. } => eval_const_expr(value),
        Expr::ArrayDesignator { value, .. } => eval_const_expr(value),
        Expr::Cast(_, inner) => eval_const_expr(inner),
        Expr::Sizeof(arg) => {
            let size = match arg.as_ref() {
                crate::ast::SizeofArg::Type(ty) => ty.size_bytes(),
                crate::ast::SizeofArg::Expr(_) => 4,
            };
            Ok(size as i32)
        }
        Expr::AddrOf(_) | Expr::Ident(_) => Ok(0),
        Expr::InitList(items) => {
            if let Some(first) = items.first() {
                eval_const_expr(first)
            } else {
                Ok(0)
            }
        }
        _ => Err(Error::NotImplemented("non-constant initializer".into())),
    }
}

/// Convert a `MachInstr` to a single asm line.
///
/// For instructions that carry a relocation (CALL to an external
/// symbol, load of a global address), the disassembled text contains a
/// numeric placeholder which we rewrite to reference the symbol name.
fn emit_instr_line(mi: &MachInstr) -> std::result::Result<String, encode::EncodeError> {
    let base = selinstr::instruction_to_text(&mi.instr)?;
    let Some(reloc) = &mi.reloc else {
        return Ok(base);
    };
    // Local labels (synthesised internal references like the
    // `.L_doloop_end_N` tags this backend uses for hardware DO loops)
    // must NOT get the SHARC C-ABI trailing-dot suffix applied; the
    // suffix only decorates real C symbol names.
    let sym = if reloc.symbol.starts_with(".L") {
        reloc.symbol.clone()
    } else {
        with_abi_suffix(&reloc.symbol)
    };
    Ok(substitute_reloc_target(&base, &sym))
}

/// Patch the disassembled text to reference a symbolic target. Used when
/// the machine instruction carries a relocation so the emitted asm line
/// references the symbol name rather than the `0x000000` placeholder.
fn substitute_reloc_target(text: &str, sym: &str) -> String {
    // Case 1: `LCNTR = <count> , DO (PC,0x...)UNTIL LCE` — hardware DO
    // loop. Replace only the *inner* hex literal (the RELADDR
    // placeholder) with the symbol; the counter value before the comma
    // stays untouched. Must be checked before the `" = 0x"` rule,
    // because an LCNTR-initialised DO loop matches both shapes.
    if text.contains("DO (PC,0x") || text.contains("DO (PC, 0x") {
        if let Some(do_pos) = text.find("DO (PC") {
            let tail = &text[do_pos..];
            if let Some(open) = tail.find("0x") {
                let hex_start = do_pos + open;
                let after_hex = &text[hex_start..];
                let hex_end = after_hex
                    .char_indices()
                    .skip(2)
                    .find(|(_, c)| !c.is_ascii_hexdigit())
                    .map(|(i, _)| hex_start + i)
                    .unwrap_or(text.len());
                let before = &text[..hex_start];
                let after = &text[hex_end..];
                return format!("{before}{sym}{after}");
            }
        }
    }
    // Case 2: `<ureg> = 0x...` — LoadImm of a global address.
    if let Some(eq) = text.find(" = 0x") {
        let lhs = &text[..eq];
        return format!("{lhs} = {sym}");
    }
    // Case 3: `JUMP 0x...` / `CALL 0x...` / `IF cond JUMP 0x...`.
    // Strip the trailing hex literal and replace it with the symbol.
    if let Some(pos) = text.rfind("0x") {
        // Walk forward until the hex literal ends.
        let tail = &text[pos..];
        let hex_end = tail
            .char_indices()
            .skip(2)
            .find(|(_, c)| !c.is_ascii_hexdigit())
            .map(|(i, _)| i)
            .unwrap_or(tail.len());
        let before = &text[..pos];
        let after = &tail[hex_end..];
        return format!("{before}{sym}{after}");
    }
    // Fallback: unchanged. This should not occur for the relocations
    // selcc currently emits, but avoids silently breaking text if a new
    // relocation shape appears.
    text.to_string()
}

struct FnEmitResult {
    instrs: Vec<MachInstr>,
    strings: Vec<String>,
    wide_strings: Vec<Vec<u32>>,
    static_locals: Vec<lower::StaticLocal>,
    /// Function-absolute indices of machine instructions that must be
    /// preceded by a local label in the asm output. Currently used by
    /// hardware DO loops: the end-of-loop label is inserted before the
    /// last body instruction so that selas resolves the DO target
    /// symbolically at assembly time.
    label_insertions: HashMap<usize, String>,
}

/// Run the per-function pipeline and return the final machine-instruction
/// stream (prologue + body + epilogue, with branches resolved). The
/// caller is responsible for converting each instruction to text.
fn emit_function_instrs(
    func: &Function,
    global_types: &HashMap<String, crate::types::Type>,
    struct_defs: &[(String, Vec<(String, crate::types::Type)>)],
    enum_constants: &[(String, i64)],
    typedefs: &[(String, crate::types::Type)],
    known_functions: &HashSet<String>,
) -> Result<FnEmitResult> {
    let lower_result = lower::lower_function_with_known(
        func, global_types, struct_defs, enum_constants, typedefs, known_functions,
    )?;
    let strings = lower_result.strings;
    let wide_strings = lower_result.wide_strings;
    let static_locals = lower_result.static_locals;

    let ir = ir_opt::constant_fold(&lower_result.ops);
    let ir = ir_opt::dead_code_eliminate(&ir);
    let ir = ir_opt::detect_hardware_loops(&ir);

    let isel_result = isel::select(&ir);

    let num_params = func.params.len().min(target::ARG_REGS.len()) as u8;
    let (allocated, _spill_count) = regalloc::allocate(&isel_result.instrs, num_params);

    let used_callee_saved = callee_saved_used(&allocated);
    let num_saved = used_callee_saved.len() as i8;

    let local_slots_pre = count_local_slots(&allocated);
    let adjusted = adjust_frame_offsets(&allocated, num_saved, local_slots_pre);

    let old_to_new = build_index_map(&isel_result.instrs, &allocated);
    let mut label_map: HashMap<Label, usize> = HashMap::new();
    for &(label, old_idx) in &isel_result.label_positions {
        let new_idx = old_to_new.get(&old_idx).copied().unwrap_or(old_idx);
        label_map.insert(label, new_idx);
    }

    let optimized = eliminate_copies(&adjusted, &mut label_map);

    let body_depth = count_local_slots(&optimized);
    let frame_size = body_depth.max(used_callee_saved.len() as u32);
    let prologue = build_prologue(frame_size, &used_callee_saved);
    let epilogue = build_epilogue(frame_size, &used_callee_saved);

    let prologue_len = prologue.len();
    let (resolved, label_insertions) = resolve_branches(&optimized, &label_map, prologue_len);
    let resolved = expand_large_frame_offsets(&resolved);

    // isel's IrOp::Ret handler emits the 4-instruction SHARC+ C-ABI
    // leaf-return sequence as the last instructions of the body. The
    // epilogue (callee-saved restores + frame teardown) must run BEFORE
    // that sequence, otherwise the delayed indirect JUMP transfers
    // control first and the restores are dead code. Split the body at
    // the trailing return sequence and splice the epilogue between.
    let (body_head, body_tail) = split_trailing_return_sequence(resolved);

    let mut instrs = Vec::with_capacity(
        prologue.len() + body_head.len() + epilogue.len() + body_tail.len()
    );
    instrs.extend(prologue);
    instrs.extend(body_head);
    instrs.extend(epilogue);
    instrs.extend(body_tail);

    Ok(FnEmitResult { instrs, strings, wide_strings, static_locals, label_insertions })
}

/// Detach the 4-instruction SHARC+ C-ABI return sequence from the tail
/// of the body so the epilogue can be spliced in front of it. The
/// sequence is `I12 = DM(M7,I6)` + `JUMP (M14,I12) (DB)` + RFRAME + NOP,
/// matching exactly what isel's IrOp::Ret handler emits. If the pattern
/// is not at the tail (e.g. a function body that ends with something
/// else entirely), the whole body stays in the head slice.
fn split_trailing_return_sequence(
    mut body: Vec<MachInstr>,
) -> (Vec<MachInstr>, Vec<MachInstr>) {
    let n = body.len();
    if n < 4 {
        return (body, Vec::new());
    }
    let matches = matches!(
        body[n - 4].instr,
        Instruction::UregDagMove {
            pm: false,
            write: false,
            ureg: 0x1C,
            i_reg: 6,
            m_reg: 7,
            ..
        },
    ) && matches!(
        body[n - 3].instr,
        Instruction::IndirectBranch {
            call: false,
            pm_i: 4,
            pm_m: 6,
            delayed: true,
            ..
        },
    ) && matches!(body[n - 2].instr, Instruction::Rframe)
        && matches!(body[n - 1].instr, Instruction::Nop);
    if !matches {
        return (body, Vec::new());
    }
    let tail = body.split_off(n - 4);
    (body, tail)
}

// --------------------------------------------------------------------
// Helpers below are carried over verbatim from the byte-level backend.
// They run the machine-instruction pipeline up to but not including the
// final encode step.
// --------------------------------------------------------------------

fn callee_saved_used(instrs: &[MachInstr]) -> Vec<u8> {
    let mut used = Vec::new();
    for &reg in target::CALLEE_SAVED {
        if instrs.iter().any(|mi| instr_uses_reg(&mi.instr, reg)) {
            used.push(reg);
        }
    }
    used
}

fn instr_uses_reg(instr: &Instruction, reg: u8) -> bool {
    match *instr {
        Instruction::LoadImm { ureg, .. } => (ureg & 0xF) == reg && (ureg >> 4) == 0,
        Instruction::Compute { compute, .. } => compute_uses_reg(&compute, reg),
        Instruction::ComputeLoadStore { dreg, compute, .. } => {
            dreg == reg || compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::Return { compute, .. } => {
            compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::Modify { .. } => false,
        _ => false,
    }
}

fn compute_uses_reg(op: &selinstr::encode::ComputeOp, reg: u8) -> bool {
    use selinstr::encode::ComputeOp;
    match *op {
        ComputeOp::Alu(ref a) => alu_uses_reg(a, reg),
        ComputeOp::Mul(ref m) => mul_uses_reg(m, reg),
        ComputeOp::Shift(ref s) => shift_uses_reg(s, reg),
        ComputeOp::Falu(ref f) => falu_uses_reg(f, reg),
        ComputeOp::Multi(ref mf) => multi_uses_reg(mf, reg),
    }
}

fn alu_uses_reg(op: &selinstr::encode::AluOp, reg: u8) -> bool {
    use selinstr::encode::AluOp::*;
    match *op {
        Add { rn, rx, ry } | Sub { rn, rx, ry } | And { rn, rx, ry }
        | Or { rn, rx, ry } | Xor { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        Pass { rn, rx } | Neg { rn, rx } | Not { rn, rx }
        | Inc { rn, rx } | Dec { rn, rx } | Abs { rn, rx } => rn == reg || rx == reg,
        Comp { rx, ry } | CompU { rx, ry } => rx == reg || ry == reg,
        _ => false,
    }
}

fn mul_uses_reg(op: &selinstr::encode::MulOp, reg: u8) -> bool {
    use selinstr::encode::MulOp::*;
    match *op {
        MulSsf { rn, rx, ry } | MulSsi { rn, rx, ry } | FMul { rn, rx, ry } => {
            rn == reg || rx == reg || ry == reg
        }
        _ => false,
    }
}

fn shift_uses_reg(op: &selinstr::encode::ShiftOp, reg: u8) -> bool {
    use selinstr::encode::ShiftOp::*;
    match *op {
        Lshift { rn, rx, ry } | Ashift { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        _ => false,
    }
}

fn multi_uses_reg(op: &selinstr::encode::MultiOp, reg: u8) -> bool {
    use selinstr::encode::MultiOp::*;
    match *op {
        MulAlu { rm, ra, rxm, rym, rxa, rya, .. } => {
            rm == reg || ra == reg || rxm == reg || (rym + 4) == reg
                || (rxa + 8) == reg || (rya + 12) == reg
        }
        MulDualAddSub { rm, ra, rs, rxm, rym, rxa, rya, .. } => {
            rm == reg || ra == reg || rs == reg || rxm == reg || (rym + 4) == reg
                || (rxa + 8) == reg || (rya + 12) == reg
        }
    }
}

fn falu_uses_reg(op: &selinstr::encode::FaluOp, reg: u8) -> bool {
    use selinstr::encode::FaluOp::*;
    match *op {
        Add { rn, rx, ry } | Sub { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        Pass { rn, rx } | Neg { rn, rx } | Abs { rn, rx }
        | Float { rn, rx } | Fix { rn, rx } => rn == reg || rx == reg,
        Comp { rx, ry } => rx == reg || ry == reg,
        _ => false,
    }
}

/// Number of `DM(-X, I6)` slots the SHARC+ C-ABI leaves unusable at
/// the top of the callee's frame. `CJUMP (DB)` captures the caller's
/// I7 into the new I6 *before* its two delay-slot pushes run, so at
/// callee entry `I6 = caller_I7` and `I7 = I6 - 2`. The slots at
/// `DM(0, I6)` and `DM(-1, I6)` now hold the caller's delay-slot
/// pushes (one of them being the return PC that `I12 = DM(M7, I6)`
/// later reloads), and `DM(-2, I6)` lines up with the callee's entry
/// I7, which is *above* the region `I7 = MODIFY(I7, -N)` actually
/// reserves (`[I7-N, I6-3]`). The first selcc-owned slot lives at
/// `DM(-3, I6)`, so every frame-relative access this backend emits
/// needs its negative offset nudged by `FRAME_SKIP` before the
/// instruction is written out. `adjust_frame_offsets` folds this
/// shift into the same pass that already accounts for the
/// callee-saved save slots and regalloc spill slots, so
/// `build_prologue` just emits its raw `-(i+1)` offsets and lets
/// the adjust pass rewrite them.
const FRAME_SKIP: i32 = 2;

fn build_prologue(frame_size: u32, callee_saved: &[u8]) -> Vec<MachInstr> {
    debug_assert!(
        callee_saved.iter().all(|r| target::CALLER_SAVED.iter().all(|c| c != r)),
        "callee-saved register overlaps with caller-saved set"
    );
    if frame_size == 0 && callee_saved.is_empty() {
        return Vec::new();
    }
    let mut instrs = Vec::new();
    if frame_size > 0 {
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: -(frame_size as i32),
                width: MemWidth::Normal,
                bitrev: false,
            },
            reloc: None,
        });
    }
    for (i, &reg) in callee_saved.iter().enumerate() {
        let slot_offset = -(i as i8) - 1 - (FRAME_SKIP as i8);
        instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: selinstr::encode::MemAccess {
                    pm: false,
                    write: true,
                    i_reg: target::FRAME_PTR,
                },
                dreg: reg,
                offset: slot_offset,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });
    }
    instrs
}

fn build_epilogue(frame_size: u32, callee_saved: &[u8]) -> Vec<MachInstr> {
    if frame_size == 0 && callee_saved.is_empty() {
        return Vec::new();
    }
    let mut instrs = Vec::new();
    for (i, &reg) in callee_saved.iter().enumerate().rev() {
        let slot_offset = -(i as i8) - 1 - (FRAME_SKIP as i8);
        instrs.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute: None,
                access: selinstr::encode::MemAccess {
                    pm: false,
                    write: false,
                    i_reg: target::FRAME_PTR,
                },
                dreg: reg,
                offset: slot_offset,
                cond: target::COND_TRUE,
            },
            reloc: None,
        });
    }
    if frame_size > 0 {
        instrs.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: frame_size as i32,
                width: MemWidth::Normal,
                bitrev: false,
            },
            reloc: None,
        });
    }
    instrs
}

fn count_local_slots(instrs: &[MachInstr]) -> u32 {
    let mut deepest: i32 = 0;
    let mut i = 0;
    while i < instrs.len() {
        match instrs[i].instr {
            Instruction::ComputeLoadStore { access, offset, .. }
                if access.i_reg == target::FRAME_PTR && !access.pm =>
            {
                let off = offset as i32;
                if off < deepest {
                    deepest = off;
                }
            }
            Instruction::Modify { i_reg, value, .. }
                if i_reg == target::FRAME_PTR && value < deepest =>
            {
                deepest = value;
            }
            _ => {}
        }
        i += 1;
    }
    deepest.unsigned_abs()
}

fn adjust_frame_offsets(
    instrs: &[MachInstr],
    num_saved: i8,
    local_slots: u32,
) -> Vec<MachInstr> {
    if num_saved == 0 && local_slots == 0 {
        let has_positive_offsets = instrs.iter().any(|mi| matches!(
            mi.instr,
            Instruction::ComputeLoadStore { access, offset, .. }
                if access.i_reg == target::FRAME_PTR && !access.pm && offset >= 0
        ));
        if !has_positive_offsets {
            return instrs.to_vec();
        }
    }
    // Leave `FRAME_SKIP` slots below I6 untouched: those hold the
    // caller's CJUMP delay-slot pushes (return PC, R2 save) plus the
    // word at the callee's entry I7. All negative offsets land
    // below that region.
    let shift = num_saved as i32 + FRAME_SKIP;
    let spill_base = shift + local_slots as i32;
    let mut result = Vec::with_capacity(instrs.len());
    let mut i = 0;
    while i < instrs.len() {
        match instrs[i].instr {
            Instruction::ComputeLoadStore { compute, access, dreg, offset, cond }
                if access.i_reg == target::FRAME_PTR && !access.pm =>
            {
                let orig = offset as i32;
                let new_offset = if orig < 0 {
                    orig - shift
                } else {
                    -(spill_base + orig + 1)
                };
                emit_adjusted_access(
                    &mut result,
                    compute,
                    access,
                    dreg,
                    new_offset,
                    cond,
                    instrs[i].reloc.clone(),
                );
            }
            Instruction::Modify { i_reg, value, .. }
                if i_reg == target::FRAME_PTR && value != 0 =>
            {
                let new_value = if value < 0 { value - shift } else { value + shift };
                result.push(MachInstr {
                    instr: Instruction::Modify {
                        i_reg,
                        value: new_value,
                        width: MemWidth::Normal,
                        bitrev: false,
                    },
                    reloc: instrs[i].reloc.clone(),
                });
            }
            _ => {
                result.push(instrs[i].clone());
            }
        }
        i += 1;
    }
    result
}

fn emit_adjusted_access(
    out: &mut Vec<MachInstr>,
    compute: Option<selinstr::encode::ComputeOp>,
    access: selinstr::encode::MemAccess,
    dreg: u8,
    new_offset: i32,
    cond: u8,
    reloc: Option<Reloc>,
) {
    if (-32..=31).contains(&new_offset) {
        out.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset: new_offset as i8,
                cond,
            },
            reloc,
        });
    } else {
        out.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: new_offset,
                width: MemWidth::Normal,
                bitrev: false,
            },
            reloc: None,
        });
        out.push(MachInstr {
            instr: Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset: 0,
                cond,
            },
            reloc,
        });
        out.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: -new_offset,
                width: MemWidth::Normal,
                bitrev: false,
            },
            reloc: None,
        });
    }
}

fn expand_large_frame_offsets(instrs: &[MachInstr]) -> Vec<MachInstr> {
    let mut result = Vec::with_capacity(instrs.len());
    for mi in instrs {
        if let Instruction::ComputeLoadStore { compute, access, dreg, offset, cond } = mi.instr {
            let off = offset as i32;
            if access.i_reg == target::FRAME_PTR && !access.pm && !(-32..=31).contains(&off) {
                emit_adjusted_access(
                    &mut result,
                    compute,
                    access,
                    dreg,
                    off,
                    cond,
                    mi.reloc.clone(),
                );
                continue;
            }
        }
        result.push(mi.clone());
    }
    result
}

fn eliminate_copies(
    instrs: &[MachInstr],
    label_map: &mut HashMap<Label, usize>,
) -> Vec<MachInstr> {
    let mut use_count: HashMap<u8, u32> = HashMap::new();
    for mi in instrs {
        for reg in source_regs(&mi.instr) {
            *use_count.entry(reg).or_insert(0) += 1;
        }
    }

    let mut removed = Vec::new();
    let mut result = Vec::with_capacity(instrs.len());
    let mut skip_next_remap: Option<(u8, u8)> = None;
    let mut i = 0;

    while i < instrs.len() {
        if let Some((from, to)) = skip_next_remap.take() {
            let remapped = remap_sources(&instrs[i], from, to);
            result.push(remapped);
            i += 1;
            continue;
        }

        if let Some((dst, src)) = is_pass_copy(&instrs[i].instr) {
            if dst == src {
                removed.push(i);
                i += 1;
                continue;
            }

            let dst_count = use_count.get(&dst).copied().unwrap_or(0);
            if dst != src
                && dst_count == 1
                && i + 1 < instrs.len()
                && source_regs(&instrs[i + 1].instr).contains(&dst)
            {
                removed.push(i);
                skip_next_remap = Some((dst, src));
                i += 1;
                continue;
            }

            let src_count = use_count.get(&src).copied().unwrap_or(0);
            if dst != src && src_count == 1 && !result.is_empty() {
                if let Some(rewritten) = rewrite_dest(&result[result.len() - 1], src, dst) {
                    let last = result.len() - 1;
                    result[last] = rewritten;
                    removed.push(i);
                    i += 1;
                    continue;
                }
            }
        }

        result.push(instrs[i].clone());
        i += 1;
    }

    for pos in label_map.values_mut() {
        let shift = removed.iter().filter(|&&r| r < *pos).count();
        *pos -= shift;
    }

    let mut self_copy_indices = Vec::new();
    for (i, mi) in result.iter().enumerate() {
        if let Some((dst, src)) = is_pass_copy(&mi.instr) {
            if dst == src {
                self_copy_indices.push(i);
            }
        }
    }
    if !self_copy_indices.is_empty() {
        let mut filtered = Vec::with_capacity(result.len());
        for (i, mi) in result.into_iter().enumerate() {
            if !self_copy_indices.contains(&i) {
                filtered.push(mi);
            }
        }
        for pos in label_map.values_mut() {
            let shift = self_copy_indices.iter().filter(|&&r| r < *pos).count();
            *pos -= shift;
        }
        return filtered;
    }

    result
}

fn rewrite_dest(mi: &MachInstr, old_dst: u8, new_dst: u8) -> Option<MachInstr> {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    let new_instr = match mi.instr {
        Instruction::Compute { cond, compute } => {
            let new_compute = match compute {
                ComputeOp::Alu(alu) => {
                    let new_alu = match alu {
                        AluOp::Add { rn, rx, ry } if rn == old_dst => AluOp::Add { rn: new_dst, rx, ry },
                        AluOp::Sub { rn, rx, ry } if rn == old_dst => AluOp::Sub { rn: new_dst, rx, ry },
                        AluOp::And { rn, rx, ry } if rn == old_dst => AluOp::And { rn: new_dst, rx, ry },
                        AluOp::Or { rn, rx, ry } if rn == old_dst => AluOp::Or { rn: new_dst, rx, ry },
                        AluOp::Xor { rn, rx, ry } if rn == old_dst => AluOp::Xor { rn: new_dst, rx, ry },
                        AluOp::Pass { rn, rx } if rn == old_dst => AluOp::Pass { rn: new_dst, rx },
                        AluOp::Neg { rn, rx } if rn == old_dst => AluOp::Neg { rn: new_dst, rx },
                        AluOp::Not { rn, rx } if rn == old_dst => AluOp::Not { rn: new_dst, rx },
                        AluOp::Inc { rn, rx } if rn == old_dst => AluOp::Inc { rn: new_dst, rx },
                        AluOp::Dec { rn, rx } if rn == old_dst => AluOp::Dec { rn: new_dst, rx },
                        AluOp::Abs { rn, rx } if rn == old_dst => AluOp::Abs { rn: new_dst, rx },
                        _ => return None,
                    };
                    ComputeOp::Alu(new_alu)
                }
                ComputeOp::Mul(mul) => {
                    let new_mul = match mul {
                        MulOp::MulSsf { rn, rx, ry } if rn == old_dst => MulOp::MulSsf { rn: new_dst, rx, ry },
                        MulOp::MulSsi { rn, rx, ry } if rn == old_dst => MulOp::MulSsi { rn: new_dst, rx, ry },
                        MulOp::FMul { rn, rx, ry } if rn == old_dst => MulOp::FMul { rn: new_dst, rx, ry },
                        _ => return None,
                    };
                    ComputeOp::Mul(new_mul)
                }
                ComputeOp::Shift(shift) => {
                    let new_shift = match shift {
                        ShiftOp::Lshift { rn, rx, ry } if rn == old_dst => ShiftOp::Lshift { rn: new_dst, rx, ry },
                        ShiftOp::Ashift { rn, rx, ry } if rn == old_dst => ShiftOp::Ashift { rn: new_dst, rx, ry },
                        _ => return None,
                    };
                    ComputeOp::Shift(new_shift)
                }
                _ => return None,
            };
            Instruction::Compute { cond, compute: new_compute }
        }
        Instruction::LoadImm { ureg, value } if (ureg & 0xF) == old_dst && (ureg >> 4) == 0 => {
            Instruction::LoadImm { ureg: (ureg & 0xF0) | new_dst, value }
        }
        _ => return None,
    };
    Some(MachInstr { instr: new_instr, reloc: mi.reloc.clone() })
}

fn is_pass_copy(instr: &Instruction) -> Option<(u8, u8)> {
    match *instr {
        Instruction::Compute {
            compute: selinstr::encode::ComputeOp::Alu(selinstr::encode::AluOp::Pass { rn, rx }),
            ..
        } => Some((rn, rx)),
        _ => None,
    }
}

fn source_regs(instr: &Instruction) -> Vec<u8> {
    let mut regs = Vec::new();
    match *instr {
        Instruction::Compute { compute, .. } => compute_source_regs(&compute, &mut regs),
        Instruction::ComputeLoadStore { compute, access, dreg, .. } => {
            if let Some(c) = compute {
                compute_source_regs(&c, &mut regs);
            }
            if access.write {
                regs.push(dreg);
            }
        }
        Instruction::Return { compute: Some(c), .. } => {
            compute_source_regs(&c, &mut regs);
        }
        _ => {}
    }
    regs
}

fn compute_source_regs(op: &selinstr::encode::ComputeOp, regs: &mut Vec<u8>) {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    match *op {
        ComputeOp::Alu(ref a) => match *a {
            AluOp::Add { rx, ry, .. } | AluOp::Sub { rx, ry, .. }
            | AluOp::And { rx, ry, .. } | AluOp::Or { rx, ry, .. }
            | AluOp::Xor { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            AluOp::Pass { rx, .. } | AluOp::Neg { rx, .. } | AluOp::Not { rx, .. }
            | AluOp::Inc { rx, .. } | AluOp::Dec { rx, .. } | AluOp::Abs { rx, .. } => {
                regs.push(rx);
            }
            AluOp::Comp { rx, ry } | AluOp::CompU { rx, ry } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Mul(ref m) => match *m {
            MulOp::MulSsf { rx, ry, .. } | MulOp::MulSsi { rx, ry, .. }
            | MulOp::FMul { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Shift(ref s) => match *s {
            ShiftOp::Lshift { rx, ry, .. } | ShiftOp::Ashift { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Falu(_) => {}
        ComputeOp::Multi(ref mf) => {
            use selinstr::encode::MultiOp;
            match *mf {
                MultiOp::MulAlu { rxm, rym, rxa, rya, .. }
                | MultiOp::MulDualAddSub { rxm, rym, rxa, rya, .. } => {
                    regs.push(rxm);
                    regs.push(rym + 4);
                    regs.push(rxa + 8);
                    regs.push(rya + 12);
                }
            }
        }
    }
}

fn remap_sources(mi: &MachInstr, from: u8, to: u8) -> MachInstr {
    let new_instr = match mi.instr {
        Instruction::Compute { cond, compute } => Instruction::Compute {
            cond,
            compute: remap_compute_sources(&compute, from, to),
        },
        Instruction::ComputeLoadStore { compute, access, dreg, offset, cond } => {
            let new_compute = compute.map(|c| remap_compute_sources(&c, from, to));
            let new_dreg = if access.write && dreg == from { to } else { dreg };
            Instruction::ComputeLoadStore {
                compute: new_compute,
                access,
                dreg: new_dreg,
                offset,
                cond,
            }
        }
        Instruction::Return { interrupt, cond, delayed, lr, compute } => {
            let new_compute = compute.map(|c| remap_compute_sources(&c, from, to));
            Instruction::Return { interrupt, cond, delayed, lr, compute: new_compute }
        }
        other => other,
    };
    MachInstr { instr: new_instr, reloc: mi.reloc.clone() }
}

fn remap_compute_sources(
    op: &selinstr::encode::ComputeOp,
    from: u8,
    to: u8,
) -> selinstr::encode::ComputeOp {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    let r = |reg: u8| if reg == from { to } else { reg };
    match *op {
        ComputeOp::Alu(ref a) => ComputeOp::Alu(match *a {
            AluOp::Add { rn, rx, ry } => AluOp::Add { rn, rx: r(rx), ry: r(ry) },
            AluOp::Sub { rn, rx, ry } => AluOp::Sub { rn, rx: r(rx), ry: r(ry) },
            AluOp::And { rn, rx, ry } => AluOp::And { rn, rx: r(rx), ry: r(ry) },
            AluOp::Or { rn, rx, ry } => AluOp::Or { rn, rx: r(rx), ry: r(ry) },
            AluOp::Xor { rn, rx, ry } => AluOp::Xor { rn, rx: r(rx), ry: r(ry) },
            AluOp::Pass { rn, rx } => AluOp::Pass { rn, rx: r(rx) },
            AluOp::Neg { rn, rx } => AluOp::Neg { rn, rx: r(rx) },
            AluOp::Not { rn, rx } => AluOp::Not { rn, rx: r(rx) },
            AluOp::Inc { rn, rx } => AluOp::Inc { rn, rx: r(rx) },
            AluOp::Dec { rn, rx } => AluOp::Dec { rn, rx: r(rx) },
            AluOp::Abs { rn, rx } => AluOp::Abs { rn, rx: r(rx) },
            AluOp::Comp { rx, ry } => AluOp::Comp { rx: r(rx), ry: r(ry) },
            AluOp::CompU { rx, ry } => AluOp::CompU { rx: r(rx), ry: r(ry) },
            other => other,
        }),
        ComputeOp::Mul(ref m) => ComputeOp::Mul(match *m {
            MulOp::MulSsf { rn, rx, ry } => MulOp::MulSsf { rn, rx: r(rx), ry: r(ry) },
            MulOp::MulSsi { rn, rx, ry } => MulOp::MulSsi { rn, rx: r(rx), ry: r(ry) },
            MulOp::FMul { rn, rx, ry } => MulOp::FMul { rn, rx: r(rx), ry: r(ry) },
            other => other,
        }),
        ComputeOp::Shift(ref s) => ComputeOp::Shift(match *s {
            ShiftOp::Lshift { rn, rx, ry } => ShiftOp::Lshift { rn, rx: r(rx), ry: r(ry) },
            ShiftOp::Ashift { rn, rx, ry } => ShiftOp::Ashift { rn, rx: r(rx), ry: r(ry) },
            other => other,
        }),
        ComputeOp::Falu(_) => *op,
        ComputeOp::Multi(_) => *op,
    }
}

fn build_index_map(
    old: &[MachInstr],
    new: &[MachInstr],
) -> HashMap<usize, usize> {
    let mut map = HashMap::new();
    let mut new_idx = 0;
    for (old_idx, _) in old.iter().enumerate() {
        if new_idx < new.len() {
            map.insert(old_idx, new_idx);
            new_idx += 1;
        }
    }
    map
}

fn resolve_branches(
    instrs: &[MachInstr],
    label_map: &HashMap<Label, usize>,
    prologue_len: usize,
) -> (Vec<MachInstr>, HashMap<usize, String>) {
    let mut out = Vec::with_capacity(instrs.len());
    // Map from function-absolute instruction index (prologue + body + epilogue)
    // to a locally-generated label name. The caller inserts each label in the
    // asm text immediately before the instruction at that index, so selas sees
    // a `DO .L_doloop_end_N UNTIL LCE` form with a symbolic target instead of
    // a numeric offset. selas then resolves the label at assembly time, in
    // whatever unit (words or parcels) the output mode needs, and suppresses
    // VISA compression inside the loop body.
    let mut label_insertions: HashMap<usize, String> = HashMap::new();
    for mi in instrs.iter() {
        let (new_instr, new_reloc) = match mi.instr {
            Instruction::Branch {
                call,
                cond,
                delayed: false,
                target: BranchTarget::PcRelative(label_as_i32),
            } if mi.reloc.is_none() => {
                // Route same-function branches through a synthetic local
                // label and let selas compute RELADDR at assembly time in
                // the correct unit for the target mode (parcels in VISA
                // PM, word offsets otherwise). A precomputed numeric
                // `JUMP (PC, N)` where `N` was measured in instructions
                // goes into the RELADDR field as-is, which the SHARC+
                // hardware then interprets as parcels in VISA mode and
                // dispatches to the wrong instruction, so any non-leaf
                // function with a branch crashes the core.
                let label = label_as_i32 as Label;
                let target_body_idx = label_map.get(&label).copied().unwrap_or(0);
                let target_pc = target_body_idx + prologue_len;
                let name = format!(".L_branch_{label}");
                label_insertions
                    .entry(target_pc)
                    .or_insert_with(|| name.clone());
                (
                    Instruction::Branch {
                        call,
                        cond,
                        delayed: false,
                        target: BranchTarget::Absolute(0),
                    },
                    Some(Reloc { symbol: name, kind: RelocKind::Addr24 }),
                )
            }
            Instruction::DoLoop { counter, end_pc } => {
                // Emit a synthetic local label at the last-body-instruction
                // position and reference it from the DO instruction, so that
                // selas computes RELADDR in the right unit for the target
                // mode and treats everything up to that label as a
                // compression-forbidden hardware-loop body.
                let label = end_pc as Label;
                let target_body_idx = label_map.get(&label).copied().unwrap_or(0);
                let target_pc = target_body_idx + prologue_len;
                let last_body_pc = if target_pc > 0 { target_pc - 1 } else { 0 };
                let name = format!(".L_doloop_end_{label}");
                label_insertions
                    .entry(last_body_pc)
                    .or_insert_with(|| name.clone());
                (
                    Instruction::DoLoop { counter, end_pc: 0 },
                    Some(Reloc { symbol: name, kind: RelocKind::Addr24 }),
                )
            }
            other => (other, mi.reloc.clone()),
        };
        out.push(MachInstr { instr: new_instr, reloc: new_reloc });
    }
    (out, label_insertions)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::parse;

    /// Compile C source to an asm module.
    fn compile(src: &str) -> AsmModule {
        let unit = parse::parse(src).unwrap();
        emit_module(&unit).unwrap()
    }

    /// Compile C source, then assemble the resulting asm text through
    /// selas, then disassemble the code section back to readable lines.
    /// This is the end-to-end round trip the user demands: every test
    /// that used to inspect selcc's byte output now runs through the
    /// full selas path, proving that the text is valid assembly.
    fn round_trip_disasm(src: &str) -> Vec<String> {
        let m = compile(src);
        let doj = selas::assemble_text(&m.text, None, &[], &[], false)
            .unwrap_or_else(|e| panic!("selas rejected selcc asm: {e}\nasm:\n{}", m.text));
        let hdr = selelf::elf::parse_header(&doj).unwrap();
        let code = code_section_bytes(&doj, &hdr, "seg_pmco").unwrap_or_default();
        selinstr::disasm::disassemble(&code, 0, false)
            .into_iter()
            .map(|l| l.text)
            .collect()
    }

    /// Extract the bytes of the named progbits section from a .doj image.
    fn code_section_bytes(
        data: &[u8],
        hdr: &selelf::elf::Elf32Header,
        target: &str,
    ) -> Option<Vec<u8>> {
        let shoff = hdr.e_shoff as usize;
        let shentsize = hdr.e_shentsize as usize;
        let shnum = hdr.e_shnum as usize;
        let strtab_off = shoff + hdr.e_shstrndx as usize * shentsize;
        let strtab_shdr =
            selelf::elf::parse_section_header(&data[strtab_off..], hdr.ei_data);
        let strtab_start = strtab_shdr.sh_offset as usize;
        let strtab_end = strtab_start + strtab_shdr.sh_size as usize;
        let strtab = &data[strtab_start..strtab_end];
        for i in 0..shnum {
            let off = shoff + i * shentsize;
            let shdr = selelf::elf::parse_section_header(&data[off..], hdr.ei_data);
            let name = selelf::elf::read_string_at(strtab, shdr.sh_name);
            if name == target {
                let start = shdr.sh_offset as usize;
                let end = start + shdr.sh_size as usize;
                return Some(data[start..end].to_vec());
            }
        }
        None
    }

    // ----------------------------------------------------------------
    // Static checks on the emitted asm text shape.
    // ----------------------------------------------------------------

    #[test]
    fn has_global_and_label() {
        let m = compile("int main() { return 42; }");
        assert!(m.text.contains(".GLOBAL main.;"));
        assert!(m.text.contains("main.:"));
    }

    #[test]
    fn extern_call_is_symbolic_and_declared() {
        let m = compile("int ext(int); int f() { return ext(1); }");
        assert!(
            m.text.contains("CALL ext."),
            "expected CALL ext., got:\n{}",
            m.text
        );
        assert!(m.text.contains(".EXTERN ext.;"));
    }

    #[test]
    fn global_address_load_uses_symbol_text() {
        let m = compile("int counter;\nint get() { return counter; }");
        assert!(m.text.contains("= counter."), "got:\n{}", m.text);
    }

    #[test]
    fn data_section_has_var() {
        let m = compile("int x = 10;\nint f() { return x; }");
        assert!(m.text.contains(".SECTION/DM seg_dmda;"));
        assert!(m.text.contains(".VAR x. = 0x0000000A;"));
    }

    // ----------------------------------------------------------------
    // Full round-trip tests: compile -> asm text -> selas -> bytes ->
    // disasm. These replace the byte-level tests that lived in emit.rs.
    // ----------------------------------------------------------------

    #[test]
    fn rt_return_42() {
        let text = round_trip_disasm("int main() { return 42; }");
        assert!(text.iter().any(|t| t.contains("0x2A")), "got: {text:?}");
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_add_params() {
        let text = round_trip_disasm("int f(int a, int b) { return a + b; }");
        let has_add = text.iter().any(|t| t.contains('R') && t.contains('+'));
        assert!(has_add, "got: {text:?}");
    }

    #[test]
    fn rt_if_else_has_branch() {
        let text = round_trip_disasm(
            "int f(int x) { if (x) { return 1; } else { return 0; } }",
        );
        let has_branch = text.iter().any(|t| t.contains("JUMP") || t.contains("IF"));
        assert!(has_branch, "got: {text:?}");
    }

    #[test]
    fn rt_sizeof_int() {
        let text = round_trip_disasm("int f() { return sizeof(int); }");
        assert!(text.iter().any(|t| t.contains("0x4")), "got: {text:?}");
    }

    #[test]
    fn rt_enum_value() {
        let text = round_trip_disasm(
            "enum color { RED, GREEN = 5, BLUE };\nint f() { return GREEN; }",
        );
        assert!(text.iter().any(|t| t.contains("0x5")), "got: {text:?}");
    }

    #[test]
    fn rt_constant_folding() {
        let text = round_trip_disasm("int f() { return 2 + 3; }");
        assert!(text.iter().any(|t| t.contains("0x5")), "got: {text:?}");
    }

    #[test]
    fn rt_constant_fold_mul() {
        let text = round_trip_disasm("int f() { return 6 * 7; }");
        assert!(text.iter().any(|t| t.contains("0x2A")), "got: {text:?}");
    }

    #[test]
    fn rt_float_literal_bits() {
        let text = round_trip_disasm("float f() { return 2.75f; }");
        let hex = format!("0x{:08X}", 2.75f32.to_bits());
        assert!(
            text.iter().any(|t| t.contains(&hex)),
            "expected {hex}, got: {text:?}"
        );
    }

    #[test]
    fn rt_float_add() {
        let text = round_trip_disasm(
            "float f(float a, float b) { return a + b; }",
        );
        let has_fadd = text.iter().any(|t| t.contains('F') && t.contains('+'));
        assert!(has_fadd, "got: {text:?}");
    }

    #[test]
    fn rt_float_mul() {
        let text = round_trip_disasm(
            "float f(float a, float b) { return a * b; }",
        );
        let has_fmul = text.iter().any(|t| t.contains('F') && t.contains('*'));
        assert!(has_fmul, "got: {text:?}");
    }

    #[test]
    fn rt_hardware_loop() {
        let text = round_trip_disasm(
            "void f() { int i; for (i = 0; i < 10; i++) { } }",
        );
        let has_hw = text.iter().any(|t| t.contains("LCNTR") || t.contains("DO"));
        assert!(has_hw, "got: {text:?}");
    }

    /// The Type 12 RELADDR field is PC-relative to the DO instruction,
    /// per the SHARC ISR (Program Flow Control, Type 12 opcode). For a
    /// function whose body has `B` instructions after the DO, the field
    /// must equal `B` so that hardware computes
    /// `end_address = DO_pc + B = last_body_address`. The old code
    /// stored the function-relative absolute position of the last body
    /// instruction, which was correct only when the DO happened to sit
    /// at function-relative PC 0 — never, once a prologue is present —
    /// and collided across multiple hardware-loop-bearing functions in
    /// the same section. This test pins the correct value by disassembling
    /// the two-function image and asserting the relative form.
    #[test]
    fn rt_hardware_loop_pc_relative_multi_function() {
        let src = r#"
            int sum_const(void) {
                int s = 0;
                for (int i = 0; i < 10; i++) s += i;
                return s;
            }
            int sum2_const(void) {
                int s = 0;
                for (int i = 0; i < 20; i++) s += i * 2;
                return s;
            }
        "#;
        let text = round_trip_disasm(src);
        let do_lines: Vec<(usize, &String)> = text
            .iter()
            .enumerate()
            .filter(|(_, t)| t.contains("LCNTR") && t.contains("DO"))
            .collect();
        assert_eq!(do_lines.len(), 2, "expected two DO lines, got: {text:?}");
        // For each DO line, extract the RELADDR from "(PC,0xN)" and check
        // that `DO_pc + N` points to a real instruction in the text (not
        // past the end of the function), and specifically to the line
        // that writes back the accumulator (the final body instruction).
        for (do_idx, line) in &do_lines {
            let open = line.find("(PC,0x").expect("missing (PC,0x in DO line");
            let close = line[open..].find(')').unwrap() + open;
            let hex = &line[open + 6..close];
            let offset = u32::from_str_radix(hex, 16).unwrap() as usize;
            let end_idx = do_idx + offset;
            assert!(
                end_idx < text.len(),
                "DO at {do_idx} with offset 0x{offset:x} points past end ({})",
                text.len()
            );
            let end_line = &text[end_idx];
            // The end line is the final body instruction, which for
            // this source shape is the accumulator spill-store. The
            // exact stack-slot offset depends on how regalloc lays
            // out the locals, so only check the instruction shape
            // (a frame-relative DM write), not a specific offset.
            assert!(
                end_line.contains("DM (-0x") && end_line.contains(",I6)="),
                "DO at {do_idx}: end at {end_idx} is {end_line:?}, expected a frame-relative store"
            );
        }
    }

    #[test]
    fn rt_cast_int_to_float() {
        let text = round_trip_disasm("float f(int x) { return (float)x; }");
        assert!(text.iter().any(|t| t.contains("FLOAT")), "got: {text:?}");
    }

    #[test]
    fn rt_inline_div_uses_recips() {
        let text = round_trip_disasm("int f(int a, int b) { return a / b; }");
        assert!(text.iter().any(|t| t.contains("RECIPS")), "got: {text:?}");
        assert!(text.iter().any(|t| t.contains("TRUNC")), "got: {text:?}");
    }

    #[test]
    fn rt_large_frame_compiles() {
        // Many locals force frame-offset expansion via Modify sequences.
        let src = r#"
            int f() {
                int a0=0; int a1=1; int a2=2; int a3=3; int a4=4;
                int a5=5; int a6=6; int a7=7; int a8=8; int a9=9;
                int b0=10; int b1=11; int b2=12; int b3=13; int b4=14;
                int b5=15; int b6=16; int b7=17; int b8=18; int b9=19;
                int c0=20; int c1=21; int c2=22; int c3=23; int c4=24;
                int c5=25; int c6=26; int c7=27; int c8=28; int c9=29;
                int d0=30; int d1=31; int d2=32; int d3=33; int d4=34;
                return a0 + b0 + c0 + d0 + d4;
            }
        "#;
        let text = round_trip_disasm(src);
        assert!(!text.is_empty());
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_many_params() {
        let src = "int f(int a, int b, int c, int d, int e, int f_) \
                   { return a + b + c + d + e + f_; }";
        let text = round_trip_disasm(src);
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_stack_frame_has_modify() {
        let text = round_trip_disasm(
            "int f() { int a = 1; int b = 2; return a + b; }",
        );
        assert!(
            text.iter().any(|t| t.contains("MODIFY") && t.contains("I7")),
            "expected MODIFY(I7) in prologue, got: {text:?}"
        );
    }

    #[test]
    fn rt_callee_saved_save_restore() {
        // High register pressure forces at least one R8+ callee-saved
        // register to be saved to the stack.
        let src = r#"
            int f(int a, int b, int c, int d) {
                int x = a + b; int y = c + d; int z = x + y;
                int w = a + c; int v = b + d; int u = z + w;
                int t = u + v; int s = t + x; int q = s + y;
                return q + z;
            }
        "#;
        let text = round_trip_disasm(src);
        let callee_saved = ["R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15"];
        let has_save = text.iter().any(|t| {
            t.contains("DM") && t.contains("I6")
                && callee_saved.iter().any(|r| {
                    t.contains(&format!("= {r}")) || t.contains(&format!("={r}"))
                })
        });
        assert!(has_save, "expected callee-saved save, got: {text:?}");
    }

    #[test]
    fn rt_self_copy_eliminated() {
        let text = round_trip_disasm("int f(int a) { return a; }");
        // No instruction should be `Rn = PASS Rn`.
        for t in &text {
            if t.contains("PASS") {
                let parts: Vec<&str> = t.split_whitespace().collect();
                if parts.len() >= 4 {
                    let dst = parts[0];
                    let src = parts[parts.len() - 1].trim_end_matches(';');
                    assert_ne!(dst, src, "self-copy found: {t}");
                }
            }
        }
    }

    #[test]
    fn rt_void_return_has_abi_return() {
        let text = round_trip_disasm("void f() { return; }");
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_ternary_compiles() {
        let text = round_trip_disasm("int f(int x) { return x > 0 ? x : 0; }");
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_compound_assign() {
        let text = round_trip_disasm("int f() { int x = 10; x += 5; return x; }");
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_array_compiles() {
        let text = round_trip_disasm(
            "int f() { int arr[3] = {10, 20, 30}; return arr[1]; }",
        );
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_multidim_array() {
        let text = round_trip_disasm(
            "int f() { int m[2][3]; m[0][1] = 5; return m[0][1]; }",
        );
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_static_local_emits_data() {
        // A static local becomes a global-like data symbol in seg_dmda.
        let m = compile("int counter() { static int n = 0; n++; return n; }");
        assert!(
            m.text.contains(".SECTION/DM seg_dmda;"),
            "expected data section, got:\n{}",
            m.text
        );
        // Still round-trips.
        let _ = selas::assemble_text(&m.text, None, &[], &[], false).unwrap();
    }

    #[test]
    fn rt_string_global_in_data() {
        let m = compile(r#"const char *msg = "hello"; int f() { return 0; }"#);
        // `hello` characters must show up as bytes in a .VAR sequence.
        let has_hex_for_h = m.text.contains("0x00000068"); // 'h'
        assert!(
            has_hex_for_h,
            "expected hello bytes in asm, got:\n{}",
            m.text
        );
        let _ = selas::assemble_text(&m.text, None, &[], &[], false).unwrap();
    }

    #[test]
    fn rt_comma_expression() {
        let text = round_trip_disasm("int f() { return (1, 2, 42); }");
        assert!(text.iter().any(|t| t.contains("0x2A")), "got: {text:?}");
    }

    #[test]
    fn rt_extern_call_preserves_symbol() {
        // After the round trip the .doj must contain a relocation against
        // the external symbol, not a hard-coded zero address.
        let m = compile("int ext(int); int f() { return ext(2) + 1; }");
        let doj = selas::assemble_text(&m.text, None, &[], &[], false).unwrap();
        let syms = selelf::elf::extract_global_symbols(&doj).unwrap();
        // `ext.` should appear as an undefined symbol in the object.
        assert!(
            syms.iter().any(|s| s == "ext.") || has_undefined_symbol(&doj, "ext."),
            "expected ext. undefined symbol, got: {syms:?}"
        );
    }

    fn has_undefined_symbol(data: &[u8], name: &str) -> bool {
        // The extractor only lists global defined symbols; walk the
        // symbol table directly to find undefined entries too.
        let hdr = match selelf::elf::parse_header(data) {
            Ok(h) => h,
            Err(_) => return false,
        };
        let shoff = hdr.e_shoff as usize;
        let shentsize = hdr.e_shentsize as usize;
        let shnum = hdr.e_shnum as usize;
        for i in 0..shnum {
            let off = shoff + i * shentsize;
            let shdr = selelf::elf::parse_section_header(&data[off..], hdr.ei_data);
            if shdr.sh_type == selelf::elf::SHT_SYMTAB {
                let sym_start = shdr.sh_offset as usize;
                let sym_end = sym_start + shdr.sh_size as usize;
                let strtab_shdr_off = shoff + (shdr.sh_link as usize) * shentsize;
                let strtab_shdr =
                    selelf::elf::parse_section_header(&data[strtab_shdr_off..], hdr.ei_data);
                let strtab_start = strtab_shdr.sh_offset as usize;
                let strtab_end = strtab_start + strtab_shdr.sh_size as usize;
                let strtab = &data[strtab_start..strtab_end];
                let mut p = sym_start;
                while p + 16 <= sym_end {
                    let name_idx = u32::from_le_bytes(
                        data[p..p + 4].try_into().unwrap(),
                    );
                    let sym_name = selelf::elf::read_string_at(strtab, name_idx);
                    if sym_name == name {
                        return true;
                    }
                    p += 16;
                }
            }
        }
        false
    }
}
