// SPDX-License-Identifier: GPL-3.0
// lower.rs --- AST to IR lowering
// Copyright (c) 2026 Jakob Kastelic

//! AST to IR lowering.
//!
//! Converts each [`Function`] into a linear sequence of [`IrOp`]s using a
//! simple stack-slot scheme for local variables and virtual registers for
//! temporaries.

use std::collections::{HashMap, HashSet};

use crate::ast::{BinaryOp, Expr, Function, SizeofArg, Stmt, UnaryOp};
use crate::error::{Error, Result};
use crate::ir::{Cond, IrOp, Label, VReg};
use crate::target;
use crate::token::IntSuffix;
use crate::types::{Type, TypeCtx};

/// How a local variable is stored.
#[derive(Clone)]
enum LocalStorage {
    /// Variable lives in a register (vreg). Used for parameters that are
    /// never reassigned, avoiding the stack round-trip.
    Reg(VReg),
    /// Variable lives on the stack at a fixed frame offset from I6.
    Stack(u32),
    /// Static local variable stored as a global with the given mangled name.
    Static(String),
}

/// Labels for break/continue inside loops and switch statements.
struct LoopContext {
    break_label: Label,
    /// `None` for switch statements (continue is illegal inside switch).
    continue_label: Option<Label>,
}

/// State maintained while lowering a single function.
struct LowerCtx {
    ops: Vec<IrOp>,
    next_vreg: VReg,
    next_label: Label,
    /// Map from variable name to its storage location.
    locals: HashMap<String, LocalStorage>,
    /// Type of each local variable.
    local_types: HashMap<String, Type>,
    /// Whether a given vreg holds a float value.
    vreg_is_float: HashMap<VReg, bool>,
    /// Whether a given vreg is the lo half of a 64-bit register pair.
    vreg_is_64bit: HashSet<VReg>,
    /// Current frame size in words.
    frame_size: u32,
    /// Names of global variables visible to this function.
    globals: HashMap<String, Type>,
    /// String literals collected during lowering (shared across functions).
    strings: Vec<String>,
    /// Wide string literals collected during lowering.
    wide_strings: Vec<Vec<u32>>,
    /// Stack of active loop/switch contexts for break/continue.
    loop_stack: Vec<LoopContext>,
    /// Goto label map: name -> IR label. Allocated on first use (goto or
    /// label definition), supporting forward references.
    goto_labels: HashMap<String, Label>,
    /// Struct definitions from the translation unit.
    struct_defs: Vec<(String, Vec<(String, Type)>)>,
    /// Enum constants: name -> value.
    enum_constants: HashMap<String, i64>,
    /// Typedef mappings: name -> resolved type.
    typedefs: Vec<(String, Type)>,
    /// Name of the current function (for generating static local symbols).
    func_name: String,
    /// Static local variables: (mangled_name, type, init_expr).
    static_locals: Vec<StaticLocal>,
    /// Stack of saved stack pointer vregs for VLA block scopes. Each entry
    /// corresponds to a scope level that contains at least one VLA; the vreg
    /// holds the saved stack pointer to restore on scope exit.
    vla_save_stack: Vec<VReg>,
    /// Counter tracking how many VLAs are live in the current scope chain.
    /// Used by goto checking: labels defined after a VLA declaration are
    /// VLA-guarded.
    vla_depth: u32,
    /// Records the VLA depth at each label definition. Used to reject gotos
    /// that would jump past a VLA declaration.
    label_vla_depth: HashMap<String, u32>,
    /// Forward gotos whose targets have not been seen yet: (name, vla_depth).
    /// Checked when the label is defined.
    pending_gotos: Vec<(String, u32)>,
    /// VLA dimension vregs: map from VLA variable name to the vreg that
    /// holds its runtime element count (needed for runtime sizeof).
    vla_dims: HashMap<String, VReg>,
    /// Set of known function names (from declarations and definitions).
    known_functions: HashSet<String>,
    /// Return type of the current function (for implicit return warning).
    return_type: Type,
    /// Stack of IR labels for CaseLabel/DefaultLabel statements in nested
    /// switch bodies.  Each entry is a Vec of labels allocated by
    /// `lower_switch`; a running index inside `lower_stmt` picks the next
    /// label to emit when a CaseLabel or DefaultLabel is encountered.
    switch_labels: Vec<Vec<Label>>,
    /// Running index into the innermost `switch_labels` entry.
    switch_label_idx: usize,
    /// Return type of every function defined or declared in this translation
    /// unit, keyed by function name. Used at call sites to decide whether
    /// the callee returns a struct by value (and how many words) so that
    /// the caller can route the result through the R0:R1 / hidden-pointer
    /// ABI. Populated by `emit_module` before lowering each function.
    function_return_types: HashMap<String, Type>,
    /// Frame slot (word index) holding the hidden struct-return pointer
    /// that the caller passed in R1 at entry. `Some` exactly when the
    /// current function returns a struct larger than
    /// `target::STRUCT_RET_MAX_REGS` words; `RetStruct` lowers to a
    /// byte-by-byte copy into `*(DM(-struct_ret_slot, I6))` followed by
    /// `R0 = <that pointer>`.
    struct_ret_slot: Option<u32>,
}

/// Snapshot of the variable-name binding state at block-scope entry.
/// Used by [`LowerCtx::snapshot_scope`] / [`LowerCtx::restore_scope`]
/// to implement C99 6.2.1 block scoping.
struct ScopeSnapshot {
    locals: HashMap<String, LocalStorage>,
    local_types: HashMap<String, Type>,
    vla_dims: HashMap<String, VReg>,
    /// Number of typedef entries at scope entry. Inner-block typedefs
    /// are discarded by truncating back to this length (C99 6.2.1).
    typedefs_len: usize,
    /// Enum constants snapshot — inner `enum { E = 9 }` must not leak
    /// out to the enclosing scope.
    enum_constants: HashMap<String, i64>,
}

/// A static local variable collected during lowering.
#[derive(Debug)]
pub struct StaticLocal {
    /// Mangled symbol name (e.g., `_funcname_varname`).
    pub symbol: String,
    /// Type of the variable.
    pub ty: Type,
    /// Optional initializer expression.
    pub init: Option<Expr>,
}

impl LowerCtx {
    fn new() -> Self {
        Self {
            ops: Vec::new(),
            next_vreg: 0,
            next_label: 0,
            locals: HashMap::new(),
            local_types: HashMap::new(),
            vreg_is_float: HashMap::new(),
            vreg_is_64bit: HashSet::new(),
            frame_size: 0,
            globals: HashMap::new(),
            strings: Vec::new(),
            wide_strings: Vec::new(),
            loop_stack: Vec::new(),
            goto_labels: HashMap::new(),
            struct_defs: Vec::new(),
            enum_constants: HashMap::new(),
            typedefs: Vec::new(),
            func_name: String::new(),
            static_locals: Vec::new(),
            vla_save_stack: Vec::new(),
            vla_depth: 0,
            label_vla_depth: HashMap::new(),
            pending_gotos: Vec::new(),
            vla_dims: HashMap::new(),
            known_functions: HashSet::new(),
            return_type: Type::Void,
            switch_labels: Vec::new(),
            switch_label_idx: 0,
            function_return_types: HashMap::new(),
            struct_ret_slot: None,
        }
    }

    fn alloc_vreg(&mut self) -> VReg {
        let v = self.next_vreg;
        self.next_vreg += 1;
        v
    }

    fn alloc_label(&mut self) -> Label {
        let l = self.next_label;
        self.next_label += 1;
        l
    }

    fn alloc_vreg_float(&mut self) -> VReg {
        let v = self.alloc_vreg();
        self.vreg_is_float.insert(v, true);
        v
    }

    fn is_float_vreg(&self, vreg: VReg) -> bool {
        self.vreg_is_float.get(&vreg).copied().unwrap_or(false)
    }

    /// Allocate a 64-bit register pair (two consecutive vregs).
    /// Returns the lo vreg; hi = lo + 1.
    fn alloc_vreg_pair(&mut self) -> VReg {
        let lo = self.alloc_vreg();
        let _hi = self.alloc_vreg();
        self.vreg_is_64bit.insert(lo);
        lo
    }

    /// Whether a vreg is the lo half of a 64-bit register pair.
    fn is_64bit_vreg(&self, vreg: VReg) -> bool {
        self.vreg_is_64bit.contains(&vreg)
    }

    /// Snapshot the variable-name bindings for block-scope entry. C99
    /// 6.2.1/4 gives each `{...}` its own scope; declarations inside
    /// shadow outer same-name identifiers without destroying them. The
    /// snapshot records the current `locals`, `local_types`, and
    /// `vla_dims` maps so that [`restore_scope`] can discard any
    /// bindings introduced inside the block. Frame slots are *not*
    /// rolled back: stack storage is monotonic across a function and
    /// its layout is fixed at lowering time. Struct / union tag
    /// definitions (C99 6.2.3) live in `struct_defs` and are
    /// intentionally not part of this snapshot.
    fn snapshot_scope(&self) -> ScopeSnapshot {
        ScopeSnapshot {
            locals: self.locals.clone(),
            local_types: self.local_types.clone(),
            vla_dims: self.vla_dims.clone(),
            typedefs_len: self.typedefs.len(),
            enum_constants: self.enum_constants.clone(),
        }
    }

    /// Restore variable-name bindings captured by [`snapshot_scope`],
    /// ending the current block scope. Also rolls back inner-scope
    /// `typedef` and `enum { ... }` constants (C99 6.2.1). Struct and
    /// union *tag* definitions are handled separately: `struct_defs`
    /// is populated once per function by the pre-scan in
    /// `lower_function`, so rolling it back per block would hide
    /// declarations from sibling scopes.
    fn restore_scope(&mut self, snap: ScopeSnapshot) {
        self.locals = snap.locals;
        self.local_types = snap.local_types;
        self.vla_dims = snap.vla_dims;
        self.typedefs.truncate(snap.typedefs_len);
        self.enum_constants = snap.enum_constants;
    }

    fn emit(&mut self, op: IrOp) {
        self.ops.push(op);
    }

    /// Get or allocate an IR label for a goto target name.
    fn goto_label(&mut self, name: &str) -> Label {
        if let Some(&lbl) = self.goto_labels.get(name) {
            lbl
        } else {
            let lbl = self.alloc_label();
            self.goto_labels.insert(name.to_string(), lbl);
            lbl
        }
    }

    /// Allocate a new stack slot and return the frame offset.
    fn alloc_stack_slot(&mut self) -> u32 {
        let offset = self.frame_size;
        self.frame_size += 1;
        offset
    }

}

impl TypeCtx for LowerCtx {
    fn resolve_tag(&self, name: &str) -> Option<&[(String, Type)]> {
        for (def_name, def_fields) in &self.struct_defs {
            if def_name == name && !def_fields.is_empty() {
                return Some(def_fields.as_slice());
            }
        }
        None
    }
    fn resolve_typedef(&self, name: &str) -> Option<&Type> {
        for (td_name, td_ty) in &self.typedefs {
            if td_name == name {
                return Some(td_ty);
            }
        }
        None
    }
}

/// Collect all variable names that appear on the left side of an assignment.
fn assigned_vars(stmts: &[Stmt]) -> HashSet<String> {
    let mut set = HashSet::new();
    for stmt in stmts {
        collect_assigned(stmt, &mut set);
    }
    set
}

fn collect_assigned(stmt: &Stmt, set: &mut HashSet<String>) {
    match stmt {
        Stmt::Expr(expr) | Stmt::Return(Some(expr)) => collect_assigned_expr(expr, set),
        Stmt::Return(None) => {}
        Stmt::VarDecl { init: Some(e), vla_dim: Some(d), .. } => {
            collect_assigned_expr(e, set);
            collect_assigned_expr(d, set);
        }
        Stmt::VarDecl { init: Some(e), .. } => collect_assigned_expr(e, set),
        Stmt::VarDecl { vla_dim: Some(d), .. } => collect_assigned_expr(d, set),
        Stmt::VarDecl { init: None, .. } => {}
        Stmt::If { cond, then_body, else_body } => {
            collect_assigned_expr(cond, set);
            for s in then_body {
                collect_assigned(s, set);
            }
            if let Some(els) = else_body {
                for s in els {
                    collect_assigned(s, set);
                }
            }
        }
        Stmt::While { cond, body } => {
            collect_assigned_expr(cond, set);
            for s in body {
                collect_assigned(s, set);
            }
        }
        Stmt::For { init, cond, step, body } => {
            if let Some(i) = init {
                collect_assigned(i, set);
            }
            if let Some(c) = cond {
                collect_assigned_expr(c, set);
            }
            if let Some(s) = step {
                collect_assigned_expr(s, set);
            }
            for s in body {
                collect_assigned(s, set);
            }
        }
        Stmt::DoWhile { body, cond } => {
            for s in body {
                collect_assigned(s, set);
            }
            collect_assigned_expr(cond, set);
        }
        Stmt::Block(stmts) | Stmt::DeclGroup(stmts) => {
            for s in stmts {
                collect_assigned(s, set);
            }
        }
        Stmt::Switch { expr, body } => {
            collect_assigned_expr(expr, set);
            for s in body {
                collect_assigned(s, set);
            }
        }
        Stmt::CaseLabel(_) | Stmt::DefaultLabel
        | Stmt::Break | Stmt::Continue | Stmt::Goto(_) | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => {}
        Stmt::Label(_, inner) => collect_assigned(inner, set),
    }
}

fn collect_assigned_expr(expr: &Expr, set: &mut HashSet<String>) {
    match expr {
        Expr::Assign { target, value } => {
            if let Expr::Ident(name) = target.as_ref() {
                set.insert(name.clone());
            }
            collect_assigned_expr(target, set);
            collect_assigned_expr(value, set);
        }
        Expr::CompoundAssign { target, value, .. } => {
            if let Expr::Ident(name) = target.as_ref() {
                set.insert(name.clone());
            }
            collect_assigned_expr(target, set);
            collect_assigned_expr(value, set);
        }
        Expr::Binary { lhs, rhs, .. } => {
            collect_assigned_expr(lhs, set);
            collect_assigned_expr(rhs, set);
        }
        Expr::Unary { operand, .. } => collect_assigned_expr(operand, set),
        Expr::Call { args, .. } => {
            for a in args {
                collect_assigned_expr(a, set);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_assigned_expr(func_expr, set);
            for a in args {
                collect_assigned_expr(a, set);
            }
        }
        Expr::Deref(inner)
        | Expr::AddrOf(inner)
        | Expr::PreInc(inner)
        | Expr::PreDec(inner)
        | Expr::PostInc(inner)
        | Expr::PostDec(inner)
        | Expr::Cast(_, inner) => collect_assigned_expr(inner, set),
        Expr::Index(base, idx) => {
            collect_assigned_expr(base, set);
            collect_assigned_expr(idx, set);
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => collect_assigned_expr(base, set),
        Expr::Sizeof(_) => {}
        Expr::Ternary { cond, then_expr, else_expr } => {
            collect_assigned_expr(cond, set);
            collect_assigned_expr(then_expr, set);
            collect_assigned_expr(else_expr, set);
        }
        Expr::IntLit(..) | Expr::FloatLit(_) | Expr::StringLit(_) | Expr::WideStringLit(_)
        | Expr::CharLit(_) | Expr::Ident(_) => {}
        Expr::RealPart(inner) | Expr::ImagPart(inner) => collect_assigned_expr(inner, set),
        Expr::InitList(exprs) => {
            for e in exprs {
                collect_assigned_expr(e, set);
            }
        }
        Expr::Comma(lhs, rhs) => {
            collect_assigned_expr(lhs, set);
            collect_assigned_expr(rhs, set);
        }
        Expr::DesignatedInit { value, .. } => {
            collect_assigned_expr(value, set);
        }
        Expr::ArrayDesignator { index, value } => {
            collect_assigned_expr(index, set);
            collect_assigned_expr(value, set);
        }
    }
}

/// Result of lowering a single function.
#[derive(Debug)]
pub struct LowerResult {
    /// IR operations for the function body.
    pub ops: Vec<IrOp>,
    /// String literals collected during lowering.
    pub strings: Vec<String>,
    /// Wide string literals collected during lowering.
    pub wide_strings: Vec<Vec<u32>>,
    /// Static local variables to be emitted as globals.
    pub static_locals: Vec<StaticLocal>,
    /// Total number of ABI argument slots consumed by this function's
    /// parameters. Scalars consume one slot; struct/union parameters
    /// consume `type_size_words(ty)` slots (one word per slot). The
    /// first `min(arg_slots, ARG_REGS.len())` slots arrive in the ABI
    /// argument registers; the remainder arrive on the stack. The
    /// emit_asm layer uses this to pin the correct number of incoming-
    /// argument vregs to ARG_REGS — passing `params.len()` understates
    /// the count whenever a multi-word struct precedes another
    /// parameter, leaving trailing struct words unpinned.
    pub arg_slots: u32,
}

/// Lower a single function to IR, with knowledge of global variable names,
/// struct definitions, and enum constants from the translation unit.
/// When `known_functions` is empty, implicit declaration checking is skipped.
#[cfg(test)]
pub fn lower_function(
    func: &Function,
    global_types: &HashMap<String, Type>,
    struct_defs: &[(String, Vec<(String, Type)>)],
    enum_constants: &[(String, i64)],
    typedefs: &[(String, Type)],
) -> Result<LowerResult> {
    lower_function_with_known(
        func, global_types, struct_defs, enum_constants, typedefs,
        &HashSet::new(), &HashMap::new(),
    )
}

/// Lower a single function with a set of known function names for
/// implicit declaration checking and a map of callee return types used
/// to route struct-by-value returns through the correct ABI path.
pub fn lower_function_with_known(
    func: &Function,
    global_types: &HashMap<String, Type>,
    struct_defs: &[(String, Vec<(String, Type)>)],
    enum_constants: &[(String, i64)],
    typedefs: &[(String, Type)],
    known_functions: &HashSet<String>,
    function_return_types: &HashMap<String, Type>,
) -> Result<LowerResult> {
    let mut ctx = LowerCtx::new();
    ctx.globals = global_types.clone();
    ctx.struct_defs = struct_defs.to_vec();
    ctx.typedefs = typedefs.to_vec();
    ctx.func_name = func.name.clone();
    ctx.return_type = func.return_type.clone();
    ctx.known_functions = known_functions.clone();
    ctx.function_return_types = function_return_types.clone();
    for (name, val) in enum_constants {
        ctx.enum_constants.insert(name.clone(), *val);
    }

    // Collect local struct/union definitions from the function body so that
    // forward references to locally-defined types can be resolved.
    collect_local_struct_defs(&func.body, &mut ctx.struct_defs);

    // Determine which parameters are reassigned in the function body.
    // Volatile parameters are always treated as reassigned to force stack
    // allocation, ensuring every access goes through memory.
    let mut reassigned = assigned_vars(&func.body);
    for (name, ty) in &func.params {
        if ty.is_volatile() {
            reassigned.insert(name.clone());
        }
    }

    // Variadic function prologue: spill all argument registers (R0-R3) to
    // contiguous stack slots so that va_start/va_arg can walk the parameter
    // area with simple pointer arithmetic. The layout is:
    //   slot 0 = arg 0 (R0), slot 1 = arg 1 (R1), ..., slot 3 = arg 3 (R3)
    // Named parameters are mapped to their respective slots. Variadic args
    // passed in registers (beyond the named params) are also captured.
    if func.is_variadic {
        let num_reg_args = target::ARG_REGS.len() as u32;
        let va_base = ctx.frame_size;
        ctx.frame_size += num_reg_args;

        // Spill all 4 argument registers to contiguous stack slots.
        for reg_idx in 0..num_reg_args {
            let tmp = ctx.alloc_vreg();
            ctx.emit(IrOp::Copy(tmp, reg_idx as VReg));
            ctx.emit(IrOp::Store(tmp, 0, (va_base + reg_idx) as i32));
        }

        // Bind named parameters to their slots in the contiguous area.
        for (i, (name, ty)) in func.params.iter().enumerate() {
            ctx.local_types.insert(name.clone(), ty.clone());
            if i < num_reg_args as usize {
                ctx.locals.insert(name.clone(), LocalStorage::Stack(va_base + i as u32));
            } else {
                // Named params beyond register count: on caller's stack.
                // Copy to a local slot so address-of works.
                let stack_offset = (i - num_reg_args as usize) as u32;
                let slot_offset = ctx.alloc_stack_slot();
                let param_vreg = ctx.alloc_vreg();
                let is_float_param = ty.is_float();
                if is_float_param {
                    ctx.vreg_is_float.insert(param_vreg, true);
                }
                ctx.emit(IrOp::LoadStackArg(param_vreg, stack_offset));
                ctx.emit(IrOp::Store(param_vreg, 0, slot_offset as i32));
                ctx.locals.insert(name.clone(), LocalStorage::Stack(slot_offset));
            }
        }
    }

    // Bind parameters to virtual registers pre-loaded from the ABI
    // argument registers. Scalars consume one ABI slot; struct/union
    // parameters consume `type_size_words(ty)` consecutive slots (one
    // word per slot). A `slot_idx` counter walks across the full
    // argument-slot sequence — using the parameter index `i` instead
    // aliases slot numbers whenever a multi-word struct precedes
    // another parameter: `dot(struct vec2 a, struct vec2 b)` would
    // map both `a`'s second word and `b`'s first word to slot 1,
    // reading the same R8 for two different fields.
    //
    // First, count total slots so emit_asm knows how many incoming-
    // argument vregs to pin to ARG_REGS (via `arg_slots` on LowerResult).
    let mut total_slots: u32 = 0;
    for (_, ty) in &func.params {
        let is_scalar = ty.is_scalar()
            || matches!(ty, Type::Void | Type::Typedef(_)
                | Type::Enum { .. });
        if !is_scalar && is_struct_type(ty, &ctx) {
            total_slots += type_size_words(ty, &ctx);
        } else {
            total_slots += 1;
        }
    }
    if !func.is_variadic {
    // Pre-allocate one vreg per register-passed argument slot so that
    // vreg IDs 0..min(total_slots, ARG_REGS.len()) coincide with slot
    // indices. emit_asm pins vregs 0..num_params to ARG_REGS[0..num_params],
    // so the correspondence must be slot-based (not param-based) to keep
    // struct-by-value consistent with the caller's flat-slot layout.
    //
    // Always consume at least one slot: isel's `Load(dst, base, offset)`
    // (and `Store(val, base, offset)`) treats `base == 0` as the
    // sentinel for a frame-relative access, so handing VReg 0 out to a
    // body instruction as a pointer would silently route through the
    // frame path and read whatever sits at `DM(-offset-1, I6)` instead
    // of the intended indirect target. For functions with no register-
    // passed arguments (`test_main`-style entry points) this would
    // collapse any pointer-through-a-data-reg access -- including the
    // struct-return buffer reads from `lower_struct_expr_addr` -- onto
    // an unrelated frame slot. Burning vreg 0 on an unused sentinel
    // reserves the name without costing a physical register: regalloc
    // never maps unreferenced vregs.
    let reg_slots = (total_slots as usize).min(target::ARG_REGS.len()).max(1);
    for slot in 0..reg_slots {
        let v = ctx.alloc_vreg();
        debug_assert_eq!(v as usize, slot);
    }

    let mut slot_idx: usize = 0;
    for (name, ty) in func.params.iter() {
        // Classify param: integer/pointer types use R-registers, float uses
        // F-registers, structs/unions are passed as consecutive words.
        let is_float_param = ty.is_float();
        let is_scalar = ty.is_scalar()
            || matches!(ty, Type::Void | Type::Typedef(_)
                | Type::Enum { .. });
        ctx.local_types.insert(name.clone(), ty.clone());

        // Struct/union parameters passed by value: allocate a local stack
        // slot large enough for all words and store the incoming words.
        // The SHARC stack grows downward, so field w (byte offset
        // `w * 4`) must live at the slot `w` words above the deepest
        // reserved slot; the recorded base is therefore the deepest
        // word (`slot + num_words - 1`) and writes walk upward.
        if !is_scalar && is_struct_type(ty, &ctx) {
            let num_words = type_size_words(ty, &ctx);
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            let base_slot = slot + num_words - 1;
            // Unpack the ABI-passed words through the same
            // byte-addressable indirect path (`FrameAddr` +
            // `Store(val, base_addr, w)` with non-zero base) that
            // `Expr::Member` reads use. Frame-direct stores
            // (`Store(val, 0, slot)`) emit the Type-2
            // `DM(-slot, I6)` form, which hits a different physical
            // bank than the Type-3 post-modify form used by reads in
            // `-char-size-8` byte-addressable mode — field y landed
            // at the word slot while reads looked at the adjacent
            // byte and returned truncated junk (`got 403` for
            // `a.x = 3, a.y = 4` -> 0x0403).
            let base_addr_vreg = ctx.alloc_vreg();
            ctx.emit(IrOp::FrameAddr(base_addr_vreg, base_slot as i32));
            for w in 0..num_words {
                let src_slot_idx = slot_idx + w as usize;
                let src_vreg = if src_slot_idx < target::ARG_REGS.len() {
                    let tmp = ctx.alloc_vreg();
                    ctx.emit(IrOp::Copy(tmp, src_slot_idx as VReg));
                    tmp
                } else {
                    let stack_off = (src_slot_idx - target::ARG_REGS.len()) as u32;
                    let tmp = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadStackArg(tmp, stack_off));
                    tmp
                };
                // Offset is in bytes — `Store(val, base, off)` with a
                // non-zero base is emitted via the byte-addressable
                // indirect-access path, so the stride between fields
                // must be `4 * w` (the byte-offset increment between
                // 32-bit words) to match the layout `Expr::Member`
                // reads back.
                ctx.emit(IrOp::Store(src_vreg, base_addr_vreg, (w * 4) as i32));
            }
            ctx.locals.insert(name.clone(), LocalStorage::Stack(base_slot));
            slot_idx += num_words as usize;
            continue;
        }

        if slot_idx >= target::ARG_REGS.len() {
            // Parameters beyond the register-passed slots: loaded from
            // the caller's stack-arg area.
            let stack_offset = (slot_idx - target::ARG_REGS.len()) as u32;
            if reassigned.contains(name) {
                let slot_offset = ctx.alloc_stack_slot();
                let param_vreg = ctx.alloc_vreg();
                if is_float_param {
                    ctx.vreg_is_float.insert(param_vreg, true);
                }
                ctx.emit(IrOp::LoadStackArg(param_vreg, stack_offset));
                ctx.emit(IrOp::Store(param_vreg, 0, slot_offset as i32));
                ctx.locals.insert(name.clone(), LocalStorage::Stack(slot_offset));
            } else {
                let param_vreg = ctx.alloc_vreg();
                if is_float_param {
                    ctx.vreg_is_float.insert(param_vreg, true);
                }
                ctx.emit(IrOp::LoadStackArg(param_vreg, stack_offset));
                ctx.locals.insert(name.clone(), LocalStorage::Reg(param_vreg));
            }
            slot_idx += 1;
            continue;
        }
        // Scalar param in a register slot: vreg `slot_idx` is the
        // pre-allocated, ABI-pinned incoming-argument vreg.
        let arg_vreg = slot_idx as VReg;
        if is_float_param {
            ctx.vreg_is_float.insert(arg_vreg, true);
        }
        if reassigned.contains(name) {
            let slot_offset = ctx.alloc_stack_slot();
            let param_vreg = ctx.alloc_vreg();
            if is_float_param {
                ctx.vreg_is_float.insert(param_vreg, true);
            }
            ctx.emit(IrOp::Copy(param_vreg, arg_vreg));
            ctx.emit(IrOp::Store(param_vreg, 0, slot_offset as i32));
            ctx.locals.insert(name.clone(), LocalStorage::Stack(slot_offset));
        } else if target::ARG_REGS[slot_idx] == target::RETURN_REG {
            // The ABI argument register for this slot is R0, which is
            // also the return-value register. The regalloc pins both
            // this param vreg and RETURN_REG_VREG to physical R0, so
            // any intermediate computation that writes through
            // RETURN_REG_VREG (or that the allocator spills into R0)
            // will silently clobber the parameter. Snapshot it into a
            // fresh vreg immediately so the allocator can place it in a
            // non-conflicting register.
            let fresh = ctx.alloc_vreg();
            if is_float_param {
                ctx.vreg_is_float.insert(fresh, true);
            }
            ctx.emit(IrOp::Copy(fresh, arg_vreg));
            ctx.locals.insert(name.clone(), LocalStorage::Reg(fresh));
        } else {
            ctx.locals.insert(name.clone(), LocalStorage::Reg(arg_vreg));
        }
        slot_idx += 1;
    }
    }

    // Hidden struct-return pointer: when this function's return type is
    // a struct larger than `target::STRUCT_RET_MAX_REGS` words, the
    // caller allocates the destination buffer and passes its address
    // in R1 (alongside the scalar argument registers R4/R8/R12). The
    // callee must write the returned struct through that pointer and
    // leave R0 = R1 on exit (the ABI convention). Capture R1
    // into a frame slot here at entry so `RetStruct` can reload it
    // regardless of how many intervening computations clobber R1.
    if is_struct_type(&func.return_type, &ctx) {
        let ret_words = type_size_words(&func.return_type, &ctx);
        if ret_words > target::STRUCT_RET_MAX_REGS {
            let ptr_vreg = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadStructRetPtr(ptr_vreg));
            let slot = ctx.alloc_stack_slot();
            ctx.emit(IrOp::Store(ptr_vreg, 0, slot as i32));
            ctx.struct_ret_slot = Some(slot);
        }
    }

    // Lower the function body.
    for stmt in &func.body {
        lower_stmt(&mut ctx, stmt)?;
    }

    // If the function falls through without a return, emit an implicit one.
    // Check whether the code after the LAST label (the final basic block)
    // ends with Ret or unconditional Branch.  If the last op is itself a
    // Label with nothing after it, the block is empty — which means
    // fallthrough into it is possible and a return is needed, UNLESS
    // every predecessor of that label is an unconditional Branch or Ret
    // (e.g. a switch break label where all cases returned).
    let last_label_pos = ctx.ops.iter().rposition(|op| matches!(op, IrOp::Label(_)));
    let needs_ret = match last_label_pos {
        None => {
            // No labels at all — check if the function ends with Ret.
            ctx.ops.last().is_none_or(|op| !matches!(op, IrOp::Ret(_) | IrOp::RetStruct { .. }))
        }
        Some(pos) => {
            let label_id = match &ctx.ops[pos] {
                IrOp::Label(id) => *id,
                _ => unreachable!(),
            };
            let tail = &ctx.ops[pos + 1..];
            if tail.is_empty() {
                // Empty block after the last label.  It needs a return
                // if the label is reachable by fallthrough (preceding op
                // is not a terminator) or by any conditional branch.
                let fallthrough = pos == 0
                    || !matches!(&ctx.ops[pos - 1], IrOp::Ret(_) | IrOp::Branch(_));
                let cond_target = ctx.ops.iter().any(|op| {
                    matches!(op, IrOp::BranchCond(_, tgt) if *tgt == label_id)
                });
                fallthrough || cond_target
            } else {
                let last_tail = tail.iter().rev()
                    .find(|op| !matches!(op, IrOp::Nop));
                last_tail.is_none_or(|op| !matches!(op, IrOp::Ret(_) | IrOp::RetStruct { .. } | IrOp::Branch(_)))
            }
        }
    };
    if needs_ret {
        if !matches!(ctx.return_type, Type::Void) {
            eprintln!(
                "warning: control reaches end of non-void function '{}'",
                func.name
            );
        }
        ctx.emit(IrOp::Ret(None));
    }

    Ok(LowerResult {
        ops: ctx.ops,
        strings: ctx.strings,
        wide_strings: ctx.wide_strings,
        static_locals: ctx.static_locals,
        arg_slots: total_slots,
    })
}

