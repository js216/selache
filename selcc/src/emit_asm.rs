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
///
/// String literals and narrow-element data always land one byte per
/// 32-bit word so the same whole-word `DM` load sequence the back end
/// emits for stack-allocated `char[]` locals also works for pointer
/// dereferences into rodata; the historical `char_size` knob that used
/// to pack four bytes per word is kept in the signature for caller
/// compatibility but no longer influences layout.
/// Ctx view of a translation unit used to resolve struct tags and
/// typedefs during size queries on global/static-local types.
struct UnitTypeCtx<'a> {
    struct_defs: &'a [(String, Vec<(String, crate::types::Type)>)],
    typedefs: &'a [(String, crate::types::Type)],
}

impl<'a> crate::types::TypeCtx for UnitTypeCtx<'a> {
    fn resolve_tag(&self, name: &str) -> Option<&[(String, crate::types::Type)]> {
        for (def_name, def_fields) in self.struct_defs {
            if def_name == name && !def_fields.is_empty() {
                return Some(def_fields.as_slice());
            }
        }
        None
    }
    fn resolve_typedef(&self, name: &str) -> Option<&crate::types::Type> {
        for (td_name, td_ty) in self.typedefs {
            if td_name == name {
                return Some(td_ty);
            }
        }
        None
    }
}

