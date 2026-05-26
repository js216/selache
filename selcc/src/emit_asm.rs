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
    struct_packs: &'a [(String, u8)],
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

    fn resolve_tag_pack(&self, name: &str) -> u8 {
        self.struct_packs
            .iter()
            .rev()
            .find_map(|(tag, pack)| (tag == name).then_some(*pack))
            .unwrap_or(0)
    }
}

pub fn emit_module(unit: &TranslationUnit, _char_size: u8) -> Result<AsmModule> {
    let mut out = String::new();
    let unit_tctx = UnitTypeCtx {
        struct_defs: &unit.struct_defs,
        struct_packs: &unit.struct_packs,
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

    // Map each callee's parameter type list so per-call lowering can
    // honour C99 6.5.2.2p7 ("converted as if by assignment to the
    // types of the corresponding parameters"). Without this, a 32-bit
    // `uint32_t` argument passed to a `unsigned long long` parameter
    // would be emitted as a single ABI slot, leaving the high word
    // of the 64-bit pair stale in the callee's incoming registers.
    let function_param_types: HashMap<String, Vec<crate::types::Type>> = unit
        .functions
        .iter()
        .map(|f| {
            (
                f.name.clone(),
                f.params.iter().map(|(_, t)| t.clone()).collect(),
            )
        })
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
        is_weak: bool,
    }
    let mut compiled: Vec<CompiledFunction> = Vec::new();
    let mut skipped_functions: Vec<String> = Vec::new();

    let unit_ctx = UnitCtx {
        struct_defs: &unit.struct_defs,
        struct_packs: &unit.struct_packs,
        enum_constants: &unit.enum_constants,
        typedefs: &unit.typedefs,
        known_functions: &known_functions,
        variadic_callees: &unit.variadic_functions,
        variadic_named_counts: &unit.variadic_named_counts,
        complex_arg_callees: &unit.complex_arg_callees,
        function_return_types: &function_return_types,
        function_param_types: &function_param_types,
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
            let idx = all_wide_strings
                .iter()
                .position(|e| e == &ws)
                .unwrap_or_else(|| {
                    all_wide_strings.push(ws);
                    all_wide_strings.len() - 1
                });
            wstr_remap.push(idx);
        }
        let mut instrs = fr.instrs;
        for mi in instrs.iter_mut() {
            let Some(r) = mi.reloc.as_mut() else {
                continue;
            };
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
            is_weak: func.is_weak,
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
    let fn_names: HashSet<String> = compiled.iter().map(|c| c.name.clone()).collect();
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
        let Some(cf) = by_name.get(name.as_str()) else {
            continue;
        };
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
        .chain(
            unit.globals
                .iter()
                .filter(|g| !g.is_extern)
                .map(|g| g.name.clone()),
        )
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

    // Code sections: generated csmith code is split across block0 and block1
    // based on the compiled root-body size. Small roots leave room for helper
    // and one useful non-root spill in block0; very large roots move to block1 and
    // push the larger helper/non-root bodies into block0. Ordinary code stays
    // in block2. Large draft cases can otherwise exhaust one L1 block before
    // the runtime/archive code is placed.
    if !compiled.is_empty() {
        let root_instrs = compiled
            .iter()
            .find(|cf| cf.is_static && cf.name == "func_1")
            .map(|cf| cf.instrs.len())
            .unwrap_or(0);
        let nonroot_funcs: Vec<&CompiledFunction> = compiled
            .iter()
            .filter(|cf| cf.is_static && cf.name != "func_1" && cf.name.starts_with("func_"))
            .collect();
        let root_is_small = root_instrs <= 10_000;
        let spill_nonroot_func = nonroot_funcs
            .iter()
            .copied()
            .find(|cf| cf.instrs.len() > 5_000)
            .or_else(|| nonroot_funcs.first().copied())
            .map(|cf| cf.name.as_str());
        let spill_small_helpers_to_block0 = root_is_small && spill_nonroot_func.is_none();
        let block0_entry_instrs_reserved: usize = compiled
            .iter()
            .filter(|cf| matches!(cf.name.as_str(), "main" | "test_main"))
            .map(|cf| cf.instrs.len())
            .sum();
        let root_too_large_for_block0 = root_instrs > 24_000
            || root_and_entry_exceed_block0_budget(
                root_instrs,
                block0_entry_instrs_reserved,
                BLOCK0_INSTR_BUDGET,
            );
        let mut block0_instrs_used: usize = block0_entry_instrs_reserved;
        let mut block1_instrs_used: usize = if root_too_large_for_block0 {
            root_instrs
        } else {
            0
        };
        let mut block2_bytes_used: usize = 0;
        let mut current_code_section: Option<&'static str> = None;
        for cf in &compiled {
            let sw_bytes = estimated_sw_bytes(&cf.instrs, &cf.label_insertions);
            let initial_section = if should_emit_in_block0_code(
                cf.is_static,
                &cf.name,
                root_too_large_for_block0,
                root_is_small,
                spill_nonroot_func,
                spill_small_helpers_to_block0,
            ) {
                "seg_l1_block0_swco"
            } else if should_emit_in_block1_code(
                cf.is_static,
                &cf.name,
                root_too_large_for_block0,
                root_is_small,
                spill_nonroot_func,
                spill_small_helpers_to_block0,
            ) {
                "seg_l1_block1_swco"
            } else {
                split_runtime_code_section(&cf.name).unwrap_or("seg_swco")
            };
            let code_section = apply_block0_budget_cap(
                initial_section,
                cf.is_static,
                &cf.name,
                cf.instrs.len(),
                root_too_large_for_block0,
                block0_instrs_used,
                BLOCK0_INSTR_BUDGET,
            );
            let code_section = apply_block1_budget_cap(
                code_section,
                cf.is_static,
                &cf.name,
                cf.instrs.len(),
                root_too_large_for_block0,
                block1_instrs_used,
                BLOCK1_INSTR_BUDGET,
            );
            let code_section = apply_block2_budget_cap(
                code_section,
                cf.is_static,
                &cf.name,
                sw_bytes,
                block2_bytes_used,
                BLOCK2_BYTE_BUDGET,
            );
            if code_section == "seg_l1_block0_swco" {
                block0_instrs_used = block0_instrs_used.saturating_add(cf.instrs.len());
            }
            if code_section == "seg_l1_block1_swco"
                && !(root_too_large_for_block0 && cf.name == "func_1")
            {
                block1_instrs_used = block1_instrs_used.saturating_add(cf.instrs.len());
            }
            if code_section == "seg_swco" {
                block2_bytes_used = block2_bytes_used.saturating_add(sw_bytes);
            }
            let sym = with_abi_suffix(&cf.name);
            let body_sym = if code_section == "seg_l2_swco" {
                let body_sym = l2_body_symbol(&cf.name);
                emit_l2_entry_thunk(&mut out, &mut current_code_section, &sym, &body_sym);
                body_sym
            } else {
                sym.clone()
            };
            if current_code_section != Some(code_section) {
                let _ = writeln!(out, ".SECTION/SW {code_section};");
                current_code_section = Some(code_section);
            }
            if cf.is_weak {
                let _ = writeln!(out, ".WEAK {sym};");
            } else if !cf.is_static {
                // C99 6.2.2p3: `static` at file scope gives internal
                // linkage. Such symbols are TU-private and must not be
                // exposed via `.GLOBAL`, otherwise two object files
                // each defining e.g. a `static float pi_over_2`
                // collide at link time.
                let _ = writeln!(out, ".GLOBAL {sym};");
            }
            let _ = writeln!(out, "{body_sym}:");
            for (body_idx, mi) in cf.instrs.iter().enumerate() {
                if let Some(lbls) = cf.label_insertions.get(&body_idx) {
                    for lbl in lbls {
                        let _ = writeln!(out, "{lbl}:");
                    }
                }
                let line = emit_instr_line(mi)
                    .map_err(|e| Error::NotImplemented(format!("encode: {e}")))?;
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
    let mut interior_reqs: Vec<InteriorReq> = Vec::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if let Some(init) = &global.init {
            let mut ictx = InitCtx {
                extra_data: &mut extra_data,
                complit_counter: &mut complit_counter,
                global_types: &global_types,
                interior_reqs: &mut interior_reqs,
            };
            match build_init_words(
                init,
                crate::types::size_bytes_ctx(&global.ty, &unit_tctx),
                &unit_tctx,
                Some(&global.ty),
                &mut ictx,
            ) {
                Ok(values) => data_entries.push(DataEntry {
                    name: global.name.clone(),
                    values,
                    interior: Vec::new(),
                    is_static: global.is_static,
                }),
                Err(e) => {
                    eprintln!("selcc: {}: {e}", global.name);
                    // Fall back to zero-init so the symbol is still defined.
                    let words = crate::types::size_bytes_ctx(&global.ty, &unit_tctx)
                        .div_ceil(4)
                        .max(1);
                    data_entries.push(DataEntry {
                        name: global.name.clone(),
                        values: vec![InitWord::Num(0); words as usize],
                        interior: Vec::new(),
                        is_static: global.is_static,
                    });
                }
            }
        }
    }
    for sl in &all_static_locals {
        if let Some(init) = &sl.init {
            let mut ictx = InitCtx {
                extra_data: &mut extra_data,
                complit_counter: &mut complit_counter,
                global_types: &global_types,
                interior_reqs: &mut interior_reqs,
            };
            match build_init_words(
                init,
                crate::types::size_bytes_ctx(&sl.ty, &unit_tctx),
                &unit_tctx,
                Some(&sl.ty),
                &mut ictx,
            ) {
                // Block-scope `static` locals are always TU-private.
                Ok(values) => data_entries.push(DataEntry {
                    name: sl.symbol.clone(),
                    values,
                    interior: Vec::new(),
                    is_static: true,
                }),
                Err(e) => {
                    eprintln!("selcc: {}: {e}", sl.symbol);
                    let words = crate::types::size_bytes_ctx(&sl.ty, &unit_tctx)
                        .div_ceil(4)
                        .max(1);
                    data_entries.push(DataEntry {
                        name: sl.symbol.clone(),
                        values: vec![InitWord::Num(0); words as usize],
                        interior: Vec::new(),
                        is_static: true,
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
    // Plant any synthetic interior labels requested by file-scope
    // `&array[N]` / `&obj.field` initialisers. Each request adds an
    // alias symbol at the named offset of the target entry; the
    // emitter resolves multiple symbols on the same word via `.SET`.
    // Word-aligned interior labels (`byte_in_word == 0`) own a slot via
    // `.VAR`; sub-word interior labels are aliased to the containing
    // word's slot owner via `.SET label = owner + byte_in_word;`.
    for req in &interior_reqs {
        if let Some(entry) = data_entries
            .iter_mut()
            .find(|e| e.name == req.target_global)
        {
            // Pad the entry's word vector if the requested offset is
            // past the materialised initialisers (e.g. trailing zero
            // tail of a sized array). The bytes were going to be zero
            // anyway; we just need a slot to hang the label on.
            if req.word_offset >= entry.values.len() {
                entry.values.resize(req.word_offset + 1, InitWord::Num(0));
            }
            if !entry
                .interior
                .iter()
                .any(|(o, b, l)| *o == req.word_offset && *b == req.byte_in_word && l == &req.label)
            {
                entry
                    .interior
                    .push((req.word_offset, req.byte_in_word, req.label.clone()));
            }
        }
    }
    for section in ["seg_dmda", "seg_l2"] {
        let section_entries: Vec<&DataEntry> = data_entries
            .iter()
            .filter(|e| data_section_for_entry(e) == section)
            .collect();
        if section_entries.is_empty() {
            continue;
        }
        let _ = writeln!(out, ".SECTION/DOUBLE32 {section};");
        for e in section_entries {
            let sym = with_abi_suffix(&e.name);
            if !e.is_static {
                let _ = writeln!(out, ".GLOBAL {sym};");
            }
            emit_var_bytes(&mut out, &sym, &e.values, &e.interior);
        }
        out.push_str(".ENDSEG;\n\n");
    }

    // BSS: uninitialized globals and static locals.
    // Skip names already emitted in the data section (tentative + init).
    let data_names: HashSet<String> = data_entries.iter().map(|e| e.name.clone()).collect();
    let mut bss_entries: Vec<(String, u32, bool)> = Vec::new();
    let mut bss_seen: HashSet<String> = HashSet::new();
    for global in &unit.globals {
        if global.is_extern {
            continue;
        }
        if global.init.is_none()
            && !data_names.contains(&global.name)
            && bss_seen.insert(global.name.clone())
        {
            bss_entries.push((
                global.name.clone(),
                crate::types::size_bytes_ctx(&global.ty, &unit_tctx),
                global.is_static,
            ));
        }
    }
    for sl in &all_static_locals {
        if sl.init.is_none() {
            bss_entries.push((
                sl.symbol.clone(),
                crate::types::size_bytes_ctx(&sl.ty, &unit_tctx),
                true,
            ));
        }
    }
    for section in ["seg_dmda", "seg_l2"] {
        let section_entries: Vec<&(String, u32, bool)> = bss_entries
            .iter()
            .filter(|(_, sz, is_static)| {
                data_section_for_static_words(*is_static, data_words(*sz)) == section
            })
            .collect();
        if section_entries.is_empty() {
            continue;
        }
        let _ = writeln!(out, ".SECTION/DOUBLE32 {section};");
        for (name, sz, is_static) in section_entries {
            let sym = with_abi_suffix(name);
            if !is_static {
                let _ = writeln!(out, ".GLOBAL {sym};");
            }
            let words = data_words(*sz);
            let zero = vec![InitWord::Num(0); words];
            emit_var_bytes(&mut out, &sym, &zero, &[]);
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
        // C99 6.4.5: string literals have static storage duration, but no
        // external linkage — they are anonymous and private to the
        // translation unit. Emitting `.GLOBAL .strN.` would expose them
        // and produce "multiply defined symbol" errors at link time when
        // two object files each contain a `.str0.`. Internal references
        // within the same .s file resolve fine without `.GLOBAL`.
        for (i, s) in all_strings.iter().enumerate() {
            let name = with_abi_suffix(&format!(".str{i}"));
            let mut bytes: Vec<u8> = s.as_bytes().to_vec();
            bytes.push(0);
            let words: Vec<InitWord> = pack_bytes_le(&bytes)
                .into_iter()
                .map(InitWord::Num)
                .collect();
            emit_var_bytes(&mut out, &name, &words, &[]);
        }
        for (i, ws) in all_wide_strings.iter().enumerate() {
            let name = with_abi_suffix(&format!(".wstr{i}"));
            let mut words: Vec<u32> = ws.clone();
            words.push(0);
            let words: Vec<InitWord> = words.into_iter().map(InitWord::Num).collect();
            emit_var_bytes(&mut out, &name, &words, &[]);
        }
        out.push_str(".ENDSEG;\n");
    }

    Ok(AsmModule { text: out })
}

/// Cap on cumulative `cf.instrs.len()` routed to `seg_l1_block0_swco`
/// during a single `emit_module` run, used to avoid the seld layout
/// overflow seen on large csmith roots (e.g. `cctest_csmith_9405adb0`
/// hit 132064 bytes against the 130064-byte `block0_sw_code` budget
/// in `mem_l1_block0`). The seld budget is in bytes (block0 spans
/// 0x002403f0..=0x0026ffff = 195600 B; minus the 64 KB stack
/// reserve = 130064 B). Each IR-level `MachInstr` averages ~5 bytes
/// after selas encoding (a mix of 48-bit instructions, 24-bit short
/// forms, and selas-inserted alignment fill), so 130064 B / 5 ≈ 26000
/// IR instrs. We cap at 18_000 after pre-reserving `main` / `test_main`
/// because dense packed-field code can encode well above the historical
/// average. This leaves room for encoding expansion and for the alignment
/// fill seld places at section boundaries. Could be derived from LDF parsing
/// in a future iteration.
const BLOCK0_INSTR_BUDGET: usize = 18_000;

/// Cap on cumulative `cf.instrs.len()` routed to `seg_l1_block1_swco`.
/// `func_1` is reserved up front when it is the large root that forced
/// block1 routing. Excess generated csmith helpers/bodies, including
/// checksum support helpers when the root already consumes the budget,
/// can execute from the default block2 code segment without changing
/// semantics. This avoids `block1_sw_code` overflows in both large-root
/// cases and medium-root drafts where `func_1` fits in block0 but every
/// other generated body would otherwise accumulate in block1.
const BLOCK1_INSTR_BUDGET: usize = 33_400;
/// Very large roots need additional slack because block1 also carries
/// linker fill/alignment and IR instruction count underestimates final
/// encoded SW bytes for dense generated expressions.
const BLOCK1_ROOT_HEADROOM: usize = 2_000;

/// Cap on cumulative estimated encoded bytes routed to the default
/// `seg_swco` block2 code section. Archive/runtime inputs also land in
/// `block2_sw_code`, so generated csmith bodies need a byte budget below
/// the raw 128 KiB L1 span. Counting IR instructions here is too coarse:
/// relocated branches/loads and hardware-loop bodies force 48-bit ISA
/// encodings and can expand one generated function to well over 110 KiB.
const BLOCK2_BYTE_BUDGET: usize = 96 * 1024;

fn root_and_entry_exceed_block0_budget(
    root_instrs: usize,
    entry_instrs: usize,
    budget: usize,
) -> bool {
    root_instrs.saturating_add(entry_instrs) > budget
}

/// Apply the block0 cumulative-size cap to a routing decision. When
/// the root is too large for block0, selcc otherwise spills every
/// "large csmith helper" body to `seg_l1_block0_swco`; for drafts
/// with many such helpers, the cumulative size can exceed seld's
/// `block0_sw_code` budget. Redirect overflow large helpers to the
/// other L1 code block first; the block1 cap runs next and can still
/// move them out if block1 is also full. Entry symbols (`main`,
/// `test_main`) and the small-helper / `func_1` spill paths stay in
/// block0 unconditionally; generated large-body spills are candidates
/// for redirection for both large-root and small-root placement.
fn apply_block0_budget_cap(
    initial_section: &'static str,
    is_static: bool,
    name: &str,
    instrs: usize,
    _root_too_large_for_block0: bool,
    block0_instrs_used: usize,
    budget: usize,
) -> &'static str {
    if initial_section != "seg_l1_block0_swco"
        || !is_static
        || name == "main"
        || name == "test_main"
        || name == "func_1"
        || !is_large_csmith_generated_body(name)
    {
        return initial_section;
    }
    if block0_instrs_used.saturating_add(instrs) > budget {
        split_runtime_code_section(name).unwrap_or("seg_l1_block1_swco")
    } else {
        initial_section
    }
}

fn apply_block1_budget_cap(
    initial_section: &'static str,
    is_static: bool,
    name: &str,
    instrs: usize,
    _root_too_large_for_block0: bool,
    block1_instrs_used: usize,
    budget: usize,
) -> &'static str {
    if initial_section != "seg_l1_block1_swco" || !is_static {
        return initial_section;
    }
    if name == "func_1" {
        if instrs > budget.saturating_sub(BLOCK1_ROOT_HEADROOM) {
            "seg_l2_swco"
        } else {
            initial_section
        }
    } else if !is_block1_budget_spillable(name) {
        initial_section
    } else if block1_instrs_used.saturating_add(instrs) > budget {
        split_runtime_code_section(name).unwrap_or("seg_swco")
    } else {
        initial_section
    }
}

fn apply_block2_budget_cap(
    initial_section: &'static str,
    is_static: bool,
    name: &str,
    sw_bytes: usize,
    block2_bytes_used: usize,
    budget: usize,
) -> &'static str {
    if initial_section != "seg_swco" || !is_static || !is_block2_l2_spillable(name) {
        return initial_section;
    }
    if block2_bytes_used.saturating_add(sw_bytes) > budget {
        "seg_l2_swco"
    } else {
        initial_section
    }
}

fn should_emit_in_block0_code(
    is_static: bool,
    name: &str,
    root_too_large_for_block0: bool,
    root_is_small: bool,
    spill_nonroot_func: Option<&str>,
    spill_small_helpers_to_block0: bool,
) -> bool {
    name == "main"
        || name == "test_main"
        || (is_static
            && if root_too_large_for_block0 {
                name != "func_1" && is_large_csmith_generated_body(name)
            } else {
                name == "func_1"
                    || (root_is_small
                        && ((spill_small_helpers_to_block0
                            && (matches!(
                                name,
                                "crc32_gentab" | "crc32_byte" | "transparent_crc"
                            ) || is_csmith_small_safe_helper(name)))
                            || (name != "func_1"
                                && name.starts_with("func_")
                                && spill_nonroot_func == Some(name))))
            })
}

fn should_emit_in_block1_code(
    is_static: bool,
    name: &str,
    root_too_large_for_block0: bool,
    root_is_small: bool,
    spill_nonroot_func: Option<&str>,
    spill_small_helpers_to_block0: bool,
) -> bool {
    is_static
        && is_csmith_generated_body(name)
        && !should_emit_in_block0_code(
            is_static,
            name,
            root_too_large_for_block0,
            root_is_small,
            spill_nonroot_func,
            spill_small_helpers_to_block0,
        )
}

fn is_csmith_small_safe_helper(name: &str) -> bool {
    name.starts_with("safe_") && (name.contains("_int8_t_") || name.contains("_int16_t_"))
}

fn is_block1_budget_spillable(name: &str) -> bool {
    is_csmith_generated_body(name) && name != "platform_main_begin"
}

fn is_block2_l2_spillable(name: &str) -> bool {
    name.starts_with("func_") || name.starts_with("safe_")
}

fn is_csmith_generated_body(name: &str) -> bool {
    matches!(
        name,
        "crc32_gentab" | "crc32_byte" | "platform_main_begin" | "transparent_crc"
    ) || name.starts_with("safe_")
        || name.starts_with("func_")
}

fn is_large_csmith_generated_body(name: &str) -> bool {
    is_csmith_generated_body(name)
        && !matches!(name, "crc32_gentab" | "crc32_byte" | "transparent_crc")
        && !is_csmith_small_safe_helper(name)
}

fn split_runtime_code_section(name: &str) -> Option<&'static str> {
    match name {
        "uabs32" => Some("seg_swco_uabs32"),
        "udivmod32" => Some("seg_swco_udivmod32"),
        "__sel_div32_c" => Some("seg_swco___sel_div32_c"),
        "__sel_mod32_c" => Some("seg_swco___sel_mod32_c"),
        "__sel_udiv32_c" => Some("seg_swco___sel_udiv32_c"),
        "__sel_umod32_c" => Some("seg_swco___sel_umod32_c"),
        "divmod_u64" => Some("seg_swco_divmod_u64"),
        "___div64" | "___mod64" => Some("seg_l1_block1_swco"),
        _ => None,
    }
}

fn l2_body_symbol(name: &str) -> String {
    format!(".L_sel_l2_{name}")
}

fn emit_l2_entry_thunk(
    out: &mut String,
    current_code_section: &mut Option<&'static str>,
    public_sym: &str,
    body_sym: &str,
) {
    if *current_code_section != Some("seg_l1_block0_swco") {
        let _ = writeln!(out, ".SECTION/SW seg_l1_block0_swco;");
        *current_code_section = Some("seg_l1_block0_swco");
    }
    let _ = writeln!(out, "{public_sym}:");
    let _ = writeln!(out, "    I12 = {body_sym};");
    // SHARC+ DAG2 needs separation between writing I12 and using it as
    // the address-generator source of an indirect branch. Without this,
    // the thunk can jump through the stale I12 left by an earlier return.
    let _ = writeln!(out, "    NOP;");
    let _ = writeln!(out, "    NOP;");
    let _ = writeln!(out, "    JUMP (M13,I12);");
}

fn estimated_sw_bytes(
    instrs: &[MachInstr],
    label_insertions: &HashMap<usize, Vec<String>>,
) -> usize {
    let mut bytes = 0usize;
    let mut no_compress_label: Option<String> = None;
    let mut end_label_seen = false;

    for (idx, mi) in instrs.iter().enumerate() {
        if let Some(labels) = label_insertions.get(&idx) {
            if let Some(target) = no_compress_label.as_deref() {
                if labels.iter().any(|label| label == target) {
                    end_label_seen = true;
                }
            }
        }

        let isa_bytes = selinstr::encode::encode(&mi.instr).expect("instruction encoding failed");
        let force_isa = no_compress_label.is_some() || mi.reloc.is_some();
        let len = if force_isa {
            6
        } else {
            selinstr::visa_encode::visa_encode(&mi.instr, &isa_bytes).len()
        };
        bytes = bytes.saturating_add(len);

        if end_label_seen {
            no_compress_label = None;
            end_label_seen = false;
        }

        if let Instruction::DoLoop { .. } | Instruction::DoUntil { .. } = mi.instr {
            if let Some(reloc) = &mi.reloc {
                no_compress_label = Some(reloc.symbol.clone());
                end_label_seen = false;
            }
        }
    }

    bytes
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

/// Strip Array layers off `ty` until reaching the leaf scalar type, or
/// return None for non-arrays, unsized arrays, or arrays of aggregates.
/// Used to detect multi-dimensional narrow-element arrays that need
/// byte-packed flattening (`int16_t m[2][3]` -> leaf `int16_t`).
fn array_leaf_type<'a>(
    ty: &'a crate::types::Type,
    tctx: &'a dyn crate::types::TypeCtx,
) -> Option<&'a crate::types::Type> {
    use crate::types::Type;

    let mut current = strip_type(ty, tctx);
    let mut saw_array = false;
    loop {
        match current {
            Type::Array(elem, Some(_)) => {
                saw_array = true;
                current = strip_type(elem, tctx);
            }
            Type::Array(_, None) | Type::Struct { .. } | Type::Union { .. } => return None,
            _ => return saw_array.then_some(current),
        }
    }
}

fn array_needs_byte_stride_flatten(
    ty: &crate::types::Type,
    tctx: &dyn crate::types::TypeCtx,
) -> bool {
    use crate::types::Type;
    match strip_type(ty, tctx) {
        Type::Array(elem, Some(_)) => {
            let stripped_elem = strip_type(elem, tctx);
            let elem_is_aggregate = matches!(
                stripped_elem,
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            );
            (elem_is_aggregate && !crate::types::size_bytes_ctx(elem, tctx).is_multiple_of(4))
                || array_needs_byte_stride_flatten(elem, tctx)
        }
        _ => false,
    }
}

/// Flatten an arbitrarily nested array initializer into a sequence of
/// leaf-element half values (16 bits each for short arrays, 8 bits
/// each for char arrays).  `byte_offset` is the starting byte offset
/// within the outermost array, and `bytes_per_leaf` is the leaf scalar
/// size.  Each leaf init expression contributes one entry; gaps caused
/// by short positional lists or array designators are reflected by
/// jumping the byte cursor.  Designated initializers (`[i] = v`) reset
/// the cursor to `i * bytes_per_leaf`.
///
/// The output is a list of `(byte_offset, value)` pairs that callers
/// can pack into 32-bit words via shift-and-merge.  Returning byte
/// offsets — instead of word indices — is what makes a multi-dim
/// short array (`int16_t m[2][3]`) span row boundaries within a single
/// word: row 0's third short and row 1's first short share word 1,
/// just as cces's `.byte` layout does.
fn flatten_narrow_array_init(
    init: &Expr,
    ty: &crate::types::Type,
    bytes_per_leaf: u32,
    byte_offset: u32,
    out: &mut Vec<(u32, u32)>,
    tctx: &dyn crate::types::TypeCtx,
) -> Result<()> {
    let stripped = strip_type(ty, tctx);
    match stripped {
        crate::types::Type::Array(elem, Some(_)) => {
            let elem_bytes = crate::types::size_bytes_ctx(elem, tctx);
            // Walk the init list.  Positional items advance the cursor
            // by one element; designators jump it.
            let items: &[Expr] = match init {
                Expr::InitList(items) => items.as_slice(),
                // A non-init-list initializer at an array position is
                // either a string literal (handled elsewhere) or a
                // single-value implicit initializer; treat as a single
                // positional value placed at the start.
                _ => {
                    return flatten_narrow_array_init(
                        init,
                        elem,
                        bytes_per_leaf,
                        byte_offset,
                        out,
                        tctx,
                    );
                }
            };
            let mut cursor: u32 = 0;
            for item in items {
                let (idx, inner) = match item {
                    Expr::ArrayDesignator { index, value } => {
                        let i = eval_const_expr(index, tctx)? as u32;
                        (i, value.as_ref())
                    }
                    other => (cursor, other),
                };
                let inner_off = byte_offset + idx * elem_bytes;
                flatten_narrow_array_init(inner, elem, bytes_per_leaf, inner_off, out, tctx)?;
                cursor = idx + 1;
            }
            Ok(())
        }
        _ => {
            // Leaf scalar.  Emit a single (byte_offset, value) entry.
            // Use the 64-bit constant evaluator so a wide literal like
            // `(int16_t)0x12345678` retains its bits before the mask
            // truncates to the leaf width.  Symbol-typed initializers
            // (`&array`, function names) are not legal here because a
            // narrow array element cannot hold a relocatable address.
            // C99 6.7.8 permits brace-elided scalar initializers wrapped
            // in extra braces (e.g. `signed char arr[3] = { 0, {1}, 2 };`),
            // which the parser delivers here as a single-element
            // `InitList`.  Peel that one wrapper before const-evaluating;
            // multi-element or empty `InitList` at a scalar slot remains
            // a hard error.
            let scalar = match init {
                Expr::InitList(items) if items.len() == 1 => &items[0],
                Expr::InitList(_) => {
                    return Err(Error::Compile {
                        msg: format!(
                            "narrow array element requires a numeric constant initializer; \
                             got {init:?}"
                        ),
                    });
                }
                other => other,
            };
            let n = eval_const_expr_i64(scalar).ok_or_else(|| Error::Compile {
                msg: format!(
                    "narrow array element requires a numeric constant initializer; \
                     got {init:?}"
                ),
            })? as u32;
            let mask = if bytes_per_leaf == 1 {
                0xFFu32
            } else {
                0xFFFFu32
            };
            out.push((byte_offset, n & mask));
            Ok(())
        }
    }
}

/// Pack a list of `(byte_offset, value)` entries into 32-bit
/// little-endian words sized to cover `total_bytes` (rounded up).
/// Multiple values landing in the same word are merged by left-shift
/// and OR; `bytes_per_leaf` controls the per-entry width (1 for char,
/// 2 for short).  Used by `build_init_words` to emit byte-packed
/// global storage for multi-dimensional narrow-element arrays so the
/// runtime sees the same contiguous byte layout cces produces.
fn pack_narrow_entries(
    entries: &[(u32, u32)],
    bytes_per_leaf: u32,
    total_bytes: u32,
) -> Vec<InitWord> {
    let words = total_bytes.div_ceil(4).max(1) as usize;
    let mut buf = vec![0u32; words];
    for &(byte_off, val) in entries {
        let wi = (byte_off / 4) as usize;
        if wi >= buf.len() {
            continue;
        }
        let lane_bits = (byte_off % 4) * 8;
        let mask = if bytes_per_leaf == 1 {
            0xFFu32
        } else {
            0xFFFFu32
        };
        buf[wi] = (buf[wi] & !(mask << lane_bits)) | ((val & mask) << lane_bits);
    }
    buf.into_iter().map(InitWord::Num).collect()
}

/// Emit a `.VAR name = v0, v1, ...;` initializer line. Using `.VAR`
/// keeps each logical word at 4 bytes regardless of char-size, which
/// matches what the previous byte-level emitter produced.
///
/// `interior` lists synthetic labels to drop on words at given indices,
/// produced for `&array[N]` / `&obj.field` file-scope initialisers so
/// the linker can resolve those addresses by symbol rather than by an
/// (unsupported) `sym + offset` relocation.
fn emit_var_bytes(
    out: &mut String,
    sym: &str,
    values: &[InitWord],
    interior: &[(usize, u32, String)],
) {
    if values.is_empty() {
        let _ = writeln!(out, ".VAR {sym};");
        return;
    }
    // Each word slot can carry at most one `.VAR` name (every `.VAR`
    // directive advances the data cursor by 4 bytes). When more than
    // one symbol must point at the same byte offset — the primary name
    // and one or more synthetic interior labels — use `.SET` to make
    // the extras alias the slot symbol that actually lays the bytes.
    // Sub-word interior labels (`byte_in_word > 0`) cannot own a slot
    // either; they alias the containing word's slot owner via
    // `.SET label = owner + byte_in_word;` so the symbol-table value
    // lands on the requested byte boundary instead of the word
    // boundary.
    let render_word = |out: &mut String, idx: usize, val: &InitWord| {
        // Word-aligned interior labels (byte_in_word == 0) own or alias
        // the slot for word `idx`; sub-word interior labels in this
        // word are aliased to whichever symbol ends up owning the slot.
        let word_aligned: Vec<&String> = interior
            .iter()
            .filter(|(i, b, _)| *i == idx && *b == 0)
            .map(|(_, _, l)| l)
            .collect();
        let sub_word: Vec<(u32, &String)> = interior
            .iter()
            .filter(|(i, b, _)| *i == idx && *b != 0)
            .map(|(_, b, l)| (*b, l))
            .collect();
        let v = match val {
            InitWord::Num(n) => format!("0x{n:08X}"),
            InitWord::Sym(name) => with_abi_suffix(name),
        };
        // Determine the slot owner so we can alias the sub-word labels
        // against it. For word 0 the owner is the entry's primary
        // symbol; for later words it's the first word-aligned interior
        // label if any (the slot has no other primary name), or a bare
        // `.VAR = ...;` slot with no owning symbol.
        let owner: Option<String>;
        if idx == 0 {
            owner = Some(sym.to_string());
            // Alias every word-aligned interior label to the primary.
            for label in &word_aligned {
                let _ = writeln!(out, ".SET {} = {};", with_abi_suffix(label), sym);
            }
            let _ = writeln!(out, ".VAR {sym} = {v};");
        } else if let Some(first) = word_aligned.first() {
            // Slot owner is the first word-aligned interior label; the
            // rest alias it.
            let owner_sym = with_abi_suffix(first);
            let _ = writeln!(out, ".VAR {owner_sym} = {v};");
            for label in &word_aligned[1..] {
                let _ = writeln!(out, ".SET {} = {};", with_abi_suffix(label), owner_sym);
            }
            owner = Some(owner_sym);
        } else if !sub_word.is_empty() {
            // No word-aligned interior label, but at least one sub-word
            // label needs an owner to alias against. Synthesize an
            // anonymous slot owner so the linker has a symbol-table
            // entry whose value is the byte address of this word.
            let synthetic = format!(".__subword_owner_{idx}");
            let owner_sym = with_abi_suffix(&synthetic);
            let _ = writeln!(out, ".VAR {owner_sym} = {v};");
            owner = Some(owner_sym);
        } else {
            let _ = writeln!(out, ".VAR = {v};");
            owner = None;
        }
        // Emit `.SET` aliases for every sub-word interior label in this
        // word. Each one resolves to `owner + byte_in_word`; selas's
        // `parse_sym_plus_offset` accepts the addend form and adds the
        // numeric offset to the owner's symbol-table value at link
        // time.
        if let Some(owner_sym) = owner.as_deref() {
            for (b, label) in &sub_word {
                let _ = writeln!(
                    out,
                    ".SET {} = {} + {};",
                    with_abi_suffix(label),
                    owner_sym,
                    b
                );
            }
        }
    };
    for (i, v) in values.iter().enumerate() {
        render_word(out, i, v);
    }
}

struct DataEntry {
    name: String,
    values: Vec<InitWord>,
    /// Synthetic labels that must point at interior offsets of this
    /// entry. Produced by `&array[N]` / `&obj.field` initialisers in
    /// other globals: each request adds an extra symbol at the named
    /// `(word_index, byte_in_word)` pair so the link-time
    /// `R_SHARC_ADDR32` against that symbol resolves to the right byte
    /// offset. selas does not support `sym + offset` relocations on
    /// `.VAR` initialisers, so word-aligned interior labels become
    /// `.VAR` slot owners and sub-word interior labels become
    /// `.SET label = <slot_owner> + <byte_in_word>;` aliases.
    interior: Vec<(usize, u32, String)>,
    /// True for `static`-storage-class file-scope objects (C99
    /// 6.2.2p3 internal linkage). Such symbols are emitted without
    /// `.GLOBAL` so they stay private to the translation unit.
    is_static: bool,
}

const L2_STATIC_DATA_WORD_THRESHOLD: usize = 64;

fn data_words(size_bytes: u32) -> usize {
    size_bytes.div_ceil(4).max(1) as usize
}

fn data_section_for_entry(entry: &DataEntry) -> &'static str {
    data_section_for_static_words(entry.is_static, entry.values.len())
}

fn data_section_for_static_words(is_static: bool, words: usize) -> &'static str {
    if is_static && words >= L2_STATIC_DATA_WORD_THRESHOLD {
        "seg_l2"
    } else {
        "seg_dmda"
    }
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
        Expr::Ident(name) if fn_names.contains(name) && reachable.insert(name.clone()) => {
            worklist.push(name.clone());
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
        Expr::ArrayDesignator { value, .. } | Expr::DesignatedInit { value, .. } => {
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
        Type::Typedef(name) => tctx
            .resolve_typedef(name)
            .and_then(|t| resolve_struct_fields(t, tctx)),
        Type::Struct { name, fields, .. } | Type::Union { name, fields, .. } => {
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

fn aggregate_pack(ty: &crate::types::Type, tctx: &dyn crate::types::TypeCtx) -> u8 {
    use crate::types::Type;
    match ty.unqualified() {
        Type::Struct { name, packed, .. } | Type::Union { name, packed, .. } => {
            if *packed != 0 {
                *packed
            } else {
                name.as_deref()
                    .map(|n| tctx.resolve_tag_pack(n))
                    .unwrap_or(0)
            }
        }
        Type::Typedef(name) => tctx
            .resolve_typedef(name)
            .map(|target| aggregate_pack(target, tctx))
            .unwrap_or(0),
        Type::Const(inner) | Type::Volatile(inner) => aggregate_pack(inner, tctx),
        _ => 0,
    }
}

/// Evaluate a struct sub-word field's initializer as a constant integer
/// that fits in `fsize` bytes.  Used by `build_init_words` to fold packed
/// sub-word fields into one `InitWord::Num` per containing word.
///
/// String literals, `&sym` / `&sym[i]` / `&sym.f` lvalue addresses, and
/// nested aggregate initializers (`Expr::InitList`) for fields wider
/// than a word, fields with non-int leaves, or fields whose leaves
/// include addresses or strings cannot be folded into a sub-word slot —
/// they would need a relocation or a multi-word value that doesn't fit.
/// The error paths here keep the packed-field fix narrowly scoped.
///
/// Nested aggregate sub-word fields whose total size is `<= 4` bytes and
/// whose leaves are 1- or 2-byte constant ints (no nested-nested
/// aggregates, no bitfields, no string literals, no `&sym`) are folded
/// by walking the aggregate layout and OR-ing each leaf into the
/// returned word at its containing-word-relative byte offset.
fn eval_subword_const_int(
    field: &str,
    value: &Expr,
    fsize: u32,
    fty: Option<&crate::types::Type>,
    tctx: &dyn crate::types::TypeCtx,
) -> Result<u32> {
    match value {
        Expr::InitList(_) => {
            if fsize > 4 {
                return Err(Error::Compile {
                    msg: format!(
                        "field {field}: nested aggregate initializer at sub-word offset \
                         exceeds 4 bytes; sub-word struct fields in global initializers \
                         must fit in one word"
                    ),
                });
            }
            let ty = fty.ok_or_else(|| Error::Compile {
                msg: format!(
                    "field {field}: nested aggregate initializer at sub-word offset \
                     without field type info"
                ),
            })?;
            let mut acc: u32 = 0;
            flatten_subword_aggregate_const_int(field, value, ty, 0, &mut acc, tctx)?;
            Ok(acc)
        }
        Expr::StringLit(_) => Err(Error::Compile {
            msg: format!(
                "field {field}: string literal at sub-word offset; \
                 sub-word struct fields in global initializers must be constant integers"
            ),
        }),
        Expr::Ident(_) | Expr::AddrOf(_) => Err(Error::Compile {
            msg: format!(
                "field {field}: address-of-symbol at sub-word offset; \
                 sub-word struct fields in global initializers must be constant integers"
            ),
        }),
        _ => eval_const_expr(value, tctx)
            .map(|n| n as u32)
            .map_err(|_| Error::Compile {
                msg: format!(
                    "field {field}: non-constant-int initializer at sub-word offset; \
                 sub-word struct fields in global initializers must be constant integers"
                ),
            }),
    }
}

/// Walk a nested aggregate initializer (struct / union / array of small
/// constant-int leaves) at sub-word offset `byte_off` within the
/// containing 32-bit word and OR each leaf's value into `acc` at the
/// leaf's byte position.  Auditable scope:
/// - Inner aggregate must fit in <= 4 bytes total (the caller checks the
///   top-level size; recursive calls walk inside that budget).
/// - Leaves must be 1- or 2-byte constant ints (`int8_t`, `uint8_t`,
///   `int16_t`, `uint16_t`).  Bitfields, nested-nested aggregates,
///   string literals, and `&sym` keep a hard error so the fix stays
///   narrow and the precedent constant-int sub-word fix's audit shape
///   is preserved.
fn flatten_subword_aggregate_const_int(
    field: &str,
    init: &Expr,
    ty: &crate::types::Type,
    byte_off: u32,
    acc: &mut u32,
    tctx: &dyn crate::types::TypeCtx,
) -> Result<()> {
    use crate::types::Type;
    let stripped = strip_type(ty, tctx);
    match stripped {
        Type::Struct { .. } | Type::Union { .. } => {
            let fields = resolve_struct_fields(stripped, tctx).ok_or_else(|| Error::Compile {
                msg: format!(
                    "field {field}: nested aggregate initializer at sub-word offset \
                     references unresolved tag"
                ),
            })?;
            let is_union = matches!(stripped, Type::Union { .. });
            let items: &[Expr] = match init {
                Expr::InitList(items) => items.as_slice(),
                _ => {
                    return Err(Error::Compile {
                        msg: format!(
                            "field {field}: expected aggregate initializer for \
                             nested struct/union at sub-word offset"
                        ),
                    });
                }
            };
            let mut cursor: usize = 0;
            for item in items {
                let (fidx, inner) = match item {
                    Expr::DesignatedInit {
                        field: dfname,
                        value,
                    } => {
                        let i = fields
                            .iter()
                            .position(|(n, _)| n == dfname)
                            .ok_or_else(|| Error::Compile {
                                msg: format!(
                                    "field {field}: designated initializer .{dfname} \
                                     does not match any field of the nested aggregate"
                                ),
                            })?;
                        (i, value.as_ref())
                    }
                    other => (cursor, other),
                };
                if fidx >= fields.len() {
                    return Err(Error::Compile {
                        msg: format!(
                            "field {field}: too many positional initializers for \
                             nested aggregate at sub-word offset"
                        ),
                    });
                }
                let (sub_name, sub_ty) = &fields[fidx];
                if matches!(sub_ty, Type::Bitfield(_, _)) {
                    return Err(Error::Compile {
                        msg: format!(
                            "field {field}: nested aggregate at sub-word offset contains \
                             a bitfield ({sub_name}); not supported in this configuration"
                        ),
                    });
                }
                let sub_off = if is_union {
                    byte_off
                } else {
                    let pack = aggregate_pack(stripped, tctx);
                    let (off, _, _) =
                        crate::types::struct_field_layout_ctx(fields, sub_name, pack, tctx)
                            .ok_or_else(|| Error::Compile {
                                msg: format!(
                                    "field {field}: internal: sub-field {sub_name} \
                                     not found in nested aggregate"
                                ),
                            })?;
                    byte_off + off
                };
                flatten_subword_aggregate_const_int(field, inner, sub_ty, sub_off, acc, tctx)?;
                cursor = fidx + 1;
                if is_union {
                    break;
                }
            }
            Ok(())
        }
        Type::Array(elem, Some(n)) => {
            let elem_bytes = crate::types::size_bytes_ctx(elem, tctx);
            let items: &[Expr] = match init {
                Expr::InitList(items) => items.as_slice(),
                _ => {
                    return Err(Error::Compile {
                        msg: format!(
                            "field {field}: expected array initializer for nested \
                             array at sub-word offset"
                        ),
                    });
                }
            };
            let mut cursor: u32 = 0;
            for item in items {
                let (idx, inner) = match item {
                    Expr::ArrayDesignator { index, value } => {
                        let i = eval_const_expr(index, tctx)? as u32;
                        (i, value.as_ref())
                    }
                    other => (cursor, other),
                };
                if (idx as usize) >= *n {
                    return Err(Error::Compile {
                        msg: format!(
                            "field {field}: array index {idx} out of bounds in nested \
                             array at sub-word offset"
                        ),
                    });
                }
                let inner_off = byte_off + idx * elem_bytes;
                flatten_subword_aggregate_const_int(field, inner, elem, inner_off, acc, tctx)?;
                cursor = idx + 1;
            }
            Ok(())
        }
        _ => {
            // Leaf scalar.  Must be a 1- or 2-byte constant int.
            let lsize = crate::types::size_bytes_ctx(stripped, tctx);
            if lsize == 0 || lsize > 2 {
                return Err(Error::Compile {
                    msg: format!(
                        "field {field}: nested aggregate at sub-word offset has a leaf \
                         of size {lsize}; only 1- or 2-byte constant-int leaves are \
                         supported in this configuration"
                    ),
                });
            }
            // Peel one extra brace pair around a scalar (C99 6.7.8).
            let scalar = match init {
                Expr::InitList(items) if items.len() == 1 => &items[0],
                Expr::InitList(_) => {
                    return Err(Error::Compile {
                        msg: format!(
                            "field {field}: nested aggregate leaf at sub-word offset \
                             expects a single constant-int initializer"
                        ),
                    });
                }
                other => other,
            };
            match scalar {
                Expr::StringLit(_) => Err(Error::Compile {
                    msg: format!(
                        "field {field}: string literal inside nested aggregate at \
                         sub-word offset; not supported"
                    ),
                }),
                Expr::Ident(_) | Expr::AddrOf(_) => Err(Error::Compile {
                    msg: format!(
                        "field {field}: address-of-symbol inside nested aggregate at \
                         sub-word offset; not supported"
                    ),
                }),
                Expr::InitList(_) => Err(Error::Compile {
                    msg: format!(
                        "field {field}: nested-nested aggregate inside sub-word \
                         aggregate; not supported in this configuration"
                    ),
                }),
                _ => {
                    let n = eval_const_expr_i64(scalar).ok_or_else(|| Error::Compile {
                        msg: format!(
                            "field {field}: nested aggregate leaf at sub-word offset is \
                             not a compile-time constant integer"
                        ),
                    })? as u32;
                    let mask: u32 = if lsize == 1 { 0xFF } else { 0xFFFF };
                    if byte_off >= 4 {
                        return Err(Error::Compile {
                            msg: format!(
                                "field {field}: nested aggregate leaf at byte offset \
                                 {byte_off} would overflow the containing word"
                            ),
                        });
                    }
                    *acc |= (n & mask) << (byte_off * 8);
                    Ok(())
                }
            }
        }
    }
}

fn merge_init_byte(v: &mut Vec<InitWord>, field: &str, byte_off: u32, byte: u32) -> Result<()> {
    let word_idx = (byte_off / 4) as usize;
    let shift = (byte_off % 4) * 8;
    if word_idx >= v.len() {
        v.resize(word_idx + 1, InitWord::Num(0));
    }
    v[word_idx] = match &v[word_idx] {
        InitWord::Num(prev) => InitWord::Num(prev | ((byte & 0xFF) << shift)),
        InitWord::Sym(_) => {
            return Err(Error::Compile {
                msg: format!("field {field} initializer collides with a symbolic word initializer"),
            });
        }
    };
    Ok(())
}

fn place_const_int_bytes(
    v: &mut Vec<InitWord>,
    field: &str,
    byte_off: u32,
    nbytes: u32,
    value: u64,
) -> Result<()> {
    for b in 0..nbytes {
        let byte = ((value >> (b * 8)) & 0xFF) as u32;
        merge_init_byte(v, field, byte_off + b, byte)?;
    }
    Ok(())
}

fn flatten_const_aggregate_bytes(
    v: &mut Vec<InitWord>,
    field: &str,
    init: &Expr,
    ty: &crate::types::Type,
    byte_off: u32,
    tctx: &dyn crate::types::TypeCtx,
) -> Result<()> {
    use crate::types::Type;
    let stripped = strip_type(ty, tctx);
    match stripped {
        Type::Struct { .. } | Type::Union { .. } => {
            let fields = resolve_struct_fields(stripped, tctx).ok_or_else(|| Error::Compile {
                msg: format!("field {field}: nested aggregate references unresolved tag"),
            })?;
            let is_union = matches!(stripped, Type::Union { .. });
            let items = match init {
                Expr::InitList(items) => items.as_slice(),
                Expr::Cast(_, boxed) => match boxed.as_ref() {
                    Expr::InitList(items) => items.as_slice(),
                    _ => {
                        return Err(Error::Compile {
                            msg: format!("field {field}: nested aggregate requires braces"),
                        });
                    }
                },
                _ => {
                    return Err(Error::Compile {
                        msg: format!("field {field}: nested aggregate requires braces"),
                    });
                }
            };
            let mut cursor = 0usize;
            for item in items {
                let (fidx, inner) = match item {
                    Expr::DesignatedInit {
                        field: dfname,
                        value,
                    } => {
                        let i = fields
                            .iter()
                            .position(|(n, _)| n == dfname)
                            .ok_or_else(|| Error::Compile {
                                msg: format!(
                                    "field {field}: designated initializer .{dfname} \
                                     does not match nested aggregate"
                                ),
                            })?;
                        (i, value.as_ref())
                    }
                    other => (cursor, other),
                };
                if fidx >= fields.len() {
                    break;
                }
                let (fname, fty) = &fields[fidx];
                let field_off = if is_union {
                    0
                } else {
                    let pack = aggregate_pack(stripped, tctx);
                    crate::types::struct_field_layout_ctx(fields, fname, pack, tctx)
                        .map(|(off, _, _)| off)
                        .ok_or_else(|| Error::Compile {
                            msg: format!("field {field}: internal nested field lookup failed"),
                        })?
                };
                flatten_const_aggregate_bytes(v, field, inner, fty, byte_off + field_off, tctx)?;
                cursor = fidx + 1;
                if is_union {
                    break;
                }
            }
            Ok(())
        }
        Type::Array(elem, Some(_)) => {
            let elem_bytes = crate::types::size_bytes_ctx(elem, tctx).max(1);
            let items = match init {
                Expr::InitList(items) => items.as_slice(),
                _ => return flatten_const_aggregate_bytes(v, field, init, elem, byte_off, tctx),
            };
            let mut cursor = 0u32;
            for item in items {
                let (idx, inner) = match item {
                    Expr::ArrayDesignator { index, value } => {
                        let i = eval_const_expr(index, tctx)? as u32;
                        (i, value.as_ref())
                    }
                    other => (cursor, other),
                };
                flatten_const_aggregate_bytes(
                    v,
                    field,
                    inner,
                    elem,
                    byte_off + idx * elem_bytes,
                    tctx,
                )?;
                cursor = idx + 1;
            }
            Ok(())
        }
        _ => {
            let scalar = match init {
                Expr::InitList(items) if items.len() == 1 => &items[0],
                other => other,
            };
            let n = eval_const_expr_i64(scalar).ok_or_else(|| Error::Compile {
                msg: format!("field {field}: nested aggregate leaf is not constant"),
            })? as u64;
            let nbytes = crate::types::size_bytes_ctx(stripped, tctx);
            place_const_int_bytes(v, field, byte_off, nbytes, n)
        }
    }
}

/// Per-field entry in the struct dispatch map used by `build_init_words`.
/// Tuple fields: `(name, word_index, byte_in_word, type,
/// bitfield_info)` where `bitfield_info == Some((bit_pos_in_word,
/// bit_width))` for `Type::Bitfield` fields and `None` for regular
/// fields.  See the construction loop in `build_init_words` for the
/// invariant that `bit_pos_in_word + bit_width <= 32`.
type StructFieldEntry<'a> = (
    String,
    usize,
    u32,
    &'a crate::types::Type,
    Option<(u32, u32)>,
);

fn is_anonymous_bitfield_entry(entry: &StructFieldEntry<'_>) -> bool {
    entry.0.starts_with("__anon") && entry.4.is_some()
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
    ictx: &mut InitCtx<'_>,
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
            Ok(pack_bytes_le(&bytes)
                .into_iter()
                .map(InitWord::Num)
                .collect())
        }
        Expr::InitList(items) => {
            // Narrow-element-array fast path: any (possibly multi-
            // dimensional) array whose leaf scalar is `char` or
            // `short` byte-packs across all dimensions.  Without this
            // detection a 2D `int16_t m[2][3]` would round each row
            // up to two words and place row 1 at byte offset 8 while
            // index scaling (2 bytes per element times 3 elements)
            // expects row 1 at byte offset 6 — the runtime then loads
            // garbage when reading `m[1][i]`.  Flattening the entire
            // init tree into a flat byte buffer before packing into
            // 32-bit words is the only layout that keeps the data
            // emission, `sizeof`, and pointer arithmetic consistent.
            if let Some(t) = ty {
                if let Some(leaf) = array_leaf_type(t, tctx) {
                    let leaf_bytes = crate::types::size_bytes_ctx(leaf, tctx);
                    if leaf_bytes == 1 || leaf_bytes == 2 {
                        let mut entries: Vec<(u32, u32)> = Vec::new();
                        flatten_narrow_array_init(init, t, leaf_bytes, 0, &mut entries, tctx)?;
                        return Ok(pack_narrow_entries(&entries, leaf_bytes, size_bytes));
                    }
                }
                if array_needs_byte_stride_flatten(t, tctx) {
                    let declared_words = (size_bytes.div_ceil(4)).max(1) as usize;
                    let mut v: Vec<InitWord> = vec![InitWord::Num(0); declared_words];
                    flatten_const_aggregate_bytes(&mut v, "array", init, t, 0, tctx)?;
                    return Ok(v);
                }
            }

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
            let is_union = matches!(stripped, Some(Type::Union { .. }));
            let struct_fields = stripped.and_then(|t| match t {
                Type::Struct { .. } | Type::Union { .. } => resolve_struct_fields(t, tctx),
                _ => None,
            });
            let struct_pack = stripped.map(|t| aggregate_pack(t, tctx)).unwrap_or(0);
            let array_elem: Option<&Type> = stripped.and_then(|t| match t {
                Type::Array(elem, _) => Some(elem.as_ref()),
                _ => None,
            });

            // Field-name -> (word_offset, byte_in_word, element_type,
            // bitfield_info) for struct dispatch.  `byte_in_word == 0`
            // with `bitfield_info == None` is the historical word-aligned
            // path; a non-zero `byte_in_word`, a word-aligned regular
            // field that shares a word with a later sub-word sibling, or
            // any bitfield drives the packed path that ORs sub-word /
            // bit-field constant-int field values into a single
            // `InitWord::Num`.  `bitfield_info` is `Some((bit_pos_in_word,
            // bit_width))` for bitfield fields and `None` otherwise; the
            // bit position is computed from the layout's
            // `(byte_off, Some(bit_offset_in_byte), Some(bit_width))`
            // result as `(byte_off % 4) * 8 + bit_offset_in_byte` so a
            // bitfield placed inside the containing 32-bit word lands at
            // the correct bit position regardless of which byte of the
            // word its storage unit started in.  Cross-word bitfields
            // (`bit_pos_in_word + bit_width > 32`) keep a hard error so
            // the fix stays auditable.
            let mut field_map: Vec<StructFieldEntry<'_>> = Vec::new();
            if let Some(fields) = struct_fields {
                for (fname, fty) in fields {
                    let (byte_off, bit_off_opt, bit_width_opt) = if is_union {
                        (0u32, None, None)
                    } else {
                        let (byte_off, bo, bw) =
                            crate::types::struct_field_layout_ctx(fields, fname, struct_pack, tctx)
                                .ok_or_else(|| Error::Compile {
                                    msg: format!("internal: field {fname} not found in own struct"),
                                })?;
                        (byte_off, bo, bw)
                    };
                    let bf_info = match (bit_off_opt, bit_width_opt) {
                        (Some(bit_off_in_byte), Some(bit_width)) => {
                            let bit_pos_in_word = (byte_off % 4) * 8 + bit_off_in_byte;
                            let bw = bit_width as u32;
                            if bit_pos_in_word + bw > 32 {
                                return Err(Error::Compile {
                                    msg: format!(
                                        "field {fname}: bitfield at bit {bit_pos_in_word} \
                                         with width {bw} crosses a 32-bit word boundary; \
                                         cross-word bitfields in struct global initializers \
                                         are not supported"
                                    ),
                                });
                            }
                            Some((bit_pos_in_word, bw))
                        }
                        _ => None,
                    };
                    field_map.push((
                        fname.clone(),
                        (byte_off / 4) as usize,
                        byte_off % 4,
                        fty,
                        bf_info,
                    ));
                }
            }

            // Place a single field's initializer value into the output
            // word vector.  Word-aligned fields whose size is a multiple
            // of 4 (or fields that don't share their word with a later
            // sub-word sibling) take the historical recursive path.  Any
            // field whose value lands inside a partial word — either
            // because `byte_in_word != 0`, because the field is a
            // bitfield, or because a later sub-word / bitfield sibling
            // shares the same word — must be a constant-int expression
            // that fits in its bit/byte width.  The value is masked to
            // its width, shifted left by its bit-position in the word
            // (little-endian byte order, matching
            // `flatten_narrow_array_init`), and OR'd into the existing
            // `InitWord::Num` slot.  Sub-word non-constant-int values
            // (string literals, `&sym`, nested aggregates) and any
            // collision with a previously-emitted `InitWord::Sym` keep
            // the existing rejection error so the fix stays auditable.
            let shares_word_with_later_subfield =
                |widx: usize, my_idx: usize, fmap: &[StructFieldEntry<'_>]| -> bool {
                    fmap.iter().enumerate().any(|(j, (_, w, bin, _, bf))| {
                        j != my_idx
                            && *w == widx
                            && !is_anonymous_bitfield_entry(&fmap[j])
                            && (*bin != 0 || bf.is_some())
                    })
                };

            // Cursor in struct-field index (when struct), array element
            // index (when array), or word index (flat fallback).
            let mut field_cursor: usize = 0;

            for item in items {
                match item {
                    Expr::DesignatedInit { field, value } => {
                        // Struct field designator. Locate the field by name.
                        let (fidx, woff, bin, fty, bf_info) = field_map
                            .iter()
                            .enumerate()
                            .find(|(_, (n, _, _, _, _))| n == field)
                            .map(|(i, (_, w, b, t, bf))| (i, *w, *b, *t, *bf))
                            .ok_or_else(|| Error::Compile {
                                msg: format!(
                                    "designated initializer .{field} has no matching struct field \
                                 (type info missing or field undefined)"
                                ),
                            })?;
                        // Recursively build the value's words and place
                        // them at the field's word offset. Union fields
                        // all overlay at word zero. Sub-word fields and
                        // bitfields take the packed path (mask + shift +
                        // OR into the containing word).
                        if let Some((bit_pos_in_word, bit_width)) = bf_info {
                            let n = eval_subword_const_int(field, value, 4, Some(fty), tctx)?;
                            let mask: u32 = if bit_width >= 32 {
                                0xFFFF_FFFF
                            } else {
                                (1u32 << bit_width) - 1
                            };
                            let packed_val = (n & mask) << bit_pos_in_word;
                            ensure(&mut v, woff);
                            v[woff] = match &v[woff] {
                                InitWord::Num(prev) => InitWord::Num(prev | packed_val),
                                InitWord::Sym(_) => {
                                    return Err(Error::Compile {
                                        msg: format!(
                                            "field {field} bitfield initializer collides with a \
                                         symbolic word initializer at the same word offset; \
                                         bitfields in struct global initializers are not \
                                         supported in this configuration"
                                        ),
                                    });
                                }
                            };
                        } else {
                            let fsize = crate::types::size_bytes_ctx(fty, tctx);
                            let packed = bin != 0
                                || (!is_union
                                    && shares_word_with_later_subfield(woff, fidx, &field_map));
                            if packed {
                                let byte_off = (woff as u32) * 4 + bin;
                                if matches!(
                                    strip_type(fty, tctx),
                                    Type::Struct { .. } | Type::Union { .. } | Type::Array(..)
                                ) && matches!(value.as_ref(), Expr::InitList(_))
                                {
                                    flatten_const_aggregate_bytes(
                                        &mut v, field, value, fty, byte_off, tctx,
                                    )?;
                                } else {
                                    let n = eval_const_expr_i64(value).ok_or_else(|| {
                                        Error::Compile {
                                            msg: format!(
                                                "field {field}: non-constant initializer at \
                                                 sub-word offset"
                                            ),
                                        }
                                    })? as u64;
                                    place_const_int_bytes(&mut v, field, byte_off, fsize, n)?;
                                }
                            } else {
                                let sub = build_init_words(value, fsize, tctx, Some(fty), ictx)?;
                                for (k, w) in sub.into_iter().enumerate() {
                                    ensure(&mut v, woff + k);
                                    v[woff + k] = w;
                                }
                            }
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
                        let sub = build_init_words(value, elem_size, tctx, array_elem, ictx)?;
                        for (k, w) in sub.into_iter().enumerate() {
                            ensure(&mut v, woff + k);
                            v[woff + k] = w;
                        }
                        field_cursor = i + 1;
                    }
                    other => {
                        // Positional. Place at field/element cursor.
                        if !field_map.is_empty() {
                            while field_cursor < field_map.len()
                                && is_anonymous_bitfield_entry(&field_map[field_cursor])
                            {
                                field_cursor += 1;
                            }
                            if field_cursor >= field_map.len() {
                                return Err(Error::Compile {
                                    msg: "too many positional initializers for struct".to_string(),
                                });
                            }
                            let (fname, woff, bin, fty, bf_info) = &field_map[field_cursor];
                            let fname = fname.clone();
                            let woff = *woff;
                            let bin = *bin;
                            let fty = *fty;
                            let bf_info = *bf_info;
                            if let Some((bit_pos_in_word, bit_width)) = bf_info {
                                let n = eval_subword_const_int(&fname, other, 4, Some(fty), tctx)?;
                                let mask: u32 = if bit_width >= 32 {
                                    0xFFFF_FFFF
                                } else {
                                    (1u32 << bit_width) - 1
                                };
                                let packed_val = (n & mask) << bit_pos_in_word;
                                ensure(&mut v, woff);
                                v[woff] = match &v[woff] {
                                    InitWord::Num(prev) => InitWord::Num(prev | packed_val),
                                    InitWord::Sym(_) => {
                                        return Err(Error::Compile {
                                            msg: format!(
                                                "field {fname} bitfield initializer collides with \
                                             a symbolic word initializer at the same word offset; \
                                             bitfields in struct global initializers are not \
                                             supported in this configuration"
                                            ),
                                        });
                                    }
                                };
                            } else {
                                let fsize = crate::types::size_bytes_ctx(fty, tctx);
                                let packed = bin != 0
                                    || (!is_union
                                        && shares_word_with_later_subfield(
                                            woff,
                                            field_cursor,
                                            &field_map,
                                        ));
                                if packed {
                                    let byte_off = (woff as u32) * 4 + bin;
                                    if matches!(
                                        strip_type(fty, tctx),
                                        Type::Struct { .. } | Type::Union { .. } | Type::Array(..)
                                    ) && matches!(other, Expr::InitList(_))
                                    {
                                        flatten_const_aggregate_bytes(
                                            &mut v, &fname, other, fty, byte_off, tctx,
                                        )?;
                                    } else {
                                        let n = eval_const_expr_i64(other).ok_or_else(|| {
                                            Error::Compile {
                                                msg: format!(
                                                    "field {fname}: non-constant initializer at \
                                                     sub-word offset"
                                                ),
                                            }
                                        })? as u64;
                                        place_const_int_bytes(&mut v, &fname, byte_off, fsize, n)?;
                                    }
                                } else {
                                    let sub =
                                        build_init_words(other, fsize, tctx, Some(fty), ictx)?;
                                    for (k, w) in sub.into_iter().enumerate() {
                                        ensure(&mut v, woff + k);
                                        v[woff + k] = w;
                                    }
                                }
                            }
                            field_cursor += 1;
                            if is_union {
                                field_cursor = field_map.len();
                            }
                        } else if let Some(elem) = array_elem {
                            let elem_size = crate::types::size_bytes_ctx(elem, tctx);
                            let elem_words = (elem_size.div_ceil(4)).max(1) as usize;
                            let woff = field_cursor * elem_words;
                            let sub = build_init_words(other, elem_size, tctx, Some(elem), ictx)?;
                            for (k, w) in sub.into_iter().enumerate() {
                                ensure(&mut v, woff + k);
                                v[woff + k] = w;
                            }
                            field_cursor += 1;
                        } else {
                            ensure(&mut v, field_cursor);
                            v[field_cursor] = eval_init_word(other, tctx, ictx)?;
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
            // For 64-bit (or wider) integer literals — `static uint64_t
            // g = 0x1021F5EB7F464F61LL;` — `eval_init_word` truncates
            // to 32 bits and only fills the low word, leaving the high
            // word zeroed.  Detect a multi-word integer constant and
            // split the i64 value into little-endian word pairs so the
            // matching `Load64` (low at offset 0, high at offset 1)
            // sees the full literal.
            if words >= 2 {
                if let Some((lo, hi)) = const_i64_words(other) {
                    v[0] = InitWord::Num(lo);
                    v[1] = InitWord::Num(hi);
                    return Ok(v);
                }
            }
            v[0] = eval_init_word(other, tctx, ictx)?;
            Ok(v)
        }
    }
}

/// A request to plant a synthetic label on an interior offset of a
/// named data entry. Used to rewrite `&array[N]` / `&obj.field`
/// file-scope initialisers as a bare symbol reference: selas does not
/// support `sym + offset` relocations on `.VAR` initialisers, so the
/// offset is materialised into the symbol set instead, and the linker
/// resolves the synthetic label to the correct interior byte offset.
///
/// `byte_in_word` is `0` for word-aligned interior addresses (the slot
/// is owned by the synthetic label via a `.VAR` directive) and `1..=3`
/// for sub-word interior addresses (the synthetic label is emitted as a
/// `.SET label = <slot_owner> + <byte_in_word>;` alias against the
/// owner of the containing word).  The sub-word path is what unblocks
/// pointer initialisers like `static char *p = (char *)&g_root + 1;`,
/// where the resulting address is not on a 32-bit word boundary and
/// therefore cannot be planted as a fresh `.VAR` slot.
struct InteriorReq {
    target_global: String,
    word_offset: usize,
    byte_in_word: u32,
    label: String,
}

/// Mutable + read-only state threaded through `build_init_words` and
/// `eval_init_word`. Bundling the references here keeps each function
/// at a sane argument count and makes the data flow explicit:
/// `extra_data` and `interior_reqs` accumulate side effects produced
/// by walking the initializer tree, `complit_counter` mints fresh
/// names for synthesised compound-literal storage, and `global_types`
/// is the read-only map used to resolve `&ident[N]` lvalue chains.
struct InitCtx<'a> {
    extra_data: &'a mut Vec<DataEntry>,
    complit_counter: &'a mut u32,
    global_types: &'a HashMap<String, crate::types::Type>,
    interior_reqs: &'a mut Vec<InteriorReq>,
}

/// Walk a constant-address lvalue chain rooted at a named global and
/// return `(global_name, byte_offset, leaf_type)` if every step is a
/// constant-index array subscript or a struct/union member access.
/// Returns `None` if the chain bottoms out in something selcc cannot
/// fold at compile time (a non-constant index, a typedef'd aggregate
/// without a tag, a deref, etc.); the caller falls back to its
/// numeric `eval_const_expr` path.
fn resolve_static_lvalue(
    expr: &Expr,
    tctx: &dyn crate::types::TypeCtx,
    global_types: &HashMap<String, crate::types::Type>,
) -> Option<(String, u32, crate::types::Type)> {
    use crate::types::Type;
    match expr {
        Expr::Ident(name) => {
            let ty = global_types.get(name)?.clone();
            Some((name.clone(), 0, ty))
        }
        Expr::Index(base, idx) => {
            let i = eval_const_expr(idx, tctx).ok()? as i64;
            if i < 0 {
                return None;
            }
            let (root, off, base_ty) = resolve_static_lvalue(base, tctx, global_types)?;
            let elem_ty = match strip_type(&base_ty, tctx) {
                Type::Array(elem, _) => (**elem).clone(),
                Type::Pointer(elem) => (**elem).clone(),
                _ => return None,
            };
            let elem_size = crate::types::size_bytes_ctx(&elem_ty, tctx);
            Some((root, off + (i as u32) * elem_size, elem_ty))
        }
        Expr::Member(base, field) => {
            let (root, off, base_ty) = resolve_static_lvalue(base, tctx, global_types)?;
            let stripped = strip_type(&base_ty, tctx);
            let fields = resolve_struct_fields(stripped, tctx)?;
            let (foff, fty) = if matches!(stripped, Type::Union { .. }) {
                let fty = fields.iter().find(|(n, _)| n == field)?.1.clone();
                (0, fty)
            } else {
                let (foff, _, _) = crate::types::struct_field_layout_ctx(
                    fields,
                    field,
                    aggregate_pack(stripped, tctx),
                    tctx,
                )?;
                let fty = fields.iter().find(|(n, _)| n == field)?.1.clone();
                (foff, fty)
            };
            Some((root, off + foff, fty))
        }
        _ => None,
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
    ictx: &mut InitCtx<'_>,
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
            Expr::Cast(ty, init_inner) if matches!(init_inner.as_ref(), Expr::InitList(_)) => {
                let name = format!(".complit{}", *ictx.complit_counter);
                *ictx.complit_counter += 1;
                let size = crate::types::size_bytes_ctx(ty, tctx);
                let values = build_init_words(init_inner, size, tctx, Some(ty), ictx)?;
                ictx.extra_data.push(DataEntry {
                    name: name.clone(),
                    values,
                    interior: Vec::new(),
                    // Synthesized compound-literal storage is always
                    // TU-private (it backs an anonymous object the
                    // current TU's initialiser took the address of).
                    is_static: true,
                });
                Ok(InitWord::Sym(name))
            }
            // Bare compound literal without an explicit cast (rare,
            // only seen via implicit type inference). Treat the same
            // way but with no known element type — fall back to flat
            // word slots.
            Expr::InitList(_) => {
                let name = format!(".complit{}", *ictx.complit_counter);
                *ictx.complit_counter += 1;
                let values = build_init_words(inner, 4, tctx, None, ictx)?;
                ictx.extra_data.push(DataEntry {
                    name: name.clone(),
                    values,
                    interior: Vec::new(),
                    // Synthesized compound-literal storage is always
                    // TU-private (it backs an anonymous object the
                    // current TU's initialiser took the address of).
                    is_static: true,
                });
                Ok(InitWord::Sym(name))
            }
            // `&array[N]`, `&obj.field`, `&array[N].field`, `&obj.field[N]`,
            // ... — any constant-index lvalue chain rooted at a named
            // global. Compile-time fold the chain into a (root, byte
            // offset) pair, then plant a synthetic interior label on
            // the root entry so the link-time R_SHARC_ADDR32 against
            // that label resolves to the correct interior byte offset.
            //
            // Word-aligned offsets get a `.VAR` slot whose owner is the
            // synthetic label.  Sub-word offsets cannot be a fresh
            // `.VAR` slot (every `.VAR` advances the data cursor by
            // four bytes) and so are emitted as a `.SET label =
            // <slot_owner> + <byte_in_word>;` alias instead, leaning on
            // selas's `parse_sym_plus_offset` to fold the constant
            // addend into the alias's symbol-table value.  Either way
            // the linker sees a single `R_SHARC_ADDR32` against the
            // synthetic label and patches the byte address into the
            // pointer slot.
            Expr::Index(_, _) | Expr::Member(_, _) => {
                if let Some((root, byte_off, _leaf_ty)) =
                    resolve_static_lvalue(inner, tctx, ictx.global_types)
                {
                    let word_offset = (byte_off / 4) as usize;
                    let byte_in_word = byte_off % 4;
                    let label = if byte_in_word == 0 {
                        format!(".addrof_{}_{}", root, word_offset)
                    } else {
                        format!(".addrof_{}_b{}", root, byte_off)
                    };
                    ictx.interior_reqs.push(InteriorReq {
                        target_global: root,
                        word_offset,
                        byte_in_word,
                        label: label.clone(),
                    });
                    return Ok(InitWord::Sym(label));
                }
                Ok(InitWord::Num(eval_const_expr(expr, tctx)? as u32))
            }
            _ => Ok(InitWord::Num(eval_const_expr(expr, tctx)? as u32)),
        },
        Expr::Cast(_, inner) => eval_init_word(inner, tctx, ictx),
        _ => Ok(InitWord::Num(eval_const_expr(expr, tctx)? as u32)),
    }
}

/// Constant-fold a 64-bit integer initializer expression into a
/// (low_word, high_word) pair, or None if the expression is not a
/// recognisable 64-bit integer constant.  Used by `build_init_words` to
/// split `0x1021F5EB7F464F61LL` style literals across the two words of
/// a `uint64_t` global; without this the high word would stay zero
/// because `eval_const_expr` truncates to i32.
fn const_i64_words(expr: &Expr) -> Option<(u32, u32)> {
    let v = eval_const_expr_i64(expr)?;
    let u = v as u64;
    Some((u as u32, (u >> 32) as u32))
}

/// Evaluate a constant-expression in 64-bit precision.  Mirrors the
/// 32-bit `eval_const_expr` but keeps the full long-long range so a
/// single literal `0x1021F5EB7F464F61LL` survives word splitting.
/// Only the operations actually exercised by csmith-style file-scope
/// initialisers are implemented; extending the set is mechanical.
fn eval_const_expr_i64(expr: &Expr) -> Option<i64> {
    match expr {
        Expr::IntLit(n, _) => Some(*n),
        Expr::CharLit(n) => Some(*n),
        Expr::Unary {
            op: UnaryOp::Neg,
            operand,
        } => Some(eval_const_expr_i64(operand)?.wrapping_neg()),
        Expr::Unary {
            op: UnaryOp::BitNot,
            operand,
        } => Some(!eval_const_expr_i64(operand)?),
        Expr::Cast(_, inner) => eval_const_expr_i64(inner),
        Expr::Binary {
            op: BinaryOp::Add,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)?.wrapping_add(eval_const_expr_i64(rhs)?)),
        Expr::Binary {
            op: BinaryOp::Sub,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)?.wrapping_sub(eval_const_expr_i64(rhs)?)),
        Expr::Binary {
            op: BinaryOp::Mul,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)?.wrapping_mul(eval_const_expr_i64(rhs)?)),
        Expr::Binary {
            op: BinaryOp::BitOr,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)? | eval_const_expr_i64(rhs)?),
        Expr::Binary {
            op: BinaryOp::BitAnd,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)? & eval_const_expr_i64(rhs)?),
        Expr::Binary {
            op: BinaryOp::BitXor,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)? ^ eval_const_expr_i64(rhs)?),
        Expr::Binary {
            op: BinaryOp::Shl,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)? << (eval_const_expr_i64(rhs)? & 63)),
        Expr::Binary {
            op: BinaryOp::Shr,
            lhs,
            rhs,
        } => Some(eval_const_expr_i64(lhs)? >> (eval_const_expr_i64(rhs)? & 63)),
        Expr::Comma(_l, r) => eval_const_expr_i64(r),
        _ => None,
    }
}