fn lower_stmt(ctx: &mut LowerCtx, stmt: &Stmt) -> Result<()> {
    match stmt {
        Stmt::Return(expr) => {
            // `return <struct>;` requires routing the value through the
            // struct-by-value ABI (R0:R1 for small structs, hidden-
            // pointer copy for larger ones) instead of the single-word
            // `Ret(Some(vreg))` scalar path -- the latter would collapse
            // the struct to its first loaded word and the caller would
            // read only one field of the result.
            if let Some(e) = expr {
                let returns_struct = is_struct_type(&ctx.return_type, ctx);
                if returns_struct {
                    let num_words = type_size_words(&ctx.return_type, ctx);
                    let src_addr = lower_struct_expr_addr(ctx, e)?;
                    let dst_addr = if num_words > target::STRUCT_RET_MAX_REGS {
                        // Reload the hidden struct-return pointer the
                        // caller passed in R1: it was captured into a
                        // frame slot at function entry, so any
                        // intervening user code that happened to use
                        // R1 as a scratch has not lost it.
                        let slot = ctx.struct_ret_slot
                            .expect("large struct return without hidden-ptr slot");
                        let v = ctx.alloc_vreg();
                        ctx.emit(IrOp::Load(v, 0, slot as i32));
                        Some(v)
                    } else {
                        None
                    };
                    ctx.emit(IrOp::RetStruct { src_addr, dst_addr, num_words });
                    return Ok(());
                }
            }
            let val = match expr {
                Some(e) => Some(lower_expr(ctx, e)?),
                None => None,
            };
            ctx.emit(IrOp::Ret(val));
        }
        Stmt::Expr(expr) => {
            lower_expr(ctx, expr)?;
        }
        Stmt::VarDecl { name, ty, init, is_static, vla_dim } => {
            // Standalone struct/union definition (no variable name).
            if name.is_empty() {
                // Type already collected by collect_local_struct_defs.
            } else if *is_static {
                let mangled = format!("_{}_{}", ctx.func_name, name);
                ctx.globals.insert(mangled.clone(), ty.clone());
                ctx.local_types.insert(name.clone(), ty.clone());
                ctx.locals.insert(name.clone(), LocalStorage::Static(mangled.clone()));
                ctx.static_locals.push(StaticLocal {
                    symbol: mangled,
                    ty: ty.clone(),
                    init: init.clone(),
                });
            } else if let Some(dim_expr) = vla_dim {
                // VLA: runtime stack allocation.
                // Evaluate the dimension expression to get element count.
                let count_vreg = lower_expr(ctx, dim_expr)?;

                // Compute total allocation size in words: count * elem_size.
                let elem_ty = match ty {
                    Type::Array(elem, _) => elem,
                    _ => unreachable!("VLA must be Array type"),
                };
                let elem_words = crate::types::size_words_ctx(elem_ty, ctx).max(1);
                let total_vreg = if elem_words == 1 {
                    count_vreg
                } else {
                    let esz = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(esz, elem_words as i64));
                    let total = ctx.alloc_vreg();
                    ctx.emit(IrOp::Mul(total, count_vreg, esz));
                    total
                };

                // Allocate on the stack: SP -= total, pointer = SP.
                let ptr_vreg = ctx.alloc_vreg();
                ctx.emit(IrOp::StackAlloc(ptr_vreg, total_vreg));

                // Store the pointer in a regular stack slot so the VLA
                // variable can be addressed like any other local.
                let slot_offset = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(ptr_vreg, 0, slot_offset as i32));
                ctx.locals.insert(name.clone(), LocalStorage::Stack(slot_offset));
                // Store as pointer type so indexing works correctly.
                let ptr_ty = Type::Pointer(match ty {
                    Type::Array(elem, _) => elem.clone(),
                    _ => unreachable!(),
                });
                ctx.local_types.insert(name.clone(), ptr_ty);

                // Record the dimension vreg for runtime sizeof.
                ctx.vla_dims.insert(name.clone(), count_vreg);

                // Track VLA depth for goto checking.
                ctx.vla_depth += 1;
            } else {
                // Use `type_size_words` (not `ty.size_words`) so that a
                // struct declared by tag name — whose fields are resolved
                // from `ctx.struct_defs` rather than carried inline on the
                // AST type — reserves the correct number of stack slots.
                let num_words = type_size_words(ty, ctx).max(1);
                let slot_offset = ctx.frame_size;
                ctx.frame_size += num_words;
                // For any multi-word aggregate (array, struct, union) the
                // recorded storage slot is the *last* word of the
                // contiguous block, because the SHARC stack grows downward
                // (toward more-negative offsets from I6) but C field /
                // element offsets walk upward (`&a[0] + i`, `&p + offsetof`).
                // Field 0 / element 0 therefore lives at the deepest slot
                // so that increasing member byte offsets correspond to
                // increasing memory addresses. Scalars (including
                // `long long`, which is handled via Store64/Load64 and
                // does not use member-offset arithmetic) keep their
                // historical `slot_offset` base so their two-word layout
                // is unaffected.
                let is_aggregate = matches!(ty,
                    Type::Array(..) | Type::Struct { .. } | Type::Union { .. });
                let storage_slot = if is_aggregate {
                    slot_offset + num_words - 1
                } else {
                    slot_offset
                };
                ctx.locals.insert(name.clone(), LocalStorage::Stack(storage_slot));
                ctx.local_types.insert(name.clone(), ty.clone());
                if let Some(Expr::InitList(items)) = init {
                    // Aggregates store element `i` at
                    // `slot_offset + num_words - 1 - i` so that walking
                    // upward from the lowest slot (the storage base) hits
                    // fields / elements in increasing-offset order.
                    // Non-aggregate scalar initializers (including the
                    // degenerate `int x = {5};` form) keep the single
                    // slot at `slot_offset`.
                    lower_aggregate_init(
                        ctx, items, ty, slot_offset, num_words, is_aggregate,
                    )?;
                } else if let Some(init_expr) = init {
                    // `char s[] = "hello"` and friends: expand the
                    // string literal into per-element stores.  Without
                    // this special case the generic scalar path below
                    // would store the *address* of the rodata copy into
                    // s[0], leaving s[1..] uninitialised garbage --- so
                    // s[4] reads whatever happened to be on the stack.
                    // The array's element count came from the literal's
                    // length (including the trailing NUL), so we always
                    // have room to walk one slot per byte.
                    if let (Expr::StringLit(s), Type::Array(elem_ty, n)) =
                        (init_expr, ty)
                    {
                        if crate::types::size_bytes_ctx(elem_ty, ctx) == 1 {
                            // Char-element arrays are byte-packed: four
                            // bytes per word, little-endian.  The
                            // initializer fills the declared length and
                            // zero-pads the rest of the containing word
                            // so byte reads past the NUL see zero.
                            let declared = n.unwrap_or(0);
                            let bytes = s.as_bytes();
                            let total = declared.max(bytes.len());
                            let packed_words = total.div_ceil(4).max(1);
                            for wi in 0..packed_words {
                                let mut w: u32 = 0;
                                for b in 0..4 {
                                    let bi = wi * 4 + b;
                                    if bi < total {
                                        let byte = bytes.get(bi).copied().unwrap_or(0);
                                        w |= (byte as u32) << (b * 8);
                                    }
                                }
                                let val = ctx.alloc_vreg();
                                ctx.emit(IrOp::LoadImm(val, w as i64));
                                let elem_slot = slot_offset + num_words - 1 - (wi as u32);
                                ctx.emit(IrOp::Store(val, 0, elem_slot as i32));
                            }
                            return Ok(());
                        }
                    }
                    if is_struct_type(ty, ctx) && num_words > 1 {
                        let src_addr = lower_struct_expr_addr(ctx, init_expr)?;
                        let dst_addr = ctx.alloc_vreg();
                        // Use `storage_slot` so the copy starts at the
                        // deepest word (field 0) and walks upward.
                        ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
                        emit_struct_copy(ctx, dst_addr, src_addr, num_words);
                    } else if ty.is_long_long() {
                        let val = lower_expr(ctx, init_expr)?;
                        // Widen 32-bit value to 64-bit if needed.
                        let val = if !ctx.is_64bit_vreg(val) {
                            widen_to_64(ctx, val, init_expr)
                        } else {
                            val
                        };
                        ctx.emit(IrOp::Store64(val, 0, storage_slot as i32));
                    } else {
                        let val = lower_expr(ctx, init_expr)?;
                        let val = coerce_vreg(ctx, val, ty);
                        ctx.emit(IrOp::Store(val, 0, storage_slot as i32));
                    }
                }
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            lower_if(ctx, cond, then_body, else_body.as_deref())?;
        }
        Stmt::While { cond, body } => {
            lower_while(ctx, cond, body)?;
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            lower_for(ctx, init.as_deref(), cond.as_ref(), step.as_ref(), body)?;
        }
        Stmt::DoWhile { body, cond } => {
            lower_do_while(ctx, body, cond)?;
        }
        Stmt::Block(stmts) => {
            lower_block_with_vla_scope(ctx, stmts)?;
        }
        Stmt::DeclGroup(stmts) => {
            // Parser synthesizes this for `int a=1, b=2;` — a single
            // declaration with multiple declarators (C99 6.7/5). All
            // names are in the enclosing scope; no scope push/pop.
            for s in stmts {
                lower_stmt(ctx, s)?;
            }
        }
        Stmt::EnumDecl(consts) => {
            // Block-scoped `enum { X = v, ... };` — bind each constant
            // in the current scope. The enclosing block's
            // `restore_scope` rolls these back on scope exit so outer
            // enumerators with the same name are uncovered (C99 6.2.1).
            for (name, val) in consts {
                ctx.enum_constants.insert(name.clone(), *val);
            }
        }
        Stmt::Switch { expr, body } => {
            lower_switch(ctx, expr, body)?;
        }
        Stmt::CaseLabel(_) | Stmt::DefaultLabel => {
            // Emit the next IR label allocated by the enclosing lower_switch.
            if let Some(labels) = ctx.switch_labels.last() {
                let idx = ctx.switch_label_idx;
                ctx.emit(IrOp::Label(labels[idx]));
                ctx.switch_label_idx = idx + 1;
            }
        }
        Stmt::Break => {
            let lc = ctx.loop_stack.last().ok_or_else(|| {
                Error::NotImplemented("break outside loop or switch".into())
            })?;
            let lbl = lc.break_label;
            ctx.emit(IrOp::Branch(lbl));
        }
        Stmt::Continue => {
            // Walk the loop stack backwards to find the nearest context
            // that has a continue label (i.e. skip switch contexts).
            let lbl = ctx.loop_stack.iter().rev()
                .find_map(|lc| lc.continue_label)
                .ok_or_else(|| {
                    Error::NotImplemented("continue outside loop".into())
                })?;
            ctx.emit(IrOp::Branch(lbl));
        }
        Stmt::Goto(name) => {
            // Check if label was already defined at a different VLA depth.
            if let Some(&label_depth) = ctx.label_vla_depth.get(name.as_str()) {
                if label_depth > ctx.vla_depth {
                    return Err(Error::NotImplemented(format!(
                        "goto '{}' jumps into scope of variable-length array",
                        name
                    )));
                }
            } else {
                // Forward goto: record for checking when label is defined.
                ctx.pending_gotos.push((name.clone(), ctx.vla_depth));
            }
            let lbl = ctx.goto_label(name);
            ctx.emit(IrOp::Branch(lbl));
        }
        Stmt::Label(name, inner) => {
            // Record the VLA depth at this label definition.
            ctx.label_vla_depth.insert(name.clone(), ctx.vla_depth);
            // Check pending forward gotos that target this label.
            for (goto_name, goto_depth) in std::mem::take(&mut ctx.pending_gotos) {
                if goto_name == *name && goto_depth < ctx.vla_depth {
                    return Err(Error::NotImplemented(format!(
                        "goto '{}' jumps into scope of variable-length array",
                        name
                    )));
                }
                if goto_name != *name {
                    ctx.pending_gotos.push((goto_name, goto_depth));
                }
            }
            let lbl = ctx.goto_label(name);
            ctx.emit(IrOp::Label(lbl));
            lower_stmt(ctx, inner)?;
        }
        Stmt::Asm(_asm_str) => {
            // Inline assembly is recorded but not lowered to IR.
            // The encoder does not yet support inline asm emission.
            ctx.emit(IrOp::Nop);
        }
    }
    Ok(())
}

/// Check whether a block of statements contains any VLA declarations.
fn block_has_vla(stmts: &[Stmt]) -> bool {
    stmts.iter().any(|s| matches!(s, Stmt::VarDecl { vla_dim: Some(_), .. }))
}

/// Lower a block of statements with VLA scope save/restore. If the block
/// contains VLA declarations, the stack pointer is saved before the first
/// statement and restored after the last.
fn lower_block_with_vla_scope(ctx: &mut LowerCtx, stmts: &[Stmt]) -> Result<()> {
    let has_vla = block_has_vla(stmts);
    let saved_depth = ctx.vla_depth;
    let snap = ctx.snapshot_scope();

    if has_vla {
        // Save stack pointer before any VLA allocations in this block.
        let save_vreg = ctx.alloc_vreg();
        ctx.emit(IrOp::StackSave(save_vreg));
        ctx.vla_save_stack.push(save_vreg);
    }

    for s in stmts {
        lower_stmt(ctx, s)?;
    }

    if has_vla {
        // Restore the stack pointer, freeing all VLAs in this block.
        if let Some(save_vreg) = ctx.vla_save_stack.pop() {
            ctx.emit(IrOp::StackRestore(save_vreg));
        }
        ctx.vla_depth = saved_depth;
    }
    ctx.restore_scope(snap);
    Ok(())
}

/// Compute the byte offset and type of a named field within a struct.
///
/// Returned as a byte offset so that callers can add it directly to a
/// byte-addressed struct pointer (same convention as C99 `offsetof`
/// and as `scale_index_by_elem` for array indexing). Using a
/// word-scaled offset here would collide with the byte-scaled offsets
/// produced by `Expr::Index` / `Expr::Binary` pointer arithmetic and
/// cause adjacent fields to overlap on every struct access.
fn struct_field_offset(
    fields: &[(String, Type)],
    field_name: &str,
    ctx: &LowerCtx,
) -> Option<(u32, Type)> {
    // Direct lookup in top-level fields — delegate layout to the
    // ctx-aware routine so tag-only aggregate fields are sized
    // correctly rather than collapsing to 0 bytes.
    if fields.iter().any(|(n, _)| n == field_name) {
        let (byte_off, _, _) = crate::types::struct_field_layout_ctx(fields, field_name, ctx)?;
        let ty = fields.iter()
            .find(|(n, _)| n == field_name)
            .map(|(_, t)| t.clone())?;
        return Some((byte_off, ty));
    }
    // Search inside anonymous struct/union members.
    for (name, ty) in fields {
        if !name.starts_with("__anon") { continue; }
        let (anon_byte_off, _, _) = crate::types::struct_field_layout_ctx(fields, name, ctx)?;
        match ty {
            Type::Union { fields: inner, .. } => {
                if let Some(ft) = union_field_type(inner, field_name, ctx) {
                    return Some((anon_byte_off, ft));
                }
            }
            Type::Struct { fields: inner, .. } => {
                if let Some((nested_off, ft)) = struct_field_offset(inner, field_name, ctx) {
                    return Some((anon_byte_off + nested_off, ft));
                }
            }
            _ => {}
        }
    }
    None
}

fn union_field_type(fields: &[(String, Type)], field_name: &str, ctx: &LowerCtx) -> Option<Type> {
    // Direct lookup first.
    if let Some(t) = fields.iter()
        .find(|(n, _)| n == field_name)
        .map(|(_, t)| t.clone())
    {
        return Some(t);
    }
    // Search inside anonymous struct/union members.
    for (name, ty) in fields {
        if !name.starts_with("__anon") { continue; }
        match ty {
            Type::Union { fields: inner, .. } => {
                if let Some(t) = union_field_type(inner, field_name, ctx) {
                    return Some(t);
                }
            }
            Type::Struct { fields: inner, .. } => {
                if let Some((_, t)) = struct_field_offset(inner, field_name, ctx) {
                    return Some(t);
                }
            }
            _ => {}
        }
    }
    None
}

fn is_union_type(ty: &Type) -> bool {
    match ty {
        Type::Union { .. } => true,
        Type::Const(inner) | Type::Volatile(inner) => is_union_type(inner),
        _ => false,
    }
}