pub fn emit_module(unit: &TranslationUnit, _char_size: u8) -> Result<AsmModule> {
    let mut out = String::new();
    let unit_tctx = UnitTypeCtx {
        struct_defs: &unit.struct_defs,
        typedefs: &unit.typedefs,
    };

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

    // Map each callee's return type so per-call lowering can route
    // struct-by-value returns through the R0:R1 / hidden-pointer ABI
    // instead of truncating them to the single R0 scalar path.
    let function_return_types: HashMap<String, crate::types::Type> = unit
        .functions
        .iter()
        .map(|f| (f.name.clone(), f.return_type.clone()))
        .collect();

    // Compile each function, threading static locals produced by earlier
    // functions back in as visible globals for later ones.
    let mut all_static_locals: Vec<lower::StaticLocal> = Vec::new();
    let mut all_strings: Vec<String> = Vec::new();
    let mut all_wide_strings: Vec<Vec<u32>> = Vec::new();

    struct CompiledFunction {
        name: String,
        instrs: Vec<MachInstr>,
        // One position may carry multiple labels — e.g. when the
        // end-of-if label and the start-of-next-loop label land on
        // the same instruction. Using a single `String` here silently
        // dropped all but one, leaving branches to the dropped label
        // referencing an undefined symbol.
        label_insertions: HashMap<usize, Vec<String>>,
        is_static: bool,
    }
    let mut compiled: Vec<CompiledFunction> = Vec::new();
    let mut skipped_functions: Vec<String> = Vec::new();

    let unit_ctx = UnitCtx {
        struct_defs: &unit.struct_defs,
        enum_constants: &unit.enum_constants,
        typedefs: &unit.typedefs,
        known_functions: &known_functions,
        variadic_callees: &unit.variadic_functions,
        variadic_named_counts: &unit.variadic_named_counts,
        complex_arg_callees: &unit.complex_arg_callees,
        function_return_types: &function_return_types,
    };
    for func in &unit.functions {
        let mut func_global_types = global_types.clone();
        for sl in &all_static_locals {
            func_global_types.insert(sl.symbol.clone(), sl.ty.clone());
        }
        let fr = match emit_function_instrs(func, &func_global_types, &unit_ctx) {
            Ok(fr) => fr,
            Err(e) => {
                eprintln!("selcc: {}: {e}", func.name);
                skipped_functions.push(func.name.clone());
                continue;
            }
        };
        // Each function numbers its string literals from 0 via
        // `ctx.strings`, but the emitted data section uses a single
        // module-scope `.strN` table deduplicated across functions.
        // Build a local-index → global-index remap and rewrite the
        // reloc symbol on every `.strN` / `.wstrN` LoadImm so later
        // functions do not silently alias an earlier function's
        // `.str0.` (and walk the wrong string payload).
        let mut str_remap: Vec<usize> = Vec::with_capacity(fr.strings.len());
        for s in fr.strings {
            let idx = all_strings.iter().position(|e| e == &s).unwrap_or_else(|| {
                all_strings.push(s);
                all_strings.len() - 1
            });
            str_remap.push(idx);
        }
        let mut wstr_remap: Vec<usize> = Vec::with_capacity(fr.wide_strings.len());
        for ws in fr.wide_strings {
            let idx = all_wide_strings.iter().position(|e| e == &ws).unwrap_or_else(|| {
                all_wide_strings.push(ws);
                all_wide_strings.len() - 1
            });
            wstr_remap.push(idx);
        }
        let mut instrs = fr.instrs;
        for mi in instrs.iter_mut() {
            let Some(r) = mi.reloc.as_mut() else { continue; };
            if let Some(rest) = r.symbol.strip_prefix(".str") {
                if let Ok(local) = rest.parse::<usize>() {
                    if let Some(&g) = str_remap.get(local) {
                        r.symbol = format!(".str{g}");
                    }
                }
            } else if let Some(rest) = r.symbol.strip_prefix(".wstr") {
                if let Ok(local) = rest.parse::<usize>() {
                    if let Some(&g) = wstr_remap.get(local) {
                        r.symbol = format!(".wstr{g}");
                    }
                }
            }
        }
        for sl in fr.static_locals {
            all_static_locals.push(sl);
        }
        compiled.push(CompiledFunction {
            name: func.name.clone(),
            instrs,
            label_insertions: fr.label_insertions,
            is_static: func.is_static,
        });
    }

    // Dead-code elimination for unused static functions.
    //
    // C11 6.2.2p3: a `static` function has internal linkage and is
    // invisible outside its translation unit, so if nothing in this TU
    // references it the function is unreachable and need not be
    // emitted. selcc previously did
    // not, which caused headers like csmith's safe_math.h — full of
    // unused `static` wrappers around `fabs`/`fabsf` — to drag
    // unresolved libm symbols into every object that `#include`s
    // them.
    //
    // Reachability starts from every non-static (externally linked)
    // function and closes over call / address-taken relocs. Any
    // `static` function not reached is dropped from the emitted
    // module; its referenced externs are not emitted either.
    let fn_names: HashSet<String> =
        compiled.iter().map(|c| c.name.clone()).collect();
    let mut reachable: HashSet<String> = compiled
        .iter()
        .filter(|c| !c.is_static)
        .map(|c| c.name.clone())
        .collect();
    let by_name: HashMap<&str, &CompiledFunction> =
        compiled.iter().map(|c| (c.name.as_str(), c)).collect();
    let mut worklist: Vec<String> = reachable.iter().cloned().collect();
    // Seed the worklist with every function whose address is taken in a
    // file-scope initialiser (e.g. `int (*tbl[])(void) = { f, g, h };`).
    // Those references live in data-section relocations rather than in
    // any code path, so the code-only walk below would otherwise drop
    // the static functions and the linker would fail to resolve their
    // R_SHARC_ADDR32 fixups against the data words.
    let mut seed_init_refs = |init: &Expr| {
        collect_init_symbol_refs(init, &fn_names, &mut reachable, &mut worklist);
    };
    for global in &unit.globals {
        if let Some(init) = &global.init {
            seed_init_refs(init);
        }
    }
    for sl in &all_static_locals {
        if let Some(init) = &sl.init {
            seed_init_refs(init);
        }
    }
    while let Some(name) = worklist.pop() {
        let Some(cf) = by_name.get(name.as_str()) else { continue };
        for mi in &cf.instrs {
            if let Some(r) = &mi.reloc {
                if r.symbol.starts_with(".L") {
                    continue;
                }
                if fn_names.contains(&r.symbol) && reachable.insert(r.symbol.clone()) {
                    worklist.push(r.symbol.clone());
                }
            }
        }
    }
    compiled.retain(|c| !c.is_static || reachable.contains(&c.name));

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
                // String-literal slots (".strN", ".wstrN") are emitted
                // later in this same translation unit; do not declare
                // them `.EXTERN`.
                if r.symbol.starts_with(".str") || r.symbol.starts_with(".wstr") {
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
        out.push_str(".SECTION/SW seg_swco;\n");
        for cf in &compiled {
            let sym = with_abi_suffix(&cf.name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            let _ = writeln!(out, "{sym}:");
            for (body_idx, mi) in cf.instrs.iter().enumerate() {
                if let Some(lbls) = cf.label_insertions.get(&body_idx) {
                    for lbl in lbls {
                        let _ = writeln!(out, "{lbl}:");
                    }
                }
                let line = emit_instr_line(mi).map_err(|e| Error::NotImplemented(format!("encode: {e}")))?;
                let _ = writeln!(out, "    {line};");
            }
            // Emit any trailing labels whose position sits at
            // `instrs.len()`. Arises when a basic-block label is
            // the last IR op in a function — e.g. `break_label`
            // from `lower_for` on `for(;;){}`. Follow with a NOP
            // so the label resolves to a real address; the branch
            // that targets it is dead in these cases, but leaving
            // the symbol unresolved sent the core to address 0.
            let tail_idx = cf.instrs.len();
            if let Some(lbls) = cf.label_insertions.get(&tail_idx) {
                for lbl in lbls {
                    let _ = writeln!(out, "{lbl}:");
                }
                let _ = writeln!(out, "    NOP;");
            }
        }
        // Emit stubs for functions that failed to compile (e.g. internal
        // encoder errors).  Return 0xDEAD to make failures visible.
        for name in &skipped_functions {
            let sym = with_abi_suffix(name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            let _ = writeln!(out, "{sym}:");
            let _ = writeln!(out, "    R0 = 0xDEAD;");
            let _ = writeln!(out, "    RTS;");
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // Data section: initialized globals and initialized static locals.
    //
    // C99 6.5.2.5p6: a compound literal that occurs outside the body of
    // a function has static storage duration. When such a literal's
    // address is taken in a file-scope initializer (e.g.
    // `static int *p = &(int){0x99};`), selcc must allocate static
    // storage for the unnamed object, emit its bytes into the data
    // section, and let the parent initializer reference the synthesised
    // symbol so the linker patches in its runtime address. We collect
    // those synthesised entries via `extra_data` and a monotonically
    // increasing counter so each compound literal gets a unique name.
    let mut data_entries: Vec<DataEntry> = Vec::new();
    let mut extra_data: Vec<DataEntry> = Vec::new();
    let mut complit_counter: u32 = 0;
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if let Some(init) = &global.init {
            match build_init_words(
                init,
                crate::types::size_bytes_ctx(&global.ty, &unit_tctx),
                &unit_tctx,
                Some(&global.ty),
                &mut extra_data,
                &mut complit_counter,
            ) {
                Ok(values) => data_entries.push(DataEntry {
                    name: global.name.clone(),
                    values,
                }),
                Err(e) => {
                    eprintln!("selcc: {}: {e}", global.name);
                    // Fall back to zero-init so the symbol is still defined.
                    let words = crate::types::size_bytes_ctx(&global.ty, &unit_tctx).div_ceil(4).max(1);
                    data_entries.push(DataEntry {
                        name: global.name.clone(),
                        values: vec![InitWord::Num(0); words as usize],
                    });
                }
            }
        }
    }
    for sl in &all_static_locals {
        if let Some(init) = &sl.init {
            match build_init_words(
                init,
                crate::types::size_bytes_ctx(&sl.ty, &unit_tctx),
                &unit_tctx,
                Some(&sl.ty),
                &mut extra_data,
                &mut complit_counter,
            ) {
                Ok(values) => data_entries.push(DataEntry {
                    name: sl.symbol.clone(),
                    values,
                }),
                Err(e) => {
                    eprintln!("selcc: {}: {e}", sl.symbol);
                    let words = crate::types::size_bytes_ctx(&sl.ty, &unit_tctx).div_ceil(4).max(1);
                    data_entries.push(DataEntry {
                        name: sl.symbol.clone(),
                        values: vec![InitWord::Num(0); words as usize],
                    });
                }
            }
        }
    }
    // Append any synthesised compound-literal storage to the data
    // section so the references emitted above resolve.
    data_entries.extend(extra_data);
    // Deduplicate data entries (later entry wins — handles tentative then init).
    {
        let mut seen = HashSet::new();
        let mut deduped = Vec::new();
        for e in data_entries.into_iter().rev() {
            if seen.insert(e.name.clone()) {
                deduped.push(e);
            }
        }
        deduped.reverse();
        data_entries = deduped;
    }
    if !data_entries.is_empty() {
        out.push_str(".SECTION/DOUBLE32 seg_dmda;\n");
        for e in &data_entries {
            let sym = with_abi_suffix(&e.name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            emit_var_bytes(&mut out, &sym, &e.values);
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // BSS: uninitialized globals and static locals.
    // Skip names already emitted in the data section (tentative + init).
    let data_names: HashSet<String> = data_entries.iter().map(|e| e.name.clone()).collect();
    let mut bss_entries: Vec<(String, u32)> = Vec::new();
    let mut bss_seen: HashSet<String> = HashSet::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if global.init.is_none() && !data_names.contains(&global.name) && bss_seen.insert(global.name.clone()) {
            bss_entries.push((global.name.clone(), crate::types::size_bytes_ctx(&global.ty, &unit_tctx)));
        }
    }
    for sl in &all_static_locals {
        if sl.init.is_none() {
            bss_entries.push((sl.symbol.clone(), crate::types::size_bytes_ctx(&sl.ty, &unit_tctx)));
        }
    }
    if !bss_entries.is_empty() {
        out.push_str(".SECTION/DOUBLE32 seg_dmda;\n");
        for (name, sz) in &bss_entries {
            let sym = with_abi_suffix(name);
            let _ = writeln!(out, ".GLOBAL {sym};");
            let words = sz.div_ceil(4).max(1);
            let zero = vec![InitWord::Num(0); words as usize];
            emit_var_bytes(&mut out, &sym, &zero);
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // Rodata: string literals.
    //
    // Narrow strings are byte-packed: four bytes per 32-bit word, in
    // little-endian order, matching the byte-addressed memory model
    // the SHARC+ DM sees in `-char-size-8` mode.  A `const char *p`
    // read emits a whole-word load at `p & ~3` followed by a
    // `(p & 3) * 8` shift and `& 0xFF` mask to extract the target
    // byte (see `narrow_deref_*` in lower.rs).  Stride-1 indexing
    // therefore walks byte-by-byte through the packed layout as C99
    // requires, so `(char *)&int` aliases and `char s[] = "abcd"`
    // both work with the same access pattern.  Wide strings (`L"..."`)
    // are already 32-bit per character and remain unpacked.
    //
    if !all_strings.is_empty() || !all_wide_strings.is_empty() {
        out.push_str(".SECTION/DOUBLE32 seg_dmda;\n");
        for (i, s) in all_strings.iter().enumerate() {
            let name = with_abi_suffix(&format!(".str{i}"));
            let _ = writeln!(out, ".GLOBAL {name};");
            let mut bytes: Vec<u8> = s.as_bytes().to_vec();
            bytes.push(0);
            let words: Vec<InitWord> =
                pack_bytes_le(&bytes).into_iter().map(InitWord::Num).collect();
            emit_var_bytes(&mut out, &name, &words);
        }
        for (i, ws) in all_wide_strings.iter().enumerate() {
            let name = with_abi_suffix(&format!(".wstr{i}"));
            let _ = writeln!(out, ".GLOBAL {name};");
            let mut words: Vec<u32> = ws.clone();
            words.push(0);
            let words: Vec<InitWord> = words.into_iter().map(InitWord::Num).collect();
            emit_var_bytes(&mut out, &name, &words);
        }
        out.push_str(".ENDSEG;\n");
    }

    Ok(AsmModule { text: out })
}

/// Pack a byte sequence into 32-bit words in little-endian order.
/// Trailing bytes that do not fill a word are zero-padded in the high
/// bytes of the final word.  Used for rodata string literals and for
/// char-array initialisers so that byte-granularity reads via
/// `(char *)&word + (addr & 3) * 8` pick up the correct byte.
pub fn pack_bytes_le(bytes: &[u8]) -> Vec<u32> {
    let mut words = Vec::with_capacity(bytes.len().div_ceil(4));
    for chunk in bytes.chunks(4) {
        let mut w: u32 = 0;
        for (i, b) in chunk.iter().enumerate() {
            w |= (*b as u32) << (i * 8);
        }
        words.push(w);
    }
    if words.is_empty() {
        words.push(0);
    }
    words
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

/// One word of a global initialiser: either a literal value laid down
/// in place, or a reference to another symbol that the linker patches
/// with the symbol's runtime address (R_SHARC_ADDR32). The latter is
/// what makes file-scope arrays of function pointers and pointer-typed
/// globals initialised by an address work.
#[derive(Clone, Debug)]
enum InitWord {
    Num(u32),
    Sym(String),
}

/// Emit a `.VAR name = v0, v1, ...;` initializer line. Using `.VAR`
/// keeps each logical word at 4 bytes regardless of char-size, which
/// matches what the previous byte-level emitter produced.
fn emit_var_bytes(out: &mut String, sym: &str, values: &[InitWord]) {
    let render = |w: &InitWord| -> String {
        match w {
            InitWord::Num(v) => format!("0x{v:08X}"),
            InitWord::Sym(name) => with_abi_suffix(name),
        }
    };
    if values.is_empty() {
        let _ = writeln!(out, ".VAR {sym};");
        return;
    }
    if values.len() == 1 {
        let _ = writeln!(out, ".VAR {sym} = {};", render(&values[0]));
        return;
    }
    // Multiple words: emit one .VAR per value with a sequential helper
    // name, then rely on the primary name to point at the first.
    // selas does not support `.VAR name[] = {...}`, so for multi-word
    // initialisers we just emit the first word under the real name and
    // follow with anonymous continuation words.
    let _ = writeln!(out, ".VAR {sym} = {};", render(&values[0]));
    for v in &values[1..] {
        let _ = writeln!(out, ".VAR = {};", render(v));
    }
}

struct DataEntry {
    name: String,
    values: Vec<InitWord>,
}

/// Walk a global initializer expression, recording every function-name
/// reference (bare identifier or `&fn` address-of) that names a
/// known TU-defined function. Used to seed DCE so a `static` function
/// reached only via a file-scope address-taken initialiser is not
/// dropped before the data-section relocation against it is emitted.
fn collect_init_symbol_refs(
    expr: &Expr,
    fn_names: &HashSet<String>,
    reachable: &mut HashSet<String>,
    worklist: &mut Vec<String>,
) {
    match expr {
        Expr::Ident(name) => {
            if fn_names.contains(name) && reachable.insert(name.clone()) {
                worklist.push(name.clone());
            }
        }
        Expr::AddrOf(inner) => {
            collect_init_symbol_refs(inner, fn_names, reachable, worklist);
        }
        Expr::Cast(_, inner) => {
            collect_init_symbol_refs(inner, fn_names, reachable, worklist);
        }
        Expr::InitList(items) => {
            for item in items {
                collect_init_symbol_refs(item, fn_names, reachable, worklist);
            }
        }
        Expr::ArrayDesignator { value, .. }
        | Expr::DesignatedInit { value, .. } => {
            collect_init_symbol_refs(value, fn_names, reachable, worklist);
        }
        _ => {}
    }
}

/// Resolve a struct/union type through the tag table to its field list.
/// Strips Const/Volatile/Typedef wrappers. Returns None if the type is
/// not an aggregate or its tag is undeclared.
fn resolve_struct_fields<'a>(
    ty: &'a crate::types::Type,
    tctx: &'a dyn crate::types::TypeCtx,
) -> Option<&'a [(String, crate::types::Type)]> {
    use crate::types::Type;
    match ty {
        Type::Const(inner) | Type::Volatile(inner) => resolve_struct_fields(inner, tctx),
        Type::Typedef(name) => tctx.resolve_typedef(name).and_then(|t| resolve_struct_fields(t, tctx)),
        Type::Struct { name, fields } | Type::Union { name, fields } => {
            if !fields.is_empty() {
                Some(fields.as_slice())
            } else if let Some(n) = name {
                tctx.resolve_tag(n)
            } else {
                None
            }
        }
        _ => None,
    }
}

/// Strip type wrappers (typedef/const/volatile) to a canonical form.
fn strip_type<'a>(
    ty: &'a crate::types::Type,
    tctx: &'a dyn crate::types::TypeCtx,
) -> &'a crate::types::Type {
    use crate::types::Type;
    match ty {
        Type::Const(inner) | Type::Volatile(inner) => strip_type(inner, tctx),
        Type::Typedef(name) => match tctx.resolve_typedef(name) {
            Some(t) => strip_type(t, tctx),
            None => ty,
        },
        _ => ty,
    }
}

/// Evaluate a const-initializer expression to a flat list of 32-bit words.
///
/// `ty`, when supplied, drives designated-initializer resolution: struct
/// `.field = v` writes at the field's word offset, array `[i] = v` writes
/// at element `i` scaled by the element size, and positional items after
/// a designator continue from the next slot.
fn build_init_words(
    init: &Expr,
    size_bytes: u32,
    tctx: &dyn crate::types::TypeCtx,
    ty: Option<&crate::types::Type>,
    extra_data: &mut Vec<DataEntry>,
    complit_counter: &mut u32,
) -> Result<Vec<InitWord>> {
    use crate::types::Type;
    match init {
        Expr::StringLit(s) => {
            // Pack four bytes per word, little-endian, to match the
            // byte-addressed access pattern used for all `char *`
            // dereferences (see `emit_module` rodata comment).
            let mut bytes: Vec<u8> = s.as_bytes().to_vec();
            bytes.push(0);
            // Pad to the declared array size so that sizeof() and
            // zero-fill tail elements match the declaration.
            let declared = size_bytes.max(bytes.len() as u32) as usize;
            bytes.resize(declared, 0);
            Ok(pack_bytes_le(&bytes).into_iter().map(InitWord::Num).collect())
        }
        Expr::InitList(items) => {
            // Honour designated initializers (`[n] = v`, `.field = v`).
            // Holes between designators are zero-filled to match C99.
            // Positional items after a designator continue from the
            // designator's index + 1.  Sized at `size_bytes / 4` words
            // when the caller knows the type; otherwise grows to fit.
            let declared_words = (size_bytes.div_ceil(4)).max(1) as usize;
            let mut v: Vec<InitWord> = vec![InitWord::Num(0); declared_words];
            let ensure = |v: &mut Vec<InitWord>, idx: usize| {
                if idx >= v.len() {
                    v.resize(idx + 1, InitWord::Num(0));
                }
            };

            // Determine the layout policy from the destination type.
            // For structs, each positional/designated step maps to a
            // field's word offset. For arrays, each step maps to an
            // element of the element type. For anything else, fall
            // back to flat word slots.
            let stripped = ty.map(|t| strip_type(t, tctx));
            let struct_fields = stripped.and_then(|t| match t {
                Type::Struct { .. } | Type::Union { .. } => resolve_struct_fields(t, tctx),
                _ => None,
            });
            let array_elem: Option<&Type> = stripped.and_then(|t| match t {
                Type::Array(elem, _) => Some(elem.as_ref()),
                _ => None,
            });

            // Field-name -> (word_offset, element_type) for struct dispatch.
            let mut field_map: Vec<(String, usize, &Type)> = Vec::new();
            if let Some(fields) = struct_fields {
                for (fname, fty) in fields {
                    let (byte_off, _, _) = crate::types::struct_field_layout_ctx(fields, fname, tctx)
                        .ok_or_else(|| Error::Compile { msg: format!(
                            "internal: field {fname} not found in own struct"
                        ) })?;
                    if byte_off % 4 != 0 {
                        return Err(Error::Compile { msg: format!(
                            "field {fname} at byte offset {byte_off} is not word-aligned; \
                             sub-word struct fields in global initializers are not supported"
                        ) });
                    }
                    field_map.push((fname.clone(), (byte_off / 4) as usize, fty));
                }
            }

            // Cursor in struct-field index (when struct), array element
            // index (when array), or word index (flat fallback).
            let mut field_cursor: usize = 0;

            for item in items {
                match item {
                    Expr::DesignatedInit { field, value } => {
                        // Struct field designator. Locate the field by name.
                        let (fidx, woff, fty) = field_map.iter().enumerate()
                            .find(|(_, (n, _, _))| n == field)
                            .map(|(i, (_, w, t))| (i, *w, *t))
                            .ok_or_else(|| Error::Compile { msg: format!(
                                "designated initializer .{field} has no matching struct field \
                                 (type info missing or field undefined)"
                            ) })?;
                        // Recursively build the value's words and place
                        // them at the field's word offset.
                        let fsize = crate::types::size_bytes_ctx(fty, tctx);
                        let sub = build_init_words(value, fsize, tctx, Some(fty), extra_data, complit_counter)?;
                        for (k, w) in sub.into_iter().enumerate() {
                            ensure(&mut v, woff + k);
                            v[woff + k] = w;
                        }
                        field_cursor = fidx + 1;
                    }
                    Expr::ArrayDesignator { index, value } => {
                        let i = eval_const_expr(index, tctx)? as usize;
                        let elem_size = array_elem
                            .map(|t| crate::types::size_bytes_ctx(t, tctx))
                            .unwrap_or(4);
                        let elem_words = (elem_size.div_ceil(4)).max(1) as usize;
                        let woff = i * elem_words;
                        let sub = build_init_words(value, elem_size, tctx, array_elem, extra_data, complit_counter)?;
                        for (k, w) in sub.into_iter().enumerate() {
                            ensure(&mut v, woff + k);
                            v[woff + k] = w;
                        }
                        field_cursor = i + 1;
                    }
                    other => {
                        // Positional. Place at field/element cursor.
                        if !field_map.is_empty() {
                            if field_cursor >= field_map.len() {
                                return Err(Error::Compile {
                                    msg: "too many positional initializers for struct".to_string(),
                                });
                            }
                            let (_, woff, fty) = &field_map[field_cursor];
                            let fsize = crate::types::size_bytes_ctx(fty, tctx);
                            let sub = build_init_words(other, fsize, tctx, Some(*fty), extra_data, complit_counter)?;
                            let woff = *woff;
                            for (k, w) in sub.into_iter().enumerate() {
                                ensure(&mut v, woff + k);
                                v[woff + k] = w;
                            }
                            field_cursor += 1;
                        } else if let Some(elem) = array_elem {
                            let elem_size = crate::types::size_bytes_ctx(elem, tctx);
                            let elem_words = (elem_size.div_ceil(4)).max(1) as usize;
                            let woff = field_cursor * elem_words;
                            let sub = build_init_words(other, elem_size, tctx, Some(elem), extra_data, complit_counter)?;
                            for (k, w) in sub.into_iter().enumerate() {
                                ensure(&mut v, woff + k);
                                v[woff + k] = w;
                            }
                            field_cursor += 1;
                        } else {
                            ensure(&mut v, field_cursor);
                            v[field_cursor] = eval_init_word(other, tctx, extra_data, complit_counter)?;
                            field_cursor += 1;
                        }
                    }
                }
            }
            Ok(v)
        }
        other => {
            let words = size_bytes.div_ceil(4).max(1);
            let mut v: Vec<InitWord> = vec![InitWord::Num(0); words as usize];
            v[0] = eval_init_word(other, tctx, extra_data, complit_counter)?;
            Ok(v)
        }
    }
}

/// Evaluate a single initializer slot. If the expression is the
/// address of (or bare reference to) a named function or global, emit
/// a symbolic init word so the linker patches in the symbol's runtime
/// address; otherwise fall back to numeric const-evaluation. The bare-
/// identifier case covers the C99 6.3.2.1p4 function-designator-to-
/// pointer decay used in initialisers like
///     int (*tbl[])(void) = { f, g, h };
fn eval_init_word(
    expr: &Expr,
    tctx: &dyn crate::types::TypeCtx,
    extra_data: &mut Vec<DataEntry>,
    complit_counter: &mut u32,
) -> Result<InitWord> {
    match expr {
        Expr::Ident(name) => Ok(InitWord::Sym(name.clone())),
        Expr::AddrOf(inner) => match inner.as_ref() {
            Expr::Ident(name) => Ok(InitWord::Sym(name.clone())),
            // C99 6.5.2.5p6: a compound literal at file scope has
            // static storage duration. `&(T){...}` therefore means the
            // address of an unnamed object that we must materialise in
            // the data section. Synthesize a fresh symbol, build its
            // initializer words, queue it as an extra data entry, and
            // return a symbolic reference so the linker patches in the
            // runtime address.
            Expr::Cast(ty, init_inner)
                if matches!(init_inner.as_ref(), Expr::InitList(_)) =>
            {
                let name = format!(".complit{}", *complit_counter);
                *complit_counter += 1;
                let size = crate::types::size_bytes_ctx(ty, tctx);
                let values = build_init_words(
                    init_inner, size, tctx, Some(ty), extra_data, complit_counter,
                )?;
                extra_data.push(DataEntry { name: name.clone(), values });
                Ok(InitWord::Sym(name))
            }
            // Bare compound literal without an explicit cast (rare,
            // only seen via implicit type inference). Treat the same
            // way but with no known element type — fall back to flat
            // word slots.
            Expr::InitList(_) => {
                let name = format!(".complit{}", *complit_counter);
                *complit_counter += 1;
                let values = build_init_words(
                    inner, 4, tctx, None, extra_data, complit_counter,
                )?;
                extra_data.push(DataEntry { name: name.clone(), values });
                Ok(InitWord::Sym(name))
            }
            _ => Ok(InitWord::Num(eval_const_expr(expr, tctx)? as u32)),
        },
        Expr::Cast(_, inner) => eval_init_word(inner, tctx, extra_data, complit_counter),
        _ => Ok(InitWord::Num(eval_const_expr(expr, tctx)? as u32)),
    }
}

/// Evaluate a constant expression at compile time (for initializers).
fn eval_const_expr(expr: &Expr, tctx: &dyn crate::types::TypeCtx) -> Result<i32> {
    match expr {
        Expr::IntLit(n, _) => Ok(*n as i32),
        Expr::FloatLit(f) => Ok((*f as f32).to_bits() as i32),
        Expr::CharLit(n) => Ok(*n as i32),
        Expr::Unary { op: UnaryOp::Neg, operand } => Ok(-eval_const_expr(operand, tctx)?),
        Expr::Binary { op: BinaryOp::Add, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)?.wrapping_add(eval_const_expr(rhs, tctx)?))
        }
        Expr::Binary { op: BinaryOp::Sub, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)?.wrapping_sub(eval_const_expr(rhs, tctx)?))
        }
        Expr::Binary { op: BinaryOp::Mul, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)?.wrapping_mul(eval_const_expr(rhs, tctx)?))
        }
        Expr::Binary { op: BinaryOp::Div, lhs, rhs } => {
            let r = eval_const_expr(rhs, tctx)?;
            if r == 0 { Ok(0) } else { Ok(eval_const_expr(lhs, tctx)? / r) }
        }
        Expr::Binary { op: BinaryOp::Mod, lhs, rhs } => {
            let r = eval_const_expr(rhs, tctx)?;
            if r == 0 { Ok(0) } else { Ok(eval_const_expr(lhs, tctx)? % r) }
        }
        Expr::Binary { op: BinaryOp::BitOr, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)? | eval_const_expr(rhs, tctx)?)
        }
        Expr::Binary { op: BinaryOp::BitAnd, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)? & eval_const_expr(rhs, tctx)?)
        }
        Expr::Binary { op: BinaryOp::Shl, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)? << eval_const_expr(rhs, tctx)?)
        }
        Expr::Binary { op: BinaryOp::Shr, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)? >> eval_const_expr(rhs, tctx)?)
        }
        Expr::Comma(_l, r) => eval_const_expr(r, tctx),
        Expr::DesignatedInit { value, .. } => eval_const_expr(value, tctx),
        Expr::ArrayDesignator { value, .. } => eval_const_expr(value, tctx),
        Expr::Cast(_, inner) => eval_const_expr(inner, tctx),
        Expr::Sizeof(arg) => {
            let size = match arg.as_ref() {
                crate::ast::SizeofArg::Type(ty) => crate::types::size_bytes_ctx(ty, tctx),
                crate::ast::SizeofArg::Expr(_) => 4,
            };
            Ok(size as i32)
        }
        Expr::Ternary { cond, then_expr, else_expr } => {
            let c = eval_const_expr(cond, tctx)?;
            if c != 0 {
                eval_const_expr(then_expr, tctx)
            } else {
                eval_const_expr(else_expr, tctx)
            }
        }
        Expr::Binary { op: BinaryOp::Eq, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? == eval_const_expr(rhs, tctx)? { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::Ne, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? != eval_const_expr(rhs, tctx)? { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::Lt, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? < eval_const_expr(rhs, tctx)? { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::Gt, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? > eval_const_expr(rhs, tctx)? { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::Le, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? <= eval_const_expr(rhs, tctx)? { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::Ge, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? >= eval_const_expr(rhs, tctx)? { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::BitXor, lhs, rhs } => {
            Ok(eval_const_expr(lhs, tctx)? ^ eval_const_expr(rhs, tctx)?)
        }
        Expr::Binary { op: BinaryOp::LogAnd, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? != 0 && eval_const_expr(rhs, tctx)? != 0 { 1 } else { 0 })
        }
        Expr::Binary { op: BinaryOp::LogOr, lhs, rhs } => {
            Ok(if eval_const_expr(lhs, tctx)? != 0 || eval_const_expr(rhs, tctx)? != 0 { 1 } else { 0 })
        }
        Expr::Unary { op: UnaryOp::BitNot, operand } => Ok(!eval_const_expr(operand, tctx)?),
        Expr::Unary { op: UnaryOp::LogNot, operand } => {
            Ok(if eval_const_expr(operand, tctx)? == 0 { 1 } else { 0 })
        }
        Expr::AddrOf(_) | Expr::Ident(_) | Expr::StringLit(_)
        | Expr::WideStringLit(_) | Expr::Deref(_) => Ok(0),
        Expr::InitList(items) => {
            if let Some(first) = items.first() {
                eval_const_expr(first, tctx)
            } else {
                Ok(0)
            }
        }
        other => Err(Error::NotImplemented(format!("non-constant initializer: {other:?}"))),
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
    let sym = if reloc.symbol.starts_with(".L_ret_") {
        // CJUMP return labels push (label - 1) because the
        // callee's `JUMP (M14, I12)` adds M14 (= +1) to I12.
        format!("{}-1", reloc.symbol)
    } else if reloc.symbol.starts_with(".L") {
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
    /// symbolically at assembly time. Multiple labels may share a
    /// position (adjacent basic-block boundaries).
    label_insertions: HashMap<usize, Vec<String>>,
}

/// TU-wide context reused across every function lowering: struct /
/// typedef definitions, enum constants, global types, known-function
/// set, and per-callee return-type map. Bundled into a single struct
/// so that `emit_function_instrs` has a manageable argument count and
/// per-function threading does not accumulate a new parameter each
/// time the compiler learns a new TU-level fact.
struct UnitCtx<'a> {
    struct_defs: &'a [(String, Vec<(String, crate::types::Type)>)],
    enum_constants: &'a [(String, i64)],
    typedefs: &'a [(String, crate::types::Type)],
    known_functions: &'a HashSet<String>,
    variadic_callees: &'a HashSet<String>,
    variadic_named_counts: &'a HashMap<String, usize>,
    complex_arg_callees: &'a HashSet<String>,
    function_return_types: &'a HashMap<String, crate::types::Type>,
}

/// Run the per-function pipeline and return the final machine-instruction
/// stream (prologue + body + epilogue, with branches resolved). The
/// caller is responsible for converting each instruction to text.
fn emit_function_instrs(
    func: &Function,
    global_types: &HashMap<String, crate::types::Type>,
    unit: &UnitCtx<'_>,
) -> Result<FnEmitResult> {
    let lower_result = lower::lower_function_with_known(
        func, global_types, unit.struct_defs, unit.enum_constants,
        unit.typedefs, unit.known_functions, unit.function_return_types,
    )?;
    let strings = lower_result.strings;
    let wide_strings = lower_result.wide_strings;
    let static_locals = lower_result.static_locals;

    let ir = ir_opt::constant_fold(&lower_result.ops);
    let ir = ir_opt::dead_code_eliminate(&ir);
    let ir = ir_opt::detect_hardware_loops(&ir);

    // Decide up-front whether this function participates in the
    // struct-by-value return ABI: a callee-side `RetStruct` /
    // `LoadStructRetPtr`, or a caller-side `CallStruct` /
    // `CallIndirectStruct`. Only those shapes ever route data through
    // the R0:R1 pair (or the R1 hidden-pointer slot), so only those
    // functions need regalloc to permanently reserve R1. Permanently
    // reserving it everywhere costs a usable scratch register and
    // raises register pressure enough that nested ternary chains spill
    // a join value down a path that the merging block cannot reload --
    // a regalloc latent bug that the extra pressure would expose for
    // every function in the TU instead of just the few that touch
    // structs by value.
    let reserves_r1 = ir.iter().any(|op| matches!(op,
        crate::ir::IrOp::RetStruct { .. }
        | crate::ir::IrOp::LoadStructRetPtr(_)
        | crate::ir::IrOp::CallStruct { .. }
        | crate::ir::IrOp::CallIndirectStruct { .. }
    ));

    // Pin one vreg per ABI argument *slot*, not per parameter. Struct-
    // by-value parameters consume multiple ABI slots (one 32-bit word
    // each), so `params.len()` understates the count and leaves
    // trailing struct words unpinned — regalloc then assigns those
    // vregs to arbitrary registers and reads uninitialised data for
    // every field past the first ABI slot of a multi-word struct.
    let num_params = (lower_result.arg_slots as usize)
        .min(target::ARG_REGS.len()) as u16;

    // Renumber IR virtual registers into a tag-bit-safe u8 range
    // *before* instruction selection truncates `VReg` (u32) to `u8`
    // for the mach-instruction stream. The ureg fields in `MachInstr`
    // overload bit 7 (0x80) as `UREG_FIXED_TAG` plus a low-nibble
    // group code (0x10 = I-reg, 0x20 = M-reg) to distinguish a fixed
    // register encoding from a raw vreg id awaiting allocation. Once
    // the lowering vreg counter passes 128 the truncated id has
    // bit 7 set and may collide with that tagged form, after which
    // the regalloc rewrite in `regalloc::allocate` mistakes the vreg
    // for an I-register and `LoadImm { ureg }` prints `I0 = imm`
    // instead of allocating a data register. Renumbering compresses
    // the live vreg set into 0..0x80, eliminating the collision.
    let ir = crate::ir::renumber_vregs(&ir, num_params as u32);

    let isel_result = isel::select_with_name(
        &ir, &func.name, unit.variadic_callees, unit.variadic_named_counts,
        unit.complex_arg_callees);
    if std::env::var("SELCC_DEBUG_FN").ok().as_deref() == Some(func.name.as_str()) {
        eprintln!("=== {} num_params={} ===", func.name, num_params);
        eprintln!("=== {} IR/isel ===", func.name);
        for (i, mi) in isel_result.instrs.iter().enumerate() {
            eprintln!("  [{i}] {:?}", mi.instr);
        }
    }
    let (allocated, _spill_count, alloc_map) = regalloc::allocate(
        &isel_result.instrs,
        num_params,
        reserves_r1,
        &isel_result.label_positions,
    );
    if std::env::var("SELCC_DEBUG_FN").ok().as_deref() == Some(func.name.as_str()) {
        eprintln!("=== {} after regalloc ===", func.name);
        for (i, mi) in allocated.iter().enumerate() {
            eprintln!("  [{i}] {:?}", mi.instr);
        }
    }

    let used_callee_saved = callee_saved_used(&allocated);
    let num_saved = used_callee_saved.len() as i8;

    let local_slots_pre = count_local_slots(&allocated);
    let (adjusted, adjust_map) =
        adjust_frame_offsets(&allocated, num_saved, local_slots_pre);

    let mut label_map: HashMap<Label, usize> = HashMap::new();
    for &(label, old_idx) in &isel_result.label_positions {
        // Thread the isel-level position through regalloc's spill
        // insertions, then through adjust_frame_offsets's access
        // expansions, to land on the right instruction in `adjusted`.
        let alloc_idx = alloc_map
            .get(old_idx)
            .copied()
            .unwrap_or(allocated.len());
        let adj_idx = adjust_map
            .get(alloc_idx)
            .copied()
            .unwrap_or(adjusted.len());
        label_map.insert(label, adj_idx);
    }

    let optimized = eliminate_copies(&adjusted, &mut label_map);
    if std::env::var("SELCC_DEBUG_FN").ok().as_deref() == Some(func.name.as_str()) {
        eprintln!("=== {} after adjust ===", func.name);
        for (i, mi) in adjusted.iter().enumerate() {
            eprintln!("  [{i}] {:?}", mi.instr);
        }
        eprintln!("=== {} after eliminate_copies ===", func.name);
        for (i, mi) in optimized.iter().enumerate() {
            eprintln!("  [{i}] {:?}", mi.instr);
        }
    }

    let body_depth = count_local_slots(&optimized);
    let frame_size = body_depth.max(used_callee_saved.len() as u32);
    let has_calls = optimized.iter().any(|mi| matches!(mi.instr, Instruction::CJump { .. }));
    let prologue = build_prologue(frame_size, &used_callee_saved, has_calls);
    let epilogue = build_epilogue(frame_size, &used_callee_saved, has_calls);

    // Non-leaf functions do NOT need to save I12 in the prologue.
    // The SHARC+ C-ABI reads I12 = DM(M7, I6) right before each
    // return. After RFRAME restores I6 to the current frame, the
    // slot at DM(M7, I6) still contains the correct return address
    // — even after recursive calls, because each call pushes its
    // own return address to a deeper stack position.

    let prologue_len = prologue.len();
    let (resolved, mut label_insertions) =
        resolve_branches(&optimized, &label_map, prologue_len, &func.name);

    let resolved = expand_large_frame_offsets(&resolved);

    // isel's IrOp::Ret handler emits the 4-instruction SHARC+ C-ABI
    // leaf-return sequence at every `return` statement in the source.
    // Each such sequence must be preceded by the epilogue (callee-saved
    // restores + frame teardown) — otherwise the delayed indirect JUMP
    // transfers control first and the restores are dead code, leaving
    // the caller's callee-saved registers clobbered by the callee. A
    // function with multiple return paths (early `return -x;` etc.)
    // therefore needs the epilogue spliced before *each* occurrence of
    // the return sequence, not just the trailing one.
    //
    // Scan `resolved` for every occurrence of the return-sequence
    // fingerprint, splice the epilogue before each, and adjust the
    // label-insertion indices from `resolve_branches` to account for
    // the shifts (each insertion bumps every later index by
    // `epilogue.len()`).

    let return_seq_starts = find_return_sequence_starts(&resolved);
    let (body_with_epilogues, body_index_map) =
        splice_epilogues(resolved, &return_seq_starts, &epilogue);

    // Rebase label_insertions: keys were function-absolute indices
    // (prologue_len + body_index). The prologue is unchanged; only
    // positions inside the body shift, by `body_index_map`.
    let mut rebased_label_insertions: HashMap<usize, Vec<String>> =
        HashMap::with_capacity(label_insertions.len());
    for (abs_idx, labels) in label_insertions.drain() {
        let new_abs = if abs_idx >= prologue_len {
            let body_idx = abs_idx - prologue_len;
            let mapped = body_index_map
                .get(body_idx)
                .copied()
                .unwrap_or(body_with_epilogues.len());
            prologue_len + mapped
        } else {
            abs_idx
        };
        rebased_label_insertions.entry(new_abs).or_default().extend(labels);
    }
    let mut label_insertions = rebased_label_insertions;

    let mut instrs = Vec::with_capacity(prologue.len() + body_with_epilogues.len());
    instrs.extend(prologue);
    instrs.extend(body_with_epilogues);

    // RFRAME's ISA pseudocode is `I7 = I6; I6 = DM(0, I6)`. At the
    // moment RFRAME executes, `I6` is the callee's frame pointer, which
    // equals the caller's pre-CJUMP I7 (CJUMP set the callee's I6 from
    // the caller's I7). So `I7 = I6` after RFRAME puts I7 back at the
    // same position the prologue established — already below the spill
    // region, thanks to `CJUMP_PUSH_RESERVE` in the prologue's MODIFY
    // magnitude — so the next CJUMP's delay-slot pushes land in the
    // reserved area without any extra fix-up on the caller side. Scan
    // for the second delay-slot instruction (an `ImmStore` with a
    // `.L_ret_*` relocation) and emit the matching return label right
    // after it.
    let mut final_instrs = Vec::with_capacity(instrs.len());
    let mut new_label_insertions: HashMap<usize, Vec<String>> = HashMap::new();

    let mut insert_after: Vec<usize> = Vec::new();
    for (i, mi) in instrs.iter().enumerate() {
        if let Some(ref reloc) = mi.reloc {
            if reloc.symbol.starts_with(".L_ret_")
                && matches!(mi.instr, Instruction::ImmStore { .. })
            {
                insert_after.push(i);
            }
        }
    }

    for (i, mi) in instrs.into_iter().enumerate() {
        final_instrs.push(mi);
        if let Some(labels) = label_insertions.remove(&i) {
            new_label_insertions.entry(i).or_default().extend(labels);
        }

        if insert_after.contains(&i) {
            let ret_idx = i + 1;
            if let Some(reloc) = final_instrs.last().and_then(|mi| mi.reloc.as_ref()) {
                if reloc.symbol.starts_with(".L_ret_") {
                    let sym = reloc.symbol.clone();
                    let slot = new_label_insertions.entry(ret_idx).or_default();
                    if !slot.contains(&sym) {
                        slot.push(sym);
                    }
                }
            }
        }
    }

    for (old_idx, labels) in label_insertions {
        new_label_insertions.entry(old_idx).or_default().extend(labels);
    }

    Ok(FnEmitResult {
        instrs: final_instrs,
        strings,
        wide_strings,
        static_locals,
        label_insertions: new_label_insertions,
    })
}

/// Locate the start index of every 4-instruction SHARC+ C-ABI return
/// sequence in `body`. The sequence fingerprint is `I12 = DM(M7,I6)` +
/// `JUMP (M14,I12) (DB)` + RFRAME + NOP, emitted once per `return`
/// statement by `IrOp::Ret` in isel. Returned indices are in ascending
/// order and never overlap (the scanner skips past each matched
/// sequence before looking for the next).
fn find_return_sequence_starts(body: &[MachInstr]) -> Vec<usize> {
    let mut starts = Vec::new();
    let mut i = 0;
    while i + 4 <= body.len() {
        if is_return_sequence_at(body, i) {
            starts.push(i);
            i += 4;
        } else {
            i += 1;
        }
    }
    starts
}

fn is_return_sequence_at(body: &[MachInstr], i: usize) -> bool {
    if i + 4 > body.len() {
        return false;
    }
    matches!(
        body[i].instr,
        Instruction::UregDagMove {
            pm: false,
            write: false,
            ureg: 0x1C,
            i_reg: 6,
            m_reg: 7,
            ..
        },
    ) && matches!(
        body[i + 1].instr,
        Instruction::IndirectBranch {
            call: false,
            pm_i: 4,
            pm_m: 6,
            delayed: true,
            ..
        },
    ) && matches!(body[i + 2].instr, Instruction::Rframe)
        && matches!(body[i + 3].instr, Instruction::Nop)
}

/// Splice a copy of `epilogue` immediately before every return-sequence
/// start in `body`. Returns the rewritten body together with a map
/// from each original body index to its new index in the rewritten
/// body (length `body.len() + 1`; the last entry is the new length, so
/// callers can map a one-past-the-end index too).
fn splice_epilogues(
    body: Vec<MachInstr>,
    return_starts: &[usize],
    epilogue: &[MachInstr],
) -> (Vec<MachInstr>, Vec<usize>) {
    let mut out = Vec::with_capacity(body.len() + return_starts.len() * epilogue.len());
    let mut index_map = Vec::with_capacity(body.len() + 1);
    let mut next_return = 0;
    for (i, mi) in body.into_iter().enumerate() {
        if next_return < return_starts.len() && return_starts[next_return] == i {
            out.extend(epilogue.iter().cloned());
            next_return += 1;
        }
        index_map.push(out.len());
        out.push(mi);
    }
    index_map.push(out.len());
    (out, index_map)
}

// --------------------------------------------------------------------
// Helpers below are carried over verbatim from the byte-level backend.
// They run the machine-instruction pipeline up to but not including the
// final encode step.
// --------------------------------------------------------------------

fn callee_saved_used(instrs: &[MachInstr]) -> Vec<u16> {
    let mut used = Vec::new();
    for &reg in target::CALLEE_SAVED {
        if instrs.iter().any(|mi| instr_uses_reg(&mi.instr, reg as u16)) {
            used.push(reg as u16);
        }
    }
    used
}

fn instr_uses_reg(instr: &Instruction, reg: u16) -> bool {
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

fn compute_uses_reg(op: &selinstr::encode::ComputeOp, reg: u16) -> bool {
    use selinstr::encode::ComputeOp;
    match *op {
        ComputeOp::Alu(ref a) => alu_uses_reg(a, reg),
        ComputeOp::Mul(ref m) => mul_uses_reg(m, reg),
        ComputeOp::Shift(ref s) => shift_uses_reg(s, reg),
        ComputeOp::Falu(ref f) => falu_uses_reg(f, reg),
        ComputeOp::Multi(ref mf) => multi_uses_reg(mf, reg),
    }
}

fn alu_uses_reg(op: &selinstr::encode::AluOp, reg: u16) -> bool {
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

fn mul_uses_reg(op: &selinstr::encode::MulOp, reg: u16) -> bool {
    use selinstr::encode::MulOp::*;
    match *op {
        MulSsf { rn, rx, ry } | MulSsi { rn, rx, ry } | FMul { rn, rx, ry } => {
            rn == reg || rx == reg || ry == reg
        }
        _ => false,
    }
}

fn shift_uses_reg(op: &selinstr::encode::ShiftOp, reg: u16) -> bool {
    use selinstr::encode::ShiftOp::*;
    match *op {
        Lshift { rn, rx, ry } | Ashift { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        _ => false,
    }
}

fn multi_uses_reg(op: &selinstr::encode::MultiOp, reg: u16) -> bool {
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

fn falu_uses_reg(op: &selinstr::encode::FaluOp, reg: u16) -> bool {
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

/// Extra slots reserved BELOW the spill region for the callee's own
/// CJUMP delay-slot pushes. `CJUMP (DB)` writes two words via
/// `DM(I7,M7)=...` (post-decrement by `M7=-1`), starting at the I7 the
/// callee set up in its prologue. Without this reserve those two writes
/// would land at `DM(-frame_size, I6)` and `DM(-(frame_size-1), I6)`,
/// i.e. on top of the deepest spill slots that the regalloc has already
/// populated. Bumping the prologue/epilogue `MODIFY` magnitude by
/// `CJUMP_PUSH_RESERVE` pushes I7 two words further below the spill
/// region so the delay-slot writes land in previously unused memory.
/// Only non-leaf functions need this reserve; a leaf function never
/// executes `CJUMP` so the two extra words would be dead stack.
const CJUMP_PUSH_RESERVE: i32 = 2;

fn build_prologue(frame_size: u32, callee_saved: &[u16], has_calls: bool) -> Vec<MachInstr> {
    debug_assert!(
        callee_saved.iter().all(|r| target::CALLER_SAVED.iter().all(|c| (*c as u16) != *r)),
        "callee-saved register overlaps with caller-saved set"
    );
    if frame_size == 0 && callee_saved.is_empty() {
        return Vec::new();
    }
    let mut instrs = Vec::new();
    if frame_size > 0 {
        let extra = if has_calls { CJUMP_PUSH_RESERVE } else { 0 };
        instrs.push(MachInstr {
            // (NW) suffix: the immediate is in 32-bit-word units, matching
            // the word-scaled frame offsets used in the callee-saved
            // spills and every `DM(offset, I6)` access emitted below.
            // Without NW, the SHARC+ DAG treats the immediate as the
            // implicit width of the I7 register's last memory access
            // (bytes in -char-size-8 BW mode), so `MODIFY(I7, -N)` only
            // reserves N BYTES of stack -- far short of the N WORDS
            // the callee-saved save/reload sequence assumes. The
            // mismatch leaves the stack pointer inside the reserved
            // spill region, and subsequent CJUMP delay-slot pushes
            // (written through I7 post-decrement) land on top of local
            // variables, corrupting them across a nested call pair.
            instr: Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: -(frame_size as i32) - extra,
                width: MemWidth::Nw,
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

fn build_epilogue(frame_size: u32, callee_saved: &[u16], has_calls: bool) -> Vec<MachInstr> {
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
        let extra = if has_calls { CJUMP_PUSH_RESERVE } else { 0 };
        instrs.push(MachInstr {
            // (NW) suffix: mirror the prologue's word-scaled modify so
            // the epilogue unwinds by the same amount the prologue
            // reserved. See build_prologue for full rationale.
            instr: Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: frame_size as i32 + extra,
                width: MemWidth::Nw,
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

/// Adjust frame-pointer-relative offsets for the final prologue layout
/// and return (new_instrs, old_to_new) where `old_to_new[i]` is the
/// position in `new_instrs` that the i'th input instruction landed at.
/// When a large-offset access expands to several instructions, the map
/// still points at the FIRST of them, which is what branch resolution
/// needs to position a label correctly ahead of the sequence.
fn adjust_frame_offsets(
    instrs: &[MachInstr],
    num_saved: i8,
    local_slots: u32,
) -> (Vec<MachInstr>, Vec<usize>) {
    if num_saved == 0 && local_slots == 0 {
        let has_positive_offsets = instrs.iter().any(|mi| matches!(
            mi.instr,
            Instruction::ComputeLoadStore { access, offset, .. }
                if access.i_reg == target::FRAME_PTR && !access.pm && offset >= 0
        ));
        if !has_positive_offsets {
            let map = (0..instrs.len()).collect();
            return (instrs.to_vec(), map);
        }
    }
    // Leave `FRAME_SKIP` slots below I6 untouched: those hold the
    // caller's CJUMP delay-slot pushes (return PC, R2 save) plus the
    // word at the callee's entry I7. All negative offsets land
    // below that region.
    let shift = num_saved as i32 + FRAME_SKIP;
    let spill_base = shift + local_slots as i32;
    let mut result = Vec::with_capacity(instrs.len());
    let mut idx_map = Vec::with_capacity(instrs.len());
    for mi in instrs {
        idx_map.push(result.len());
        match mi.instr {
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
                    mi.reloc.clone(),
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
                        // FRAME_PTR modifies are frame-relative and
                        // must use the same word-scaled unit as the
                        // prologue/epilogue STACK_PTR modify and as
                        // every `DM(offset, I6)` access in the body.
                        width: MemWidth::Nw,
                        bitrev: false,
                    },
                    reloc: mi.reloc.clone(),
                });
            }
            _ => {
                result.push(mi.clone());
            }
        }
    }
    (result, idx_map)
}

fn emit_adjusted_access(
    out: &mut Vec<MachInstr>,
    compute: Option<selinstr::encode::ComputeOp>,
    access: selinstr::encode::MemAccess,
    dreg: u16,
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
        // Large-offset frame access: temporarily modify I6, emit the
        // memory access at offset 0, then un-modify. Both modifies
        // use (NW) word units to match the FRAME_PTR convention.
        out.push(MachInstr {
            instr: Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: new_offset,
                width: MemWidth::Nw,
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
                width: MemWidth::Nw,
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
    let mut use_count: HashMap<u16, u32> = HashMap::new();
    for mi in instrs {
        for reg in source_regs(&mi.instr) {
            *use_count.entry(reg).or_insert(0) += 1;
        }
    }

    // Set of instruction indices that are branch targets. Fusing a Pass
    // into a neighbouring instruction is only correct when control flow
    // reaches both neighbours strictly via fall-through: if a label
    // points at the Pass (or at the instruction whose semantics we are
    // about to rewrite), a jump from elsewhere lands on an instruction
    // whose operands depend on a value that was never produced on that
    // path. Build the target set once from the label map.
    let branch_targets: std::collections::HashSet<usize> =
        label_map.values().copied().collect();

    let mut removed = Vec::new();
    let mut result = Vec::with_capacity(instrs.len());
    let mut skip_next_remap: Option<(u16, u16)> = None;
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

            // Refuse to fuse across a branch target. A label at `i`
            // means some jump lands on the Pass; removing it redirects
            // the jump to the following instruction, which after the
            // optimisation reads `src` instead of `dst` — but `src`
            // need not hold the desired value on that alternate path.
            // A label at `i+1` is likewise unsafe for forward-
            // substitution because the rewritten successor would then
            // be entered from a path that did not execute the Pass.
            let pass_is_target = branch_targets.contains(&i);
            let next_is_target = branch_targets.contains(&(i + 1));

            // CJUMP and call-form IndirectBranch report their ABI-read
            // registers (ARG_REGS + R0) through `source_regs` so the
            // use-count phase sees them as live, but `remap_sources`
            // for those instructions is the identity -- they carry no
            // explicit operand fields the optimiser can rewrite.
            // Forward-substituting a `Rn = Rm` Pass into a CJump
            // therefore drops the Pass *and* fails to actually rewrite
            // the call to read `Rm` instead of `Rn`. Any post-call use
            // that read `Rn` -- in particular the caller-saved →
            // callee-saved migration that holds a value live across
            // the call -- is then left reading whatever was in `Rn`
            // before the Pass. Refuse the forward-sub whenever the
            // consumer is a call-shaped branch.
            //
            // The non-call IndirectBranch with `pm_m == 5` is the
            // open-coded indirect-call lowering (see regalloc.rs);
            // it has the same ABI-read semantics as a CJump.
            let next_is_call = matches!(
                instrs.get(i + 1).map(|m| &m.instr),
                Some(Instruction::CJump { .. })
                    | Some(Instruction::IndirectBranch { call: true, .. })
                    | Some(Instruction::IndirectBranch { call: false, pm_m: 5, .. }),
            );

            let dst_count = use_count.get(&dst).copied().unwrap_or(0);
            if dst != src
                && dst_count == 1
                && i + 1 < instrs.len()
                && source_regs(&instrs[i + 1].instr).contains(&dst)
                && !pass_is_target
                && !next_is_target
                && !next_is_call
            {
                removed.push(i);
                skip_next_remap = Some((dst, src));
                i += 1;
                continue;
            }

            let src_count = use_count.get(&src).copied().unwrap_or(0);
            if dst != src && src_count == 1 && !result.is_empty() && !pass_is_target {
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

fn rewrite_dest(mi: &MachInstr, old_dst: u16, new_dst: u16) -> Option<MachInstr> {
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

fn is_pass_copy(instr: &Instruction) -> Option<(u16, u16)> {
    match *instr {
        Instruction::Compute {
            compute: selinstr::encode::ComputeOp::Alu(selinstr::encode::AluOp::Pass { rn, rx }),
            ..
        } => Some((rn, rx)),
        _ => None,
    }
}

fn source_regs(instr: &Instruction) -> Vec<u16> {
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
        Instruction::UregMemAccess { write: true, ureg, .. } if ureg < 0x10 => {
            regs.push(ureg & 0xF);
        }
        Instruction::Return { compute: Some(c), .. } => {
            compute_source_regs(&c, &mut regs);
        }
        Instruction::CJump { .. } => {
            // A CJUMP transfers control to a callee that, by the SHARC+
            // C-ABI, reads its arguments from the ARG_REGS (R4, R8,
            // R12) and may also re-read R0 (the 4th-argument /
            // return-value slot). The eliminate_copies pass uses
            // `source_regs` to count register uses so it can decide
            // whether to forward-substitute a Pass through to the next
            // instruction; without listing the ARG_REGS here, an
            // `R4 = R1` Pass that immediately precedes a CJUMP would
            // be substituted into the very next spill (whose dst is
            // R4) and dropped entirely, leaving R4 uninitialized at
            // the call site. The callee then dereferences whatever
            // garbage was in R4 and faults.
            for &r in target::ARG_REGS {
                regs.push(r as u16);
            }
            regs.push(target::RETURN_REG as u16);
        }
        Instruction::IndirectBranch { call: true, .. } => {
            for &r in target::ARG_REGS {
                regs.push(r as u16);
            }
            regs.push(target::RETURN_REG as u16);
        }
        _ => {}
    }
    regs
}

fn compute_source_regs(op: &selinstr::encode::ComputeOp, regs: &mut Vec<u16>) {
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

fn remap_sources(mi: &MachInstr, from: u16, to: u16) -> MachInstr {
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
        Instruction::UregMemAccess { pm, i_reg, write: true, lw, ureg, offset }
            if ureg < 0x10 && (ureg & 0xF) == from =>
        {
            Instruction::UregMemAccess {
                pm, i_reg, write: true, lw,
                ureg: (ureg & 0xF0) | to,
                offset,
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
    from: u16,
    to: u16,
) -> selinstr::encode::ComputeOp {
    use selinstr::encode::{AluOp, ComputeOp, MulOp, ShiftOp};
    let r = |reg: u16| if reg == from { to } else { reg };
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

fn resolve_branches(
    instrs: &[MachInstr],
    label_map: &HashMap<Label, usize>,
    prologue_len: usize,
    func_name: &str,
) -> (Vec<MachInstr>, HashMap<usize, Vec<String>>) {
    let mut out = Vec::with_capacity(instrs.len());
    // Map from function-absolute instruction index (prologue + body + epilogue)
    // to a locally-generated label name. The caller inserts each label in the
    // asm text immediately before the instruction at that index, so selas sees
    // a `DO .L_doloop_end_N UNTIL LCE` form with a symbolic target instead of
    // a numeric offset. selas then resolves the label at assembly time, in
    // whatever unit (words or parcels) the output mode needs, and suppresses
    // VISA compression inside the loop body.
    let mut label_insertions: HashMap<usize, Vec<String>> = HashMap::new();
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
                let name = format!(".L_branch_{func_name}_{label}");
                let slot = label_insertions.entry(target_pc).or_default();
                if !slot.contains(&name) {
                    slot.push(name.clone());
                }
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
                let name = format!(".L_doloop_end_{func_name}_{label}");
                let slot = label_insertions.entry(last_body_pc).or_default();
                if !slot.contains(&name) {
                    slot.push(name.clone());
                }
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

    /// Compile C source to an asm module. Tests assume the standard
    /// 8-bit char layout (`-char-size-8`), matching how the runtime
    /// objects in this codebase are built.
    fn compile(src: &str) -> AsmModule {
        let unit = parse::parse(src).unwrap();
        emit_module(&unit, 8).unwrap()
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
        let code = code_section_bytes(&doj, &hdr, "seg_swco")
            .or_else(|| code_section_bytes(&doj, &hdr, "seg_pmco"))
            .unwrap_or_default();
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
            m.text.contains("CJUMP ext."),
            "expected CJUMP ext., got:\n{}",
            m.text
        );
        assert!(m.text.contains(".EXTERN ext.;"));
    }

    #[test]
    fn global_address_load_uses_symbol_text() {
        let m = compile("int counter;\nint get() { return counter; }");
        assert!(m.text.contains("counter."), "got:\n{}", m.text);
    }

    #[test]
    fn data_section_has_var() {
        let m = compile("int x = 10;\nint f() { return x; }");
        assert!(m.text.contains(".SECTION/DOUBLE32 seg_dmda;"));
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
        // The body must contain at least one real instruction for
        // hardware-loop conversion to fire (a SHARC+ DO with an
        // empty body has end-PC = DO-PC, which the chip executes as
        // an infinite loop). `s += 1` provides exactly one body op
        // and does not reference the induction variable.
        let text = round_trip_disasm(
            "int g; void f() { int i; for (i = 0; i < 10; i++) g += 1; }",
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
        // Hardware DO loops only fire when the body does *not* reference
        // the induction variable: LCNTR replaces `i` with an internal
        // counter and the IR step that updates the C-level `i` is dropped.
        // Bodies that read `i` would silently see 0 every iteration. So
        // these loops use a body unrelated to `i` (a constant accumulator
        // step), which still drives the PC-relative-offset path under test.
        let src = r#"
            int sum_const(void) {
                int s = 0;
                for (int i = 0; i < 10; i++) s += 1;
                return s;
            }
            int sum2_const(void) {
                int s = 0;
                for (int i = 0; i < 20; i++) s += 2;
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
    fn rt_signed_div32_calls_runtime() {
        // Signed 32-bit `/` should emit a CJUMP to the `___div32`
        // runtime helper rather than the old inline-float-reciprocal
        // sequence (which rounded 100000/1000 to 99 because two Newton
        // iterations leave only 24 bits of mantissa precision).
        let text = round_trip_disasm("int f(int a, int b) { return a / b; }");
        assert!(
            text.iter().any(|t| t.contains("CJUMP")),
            "got: {text:?}"
        );
        assert!(
            !text.iter().any(|t| t.contains("RECIPS")),
            "inline reciprocal should no longer appear: {text:?}"
        );
    }

    #[test]
    fn rt_unsigned_div32_calls_udiv() {
        // Unsigned 32-bit `/` should emit a CJUMP to `___udiv32` so
        // the shift-and-subtract helper is used (the test that motivated
        // this change: `100000UL / 1000 == 100`).
        let text = round_trip_disasm(
            "int f(unsigned long a, unsigned long b) { return (int)(a / b); }",
        );
        assert!(
            text.iter().any(|t| t.contains("CJUMP")),
            "got: {text:?}"
        );
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
    fn rt_four_param_from_frame() {
        // The 4th argument is passed on the stack (not in R0). The
        // callee should load it from its frame slot via DM(-N,I6).
        let src = "int f(int a, int b, int c, int d) { return (a+b)*(c+d); }";
        let text = round_trip_disasm(src);
        // Expect a frame-relative DM load (the 4th arg from the stack).
        let has_frame_load = text.iter().any(|t| {
            t.contains("DM (-0x") && t.contains(",I6)")
                && !t.contains("=R") // it's a READ, not a callee-save store
        });
        assert!(
            has_frame_load,
            "expected frame-relative load for 4th arg, got: {text:?}"
        );
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
    fn rt_lognot_preserves_pass_at_label() {
        // Regression: eliminate_copies used to fuse a `Rn = PASS Rm`
        // into the following instruction even when a label pointed at
        // the Pass. In `!a + !b` the second LNot emits a Pass that is
        // the target of the IF-EQ branch; removing it made the trailing
        // ADD read the constant-one register unconditionally and return
        // 2 instead of 1 for `a=0, b=5`. The fix must keep both Pass
        // copies of the second LNot, and the ADD must source them
        // (not the immediate-1 register directly).
        let text = round_trip_disasm(
            "int f(void) { int a = 0; int b = 5; return !a + !b; }",
        );
        // At least four `= PASS` copies survive (two per LNot, one for
        // each arm). A successful fusion would have dropped one of the
        // LNot Passes; the count may be higher because the return-value
        // setup (`R0 = PASS Rn`) and any inter-BB merge passes also
        // appear in the stream.
        let pass_count = text.iter().filter(|t| t.contains("= PASS ")).count();
        assert!(
            pass_count >= 4,
            "expected at least 4 PASS copies (2 per LNot), got {pass_count} in: {text:?}"
        );
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
            m.text.contains(".SECTION/DOUBLE32 seg_dmda;"),
            "expected data section, got:\n{}",
            m.text
        );
        // Still round-trips.
        let _ = selas::assemble_text(&m.text, None, &[], &[], false).unwrap();
    }

    #[test]
    fn rt_string_global_in_data() {
        let m = compile(r#"const char *msg = "hello"; int f() { return 0; }"#);
        // `hello` is byte-packed as four bytes per word, little-endian:
        // word 0 = "hell" = 0x6C6C6568, word 1 = 'o' + NUL padding.
        let has_packed_hell = m.text.contains("0x6C6C6568");
        assert!(
            has_packed_hell,
            "expected packed hello bytes in asm, got:\n{}",
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