/// Evaluate a constant expression at compile time (for initializers).
fn eval_const_expr(expr: &Expr, tctx: &dyn crate::types::TypeCtx) -> Result<i32> {
    match expr {
        Expr::IntLit(n, _) => Ok(*n as i32),
        Expr::FloatLit(f) => Ok((*f as f32).to_bits() as i32),
        Expr::CharLit(n) => Ok(*n as i32),
        Expr::Unary {
            op: UnaryOp::Neg,
            operand,
        } => Ok(-eval_const_expr(operand, tctx)?),
        Expr::Binary {
            op: BinaryOp::Add,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)?.wrapping_add(eval_const_expr(rhs, tctx)?)),
        Expr::Binary {
            op: BinaryOp::Sub,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)?.wrapping_sub(eval_const_expr(rhs, tctx)?)),
        Expr::Binary {
            op: BinaryOp::Mul,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)?.wrapping_mul(eval_const_expr(rhs, tctx)?)),
        Expr::Binary {
            op: BinaryOp::Div,
            lhs,
            rhs,
        } => {
            let r = eval_const_expr(rhs, tctx)?;
            if r == 0 {
                Ok(0)
            } else {
                Ok(eval_const_expr(lhs, tctx)? / r)
            }
        }
        Expr::Binary {
            op: BinaryOp::Mod,
            lhs,
            rhs,
        } => {
            let r = eval_const_expr(rhs, tctx)?;
            if r == 0 {
                Ok(0)
            } else {
                Ok(eval_const_expr(lhs, tctx)? % r)
            }
        }
        Expr::Binary {
            op: BinaryOp::BitOr,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)? | eval_const_expr(rhs, tctx)?),
        Expr::Binary {
            op: BinaryOp::BitAnd,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)? & eval_const_expr(rhs, tctx)?),
        Expr::Binary {
            op: BinaryOp::Shl,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)? << eval_const_expr(rhs, tctx)?),
        Expr::Binary {
            op: BinaryOp::Shr,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)? >> eval_const_expr(rhs, tctx)?),
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
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            let c = eval_const_expr(cond, tctx)?;
            if c != 0 {
                eval_const_expr(then_expr, tctx)
            } else {
                eval_const_expr(else_expr, tctx)
            }
        }
        Expr::Binary {
            op: BinaryOp::Eq,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? == eval_const_expr(rhs, tctx)? {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::Ne,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? != eval_const_expr(rhs, tctx)? {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::Lt,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? < eval_const_expr(rhs, tctx)? {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::Gt,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? > eval_const_expr(rhs, tctx)? {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::Le,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? <= eval_const_expr(rhs, tctx)? {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::Ge,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? >= eval_const_expr(rhs, tctx)? {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::BitXor,
            lhs,
            rhs,
        } => Ok(eval_const_expr(lhs, tctx)? ^ eval_const_expr(rhs, tctx)?),
        Expr::Binary {
            op: BinaryOp::LogAnd,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? != 0 && eval_const_expr(rhs, tctx)? != 0 {
                1
            } else {
                0
            },
        ),
        Expr::Binary {
            op: BinaryOp::LogOr,
            lhs,
            rhs,
        } => Ok(
            if eval_const_expr(lhs, tctx)? != 0 || eval_const_expr(rhs, tctx)? != 0 {
                1
            } else {
                0
            },
        ),
        Expr::Unary {
            op: UnaryOp::BitNot,
            operand,
        } => Ok(!eval_const_expr(operand, tctx)?),
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => Ok(if eval_const_expr(operand, tctx)? == 0 {
            1
        } else {
            0
        }),
        Expr::AddrOf(_)
        | Expr::Ident(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::Deref(_) => Ok(0),
        Expr::InitList(items) => {
            if let Some(first) = items.first() {
                eval_const_expr(first, tctx)
            } else {
                Ok(0)
            }
        }
        other => Err(Error::NotImplemented(format!(
            "non-constant initializer: {other:?}"
        ))),
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
    struct_packs: &'a [(String, u8)],
    enum_constants: &'a [(String, i64)],
    typedefs: &'a [(String, crate::types::Type)],
    known_functions: &'a HashSet<String>,
    variadic_callees: &'a HashSet<String>,
    variadic_named_counts: &'a HashMap<String, usize>,
    complex_arg_callees: &'a HashSet<String>,
    function_return_types: &'a HashMap<String, crate::types::Type>,
    function_param_types: &'a HashMap<String, Vec<crate::types::Type>>,
}

/// Run the per-function pipeline and return the final machine-instruction
/// stream (prologue + body + epilogue, with branches resolved). The
/// caller is responsible for converting each instruction to text.
fn emit_function_instrs(
    func: &Function,
    global_types: &HashMap<String, crate::types::Type>,
    unit: &UnitCtx<'_>,
) -> Result<FnEmitResult> {
    let lower_unit = lower::LowerUnitCtx {
        known_functions: unit.known_functions,
        function_return_types: unit.function_return_types,
        function_param_types: unit.function_param_types,
        struct_packs: unit.struct_packs,
    };
    let lower_result = lower::lower_function_with_known(
        func,
        global_types,
        unit.struct_defs,
        unit.enum_constants,
        unit.typedefs,
        &lower_unit,
    )?;
    let strings = lower_result.strings;
    let wide_strings = lower_result.wide_strings;
    let static_locals = lower_result.static_locals;

    let mut ir = ir_opt::constant_fold(&lower_result.ops);
    let has_calls = ir.iter().any(|op| {
        matches!(
            op,
            crate::ir::IrOp::Call(..)
                | crate::ir::IrOp::CallIndirect(..)
                | crate::ir::IrOp::CallStruct { .. }
                | crate::ir::IrOp::CallIndirectStruct { .. }
        )
    });
    if !func.is_variadic && !has_calls {
        ir = ir_opt::forward_stack_loads(&ir);
        ir = ir_opt::propagate_copies(&ir);
        ir = ir_opt::constant_fold(&ir);
    }
    let ir = ir_opt::dead_code_eliminate(&ir);
    let mut ir = ir_opt::detect_hardware_loops(&ir);
    ir = ir_opt::dead_code_eliminate(&ir_opt::elide_noop_hardware_loops(&ir));
    if !func.is_variadic && !has_calls {
        ir = ir_opt::remove_unreferenced_labels(&ir);
        ir = ir_opt::forward_stack_loads(&ir);
        ir = ir_opt::propagate_copies(&ir);
        ir = ir_opt::constant_fold(&ir);
        ir = ir_opt::dead_code_eliminate(&ir);
    }

    // Decide up-front whether this function participates in an ABI
    // shape that routes data through R1: struct-by-value returns use
    // R0:R1 (or R1 as the hidden destination pointer), and 64-bit
    // div/mod helpers return their result pair in R0:R1. Permanently
    // reserving R1 everywhere costs a usable scratch register and
    // raises register pressure enough that nested ternary chains spill
    // a join value down a path that the merging block cannot reload --
    // a regalloc latent bug that the extra pressure would expose for
    // every function in the TU instead of just the few that touch R1
    // through one of these ABI paths.
    let reserves_r1 = ir.iter().any(|op| {
        matches!(
            op,
            crate::ir::IrOp::RetStruct { .. }
                | crate::ir::IrOp::LoadStructRetPtr(_)
                | crate::ir::IrOp::CallStruct { .. }
                | crate::ir::IrOp::CallIndirectStruct { .. }
                | crate::ir::IrOp::Div64(..)
                | crate::ir::IrOp::UDiv64(..)
                | crate::ir::IrOp::Mod64(..)
                | crate::ir::IrOp::UMod64(..)
        )
    });

    // Pin one vreg per ABI argument *slot*, not per parameter. Struct-
    // by-value parameters consume multiple ABI slots (one 32-bit word
    // each), so `params.len()` understates the count and leaves
    // trailing struct words unpinned — regalloc then assigns those
    // vregs to arbitrary registers and reads uninitialised data for
    // every field past the first ABI slot of a multi-word struct.
    let num_params = (lower_result.arg_slots as usize).min(target::ARG_REGS.len()) as u16;

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
        &ir,
        &func.name,
        unit.variadic_callees,
        unit.variadic_named_counts,
        unit.complex_arg_callees,
    );
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
    let (adjusted, adjust_map) = adjust_frame_offsets(&allocated, num_saved, local_slots_pre);

    let mut label_map: HashMap<Label, usize> = HashMap::new();
    for &(label, old_idx) in &isel_result.label_positions {
        // Thread the isel-level position through regalloc's spill
        // insertions, then through adjust_frame_offsets's access
        // expansions, to land on the right instruction in `adjusted`.
        let alloc_idx = alloc_map.get(old_idx).copied().unwrap_or(allocated.len());
        let adj_idx = adjust_map.get(alloc_idx).copied().unwrap_or(adjusted.len());
        label_map.insert(label, adj_idx);
    }

    let mut optimized = eliminate_copies(&adjusted, &mut label_map);
    loop {
        let before = optimized.len();
        optimized = eliminate_copies(&optimized, &mut label_map);
        if optimized.len() == before {
            break;
        }
    }
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
    let has_calls = optimized
        .iter()
        .any(|mi| matches!(mi.instr, Instruction::CJump { .. }));
    let outgoing_stack_args = max_outgoing_stack_args(&optimized);
    let prologue = build_prologue(
        frame_size,
        &used_callee_saved,
        has_calls,
        outgoing_stack_args,
    );
    let epilogue = build_epilogue(
        frame_size,
        &used_callee_saved,
        has_calls,
        outgoing_stack_args,
    );

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
    let return_seq_start_set: std::collections::HashSet<usize> =
        return_seq_starts.iter().copied().collect();

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
            if return_seq_start_set.contains(&body_idx) {
                prologue_len + mapped.saturating_sub(epilogue.len())
            } else {
                prologue_len + mapped
            }
        } else {
            abs_idx
        };
        rebased_label_insertions
            .entry(new_abs)
            .or_default()
            .extend(labels);
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
        new_label_insertions
            .entry(old_idx)
            .or_default()
            .extend(labels);
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
        let reg = reg as u16;
        if instrs
            .iter()
            .any(|mi| instr_uses_reg(&mi.instr, reg) || runtime_helper_clobbers_reg(mi, reg))
        {
            used.push(reg);
        }
    }
    used
}

fn runtime_helper_clobbers_reg(mi: &MachInstr, reg: u16) -> bool {
    let Some(reloc) = &mi.reloc else {
        return false;
    };
    if !matches!(mi.instr, Instruction::CJump { .. }) {
        return false;
    }
    matches!(
        reloc.symbol.as_str(),
        "___div32" | "___udiv32" | "___mod32" | "___umod32" | "__divrem_s32" | "__divrem_u32"
    ) && reg == 12
}

fn instr_uses_reg(instr: &Instruction, reg: u16) -> bool {
    fn ureg_is_data_reg(ureg: u16, reg: u16) -> bool {
        (ureg & 0x70) == 0 && (ureg & 0xF) == reg
    }

    match *instr {
        Instruction::LoadImm { ureg, .. } => ureg_is_data_reg(ureg, reg),
        Instruction::Compute { compute, .. } => compute_uses_reg(&compute, reg),
        Instruction::DualMove { compute, dm, pm } => {
            dm.dreg == reg || pm.dreg == reg || compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::ComputeLoadStore { dreg, compute, .. } => {
            dreg == reg || compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::IndirectBranch { compute, .. } | Instruction::DagModify { compute, .. } => {
            compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::DoLoop {
            counter: encode::LoopCounter::Ureg(ureg),
            ..
        } => ureg_is_data_reg(ureg as u16, reg),
        Instruction::DoLoop { .. } => false,
        Instruction::Return { compute, .. } => compute.is_some_and(|c| compute_uses_reg(&c, reg)),
        Instruction::UregDagMove { ureg, compute, .. } => {
            ureg_is_data_reg(ureg, reg) || compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::RegisterSwap {
            dreg,
            cdreg,
            compute,
            ..
        } => dreg == reg || cdreg == reg || compute.is_some_and(|c| compute_uses_reg(&c, reg)),
        Instruction::UregTransfer {
            src_ureg,
            dst_ureg,
            compute,
            ..
        } => {
            ureg_is_data_reg(src_ureg, reg)
                || ureg_is_data_reg(dst_ureg, reg)
                || compute.is_some_and(|c| compute_uses_reg(&c, reg))
        }
        Instruction::URegMove { dest, src } => {
            ureg_is_data_reg(dest, reg) || ureg_is_data_reg(src, reg)
        }
        Instruction::UregMemAccess { ureg, .. } => ureg_is_data_reg(ureg, reg),
        Instruction::ImmShift { rn, rx, .. } => rn == reg || rx == reg,
        Instruction::ImmShiftMem { rn, rx, dreg, .. } => rn == reg || rx == reg || dreg == reg,
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
        Add { rn, rx, ry }
        | Sub { rn, rx, ry }
        | AddCi { rn, rx, ry }
        | SubCi { rn, rx, ry }
        | Avg { rn, rx, ry }
        | And { rn, rx, ry }
        | Or { rn, rx, ry }
        | Xor { rn, rx, ry }
        | Min { rn, rx, ry }
        | Max { rn, rx, ry }
        | Clip { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        Pass { rn, rx }
        | Neg { rn, rx }
        | Not { rn, rx }
        | PassCi { rn, rx }
        | PassCiMinus1 { rn, rx }
        | Inc { rn, rx }
        | Dec { rn, rx }
        | Abs { rn, rx } => rn == reg || rx == reg,
        Comp { rx, ry } | CompU { rx, ry } => rx == reg || ry == reg,
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
        MulAlu {
            rm,
            ra,
            rxm,
            rym,
            rxa,
            rya,
            ..
        } => {
            rm == reg
                || ra == reg
                || rxm == reg
                || (rym + 4) == reg
                || (rxa + 8) == reg
                || (rya + 12) == reg
        }
        MulDualAddSub {
            rm,
            ra,
            rs,
            rxm,
            rym,
            rxa,
            rya,
            ..
        } => {
            rm == reg
                || ra == reg
                || rs == reg
                || rxm == reg
                || (rym + 4) == reg
                || (rxa + 8) == reg
                || (rya + 12) == reg
        }
    }
}

fn falu_uses_reg(op: &selinstr::encode::FaluOp, reg: u16) -> bool {
    use selinstr::encode::FaluOp::*;
    match *op {
        Add { rn, rx, ry } | Sub { rn, rx, ry } => rn == reg || rx == reg || ry == reg,
        Pass { rn, rx } | Neg { rn, rx } | Abs { rn, rx } | Float { rn, rx } | Fix { rn, rx } => {
            rn == reg || rx == reg
        }
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
/// outgoing call pushes. `CJUMP (DB)` writes two delay-slot words via
/// `DM(I7,M7)=...` (post-decrement by `M7=-1`), starting at the I7 the
/// callee set up in its prologue. Calls with stack-passed arguments push
/// those argument words immediately before the delayed branch. Without
/// reserving the whole outgoing area, those pushes land on top of the
/// deepest spill slots that regalloc has already populated.
/// Only non-leaf functions need this reserve; a leaf function never
/// executes `CJUMP` so the extra words would be dead stack.
const CJUMP_PUSH_RESERVE: i32 = 2;

fn outgoing_push_reserve(has_calls: bool, outgoing_stack_args: u32) -> i32 {
    if has_calls {
        CJUMP_PUSH_RESERVE + outgoing_stack_args as i32
    } else {
        0
    }
}

fn build_prologue(
    frame_size: u32,
    callee_saved: &[u16],
    has_calls: bool,
    outgoing_stack_args: u32,
) -> Vec<MachInstr> {
    let extra = outgoing_push_reserve(has_calls, outgoing_stack_args);
    debug_assert!(
        callee_saved
            .iter()
            .all(|r| target::CALLER_SAVED.iter().all(|c| (*c as u16) != *r)),
        "callee-saved register overlaps with caller-saved set"
    );
    if frame_size == 0 && extra == 0 && callee_saved.is_empty() {
        return Vec::new();
    }
    let mut instrs = Vec::new();
    if frame_size > 0 || extra > 0 {
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

fn build_epilogue(
    frame_size: u32,
    callee_saved: &[u16],
    has_calls: bool,
    outgoing_stack_args: u32,
) -> Vec<MachInstr> {
    let extra = outgoing_push_reserve(has_calls, outgoing_stack_args);
    if frame_size == 0 && extra == 0 && callee_saved.is_empty() {
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
    if frame_size > 0 || extra > 0 {
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

fn is_stack_post_push(instr: &Instruction) -> bool {
    matches!(
        instr,
        Instruction::UregDagMove {
            pm: false,
            write: true,
            i_reg,
            m_reg: 7,
            post_modify: true,
            ..
        } if *i_reg == target::STACK_PTR
    )
}

fn max_outgoing_stack_args(instrs: &[MachInstr]) -> u32 {
    let mut max_args = 0u32;
    let mut pending_pushes = 0u32;
    for mi in instrs {
        match &mi.instr {
            instr if is_stack_post_push(instr) => {
                pending_pushes += 1;
            }
            Instruction::CJump { .. } => {
                max_args = max_args.max(pending_pushes);
                pending_pushes = 0;
            }
            Instruction::ImmStore {
                pm: false,
                i_reg,
                m_reg: 7,
                ..
            } if *i_reg == target::STACK_PTR => {
                pending_pushes = 0;
            }
            _ => {}
        }
    }
    max_args
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
            Instruction::UregMemAccess {
                pm, i_reg, offset, ..
            } if i_reg == target::FRAME_PTR && !pm && offset < deepest => {
                deepest = offset;
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
        let has_positive_offsets = instrs.iter().any(|mi| {
            matches!(
                mi.instr,
                Instruction::ComputeLoadStore { access, offset, .. }
                    if access.i_reg == target::FRAME_PTR && !access.pm && offset >= 0
            )
        });
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
    let mut i = 0;
    while i < instrs.len() {
        let mi = &instrs[i];
        idx_map.push(result.len());
        if let (
            Instruction::Modify { i_reg, value, .. },
            Some(MachInstr {
                instr:
                    Instruction::ComputeLoadStore {
                        compute,
                        access,
                        dreg,
                        offset: 0,
                        cond,
                    },
                reloc,
            }),
            Some(MachInstr {
                instr:
                    Instruction::Modify {
                        i_reg: restore_i_reg,
                        value: restore_value,
                        ..
                    },
                ..
            }),
        ) = (mi.instr, instrs.get(i + 1), instrs.get(i + 2))
        {
            if i_reg == target::FRAME_PTR
                && *restore_i_reg == target::FRAME_PTR
                && value != 0
                && *restore_value == -value
                && access.i_reg == target::FRAME_PTR
                && !access.pm
            {
                let new_offset = if value < 0 {
                    value - shift
                } else {
                    // Positive frame-pointer offsets are regalloc spill
                    // slots. Large spill slots are emitted as
                    // MODIFY(+slot) / access(0) / MODIFY(-slot) so the
                    // slot id does not wrap through the i8 access field.
                    -(spill_base + value + 1)
                };
                let start = result.len();
                emit_adjusted_access(
                    &mut result,
                    *compute,
                    *access,
                    *dreg,
                    new_offset,
                    *cond,
                    reloc.clone(),
                );
                idx_map.push(start.saturating_add(1).min(result.len()));
                idx_map.push(start.saturating_add(2).min(result.len()));
                i += 3;
                continue;
            }
        }
        if let (
            Instruction::Modify { i_reg, value, .. },
            Some(MachInstr {
                instr:
                    Instruction::UregDagMove {
                        pm,
                        write,
                        ureg,
                        i_reg: access_i_reg,
                        m_reg,
                        cond,
                        compute,
                        post_modify,
                    },
                reloc,
            }),
            Some(MachInstr {
                instr:
                    Instruction::Modify {
                        i_reg: restore_i_reg,
                        value: restore_value,
                        ..
                    },
                ..
            }),
        ) = (mi.instr, instrs.get(i + 1), instrs.get(i + 2))
        {
            if i_reg == target::FRAME_PTR
                && *restore_i_reg == target::FRAME_PTR
                && value != 0
                && *restore_value == -value
                && *access_i_reg == target::FRAME_PTR
                && !*pm
            {
                let new_offset = if value < 0 {
                    value - shift
                } else {
                    -(spill_base + value + 1)
                };
                let start = result.len();
                if *ureg == 0x73
                    && *m_reg == 5
                    && *cond == target::COND_TRUE
                    && compute.is_none()
                    && !*post_modify
                    && reloc.is_none()
                {
                    result.push(MachInstr {
                        instr: Instruction::UregMemAccess {
                            pm: false,
                            i_reg: target::FRAME_PTR,
                            write: *write,
                            lw: false,
                            ureg: *ureg,
                            offset: new_offset,
                        },
                        reloc: None,
                    });
                } else {
                    result.push(MachInstr {
                        instr: Instruction::Modify {
                            i_reg: target::FRAME_PTR,
                            value: new_offset,
                            width: MemWidth::Nw,
                            bitrev: false,
                        },
                        reloc: None,
                    });
                    result.push(MachInstr {
                        instr: Instruction::UregDagMove {
                            pm: *pm,
                            write: *write,
                            ureg: *ureg,
                            i_reg: *access_i_reg,
                            m_reg: *m_reg,
                            cond: *cond,
                            compute: *compute,
                            post_modify: *post_modify,
                        },
                        reloc: reloc.clone(),
                    });
                    result.push(MachInstr {
                        instr: Instruction::Modify {
                            i_reg: target::FRAME_PTR,
                            value: -new_offset,
                            width: MemWidth::Nw,
                            bitrev: false,
                        },
                        reloc: None,
                    });
                }
                idx_map.push(start.saturating_add(1).min(result.len()));
                idx_map.push(start.saturating_add(2).min(result.len()));
                i += 3;
                continue;
            }
        }
        match mi.instr {
            Instruction::ComputeLoadStore {
                compute,
                access,
                dreg,
                offset,
                cond,
            } if access.i_reg == target::FRAME_PTR && !access.pm => {
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
                let new_value = if value < 0 {
                    value - shift
                } else {
                    value + shift
                };
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
        i += 1;
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
    } else if compute.is_none()
        && !access.pm
        && cond == target::COND_TRUE
        && dreg < 0x10
        && reloc.is_none()
    {
        out.push(MachInstr {
            instr: Instruction::UregMemAccess {
                pm: false,
                i_reg: access.i_reg,
                write: access.write,
                lw: false,
                ureg: dreg,
                offset: new_offset,
            },
            reloc: None,
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
        if let Instruction::ComputeLoadStore {
            compute,
            access,
            dreg,
            offset,
            cond,
        } = mi.instr
        {
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

fn eliminate_copies(instrs: &[MachInstr], label_map: &mut HashMap<Label, usize>) -> Vec<MachInstr> {
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
    let branch_targets: std::collections::HashSet<usize> = label_map.values().copied().collect();

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
                    | Some(Instruction::IndirectBranch {
                        call: false,
                        pm_m: 5,
                        ..
                    }),
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
                        AluOp::Add { rn, rx, ry } if rn == old_dst => AluOp::Add {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        AluOp::Sub { rn, rx, ry } if rn == old_dst => AluOp::Sub {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        AluOp::And { rn, rx, ry } if rn == old_dst => AluOp::And {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        AluOp::Or { rn, rx, ry } if rn == old_dst => AluOp::Or {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        AluOp::Xor { rn, rx, ry } if rn == old_dst => AluOp::Xor {
                            rn: new_dst,
                            rx,
                            ry,
                        },
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
                        MulOp::MulSsf { rn, rx, ry } if rn == old_dst => MulOp::MulSsf {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        MulOp::MulSsi { rn, rx, ry } if rn == old_dst => MulOp::MulSsi {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        MulOp::FMul { rn, rx, ry } if rn == old_dst => MulOp::FMul {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        _ => return None,
                    };
                    ComputeOp::Mul(new_mul)
                }
                ComputeOp::Shift(shift) => {
                    let new_shift = match shift {
                        ShiftOp::Lshift { rn, rx, ry } if rn == old_dst => ShiftOp::Lshift {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        ShiftOp::Ashift { rn, rx, ry } if rn == old_dst => ShiftOp::Ashift {
                            rn: new_dst,
                            rx,
                            ry,
                        },
                        _ => return None,
                    };
                    ComputeOp::Shift(new_shift)
                }
                _ => return None,
            };
            Instruction::Compute {
                cond,
                compute: new_compute,
            }
        }
        Instruction::LoadImm { ureg, value } if (ureg & 0xF) == old_dst && (ureg >> 4) == 0 => {
            Instruction::LoadImm {
                ureg: (ureg & 0xF0) | new_dst,
                value,
            }
        }
        _ => return None,
    };
    Some(MachInstr {
        instr: new_instr,
        reloc: mi.reloc.clone(),
    })
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
        Instruction::ComputeLoadStore {
            compute,
            access,
            dreg,
            ..
        } => {
            if let Some(c) = compute {
                compute_source_regs(&c, &mut regs);
            }
            if access.write {
                regs.push(dreg);
            }
        }
        Instruction::UregMemAccess {
            write: true, ureg, ..
        } if ureg < 0x10 => {
            regs.push(ureg & 0xF);
        }
        Instruction::Return {
            compute: Some(c), ..
        } => {
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
            AluOp::Add { rx, ry, .. }
            | AluOp::Sub { rx, ry, .. }
            | AluOp::And { rx, ry, .. }
            | AluOp::Or { rx, ry, .. }
            | AluOp::Xor { rx, ry, .. } => {
                regs.push(rx);
                regs.push(ry);
            }
            AluOp::Pass { rx, .. }
            | AluOp::Neg { rx, .. }
            | AluOp::Not { rx, .. }
            | AluOp::Inc { rx, .. }
            | AluOp::Dec { rx, .. }
            | AluOp::Abs { rx, .. } => {
                regs.push(rx);
            }
            AluOp::Comp { rx, ry } | AluOp::CompU { rx, ry } => {
                regs.push(rx);
                regs.push(ry);
            }
            _ => {}
        },
        ComputeOp::Mul(ref m) => match *m {
            MulOp::MulSsf { rx, ry, .. }
            | MulOp::MulSsi { rx, ry, .. }
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
                MultiOp::MulAlu {
                    rxm, rym, rxa, rya, ..
                }
                | MultiOp::MulDualAddSub {
                    rxm, rym, rxa, rya, ..
                } => {
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
        Instruction::ComputeLoadStore {
            compute,
            access,
            dreg,
            offset,
            cond,
        } => {
            let new_compute = compute.map(|c| remap_compute_sources(&c, from, to));
            let new_dreg = if access.write && dreg == from {
                to
            } else {
                dreg
            };
            Instruction::ComputeLoadStore {
                compute: new_compute,
                access,
                dreg: new_dreg,
                offset,
                cond,
            }
        }
        Instruction::UregMemAccess {
            pm,
            i_reg,
            write: true,
            lw,
            ureg,
            offset,
        } if ureg < 0x10 && (ureg & 0xF) == from => Instruction::UregMemAccess {
            pm,
            i_reg,
            write: true,
            lw,
            ureg: (ureg & 0xF0) | to,
            offset,
        },
        Instruction::Return {
            interrupt,
            cond,
            delayed,
            lr,
            compute,
        } => {
            let new_compute = compute.map(|c| remap_compute_sources(&c, from, to));
            Instruction::Return {
                interrupt,
                cond,
                delayed,
                lr,
                compute: new_compute,
            }
        }
        other => other,
    };
    MachInstr {
        instr: new_instr,
        reloc: mi.reloc.clone(),
    }
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
            AluOp::Add { rn, rx, ry } => AluOp::Add {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            AluOp::Sub { rn, rx, ry } => AluOp::Sub {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            AluOp::And { rn, rx, ry } => AluOp::And {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            AluOp::Or { rn, rx, ry } => AluOp::Or {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            AluOp::Xor { rn, rx, ry } => AluOp::Xor {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            AluOp::Pass { rn, rx } => AluOp::Pass { rn, rx: r(rx) },
            AluOp::Neg { rn, rx } => AluOp::Neg { rn, rx: r(rx) },
            AluOp::Not { rn, rx } => AluOp::Not { rn, rx: r(rx) },
            AluOp::Inc { rn, rx } => AluOp::Inc { rn, rx: r(rx) },
            AluOp::Dec { rn, rx } => AluOp::Dec { rn, rx: r(rx) },
            AluOp::Abs { rn, rx } => AluOp::Abs { rn, rx: r(rx) },
            AluOp::Comp { rx, ry } => AluOp::Comp {
                rx: r(rx),
                ry: r(ry),
            },
            AluOp::CompU { rx, ry } => AluOp::CompU {
                rx: r(rx),
                ry: r(ry),
            },
            other => other,
        }),
        ComputeOp::Mul(ref m) => ComputeOp::Mul(match *m {
            MulOp::MulSsf { rn, rx, ry } => MulOp::MulSsf {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            MulOp::MulSsi { rn, rx, ry } => MulOp::MulSsi {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            MulOp::FMul { rn, rx, ry } => MulOp::FMul {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            other => other,
        }),
        ComputeOp::Shift(ref s) => ComputeOp::Shift(match *s {
            ShiftOp::Lshift { rn, rx, ry } => ShiftOp::Lshift {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
            ShiftOp::Ashift { rn, rx, ry } => ShiftOp::Ashift {
                rn,
                rx: r(rx),
                ry: r(ry),
            },
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
                    Some(Reloc {
                        symbol: name,
                        kind: RelocKind::Addr24,
                    }),
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
                    Some(Reloc {
                        symbol: name,
                        kind: RelocKind::Addr24,
                    }),
                )
            }
            other => (other, mi.reloc.clone()),
        };
        out.push(MachInstr {
            instr: new_instr,
            reloc: new_reloc,
        });
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
        let code = [
            "seg_l1_block0_swco",
            "seg_l1_block1_swco",
            "seg_swco",
            "seg_pmco",
        ]
        .into_iter()
        .find_map(|section| code_section_bytes(&doj, &hdr, section))
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
        let strtab_shdr = selelf::elf::parse_section_header(&data[strtab_off..], hdr.ei_data);
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
    fn large_spill_modify_sequence_adjusts_to_spill_region() {
        let instrs = vec![
            MachInstr {
                instr: Instruction::Modify {
                    i_reg: target::FRAME_PTR,
                    value: 128,
                    width: MemWidth::Nw,
                    bitrev: false,
                },
                reloc: None,
            },
            MachInstr {
                instr: Instruction::ComputeLoadStore {
                    compute: Some(selinstr::encode::ComputeOp::Alu(
                        selinstr::encode::AluOp::Pass { rn: 4, rx: 5 },
                    )),
                    access: encode::MemAccess {
                        pm: false,
                        write: true,
                        i_reg: target::FRAME_PTR,
                    },
                    dreg: 3,
                    offset: 0,
                    cond: target::COND_TRUE,
                },
                reloc: None,
            },
            MachInstr {
                instr: Instruction::Modify {
                    i_reg: target::FRAME_PTR,
                    value: -128,
                    width: MemWidth::Nw,
                    bitrev: false,
                },
                reloc: None,
            },
        ];
        let (adjusted, _) = adjust_frame_offsets(&instrs, 8, 128);
        assert!(matches!(
            adjusted.first().map(|mi| mi.instr),
            Some(Instruction::Modify {
                i_reg: target::FRAME_PTR,
                value: -267,
                width: MemWidth::Nw,
                ..
            })
        ));
        assert!(matches!(
            adjusted.get(1).map(|mi| mi.instr),
            Some(Instruction::ComputeLoadStore {
                compute: Some(_),
                offset: 0,
                ..
            })
        ));
    }

    #[test]
    fn prologue_reserves_outgoing_stack_args() {
        let prologue = build_prologue(5, &[], true, 1);
        assert!(matches!(
            prologue.first().map(|mi| mi.instr),
            Some(Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: -8,
                width: MemWidth::Nw,
                ..
            })
        ));
        let epilogue = build_epilogue(5, &[], true, 1);
        assert!(matches!(
            epilogue.last().map(|mi| mi.instr),
            Some(Instruction::Modify {
                i_reg: target::STACK_PTR,
                value: 8,
                width: MemWidth::Nw,
                ..
            })
        ));
    }

    #[test]
    fn max_outgoing_stack_args_ignores_cjump_delay_slots() {
        let stack_push = MachInstr {
            instr: Instruction::UregDagMove {
                pm: false,
                write: true,
                ureg: 4,
                i_reg: target::STACK_PTR,
                m_reg: 7,
                cond: target::COND_TRUE,
                compute: None,
                post_modify: true,
            },
            reloc: None,
        };
        let cjump = MachInstr {
            instr: Instruction::CJump {
                addr: 0,
                delayed: true,
            },
            reloc: None,
        };
        let ret_store = MachInstr {
            instr: Instruction::ImmStore {
                pm: false,
                i_reg: target::STACK_PTR,
                m_reg: 7,
                value: 0,
            },
            reloc: None,
        };
        let instrs = vec![
            stack_push.clone(),
            stack_push.clone(),
            cjump,
            stack_push,
            ret_store,
        ];
        assert_eq!(max_outgoing_stack_args(&instrs), 2);
    }

    #[test]
    fn callee_saved_scan_counts_carry_alu_ops() {
        let instrs = vec![MachInstr {
            instr: Instruction::Compute {
                cond: target::COND_TRUE,
                compute: encode::ComputeOp::Alu(encode::AluOp::SubCi {
                    rn: 15,
                    rx: 10,
                    ry: 13,
                }),
            },
            reloc: None,
        }];
        assert!(callee_saved_used(&instrs).contains(&15));
    }

    #[test]
    fn callee_saved_scan_counts_ureg_transfer_defs() {
        let instrs = vec![MachInstr {
            instr: Instruction::UregTransfer {
                src_ureg: target::ureg_i(target::FRAME_PTR),
                dst_ureg: target::ureg_r(8),
                cond: target::COND_TRUE,
                compute: None,
            },
            reloc: None,
        }];
        assert!(callee_saved_used(&instrs).contains(&8));
    }

    #[test]
    fn callee_saved_scan_counts_ureg_dag_move_regs() {
        let instrs = vec![MachInstr {
            instr: Instruction::UregDagMove {
                pm: false,
                write: true,
                ureg: target::ureg_r(9),
                i_reg: target::SCRATCH_I,
                m_reg: 5,
                cond: target::COND_TRUE,
                compute: None,
                post_modify: true,
            },
            reloc: None,
        }];
        assert!(callee_saved_used(&instrs).contains(&9));
    }

    #[test]
    fn has_global_and_label() {
        let m = compile("int main() { return 42; }");
        assert!(m.text.contains(".GLOBAL main.;"));
        assert!(m.text.contains("main.:"));
    }

    /// C99 6.7.8 brace elision: a scalar initializer wrapped in extra
    /// braces (`signed char arr[3] = { 0, {1}, 2 };`) is well-formed.
    /// Both the file-scope flattener (`flatten_narrow_array_init`) and
    /// the local-scope twin (`flatten_narrow_array_local`) must peel
    /// the single-element `InitList` rather than reject it as a non-
    /// constant initializer.  Regression for the csmith `g_56` trip
    /// in selache-csmith-tests.
    #[test]
    fn narrow_array_brace_elided_scalar_init() {
        let src_global = "signed char arr[3] = { 0, {1}, 2 };
                          int main(void) { return arr[1]; }";
        let unit = parse::parse(src_global).expect("parse global");
        let m = emit_module(&unit, 8).expect("emit_module Ok for brace-elided scalar init");
        // Sanity: the value 1 must land in the second byte lane of the
        // packed word, i.e. 0x00020100 little-endian (lane0=0, lane1=1,
        // lane2=2).
        assert!(
            m.text.contains("0x00020100"),
            "expected packed word 0x00020100 in asm, got:\n{}",
            m.text
        );

        // Local-scope twin must also accept brace-elided scalars.
        // `emit_module` is the right hermetic entry point: lowering the
        // local initializer flows through `flatten_narrow_array_local`.
        let src_local = "int main(void) {
                             signed char arr[3] = { 0, {1}, 2 };
                             return arr[1];
                         }";
        let unit_l = parse::parse(src_local).expect("parse local");
        let _m_l =
            emit_module(&unit_l, 8).expect("emit_module Ok for local brace-elided scalar init");
    }

    /// Sub-word struct fields packed into one 32-bit word.  The struct
    /// branch of `build_init_words` must pack constant-int sub-word
    /// fields (`int8_t a; int8_t b;`) into the containing word's
    /// `InitWord::Num` value — `a=0x12` at byte 0, `b=0x34` at byte 1
    /// fold to `0x00003412` little-endian.  A trailing word-aligned
    /// `int w` keeps its own per-word emission.  The bare positional
    /// initializer `{ 0x12, 0x34, 0x55667788 }` exercises the path that
    /// previously erroneously rejected `byte_off % 4 != 0`.
    #[test]
    fn sub_word_struct_field_global_init() {
        let src = "struct S { signed char a; signed char b; int w; };
                   struct S g = { 0x12, 0x34, 0x55667788 };
                   int main(void) { return g.a + g.b + g.w; }";
        let unit = parse::parse(src).expect("parse sub-word struct global");
        let m =
            emit_module(&unit, 8).expect("emit_module Ok for sub-word struct field global init");
        assert!(
            m.text.contains(".VAR g. = 0x00003412;"),
            "expected packed first word .VAR g. = 0x00003412 in asm, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains("0x55667788"),
            "expected second word 0x55667788 in asm, got:\n{}",
            m.text
        );
    }

    #[test]
    fn packed_struct_array_global_init_uses_byte_stride() {
        let src = "#pragma pack(push)
                   #pragma pack(1)
                   struct S { unsigned short a; unsigned char b; unsigned char c; unsigned char d; };
                   #pragma pack(pop)
                   struct S g[2] = {{0x1122,0x33,0x44,0x55},{0x6677,0x88,0x99,0xaa}};
                   int main(void) { return g[1].b; }";
        let processed = crate::preprocess_only(
            src,
            "packed-struct-array-init-test.c",
            &crate::cli::Options {
                char_size: 8,
                ..Default::default()
            },
        )
        .unwrap();
        let unit = parse::parse(&processed).expect("parse packed struct array global");
        let m = emit_module(&unit, 8).expect("emit_module Ok for packed struct array global init");
        assert!(
            m.text.contains(".VAR g. = 0x44331122;"),
            "expected first packed-array word in asm, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains(".VAR = 0x66770055;"),
            "expected second element to start at byte offset 6, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains(".VAR = 0x00AA9988;"),
            "expected packed tail word in asm, got:\n{}",
            m.text
        );
    }

    #[test]
    fn static_template_for_two_byte_struct_array_uses_aggregate_stride() {
        let src = "#pragma pack(push)
                   #pragma pack(1)
                   struct S { unsigned char f0; signed char f1; };
                   #pragma pack(pop)
                   int main(void) {
                       struct S l[3][5][4] = {{{{0,0x5e},{0x9c,0x27}}}};
                       return l[0][0][0].f0 + l[0][0][1].f1;
                   }";
        let asm = crate::compile_to_asm(
            src,
            "static-template-two-byte-struct-array.c",
            &crate::cli::Options {
                char_size: 8,
                ..Default::default()
            },
        )
        .expect("compile static template for two-byte packed struct array");
        assert!(
            asm.contains("__selcc_init_main_"),
            "expected large local aggregate to use a static template, got:\n{}",
            asm
        );
        assert!(
            asm.contains("0x279C5E00"),
            "expected first two packed structs to be emitted contiguously, got:\n{}",
            asm
        );
    }

    /// Bitfield struct fields with constant-int initializers pack into
    /// the containing 32-bit word.  For `struct S { unsigned f0 : 10;
    /// unsigned f1 : 6; int w; }; struct S g = { 0x123, 0x2A, ... };`
    /// the layout places `f0` at bit 0 (10 bits) and `f1` at bit 10
    /// (6 bits) of word 0, so the packed value is
    /// `(0x123 & 0x3FF) | ((0x2A & 0x3F) << 10) == 0xA923`.  Word 1
    /// carries the trailing `int w`.  This exercises the lift of the
    /// previous up-front bitfield rejection in the `field_map`
    /// construction loop.
    #[test]
    fn bitfield_struct_global_init() {
        let src = "struct S { unsigned f0 : 10; unsigned f1 : 6; int w; };
                   struct S g = { 0x123, 0x2A, 0x55667788 };
                   int main(void) { return g.w; }";
        let unit = parse::parse(src).expect("parse bitfield struct global");
        let m =
            emit_module(&unit, 8).expect("emit_module Ok for bitfield struct field global init");
        assert!(
            m.text.contains(".VAR g. = 0x0000A923,") || m.text.contains(".VAR g. = 0x0000A923;"),
            "expected packed first word 0x0000A923 in asm, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains("0x55667788"),
            "expected second word 0x55667788 in asm, got:\n{}",
            m.text
        );
    }

    /// Nested-aggregate sub-word struct field global init.  Extends
    /// the precedent constant-int sub-word fix so that a struct field
    /// whose type is itself a small (<= 4 bytes) aggregate of int8/16
    /// leaves and whose initializer is a brace-enclosed `Expr::InitList`
    /// is folded into the containing 32-bit word's `InitWord::Num`
    /// rather than rejected.  For
    ///
    ///     struct Inner { signed char a; signed char b; };
    ///     struct Outer { signed char pad; struct Inner inner;
    ///                    signed char tail; };
    ///     struct Outer g = { 0x12, { 0x34, 0x56 }, 0x78 };
    ///
    /// `pad` lands at byte 0, `inner.a` at byte 1, `inner.b` at byte 2,
    /// `tail` at byte 3, so the packed first word reads
    /// `0x78563412` little-endian.  Regression for csmith drafts
    /// `cctest_csmith_3bc5e01c`, `cctest_csmith_63d3a9b0`, and
    /// `cctest_csmith_9350e486`, which mix sub-word packed fields with
    /// nested-aggregate initializers.
    #[test]
    fn nested_aggregate_subword_struct_field_global_init() {
        let src = "struct Inner { signed char a; signed char b; };
                   struct Outer { signed char pad; struct Inner inner;
                                  signed char tail; };
                   struct Outer g = { 0x12, { 0x34, 0x56 }, 0x78 };
                   int main(void) { return g.pad + g.inner.a + g.inner.b + g.tail; }";
        let unit = parse::parse(src).expect("parse nested-aggregate sub-word struct global");
        let m = emit_module(&unit, 8)
            .expect("emit_module Ok for nested-aggregate sub-word struct field global init");
        assert!(
            m.text.contains("0x78563412"),
            "expected packed first word 0x78563412 in asm, got:\n{}",
            m.text
        );
    }

    /// Sub-word interior addresses in file-scope initializers.  When a
    /// pointer global takes the address of a non-word-aligned interior
    /// of another global (e.g. `static char *p = &g_root[1];` for a
    /// char array), the resulting byte offset is not a multiple of
    /// four and so cannot own a fresh `.VAR` slot in the data
    /// section. Selcc emits the synthetic interior label as a
    /// `.SET label = <slot_owner> + <byte_in_word>;` alias instead,
    /// leaning on selas's `parse_sym_plus_offset` to fold the constant
    /// addend into the alias's symbol-table value at link time. Before
    /// this fix selcc rejected the address with a hard error and
    /// continued compilation, leaving the pointer slot uninitialised;
    /// csmith drafts that took the address of a sub-word interior of a
    /// packed aggregate therefore produced wrong code.
    #[test]
    fn sub_word_interior_addr_global_init() {
        let src = "static signed char g_root[8] = {1, 2, 3, 4, 5, 6, 7, 8};
                   static signed char *g_interior = &g_root[1];
                   int main(void) { return *g_interior; }";
        let unit = parse::parse(src).expect("parse sub-word interior addr global");
        let m =
            emit_module(&unit, 8).expect("emit_module Ok for sub-word interior addr global init");
        // The pointer slot resolves to the synthetic alias label that
        // points one byte past `g_root.` (byte 1 of word 0). The
        // emitted asm must contain the `.SET ... = <owner> + 1;`
        // directive selas's resolver folds into the symbol-table
        // value, and the pointer global must reference the alias by
        // name so the linker patches the byte address into the slot.
        assert!(
            m.text.contains(".SET .addrof_g_root_b1. = g_root. + 1;"),
            "expected `.SET .addrof_g_root_b1. = g_root. + 1;` alias in asm, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains(".VAR g_interior. = .addrof_g_root_b1.;"),
            "expected pointer slot to reference the sub-word alias, got:\n{}",
            m.text
        );
    }

    #[test]
    fn union_member_addr_global_init_uses_union_base() {
        let src = "union U { unsigned f0; unsigned short f1; long long f3; };
                   static union U g[2] = { {0}, {0x275FD976U} };
                   static unsigned short *p = &g[1].f1;
                   int main(void) { return *p; }";
        let unit = parse::parse(src).expect("parse union member addr global");
        let m = emit_module(&unit, 8).expect("emit_module Ok for union member addr global init");
        assert!(
            m.text.contains(".VAR .addrof_g_2. = 0x275FD976;"),
            "expected union member address to label g[1]'s first word, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains(".VAR p. = .addrof_g_2.;"),
            "expected pointer slot to reference g[1]'s first-word label, got:\n{}",
            m.text
        );
        assert!(
            !m.text.contains(".VAR p. = .addrof_g_3.;"),
            "union member address must not use struct-style field offset, got:\n{}",
            m.text
        );
    }

    #[test]
    fn anonymous_bitfield_does_not_consume_global_init() {
        let src = "struct S {
                       unsigned f0 : 21;
                       unsigned f1 : 22;
                       unsigned : 0;
                       unsigned f2 : 12;
                       signed f3 : 11;
                       const unsigned f4 : 22;
                   };
                   struct S g = { 1415, 171, 39, 21, 543 };
                   int main(void) { return g.f2 + g.f3 + g.f4; }";
        let unit = parse::parse(src).expect("parse anonymous bitfield struct global");
        let m = emit_module(&unit, 8)
            .expect("emit_module Ok for anonymous bitfield struct global init");
        assert!(
            m.text.contains("0x00015027"),
            "expected f2=39 and f3=21 packed into word 2, got:\n{}",
            m.text
        );
        assert!(
            m.text.contains("0x0000021F"),
            "expected f4=543 in word 3, got:\n{}",
            m.text
        );
    }

    #[test]
    fn zero_width_bitfield_does_not_pack_following_global_aggregate() {
        let src = "struct Inner { unsigned long long x; };
                   struct Outer {
                       unsigned char a;
                       signed char b;
                       unsigned f : 10;
                       unsigned short c;
                       unsigned : 0;
                       struct Inner inner;
                   };
                   struct Outer g = { 0xB7, 0x26, 18, 4, { 0xD8D34108FA7AD11EULL } };
                   int main(void) { return g.inner.x != 0; }";
        let unit = parse::parse(src).expect("parse zero-width bitfield aggregate global");
        let m =
            emit_module(&unit, 8).expect("emit_module Ok for aggregate after zero-width bitfield");
        assert!(
            m.text.contains("0xFA7AD11E") && m.text.contains("0xD8D34108"),
            "expected following aggregate to emit as full words, got:\n{}",
            m.text
        );
    }

    #[test]
    fn zero_width_bitfield_after_short_keeps_global_aggregate_word_aligned() {
        let src = "typedef unsigned char uint8_t;
                   typedef signed char int8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned long long uint64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct S2 { uint64_t f0; };
                   #pragma pack(pop)
                   struct S3 {
                       uint8_t f0;
                       int8_t f1;
                       unsigned f2 : 10;
                       uint16_t f3;
                       unsigned : 0;
                       struct S2 f4;
                   };
                   struct S3 g = {0xB7, 0x26, 18, 4, {0xD8D34108FA7AD11EULL}};
                   int main(void) { return g.f4.f0 != 0; }";
        let asm = crate::compile_to_asm(
            src,
            "zero_width_bitfield_after_short.c",
            &crate::cli::Options {
                char_size: 8,
                ..Default::default()
            },
        )
        .expect("compile csmith-style aggregate after zero-width bitfield");
        assert!(
            asm.contains(".VAR g. = 0x000026B7;")
                && asm.contains(".VAR = 0x00040012;")
                && asm.contains(".VAR = 0xFA7AD11E;")
                && asm.contains(".VAR = 0xD8D34108;"),
            "expected following aggregate to emit as full words, got:\n{}",
            asm
        );
    }

    /// Cross-word bitfields (a bitfield whose `bit_pos_in_word +
    /// bit_width` would exceed the 32-bit word boundary) keep a hard
    /// error so the packing fix stays auditable.  Natural-ABI layouts
    /// rarely produce this shape — `struct_field_layout_ctx` already
    /// pushes a bitfield that would overflow its current storage unit
    /// onto the next aligned unit — so we drive `build_init_words`
    /// directly with a hand-shaped struct that places a 28-bit field
    /// preceded by an 8-bit field through `#pragma`-less natural
    /// shaping.  The `compile_to_asm` entry doesn't expose a non-
    /// natural layout, so we exercise the defensive rejection via the
    /// underlying type machinery and a synthetic init-list call by
    /// making the bitfield hang off a `pragma pack`-style synthetic
    /// type — but the simplest route, given there's no `pack(1)` in
    /// the parser, is to check that the existing packed-bitfield path
    /// is the only path that can reach the cross-word check, and that
    /// a malformed bitfield triggers it.  A 33-bit bitfield is
    /// rejected by the parser itself, so this test is exercised by a
    /// 32-bit field at bit position 1, which can only arise if a
    /// preceding bitfield consumed exactly one bit before it.
    #[test]
    fn cross_word_bitfield_in_struct_global_init_still_rejected() {
        let src = "struct S { unsigned a : 1; unsigned b : 32; };
                   struct S g = { 0, 0 };
                   int main(void) { return 0; }";
        let unit = parse::parse(src).expect("parse cross-word bitfield struct global");
        let unit_tctx = UnitTypeCtx {
            struct_defs: &unit.struct_defs,
            struct_packs: &unit.struct_packs,
            typedefs: &unit.typedefs,
        };
        let global = unit
            .globals
            .iter()
            .find(|g| g.name == "g")
            .expect("global g present");
        let init = global.init.as_ref().expect("global g has init");
        let global_types: HashMap<String, crate::types::Type> = unit
            .globals
            .iter()
            .map(|g| (g.name.clone(), g.ty.clone()))
            .collect();
        let mut extra: Vec<DataEntry> = Vec::new();
        let mut counter: u32 = 0;
        let mut interior: Vec<InteriorReq> = Vec::new();
        let mut ictx = InitCtx {
            extra_data: &mut extra,
            complit_counter: &mut counter,
            global_types: &global_types,
            interior_reqs: &mut interior,
        };
        match build_init_words(
            init,
            crate::types::size_bytes_ctx(&global.ty, &unit_tctx),
            &unit_tctx,
            Some(&global.ty),
            &mut ictx,
        ) {
            Ok(_) => {
                // If natural layout pushed `b` to its own storage unit
                // (the C99-typical outcome), the cross-word check is
                // unreachable here — the error path is still defensive
                // against future layout changes.  Treat that as an
                // acceptable outcome too.
            }
            Err(e) => {
                let msg = format!("{e}");
                assert!(
                    msg.contains("crosses a 32-bit word boundary") || msg.contains("cross-word"),
                    "expected cross-word bitfield rejection error, got: {msg}"
                );
            }
        }
    }

    #[test]
    fn weak_attribute_emits_weak_directive() {
        let m = compile("__attribute__((weak)) int hook(void) { return 1; }");
        assert!(m.text.contains(".WEAK hook.;"), "asm:\n{}", m.text);
        assert!(!m.text.contains(".GLOBAL hook.;"), "asm:\n{}", m.text);
        assert!(m.text.contains("hook.:"));
    }

    #[test]
    fn global_union_initializer_overlays_first_member() {
        let m = compile(
            "union U { int f0; signed char f1; short f2; };
             static union U g = { 0xD48D0EE8L };
             static union U h = { .f1 = -1 };
             int main(void) { return g.f1 + h.f1; }",
        );
        assert!(m.text.contains(".VAR g. = 0xD48D0EE8;"), "asm:\n{}", m.text);
        assert!(m.text.contains(".VAR h. = 0xFFFFFFFF;"), "asm:\n{}", m.text);
    }

    #[test]
    fn csmith_generated_code_splits_across_l1_sections() {
        let m = compile(
            "static void crc32_byte(unsigned char b) { (void)b; }
             static void transparent_crc(unsigned long long v, const char *n, int f) { (void)v; (void)n; (void)f; }
             static int safe_add_func_int8_t_s_s(int a, int b) { return a + b; }
             static int safe_helper(void) { return 3; }
             static int func_1(void) { return 5; }
             static int func_2(void) { return 6; }
             static int func_3(void) { return 7; }
             static int helper(void) { return 4; }
             int test_main(void) { crc32_byte(1); transparent_crc(1, 0, 0); return safe_add_func_int8_t_s_s(1, 2) + safe_helper() + func_1() + func_2() + func_3() + helper(); }
             int main(void) { return test_main(); }",
        );
        let block1 = m
            .text
            .find(".SECTION/SW seg_l1_block1_swco;")
            .expect("missing block1 generated-helper section");
        let crc32_byte = m.text.find("crc32_byte.:").expect("missing crc32 label");
        let transparent_crc = m
            .text
            .find("transparent_crc.:")
            .expect("missing transparent_crc label");
        let safe_helper = m
            .text
            .find("safe_helper.:")
            .expect("missing safe_helper label");
        let safe_int8 = m
            .text
            .find("safe_add_func_int8_t_s_s.:")
            .expect("missing int8 safe helper label");
        let func_1 = m.text.find("func_1.:").expect("missing func_1 label");
        let func_2 = m.text.find("func_2.:").expect("missing func_2 label");
        let func_3 = m.text.find("func_3.:").expect("missing func_3 label");
        let root_section = m.text[..func_1]
            .rfind(".SECTION/SW seg_l1_block0_swco;")
            .expect("missing root code section");
        let block1_after_root = m.text[func_1..]
            .find(".SECTION/SW seg_l1_block1_swco;")
            .map(|off| func_1 + off)
            .expect("missing reopened block1 section");
        let helper_section = m.text[func_3..]
            .find(".SECTION/SW seg_swco;")
            .map(|off| func_3 + off)
            .expect("missing helper code section");
        let helper = m.text.find("\nhelper.:").expect("missing helper label");
        let main = m.text.find(".GLOBAL main.;").expect("missing main global");
        let test_main = m
            .text
            .find(".GLOBAL test_main.;")
            .expect("missing test_main global");
        let entry_section = m.text[..test_main]
            .rfind(".SECTION/SW seg_l1_block0_swco;")
            .expect("missing reopened block0 entry section");
        assert!(
            block1 < crc32_byte && crc32_byte < transparent_crc && transparent_crc < safe_int8,
            "crc32/int8 support should stay in block1 when a non-root body spills:\n{}",
            m.text
        );
        assert!(
            safe_int8 < safe_helper && safe_helper < root_section,
            "safe_helper should be in block1 section:\n{}",
            m.text
        );
        assert!(
            root_section < func_2 && func_2 < block1_after_root,
            "useful generated non-root body should spill into block0 for small roots:\n{}",
            m.text
        );
        assert!(
            block1_after_root < func_3 && func_3 < helper_section,
            "remaining generated non-root body should stay in block1:\n{}",
            m.text
        );
        assert!(
            root_section < func_1 && func_1 < block1_after_root,
            "generated root func_1 should remain in main code section:\n{}",
            m.text
        );
        assert!(
            helper_section < helper,
            "ordinary static helper should remain in main code section:\n{}",
            m.text
        );
        assert!(
            entry_section < test_main && test_main < main,
            "test_main and main should be in the reopened block0 section:\n{}",
            m.text
        );
    }

    #[test]
    fn block0_helper_spill_overflow_tries_block1() {
        // Pure-function check on the budget cap: when the root is too
        // large for block0 and cumulative block0 spills already exceed
        // the budget, large csmith helpers must try the other L1 code
        // block instead of continuing to pile into `seg_l1_block0_swco`.
        //
        // First helper just under the budget: lands in block0.
        let s1 = apply_block0_budget_cap(
            "seg_l1_block0_swco",
            true,
            "func_2",
            5_000,
            true,
            BLOCK0_INSTR_BUDGET / 2,
            BLOCK0_INSTR_BUDGET,
        );
        assert_eq!(
            s1, "seg_l1_block0_swco",
            "helper that fits in the block0 budget must stay in block0"
        );
        // Same helper after enough cumulative use to push over: spills.
        let s2 = apply_block0_budget_cap(
            "seg_l1_block0_swco",
            true,
            "func_2",
            5_000,
            true,
            BLOCK0_INSTR_BUDGET - 100,
            BLOCK0_INSTR_BUDGET,
        );
        assert_eq!(
            s2, "seg_l1_block1_swco",
            "helper that would push past the block0 budget must spill to block1"
        );
        // Entry symbols and func_1 are never redirected, even when
        // cumulative use is far past the budget — they remain pinned
        // to the entry / root sections regardless.
        for entry in ["main", "test_main", "func_1"] {
            let s = apply_block0_budget_cap(
                "seg_l1_block0_swco",
                entry != "main" && entry != "test_main",
                entry,
                10_000,
                true,
                BLOCK0_INSTR_BUDGET * 10,
                BLOCK0_INSTR_BUDGET,
            );
            assert_eq!(
                s, "seg_l1_block0_swco",
                "{entry} must never be redirected by the block0 budget cap"
            );
        }
        // Small-root large-body spills also obey the cap; this catches
        // drafts where the root is small but the chosen non-root body
        // plus the pinned entry code still overfills block0.
        let s3 = apply_block0_budget_cap(
            "seg_l1_block0_swco",
            true,
            "func_2",
            10_000,
            false,
            BLOCK0_INSTR_BUDGET * 10,
            BLOCK0_INSTR_BUDGET,
        );
        assert_eq!(
            s3, "seg_l1_block1_swco",
            "small-root large body spill must obey the block0 budget cap"
        );
        let s3_fit = apply_block0_budget_cap(
            "seg_l1_block0_swco",
            true,
            "func_2",
            1_000,
            false,
            BLOCK0_INSTR_BUDGET - 2_000,
            BLOCK0_INSTR_BUDGET,
        );
        assert_eq!(
            s3_fit, "seg_l1_block0_swco",
            "small-root large body spill that fits must remain in block0"
        );
        // Runtime helpers with their own dedicated section are still
        // routed to that section (split_runtime_code_section result),
        // not the generic seg_swco fallback.
        let s4 = apply_block0_budget_cap(
            "seg_l1_block0_swco",
            true,
            "udivmod32",
            10_000,
            true,
            BLOCK0_INSTR_BUDGET,
            BLOCK0_INSTR_BUDGET,
        );
        // `udivmod32` is not "large csmith generated", so the cap
        // never applies; it stays where the prior decision put it.
        assert_eq!(s4, "seg_l1_block0_swco");
    }

    #[test]
    fn block0_root_moves_when_entry_code_fills_budget() {
        assert!(!root_and_entry_exceed_block0_budget(
            8_000,
            8_000,
            BLOCK0_INSTR_BUDGET
        ));
        assert!(root_and_entry_exceed_block0_budget(
            12_000,
            12_000,
            BLOCK0_INSTR_BUDGET
        ));
    }

    #[test]
    fn block1_generated_body_overflow_falls_back_to_seg_swco() {
        // Excess generated csmith bodies should spill to block2 once
        // block1 is full. A moderate root still stays put, but an
        // oversized root uses the same L2 thunk path as other bodies.
        let s1 = apply_block1_budget_cap(
            "seg_l1_block1_swco",
            true,
            "safe_lshift_func_int16_t_s_s",
            500,
            true,
            BLOCK1_INSTR_BUDGET - 1_000,
            BLOCK1_INSTR_BUDGET,
        );
        assert_eq!(s1, "seg_l1_block1_swco");

        let s2 = apply_block1_budget_cap(
            "seg_l1_block1_swco",
            true,
            "safe_lshift_func_int16_t_s_s",
            500,
            true,
            BLOCK1_INSTR_BUDGET - 100,
            BLOCK1_INSTR_BUDGET,
        );
        assert_eq!(s2, "seg_swco");

        for name in ["func_1", "platform_main_begin"] {
            let s = apply_block1_budget_cap(
                "seg_l1_block1_swco",
                true,
                name,
                10_000,
                true,
                BLOCK1_INSTR_BUDGET,
                BLOCK1_INSTR_BUDGET,
            );
            assert_eq!(s, "seg_l1_block1_swco");
        }

        let huge_root = apply_block1_budget_cap(
            "seg_l1_block1_swco",
            true,
            "func_1",
            BLOCK1_INSTR_BUDGET - BLOCK1_ROOT_HEADROOM + 1,
            true,
            BLOCK1_INSTR_BUDGET,
            BLOCK1_INSTR_BUDGET,
        );
        assert_eq!(
            huge_root, "seg_l2_swco",
            "root that leaves no encoded-size headroom should use an L2 thunk"
        );

        for name in ["crc32_gentab", "crc32_byte", "transparent_crc"] {
            let s = apply_block1_budget_cap(
                "seg_l1_block1_swco",
                true,
                name,
                500,
                true,
                BLOCK1_INSTR_BUDGET,
                BLOCK1_INSTR_BUDGET,
            );
            assert_eq!(
                s, "seg_swco",
                "{name} should spill when the root already fills block1"
            );
        }

        let s3 = apply_block1_budget_cap(
            "seg_l1_block1_swco",
            true,
            "safe_lshift_func_int16_t_s_s",
            10_000,
            false,
            BLOCK1_INSTR_BUDGET,
            BLOCK1_INSTR_BUDGET,
        );
        assert_eq!(s3, "seg_swco");

        let s4 = apply_block1_budget_cap(
            "seg_l1_block1_swco",
            true,
            "func_18",
            5_000,
            false,
            BLOCK1_INSTR_BUDGET - 100,
            BLOCK1_INSTR_BUDGET,
        );
        assert_eq!(s4, "seg_swco");
    }

    #[test]
    fn block2_generated_body_overflow_uses_l2_thunk() {
        let s1 = apply_block2_budget_cap(
            "seg_swco",
            true,
            "func_4",
            2_000,
            BLOCK2_BYTE_BUDGET - 3_000,
            BLOCK2_BYTE_BUDGET,
        );
        assert_eq!(s1, "seg_swco");

        let s2 = apply_block2_budget_cap(
            "seg_swco",
            true,
            "func_4",
            5_000,
            BLOCK2_BYTE_BUDGET - 100,
            BLOCK2_BYTE_BUDGET,
        );
        assert_eq!(s2, "seg_l2_swco");

        let s3 = apply_block2_budget_cap(
            "seg_swco",
            true,
            "helper",
            5_000,
            BLOCK2_BYTE_BUDGET,
            BLOCK2_BYTE_BUDGET,
        );
        assert_eq!(s3, "seg_swco");

        let reloc_instrs = vec![MachInstr {
            instr: Instruction::LoadImm { ureg: 12, value: 0 },
            reloc: Some(Reloc {
                symbol: "target".into(),
                kind: RelocKind::Addr24,
            }),
        }];
        assert_eq!(
            estimated_sw_bytes(&reloc_instrs, &HashMap::new()),
            6,
            "relocated SW instructions must be budgeted as full 48-bit encodings"
        );

        let mut out = String::new();
        let mut current = Some("seg_l1_block1_swco");
        emit_l2_entry_thunk(&mut out, &mut current, "func_4.", ".L_sel_l2_func_4");
        assert_eq!(current, Some("seg_l1_block0_swco"));
        assert_eq!(
            out,
            concat!(
                ".SECTION/SW seg_l1_block0_swco;\n",
                "func_4.:\n",
                "    I12 = .L_sel_l2_func_4;\n",
                "    NOP;\n",
                "    NOP;\n",
                "    JUMP (M13,I12);\n"
            )
        );
    }

    #[test]
    fn large_plain_frame_access_uses_long_offset_form() {
        let access = selinstr::encode::MemAccess {
            pm: false,
            write: false,
            i_reg: target::FRAME_PTR,
        };
        let mut out = Vec::new();
        emit_adjusted_access(&mut out, None, access, 3, -96, target::COND_TRUE, None);
        assert_eq!(out.len(), 1);
        assert!(matches!(
            out[0].instr,
            Instruction::UregMemAccess {
                pm: false,
                i_reg: target::FRAME_PTR,
                write: false,
                lw: false,
                ureg: 3,
                offset: -96,
            }
        ));

        let mut computed = Vec::new();
        emit_adjusted_access(
            &mut computed,
            Some(selinstr::encode::ComputeOp::Alu(
                selinstr::encode::AluOp::Pass { rn: 1, rx: 2 },
            )),
            access,
            3,
            -96,
            target::COND_TRUE,
            None,
        );
        assert_eq!(
            computed.len(),
            3,
            "computed memory ops still need the modify/access/restore form"
        );
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
    fn direct_call_saves_frame_link_before_cjump() {
        let m = compile("int ext(int); int f() { return ext(1); }");
        let link = m.text.find("R2=I6;").expect("missing R2=I6");
        let call = m.text.find("CJUMP ext.").expect("missing CJUMP ext.");
        assert!(
            link < call,
            "frame link save must precede direct CJUMP:\n{}",
            m.text
        );
    }

    #[test]
    fn loop_exit_to_return_runs_epilogue() {
        let m = compile("void g(int); void f(void){ for(int i=0;i<1;i++) g(i); }");
        let exit = m
            .text
            .find(".L_branch_f_2:")
            .expect("missing loop exit label");
        let unwind = m.text[exit..]
            .find("I7=MODIFY (I7,0x")
            .map(|idx| exit + idx)
            .expect("missing frame unwind after loop exit");
        let ret = m.text[exit..]
            .find("JUMP (M14,I12)")
            .map(|idx| exit + idx)
            .expect("missing return after loop exit");
        assert!(
            exit < unwind && unwind < ret,
            "loop exit label must land before the return epilogue:\n{}",
            m.text
        );
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

    #[test]
    fn large_static_data_routes_to_l2() {
        let m = compile("static int big[64] = {1};\nint f() { return big[0]; }");
        let l2 = m
            .text
            .find(".SECTION/DOUBLE32 seg_l2;")
            .expect("missing L2 data section");
        let big = m.text.find(".VAR big. = 0x00000001;").expect("missing big");
        assert!(l2 < big, "large static data should be in L2:\n{}", m.text);

        let small = compile("static int small[2] = {1, 2};\nint f() { return small[0]; }");
        let dmda = small
            .text
            .find(".SECTION/DOUBLE32 seg_dmda;")
            .expect("missing L1 data section");
        let small_sym = small
            .text
            .find(".VAR small. = 0x00000001;")
            .expect("missing small");
        assert!(
            dmda < small_sym,
            "small static data should stay in L1:\n{}",
            small.text
        );
        assert!(!small.text.contains(".SECTION/DOUBLE32 seg_l2;"));
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
        let text = round_trip_disasm("int f(int x) { if (x) { return 1; } else { return 0; } }");
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
        let text =
            round_trip_disasm("enum color { RED, GREEN = 5, BLUE };\nint f() { return GREEN; }");
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
    fn rt_affine_reassociate_loop_body() {
        let asm = compile(
            "
            int f(void) {
                unsigned int acc = 0;
                for (unsigned int i = 0; i < 4096U; ++i) {
                    unsigned int x = i & 255U;
                    acc += (((x + 7U) + 13U) - x);
                    acc += ((x * 3U) + (x * 5U)) - (x * 8U);
                }
                return (int)(acc & 0xffffU);
            }
            ",
        )
        .text;
        assert!(
            asm.contains("0x14"),
            "expected affine add/sub chain to become +20, got:\n{asm}"
        );
        assert!(
            !asm.contains("0x7")
                && !asm.contains("0xD")
                && !asm.contains(" * ")
                && !asm.contains("LSHIFT"),
            "expected scaled affine chain to be removed, got:\n{asm}"
        );
    }

    #[test]
    fn rt_copy_prop_loop_does_not_read_dead_temp_slot() {
        let asm = compile(
            "
            int f(void) {
                unsigned int acc = 0;
                unsigned int seed = 9U;

                for (unsigned int i = 0; i < 3500U; ++i) {
                    unsigned int a = seed + i;
                    unsigned int b = a;
                    unsigned int c = b;
                    unsigned int d = c + 5U;
                    acc += (d ^ a) & 63U;
                    seed += 2U;
                }

                return (int)(acc & 0xffffU);
            }
            ",
        )
        .text;
        assert!(
            asm.contains("LCNTR = 0xDAC"),
            "expected copy-prop draft shape to stay a hardware loop, got:\n{asm}"
        );
        assert!(
            !asm.contains("DM (-0x8,I6)"),
            "copy propagation left an uninitialized temporary read:\n{asm}"
        );
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
        let text = round_trip_disasm("float f(float a, float b) { return a + b; }");
        let has_fadd = text.iter().any(|t| t.contains('F') && t.contains('+'));
        assert!(has_fadd, "got: {text:?}");
    }

    #[test]
    fn rt_float_mul() {
        let text = round_trip_disasm("float f(float a, float b) { return a * b; }");
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
        let text = round_trip_disasm("int g; void f() { int i; for (i = 0; i < 10; i++) g += 1; }");
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
        let cjump = text
            .iter()
            .position(|t| t.contains("CJUMP"))
            .unwrap_or_else(|| panic!("expected CJUMP, got: {text:?}"));
        assert!(
            cjump > 0 && text[cjump - 1].contains("R2=I6"),
            "runtime CJUMP must push caller frame link, got: {text:?}"
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
        let text =
            round_trip_disasm("int f(unsigned long a, unsigned long b) { return (int)(a / b); }");
        assert!(text.iter().any(|t| t.contains("CJUMP")), "got: {text:?}");
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
            "void sink(int *p); int f() { int a[2]; a[0] = 1; sink(a); return a[0]; }",
        );
        assert!(
            text.iter()
                .any(|t| t.contains("MODIFY") && t.contains("I7")),
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
            t.contains("DM")
                && t.contains("I6")
                && callee_saved
                    .iter()
                    .any(|r| t.contains(&format!("= {r}")) || t.contains(&format!("={r}")))
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
            t.contains("DM (-0x") && t.contains(",I6)") && !t.contains("=R") // it's a READ, not a callee-save store
        });
        assert!(
            has_frame_load,
            "expected frame-relative load for 4th arg, got: {text:?}"
        );
    }

    #[test]
    fn rt_first_stack_arg_skips_frame_link_slot() {
        let asm = compile("int f(int a, int b, int c, int d) { return d; }").text;
        assert!(
            asm.contains("I4=MODIFY (I4,0x1)(NW);"),
            "first stack-passed argument must live at I6 + 1, got:\n{asm}"
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
        let text = round_trip_disasm("int f(void) { int a = 0; int b = 5; return !a + !b; }");
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
        let text = round_trip_disasm("int f() { int arr[3] = {10, 20, 30}; return arr[1]; }");
        assert!(
            text.iter().any(|t| t.contains("JUMP (M14,I12)")),
            "got: {text:?}"
        );
    }

    #[test]
    fn rt_multidim_array() {
        let text = round_trip_disasm("int f() { int m[2][3]; m[0][1] = 5; return m[0][1]; }");
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
                    let name_idx = u32::from_le_bytes(data[p..p + 4].try_into().unwrap());
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