/// Recursively scan statements for struct/union definitions in VarDecl types
/// and register them so that forward references within the function can be
/// resolved.
fn collect_local_struct_defs(stmts: &[Stmt], defs: &mut Vec<(String, Vec<(String, Type)>)>) {
    for stmt in stmts {
        match stmt {
            Stmt::VarDecl { ty, .. } => collect_type_defs(ty, defs),
            Stmt::If { then_body, else_body, .. } => {
                collect_local_struct_defs(then_body, defs);
                if let Some(eb) = else_body {
                    collect_local_struct_defs(eb, defs);
                }
            }
            Stmt::While { body, .. }
            | Stmt::DoWhile { body, .. } => collect_local_struct_defs(body, defs),
            Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    collect_local_struct_defs(std::slice::from_ref(init.as_ref()), defs);
                }
                collect_local_struct_defs(body, defs);
            }
            Stmt::Block(inner) | Stmt::DeclGroup(inner) => {
                collect_local_struct_defs(inner, defs)
            }
            Stmt::Switch { body, .. } => {
                collect_local_struct_defs(body, defs);
            }
            _ => {}
        }
    }
}

fn collect_type_defs(ty: &Type, defs: &mut Vec<(String, Vec<(String, Type)>)>) {
    match ty {
        Type::Struct { name: Some(n), fields } | Type::Union { name: Some(n), fields } => {
            if !fields.is_empty() {
                // Replace any existing entry (local shadows file-scope).
                if let Some(pos) = defs.iter().position(|(dn, _)| dn == n) {
                    defs[pos].1 = fields.clone();
                } else {
                    defs.push((n.clone(), fields.clone()));
                }
            }
            for (_, fty) in fields {
                collect_type_defs(fty, defs);
            }
        }
        Type::Pointer(inner) | Type::Array(inner, _) | Type::Const(inner)
        | Type::Volatile(inner) => collect_type_defs(inner, defs),
        _ => {}
    }
}

/// Resolve a struct type to its list of fields, looking up named struct
/// references in the context's struct_defs.
fn resolve_struct_fields<'a>(ty: &'a Type, ctx: &'a LowerCtx) -> Option<&'a [(String, Type)]> {
    match ty {
        Type::Struct { fields, name, .. } | Type::Union { fields, name, .. } => {
            if fields.is_empty() {
                // Named struct/union reference with no inline fields — look up in defs.
                if let Some(sname) = name {
                    for (def_name, def_fields) in &ctx.struct_defs {
                        if def_name == sname && !def_fields.is_empty() {
                            return Some(def_fields.as_slice());
                        }
                    }
                }
                None
            } else {
                Some(fields.as_slice())
            }
        }
        Type::Volatile(inner) | Type::Const(inner) => resolve_struct_fields(inner, ctx),
        Type::Typedef(name) => {
            // Look up typedef — resolve to its target type, then recurse.
            for (td_name, td_ty) in &ctx.typedefs {
                if td_name == name {
                    return resolve_struct_fields(td_ty, ctx);
                }
            }
            // Also try struct_defs directly (typedef name might match struct name).
            for (def_name, def_fields) in &ctx.struct_defs {
                if def_name == name {
                    return Some(def_fields.as_slice());
                }
            }
            None
        }
        _ => None,
    }
}

/// If the (possibly qualified) type is a pointer, return the pointee.
fn strip_to_pointer(ty: &Type) -> Option<&Type> {
    match ty.unqualified() {
        Type::Pointer(inner) => Some(inner),
        _ => None,
    }
}

/// Return the pointee type of a pointer or array type, or `None` for any
/// other type. Used by C99 6.5.6/6.5.2.1 scaling: in `ptr + int` and
/// `arr[int]`, the integer operand is multiplied by `sizeof(*ptr)` bytes
/// before being added to the address. Without this scaling every access
/// past element zero lands on a byte-offset inside the first element, so
/// `arr[1]` writes into `arr[0]` (corrupting it) and `arr[3]` reads from
/// the tail of `arr[0]` (returning whatever was last stored there).
fn pointee_type(ty: &Type) -> Option<&Type> {
    match ty.unqualified() {
        Type::Pointer(inner) | Type::Array(inner, _) => Some(inner),
        _ => None,
    }
}

/// Is `ty` a 1-byte scalar (char / signed char / unsigned char / bool)?
/// These types are byte-packed in memory (four per 32-bit word) and
/// require a dynamic shift+mask when read or written through a pointer
/// so byte-addressed access alignments hold.
fn is_byte_scalar(ty: &Type, ctx: &LowerCtx) -> bool {
    crate::types::size_bytes_ctx(ty.unqualified(), ctx) == 1
}

/// Emit a byte-granularity load from `addr` (a byte address that may
/// not be word-aligned).  Produces a 32-bit vreg holding the byte at
/// `addr`, zero-extended by default and sign-extended if `signed`.
/// Sequence:
///   word_addr = addr & ~3
///   word      = load(word_addr, 0)
///   shift     = (addr & 3) << 3
///   byte      = (word >> shift) & 0xFF
///   if signed: sign-extend from bit 7
/// The mask-off of the low two bits of the address is required
/// because `(char *)&int + 1` aims into the middle of a packed word;
/// the DM DAG fetches whole 32-bit parcels, so the software
/// byte-extract is what makes a `char *` deref satisfy C99 6.3.2.3 p7.
fn emit_byte_load(ctx: &mut LowerCtx, addr: VReg, signed: bool) -> VReg {
    // word_addr = addr & ~3
    let mask_word = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_word, !3i64 & 0xFFFFFFFF));
    let word_addr = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(word_addr, addr, mask_word));
    // word = load(word_addr, 0)
    let word = ctx.alloc_vreg();
    ctx.emit(IrOp::Load(word, word_addr, 0));
    // low_bits = addr & 3
    let three = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(three, 3));
    let low_bits = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(low_bits, addr, three));
    // shift = low_bits << 3  (i.e. * 8)
    let shift_by = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shift_by, 3));
    let shift = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(shift, low_bits, shift_by));
    // shifted = word >> shift  (logical, since we're about to mask to 8 bits)
    // SHARC ASHIFT takes a negative count for right shifts; emit a
    // negation.
    let neg_shift = ctx.alloc_vreg();
    ctx.emit(IrOp::Neg(neg_shift, shift));
    let shifted = ctx.alloc_vreg();
    ctx.emit(IrOp::Lshr(shifted, word, neg_shift));
    // byte = shifted & 0xFF
    let mask_ff = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_ff, 0xFF));
    let byte = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(byte, shifted, mask_ff));
    if !signed {
        return byte;
    }
    // Sign-extend from bit 7: (byte << 24) >> 24 arithmetic.
    let shl24 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shl24, 24));
    let up = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(up, byte, shl24));
    let neg24 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(neg24, -24));
    let down = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(down, up, neg24));
    down
}

/// Emit a byte-granularity store: write the low 8 bits of `val` to the
/// byte at `addr`, preserving the other three bytes of the containing
/// word.  Read-modify-write sequence:
///   word_addr = addr & ~3
///   old       = load(word_addr, 0)
///   shift     = (addr & 3) << 3
///   clear_mask= ~(0xFF << shift)
///   cleared   = old & clear_mask
///   placed    = (val & 0xFF) << shift
///   new       = cleared | placed
///   store(word_addr, 0) = new
fn emit_byte_store(ctx: &mut LowerCtx, addr: VReg, val: VReg) {
    let mask_word = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_word, !3i64 & 0xFFFFFFFF));
    let word_addr = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(word_addr, addr, mask_word));
    let old = ctx.alloc_vreg();
    ctx.emit(IrOp::Load(old, word_addr, 0));
    let three = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(three, 3));
    let low_bits = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(low_bits, addr, three));
    let shift_by = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shift_by, 3));
    let shift = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(shift, low_bits, shift_by));
    // byte_mask = 0xFF << shift
    let ff = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(ff, 0xFF));
    let byte_mask = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(byte_mask, ff, shift));
    // clear_mask = ~byte_mask
    let clear_mask = ctx.alloc_vreg();
    ctx.emit(IrOp::BitNot(clear_mask, byte_mask));
    let cleared = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(cleared, old, clear_mask));
    // placed = (val & 0xFF) << shift
    let ff2 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(ff2, 0xFF));
    let val_byte = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(val_byte, val, ff2));
    let placed = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(placed, val_byte, shift));
    // new_word = cleared | placed
    let new_word = ctx.alloc_vreg();
    ctx.emit(IrOp::BitOr(new_word, cleared, placed));
    ctx.emit(IrOp::Store(new_word, word_addr, 0));
}

/// Per-field bitfield layout info for a Member/Arrow lvalue.  When the
/// named field is a C99 6.7.2.1 bitfield, this carries everything needed
/// for the shift-mask load and read-modify-write store: the starting bit
/// within the storage unit, the field width in bits, and whether the
/// underlying base type is signed (controls sign-extension on load).
/// The container address comes from `lower_lvalue_addr`, which already
/// points at the storage unit start because `struct_field_layout_ctx`
/// returns a byte offset aligned to the base type.
struct BitfieldInfo {
    bit_offset: u32,
    bit_width: u8,
    signed: bool,
}

/// If the Member/Arrow expression names a bitfield field, return its
/// layout info; otherwise `None`. Honours anonymous struct/union members
/// by re-running `struct_field_layout_ctx` on the nested field list.
fn member_bitfield_info(expr: &Expr, ctx: &LowerCtx) -> Option<BitfieldInfo> {
    let (base, field) = match expr {
        Expr::Member(base, field) => (base.as_ref(), field.as_str()),
        Expr::Arrow(base, field) => (base.as_ref(), field.as_str()),
        _ => return None,
    };
    let base_ty = expr_type(base, ctx)?;
    let struct_ty = match expr {
        Expr::Member(..) => base_ty,
        Expr::Arrow(..) => strip_to_pointer(&base_ty)?.clone(),
        _ => return None,
    };
    if is_union_type(&struct_ty) {
        // A bitfield that is itself the sole member of a union, or a
        // union aliasing bit-level storage, is not exercised by the
        // test suite; fall through to the plain path so union semantics
        // remain unchanged for non-bitfield members.
        return None;
    }
    let fields = resolve_struct_fields(&struct_ty, ctx)?;
    let (_, bit_off, bit_width) = crate::types::struct_field_layout_ctx(fields, field, ctx)?;
    let width = bit_width?;
    let bit_offset = bit_off?;
    // Recover the underlying integer signedness from the field's
    // declared type so signed bitfields sign-extend on load.
    let fty = fields
        .iter()
        .find(|(n, _)| n == field)
        .map(|(_, t)| t.clone())
        .or_else(|| {
            // Search inside anonymous members.
            for (name, ty) in fields {
                if !name.starts_with("__anon") { continue; }
                if let Type::Struct { fields: inner, .. } | Type::Union { fields: inner, .. } = ty {
                    if let Some(ft) = inner.iter().find(|(n, _)| n == field).map(|(_, t)| t.clone()) {
                        return Some(ft);
                    }
                }
            }
            None
        })?;
    let signed = match &fty {
        Type::Bitfield(base, _) => !base.is_unsigned(),
        _ => return None,
    };
    Some(BitfieldInfo { bit_offset, bit_width: width, signed })
}

/// Emit IR to load a bitfield from a storage unit pointed to by
/// `container_addr`. Loads the full 32-bit unit, shifts the field into
/// the low bits, masks to the field width, and sign-extends if the
/// underlying type is signed (C99 6.7.2.1 p9). Uses the same
/// Shr/Lshr/Shl idiom as `emit_byte_load` (SHARC ASHIFT takes a negated
/// count for right shifts; see the Neg emits below).
fn emit_bitfield_load(ctx: &mut LowerCtx, container_addr: VReg, info: &BitfieldInfo) -> VReg {
    let word = ctx.alloc_vreg();
    ctx.emit(IrOp::Load(word, container_addr, 0));
    let width = info.bit_width as i64;
    let bit_off = info.bit_offset as i64;
    // Shift right by bit_offset (logical) to bring the field to bit 0,
    // then mask to `width` bits.  The shift+mask is equivalent to a
    // single pair of shifts if we want to sign-extend, but mirroring
    // the byte-load sequence keeps the signed/unsigned paths parallel.
    let shifted = if bit_off == 0 {
        word
    } else {
        let sh_imm = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(sh_imm, bit_off));
        let neg_sh = ctx.alloc_vreg();
        ctx.emit(IrOp::Neg(neg_sh, sh_imm));
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::Lshr(tmp, word, neg_sh));
        tmp
    };
    let mask_val = if width >= 32 { -1i64 } else { (1i64 << width) - 1 };
    let mask_imm = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_imm, mask_val));
    let masked = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(masked, shifted, mask_imm));
    if !info.signed || width >= 32 {
        return masked;
    }
    // Sign-extend from bit (width-1): (masked << (32-width)) >> (32-width) arithmetic.
    let pad = 32 - width;
    let pad_imm = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(pad_imm, pad));
    let up = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(up, masked, pad_imm));
    let neg_pad = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(neg_pad, -pad));
    let down = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(down, up, neg_pad));
    down
}

/// Emit IR to store `val` into a bitfield whose storage unit starts at
/// `container_addr`. Read-modify-write: load container, clear the field
/// slot, OR in `(val & field_mask) << bit_offset`, store back. This
/// matches the pattern in `emit_byte_store` and preserves bits outside
/// the field per C99 6.7.2.1.
fn emit_bitfield_store(
    ctx: &mut LowerCtx,
    container_addr: VReg,
    val: VReg,
    info: &BitfieldInfo,
) {
    let width = info.bit_width as i64;
    let bit_off = info.bit_offset as i64;
    let field_mask_val = if width >= 32 { -1i64 } else { (1i64 << width) - 1 };
    let shifted_mask_val = (field_mask_val as u64)
        .wrapping_shl(bit_off as u32) as i64;

    let old = ctx.alloc_vreg();
    ctx.emit(IrOp::Load(old, container_addr, 0));
    // clear_mask = ~(field_mask << bit_offset)
    let clear_mask = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(clear_mask, !shifted_mask_val));
    let cleared = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(cleared, old, clear_mask));
    // placed = (val & field_mask) << bit_offset
    let fm = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(fm, field_mask_val));
    let truncated = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(truncated, val, fm));
    let placed = if bit_off == 0 {
        truncated
    } else {
        let sh_imm = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(sh_imm, bit_off));
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::Shl(tmp, truncated, sh_imm));
        tmp
    };
    let new_word = ctx.alloc_vreg();
    ctx.emit(IrOp::BitOr(new_word, cleared, placed));
    ctx.emit(IrOp::Store(new_word, container_addr, 0));
}

/// Multiply `index` by `sizeof(elem_ty)` in bytes and return a new vreg
/// holding the scaled offset. When `sizeof` is 1 (character types), the
/// input vreg is returned unchanged to avoid emitting a `× 1` multiply.
/// A `sizeof` of 0 is treated as 1 so that a forward-declared struct
/// pointer does not silently collapse every index to zero.
fn scale_index_by_elem(ctx: &mut LowerCtx, index: VReg, elem_ty: &Type) -> VReg {
    // C99 6.5.6 p8: pointer + integer advances by `sizeof(*p)` bytes.
    // Memory is byte-addressed in `-char-size-8` mode; char-element
    // arrays are byte-packed (see `size_words_ctx`) so stride-1
    // indexing walks byte-by-byte through the packed layout and
    // `(char *)&int` aliases behave as C99 requires.  Wider scalars
    // (short, int, long long) keep their byte sizes (2, 4, 8).
    let size = crate::types::size_bytes_ctx(elem_ty, ctx).max(1);
    if size == 1 {
        return index;
    }
    let sz = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(sz, size as i64));
    let dst = ctx.alloc_vreg();
    ctx.emit(IrOp::Mul(dst, index, sz));
    dst
}

/// Determine the C type of an integer literal based on its suffix and value
/// per C99 6.4.4.1.  For unsuffixed decimals the sequence is int -> long ->
/// long long.  For suffixed literals the suffix determines the minimum type.
fn int_literal_type(val: i64, suffix: IntSuffix) -> Type {
    match suffix {
        IntSuffix::None => {
            // Unsuffixed decimal: int -> long (== int on SHARC) -> long long
            if val >= i32::MIN as i64 && val <= i32::MAX as i64 {
                Type::Int
            } else {
                Type::LongLong
            }
        }
        IntSuffix::U => {
            if val as u64 <= u32::MAX as u64 {
                Type::Unsigned(Box::new(Type::Int))
            } else {
                Type::ULongLong
            }
        }
        IntSuffix::L => {
            // On SHARC long == int (32 bits), so same rules as unsuffixed
            if val >= i32::MIN as i64 && val <= i32::MAX as i64 {
                Type::Int
            } else {
                Type::LongLong
            }
        }
        IntSuffix::UL => {
            if val as u64 <= u32::MAX as u64 {
                Type::Unsigned(Box::new(Type::Int))
            } else {
                Type::ULongLong
            }
        }
        IntSuffix::LL => Type::LongLong,
        IntSuffix::Ull => Type::ULongLong,
    }
}

/// Infer the type of an expression from context (variable types, pointer
/// dereference, struct member access). Returns `None` when the type cannot
/// be determined.
fn expr_type(expr: &Expr, ctx: &LowerCtx) -> Option<Type> {
    match expr {
        Expr::IntLit(val, suffix) => Some(int_literal_type(*val, *suffix)),
        Expr::CharLit(_) => Some(Type::Int),
        Expr::FloatLit(_) => Some(Type::Float),
        Expr::Ident(name) => ctx.local_types.get(name).cloned()
            .or_else(|| ctx.globals.get(name).cloned()),
        Expr::Cast(ty, _) => Some(ty.clone()),
        Expr::Unary { operand, .. } => {
            // Apply integer promotion on the operand type.
            expr_type(operand, ctx).map(|t| t.integer_promoted())
        }
        Expr::Binary { op, lhs, rhs } => {
            // Apply integer promotions, then usual arithmetic conversions.
            let lt = expr_type(lhs, ctx).map(|t| t.integer_promoted());
            let rt = expr_type(rhs, ctx).map(|t| t.integer_promoted());
            // Complex operations: if either operand is complex, result is complex.
            match (&lt, &rt) {
                (Some(Type::Complex(e)), _) | (_, Some(Type::Complex(e))) => {
                    match op {
                        // Comparisons produce int, not complex.
                        BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt
                        | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge => Some(Type::Int),
                        _ => Some(Type::Complex(e.clone())),
                    }
                }
                (Some(t), _) if t.is_float() => lt,
                (_, Some(t)) if t.is_float() => rt,
                (Some(t), _) if t.is_pointer() => lt,
                (_, Some(t)) if t.is_pointer() => rt,
                (Some(l), Some(r)) if l.is_integer() && r.is_integer() => {
                    // Usual arithmetic conversions for integers.
                    Some(Type::usual_arithmetic_conversion(l, r))
                }
                (Some(t), _) if t.is_integer() => lt,
                (_, Some(t)) if t.is_integer() => rt,
                _ => lt.or(rt),
            }
        }
        Expr::Deref(inner) => {
            let inner_ty = expr_type(inner, ctx)?;
            strip_to_pointer(&inner_ty).cloned()
        }
        Expr::Index(base, _) => {
            let base_ty = expr_type(base, ctx)?;
            match base_ty.unqualified() {
                Type::Pointer(elem) | Type::Array(elem, _) => Some(*elem.clone()),
                _ => None,
            }
        }
        Expr::Member(base, field) => {
            let base_ty = expr_type(base, ctx)?;
            let fields = resolve_struct_fields(&base_ty, ctx)?;
            if is_union_type(&base_ty) {
                union_field_type(fields, field, ctx)
            } else {
                let (_, fty) = struct_field_offset(fields, field, ctx)?;
                Some(fty)
            }
        }
        Expr::Arrow(base, field) => {
            let base_ty = expr_type(base, ctx)?;
            if let Some(pointee) = strip_to_pointer(&base_ty) {
                let fields = resolve_struct_fields(pointee, ctx)?;
                if is_union_type(pointee) {
                    union_field_type(fields, field, ctx)
                } else {
                    let (_, fty) = struct_field_offset(fields, field, ctx)?;
                    Some(fty)
                }
            } else {
                None
            }
        }
        Expr::RealPart(inner) | Expr::ImagPart(inner) => {
            let inner_ty = expr_type(inner, ctx)?;
            match inner_ty {
                Type::Complex(elem) | Type::Imaginary(elem) => Some(*elem),
                other => Some(other),
            }
        }
        Expr::Assign { target, .. } | Expr::CompoundAssign { target, .. } => {
            expr_type(target, ctx)
        }
        Expr::Comma(_, rhs) => expr_type(rhs, ctx),
        Expr::AddrOf(inner) => {
            expr_type(inner, ctx).map(|t| Type::Pointer(Box::new(t)))
        }
        Expr::PostInc(inner) | Expr::PostDec(inner)
        | Expr::PreInc(inner) | Expr::PreDec(inner) => expr_type(inner, ctx),
        _ => None,
    }
}

/// Emit IR to compute the address of an lvalue expression. Returns the vreg
/// holding the address. Used for assignment targets and address-of on complex
/// lvalues.
fn lower_lvalue_addr(ctx: &mut LowerCtx, expr: &Expr) -> Result<VReg> {
    match expr {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                match storage {
                    LocalStorage::Stack(offset) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::FrameAddr(dst, offset as i32));
                        Ok(dst)
                    }
                    LocalStorage::Reg(vreg) => {
                        // Spill the register variable to a stack slot
                        // so we can take its address.
                        let slot = ctx.alloc_stack_slot();
                        ctx.emit(IrOp::Store(vreg, 0, slot as i32));
                        ctx.locals.insert(name.clone(), LocalStorage::Stack(slot));
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::FrameAddr(dst, slot as i32));
                        Ok(dst)
                    }
                    LocalStorage::Static(ref sym) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::LoadGlobal(dst, sym.clone()));
                        Ok(dst)
                    }
                }
            } else if ctx.globals.contains_key(name) {
                let dst = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadGlobal(dst, name.clone()));
                Ok(dst)
            } else {
                Err(Error::NotImplemented(format!(
                    "address of undefined variable: {name}"
                )))
            }
        }
        Expr::Deref(inner) => {
            // Address of *ptr is just ptr.
            lower_expr(ctx, inner)
        }
        Expr::Index(base, idx) => {
            // C99 6.5.2.1: `base[idx]` is `*(base + idx)`, where the
            // addition scales the integer index by `sizeof(*base)`.
            let base_ty = expr_type(base, ctx);
            let base_addr = lower_expr(ctx, base)?;
            let index = lower_expr(ctx, idx)?;
            let scaled = match base_ty.as_ref().and_then(pointee_type) {
                Some(elem) => scale_index_by_elem(ctx, index, &elem.clone()),
                None => index,
            };
            let addr = ctx.alloc_vreg();
            ctx.emit(IrOp::Add(addr, base_addr, scaled));
            Ok(addr)
        }
        Expr::Member(base, field) => {
            let base_ty = expr_type(base, ctx).ok_or_else(|| {
                Error::NotImplemented("cannot determine struct type for member access".into())
            })?;
            let offset = if is_union_type(&base_ty) {
                let fields = resolve_struct_fields(&base_ty, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!(
                        "member access on non-struct type: {base_ty:?}"
                    ))
                })?;
                let _ = union_field_type(fields, field, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!("no field '{field}' in union"))
                })?;
                0u32
            } else {
                let fields = resolve_struct_fields(&base_ty, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!(
                        "member access on non-struct type: {base_ty:?}"
                    ))
                })?;
                let (off, _) = struct_field_offset(fields, field, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!("no field '{field}' in struct"))
                })?;
                off
            };
            let base_addr = lower_lvalue_addr(ctx, base)?;
            if offset == 0 {
                Ok(base_addr)
            } else {
                let off_vreg = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(off_vreg, offset as i64));
                let addr = ctx.alloc_vreg();
                ctx.emit(IrOp::Add(addr, base_addr, off_vreg));
                Ok(addr)
            }
        }
        Expr::Arrow(base, field) => {
            let base_ty = expr_type(base, ctx).ok_or_else(|| {
                Error::NotImplemented("cannot determine type for arrow access".into())
            })?;
            let pointee = match strip_to_pointer(&base_ty) {
                Some(inner) => inner.clone(),
                None => {
                    return Err(Error::NotImplemented(format!(
                        "arrow on non-pointer type: {base_ty:?}"
                    )));
                }
            };
            let offset = if is_union_type(&pointee) {
                let fields = resolve_struct_fields(&pointee, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!(
                        "arrow access on non-struct pointee: {pointee:?}"
                    ))
                })?;
                let _ = union_field_type(fields, field, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!("no field '{field}' in union"))
                })?;
                0u32
            } else {
                let fields = resolve_struct_fields(&pointee, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!(
                        "arrow access on non-struct pointee: {pointee:?}"
                    ))
                })?;
                let (off, _) = struct_field_offset(fields, field, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!("no field '{field}' in struct"))
                })?;
                off
            };
            let ptr = lower_expr(ctx, base)?;
            if offset == 0 {
                Ok(ptr)
            } else {
                let off_vreg = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(off_vreg, offset as i64));
                let addr = ctx.alloc_vreg();
                ctx.emit(IrOp::Add(addr, ptr, off_vreg));
                Ok(addr)
            }
        }
        // Assignment expression used as lvalue: (b = a).field
        // Evaluate the full assignment, then return the address of the target.
        Expr::Assign { target, .. } => {
            lower_expr(ctx, expr)?;
            lower_lvalue_addr(ctx, target)
        }
        // Compound literal: (type){init} — allocate stack storage and
        // return its address.
        Expr::Cast(ty, inner) if matches!(inner.as_ref(), Expr::InitList(_)) => {
            let resolved_ty = resolve_type(ty, ctx);
            let num_words = crate::types::size_words_ctx(&resolved_ty, ctx).max(1) as u32;
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            // See note in Stmt::Decl: aggregate compound literals
            // (array, struct, union) must place element / field 0 at
            // the deepest slot so that `+i` or `+offsetof(...)` walks
            // upward through valid storage on a downward-growing stack.
            let is_aggregate = matches!(resolved_ty,
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. });
            if let Expr::InitList(items) = inner.as_ref() {
                lower_aggregate_init(
                    ctx, items, &resolved_ty, slot, num_words, is_aggregate,
                )?;
            }
            let base_slot = if is_aggregate {
                slot + num_words - 1
            } else {
                slot
            };
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::FrameAddr(dst, base_slot as i32));
            Ok(dst)
        }
        // Comma operator: &(a, b) — evaluate a for side effects, return &b
        Expr::Comma(lhs, rhs) => {
            lower_expr(ctx, lhs)?;
            lower_lvalue_addr(ctx, rhs)
        }
        // Pre/post-increment as lvalue (GNU extension, but common):
        // &(++x) — increment x, return &x
        Expr::PreInc(inner) | Expr::PreDec(inner) => {
            lower_expr(ctx, expr)?;
            lower_lvalue_addr(ctx, inner)
        }
        _ => Err(Error::NotImplemented(
            "address of complex expression".into(),
        )),
    }
}

/// Lower an expression, returning the vreg that holds the result.
fn lower_expr(ctx: &mut LowerCtx, expr: &Expr) -> Result<VReg> {
    match expr {
        Expr::IntLit(val, suffix) => {
            // A literal is 64-bit when either its value exceeds the 32-bit
            // signed range or its suffix forces `long long` / `unsigned long
            // long`.  The suffix check is required: `1LL << 32` must lower
            // the literal as a 64-bit pair, otherwise the shift becomes a
            // 32-bit LSHIFT-by-32 and the runtime computes zero.
            let is_64 = *val > i64::from(i32::MAX)
                || *val < i64::from(i32::MIN)
                || int_literal_type(*val, *suffix).is_long_long();
            if is_64 {
                let dst = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::LoadImm64(dst, *val));
                return Ok(dst);
            }
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(dst, *val));
            Ok(dst)
        }
        Expr::FloatLit(val) => {
            // Load the float bits as an integer immediate, then the register
            // is used as an F-register by subsequent float operations.
            let bits = (*val as f32).to_bits();
            let dst = ctx.alloc_vreg_float();
            ctx.emit(IrOp::LoadImm(dst, bits as i64));
            Ok(dst)
        }
        Expr::Ident(name) => {
            // Check locals first, then globals.
            let is_float_var = ctx.local_types.get(name)
                .is_some_and(|t| t.is_float());
            let is_64bit_var = ctx.local_types.get(name)
                .is_some_and(|t| t.is_long_long());
            // C99 6.3.2.1: array-to-pointer decay.
            let is_array = ctx.local_types.get(name)
                .is_some_and(|t| matches!(t, Type::Array(..)));
            if is_array {
                return lower_lvalue_addr(ctx, expr);
            }
            if let Some(storage) = ctx.locals.get(name).cloned() {
                if is_64bit_var {
                    // 64-bit variable: load two words from stack.
                    match storage {
                        LocalStorage::Stack(offset) => {
                            let dst = ctx.alloc_vreg_pair();
                            ctx.emit(IrOp::Load64(dst, 0, offset as i32));
                            return Ok(dst);
                        }
                        LocalStorage::Reg(vreg) => {
                            // Reg-allocated 64-bit: copy the pair.
                            let dst = ctx.alloc_vreg_pair();
                            ctx.emit(IrOp::Copy64(dst, vreg));
                            return Ok(dst);
                        }
                        LocalStorage::Static(ref sym) => {
                            let dst = ctx.alloc_vreg_pair();
                            ctx.emit(IrOp::ReadGlobal64(dst, sym.clone()));
                            return Ok(dst);
                        }
                    }
                }
                match storage {
                    LocalStorage::Reg(vreg) => {
                        let dst = if is_float_var {
                            ctx.alloc_vreg_float()
                        } else {
                            ctx.alloc_vreg()
                        };
                        ctx.emit(IrOp::Copy(dst, vreg));
                        Ok(dst)
                    }
                    LocalStorage::Stack(offset) => {
                        let dst = if is_float_var {
                            ctx.alloc_vreg_float()
                        } else {
                            ctx.alloc_vreg()
                        };
                        ctx.emit(IrOp::Load(dst, 0, offset as i32));
                        Ok(dst)
                    }
                    LocalStorage::Static(ref sym) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::ReadGlobal(dst, sym.clone()));
                        Ok(dst)
                    }
                }
            } else if ctx.globals.contains_key(name) {
                let is_global_array = ctx.globals.get(name)
                    .is_some_and(|t| matches!(t, Type::Array(..)));
                if is_global_array {
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadGlobal(dst, name.clone()));
                    return Ok(dst);
                }
                let is_global_64 = ctx.globals.get(name)
                    .is_some_and(|t| t.is_long_long());
                if is_global_64 {
                    let dst = ctx.alloc_vreg_pair();
                    ctx.emit(IrOp::ReadGlobal64(dst, name.clone()));
                    return Ok(dst);
                }
                let dst = ctx.alloc_vreg();
                ctx.emit(IrOp::ReadGlobal(dst, name.clone()));
                Ok(dst)
            } else if let Some(&val) = ctx.enum_constants.get(name) {
                let dst = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(dst, val));
                Ok(dst)
            } else if ctx.known_functions.contains(name) {
                // Function name used as a value (function pointer).
                // Emit a LoadGlobal to get its PM address.
                let dst = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadGlobal(dst, name.clone()));
                Ok(dst)
            } else {
                Err(Error::NotImplemented(format!(
                    "undefined variable: {name}"
                )))
            }
        }
        Expr::StringLit(s) => {
            let idx = ctx.strings.len();
            ctx.strings.push(s.clone());
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadString(dst, idx));
            Ok(dst)
        }
        Expr::WideStringLit(chars) => {
            let idx = ctx.wide_strings.len();
            ctx.wide_strings.push(chars.clone());
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadWideString(dst, idx));
            Ok(dst)
        }
        Expr::CharLit(val) => {
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(dst, *val));
            Ok(dst)
        }
        Expr::Unary { op, operand } => {
            let src = lower_expr(ctx, operand)?;
            let is_float = ctx.is_float_vreg(src);
            let is_64 = ctx.is_64bit_vreg(src);
            if is_64 {
                match op {
                    UnaryOp::Neg => {
                        let dst = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::Neg64(dst, src));
                        return Ok(dst);
                    }
                    UnaryOp::BitNot => {
                        let dst = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::BitNot64(dst, src));
                        return Ok(dst);
                    }
                    UnaryOp::LogNot => {
                        // Logical not on 64-bit: result is 32-bit (0 or 1).
                        let dst = ctx.alloc_vreg();
                        let zero_pair = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::LoadImm64(zero_pair, 0));
                        let zero = ctx.alloc_vreg();
                        ctx.emit(IrOp::LoadImm(zero, 0));
                        let one = ctx.alloc_vreg();
                        ctx.emit(IrOp::LoadImm(one, 1));
                        ctx.emit(IrOp::Cmp64(src, zero_pair));
                        let lbl_true = ctx.alloc_label();
                        let lbl_end = ctx.alloc_label();
                        ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_true));
                        ctx.emit(IrOp::Copy(dst, zero));
                        ctx.emit(IrOp::Branch(lbl_end));
                        ctx.emit(IrOp::Label(lbl_true));
                        ctx.emit(IrOp::Copy(dst, one));
                        ctx.emit(IrOp::Label(lbl_end));
                        return Ok(dst);
                    }
                }
            }
            let dst = if is_float { ctx.alloc_vreg_float() } else { ctx.alloc_vreg() };
            match op {
                UnaryOp::Neg => {
                    if is_float {
                        ctx.emit(IrOp::FNeg(dst, src));
                    } else {
                        ctx.emit(IrOp::Neg(dst, src));
                    }
                }
                UnaryOp::BitNot => ctx.emit(IrOp::BitNot(dst, src)),
                UnaryOp::LogNot => {
                    // Logical not: dst = (src == 0) ? 1 : 0
                    // Implemented as: compare src with 0, branch on EQ
                    let zero = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(zero, 0));
                    let one = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(one, 1));
                    ctx.emit(IrOp::Cmp(src, zero));
                    let lbl_true = ctx.alloc_label();
                    let lbl_end = ctx.alloc_label();
                    ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_true));
                    // Not equal to zero -> result is 0
                    ctx.emit(IrOp::Copy(dst, zero));
                    ctx.emit(IrOp::Branch(lbl_end));
                    ctx.emit(IrOp::Label(lbl_true));
                    ctx.emit(IrOp::Copy(dst, one));
                    ctx.emit(IrOp::Label(lbl_end));
                }
            }
            Ok(dst)
        }
        Expr::Binary { op, lhs, rhs } => lower_binary(ctx, *op, lhs, rhs),
        Expr::Call { name, args } => {
            // Reject implicit function declarations (C99 requirement).
            // Only checked when known_functions is populated (production builds).
            if !ctx.known_functions.is_empty()
                && !name.starts_with("__builtin_")
                && !name.starts_with("__")
                && !ctx.known_functions.contains(name)
                && !ctx.globals.contains_key(name)
                && !ctx.locals.contains_key(name)
            {
                return Err(Error::Compile {
                    msg: format!("implicit declaration of function '{name}'"),
                });
            }
            let mut arg_vregs = Vec::new();
            for arg in args {
                let arg_ty = expr_type(arg, ctx);
                let arg_is_struct = arg_ty.as_ref()
                    .is_some_and(|t| is_struct_type(t, ctx));
                if arg_is_struct {
                    let nw = arg_ty.as_ref()
                        .map_or(1, |t| type_size_words(t, ctx));
                    let addr = lower_struct_expr_addr(ctx, arg)?;
                    for w in 0..nw {
                        // Struct word `w` lives at byte offset
                        // `w * 4` from the struct base. `Load(val,
                        // base, off)` with a non-zero base emits the
                        // byte-addressable indirect form, so the
                        // stride here must be a byte offset (not the
                        // bare word index) or the load reads from an
                        // unaligned address and returns a fraction
                        // of the next field's bytes.
                        let tmp = ctx.alloc_vreg();
                        ctx.emit(IrOp::Load(tmp, addr, (w * 4) as i32));
                        arg_vregs.push(tmp);
                    }
                } else {
                    arg_vregs.push(lower_expr(ctx, arg)?);
                }
            }
            let dst = ctx.alloc_vreg();
            let callee_ty = ctx.local_types.get(name)
                .or_else(|| ctx.globals.get(name));
            let is_fnptr = callee_ty.is_some_and(|t| is_function_ptr_type(t, ctx));
            if is_fnptr {
                let addr = lower_expr(ctx, &Expr::Ident(name.clone()))?;
                ctx.emit(IrOp::CallIndirect(dst, addr, arg_vregs));
            } else {
                ctx.emit(IrOp::Call(dst, name.clone(), arg_vregs));
            }
            Ok(dst)
        }
        Expr::CallIndirect { func_expr, args } => {
            let func_addr = lower_expr(ctx, func_expr)?;
            let mut arg_vregs = Vec::new();
            for arg in args {
                let arg_ty = expr_type(arg, ctx);
                let arg_is_struct = arg_ty.as_ref()
                    .is_some_and(|t| is_struct_type(t, ctx));
                if arg_is_struct {
                    let nw = arg_ty.as_ref()
                        .map_or(1, |t| type_size_words(t, ctx));
                    let addr = lower_struct_expr_addr(ctx, arg)?;
                    for w in 0..nw {
                        // Struct word `w` lives at byte offset
                        // `w * 4` from the struct base. `Load(val,
                        // base, off)` with a non-zero base emits the
                        // byte-addressable indirect form, so the
                        // stride here must be a byte offset (not the
                        // bare word index) or the load reads from an
                        // unaligned address and returns a fraction
                        // of the next field's bytes.
                        let tmp = ctx.alloc_vreg();
                        ctx.emit(IrOp::Load(tmp, addr, (w * 4) as i32));
                        arg_vregs.push(tmp);
                    }
                } else {
                    arg_vregs.push(lower_expr(ctx, arg)?);
                }
            }
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::CallIndirect(dst, func_addr, arg_vregs));
            Ok(dst)
        }
        Expr::Assign { target, value } => {
            // Check if this is a struct assignment (multi-word copy).
            let target_ty = expr_type(target, ctx);
            let is_struct = target_ty.as_ref()
                .is_some_and(|t| is_struct_type(t, ctx));
            if is_struct {
                let num_words = target_ty.as_ref()
                    .map_or(1, |t| type_size_words(t, ctx));
                let src_addr = lower_struct_expr_addr(ctx, value)?;
                let dst_addr = lower_lvalue_addr(ctx, target)?;
                emit_struct_copy(ctx, dst_addr, src_addr, num_words);
                let result = ctx.alloc_vreg();
                ctx.emit(IrOp::Load(result, dst_addr, 0));
                return Ok(result);
            }

            // Check for 64-bit assignment.
            let target_is_64 = target_ty.as_ref()
                .is_some_and(|t| t.is_long_long());

            let val = lower_expr(ctx, value)?;
            let val_is_64 = ctx.is_64bit_vreg(val);

            // Coerce value to match target width.
            let val = if target_is_64 && !val_is_64 {
                widen_to_64(ctx, val, value)
            } else if !target_is_64 && val_is_64 {
                let tmp = ctx.alloc_vreg();
                ctx.emit(IrOp::LongLongToInt(tmp, val));
                tmp
            } else {
                val
            };

            // Insert implicit float<->int conversion for non-64-bit targets.
            let val = if !target_is_64 {
                if let Some(ref tty) = target_ty {
                    coerce_vreg(ctx, val, tty)
                } else {
                    val
                }
            } else {
                val
            };

            // 64-bit stores use Store64.
            if target_is_64 {
                match target.as_ref() {
                    Expr::Ident(name) => {
                        if let Some(storage) = ctx.locals.get(name).cloned() {
                            match storage {
                                LocalStorage::Stack(offset) => {
                                    ctx.emit(IrOp::Store64(val, 0, offset as i32));
                                }
                                LocalStorage::Reg(vreg) => {
                                    ctx.emit(IrOp::Copy(vreg, val));
                                    ctx.emit(IrOp::Copy(vreg + 1, val + 1));
                                }
                                LocalStorage::Static(ref sym) => {
                                    ctx.emit(IrOp::WriteGlobal64(val, sym.clone()));
                                }
                            }
                        } else if ctx.globals.contains_key(name) {
                            ctx.emit(IrOp::WriteGlobal64(val, name.clone()));
                        } else {
                            return Err(Error::NotImplemented(format!(
                                "undefined variable: {name}"
                            )));
                        }
                    }
                    Expr::Deref(inner) => {
                        let ptr = lower_expr(ctx, inner)?;
                        ctx.emit(IrOp::Store64(val, ptr, 0));
                    }
                    _ => {
                        let addr = lower_lvalue_addr(ctx, target)?;
                        ctx.emit(IrOp::Store64(val, addr, 0));
                    }
                }
                return Ok(val);
            }

            match target.as_ref() {
                Expr::Ident(name) => {
                    if let Some(storage) = ctx.locals.get(name).cloned() {
                        match storage {
                            LocalStorage::Stack(offset) => {
                                ctx.emit(IrOp::Store(val, 0, offset as i32));
                            }
                            LocalStorage::Reg(vreg) => {
                                ctx.emit(IrOp::Copy(vreg, val));
                            }
                            LocalStorage::Static(ref sym) => {
                                ctx.emit(IrOp::StoreGlobal(val, sym.clone()));
                            }
                        }
                    } else if ctx.globals.contains_key(name) {
                        ctx.emit(IrOp::StoreGlobal(val, name.clone()));
                    } else {
                        return Err(Error::NotImplemented(format!(
                            "undefined variable: {name}"
                        )));
                    }
                }
                Expr::Deref(inner) => {
                    let ptr_ty = expr_type(inner, ctx);
                    let ptr = lower_expr(ctx, inner)?;
                    // Byte-granularity store for char / bool pointee:
                    // load-modify-store the containing word so the
                    // other three bytes survive.
                    if let Some(pt) = ptr_ty.as_ref().and_then(pointee_type) {
                        if is_byte_scalar(pt, ctx) {
                            emit_byte_store(ctx, ptr, val);
                            return Ok(val);
                        }
                    }
                    ctx.emit(IrOp::Store(val, ptr, 0));
                }
                Expr::Index(base, idx) => {
                    // C99 6.5.2.1: scale the index by `sizeof(*base)`.
                    let base_ty = expr_type(base, ctx);
                    let elem_ty_opt = base_ty.as_ref().and_then(pointee_type).cloned();
                    let base_addr = lower_expr(ctx, base)?;
                    let index = lower_expr(ctx, idx)?;
                    let scaled = match elem_ty_opt.as_ref() {
                        Some(elem) => scale_index_by_elem(ctx, index, elem),
                        None => index,
                    };
                    let addr = ctx.alloc_vreg();
                    ctx.emit(IrOp::Add(addr, base_addr, scaled));
                    if let Some(ref et) = elem_ty_opt {
                        if is_byte_scalar(et, ctx) {
                            emit_byte_store(ctx, addr, val);
                            return Ok(val);
                        }
                    }
                    ctx.emit(IrOp::Store(val, addr, 0));
                }
                Expr::Member(..) | Expr::Arrow(..) => {
                    let addr = lower_lvalue_addr(ctx, target)?;
                    if let Some(info) = member_bitfield_info(target, ctx) {
                        emit_bitfield_store(ctx, addr, val, &info);
                    } else {
                        ctx.emit(IrOp::Store(val, addr, 0));
                    }
                }
                _ => {
                    let addr = lower_lvalue_addr(ctx, target)?;
                    ctx.emit(IrOp::Store(val, addr, 0));
                }
            }
            Ok(val)
        }
        Expr::Deref(inner) => {
            let ptr_ty = expr_type(inner, ctx);
            let ptr = lower_expr(ctx, inner)?;
            let pointee = ptr_ty.as_ref().and_then(pointee_type).cloned();
            // Byte-granularity read for char / unsigned char / bool.
            // A `char *` may aim at any byte in a packed 32-bit word,
            // so load the whole word and shift/mask the target byte
            // out.  Sign-extend if the pointee is signed.
            if let Some(ref pt) = pointee {
                if is_byte_scalar(pt, ctx) {
                    let signed = !pt.is_unsigned();
                    return Ok(emit_byte_load(ctx, ptr, signed));
                }
            }
            // A float pointee must land in an F-register so downstream
            // casts (e.g. `(int)*p`) see a float source and emit the
            // float->int conversion rather than a silent bit-preserving
            // copy.
            let is_float_pointee = pointee
                .as_ref()
                .map(|t| t.is_float())
                .unwrap_or(false);
            let dst = if is_float_pointee {
                ctx.alloc_vreg_float()
            } else {
                ctx.alloc_vreg()
            };
            ctx.emit(IrOp::Load(dst, ptr, 0));
            Ok(dst)
        }
        Expr::AddrOf(inner) => {
            // Use lower_lvalue_addr which handles Ident, Deref, Index, Member, Arrow.
            lower_lvalue_addr(ctx, inner)
        }
        Expr::Index(base, idx) => {
            // C99 6.5.2.1: `base[idx]` scales the index by `sizeof(*base)`.
            let base_ty = expr_type(base, ctx);
            let elem_ty = base_ty.as_ref().and_then(pointee_type).cloned();
            let base_addr = lower_expr(ctx, base)?;
            let index = lower_expr(ctx, idx)?;
            let scaled = match elem_ty.as_ref() {
                Some(elem) => scale_index_by_elem(ctx, index, elem),
                None => index,
            };
            let addr = ctx.alloc_vreg();
            ctx.emit(IrOp::Add(addr, base_addr, scaled));
            // C99 6.3.2.1p3: when the indexed element is itself an
            // aggregate (array / struct / union) its "value" in an
            // rvalue context is its address, not a loaded word.
            // Emitting a scalar Load here would read the first word of
            // the aggregate and then treat that as the base for any
            // outer `[j]` or `.field` — e.g. `m[i][j]` on
            // `int m[N][M]` would multiply-scale a garbage word
            // instead of indexing into row `m[i]`.
            if let Some(ref et) = elem_ty {
                if is_aggregate_type(et, ctx) {
                    return Ok(addr);
                }
            }
            // Byte-granularity read when indexing a char / unsigned
            // char / bool element (byte-packed in memory).
            if let Some(ref et) = elem_ty {
                if is_byte_scalar(et, ctx) {
                    let signed = !et.is_unsigned();
                    return Ok(emit_byte_load(ctx, addr, signed));
                }
            }
            // A float element type must land in an F-register so that
            // `(int)arr[i]` sees a float source and emits the float->int
            // conversion instead of passing the raw bit pattern through.
            let dst = match elem_ty.as_ref() {
                Some(t) if t.is_float() => ctx.alloc_vreg_float(),
                _ => ctx.alloc_vreg(),
            };
            ctx.emit(IrOp::Load(dst, addr, 0));
            Ok(dst)
        }
        Expr::Member(..) | Expr::Arrow(..) => {
            // If the member itself is an aggregate (struct / union /
            // array) its "value" in C is the address of the storage,
            // not a single word loaded from it. Emitting a Load here
            // would read the first scalar word of the aggregate and
            // then treat that value as the array base for any outer
            // `[i]` or `.field` — e.g. `o.a[i]` on an inner struct
            // array would multiply-scale a garbage word instead of
            // indexing into `o.a`.
            let addr = lower_lvalue_addr(ctx, expr)?;
            if let Some(info) = member_bitfield_info(expr, ctx) {
                return Ok(emit_bitfield_load(ctx, addr, &info));
            }
            let member_ty = expr_type(expr, ctx);
            if let Some(ref mty) = member_ty {
                if is_aggregate_type(mty, ctx) {
                    return Ok(addr);
                }
            }
            // A float-typed member (including reads through a union
            // that aliases int bits as float) must land in an F-register
            // so that downstream casts like `(int)u.f` know to emit a
            // float->int conversion (FIX/TRUNC) rather than a no-op copy.
            let dst = match member_ty {
                Some(ref mty) if mty.is_float() => ctx.alloc_vreg_float(),
                _ => ctx.alloc_vreg(),
            };
            ctx.emit(IrOp::Load(dst, addr, 0));
            Ok(dst)
        }
        Expr::Sizeof(arg) => {
            match arg.as_ref() {
                SizeofArg::Type(ty) => {
                    let size = crate::types::size_bytes_ctx(ty, ctx);
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(dst, size as i64));
                    Ok(dst)
                }
                SizeofArg::Expr(inner) => {
                    // Check if expression is a VLA variable — if so,
                    // sizeof must be computed at runtime.
                    if let Expr::Ident(name) = inner {
                        if let Some(&dim_vreg) = ctx.vla_dims.get(name.as_str()) {
                            // sizeof(vla) = count * elem_size_bytes
                            let elem_bytes = match ctx.local_types.get(name.as_str()) {
                                Some(Type::Pointer(elem)) => crate::types::size_bytes_ctx(elem, ctx).max(1),
                                _ => 4,
                            };
                            let dst = ctx.alloc_vreg();
                            if elem_bytes == 1 {
                                ctx.emit(IrOp::Copy(dst, dim_vreg));
                            } else {
                                let esz = ctx.alloc_vreg();
                                ctx.emit(IrOp::LoadImm(esz, elem_bytes as i64));
                                ctx.emit(IrOp::Mul(dst, dim_vreg, esz));
                            }
                            return Ok(dst);
                        }
                    }
                    // Non-VLA expression: infer type for accurate sizeof.
                    let size = match expr_type(inner, ctx) {
                        Some(ty) => crate::types::size_bytes_ctx(&ty, ctx),
                        None => 4, // default to int-sized
                    };
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(dst, size as i64));
                    Ok(dst)
                }
            }
        }
        Expr::Cast(ty, inner) => {
            // Compound literal: (type){init-list}
            if let Expr::InitList(items) = inner.as_ref() {
                return lower_compound_literal(ctx, ty, items);
            }
            let val = lower_expr(ctx, inner)?;
            let src_is_float = ctx.is_float_vreg(val);
            let src_is_64 = ctx.is_64bit_vreg(val);
            let dst_is_float = ty.is_float();
            let dst_is_64 = ty.is_long_long();

            // C99 6.3.1.2: conversion to _Bool: any scalar != 0 becomes 1, else 0
            if *ty == Type::Bool {
                let zero = ctx.alloc_vreg();
                if src_is_float {
                    let fzero = ctx.alloc_vreg_float();
                    ctx.emit(IrOp::LoadImm(zero, 0));
                    ctx.emit(IrOp::IntToFloat(fzero, zero));
                    ctx.emit(IrOp::FCmp(val, fzero));
                } else {
                    ctx.emit(IrOp::LoadImm(zero, 0));
                    ctx.emit(IrOp::Cmp(val, zero));
                }
                let dst = ctx.alloc_vreg();
                let label_true = ctx.alloc_label();
                let label_end = ctx.alloc_label();
                ctx.emit(IrOp::BranchCond(Cond::Ne, label_true));
                ctx.emit(IrOp::LoadImm(dst, 0));
                ctx.emit(IrOp::Branch(label_end));
                ctx.emit(IrOp::Label(label_true));
                ctx.emit(IrOp::LoadImm(dst, 1));
                ctx.emit(IrOp::Label(label_end));
                return Ok(dst);
            }

            // 64-bit -> 32-bit truncation.
            if src_is_64 && !dst_is_64 {
                let dst = if dst_is_float {
                    ctx.alloc_vreg_float()
                } else {
                    ctx.alloc_vreg()
                };
                ctx.emit(IrOp::LongLongToInt(dst, val));
                if dst_is_float {
                    // int(truncated) -> float
                    let flt = ctx.alloc_vreg_float();
                    ctx.emit(IrOp::IntToFloat(flt, dst));
                    return Ok(flt);
                }
                return Ok(dst);
            }

            // 32-bit -> 64-bit widening.
            if !src_is_64 && dst_is_64 {
                if src_is_float {
                    // float -> int first, then widen
                    let tmp = ctx.alloc_vreg();
                    ctx.emit(IrOp::FloatToInt(tmp, val));
                    let dst = ctx.alloc_vreg_pair();
                    if ty.is_unsigned() {
                        ctx.emit(IrOp::IntToLongLong(dst, tmp));
                    } else {
                        ctx.emit(IrOp::SExtToLongLong(dst, tmp));
                    }
                    return Ok(dst);
                }
                let dst = ctx.alloc_vreg_pair();
                if ty.is_unsigned() {
                    ctx.emit(IrOp::IntToLongLong(dst, val));
                } else {
                    ctx.emit(IrOp::SExtToLongLong(dst, val));
                }
                return Ok(dst);
            }

            // 64-bit -> 64-bit: just copy pair.
            if src_is_64 && dst_is_64 {
                let dst = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::Copy64(dst, val));
                return Ok(dst);
            }

            if src_is_float && !dst_is_float {
                // Float -> int: TRUNC (truncate toward zero per C99).
                let dst = ctx.alloc_vreg();
                ctx.emit(IrOp::FloatToInt(dst, val));
                Ok(dst)
            } else if !src_is_float && dst_is_float {
                // Int -> float: FLOAT
                let dst = ctx.alloc_vreg_float();
                ctx.emit(IrOp::IntToFloat(dst, val));
                Ok(dst)
            } else {
                // Same-kind cast. For narrow integer types (char, short)
                // C requires truncation to the target width and then
                // sign/zero extension back to int (the register width).
                // Without this, `(signed char)0x80` would stay 0x80
                // instead of sign-extending to 0xFFFFFF80 (-128).
                let dst_bytes = crate::types::size_bytes_ctx(ty, ctx);
                if !dst_is_float && dst_bytes < 4 {
                    let bits = dst_bytes * 8;
                    let mask = (1u32 << bits).wrapping_sub(1) as i64;
                    let shift = (32 - bits) as i64;
                    let masked = ctx.alloc_vreg();
                    let mask_v = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(mask_v, mask));
                    ctx.emit(IrOp::BitAnd(masked, val, mask_v));
                    if ty.is_unsigned() {
                        return Ok(masked);
                    }
                    // Sign-extend: shift left then arithmetic shift right.
                    // SHARC+ ASHIFT uses the same count for both
                    // directions: positive = left, negative = right.
                    let shifted_up = ctx.alloc_vreg();
                    let shl_v = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(shl_v, shift));
                    ctx.emit(IrOp::Shl(shifted_up, masked, shl_v));
                    let shr_v = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(shr_v, -shift));
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::Shr(dst, shifted_up, shr_v));
                    return Ok(dst);
                }
                let dst = if dst_is_float {
                    ctx.alloc_vreg_float()
                } else {
                    ctx.alloc_vreg()
                };
                ctx.emit(IrOp::Copy(dst, val));
                Ok(dst)
            }
        }
        Expr::PreInc(operand) | Expr::PreDec(operand) => {
            let is_inc = matches!(expr, Expr::PreInc(_));
            lower_inc_dec(ctx, operand, is_inc, true)
        }
        Expr::PostInc(operand) | Expr::PostDec(operand) => {
            let is_inc = matches!(expr, Expr::PostInc(_));
            lower_inc_dec(ctx, operand, is_inc, false)
        }
        Expr::CompoundAssign { op, target, value } => {
            lower_compound_assign(ctx, *op, target, value)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            lower_ternary(ctx, cond, then_expr, else_expr)
        }
        Expr::InitList(items) => {
            // Nested init list (e.g. in struct/array initializers).
            // Allocate a temp slot and store each item sequentially.
            let num_words = items.len().max(1) as u32;
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            for (i, item) in items.iter().enumerate() {
                let val = lower_expr(ctx, item)?;
                ctx.emit(IrOp::Store(val, 0, (slot + i as u32) as i32));
            }
            let dst = ctx.alloc_vreg();
            ctx.emit(IrOp::Load(dst, 0, slot as i32));
            Ok(dst)
        }
        Expr::Comma(lhs, rhs) => {
            // Evaluate lhs for side effects, discard result, return rhs.
            lower_expr(ctx, lhs)?;
            lower_expr(ctx, rhs)
        }
        Expr::DesignatedInit { value, .. } | Expr::ArrayDesignator { value, .. } => {
            // In expression context, just evaluate the value.
            lower_expr(ctx, value)
        }
        Expr::RealPart(inner) => {
            let inner_ty = expr_type(inner, ctx);
            if matches!(inner_ty, Some(Type::Complex(_))) {
                let pair = lower_complex_expr(ctx, inner)?;
                Ok(pair.real)
            } else {
                // On non-complex, __real__ is identity.
                lower_expr(ctx, inner)
            }
        }
        Expr::ImagPart(inner) => {
            let inner_ty = expr_type(inner, ctx);
            if matches!(inner_ty, Some(Type::Complex(_))) {
                let pair = lower_complex_expr(ctx, inner)?;
                Ok(pair.imag)
            } else {
                // On non-complex, __imag__ is zero.
                let dst = ctx.alloc_vreg_float();
                ctx.emit(IrOp::LoadImm(dst, 0));
                Ok(dst)
            }
        }
    }
}

/// A complex value represented as a pair of float vregs.
struct ComplexPair {
    real: VReg,
    imag: VReg,
}

/// Load a complex value from a stack slot, returning (real, imag) vregs.
fn load_complex(ctx: &mut LowerCtx, offset: u32) -> ComplexPair {
    let real = ctx.alloc_vreg_float();
    let imag = ctx.alloc_vreg_float();
    ctx.emit(IrOp::Load(real, 0, offset as i32));
    ctx.emit(IrOp::Load(imag, 0, (offset + 1) as i32));
    ComplexPair { real, imag }
}

/// Promote a real (scalar float) vreg to a complex pair with imag=0.
fn real_to_complex(ctx: &mut LowerCtx, real: VReg) -> ComplexPair {
    let imag = ctx.alloc_vreg_float();
    ctx.emit(IrOp::LoadImm(imag, 0));
    ComplexPair { real, imag }
}

/// Lower an expression known to be complex, returning a ComplexPair.
fn lower_complex_expr(ctx: &mut LowerCtx, expr: &Expr) -> Result<ComplexPair> {
    match expr {
        Expr::Ident(name) => {
            let ty = ctx.local_types.get(name).cloned();
            if let Some(ref t) = ty {
                if t.is_complex() {
                    if let Some(LocalStorage::Stack(offset)) = ctx.locals.get(name).cloned() {
                        return Ok(load_complex(ctx, offset));
                    }
                }
            }
            // Fall back: treat as scalar promoted to complex.
            let v = lower_expr(ctx, expr)?;
            Ok(real_to_complex(ctx, v))
        }
        Expr::Binary { op, lhs, rhs } => {
            lower_complex_binary(ctx, *op, lhs, rhs)
        }
        Expr::InitList(items) if items.len() == 2 => {
            let real = lower_expr(ctx, &items[0])?;
            let imag = lower_expr(ctx, &items[1])?;
            Ok(ComplexPair { real, imag })
        }
        _ => {
            // Try scalar promotion.
            let v = lower_expr(ctx, expr)?;
            Ok(real_to_complex(ctx, v))
        }
    }
}

/// Get the complex pair for an expression, handling both complex and real operands.
fn get_complex_operand(ctx: &mut LowerCtx, expr: &Expr) -> Result<ComplexPair> {
    let ty = expr_type(expr, ctx);
    if matches!(ty, Some(Type::Complex(_))) {
        lower_complex_expr(ctx, expr)
    } else {
        let v = lower_expr(ctx, expr)?;
        if !ctx.is_float_vreg(v) {
            let fv = ctx.alloc_vreg_float();
            ctx.emit(IrOp::IntToFloat(fv, v));
            Ok(real_to_complex(ctx, fv))
        } else {
            Ok(real_to_complex(ctx, v))
        }
    }
}

/// Perform binary arithmetic on complex operands.
fn lower_complex_binary(ctx: &mut LowerCtx, op: BinaryOp, lhs: &Expr, rhs: &Expr) -> Result<ComplexPair> {
    let l = get_complex_operand(ctx, lhs)?;
    let r = get_complex_operand(ctx, rhs)?;

    match op {
        BinaryOp::Add => {
            let real = ctx.alloc_vreg_float();
            let imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FAdd(real, l.real, r.real));
            ctx.emit(IrOp::FAdd(imag, l.imag, r.imag));
            Ok(ComplexPair { real, imag })
        }
        BinaryOp::Sub => {
            let real = ctx.alloc_vreg_float();
            let imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FSub(real, l.real, r.real));
            ctx.emit(IrOp::FSub(imag, l.imag, r.imag));
            Ok(ComplexPair { real, imag })
        }
        BinaryOp::Mul => {
            // (a+bi)(c+di) = (ac-bd) + (ad+bc)i
            let ac = ctx.alloc_vreg_float();
            let bd = ctx.alloc_vreg_float();
            let ad = ctx.alloc_vreg_float();
            let bc = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FMul(ac, l.real, r.real));
            ctx.emit(IrOp::FMul(bd, l.imag, r.imag));
            ctx.emit(IrOp::FMul(ad, l.real, r.imag));
            ctx.emit(IrOp::FMul(bc, l.imag, r.real));
            let real = ctx.alloc_vreg_float();
            let imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FSub(real, ac, bd));
            ctx.emit(IrOp::FAdd(imag, ad, bc));
            Ok(ComplexPair { real, imag })
        }
        BinaryOp::Div => {
            // (a+bi)/(c+di) = ((ac+bd) + (bc-ad)i) / (c^2+d^2)
            let ac = ctx.alloc_vreg_float();
            let bd = ctx.alloc_vreg_float();
            let bc = ctx.alloc_vreg_float();
            let ad = ctx.alloc_vreg_float();
            let cc = ctx.alloc_vreg_float();
            let dd = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FMul(ac, l.real, r.real));
            ctx.emit(IrOp::FMul(bd, l.imag, r.imag));
            ctx.emit(IrOp::FMul(bc, l.imag, r.real));
            ctx.emit(IrOp::FMul(ad, l.real, r.imag));
            ctx.emit(IrOp::FMul(cc, r.real, r.real));
            ctx.emit(IrOp::FMul(dd, r.imag, r.imag));
            let denom = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FAdd(denom, cc, dd));
            let num_real = ctx.alloc_vreg_float();
            let num_imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FAdd(num_real, ac, bd));
            ctx.emit(IrOp::FSub(num_imag, bc, ad));
            let real = ctx.alloc_vreg_float();
            let imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::FDiv(real, num_real, denom));
            ctx.emit(IrOp::FDiv(imag, num_imag, denom));
            Ok(ComplexPair { real, imag })
        }
        BinaryOp::Eq | BinaryOp::Ne => {
            // Complex equality: (a+bi) == (c+di) iff a==c && b==d
            let real_eq = lower_float_comparison(ctx, BinaryOp::Eq, l.real, r.real)?;
            let imag_eq = lower_float_comparison(ctx, BinaryOp::Eq, l.imag, r.imag)?;
            let both = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(both, real_eq, imag_eq));
            if op == BinaryOp::Ne {
                let one = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(one, 1));
                let neg = ctx.alloc_vreg();
                ctx.emit(IrOp::BitXor(neg, both, one));
                Ok(ComplexPair { real: neg, imag: neg })
            } else {
                Ok(ComplexPair { real: both, imag: both })
            }
        }
        _ => Err(Error::NotImplemented(format!(
            "complex binary op: {op:?}"
        ))),
    }
}

fn lower_binary(ctx: &mut LowerCtx, op: BinaryOp, lhs: &Expr, rhs: &Expr) -> Result<VReg> {
    // Short-circuit for logical operators.
    match op {
        BinaryOp::LogAnd => return lower_log_and(ctx, lhs, rhs),
        BinaryOp::LogOr => return lower_log_or(ctx, lhs, rhs),
        _ => {}
    }

    // Check for complex operands.
    let lhs_ty = expr_type(lhs, ctx);
    let rhs_ty = expr_type(rhs, ctx);
    let either_complex = matches!(&lhs_ty, Some(Type::Complex(_)))
        || matches!(&rhs_ty, Some(Type::Complex(_)));

    if either_complex {
        let pair = lower_complex_binary(ctx, op, lhs, rhs)?;
        return Ok(pair.real);
    }

    let l = lower_expr(ctx, lhs)?;
    let r = lower_expr(ctx, rhs)?;
    let l_float = ctx.is_float_vreg(l);
    let r_float = ctx.is_float_vreg(r);
    let is_float = l_float || r_float;
    let l_64 = ctx.is_64bit_vreg(l);
    let r_64 = ctx.is_64bit_vreg(r);
    let is_64bit = l_64 || r_64;

    // Insert int-to-float conversions if needed for mixed operands.
    let l = if is_float && !l_float {
        let conv = ctx.alloc_vreg_float();
        ctx.emit(IrOp::IntToFloat(conv, l));
        conv
    } else {
        l
    };
    let r = if is_float && !r_float {
        let conv = ctx.alloc_vreg_float();
        ctx.emit(IrOp::IntToFloat(conv, r));
        conv
    } else {
        r
    };

    if is_float {
        let dst = ctx.alloc_vreg_float();
        match op {
            BinaryOp::Add => ctx.emit(IrOp::FAdd(dst, l, r)),
            BinaryOp::Sub => ctx.emit(IrOp::FSub(dst, l, r)),
            BinaryOp::Mul => ctx.emit(IrOp::FMul(dst, l, r)),
            BinaryOp::Div => ctx.emit(IrOp::FDiv(dst, l, r)),
            BinaryOp::Mod => {
                // fmod: a % b = a - b * trunc(a / b)
                let quot = ctx.alloc_vreg_float();
                ctx.emit(IrOp::FDiv(quot, l, r));
                let trunc = ctx.alloc_vreg_float();
                ctx.emit(IrOp::FloatToInt(trunc, quot));
                let trunc_f = ctx.alloc_vreg_float();
                ctx.emit(IrOp::IntToFloat(trunc_f, trunc));
                let prod = ctx.alloc_vreg_float();
                ctx.emit(IrOp::FMul(prod, r, trunc_f));
                ctx.emit(IrOp::FSub(dst, l, prod));
            }
            BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt | BinaryOp::Gt
            | BinaryOp::Le | BinaryOp::Ge => {
                return lower_float_comparison(ctx, op, l, r);
            }
            BinaryOp::LogAnd | BinaryOp::LogOr => {
                // Logical ops on floats: compare each with 0.0
                let zero = ctx.alloc_vreg_float();
                ctx.emit(IrOp::LoadImm(zero, 0));
                let l_bool = lower_float_comparison(ctx, BinaryOp::Ne, l, zero)?;
                let r_bool = lower_float_comparison(ctx, BinaryOp::Ne, r, zero)?;
                let int_dst = ctx.alloc_vreg();
                if op == BinaryOp::LogAnd {
                    ctx.emit(IrOp::BitAnd(int_dst, l_bool, r_bool));
                } else {
                    ctx.emit(IrOp::BitOr(int_dst, l_bool, r_bool));
                }
                return Ok(int_dst);
            }
            _ => {
                return Err(Error::NotImplemented(format!(
                    "float binary op: {op:?}"
                )));
            }
        }
        return Ok(dst);
    }

    // 64-bit integer operations: widen 32-bit operands if mixed.
    if is_64bit {
        let l = if !l_64 {
            widen_to_64(ctx, l, lhs)
        } else {
            l
        };
        let r = if !r_64 {
            widen_to_64(ctx, r, rhs)
        } else {
            r
        };

        // Determine signedness for division/modulo/shift/compare.
        let is_unsigned = is_unsigned_expr(lhs, ctx) || is_unsigned_expr(rhs, ctx);

        let dst = ctx.alloc_vreg_pair();
        match op {
            BinaryOp::Add => ctx.emit(IrOp::Add64(dst, l, r)),
            BinaryOp::Sub => ctx.emit(IrOp::Sub64(dst, l, r)),
            BinaryOp::Mul => ctx.emit(IrOp::Mul64(dst, l, r)),
            BinaryOp::Div => {
                if is_unsigned {
                    ctx.emit(IrOp::UDiv64(dst, l, r));
                } else {
                    ctx.emit(IrOp::Div64(dst, l, r));
                }
            }
            BinaryOp::Mod => {
                if is_unsigned {
                    ctx.emit(IrOp::UMod64(dst, l, r));
                } else {
                    ctx.emit(IrOp::Mod64(dst, l, r));
                }
            }
            BinaryOp::BitAnd => ctx.emit(IrOp::BitAnd64(dst, l, r)),
            BinaryOp::BitOr => ctx.emit(IrOp::BitOr64(dst, l, r)),
            BinaryOp::BitXor => ctx.emit(IrOp::BitXor64(dst, l, r)),
            BinaryOp::Shl => ctx.emit(IrOp::Shl64(dst, l, r)),
            BinaryOp::Shr => {
                if is_unsigned {
                    ctx.emit(IrOp::UShr64(dst, l, r));
                } else {
                    ctx.emit(IrOp::Shr64(dst, l, r));
                }
            }
            BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt | BinaryOp::Gt
            | BinaryOp::Le | BinaryOp::Ge => {
                return lower_comparison_64(ctx, op, l, r, is_unsigned);
            }
            BinaryOp::LogAnd | BinaryOp::LogOr => unreachable!(),
        }
        return Ok(dst);
    }

    let is_unsigned = is_unsigned_expr(lhs, ctx) || is_unsigned_expr(rhs, ctx);

    // C99 6.5.6: pointer + integer (and integer + pointer) scales the
    // integer operand by `sizeof(*pointer)`. Same scaling for pointer -
    // integer. (The pointer - pointer case yields an integer in units
    // of the pointee; handled below when both operands are pointers.)
    let (l, r) = match op {
        BinaryOp::Add | BinaryOp::Sub => {
            let l_pt = lhs_ty.as_ref().and_then(pointee_type).cloned();
            let r_pt = rhs_ty.as_ref().and_then(pointee_type).cloned();
            match (l_pt, r_pt, op) {
                // ptr + int  /  ptr - int: scale the right operand.
                (Some(elem), None, _) => (l, scale_index_by_elem(ctx, r, &elem)),
                // int + ptr: scale the left operand. (int - ptr is
                // not legal C, so only Add here.)
                (None, Some(elem), BinaryOp::Add) => {
                    (scale_index_by_elem(ctx, l, &elem), r)
                }
                _ => (l, r),
            }
        }
        _ => (l, r),
    };

    let dst = ctx.alloc_vreg();
    match op {
        BinaryOp::Add => ctx.emit(IrOp::Add(dst, l, r)),
        BinaryOp::Sub => {
            // ptr - ptr (C99 6.5.6/9): difference in bytes must be
            // divided by `sizeof(*ptr)` to produce the number of
            // elements. The pre-scaled add path above leaves both
            // operands as byte addresses for this case.
            let l_pt = lhs_ty.as_ref().and_then(pointee_type).cloned();
            let r_pt = rhs_ty.as_ref().and_then(pointee_type).cloned();
            if let (Some(elem), Some(_)) = (l_pt, r_pt) {
                let raw = ctx.alloc_vreg();
                ctx.emit(IrOp::Sub(raw, l, r));
                // Match the stride used by `scale_index_by_elem` so
                // that `(p + n) - p == n` in the same byte units.
                let size = crate::types::size_bytes_ctx(&elem, ctx).max(1);
                if size == 1 {
                    ctx.emit(IrOp::Copy(dst, raw));
                } else {
                    let sz = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(sz, size as i64));
                    ctx.emit(IrOp::Div(dst, raw, sz));
                }
            } else {
                ctx.emit(IrOp::Sub(dst, l, r));
            }
        }
        BinaryOp::Mul => ctx.emit(IrOp::Mul(dst, l, r)),
        BinaryOp::Div => {
            if is_unsigned {
                ctx.emit(IrOp::UDiv(dst, l, r));
            } else {
                ctx.emit(IrOp::Div(dst, l, r));
            }
        }
        BinaryOp::Mod => {
            if is_unsigned {
                ctx.emit(IrOp::UMod(dst, l, r));
            } else {
                ctx.emit(IrOp::Mod(dst, l, r));
            }
        }
        BinaryOp::BitAnd => ctx.emit(IrOp::BitAnd(dst, l, r)),
        BinaryOp::BitOr => ctx.emit(IrOp::BitOr(dst, l, r)),
        BinaryOp::BitXor => ctx.emit(IrOp::BitXor(dst, l, r)),
        BinaryOp::Shl => ctx.emit(IrOp::Shl(dst, l, r)),
        BinaryOp::Shr => {
            // IrOp::Shr / Lshr both map to SHARC shift instructions
            // that use a signed count: positive counts shift left,
            // negative counts shift right. C `>>` is always a right
            // shift, so the count is negated before being handed to
            // the IR. The choice between Shr (ASHIFT, sign-extends)
            // and Lshr (LSHIFT, zero-fills) follows the C signedness
            // of the operands. Using ASHIFT for `uint32_t crc >>= 1`
            // would smear the sign bit into the high half, producing
            // wrong CRC table entries (and ultimately the csmith
            // checksum mismatch that masked an early hang).
            let neg = ctx.alloc_vreg();
            ctx.emit(IrOp::Neg(neg, r));
            if is_unsigned {
                ctx.emit(IrOp::Lshr(dst, l, neg));
            } else {
                ctx.emit(IrOp::Shr(dst, l, neg));
            }
        }
        BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt | BinaryOp::Gt
        | BinaryOp::Le | BinaryOp::Ge => {
            return lower_comparison(ctx, op, l, r, is_unsigned);
        }
        BinaryOp::LogAnd | BinaryOp::LogOr => unreachable!(),
    }
    Ok(dst)
}

fn lower_comparison(ctx: &mut LowerCtx, op: BinaryOp, l: VReg, r: VReg, is_unsigned: bool) -> Result<VReg> {
    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    let one = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::LoadImm(one, 1));
    if is_unsigned {
        ctx.emit(IrOp::UCmp(l, r));
    } else {
        ctx.emit(IrOp::Cmp(l, r));
    }

    let cond = match op {
        BinaryOp::Eq => Cond::Eq,
        BinaryOp::Ne => Cond::Ne,
        BinaryOp::Lt => Cond::Lt,
        BinaryOp::Gt => Cond::Gt,
        BinaryOp::Le => Cond::Le,
        BinaryOp::Ge => Cond::Ge,
        _ => unreachable!(),
    };

    let lbl_true = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();
    ctx.emit(IrOp::BranchCond(cond, lbl_true));
    ctx.emit(IrOp::Copy(dst, zero));
    ctx.emit(IrOp::Branch(lbl_end));
    ctx.emit(IrOp::Label(lbl_true));
    ctx.emit(IrOp::Copy(dst, one));
    ctx.emit(IrOp::Label(lbl_end));
    Ok(dst)
}

/// Widen a 32-bit vreg to a 64-bit register pair, using sign or zero extension
/// based on the expression type.
fn widen_to_64(ctx: &mut LowerCtx, val: VReg, expr: &Expr) -> VReg {
    let dst = ctx.alloc_vreg_pair();
    if is_unsigned_expr(expr, ctx) {
        ctx.emit(IrOp::IntToLongLong(dst, val));
    } else {
        ctx.emit(IrOp::SExtToLongLong(dst, val));
    }
    dst
}

/// Check if an expression has unsigned type.
fn is_unsigned_expr(expr: &Expr, ctx: &LowerCtx) -> bool {
    // Resolve typedef chains before testing signedness: stdint types
    // such as `uint32_t` arrive here as `Type::Typedef("uint32_t")`,
    // and `is_unsigned` only sees through Const/Volatile, so without
    // this step every uint32_t value would be treated as signed.
    expr_type(expr, ctx).is_some_and(|t| resolve_type(&t, ctx).is_unsigned())
}

/// Lower a 64-bit comparison to IR.
fn lower_comparison_64(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    l: VReg,
    r: VReg,
    is_unsigned: bool,
) -> Result<VReg> {
    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    let one = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::LoadImm(one, 1));
    if is_unsigned {
        ctx.emit(IrOp::UCmp64(l, r));
    } else {
        ctx.emit(IrOp::Cmp64(l, r));
    }

    let cond = match op {
        BinaryOp::Eq => Cond::Eq,
        BinaryOp::Ne => Cond::Ne,
        BinaryOp::Lt => Cond::Lt,
        BinaryOp::Gt => Cond::Gt,
        BinaryOp::Le => Cond::Le,
        BinaryOp::Ge => Cond::Ge,
        _ => unreachable!(),
    };

    let lbl_true = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();
    ctx.emit(IrOp::BranchCond(cond, lbl_true));
    ctx.emit(IrOp::Copy(dst, zero));
    ctx.emit(IrOp::Branch(lbl_end));
    ctx.emit(IrOp::Label(lbl_true));
    ctx.emit(IrOp::Copy(dst, one));
    ctx.emit(IrOp::Label(lbl_end));
    Ok(dst)
}

fn lower_log_and(ctx: &mut LowerCtx, lhs: &Expr, rhs: &Expr) -> Result<VReg> {
    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));

    let lbl_false = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();

    let l = lower_expr(ctx, lhs)?;
    ctx.emit(IrOp::Cmp(l, zero));
    ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_false));

    let r = lower_expr(ctx, rhs)?;
    ctx.emit(IrOp::Cmp(r, zero));
    ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_false));

    let one = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(one, 1));
    ctx.emit(IrOp::Copy(dst, one));
    ctx.emit(IrOp::Branch(lbl_end));

    ctx.emit(IrOp::Label(lbl_false));
    ctx.emit(IrOp::Copy(dst, zero));

    ctx.emit(IrOp::Label(lbl_end));
    Ok(dst)
}

fn lower_log_or(ctx: &mut LowerCtx, lhs: &Expr, rhs: &Expr) -> Result<VReg> {
    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));

    let lbl_true = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();

    let l = lower_expr(ctx, lhs)?;
    ctx.emit(IrOp::Cmp(l, zero));
    ctx.emit(IrOp::BranchCond(Cond::Ne, lbl_true));

    let r = lower_expr(ctx, rhs)?;
    ctx.emit(IrOp::Cmp(r, zero));
    ctx.emit(IrOp::BranchCond(Cond::Ne, lbl_true));

    ctx.emit(IrOp::Copy(dst, zero));
    ctx.emit(IrOp::Branch(lbl_end));

    ctx.emit(IrOp::Label(lbl_true));
    let one = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(one, 1));
    ctx.emit(IrOp::Copy(dst, one));

    ctx.emit(IrOp::Label(lbl_end));
    Ok(dst)
}

fn lower_if(
    ctx: &mut LowerCtx,
    cond: &Expr,
    then_body: &[Stmt],
    else_body: Option<&[Stmt]>,
) -> Result<()> {
    let cond_val = lower_expr(ctx, cond)?;
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::Cmp(cond_val, zero));

    // C99 6.8.4/3: each selection-statement substatement is itself a
    // block, so declarations in `then_body` / `else_body` must not leak
    // bindings into the enclosing scope.
    if let Some(else_stmts) = else_body {
        let lbl_else = ctx.alloc_label();
        let lbl_end = ctx.alloc_label();
        // Branch to else when condition is zero (not nonzero).
        ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_else));
        let snap_then = ctx.snapshot_scope();
        for s in then_body {
            lower_stmt(ctx, s)?;
        }
        ctx.restore_scope(snap_then);
        ctx.emit(IrOp::Branch(lbl_end));
        ctx.emit(IrOp::Label(lbl_else));
        let snap_else = ctx.snapshot_scope();
        for s in else_stmts {
            lower_stmt(ctx, s)?;
        }
        ctx.restore_scope(snap_else);
        ctx.emit(IrOp::Label(lbl_end));
    } else {
        let lbl_end = ctx.alloc_label();
        ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_end));
        let snap_then = ctx.snapshot_scope();
        for s in then_body {
            lower_stmt(ctx, s)?;
        }
        ctx.restore_scope(snap_then);
        ctx.emit(IrOp::Label(lbl_end));
    }
    Ok(())
}

fn lower_while(ctx: &mut LowerCtx, cond: &Expr, body: &[Stmt]) -> Result<()> {
    let continue_label = ctx.alloc_label();
    let break_label = ctx.alloc_label();

    ctx.emit(IrOp::Label(continue_label));
    let cond_val = lower_expr(ctx, cond)?;
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::Cmp(cond_val, zero));
    ctx.emit(IrOp::BranchCond(Cond::Eq, break_label));

    ctx.loop_stack.push(LoopContext {
        break_label,
        continue_label: Some(continue_label),
    });
    // C99 6.8.5/5: the loop body is its own block.
    let snap = ctx.snapshot_scope();
    for s in body {
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap);
    ctx.loop_stack.pop();

    ctx.emit(IrOp::Branch(continue_label));
    ctx.emit(IrOp::Label(break_label));
    Ok(())
}

fn lower_for(
    ctx: &mut LowerCtx,
    init: Option<&Stmt>,
    cond: Option<&Expr>,
    step: Option<&Expr>,
    body: &[Stmt],
) -> Result<()> {
    // C99 6.8.5/5: the entire `for` — including the init declaration
    // in `for (int i = 0; ...; ...)` — is a block. The init binding
    // must be visible in `cond`/`step`/body but not leak to the
    // enclosing scope.
    let snap_for = ctx.snapshot_scope();
    if let Some(init_stmt) = init {
        lower_stmt(ctx, init_stmt)?;
    }

    let continue_label = ctx.alloc_label();
    let break_label = ctx.alloc_label();

    ctx.emit(IrOp::Label(continue_label));
    if let Some(cond_expr) = cond {
        let cond_val = lower_expr(ctx, cond_expr)?;
        let zero = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(zero, 0));
        ctx.emit(IrOp::Cmp(cond_val, zero));
        ctx.emit(IrOp::BranchCond(Cond::Eq, break_label));
    }

    ctx.loop_stack.push(LoopContext {
        break_label,
        continue_label: Some(continue_label),
    });
    // The loop body is itself a nested block.
    let snap_body = ctx.snapshot_scope();
    for s in body {
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap_body);
    ctx.loop_stack.pop();

    if let Some(step_expr) = step {
        lower_expr(ctx, step_expr)?;
    }
    ctx.emit(IrOp::Branch(continue_label));
    ctx.emit(IrOp::Label(break_label));
    ctx.restore_scope(snap_for);
    Ok(())
}

fn lower_do_while(ctx: &mut LowerCtx, body: &[Stmt], cond: &Expr) -> Result<()> {
    let continue_label = ctx.alloc_label();
    let break_label = ctx.alloc_label();

    ctx.emit(IrOp::Label(continue_label));

    ctx.loop_stack.push(LoopContext {
        break_label,
        continue_label: Some(continue_label),
    });
    // C99 6.8.5/5: loop body is its own block.
    let snap = ctx.snapshot_scope();
    for s in body {
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap);
    ctx.loop_stack.pop();

    let cond_val = lower_expr(ctx, cond)?;
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::Cmp(cond_val, zero));
    ctx.emit(IrOp::BranchCond(Cond::NonZero, continue_label));
    ctx.emit(IrOp::Label(break_label));
    Ok(())
}

/// Collect all CaseLabel / DefaultLabel positions from a switch body,
/// recursing into nested blocks, loops, etc. (Duff's device).
fn collect_case_labels(stmts: &[Stmt], out: &mut Vec<Option<Expr>>) {
    for s in stmts {
        match s {
            Stmt::CaseLabel(e) => out.push(Some(e.clone())),
            Stmt::DefaultLabel => out.push(None),
            Stmt::Block(inner) | Stmt::DeclGroup(inner) => {
                collect_case_labels(inner, out)
            }
            Stmt::If { then_body, else_body, .. } => {
                collect_case_labels(then_body, out);
                if let Some(eb) = else_body {
                    collect_case_labels(eb, out);
                }
            }
            Stmt::While { body, .. }
            | Stmt::For { body, .. }
            | Stmt::DoWhile { body, .. } => collect_case_labels(body, out),
            Stmt::Switch { .. } => {} // nested switch owns its own labels
            Stmt::Label(_, inner) => {
                collect_case_labels(std::slice::from_ref(inner.as_ref()), out);
            }
            _ => {}
        }
    }
}

fn lower_switch(
    ctx: &mut LowerCtx,
    expr: &Expr,
    body: &[Stmt],
) -> Result<()> {
    let switch_val = lower_expr(ctx, expr)?;
    let break_label = ctx.alloc_label();

    // Collect all case/default labels from the body (may be nested).
    let mut labels_info: Vec<Option<Expr>> = Vec::new();
    collect_case_labels(body, &mut labels_info);

    // Allocate an IR label for each case arm.
    let ir_labels: Vec<Label> = labels_info.iter().map(|_| ctx.alloc_label()).collect();

    // Find the default case index, if any.
    let default_idx = labels_info.iter().position(|v| v.is_none());

    // Emit the comparison chain.
    for (i, val) in labels_info.iter().enumerate() {
        if let Some(val_expr) = val {
            let case_vreg = lower_expr(ctx, val_expr)?;
            ctx.emit(IrOp::Cmp(switch_val, case_vreg));
            ctx.emit(IrOp::BranchCond(Cond::Eq, ir_labels[i]));
        }
    }

    // After all comparisons: jump to default if present, otherwise break.
    if let Some(di) = default_idx {
        ctx.emit(IrOp::Branch(ir_labels[di]));
    } else {
        ctx.emit(IrOp::Branch(break_label));
    }

    // Emit the body.  A counter tracks which CaseLabel/DefaultLabel we
    // encounter so we can emit the corresponding IR label.
    ctx.loop_stack.push(LoopContext {
        break_label,
        continue_label: None,
    });
    let saved_idx = ctx.switch_label_idx;
    ctx.switch_label_idx = 0;
    ctx.switch_labels.push(ir_labels);
    // C99 6.8.4/3: the switch substatement is itself a block.
    let snap = ctx.snapshot_scope();
    for s in body {
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap);
    ctx.switch_labels.pop();
    ctx.switch_label_idx = saved_idx;
    ctx.loop_stack.pop();

    ctx.emit(IrOp::Label(break_label));
    Ok(())
}

fn lower_float_comparison(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    l: VReg,
    r: VReg,
) -> Result<VReg> {
    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    let one = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::LoadImm(one, 1));
    ctx.emit(IrOp::FCmp(l, r));

    let cond = match op {
        BinaryOp::Eq => Cond::Eq,
        BinaryOp::Ne => Cond::Ne,
        BinaryOp::Lt => Cond::Lt,
        BinaryOp::Gt => Cond::Gt,
        BinaryOp::Le => Cond::Le,
        BinaryOp::Ge => Cond::Ge,
        _ => unreachable!(),
    };

    let lbl_true = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();
    ctx.emit(IrOp::BranchCond(cond, lbl_true));
    ctx.emit(IrOp::Copy(dst, zero));
    ctx.emit(IrOp::Branch(lbl_end));
    ctx.emit(IrOp::Label(lbl_true));
    ctx.emit(IrOp::Copy(dst, one));
    ctx.emit(IrOp::Label(lbl_end));
    Ok(dst)
}

/// For compound assignments `p += n` / `p -= n` on pointer targets,
/// scale `n` by the pointee stride so the pointer advances by the
/// same amount as the binary `p + n` path.
fn maybe_scale_ptr_rhs(ctx: &mut LowerCtx, op: BinaryOp, target: &Expr,
                       rhs: VReg) -> VReg {
    if !matches!(op, BinaryOp::Add | BinaryOp::Sub) {
        return rhs;
    }
    let Some(ty) = expr_type(target, ctx) else { return rhs; };
    let Some(pt) = pointee_type(&ty).cloned() else { return rhs; };
    scale_index_by_elem(ctx, rhs, &pt)
}

/// Pointer arithmetic stride for `++`, `--`, `+=`, `-=` on a pointer
/// whose type is `ty`.  Matches `scale_index_by_elem`: `sizeof(*ty)`
/// in bytes so byte-packed char arrays and `(char *)&int` aliases
/// both walk byte-by-byte through the underlying storage.
/// Returns 1 for non-pointer types.
fn ptr_stride(ty: Option<&Type>, ctx: &LowerCtx) -> i64 {
    let Some(t) = ty else { return 1; };
    let Some(pt) = pointee_type(t) else { return 1; };
    crate::types::size_bytes_ctx(pt, ctx).max(1) as i64
}

fn lower_inc_dec(
    ctx: &mut LowerCtx,
    operand: &Expr,
    is_inc: bool,
    is_pre: bool,
) -> Result<VReg> {
    let stride = ptr_stride(expr_type(operand, ctx).as_ref(), ctx);
    match operand {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                let old_val = match &storage {
                    LocalStorage::Reg(vreg) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::Copy(dst, *vreg));
                        dst
                    }
                    LocalStorage::Stack(offset) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::Load(dst, 0, *offset as i32));
                        dst
                    }
                    LocalStorage::Static(sym) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::ReadGlobal(dst, sym.clone()));
                        dst
                    }
                };
                let one = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(one, stride));
                let new_val = ctx.alloc_vreg();
                if is_inc {
                    ctx.emit(IrOp::Add(new_val, old_val, one));
                } else {
                    ctx.emit(IrOp::Sub(new_val, old_val, one));
                }
                match &storage {
                    LocalStorage::Stack(offset) => {
                        ctx.emit(IrOp::Store(new_val, 0, *offset as i32));
                    }
                    LocalStorage::Reg(_) => {
                        // Update the register binding to the new value.
                        ctx.locals.insert(name.clone(), LocalStorage::Reg(new_val));
                    }
                    LocalStorage::Static(sym) => {
                        ctx.emit(IrOp::StoreGlobal(new_val, sym.clone()));
                    }
                }
                if is_pre { Ok(new_val) } else { Ok(old_val) }
            } else if ctx.globals.contains_key(name) {
                // Global variable increment/decrement
                let old_val = ctx.alloc_vreg();
                ctx.emit(IrOp::ReadGlobal(old_val, name.clone()));
                let one = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(one, stride));
                let new_val = ctx.alloc_vreg();
                if is_inc {
                    ctx.emit(IrOp::Add(new_val, old_val, one));
                } else {
                    ctx.emit(IrOp::Sub(new_val, old_val, one));
                }
                ctx.emit(IrOp::StoreGlobal(new_val, name.clone()));
                if is_pre { Ok(new_val) } else { Ok(old_val) }
            } else {
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
            }
        }
        Expr::Deref(_) | Expr::Index(..) | Expr::Member(..) | Expr::Arrow(..) => {
            let addr = lower_lvalue_addr(ctx, operand)?;
            let old_val = ctx.alloc_vreg();
            ctx.emit(IrOp::Load(old_val, addr, 0));
            let one = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(one, stride));
            let new_val = ctx.alloc_vreg();
            if is_inc {
                ctx.emit(IrOp::Add(new_val, old_val, one));
            } else {
                ctx.emit(IrOp::Sub(new_val, old_val, one));
            }
            ctx.emit(IrOp::Store(new_val, addr, 0));
            if is_pre { Ok(new_val) } else { Ok(old_val) }
        }
        _ => Err(Error::NotImplemented(
            "increment/decrement of complex expression".into(),
        )),
    }
}

/// Emit the binary operation for a 64-bit compound assignment, given loaded
/// lhs and rhs 64-bit vreg pairs. Returns the result 64-bit vreg pair.
fn emit_compound_op_64(ctx: &mut LowerCtx, op: BinaryOp, lhs: VReg, rhs: VReg,
                       is_unsigned: bool) -> Result<VReg> {
    let result = ctx.alloc_vreg_pair();
    match op {
        BinaryOp::Add => ctx.emit(IrOp::Add64(result, lhs, rhs)),
        BinaryOp::Sub => ctx.emit(IrOp::Sub64(result, lhs, rhs)),
        BinaryOp::Mul => ctx.emit(IrOp::Mul64(result, lhs, rhs)),
        BinaryOp::Div => {
            if is_unsigned {
                ctx.emit(IrOp::UDiv64(result, lhs, rhs));
            } else {
                ctx.emit(IrOp::Div64(result, lhs, rhs));
            }
        }
        BinaryOp::Mod => {
            if is_unsigned {
                ctx.emit(IrOp::UMod64(result, lhs, rhs));
            } else {
                ctx.emit(IrOp::Mod64(result, lhs, rhs));
            }
        }
        BinaryOp::BitAnd => ctx.emit(IrOp::BitAnd64(result, lhs, rhs)),
        BinaryOp::BitOr => ctx.emit(IrOp::BitOr64(result, lhs, rhs)),
        BinaryOp::BitXor => ctx.emit(IrOp::BitXor64(result, lhs, rhs)),
        BinaryOp::Shl => ctx.emit(IrOp::Shl64(result, lhs, rhs)),
        BinaryOp::Shr => {
            if is_unsigned {
                ctx.emit(IrOp::UShr64(result, lhs, rhs));
            } else {
                ctx.emit(IrOp::Shr64(result, lhs, rhs));
            }
        }
        _ => {
            return Err(Error::NotImplemented(format!(
                "64-bit compound assignment op: {op:?}"
            )));
        }
    }
    Ok(result)
}

/// Emit the binary operation for a compound assignment, given loaded lhs and
/// rhs vregs. Returns the result vreg.
fn emit_compound_op(ctx: &mut LowerCtx, op: BinaryOp, lhs: VReg, rhs: VReg,
                    is_unsigned: bool) -> Result<VReg> {
    let result = ctx.alloc_vreg();
    match op {
        BinaryOp::Add => ctx.emit(IrOp::Add(result, lhs, rhs)),
        BinaryOp::Sub => ctx.emit(IrOp::Sub(result, lhs, rhs)),
        BinaryOp::Mul => ctx.emit(IrOp::Mul(result, lhs, rhs)),
        BinaryOp::Div => {
            if is_unsigned {
                ctx.emit(IrOp::UDiv(result, lhs, rhs));
            } else {
                ctx.emit(IrOp::Div(result, lhs, rhs));
            }
        }
        BinaryOp::Mod => {
            if is_unsigned {
                ctx.emit(IrOp::UMod(result, lhs, rhs));
            } else {
                ctx.emit(IrOp::Mod(result, lhs, rhs));
            }
        }
        BinaryOp::BitAnd => ctx.emit(IrOp::BitAnd(result, lhs, rhs)),
        BinaryOp::BitOr => ctx.emit(IrOp::BitOr(result, lhs, rhs)),
        BinaryOp::BitXor => ctx.emit(IrOp::BitXor(result, lhs, rhs)),
        BinaryOp::Shl => ctx.emit(IrOp::Shl(result, lhs, rhs)),
        BinaryOp::Shr => {
            // Compound `>>=` mirrors the binary `>>` lowering: the
            // SHARC ASHIFT/LSHIFT this maps to uses negative counts
            // for right shifts, so we have to negate here too. The
            // signedness flag picks the arithmetic vs logical form
            // so that `crc >>= 1` on a uint32_t zero-fills.
            let neg = ctx.alloc_vreg();
            ctx.emit(IrOp::Neg(neg, rhs));
            if is_unsigned {
                ctx.emit(IrOp::Lshr(result, lhs, neg));
            } else {
                ctx.emit(IrOp::Shr(result, lhs, neg));
            }
        }
        _ => {
            return Err(Error::NotImplemented(format!(
                "compound assignment op: {op:?}"
            )));
        }
    }
    Ok(result)
}

fn lower_compound_assign(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    target: &Expr,
    value: &Expr,
) -> Result<VReg> {
    // Compound `>>=` etc. follow the C usual-arithmetic-conversions
    // rule: if either operand is unsigned, the operation is unsigned.
    let is_unsigned = is_unsigned_expr(target, ctx) || is_unsigned_expr(value, ctx);

    // Detect 64-bit target: `long long x; x <<= n;` must load/op/store
    // as a two-word pair. Without this dispatch the 32-bit paths below
    // would truncate both operands and the result.
    let target_is_64 = expr_type(target, ctx).is_some_and(|t| t.is_long_long());
    if target_is_64 {
        return lower_compound_assign_64(ctx, op, target, value, is_unsigned);
    }

    match target {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                let lhs = match storage {
                    LocalStorage::Stack(offset) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::Load(dst, 0, offset as i32));
                        dst
                    }
                    LocalStorage::Reg(vreg) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::Copy(dst, vreg));
                        dst
                    }
                    LocalStorage::Static(ref sym) => {
                        let dst = ctx.alloc_vreg();
                        ctx.emit(IrOp::ReadGlobal(dst, sym.clone()));
                        dst
                    }
                };
                let rhs = lower_expr(ctx, value)?;
                let rhs = maybe_scale_ptr_rhs(ctx, op, target, rhs);
                let result = emit_compound_op(ctx, op, lhs, rhs, is_unsigned)?;
                match storage {
                    LocalStorage::Stack(offset) => {
                        ctx.emit(IrOp::Store(result, 0, offset as i32));
                    }
                    LocalStorage::Reg(vreg) => {
                        ctx.emit(IrOp::Copy(vreg, result));
                    }
                    LocalStorage::Static(ref sym) => {
                        ctx.emit(IrOp::StoreGlobal(result, sym.clone()));
                    }
                }
                Ok(result)
            } else if ctx.globals.contains_key(name) {
                // Compound assignment to a global variable.
                let lhs = ctx.alloc_vreg();
                ctx.emit(IrOp::ReadGlobal(lhs, name.clone()));
                let rhs = lower_expr(ctx, value)?;
                let rhs = maybe_scale_ptr_rhs(ctx, op, target, rhs);
                let result = emit_compound_op(ctx, op, lhs, rhs, is_unsigned)?;
                ctx.emit(IrOp::StoreGlobal(result, name.clone()));
                Ok(result)
            } else {
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
            }
        }
        Expr::Deref(_) | Expr::Index(..) | Expr::Member(..) | Expr::Arrow(..) => {
            let addr = lower_lvalue_addr(ctx, target)?;
            let lhs = ctx.alloc_vreg();
            ctx.emit(IrOp::Load(lhs, addr, 0));
            let rhs = lower_expr(ctx, value)?;
            let rhs = maybe_scale_ptr_rhs(ctx, op, target, rhs);
            let result = emit_compound_op(ctx, op, lhs, rhs, is_unsigned)?;
            ctx.emit(IrOp::Store(result, addr, 0));
            Ok(result)
        }
        _ => {
            let addr = lower_lvalue_addr(ctx, target)?;
            let lhs = ctx.alloc_vreg();
            ctx.emit(IrOp::Load(lhs, addr, 0));
            let rhs_val = lower_expr(ctx, value)?;
            let rhs_val = maybe_scale_ptr_rhs(ctx, op, target, rhs_val);
            let result = emit_compound_op(ctx, op, lhs, rhs_val, is_unsigned)?;
            ctx.emit(IrOp::Store(result, addr, 0));
            Ok(result)
        }
    }
}

/// Compound assignment where the target is a `long long` / `unsigned long
/// long`.  Loads the lhs as a 64-bit pair, widens the rhs to 64-bit if it
/// arrived as a 32-bit value, applies the 64-bit binop, and stores the
/// result back through the appropriate 64-bit store path.
fn lower_compound_assign_64(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    target: &Expr,
    value: &Expr,
    is_unsigned: bool,
) -> Result<VReg> {
    // Helper: load the 64-bit rhs, widening a 32-bit expression if needed.
    // Shift operators take a 32-bit count — do NOT widen their rhs.
    let rhs_is_shift_count = matches!(op, BinaryOp::Shl | BinaryOp::Shr);
    let load_rhs = |ctx: &mut LowerCtx| -> Result<VReg> {
        let rhs = lower_expr(ctx, value)?;
        if rhs_is_shift_count {
            // Runtime helpers and inline shift sequences read the
            // count from the lo word of the rhs pair; they ignore
            // the hi word.  Passing a plain 32-bit vreg works the
            // same way because Shl64/Shr64/UShr64 only use the lo.
            return Ok(rhs);
        }
        if ctx.is_64bit_vreg(rhs) {
            Ok(rhs)
        } else {
            Ok(widen_to_64(ctx, rhs, value))
        }
    };

    match target {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                let lhs = match storage {
                    LocalStorage::Stack(offset) => {
                        let dst = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::Load64(dst, 0, offset as i32));
                        dst
                    }
                    LocalStorage::Reg(vreg) => {
                        let dst = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::Copy64(dst, vreg));
                        dst
                    }
                    LocalStorage::Static(ref sym) => {
                        let dst = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::ReadGlobal64(dst, sym.clone()));
                        dst
                    }
                };
                let rhs = load_rhs(ctx)?;
                let result = emit_compound_op_64(ctx, op, lhs, rhs, is_unsigned)?;
                match storage {
                    LocalStorage::Stack(offset) => {
                        ctx.emit(IrOp::Store64(result, 0, offset as i32));
                    }
                    LocalStorage::Reg(vreg) => {
                        ctx.emit(IrOp::Copy(vreg, result));
                        ctx.emit(IrOp::Copy(vreg + 1, result + 1));
                    }
                    LocalStorage::Static(ref sym) => {
                        ctx.emit(IrOp::WriteGlobal64(result, sym.clone()));
                    }
                }
                Ok(result)
            } else if ctx.globals.contains_key(name) {
                let lhs = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::ReadGlobal64(lhs, name.clone()));
                let rhs = load_rhs(ctx)?;
                let result = emit_compound_op_64(ctx, op, lhs, rhs, is_unsigned)?;
                ctx.emit(IrOp::WriteGlobal64(result, name.clone()));
                Ok(result)
            } else {
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
            }
        }
        Expr::Deref(inner) => {
            let ptr = lower_expr(ctx, inner)?;
            let lhs = ctx.alloc_vreg_pair();
            ctx.emit(IrOp::Load64(lhs, ptr, 0));
            let rhs = load_rhs(ctx)?;
            let result = emit_compound_op_64(ctx, op, lhs, rhs, is_unsigned)?;
            ctx.emit(IrOp::Store64(result, ptr, 0));
            Ok(result)
        }
        _ => {
            let addr = lower_lvalue_addr(ctx, target)?;
            let lhs = ctx.alloc_vreg_pair();
            ctx.emit(IrOp::Load64(lhs, addr, 0));
            let rhs = load_rhs(ctx)?;
            let result = emit_compound_op_64(ctx, op, lhs, rhs, is_unsigned)?;
            ctx.emit(IrOp::Store64(result, addr, 0));
            Ok(result)
        }
    }
}

/// Lower an aggregate (or degenerate scalar) initializer list into stack
/// stores, honouring C99 designated initializers (`[n] = v`, `.field = v`)
/// and the "positional continues after designator" rule.
///
/// Layout: aggregates store element / field 0 at the deepest slot
/// (`slot_base + num_words - 1`) so that adding an element / byte offset
/// to the storage base address walks upward through memory in
/// increasing-offset order.  Non-aggregate scalar init (`int x = {5};`)
/// keeps the single slot at `slot_base`.
///
/// Holes between designators are zero-filled to match C99 semantics.
fn lower_aggregate_init(
    ctx: &mut LowerCtx,
    items: &[Expr],
    ty: &Type,
    slot_base: u32,
    num_words: u32,
    is_aggregate: bool,
) -> Result<()> {
    // Non-aggregate degenerate case: `int x = {5};` — single slot, ignore
    // anything past the first item.  No zero-fill needed.
    if !is_aggregate {
        for (i, item) in items.iter().enumerate() {
            let inner = strip_designator(item);
            let val = lower_expr(ctx, inner)?;
            ctx.emit(IrOp::Store(val, 0, (slot_base + i as u32) as i32));
        }
        return Ok(());
    }

    // Aggregate: zero-fill every word first so holes between designators
    // (`int a[5] = {[2]=7};` leaves a[0..2] and a[3..] at 0) are set.
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    for w in 0..num_words {
        ctx.emit(IrOp::Store(zero, 0, (slot_base + w) as i32));
    }

    // Resolve struct-field metadata once (used for `.field = v` designators).
    let resolved_ty = resolve_type(ty, ctx);
    let struct_fields: Option<Vec<(String, Type)>> =
        resolve_struct_fields(&resolved_ty, ctx).map(|f| f.to_vec());

    // Byte-packed char-element array: each item is an 8-bit byte that
    // lives in one of four byte slots of a 32-bit word.  Use a
    // separate pass so we can combine multiple items into a single
    // `Store` per word, honouring the same deepest-slot-first layout
    // aggregates use for downward-growing stacks.
    if let Type::Array(elem_ty, _) = resolved_ty.unqualified() {
        if crate::types::size_bytes_ctx(elem_ty, ctx) == 1 {
            lower_byte_array_init(ctx, items, slot_base, num_words)?;
            return Ok(());
        }
    }

    // Structs: use the actual field byte offsets so char / short
    // fields at sub-word offsets (`struct { char a; char b; int c; }`)
    // pack into shared words via byte-extract stores rather than
    // claiming one word per field index.
    if struct_fields.is_some() && !is_union_type(&resolved_ty) {
        lower_struct_init(
            ctx,
            items,
            struct_fields.as_deref().unwrap(),
            slot_base,
            num_words,
        )?;
        return Ok(());
    }

    // Element stride (in words) for arrays: each positional step or
    // `[n]` designator advances by `elem_words` words.  For structs the
    // cursor tracks the field index and we resolve to byte offsets.
    let elem_words: u32 = match resolved_ty.unqualified() {
        Type::Array(elem_ty, _) => {
            crate::types::size_bytes_ctx(elem_ty, ctx).div_ceil(4).max(1)
        }
        _ => 1,
    };

    // Cursor is the next element index (for arrays) or field index
    // (for structs).  Designators reset the cursor; positional items
    // advance it.
    let mut cursor: u32 = 0;
    for item in items {
        let (word_off, inner_expr, next_cursor) = match item {
            Expr::ArrayDesignator { index, value } => {
                let idx = match index.as_ref() {
                    Expr::IntLit(v, _) => *v as u32,
                    _ => cursor,
                };
                let w = idx.saturating_mul(elem_words);
                (w, value.as_ref(), idx.saturating_add(1))
            }
            Expr::DesignatedInit { field, value } => {
                if let Some(fields) = struct_fields.as_deref() {
                    if let Some((byte_off, _)) =
                        struct_field_offset(fields, field, ctx)
                    {
                        let fidx = fields
                            .iter()
                            .position(|(n, _)| n == field)
                            .unwrap_or(cursor as usize)
                            as u32;
                        (byte_off / 4, value.as_ref(), fidx.saturating_add(1))
                    } else {
                        // Unknown field: fall back to cursor-based store.
                        (cursor.saturating_mul(elem_words), value.as_ref(),
                         cursor.saturating_add(1))
                    }
                } else {
                    (cursor.saturating_mul(elem_words), value.as_ref(),
                     cursor.saturating_add(1))
                }
            }
            other => {
                let w = cursor.saturating_mul(elem_words);
                (w, other, cursor.saturating_add(1))
            }
        };

        if word_off >= num_words {
            cursor = next_cursor;
            continue;
        }

        // For aggregates the deepest slot holds word 0; element at word
        // offset `w` sits at `slot_base + num_words - 1 - w`.
        let elem_slot = slot_base + num_words - 1 - word_off;
        let val = lower_expr(ctx, inner_expr)?;
        ctx.emit(IrOp::Store(val, 0, elem_slot as i32));
        cursor = next_cursor;
    }
    Ok(())
}

/// Initialise a byte-packed char-element array from an aggregate init
/// list.  Each item lowers to a byte value (1-byte scalar), and four
/// consecutive items share one 32-bit word at byte lanes 0..3 (little
/// endian).  Designators `[n] = v` write byte index `n`; positional
/// items continue from the cursor.  Because word storage is written in
/// one `Store` per word and 32-bit vreg operations are the only
/// primitive, items are assembled into a running word via shift-and-or
/// and committed when the next word starts or at end of list.
fn lower_byte_array_init(
    ctx: &mut LowerCtx,
    items: &[Expr],
    slot_base: u32,
    num_words: u32,
) -> Result<()> {
    // Resolve each item into (byte_idx, value_vreg_masked_to_byte).
    // Non-constant values still emit properly; constant-foldable values
    // are handled by the generic lower_expr path.
    let mut byte_vals: Vec<(u32, VReg)> = Vec::with_capacity(items.len());
    let mut cursor: u32 = 0;
    for item in items {
        let (idx, inner) = match item {
            Expr::ArrayDesignator { index, value } => {
                let i = match index.as_ref() {
                    Expr::IntLit(v, _) => *v as u32,
                    _ => cursor,
                };
                (i, value.as_ref())
            }
            Expr::DesignatedInit { value, .. } => (cursor, value.as_ref()),
            other => (cursor, other),
        };
        let val = lower_expr(ctx, inner)?;
        let mask_v = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(mask_v, 0xFF));
        let masked = ctx.alloc_vreg();
        ctx.emit(IrOp::BitAnd(masked, val, mask_v));
        byte_vals.push((idx, masked));
        cursor = idx.saturating_add(1);
    }

    // Bucket bytes by word index (byte_idx / 4).  A missing byte stays
    // zero from the outer zero-fill that `lower_aggregate_init` just
    // emitted.
    for wi in 0..num_words {
        let slot = slot_base + num_words - 1 - wi;
        let mut word_acc: Option<VReg> = None;
        for &(bi, v) in &byte_vals {
            if bi / 4 != wi {
                continue;
            }
            let lane = (bi % 4) * 8;
            let shifted = if lane == 0 {
                v
            } else {
                let sh = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(sh, lane as i64));
                let out = ctx.alloc_vreg();
                ctx.emit(IrOp::Shl(out, v, sh));
                out
            };
            word_acc = Some(match word_acc {
                None => shifted,
                Some(prev) => {
                    let merged = ctx.alloc_vreg();
                    ctx.emit(IrOp::BitOr(merged, prev, shifted));
                    merged
                }
            });
        }
        if let Some(w) = word_acc {
            ctx.emit(IrOp::Store(w, 0, slot as i32));
        }
    }
    Ok(())
}

/// Initialise a struct from an aggregate init list using real field
/// byte offsets.  Char / short fields at sub-word offsets share a
/// 32-bit word with their neighbours via byte-extract stores so the
/// layout matches what `struct_field_layout_ctx` reports to member-
/// access code.  Positional items walk fields in declaration order;
/// `.field = v` designators jump to that field and subsequent
/// positional items continue from there.
fn lower_struct_init(
    ctx: &mut LowerCtx,
    items: &[Expr],
    fields: &[(String, Type)],
    slot_base: u32,
    num_words: u32,
) -> Result<()> {
    let mut cursor: usize = 0;
    for item in items {
        let (fidx, inner) = match item {
            Expr::DesignatedInit { field, value } => {
                let idx = fields
                    .iter()
                    .position(|(n, _)| n == field)
                    .unwrap_or(cursor);
                (idx, value.as_ref())
            }
            Expr::ArrayDesignator { .. } => {
                // An array designator inside a struct init list is
                // malformed; skip it to avoid crashing but keep the
                // cursor moving so trailing positional items still
                // line up.
                cursor = cursor.saturating_add(1);
                continue;
            }
            other => (cursor, other),
        };
        if fidx >= fields.len() {
            cursor = fidx + 1;
            continue;
        }
        let (fname, fty) = &fields[fidx];
        let Some((byte_off, _, _)) =
            crate::types::struct_field_layout_ctx(fields, fname, ctx)
        else {
            cursor = fidx + 1;
            continue;
        };
        let word_off = byte_off / 4;
        if word_off >= num_words {
            cursor = fidx + 1;
            continue;
        }
        let elem_slot = slot_base + num_words - 1 - word_off;
        let val = lower_expr(ctx, inner)?;
        let fbytes = crate::types::size_bytes_ctx(fty, ctx);
        if fbytes == 1 {
            // Char-width field: merge into the containing word via
            // byte-extract store, preserving any neighbouring bytes
            // already present in the same word.
            let lane = (byte_off % 4) * 8;
            let ff = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(ff, 0xFF));
            let val_byte = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(val_byte, val, ff));
            let placed = if lane == 0 {
                val_byte
            } else {
                let sh = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(sh, lane as i64));
                let out = ctx.alloc_vreg();
                ctx.emit(IrOp::Shl(out, val_byte, sh));
                out
            };
            // Read-modify-write the word so earlier byte fields
            // already written to the same slot survive.
            let old = ctx.alloc_vreg();
            ctx.emit(IrOp::Load(old, 0, elem_slot as i32));
            let mask_v = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(mask_v, !(0xFFi64 << lane) & 0xFFFFFFFF));
            let cleared = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(cleared, old, mask_v));
            let merged = ctx.alloc_vreg();
            ctx.emit(IrOp::BitOr(merged, cleared, placed));
            ctx.emit(IrOp::Store(merged, 0, elem_slot as i32));
        } else {
            // Wider (word-aligned) field: plain word store.
            ctx.emit(IrOp::Store(val, 0, elem_slot as i32));
        }
        cursor = fidx + 1;
    }
    Ok(())
}

/// Peel a designator wrapper, returning the inner value expression.
/// Used in scalar contexts where designators are meaningless but may
/// still appear syntactically (e.g. `int x = {.f = 5}` — degenerate).
fn strip_designator(expr: &Expr) -> &Expr {
    match expr {
        Expr::DesignatedInit { value, .. }
        | Expr::ArrayDesignator { value, .. } => strip_designator(value),
        other => other,
    }
}

/// Lower a C99 compound literal: `(type){init-list}`.
///
/// Allocates a temporary stack slot, initializes it from the init list,
/// and returns the first word as a vreg.  For scalar types (int, float,
/// pointer) the value is loaded back; for aggregates (struct, union,
/// array) the slot acts as anonymous storage that can be addressed.
fn lower_compound_literal(
    ctx: &mut LowerCtx,
    ty: &Type,
    items: &[Expr],
) -> Result<VReg> {
    let resolved_ty = resolve_type(ty, ctx);
    let num_words = crate::types::size_words_ctx(&resolved_ty, ctx).max(1) as u32;
    let slot = ctx.frame_size;
    ctx.frame_size += num_words;

    // Initialize fields from the init list.
    for (i, item) in items.iter().enumerate() {
        if i as u32 >= num_words {
            break;
        }
        // Handle designated initializers: .field = value
        let item_expr = match item {
            Expr::DesignatedInit { field, value } => {
                if let Some(fields) = resolve_struct_fields(&resolved_ty, ctx) {
                    if let Some((byte_off, _)) = struct_field_offset(fields, field, ctx) {
                        // `struct_field_offset` returns a byte offset;
                        // stack slots are word-sized, so convert before
                        // adding to the compound-literal base slot.
                        let word_off = byte_off / 4;
                        let val = lower_expr(ctx, value)?;
                        ctx.emit(IrOp::Store(val, 0, (slot + word_off) as i32));
                        continue;
                    }
                }
                value.as_ref()
            }
            Expr::ArrayDesignator { index, value } => {
                let idx = match index.as_ref() {
                    Expr::IntLit(v, _) => *v as u32,
                    _ => 0,
                };
                let val = lower_expr(ctx, value)?;
                ctx.emit(IrOp::Store(val, 0, (slot + idx) as i32));
                continue;
            }
            other => other,
        };
        let val = lower_expr(ctx, item_expr)?;
        ctx.emit(IrOp::Store(val, 0, (slot + i as u32) as i32));
    }

    // Return the value: load the first word.
    let dst = if resolved_ty.is_float() {
        ctx.alloc_vreg_float()
    } else {
        ctx.alloc_vreg()
    };
    ctx.emit(IrOp::Load(dst, 0, slot as i32));
    Ok(dst)
}

/// Resolve a type through typedefs to its underlying type.
fn resolve_type(ty: &Type, ctx: &LowerCtx) -> Type {
    match ty {
        Type::Typedef(name) => {
            for (td_name, td_ty) in &ctx.typedefs {
                if td_name == name {
                    return resolve_type(td_ty, ctx);
                }
            }
            ty.clone()
        }
        Type::Volatile(inner) | Type::Const(inner) => resolve_type(inner, ctx),
        _ => ty.clone(),
    }
}

fn lower_ternary(
    ctx: &mut LowerCtx,
    cond: &Expr,
    then_expr: &Expr,
    else_expr: &Expr,
) -> Result<VReg> {
    let cond_val = lower_expr(ctx, cond)?;
    let result = ctx.alloc_vreg();
    let else_label = ctx.alloc_label();
    let end_label = ctx.alloc_label();

    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));
    ctx.emit(IrOp::Cmp(cond_val, zero));
    ctx.emit(IrOp::BranchCond(Cond::Eq, else_label));

    // Then branch.
    let then_val = lower_expr(ctx, then_expr)?;
    ctx.emit(IrOp::Copy(result, then_val));
    ctx.emit(IrOp::Branch(end_label));

    // Else branch.
    ctx.emit(IrOp::Label(else_label));
    let else_val = lower_expr(ctx, else_expr)?;
    ctx.emit(IrOp::Copy(result, else_val));
    ctx.emit(IrOp::Label(end_label));

    Ok(result)
}

/// Check whether a type is an aggregate in the C99 sense (struct, union,
/// or array). Aggregates, when used as an rvalue, decay to their address
/// rather than a loaded scalar value; callers that lower `Expr::Member` /
/// `Expr::Arrow` to a value must treat them specially.
fn is_aggregate_type(ty: &Type, ctx: &LowerCtx) -> bool {
    match ty {
        Type::Struct { .. } | Type::Union { .. } | Type::Array(_, _) => true,
        Type::Volatile(inner) | Type::Const(inner) => is_aggregate_type(inner, ctx),
        Type::Typedef(name) => {
            for (td_name, td_ty) in &ctx.typedefs {
                if td_name == name {
                    return is_aggregate_type(td_ty, ctx);
                }
            }
            // Typedef may alias a struct tag directly.
            for (def_name, def_fields) in &ctx.struct_defs {
                if def_name == name && !def_fields.is_empty() {
                    return true;
                }
            }
            false
        }
        _ => false,
    }
}

/// Check whether a type resolves to a struct or union (multi-word aggregate).
fn is_struct_type(ty: &Type, ctx: &LowerCtx) -> bool {
    match ty {
        Type::Struct { .. } | Type::Union { .. } => true,
        Type::Volatile(inner) | Type::Const(inner) => is_struct_type(inner, ctx),
        Type::Typedef(name) => {
            for (td_name, td_ty) in &ctx.typedefs {
                if td_name == name {
                    return is_struct_type(td_ty, ctx);
                }
            }
            false
        }
        _ => false,
    }
}

/// Get the size in words of a type, resolving typedefs and named struct
/// references through the context. Thin wrapper over `size_words_ctx`
/// kept for readability at call sites that historically used it.
fn type_size_words(ty: &Type, ctx: &LowerCtx) -> u32 {
    crate::types::size_words_ctx(ty, ctx)
}

/// Check whether a type resolves to a function pointer, following typedefs.
fn is_function_ptr_type(ty: &Type, ctx: &LowerCtx) -> bool {
    match ty {
        Type::FunctionPtr { .. } => true,
        Type::Pointer(inner) => is_function_ptr_type(inner, ctx),
        Type::Volatile(inner) | Type::Const(inner) => is_function_ptr_type(inner, ctx),
        Type::Typedef(name) => {
            for (td_name, td_ty) in &ctx.typedefs {
                if td_name == name {
                    return is_function_ptr_type(td_ty, ctx);
                }
            }
            false
        }
        _ => false,
    }
}

/// Emit a word-by-word copy from src_addr to dst_addr for `num_words` words.
fn emit_struct_copy(ctx: &mut LowerCtx, dst_addr: VReg, src_addr: VReg, num_words: u32) {
    for i in 0..num_words {
        // Offsets passed to `Load`/`Store` with a non-zero base are
        // byte offsets (the emitter routes through the byte-
        // addressable indirect-access path). Step by `4 * i` to keep
        // each word aligned on its 32-bit boundary instead of reading
        // a byte from the next field's storage.
        let byte_off = (i * 4) as i32;
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::Load(tmp, src_addr, byte_off));
        ctx.emit(IrOp::Store(tmp, dst_addr, byte_off));
    }
}

/// Lower an expression that produces a struct value, returning the address
/// of the struct on the stack rather than loading a single word.
fn lower_struct_expr_addr(ctx: &mut LowerCtx, expr: &Expr) -> Result<VReg> {
    match expr {
        Expr::Ident(_) | Expr::Member(..) | Expr::Arrow(..)
        | Expr::Deref(..) | Expr::Index(..) => {
            lower_lvalue_addr(ctx, expr)
        }
        // Call returning a struct by value. The ordinary `lower_expr`
        // path collapses the returned aggregate to a single VReg
        // (field-zero only), which discards every word past R0 and
        // hands the caller a truncated value. Lower the call through
        // `CallStruct` / `CallIndirectStruct` instead, which writes
        // all `num_words` words of the result into a caller-side
        // frame buffer, then return that buffer's address.
        Expr::Call { name, args } => {
            let ret_ty = ctx.function_return_types.get(name).cloned()
                .or_else(|| {
                    // Fall back to the callee expression's inferred
                    // type when it is a function pointer in the local
                    // or global type table.
                    ctx.local_types.get(name).or_else(|| ctx.globals.get(name))
                        .and_then(function_ptr_ret_type)
                });
            let is_struct_ret = ret_ty.as_ref()
                .is_some_and(|t| is_struct_type(t, ctx));
            if !is_struct_ret {
                let val = lower_expr(ctx, expr)?;
                let slot = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(val, 0, slot as i32));
                let addr = ctx.alloc_vreg();
                ctx.emit(IrOp::FrameAddr(addr, slot as i32));
                return Ok(addr);
            }
            let ret_ty = ret_ty.unwrap();
            let num_words = type_size_words(&ret_ty, ctx).max(1);
            let arg_vregs = lower_call_args(ctx, args)?;
            // Reserve the `num_words`-slot buffer and point the
            // destination address at the *deepest* slot: field 0 of an
            // aggregate lives at the highest address (deepest frame
            // slot) because SHARC stacks grow downward while C field
            // offsets walk upward. `emit_struct_copy` then stores word
            // w at `dst_addr + w * 4` (byte offset), which lands in
            // slot (deepest - w). Pointing `dst_addr` at `slot`
            // (shallowest) instead would put field 0 at the wrong
            // slot and the caller would read the wrong field order.
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            let storage_slot = slot + num_words - 1;
            let dst_addr = ctx.alloc_vreg();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            let callee_ty = ctx.local_types.get(name)
                .or_else(|| ctx.globals.get(name));
            let is_fnptr = callee_ty.is_some_and(|t| is_function_ptr_type(t, ctx));
            if is_fnptr {
                let addr = lower_expr(ctx, &Expr::Ident(name.clone()))?;
                ctx.emit(IrOp::CallIndirectStruct {
                    addr,
                    args: arg_vregs,
                    dst_addr,
                    num_words,
                });
            } else {
                ctx.emit(IrOp::CallStruct {
                    name: name.clone(),
                    args: arg_vregs,
                    dst_addr,
                    num_words,
                });
            }
            Ok(dst_addr)
        }
        Expr::CallIndirect { func_expr, args } => {
            let ret_ty = expr_function_ptr_ret_type(func_expr, ctx);
            let is_struct_ret = ret_ty.as_ref()
                .is_some_and(|t| is_struct_type(t, ctx));
            if !is_struct_ret {
                let val = lower_expr(ctx, expr)?;
                let slot = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(val, 0, slot as i32));
                let addr = ctx.alloc_vreg();
                ctx.emit(IrOp::FrameAddr(addr, slot as i32));
                return Ok(addr);
            }
            let ret_ty = ret_ty.unwrap();
            let num_words = type_size_words(&ret_ty, ctx).max(1);
            let fn_addr = lower_expr(ctx, func_expr)?;
            let arg_vregs = lower_call_args(ctx, args)?;
            // See direct-call branch for the rationale behind
            // pointing `dst_addr` at the deepest slot.
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            let storage_slot = slot + num_words - 1;
            let dst_addr = ctx.alloc_vreg();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            ctx.emit(IrOp::CallIndirectStruct {
                addr: fn_addr,
                args: arg_vregs,
                dst_addr,
                num_words,
            });
            Ok(dst_addr)
        }
        _ => {
            let val = lower_expr(ctx, expr)?;
            let ty = expr_type(expr, ctx);
            let num_words = ty.as_ref().map_or(1, |t| type_size_words(t, ctx));
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            ctx.emit(IrOp::Store(val, 0, slot as i32));
            let addr = ctx.alloc_vreg();
            ctx.emit(IrOp::FrameAddr(addr, slot as i32));
            Ok(addr)
        }
    }
}

/// Lower a call's argument list into vregs using the same struct-
/// unpack logic as `Expr::Call`: scalars are evaluated directly,
/// struct-by-value arguments get flattened into per-word vregs.
fn lower_call_args(ctx: &mut LowerCtx, args: &[Expr]) -> Result<Vec<VReg>> {
    let mut arg_vregs = Vec::new();
    for arg in args {
        let arg_ty = expr_type(arg, ctx);
        let arg_is_struct = arg_ty.as_ref()
            .is_some_and(|t| is_struct_type(t, ctx));
        if arg_is_struct {
            let nw = arg_ty.as_ref()
                .map_or(1, |t| type_size_words(t, ctx));
            let addr = lower_struct_expr_addr(ctx, arg)?;
            for w in 0..nw {
                let tmp = ctx.alloc_vreg();
                ctx.emit(IrOp::Load(tmp, addr, (w * 4) as i32));
                arg_vregs.push(tmp);
            }
        } else {
            arg_vregs.push(lower_expr(ctx, arg)?);
        }
    }
    Ok(arg_vregs)
}

/// Pull the return type out of a `Type::FunctionPtr`, peeling any
/// cv qualifiers / typedefs in the process. Returns `None` for any
/// non-function-pointer type.
fn function_ptr_ret_type(ty: &Type) -> Option<Type> {
    match ty {
        Type::FunctionPtr { return_type, .. } => Some((**return_type).clone()),
        Type::Volatile(inner) | Type::Const(inner) => function_ptr_ret_type(inner),
        _ => None,
    }
}

/// Resolve the return type of a function-pointer expression by looking
/// up its identifier in the local/global type tables.
fn expr_function_ptr_ret_type(expr: &Expr, ctx: &LowerCtx) -> Option<Type> {
    match expr {
        Expr::Ident(name) => ctx.local_types.get(name)
            .or_else(|| ctx.globals.get(name))
            .and_then(function_ptr_ret_type),
        _ => None,
    }
}

/// Insert an implicit float-to-int or int-to-float conversion if the source
/// vreg type does not match the destination type.
fn coerce_vreg(ctx: &mut LowerCtx, val: VReg, dst_ty: &Type) -> VReg {
    let src_is_float = ctx.is_float_vreg(val);
    let dst_is_float = dst_ty.is_float();
    if src_is_float && !dst_is_float {
        let dst = ctx.alloc_vreg();
        ctx.emit(IrOp::FloatToInt(dst, val));
        dst
    } else if !src_is_float && dst_is_float {
        let dst = ctx.alloc_vreg_float();
        ctx.emit(IrOp::IntToFloat(dst, val));
        dst
    } else {
        val
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::parse;

    #[test]
    fn lower_return_42() {
        let unit = parse::parse("int main() { return 42; }").unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should contain a LoadImm and a Ret
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 42))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_add_params() {
        let unit = parse::parse("int f(int a, int b) { return a + b; }").unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should contain at least one Add and a Ret
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_if_else() {
        let src = "int f(int x) { if (x) { return 1; } else { return 0; } }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should contain at least one Cmp, BranchCond, and Label
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Label(_))));
    }

    #[test]
    fn lower_while_loop() {
        let src = "int f(int x) { while (x) { x = x - 1; } return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should contain Branch (unconditional back-edge)
        assert!(ops.iter().any(|op| matches!(op, IrOp::Branch(_))));
    }

    #[test]
    fn lower_var_decl_with_init() {
        let src = "int f() { int x = 5; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 5))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(_, _, 0))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(_, _, 0))));
    }

    #[test]
    fn lower_float_add() {
        let src = "float f(float a, float b) { return a + b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FAdd(_, _, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_float_sub_mul() {
        let src = "float f(float a, float b) { return a * b - a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FMul(_, _, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::FSub(_, _, _))));
    }

    #[test]
    fn lower_float_literal() {
        let src = "float f() { return 2.75f; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should load the float bits as an immediate.
        let bits = 2.75f32.to_bits() as i64;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, v) if *v == bits)));
    }

    #[test]
    fn lower_sizeof() {
        let src = "int f() { return sizeof(int); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // sizeof(int) = 4
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 4))));
    }

    #[test]
    fn lower_ternary() {
        let src = "int f(int x) { return x > 0 ? x : 0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should have branches for the ternary.
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Branch(_))));
    }

    #[test]
    fn lower_compound_assign() {
        let src = "int f() { int x = 10; x += 5; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
        // Should store the result back.
        let store_count = ops.iter().filter(|op| matches!(op, IrOp::Store(_, _, _))).count();
        assert!(store_count >= 2, "expected at least 2 stores (init + compound)");
    }

    #[test]
    fn lower_pre_increment() {
        let src = "int f() { int x = 5; ++x; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
    }

    #[test]
    fn lower_post_increment() {
        let src = "int f() { int x = 5; x++; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
    }

    #[test]
    fn lower_pointer_deref() {
        let src = "int f(int *p) { return *p; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(_, _, _))));
    }

    #[test]
    fn lower_cast_int_to_float() {
        let src = "float f(int x) { return (float)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::IntToFloat(_, _))));
    }

    #[test]
    fn lower_cast_to_bool() {
        // C99 6.3.1.2: conversion to _Bool compares != 0
        let src = "int f(int x) { return (_Bool)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should have a Cmp and BranchCond(Ne) for the bool conversion
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(Cond::Ne, _))));
    }

    #[test]
    fn lower_break_in_while() {
        let src = "int f() { int i = 0; while (i < 10) { if (i == 5) break; i++; } return i; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let branch_count = ops.iter().filter(|op| matches!(op, IrOp::Branch(_))).count();
        assert!(branch_count >= 2, "expected at least 2 unconditional branches (break + loop)");
    }

    #[test]
    fn lower_continue_in_for() {
        let src = "int f() { int sum = 0; int i; for (i = 0; i < 10; i++) { if (i == 3) continue; sum += i; } return sum; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let branch_count = ops.iter().filter(|op| matches!(op, IrOp::Branch(_))).count();
        assert!(branch_count >= 2, "expected at least 2 unconditional branches (continue + loop)");
    }

    #[test]
    fn lower_switch_cases() {
        let src = "int f(int x) { switch(x) { case 0: return 10; case 1: return 20; default: return 0; } }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let cmp_count = ops.iter().filter(|op| matches!(op, IrOp::Cmp(_, _))).count();
        assert!(cmp_count >= 2, "expected at least 2 Cmps for case 0 and case 1");
    }

    #[test]
    fn lower_goto_forward() {
        let src = "int f(int x) { if (x) goto done; x = 42; done: return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Branch(_))));
        let label_count = ops.iter().filter(|op| matches!(op, IrOp::Label(_))).count();
        assert!(label_count >= 1, "expected at least 1 label for goto target");
    }

    #[test]
    fn lower_break_in_do_while() {
        let src = "int f() { int i = 0; do { i++; if (i == 3) break; } while (i < 10); return i; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let branch_count = ops.iter().filter(|op| matches!(op, IrOp::Branch(_))).count();
        assert!(branch_count >= 1, "expected at least 1 branch for break");
    }

    #[test]
    fn lower_switch_with_break() {
        let src = "int f(int x) { int y = 0; switch(x) { case 0: y = 10; break; case 1: y = 20; break; default: y = 30; break; } return y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let branch_count = ops.iter().filter(|op| matches!(op, IrOp::Branch(_))).count();
        assert!(branch_count >= 3, "expected branches for case breaks and default jump");
    }

    #[test]
    fn lower_struct_member() {
        let src = "struct point { int x; int y; };\nint f() { struct point p; p.x = 10; p.y = 20; return p.x + p.y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should contain stores for field assignments and loads for reads.
        let store_count = ops.iter().filter(|op| matches!(op, IrOp::Store(..))).count();
        assert!(store_count >= 2, "expected at least 2 stores for p.x and p.y assignments");
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
    }

    #[test]
    fn lower_assign_deref() {
        let src = "void f(int *p) { *p = 42; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 42))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_assign_index() {
        let src = "void f(int *arr) { arr[3] = 99; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 99))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_arrow_access() {
        let src = "struct s { int val; };\nint f(struct s *p) { return p->val; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_arrow_assign() {
        let src = "struct s { int a; int b; };\nvoid f(struct s *p) { p->b = 5; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // p->b has byte offset 4 (second `int` field), so the lowered
        // IR should contain a LoadImm(_, 4) feeding the address Add.
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 4))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_compound_assign_deref() {
        let src = "void f(int *p) { *p += 10; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_inc_dec_deref() {
        let src = "void f(int *p) { ++(*p); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_init_list() {
        let src = "int f() { int arr[3] = {10, 20, 30}; return arr[1]; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should have three stores for the init list elements.
        let store_count = ops.iter().filter(|op| matches!(op, IrOp::Store(..))).count();
        assert!(store_count >= 3, "expected at least 3 stores for init list, got {store_count}");
    }

    #[test]
    fn lower_static_local() {
        let src = "int counter() { static int n = 0; n++; return n; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap();
        // Static local should produce a static local entry.
        assert_eq!(result.static_locals.len(), 1);
        assert_eq!(result.static_locals[0].symbol, "_counter_n");
        // Access to a static local uses ReadGlobal/StoreGlobal.
        assert!(result.ops.iter().any(|op| matches!(op, IrOp::ReadGlobal(_, ref s) if s == "_counter_n")));
        assert!(result.ops.iter().any(|op| matches!(op, IrOp::StoreGlobal(_, ref s) if s == "_counter_n")));
    }

    #[test]
    fn lower_implicit_float_to_int() {
        let src = "int f() { float x = 3.14f; int y = x; return y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FloatToInt(_, _))));
    }

    #[test]
    fn lower_implicit_int_to_float() {
        let src = "float f() { int x = 5; float y = x; return y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::IntToFloat(_, _))));
    }

    #[test]
    fn lower_implicit_float_to_int_assign() {
        let src = "void f() { int y; float x = 2.5f; y = x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FloatToInt(_, _))));
    }

    #[test]
    fn lower_indirect_call() {
        let src = "typedef int (*fn_t)(int);\nint f(fn_t fp, int x) { return fp(x); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::CallIndirect(_, _, _))));
    }

    #[test]
    fn lower_struct_copy_assign() {
        let src = "struct pt { int x; int y; };\nvoid f() { struct pt a; struct pt b; a.x = 1; a.y = 2; b = a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let load_count = ops.iter().filter(|op| matches!(op, IrOp::Load(..))).count();
        let store_count = ops.iter().filter(|op| matches!(op, IrOp::Store(..))).count();
        assert!(load_count >= 2, "expected at least 2 loads for struct copy, got {load_count}");
        assert!(store_count >= 4, "expected at least 4 stores, got {store_count}");
    }

    #[test]
    fn lower_struct_pass_by_value() {
        let src = "struct pt { int x; int y; };\nvoid g(struct pt p);\nvoid f() { struct pt a; a.x = 1; a.y = 2; g(a); }";
        let unit = parse::parse(src).unwrap();
        let globals: HashMap<String, Type> = vec![
            ("g".to_string(), Type::Void),
        ].into_iter().collect();
        let ops = lower_function(&unit.functions[0], &globals, &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Call(_, ref n, ref args) if n == "g" && args.len() == 2)));
    }

    #[test]
    fn lower_array_decay_to_pointer() {
        let src = "void g(int *p);\nvoid f() { int arr[5]; g(arr); }";
        let unit = parse::parse(src).unwrap();
        let globals: HashMap<String, Type> = vec![
            ("g".to_string(), Type::Void),
        ].into_iter().collect();
        let ops = lower_function(&unit.functions[0], &globals, &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Call(_, ref n, _) if n == "g")));
    }

    #[test]
    fn lower_sizeof_array() {
        let src = "int f() { int arr[10]; return sizeof(arr); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 40))));
    }

    #[test]
    fn lower_long_long_var_decl_and_add() {
        let src = "long long f() { long long a = 1; long long b = 2; return a + b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should contain 64-bit store, load, and add operations.
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store64(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load64(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add64(..))));
    }

    #[test]
    fn lower_long_long_sub() {
        let src = "long long f(long long a, long long b) { return a - b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Sub64(..))));
    }

    #[test]
    fn lower_long_long_bitwise() {
        let src = "long long f(long long a, long long b) { return a & b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::BitAnd64(..))));
    }

    #[test]
    fn lower_long_long_negate() {
        let src = "long long f(long long a) { return -a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Neg64(..))));
    }

    #[test]
    fn lower_long_long_compare() {
        let src = "int f(long long a, long long b) { return a < b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))));
    }

    #[test]
    fn lower_unsigned_long_long_compare() {
        let src = "int f(unsigned long long a, unsigned long long b) { return a > b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::UCmp64(..))));
    }

    #[test]
    fn lower_cast_int_to_long_long() {
        let src = "long long f(int x) { return (long long)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::SExtToLongLong(..))));
    }

    #[test]
    fn lower_cast_long_long_to_int() {
        let src = "int f(long long x) { return (int)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LongLongToInt(..))));
    }

    #[test]
    fn lower_long_long_assign() {
        let src = "void f() { long long x; x = 42; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // The assignment to a long long should widen the 32-bit literal and use Store64.
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store64(..))));
    }

    #[test]
    fn lower_long_long_mul() {
        let src = "long long f(long long a, long long b) { return a * b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Mul64(..))));
    }

    #[test]
    fn lower_sizeof_long_long() {
        let src = "int f() { return sizeof(long long); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // sizeof(long long) = 8
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 8))));
    }

    #[test]
    fn lower_vla_emits_stack_alloc() {
        let src = "int f(int n) { int a[n]; return 0; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0], &HashMap::new(),
            &unit.struct_defs, &unit.enum_constants, &unit.typedefs,
        ).unwrap();
        // VLA lowering should produce a StackAlloc instruction.
        assert!(
            result.ops.iter().any(|op| matches!(op, IrOp::StackAlloc(_, _))),
            "expected StackAlloc in IR for VLA, got: {:#?}", result.ops
        );
    }

    #[test]
    fn lower_vla_block_scope_save_restore() {
        let src = r#"
            int f(int n) {
                { int a[n]; }
                return 0;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0], &HashMap::new(),
            &unit.struct_defs, &unit.enum_constants, &unit.typedefs,
        ).unwrap();
        // Block containing VLA should save and restore the stack pointer.
        assert!(
            result.ops.iter().any(|op| matches!(op, IrOp::StackSave(_))),
            "expected StackSave for VLA block scope"
        );
        assert!(
            result.ops.iter().any(|op| matches!(op, IrOp::StackRestore(_))),
            "expected StackRestore for VLA block scope"
        );
    }

    #[test]
    fn lower_goto_past_vla_rejected() {
        let src = r#"
            int f(int n) {
                goto skip;
                int a[n];
                skip: return 0;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0], &HashMap::new(),
            &unit.struct_defs, &unit.enum_constants, &unit.typedefs,
        );
        assert!(result.is_err(), "goto past VLA should be rejected");
        let msg = format!("{}", result.as_ref().err().unwrap());
        assert!(
            msg.contains("variable-length array"),
            "error should mention VLA, got: {msg}"
        );
    }

    #[test]
    fn lower_goto_before_vla_ok() {
        // Jumping backward (before the VLA) should be fine.
        let src = r#"
            int f(int n) {
                start: ;
                int a[n];
                goto start;
                return 0;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0], &HashMap::new(),
            &unit.struct_defs, &unit.enum_constants, &unit.typedefs,
        );
        assert!(result.is_ok(), "goto before VLA should be allowed");
    }

    #[test]
    fn lower_variadic_spills_all_arg_regs() {
        // A variadic function should spill all 4 argument registers to
        // contiguous stack slots, even if there's only 1 named param.
        let src = "int sum(int count, ...) { return count; }";
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        assert!(func.is_variadic);
        let ops = lower_function(func, &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should have 3 Copy + Store pairs for spilling the 3 arg regs
        // (R4, R8, R12). The 4th+ args are already on the stack.
        let copy_count = ops.iter().filter(|op| matches!(op, IrOp::Copy(..))).count();
        assert!(copy_count >= 3, "expected at least 3 Copy ops for arg reg spill, got {copy_count}");
        let store_count = ops.iter().filter(|op| matches!(op, IrOp::Store(..))).count();
        assert!(store_count >= 3, "expected at least 3 Store ops for arg reg spill, got {store_count}");
    }

    #[test]
    fn lower_variadic_named_param_on_stack() {
        // Named parameter of a variadic function is accessible as a
        // stack-allocated local (required for va_start to take &last).
        let src = "int sum(int count, ...) { return count; }";
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        let ops = lower_function(func, &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // 'count' is on the stack, so reading it should use Load (not just Copy).
        let load_count = ops.iter().filter(|op| matches!(op, IrOp::Load(..))).count();
        assert!(load_count >= 1, "expected at least 1 Load for reading 'count' from stack, got {load_count}");
    }

    #[test]
    fn lower_address_of_local_uses_frame_addr() {
        // Taking the address of a local variable should use FrameAddr
        // to produce an absolute address.
        let src = "int f() { int x = 5; int *p = &x; return *p; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FrameAddr(..))),
            "expected FrameAddr for &x, got: {ops:?}");
    }

    #[test]
    fn lower_variadic_addr_of_named_param() {
        // Taking address of a named parameter in a variadic function
        // should produce a FrameAddr (the param is forced onto the stack).
        let src = "int f(int count, ...) { int *p = &count; return *p; }";
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        let ops = lower_function(func, &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FrameAddr(..))),
            "expected FrameAddr from &count in variadic function, got: {ops:?}");
    }

    #[test]
    fn lower_complex_add() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a + b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Complex addition emits two FAdd ops (real + real, imag + imag).
        let fadd_count = ops.iter().filter(|op| matches!(op, IrOp::FAdd(..))).count();
        assert!(fadd_count >= 2, "expected at least 2 FAdd for complex add, got {fadd_count}");
    }

    #[test]
    fn lower_complex_sub() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a - b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        let fsub_count = ops.iter().filter(|op| matches!(op, IrOp::FSub(..))).count();
        assert!(fsub_count >= 2, "expected at least 2 FSub for complex sub, got {fsub_count}");
    }

    #[test]
    fn lower_complex_mul() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a * b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Complex multiply: ac, bd, ad, bc = 4 FMul, then FSub + FAdd.
        let fmul_count = ops.iter().filter(|op| matches!(op, IrOp::FMul(..))).count();
        assert!(fmul_count >= 4, "expected at least 4 FMul for complex mul, got {fmul_count}");
    }

    #[test]
    fn lower_complex_div() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a / b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Complex division uses FMul, FAdd, FSub, FDiv.
        let fdiv_count = ops.iter().filter(|op| matches!(op, IrOp::FDiv(..))).count();
        assert!(fdiv_count >= 2, "expected at least 2 FDiv for complex div, got {fdiv_count}");
    }

    #[test]
    fn lower_real_plus_complex() {
        let src = "float _Complex f(float r) { float _Complex c; return r + c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should produce FAdd for the real parts.
        assert!(ops.iter().any(|op| matches!(op, IrOp::FAdd(..))));
    }

    #[test]
    fn lower_real_part_operator() {
        let src = "float f() { float _Complex c; return __real__ c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should load from the complex variable's real part (offset 0).
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_imag_part_operator() {
        let src = "float f() { float _Complex c; return __imag__ c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs).unwrap().ops;
        // Should load from the complex variable's imaginary part (offset 1).
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
    }

    #[test]
    fn lower_implicit_function_rejected() {
        let src = "int f() { return unknown_func(42); }";
        let unit = parse::parse(src).unwrap();
        let mut known = HashSet::new();
        known.insert("f".to_string());
        let result = lower_function_with_known(
            &unit.functions[0], &HashMap::new(), &unit.struct_defs,
            &unit.enum_constants, &unit.typedefs, &known, &HashMap::new(),
        );
        assert!(result.is_err(), "expected error for implicit function declaration");
        let err = result.unwrap_err();
        let msg = format!("{err}");
        assert!(msg.contains("implicit declaration"), "expected implicit declaration error, got: {msg}");
    }

    #[test]
    fn lower_declared_function_accepted() {
        let src = "extern int bar(int);\nint f() { return bar(42); }";
        let unit = parse::parse(src).unwrap();
        let mut known = HashSet::new();
        known.insert("f".to_string());
        known.insert("bar".to_string());
        let result = lower_function_with_known(
            &unit.functions[0], &HashMap::new(), &unit.struct_defs,
            &unit.enum_constants, &unit.typedefs, &known, &HashMap::new(),
        );
        assert!(result.is_ok(), "expected declared function to be accepted");
    }

    #[test]
    fn lower_implicit_return_warning() {
        // This should emit a warning to stderr but not fail.
        let src = "int f() { int x = 42; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(&unit.functions[0], &HashMap::new(), &unit.struct_defs, &unit.enum_constants, &unit.typedefs);
        // Should succeed (warning, not error).
        assert!(result.is_ok());
        // The last op should be Ret(None) (implicit return).
        let ops = result.unwrap().ops;
        assert!(matches!(ops.last(), Some(IrOp::Ret(None))));
    }
}
