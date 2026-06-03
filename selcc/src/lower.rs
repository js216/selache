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
    /// Known integer values for unescaped scalar locals.
    const_locals: HashMap<String, i64>,
    /// Known IEEE-754 single-precision bit patterns for unescaped float locals.
    const_float_locals: HashMap<String, u32>,
    /// Known values for direct bitfield members of unescaped local aggregates.
    const_bitfield_locals: HashMap<(String, String), i64>,
    /// Known elements of local function-pointer arrays.
    const_fn_ptr_arrays: HashMap<String, Vec<Option<String>>>,
    /// Local pointer aliases to a known element in one of those arrays.
    const_fn_ptr_aliases: HashMap<String, (String, usize)>,
    /// Local pointer variables initialized to a constant scalar compound literal.
    const_scalar_ptr_values: HashMap<String, (i64, Type)>,
    /// Local pointer variables initialized to side-effect-free array compound literals.
    const_array_literal_ptrs: HashMap<String, (Vec<Expr>, Type, HashSet<String>)>,
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
    /// Per-tag `#pragma pack(N)` member-alignment caps from the
    /// translation unit. Storage sizing still uses the existing natural
    /// window policy, but member offsets must honor the cap.
    struct_packs: Vec<(String, u8)>,
    /// Enum constants: name -> value.
    enum_constants: HashMap<String, i64>,
    /// Typedef mappings: name -> resolved type.
    typedefs: Vec<(String, Type)>,
    /// Name of the current function (for generating static local symbols).
    func_name: String,
    /// Static local variables: (mangled_name, type, init_expr).
    static_locals: Vec<StaticLocal>,
    /// Synthetic static templates used to initialize large automatic
    /// aggregates with constant brace lists.
    const_template_counter: u32,
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
    /// Parameter types of every function defined or declared in this
    /// translation unit, keyed by function name. Used at call sites to
    /// implement C99 6.5.2.2p7's "implicitly converted, as if by
    /// assignment, to the types of the corresponding parameters" rule:
    /// in particular, a 32-bit-or-narrower argument passed to a
    /// `long long` parameter must be widened to a 64-bit pair before
    /// it reaches the ABI register slots, otherwise the callee reads
    /// the high word from a stale register and the value silently
    /// loses sign / zero extension. Populated by `emit_module`
    /// alongside `function_return_types`.
    function_param_types: HashMap<String, Vec<Type>>,
    /// Frame slot (word index) holding the hidden struct-return pointer
    /// that the caller passed in R1 at entry. `Some` exactly when the
    /// current function returns a struct larger than
    /// `target::STRUCT_RET_MAX_REGS` words; `RetStruct` lowers to a
    /// byte-by-byte copy into `*(DM(-struct_ret_slot, I6))` followed by
    /// `R0 = <that pointer>`.
    struct_ret_slot: Option<u32>,
    /// Number of caller-stack slots occupied by *named* arguments in the
    /// current variadic function. Set by the variadic prologue; consumed
    /// by `__builtin_va_start_sel`, which yields the address of the first
    /// variadic argument (`I6 + va_named_slot_count + 1`). `None` outside
    /// variadic functions.
    va_named_slot_count: Option<u32>,
}

/// Snapshot of the variable-name binding state at block-scope entry.
/// Used by [`LowerCtx::snapshot_scope`] / [`LowerCtx::restore_scope`]
/// to implement C99 6.2.1 block scoping.
struct ScopeSnapshot {
    locals: HashMap<String, LocalStorage>,
    local_types: HashMap<String, Type>,
    const_locals: HashMap<String, i64>,
    const_float_locals: HashMap<String, u32>,
    const_bitfield_locals: HashMap<(String, String), i64>,
    const_fn_ptr_arrays: HashMap<String, Vec<Option<String>>>,
    const_fn_ptr_aliases: HashMap<String, (String, usize)>,
    const_scalar_ptr_values: HashMap<String, (i64, Type)>,
    const_array_literal_ptrs: HashMap<String, (Vec<Expr>, Type, HashSet<String>)>,
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
            const_locals: HashMap::new(),
            const_float_locals: HashMap::new(),
            const_bitfield_locals: HashMap::new(),
            const_fn_ptr_arrays: HashMap::new(),
            const_fn_ptr_aliases: HashMap::new(),
            const_scalar_ptr_values: HashMap::new(),
            const_array_literal_ptrs: HashMap::new(),
            vreg_is_float: HashMap::new(),
            vreg_is_64bit: HashSet::new(),
            frame_size: 0,
            globals: HashMap::new(),
            strings: Vec::new(),
            wide_strings: Vec::new(),
            loop_stack: Vec::new(),
            goto_labels: HashMap::new(),
            struct_defs: Vec::new(),
            struct_packs: Vec::new(),
            enum_constants: HashMap::new(),
            typedefs: Vec::new(),
            func_name: String::new(),
            static_locals: Vec::new(),
            const_template_counter: 0,
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
            function_param_types: HashMap::new(),
            struct_ret_slot: None,
            va_named_slot_count: None,
        }
    }

    fn alloc_vreg(&mut self) -> VReg {
        let v = self.next_vreg;
        self.next_vreg += 1;
        v
    }

    /// Allocate a vreg that is guaranteed non-zero. isel's
    /// `IrOp::Load(dst, base, off)` and `IrOp::Store(val, base, off)`
    /// treat `base == 0` as the sentinel for a frame-relative access,
    /// so a vreg that the frontend intends to use as a pointer base
    /// must never be allocated as VReg 0. The historical convention of
    /// pinning VReg 0 to the first ARG_REG makes the issue invisible
    /// for any function with at least one parameter, but a no-arg
    /// function (`int test_main(void) { ... }`) leaves VReg 0 free for
    /// the first body instruction. Skipping it here costs at most one
    /// VReg id (regalloc never maps unreferenced vregs to physical
    /// registers).
    fn alloc_vreg_ptr(&mut self) -> VReg {
        if self.next_vreg == 0 {
            self.next_vreg = 1;
        }
        let v = self.next_vreg;
        self.next_vreg += 1;
        v
    }

    fn ensure_ptr_vreg(&mut self, v: VReg) -> VReg {
        if v != 0 {
            return v;
        }
        let dst = self.alloc_vreg_ptr();
        self.emit(IrOp::Copy(dst, v));
        dst
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
            const_locals: self.const_locals.clone(),
            const_float_locals: self.const_float_locals.clone(),
            const_bitfield_locals: self.const_bitfield_locals.clone(),
            const_fn_ptr_arrays: self.const_fn_ptr_arrays.clone(),
            const_fn_ptr_aliases: self.const_fn_ptr_aliases.clone(),
            const_scalar_ptr_values: self.const_scalar_ptr_values.clone(),
            const_array_literal_ptrs: self.const_array_literal_ptrs.clone(),
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
        self.const_locals = snap.const_locals;
        self.const_float_locals = snap.const_float_locals;
        self.const_bitfield_locals = snap.const_bitfield_locals;
        self.const_fn_ptr_arrays = snap.const_fn_ptr_arrays;
        self.const_fn_ptr_aliases = snap.const_fn_ptr_aliases;
        self.const_scalar_ptr_values = snap.const_scalar_ptr_values;
        self.const_array_literal_ptrs = snap.const_array_literal_ptrs;
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

    fn next_const_template_symbol(&mut self) -> String {
        let idx = self.const_template_counter;
        self.const_template_counter += 1;
        format!("__selcc_init_{}_{}", self.func_name, idx)
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

    fn resolve_tag_pack(&self, name: &str) -> u8 {
        self.struct_packs
            .iter()
            .rev()
            .find_map(|(tag, pack)| (tag == name).then_some(*pack))
            .unwrap_or(0)
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

fn contains_call(stmts: &[Stmt]) -> bool {
    stmts.iter().any(stmt_contains_call)
}

fn stmt_contains_call(stmt: &Stmt) -> bool {
    match stmt {
        Stmt::Expr(expr) | Stmt::Return(Some(expr)) => expr_contains_call(expr),
        Stmt::Return(None) => false,
        Stmt::VarDecl { init, vla_dim, .. } => {
            init.as_ref().is_some_and(expr_contains_call)
                || vla_dim.as_ref().is_some_and(expr_contains_call)
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_contains_call(cond)
                || contains_call(then_body)
                || else_body.as_ref().is_some_and(|body| contains_call(body))
        }
        Stmt::While { cond, body } => expr_contains_call(cond) || contains_call(body),
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref().is_some_and(|stmt| stmt_contains_call(stmt))
                || cond.as_ref().is_some_and(expr_contains_call)
                || step.as_ref().is_some_and(expr_contains_call)
                || contains_call(body)
        }
        Stmt::DoWhile { body, cond } => contains_call(body) || expr_contains_call(cond),
        Stmt::Block(stmts) | Stmt::DeclGroup(stmts) => contains_call(stmts),
        Stmt::Switch { expr, body } => expr_contains_call(expr) || contains_call(body),
        Stmt::CaseLabel(expr) => expr_contains_call(expr),
        Stmt::Label(_, inner) => stmt_contains_call(inner),
        Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => false,
    }
}

fn expr_contains_call(expr: &Expr) -> bool {
    match expr {
        Expr::Call { .. } | Expr::CallIndirect { .. } => true,
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => expr_contains_call(operand),
        Expr::Binary { op, lhs, rhs } => {
            matches!(op, BinaryOp::Div | BinaryOp::Mod)
                || expr_contains_call(lhs)
                || expr_contains_call(rhs)
        }
        Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => expr_contains_call(lhs) || expr_contains_call(rhs),
        Expr::CompoundAssign {
            op,
            target: lhs,
            value: rhs,
        } => {
            matches!(op, BinaryOp::Div | BinaryOp::Mod)
                || expr_contains_call(lhs)
                || expr_contains_call(rhs)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_call(cond)
                || expr_contains_call(then_expr)
                || expr_contains_call(else_expr)
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => expr_contains_call(base),
        Expr::InitList(exprs) => exprs.iter().any(expr_contains_call),
        Expr::DesignatedInit { value, .. } => expr_contains_call(value),
        Expr::ArrayDesignator { index, value } => {
            expr_contains_call(index) || expr_contains_call(value)
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_)
        | Expr::Sizeof(_) => false,
    }
}

fn collect_assigned(stmt: &Stmt, set: &mut HashSet<String>) {
    match stmt {
        Stmt::Expr(expr) | Stmt::Return(Some(expr)) => collect_assigned_expr(expr, set),
        Stmt::Return(None) => {}
        Stmt::VarDecl {
            init: Some(e),
            vla_dim: Some(d),
            ..
        } => {
            collect_assigned_expr(e, set);
            collect_assigned_expr(d, set);
        }
        Stmt::VarDecl { init: Some(e), .. } => collect_assigned_expr(e, set),
        Stmt::VarDecl {
            vla_dim: Some(d), ..
        } => collect_assigned_expr(d, set),
        Stmt::VarDecl { init: None, .. } => {}
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
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
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
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
        Stmt::CaseLabel(_)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
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
        Expr::PreInc(inner) | Expr::PreDec(inner) | Expr::PostInc(inner) | Expr::PostDec(inner) => {
            // Increment / decrement is a *modifying* operation on the
            // operand. When the operand is a plain identifier, record
            // the name as reassigned so the lowering pass binds the
            // variable to a stack slot rather than `LocalStorage::Reg`.
            // A register-bound variable in a loop body whose only
            // mutation is `x++` (e.g. `va_arg(ap, int)` expanding to
            // `*(int*)((ap)++)`) reads its value through the original
            // pre-inc vreg every iteration: the rebind that
            // `lower_inc_dec` performs at lowering time updates the
            // name → vreg map only for the rest of the lowering pass,
            // but the loop's branch-back re-executes IR that already
            // captured the *old* vreg. The result is that the
            // increment is silently dropped across iterations and
            // every va_arg returns the first variadic argument.
            if let Expr::Ident(name) = inner.as_ref() {
                set.insert(name.clone());
            }
            collect_assigned_expr(inner, set);
        }
        Expr::Deref(inner) | Expr::AddrOf(inner) | Expr::Cast(_, inner) => {
            collect_assigned_expr(inner, set)
        }
        Expr::Index(base, idx) => {
            collect_assigned_expr(base, set);
            collect_assigned_expr(idx, set);
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => collect_assigned_expr(base, set),
        Expr::Sizeof(_) => {}
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_assigned_expr(cond, set);
            collect_assigned_expr(then_expr, set);
            collect_assigned_expr(else_expr, set);
        }
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_) => {}
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

fn assigned_in_stmts(stmts: &[Stmt]) -> HashSet<String> {
    let mut set = HashSet::new();
    for stmt in stmts {
        collect_assigned(stmt, &mut set);
    }
    set
}

fn add_address_taken_roots_in_stmts(stmts: &[Stmt], set: &mut HashSet<String>) {
    for stmt in stmts {
        add_address_taken_roots_in_stmt(stmt, set);
    }
}

fn add_address_taken_roots_in_stmt(stmt: &Stmt, set: &mut HashSet<String>) {
    match stmt {
        Stmt::Return(Some(expr)) | Stmt::Expr(expr) | Stmt::CaseLabel(expr) => {
            add_address_taken_roots_expr(expr, set);
        }
        Stmt::VarDecl { init, vla_dim, .. } => {
            if let Some(expr) = init {
                add_address_taken_roots_expr(expr, set);
            }
            if let Some(expr) = vla_dim {
                add_address_taken_roots_expr(expr, set);
            }
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            add_address_taken_roots_expr(cond, set);
            add_address_taken_roots_in_stmts(then_body, set);
            if let Some(body) = else_body {
                add_address_taken_roots_in_stmts(body, set);
            }
        }
        Stmt::While { cond, body } | Stmt::DoWhile { cond, body } => {
            add_address_taken_roots_expr(cond, set);
            add_address_taken_roots_in_stmts(body, set);
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            if let Some(stmt) = init {
                add_address_taken_roots_in_stmt(stmt, set);
            }
            if let Some(expr) = cond {
                add_address_taken_roots_expr(expr, set);
            }
            if let Some(expr) = step {
                add_address_taken_roots_expr(expr, set);
            }
            add_address_taken_roots_in_stmts(body, set);
        }
        Stmt::Block(body) | Stmt::DeclGroup(body) => add_address_taken_roots_in_stmts(body, set),
        Stmt::Switch { expr, body } => {
            add_address_taken_roots_expr(expr, set);
            add_address_taken_roots_in_stmts(body, set);
        }
        Stmt::Label(_, inner) => add_address_taken_roots_in_stmt(inner, set),
        Stmt::Return(None)
        | Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::Asm(_)
        | Stmt::EnumDecl(_) => {}
    }
}

fn add_address_taken_roots_expr(expr: &Expr, set: &mut HashSet<String>) {
    match expr {
        Expr::AddrOf(inner) => {
            if let Some(name) = lvalue_root_ident(inner) {
                set.insert(name.to_string());
            }
            add_address_taken_roots_expr(inner, set);
        }
        Expr::Unary { operand, .. }
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::Member(operand, _)
        | Expr::Arrow(operand, _) => add_address_taken_roots_expr(operand, set),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign {
            target: lhs,
            value: rhs,
        }
        | Expr::CompoundAssign {
            target: lhs,
            value: rhs,
            ..
        }
        | Expr::Index(lhs, rhs)
        | Expr::Comma(lhs, rhs) => {
            add_address_taken_roots_expr(lhs, set);
            add_address_taken_roots_expr(rhs, set);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                add_address_taken_roots_expr(arg, set);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            add_address_taken_roots_expr(func_expr, set);
            for arg in args {
                add_address_taken_roots_expr(arg, set);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            add_address_taken_roots_expr(cond, set);
            add_address_taken_roots_expr(then_expr, set);
            add_address_taken_roots_expr(else_expr, set);
        }
        Expr::Sizeof(arg) => {
            if let SizeofArg::Expr(inner) = arg.as_ref() {
                add_address_taken_roots_expr(inner, set);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                add_address_taken_roots_expr(item, set);
            }
        }
        Expr::DesignatedInit { value, .. } => add_address_taken_roots_expr(value, set),
        Expr::ArrayDesignator { index, value } => {
            add_address_taken_roots_expr(index, set);
            add_address_taken_roots_expr(value, set);
        }
        Expr::IntLit(..)
        | Expr::CharLit(_)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::Ident(_) => {}
    }
}

fn lvalue_root_ident(expr: &Expr) -> Option<&str> {
    match expr {
        Expr::Ident(name) => Some(name),
        Expr::Member(base, _) | Expr::Arrow(base, _) | Expr::Index(base, _) => {
            lvalue_root_ident(base)
        }
        Expr::Deref(inner) | Expr::Cast(_, inner) => lvalue_root_ident(inner),
        _ => None,
    }
}

fn invalidate_const_locals(ctx: &mut LowerCtx, names: &HashSet<String>) {
    for name in names {
        ctx.const_locals.remove(name);
        ctx.const_float_locals.remove(name);
        ctx.const_bitfield_locals
            .retain(|(base, _), _| base != name);
        ctx.const_fn_ptr_arrays.remove(name);
        ctx.const_fn_ptr_aliases.remove(name);
        ctx.const_fn_ptr_aliases
            .retain(|_, (array_name, _)| array_name != name);
        ctx.const_scalar_ptr_values.remove(name);
        ctx.const_array_literal_ptrs.remove(name);
        ctx.const_array_literal_ptrs
            .retain(|_, (_, _, deps)| !deps.contains(name));
    }
}

fn clear_const_local(ctx: &mut LowerCtx, name: &str) {
    ctx.const_locals.remove(name);
    ctx.const_float_locals.remove(name);
    ctx.const_bitfield_locals
        .retain(|(base, _), _| base != name);
    ctx.const_fn_ptr_arrays.remove(name);
    ctx.const_fn_ptr_aliases.remove(name);
    ctx.const_fn_ptr_aliases
        .retain(|_, (array_name, _)| array_name != name);
    ctx.const_scalar_ptr_values.remove(name);
    ctx.const_array_literal_ptrs.remove(name);
    ctx.const_array_literal_ptrs
        .retain(|_, (_, _, deps)| !deps.contains(name));
}

fn clear_all_const_locals(ctx: &mut LowerCtx) {
    ctx.const_locals.clear();
    ctx.const_float_locals.clear();
    ctx.const_bitfield_locals.clear();
    ctx.const_fn_ptr_arrays.clear();
    ctx.const_fn_ptr_aliases.clear();
    ctx.const_scalar_ptr_values.clear();
    ctx.const_array_literal_ptrs.clear();
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
    let known = HashSet::new();
    let returns = HashMap::new();
    let params = HashMap::new();
    let unit = LowerUnitCtx {
        known_functions: &known,
        function_return_types: &returns,
        function_param_types: &params,
        struct_packs: &[],
    };
    lower_function_with_known(
        func,
        global_types,
        struct_defs,
        enum_constants,
        typedefs,
        &unit,
    )
}

/// Translation-unit-level facts threaded into per-function lowering.
/// Bundling the maps into a single struct keeps the public lowering
/// entry-points under clippy's `too_many_arguments` threshold while
/// still letting the call-lowering paths read every datum it needs to
/// implement the C99 prototype-driven argument-conversion rules.
pub struct LowerUnitCtx<'a> {
    pub known_functions: &'a HashSet<String>,
    pub function_return_types: &'a HashMap<String, Type>,
    pub function_param_types: &'a HashMap<String, Vec<Type>>,
    pub struct_packs: &'a [(String, u8)],
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
    unit: &LowerUnitCtx<'_>,
) -> Result<LowerResult> {
    let mut ctx = LowerCtx::new();
    ctx.globals = global_types.clone();
    ctx.struct_defs = struct_defs.to_vec();
    ctx.struct_packs = unit.struct_packs.to_vec();
    ctx.typedefs = typedefs.to_vec();
    ctx.func_name = func.name.clone();
    ctx.return_type = func.return_type.clone();
    ctx.known_functions = unit.known_functions.clone();
    ctx.function_return_types = unit.function_return_types.clone();
    ctx.function_param_types = unit.function_param_types.clone();
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
    let has_call = contains_call(&func.body);

    // Variadic function prologue. The SHARC+ ABI for variadic
    // callees passes the first `target::variadic_reg_named(named)`
    // named arguments in `ARG_REGS[0..reg_named]` (R4, R8, ...) and
    // *always* pushes the last named arg (and every variadic arg)
    // onto the caller's stack so `va_start` has a fixed anchor for
    // the va_list. The reference SHARC+ toolchain emits exactly this
    // layout; selcc must match it so that selcc-built callers can
    // invoke reference-built libsel variadic routines (snprintf, printf,
    // ...) and selcc-built variadic callees can be invoked from
    // reference-built callers without an ABI mismatch.
    //
    // Inside the callee, named arg `i` for `i < reg_named` arrives
    // in `ARG_REGS[i]`; named arg `i` for `i >= reg_named` lives at
    // `DM(I6 + (i - reg_named) + 1)`, and the first variadic arg
    // sits one slot past the last stack-passed named arg at
    // `DM(I6 + (named - reg_named) + 1)`.
    //
    // Bind every named parameter to a local frame slot. The
    // local-copy step is mandatory for stack-passed named args: the
    // caller's pushed-arg region lies above I6 (positive offsets)
    // and is unreachable through the negative-offset `DM(-N, I6)`
    // form that the rest of the body uses for variable access. For
    // register-passed named args the same stack-slot binding keeps
    // the prologue uniform and lets the parameter survive across
    // calls (the incoming caller-saved register would otherwise be
    // clobbered). Record the count of named args that were pushed
    // onto the stack so `__builtin_va_start_sel` can compute the
    // address of the first variadic arg.
    if func.is_variadic {
        // Pre-allocate vregs 0..reg_named so the prologue's
        // `Copy(param_vreg, i as VReg)` reads from the same vreg
        // ids that emit_asm pins to `ARG_REGS[0..reg_named]`. The
        // pinning is driven by `arg_slots` reported below.
        let reg_named = target::variadic_reg_named(func.params.len());
        for slot in 0..reg_named {
            let v = ctx.alloc_vreg();
            debug_assert_eq!(v as usize, slot);
        }
        for (i, (name, ty)) in func.params.iter().enumerate() {
            ctx.local_types.insert(name.clone(), ty.clone());
            let is_float_param = ty.is_float();
            let slot_offset = ctx.alloc_stack_slot();
            let param_vreg = ctx.alloc_vreg();
            if is_float_param {
                ctx.vreg_is_float.insert(param_vreg, true);
            }
            if i < reg_named {
                let arg_vreg = i as VReg;
                if is_float_param {
                    ctx.vreg_is_float.insert(arg_vreg, true);
                }
                ctx.emit(IrOp::Copy(param_vreg, arg_vreg));
            } else {
                let stack_off = (i - reg_named) as u32;
                ctx.emit(IrOp::LoadStackArg(param_vreg, stack_off));
            }
            ctx.emit(IrOp::Store(param_vreg, 0, slot_offset as i32));
            ctx.locals
                .insert(name.clone(), LocalStorage::Stack(slot_offset));
        }
        let stack_named = func.params.len().saturating_sub(reg_named) as u32;
        ctx.va_named_slot_count = Some(stack_named);
    }

    // Bind parameters to virtual registers pre-loaded from the ABI
    // argument registers. Most scalars consume one ABI slot; 64-bit
    // integer scalars and struct/union parameters consume
    // `type_size_words(ty)` consecutive slots (one word per slot). A
    // `slot_idx` counter walks across the full
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
        let is_scalar =
            ty.is_scalar() || matches!(ty, Type::Void | Type::Typedef(_) | Type::Enum { .. });
        if !is_scalar && is_struct_type(ty, &ctx) {
            total_slots += type_size_words(ty, &ctx);
        } else if ty_is_long_long(ty, &ctx) {
            total_slots += 2;
        } else if ty.is_complex() {
            // the reference C ABI passes `_Complex` values entirely on the caller's
            // stack — no ABI register slots are consumed. The callee
            // recovers them via `LoadStackArg(0)` / `LoadStackArg(1)`,
            // which read the stack-arg region directly, so they do
            // not contribute to `total_slots` (which counts the
            // register-eligible argument slots used by the
            // `ARG_REGS` pinning logic in `emit_asm`).
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
        let reg_slots = (total_slots as usize).min(target::ARG_REGS.len());
        for slot in 0..reg_slots {
            let v = ctx.alloc_vreg();
            debug_assert_eq!(v as usize, slot);
        }

        let mut slot_idx: usize = 0;
        for (name, ty) in func.params.iter() {
            // Classify param: integer/pointer types use R-registers, float uses
            // F-registers, structs/unions are passed as consecutive words.
            let is_float_param = ty.is_float();
            let is_scalar =
                ty.is_scalar() || matches!(ty, Type::Void | Type::Typedef(_) | Type::Enum { .. });
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
                ctx.locals
                    .insert(name.clone(), LocalStorage::Stack(base_slot));
                slot_idx += num_words as usize;
                continue;
            }

            // Complex parameter (`_Complex float` / `_Complex double`):
            // the reference C ABI passes complex values entirely on the
            // caller's stack (no `R4`/`R8`/`R12` involvement). The caller
            // pushes imag first, then real, so after `cjump`'s I6/I7 swap
            // the callee sees real at `DM(I6+1)` and imag at `DM(I6+2)`
            // — `LoadStackArg(0)` and `LoadStackArg(1)` respectively.
            //
            // Mirror that into two consecutive frame words in C99 layout
            // order (real at the *deepest* slot, imag one shallower) so
            // that `&z` walks upward through [real, imag] and libsel's
            // own `(float *)&z; p[0]; p[1]` reads recover the expected
            // components.
            if ty.is_complex() {
                let imag_slot = ctx.alloc_stack_slot();
                let real_slot = ctx.alloc_stack_slot();
                debug_assert_eq!(real_slot, imag_slot + 1);
                let real_tmp = ctx.alloc_vreg_float();
                let imag_tmp = ctx.alloc_vreg_float();
                ctx.emit(IrOp::LoadStackArg(real_tmp, 0));
                ctx.emit(IrOp::LoadStackArg(imag_tmp, 1));
                ctx.emit(IrOp::Store(real_tmp, 0, real_slot as i32));
                ctx.emit(IrOp::Store(imag_tmp, 0, imag_slot as i32));
                ctx.locals
                    .insert(name.clone(), LocalStorage::Stack(real_slot));
                // Complex args do not consume any ABI register slots.
                continue;
            }

            if ty_is_long_long(ty, &ctx) {
                let load_word = |ctx: &mut LowerCtx, src_slot_idx: usize| {
                    let tmp = ctx.alloc_vreg();
                    if src_slot_idx < target::ARG_REGS.len() {
                        ctx.emit(IrOp::Copy(tmp, src_slot_idx as VReg));
                    } else {
                        let stack_off = (src_slot_idx - target::ARG_REGS.len()) as u32;
                        ctx.emit(IrOp::LoadStackArg(tmp, stack_off));
                    }
                    tmp
                };
                let needs_stack_snapshot = has_call || reassigned.contains(name);
                if needs_stack_snapshot {
                    let slot_offset = ctx.frame_size;
                    ctx.frame_size += 2;
                    let param_pair = ctx.alloc_vreg_pair();
                    let lo = load_word(&mut ctx, slot_idx);
                    let hi = load_word(&mut ctx, slot_idx + 1);
                    ctx.emit(IrOp::Copy(param_pair, lo));
                    ctx.emit(IrOp::Copy(param_pair + 1, hi));
                    ctx.emit(IrOp::Store64(param_pair, 0, slot_offset as i32));
                    ctx.locals
                        .insert(name.clone(), LocalStorage::Stack(slot_offset));
                } else if slot_idx + 1 < target::ARG_REGS.len() {
                    let arg_vreg = slot_idx as VReg;
                    ctx.vreg_is_64bit.insert(arg_vreg);
                    ctx.locals.insert(name.clone(), LocalStorage::Reg(arg_vreg));
                } else {
                    let param_pair = ctx.alloc_vreg_pair();
                    let lo = load_word(&mut ctx, slot_idx);
                    let hi = load_word(&mut ctx, slot_idx + 1);
                    ctx.emit(IrOp::Copy(param_pair, lo));
                    ctx.emit(IrOp::Copy(param_pair + 1, hi));
                    ctx.locals
                        .insert(name.clone(), LocalStorage::Reg(param_pair));
                }
                slot_idx += 2;
                continue;
            }

            if slot_idx >= target::ARG_REGS.len() {
                // Parameters beyond the register-passed slots: load from
                // the caller's stack-arg area. Snapshot only when the value
                // must survive calls or reassignment; leaf use can stay in a
                // fresh vreg, which avoids frame-slot-zero aliasing with the
                // positive stack-arg area.
                let stack_offset = (slot_idx - target::ARG_REGS.len()) as u32;
                let param_vreg = ctx.alloc_vreg();
                if is_float_param {
                    ctx.vreg_is_float.insert(param_vreg, true);
                }
                ctx.emit(IrOp::LoadStackArg(param_vreg, stack_offset));
                if has_call || reassigned.contains(name) {
                    let slot_offset = ctx.alloc_stack_slot();
                    ctx.emit(IrOp::Store(param_vreg, 0, slot_offset as i32));
                    ctx.locals
                        .insert(name.clone(), LocalStorage::Stack(slot_offset));
                } else {
                    ctx.locals
                        .insert(name.clone(), LocalStorage::Reg(param_vreg));
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
            if has_call || reassigned.contains(name) {
                let slot_offset = ctx.alloc_stack_slot();
                let param_vreg = ctx.alloc_vreg();
                if is_float_param {
                    ctx.vreg_is_float.insert(param_vreg, true);
                }
                ctx.emit(IrOp::Copy(param_vreg, arg_vreg));
                ctx.emit(IrOp::Store(param_vreg, 0, slot_offset as i32));
                ctx.locals
                    .insert(name.clone(), LocalStorage::Stack(slot_offset));
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
            ctx.ops
                .last()
                .is_none_or(|op| !matches!(op, IrOp::Ret(_) | IrOp::RetStruct { .. }))
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
                let fallthrough =
                    pos == 0 || !matches!(&ctx.ops[pos - 1], IrOp::Ret(_) | IrOp::Branch(_));
                let cond_target = ctx
                    .ops
                    .iter()
                    .any(|op| matches!(op, IrOp::BranchCond(_, tgt) if *tgt == label_id));
                fallthrough || cond_target
            } else {
                let last_tail = tail.iter().rev().find(|op| !matches!(op, IrOp::Nop));
                last_tail.is_none_or(|op| {
                    !matches!(op, IrOp::Ret(_) | IrOp::RetStruct { .. } | IrOp::Branch(_))
                })
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

    // The SHARC+ variadic ABI passes the first `reg_named` named
    // args in `ARG_REGS[0..reg_named]` and pushes the rest. Report
    // exactly that many arg slots so `emit_asm`'s
    // `num_params = min(arg_slots, ARG_REGS.len())` pins vregs
    // 0..reg_named to the matching ARG_REGS and leaves the higher
    // arg registers free for regalloc, matching the reference convention
    // and avoiding collisions with the rest of the function body.
    let reported_arg_slots = if func.is_variadic {
        target::variadic_reg_named(func.params.len()) as u32
    } else {
        total_slots
    };
    Ok(LowerResult {
        ops: ctx.ops,
        strings: ctx.strings,
        wide_strings: ctx.wide_strings,
        static_locals: ctx.static_locals,
        arg_slots: reported_arg_slots,
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
                        let slot = ctx
                            .struct_ret_slot
                            .expect("large struct return without hidden-ptr slot");
                        let v = ctx.alloc_vreg();
                        ctx.emit(IrOp::Load(v, 0, slot as i32));
                        Some(v)
                    } else {
                        None
                    };
                    if let Some(dst_addr) = dst_addr {
                        emit_struct_copy(ctx, dst_addr, src_addr, num_words);
                        ctx.emit(IrOp::Ret(Some(dst_addr)));
                        return Ok(());
                    }
                    ctx.emit(IrOp::RetStruct {
                        src_addr,
                        dst_addr,
                        num_words,
                    });
                    return Ok(());
                }
                if ctx.return_type.is_complex() {
                    let pair = lower_complex_expr(ctx, e)?;
                    let slot = ctx.frame_size;
                    ctx.frame_size += 2;
                    let storage_slot = slot + 1;
                    ctx.emit(IrOp::Store(pair.real, 0, storage_slot as i32));
                    ctx.emit(IrOp::Store(pair.imag, 0, (storage_slot - 1) as i32));
                    let src_addr = ctx.alloc_vreg_ptr();
                    ctx.emit(IrOp::FrameAddr(src_addr, storage_slot as i32));
                    ctx.emit(IrOp::RetStruct {
                        src_addr,
                        dst_addr: None,
                        num_words: 2,
                    });
                    return Ok(());
                }
                if ty_is_long_long(&ctx.return_type.clone(), ctx) {
                    let pair = lower_return_expr(ctx, e)?;
                    let slot = ctx.frame_size;
                    ctx.frame_size += 2;
                    // Lay out the long-long pair as a 2-word struct so
                    // `RetStruct` (which reloads via the byte-addressed
                    // indirect path with hi at `src_addr + 4` bytes)
                    // reads the same memory we wrote.  This mirrors the
                    // layout used to unpack incoming struct parameters
                    // (see the `is_struct_type` arm above): the address
                    // points at the numerically-highest frame slot,
                    // which lives at the *lowest* memory address, and
                    // successive `+4`-byte offsets walk into higher
                    // memory.  Frame-relative `Store64(pair, 0, slot)`
                    // would put hi at lo - 1 word (one slot deeper),
                    // and `RetStruct` would then re-read hi from the
                    // wrong direction (uninitialized memory above lo).
                    let base_slot = slot + 1;
                    let src_addr = ctx.alloc_vreg_ptr();
                    ctx.emit(IrOp::FrameAddr(src_addr, base_slot as i32));
                    ctx.emit(IrOp::Store(pair, src_addr, 0));
                    ctx.emit(IrOp::Store(pair + 1, src_addr, 4));
                    ctx.emit(IrOp::RetStruct {
                        src_addr,
                        dst_addr: None,
                        num_words: 2,
                    });
                    return Ok(());
                }
            }
            if let Some(Expr::Ternary {
                cond,
                then_expr,
                else_expr,
            }) = expr
            {
                let lbl_else = ctx.alloc_label();
                let lbl_end = ctx.alloc_label();
                lower_branch_if_false(ctx, cond, lbl_else)?;
                let then_val = lower_return_expr(ctx, then_expr)?;
                ctx.emit(IrOp::Ret(Some(then_val)));
                ctx.emit(IrOp::Branch(lbl_end));
                ctx.emit(IrOp::Label(lbl_else));
                let else_val = lower_return_expr(ctx, else_expr)?;
                ctx.emit(IrOp::Ret(Some(else_val)));
                ctx.emit(IrOp::Label(lbl_end));
                return Ok(());
            }
            let val = match expr {
                Some(e) => Some(lower_return_expr(ctx, e)?),
                None => None,
            };
            ctx.emit(IrOp::Ret(val));
        }
        Stmt::Expr(expr) => {
            lower_discarded_expr(ctx, expr)?;
        }
        Stmt::VarDecl {
            name,
            ty,
            init,
            is_static,
            vla_dim,
        } => {
            // Standalone struct/union definition (no variable name).
            if name.is_empty() {
                // Type already collected by collect_local_struct_defs.
            } else if *is_static {
                let mangled = format!("_{}_{}", ctx.func_name, name);
                ctx.globals.insert(mangled.clone(), ty.clone());
                ctx.local_types.insert(name.clone(), ty.clone());
                ctx.locals
                    .insert(name.clone(), LocalStorage::Static(mangled.clone()));
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
                ctx.locals
                    .insert(name.clone(), LocalStorage::Stack(slot_offset));
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
                // Look through `const` / `volatile` qualifiers: a
                // `const struct { ... } s = {...};` local is still an
                // aggregate, and the brace-list initializer must walk
                // the deepest-slot-first layout so member loads
                // (`s.a` / `s.b` / ...) hit the words the stores
                // wrote.  Without `unqualified()` the `Type::Const`
                // wrapper hides the `Struct` / `Array` / `Union` tag,
                // the match falls through to the scalar fallback
                // path, and each init-list item is stored at
                // `slot_base + i` while member-access lowering still
                // computes addresses from the deepest slot — so the
                // subsequent loads read uninitialised stack words.
                let is_aggregate = is_aggregate_type(ty, ctx);
                // `_Complex T` shares the multi-word stack convention:
                // its two real components are array-like (C99 6.2.5p13)
                // so the recorded base must be the deepest slot — real
                // at field 0 / lowest memory address — and the imag
                // half lives one slot shallower (one word higher in
                // memory).
                let is_complex_local = resolve_type_chain(ty, ctx).is_complex();
                let storage_slot = if is_aggregate || is_complex_local {
                    slot_offset + num_words - 1
                } else {
                    slot_offset
                };
                ctx.locals
                    .insert(name.clone(), LocalStorage::Stack(storage_slot));
                ctx.local_types.insert(name.clone(), ty.clone());
                let const_fn_ptr_array = const_fn_ptr_array_init(ctx, ty, init.as_ref());
                let const_fn_ptr_alias = const_fn_ptr_alias_init(ctx, init.as_ref());
                let const_scalar_ptr = const_scalar_compound_ptr_init(ctx, init.as_ref());
                let const_array_ptr = const_array_compound_ptr_init(ctx, init.as_ref());
                clear_const_local(ctx, name);
                if init.is_none() {
                    if let Some(len) = function_ptr_array_len(ctx, ty) {
                        ctx.const_fn_ptr_arrays
                            .insert(name.clone(), vec![None; len]);
                    }
                }
                if let Some(Expr::InitList(items)) = init {
                    // Aggregates store element `i` at
                    // `slot_offset + num_words - 1 - i` so that walking
                    // upward from the lowest slot (the storage base) hits
                    // fields / elements in increasing-offset order.
                    // Non-aggregate scalar initializers (including the
                    // degenerate `int x = {5};` form) keep the single
                    // slot at `slot_offset`.
                    if let Some(template_ty) =
                        const_aggregate_template_type(ctx, items, ty, num_words, is_aggregate)
                    {
                        let symbol = ctx.next_const_template_symbol();
                        ctx.globals.insert(symbol.clone(), template_ty.clone());
                        ctx.static_locals.push(StaticLocal {
                            symbol: symbol.clone(),
                            ty: template_ty,
                            init: Some(Expr::InitList(items.clone())),
                        });
                        let src_addr = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::LoadGlobal(src_addr, symbol));
                        let dst_addr = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
                        emit_struct_copy(ctx, dst_addr, src_addr, num_words);
                    } else {
                        lower_aggregate_init(ctx, items, ty, slot_offset, num_words, is_aggregate)?;
                    }
                    if let Some(functions) = const_fn_ptr_array {
                        ctx.const_fn_ptr_arrays.insert(name.clone(), functions);
                    }
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
                    if let (Expr::StringLit(s), Type::Array(elem_ty, n)) = (init_expr, ty) {
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
                                emit_frame_slot_store_indirect(ctx, elem_slot, val);
                            }
                            return Ok(());
                        }
                    }
                    if is_struct_type(ty, ctx) && num_words > 1 {
                        if !lower_struct_return_call_into_frame(
                            ctx,
                            init_expr,
                            storage_slot,
                            num_words,
                        )? {
                            let src_addr = lower_struct_expr_addr(ctx, init_expr)?;
                            let dst_addr = ctx.alloc_vreg_ptr();
                            // Use `storage_slot` so the copy starts at the
                            // deepest word (field 0) and walks upward.
                            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
                            emit_struct_copy(ctx, dst_addr, src_addr, num_words);
                        }
                    } else if ty.is_complex() {
                        // C99 6.2.5p13 / SHARC+ downward stack: real
                        // at the deepest slot (= storage_slot, the
                        // lowest memory address) so `&z` walks upward
                        // through real -> imag, matching the layout
                        // libsel's reference-toolchain-compiled callees read via
                        // `(float *)&z; p[0]; p[1]`.
                        let pair = lower_complex_expr(ctx, init_expr)?;
                        ctx.emit(IrOp::Store(pair.real, 0, storage_slot as i32));
                        ctx.emit(IrOp::Store(pair.imag, 0, (storage_slot - 1) as i32));
                    } else if ty_is_long_long(ty, ctx) {
                        let val = lower_expr(ctx, init_expr)?;
                        // Widen 32-bit value to 64-bit if needed.
                        let val = if !ctx.is_64bit_vreg(val) {
                            widen_to_64(ctx, val, init_expr)
                        } else {
                            val
                        };
                        ctx.emit(IrOp::Store64(val, 0, storage_slot as i32));
                    } else {
                        let const_int_init = if !ty.is_float() {
                            const_local_i64_expr(ctx, init_expr)
                                .map(|value| const_int_to_type(ctx, value, ty))
                        } else {
                            None
                        };
                        let val = if let Some(value) = const_int_init {
                            let val = ctx.alloc_vreg();
                            ctx.emit(IrOp::LoadImm(val, value));
                            val
                        } else {
                            let val = lower_expr(ctx, init_expr)?;
                            coerce_vreg(ctx, val, ty)
                        };
                        ctx.emit(IrOp::Store(val, 0, storage_slot as i32));
                        if ty.is_float() && !ty.is_volatile() {
                            if let Some(bits) = const_local_float_bits_expr(ctx, init_expr) {
                                ctx.const_float_locals.insert(name.clone(), bits);
                            } else {
                                ctx.const_float_locals.remove(name);
                            }
                            ctx.const_locals.remove(name);
                            ctx.const_bitfield_locals
                                .retain(|(base, _), _| base != name);
                        } else if let Some(value) = const_int_init {
                            ctx.const_locals.insert(name.clone(), value);
                            ctx.const_float_locals.remove(name);
                            ctx.const_bitfield_locals
                                .retain(|(base, _), _| base != name);
                        } else {
                            clear_const_local(ctx, name);
                        }
                    }
                    if let Some(alias) = const_fn_ptr_alias {
                        ctx.const_fn_ptr_aliases.insert(name.clone(), alias);
                    }
                    if let Some(ptr_value) = const_scalar_ptr {
                        ctx.const_scalar_ptr_values.insert(name.clone(), ptr_value);
                    }
                    if let Some(array_ptr) = const_array_ptr {
                        ctx.const_array_literal_ptrs.insert(name.clone(), array_ptr);
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
            let lc = ctx
                .loop_stack
                .last()
                .ok_or_else(|| Error::NotImplemented("break outside loop or switch".into()))?;
            let lbl = lc.break_label;
            ctx.emit(IrOp::Branch(lbl));
        }
        Stmt::Continue => {
            // Walk the loop stack backwards to find the nearest context
            // that has a continue label (i.e. skip switch contexts).
            let lbl = ctx
                .loop_stack
                .iter()
                .rev()
                .find_map(|lc| lc.continue_label)
                .ok_or_else(|| Error::NotImplemented("continue outside loop".into()))?;
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

fn lower_return_expr(ctx: &mut LowerCtx, expr: &Expr) -> Result<VReg> {
    let val = lower_expr(ctx, expr)?;
    let ret_ty = ctx.return_type.clone();
    let ret_is_64 = ty_is_long_long(&ret_ty, ctx);
    let val_is_64 = ctx.is_64bit_vreg(val);

    if !val_is_64 && ret_is_64 {
        return Ok(widen_to_64(ctx, val, expr));
    }
    if val_is_64 && !ret_is_64 {
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::LongLongToInt(tmp, val));
        return Ok(coerce_vreg(ctx, tmp, &ret_ty));
    }
    Ok(coerce_vreg(ctx, val, &ret_ty))
}

fn lower_discarded_expr(ctx: &mut LowerCtx, expr: &Expr) -> Result<()> {
    if expr_type(expr, ctx).is_some_and(|ty| is_struct_type(&ty, ctx)) {
        lower_struct_expr_addr(ctx, expr)?;
    } else {
        lower_expr(ctx, expr)?;
    }
    Ok(())
}

/// Check whether a block of statements contains any VLA declarations.
fn block_has_vla(stmts: &[Stmt]) -> bool {
    stmts.iter().any(|s| {
        matches!(
            s,
            Stmt::VarDecl {
                vla_dim: Some(_),
                ..
            }
        )
    })
}

/// Lower a block of statements with VLA scope save/restore. If the block
/// contains VLA declarations, the stack pointer is saved before the first
/// statement and restored after the last.
fn lower_block_with_vla_scope(ctx: &mut LowerCtx, stmts: &[Stmt]) -> Result<()> {
    let has_vla = block_has_vla(stmts);
    let saved_depth = ctx.vla_depth;
    let snap = ctx.snapshot_scope();
    let mut assigned = assigned_in_stmts(stmts);
    add_address_taken_roots_in_stmts(stmts, &mut assigned);

    if has_vla {
        // Save stack pointer before any VLA allocations in this block.
        let save_vreg = ctx.alloc_vreg();
        ctx.emit(IrOp::StackSave(save_vreg));
        ctx.vla_save_stack.push(save_vreg);
    }

    for (idx, s) in stmts.iter().enumerate() {
        if try_lower_array_literal_alias_decl_only(ctx, s, &stmts[idx + 1..]) {
            continue;
        }
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
    invalidate_const_locals(ctx, &assigned);
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
    pack: u8,
    ctx: &LowerCtx,
) -> Option<(u32, Type)> {
    // Direct lookup in top-level fields — delegate layout to the
    // ctx-aware routine so tag-only aggregate fields are sized
    // correctly rather than collapsing to 0 bytes.
    if fields.iter().any(|(n, _)| n == field_name) {
        let (byte_off, _, _) =
            crate::types::struct_field_layout_ctx(fields, field_name, pack, ctx)?;
        let ty = fields
            .iter()
            .find(|(n, _)| n == field_name)
            .map(|(_, t)| t.clone())?;
        return Some((byte_off, ty));
    }
    // Search inside anonymous struct/union members.
    for (name, ty) in fields {
        if !name.starts_with("__anon") {
            continue;
        }
        let (anon_byte_off, _, _) = crate::types::struct_field_layout_ctx(fields, name, pack, ctx)?;
        match ty {
            Type::Union { fields: inner, .. } => {
                if let Some(ft) = union_field_type(inner, field_name, ctx) {
                    return Some((anon_byte_off, ft));
                }
            }
            Type::Struct { fields: inner, .. } => {
                if let Some((nested_off, ft)) = struct_field_offset(inner, field_name, pack, ctx) {
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
    if let Some(t) = fields
        .iter()
        .find(|(n, _)| n == field_name)
        .map(|(_, t)| t.clone())
    {
        return Some(t);
    }
    // Search inside anonymous struct/union members.
    for (name, ty) in fields {
        if !name.starts_with("__anon") {
            continue;
        }
        match ty {
            Type::Union { fields: inner, .. } => {
                if let Some(t) = union_field_type(inner, field_name, ctx) {
                    return Some(t);
                }
            }
            Type::Struct { fields: inner, .. } => {
                if let Some((_, t)) = struct_field_offset(inner, field_name, 0, ctx) {
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
            Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                collect_local_struct_defs(then_body, defs);
                if let Some(eb) = else_body {
                    collect_local_struct_defs(eb, defs);
                }
            }
            Stmt::While { body, .. } | Stmt::DoWhile { body, .. } => {
                collect_local_struct_defs(body, defs)
            }
            Stmt::For { init, body, .. } => {
                if let Some(init) = init {
                    collect_local_struct_defs(std::slice::from_ref(init.as_ref()), defs);
                }
                collect_local_struct_defs(body, defs);
            }
            Stmt::Block(inner) | Stmt::DeclGroup(inner) => collect_local_struct_defs(inner, defs),
            Stmt::Switch { body, .. } => {
                collect_local_struct_defs(body, defs);
            }
            _ => {}
        }
    }
}

fn collect_type_defs(ty: &Type, defs: &mut Vec<(String, Vec<(String, Type)>)>) {
    match ty {
        Type::Struct {
            name: Some(n),
            fields,
            ..
        }
        | Type::Union {
            name: Some(n),
            fields,
            ..
        } => {
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
        Type::Pointer(inner)
        | Type::Array(inner, _)
        | Type::Const(inner)
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

/// Resolve typedefs against `ctx` and then ask for the pointee. Pointer
/// arithmetic (`p + n`, `p++`, etc.) on a typedef-named pointer type
/// (e.g. `va_list` -> `int *`) needs the unwrapped form to compute the
/// correct stride; the bare `pointee_type` cannot see through a
/// `Type::Typedef` because it has no resolution context.
fn pointee_type_resolved<'a>(ty: &'a Type, ctx: &'a LowerCtx) -> Option<&'a Type> {
    let mut cur = ty.unqualified();
    while let Type::Typedef(name) = cur {
        match ctx.resolve_typedef(name) {
            Some(target) => cur = target.unqualified(),
            None => return None,
        }
    }
    match cur {
        Type::Pointer(inner) | Type::Array(inner, _) => Some(inner),
        _ => None,
    }
}

/// Walk through any `Type::Typedef` indirections, returning a clone of the
/// underlying canonical type. Used by `expr_type` so that downstream
/// pattern matches on `Type::Pointer` / `Type::Array` see through a
/// `typedef int (*P)[3]` and friends.
fn resolve_type_chain(ty: &Type, ctx: &LowerCtx) -> Type {
    let mut cur: Type = ty.clone();
    loop {
        let next = match cur.unqualified() {
            Type::Typedef(name) => match ctx.resolve_typedef(name) {
                Some(target) => target.clone(),
                None => return cur,
            },
            _ => return cur,
        };
        cur = next;
    }
}

/// Typedef-aware version of `Type::is_long_long`.  A `uint64_t`-style
/// typedef (defined in `<stdint.h>` as `typedef unsigned long long
/// uint64_t`) is a `Type::Typedef("uint64_t")` at the AST level and
/// `Type::is_long_long` returns `false` because the method has no
/// resolution context.  Local-variable initialization, identifier
/// loads, and cast-target shape decisions must look through the
/// typedef so a `uint64_t c = 0x100000000ULL;` stores both halves of
/// the pair via `Store64` instead of falling through to the 32-bit
/// scalar `Store` path (which silently truncates the high word and
/// breaks every later use of `c`).
fn ty_is_long_long(ty: &Type, ctx: &LowerCtx) -> bool {
    resolve_type(ty, ctx).is_long_long()
}

fn aggregate_pack(ty: &Type, ctx: &LowerCtx) -> u8 {
    match ty.unqualified() {
        Type::Struct { name, packed, .. } | Type::Union { name, packed, .. } => {
            if *packed != 0 {
                *packed
            } else {
                name.as_deref()
                    .map(|n| ctx.resolve_tag_pack(n))
                    .unwrap_or(0)
            }
        }
        Type::Typedef(name) => ctx
            .resolve_typedef(name)
            .map(|target| aggregate_pack(target, ctx))
            .unwrap_or(0),
        Type::Const(inner) | Type::Volatile(inner) => aggregate_pack(inner, ctx),
        _ => 0,
    }
}

/// Typedef-aware version of `Type::is_unsigned`.  `<stdint.h>` typedef
/// names like `uint8_t` and `uint32_t` arrive at the lowering layer as
/// `Type::Typedef("uint8_t")` and the bare `is_unsigned` method does
/// not look through typedefs, so a `(uint8_t)x` cast or `(uint64_t)x`
/// widening would be classified as signed and emit the wrong sign-/
/// zero-extension.  Resolving the typedef chain first matches the
/// signedness convention already used by `narrow_int_to_dst` (the
/// store-side counterpart of cast-truncation).
fn ty_is_unsigned(ty: &Type, ctx: &LowerCtx) -> bool {
    resolve_type(ty, ctx).is_unsigned()
}

const CONST_AGGREGATE_TEMPLATE_MIN_WORDS: u32 = 8;
const CONST_AGGREGATE_TEMPLATE_PLAIN_MIN_WORDS: u32 = 16;

fn const_aggregate_template_type(
    ctx: &LowerCtx,
    items: &[Expr],
    ty: &Type,
    num_words: u32,
    is_aggregate: bool,
) -> Option<Type> {
    if !is_aggregate || num_words < CONST_AGGREGATE_TEMPLATE_MIN_WORDS {
        return None;
    }
    if !items.iter().all(expr_is_static_template_safe) {
        return None;
    }

    let template_ty = materialize_static_template_type(ty, ctx);
    if !type_has_template_worthy_struct(&template_ty, ctx)
        && num_words < CONST_AGGREGATE_TEMPLATE_PLAIN_MIN_WORDS
    {
        return None;
    }
    let template_words = crate::types::size_words_ctx(&template_ty, ctx).max(1);
    (template_words == num_words).then_some(template_ty)
}

fn full_word_array_init_covers_all(ctx: &mut LowerCtx, items: &[Expr], ty: &Type) -> bool {
    let resolved_ty = resolve_type(ty, ctx);
    let (elem_ty, count) = match resolved_ty.unqualified() {
        Type::Array(elem_ty, Some(count)) => (elem_ty.clone(), *count),
        _ => return false,
    };
    if items.len() != count {
        return false;
    }

    let elem_ty = resolve_type(&elem_ty, ctx);
    let elem_is_array = matches!(elem_ty.unqualified(), Type::Array(..));
    let elem_is_other_aggregate = matches!(
        elem_ty.unqualified(),
        Type::Struct { .. } | Type::Union { .. }
    );
    for item in items {
        if matches!(
            item,
            Expr::DesignatedInit { .. } | Expr::ArrayDesignator { .. }
        ) {
            return false;
        }
        if elem_is_array {
            let inner_items = match item {
                Expr::InitList(inner_items) => inner_items.as_slice(),
                Expr::Cast(_, boxed) => match boxed.as_ref() {
                    Expr::InitList(inner_items) => inner_items.as_slice(),
                    _ => return false,
                },
                _ => return false,
            };
            if !full_word_array_init_covers_all(ctx, inner_items, &elem_ty) {
                return false;
            }
        } else if elem_is_other_aggregate
            || type_size_words(&elem_ty, ctx) != 1
            || matches!(item, Expr::InitList(_))
        {
            return false;
        }
    }
    true
}

fn expr_is_static_template_safe(expr: &Expr) -> bool {
    match expr {
        Expr::IntLit(..) | Expr::FloatLit(_) | Expr::CharLit(_) | Expr::StringLit(_) => true,
        Expr::Unary { operand, .. } | Expr::Cast(_, operand) => {
            expr_is_static_template_safe(operand)
        }
        Expr::Binary { lhs, rhs, .. } | Expr::Comma(lhs, rhs) => {
            expr_is_static_template_safe(lhs) && expr_is_static_template_safe(rhs)
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_is_static_template_safe(cond)
                && expr_is_static_template_safe(then_expr)
                && expr_is_static_template_safe(else_expr)
        }
        Expr::Sizeof(arg) => matches!(arg.as_ref(), SizeofArg::Type(_)),
        Expr::InitList(items) => items.iter().all(expr_is_static_template_safe),
        Expr::DesignatedInit { value, .. } => expr_is_static_template_safe(value),
        Expr::ArrayDesignator { index, value } => {
            expr_is_static_template_safe(index) && expr_is_static_template_safe(value)
        }
        Expr::ImagLit(_)
        | Expr::WideStringLit(_)
        | Expr::Ident(_)
        | Expr::Call { .. }
        | Expr::CallIndirect { .. }
        | Expr::Assign { .. }
        | Expr::Deref(_)
        | Expr::AddrOf(_)
        | Expr::Index(..)
        | Expr::Member(..)
        | Expr::Arrow(..)
        | Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_)
        | Expr::CompoundAssign { .. }
        | Expr::RealPart(_)
        | Expr::ImagPart(_) => false,
    }
}

fn materialize_static_template_type(ty: &Type, ctx: &LowerCtx) -> Type {
    match ty {
        Type::Unsigned(inner) => {
            Type::Unsigned(Box::new(materialize_static_template_type(inner, ctx)))
        }
        Type::Pointer(inner) => {
            Type::Pointer(Box::new(materialize_static_template_type(inner, ctx)))
        }
        Type::Array(elem, n) => {
            Type::Array(Box::new(materialize_static_template_type(elem, ctx)), *n)
        }
        Type::Struct {
            name,
            fields,
            packed,
        } => {
            let resolved_fields = if fields.is_empty() {
                name.as_deref()
                    .and_then(|n| ctx.resolve_tag(n))
                    .map(|f| f.to_vec())
                    .unwrap_or_default()
            } else {
                fields.clone()
            };
            let resolved_pack = if *packed != 0 {
                *packed
            } else {
                name.as_deref()
                    .map(|n| ctx.resolve_tag_pack(n))
                    .unwrap_or(0)
            };
            Type::Struct {
                name: name.clone(),
                fields: resolved_fields
                    .into_iter()
                    .map(|(n, t)| (n, materialize_static_template_type(&t, ctx)))
                    .collect(),
                packed: resolved_pack,
            }
        }
        Type::Union {
            name,
            fields,
            packed,
        } => {
            let resolved_fields = if fields.is_empty() {
                name.as_deref()
                    .and_then(|n| ctx.resolve_tag(n))
                    .map(|f| f.to_vec())
                    .unwrap_or_default()
            } else {
                fields.clone()
            };
            let resolved_pack = if *packed != 0 {
                *packed
            } else {
                name.as_deref()
                    .map(|n| ctx.resolve_tag_pack(n))
                    .unwrap_or(0)
            };
            Type::Union {
                name: name.clone(),
                fields: resolved_fields
                    .into_iter()
                    .map(|(n, t)| (n, materialize_static_template_type(&t, ctx)))
                    .collect(),
                packed: resolved_pack,
            }
        }
        Type::Typedef(name) => ctx
            .resolve_typedef(name)
            .map(|target| materialize_static_template_type(target, ctx))
            .unwrap_or_else(|| ty.clone()),
        Type::Volatile(inner) => {
            Type::Volatile(Box::new(materialize_static_template_type(inner, ctx)))
        }
        Type::Const(inner) => Type::Const(Box::new(materialize_static_template_type(inner, ctx))),
        Type::Bitfield(inner, width) => Type::Bitfield(
            Box::new(materialize_static_template_type(inner, ctx)),
            *width,
        ),
        Type::FunctionPtr {
            return_type,
            params,
        } => Type::FunctionPtr {
            return_type: Box::new(materialize_static_template_type(return_type, ctx)),
            params: params
                .iter()
                .map(|p| materialize_static_template_type(p, ctx))
                .collect(),
        },
        Type::Complex(inner) => {
            Type::Complex(Box::new(materialize_static_template_type(inner, ctx)))
        }
        Type::Imaginary(inner) => {
            Type::Imaginary(Box::new(materialize_static_template_type(inner, ctx)))
        }
        Type::Void
        | Type::Char
        | Type::Short
        | Type::Int
        | Type::Long
        | Type::LongLong
        | Type::ULongLong
        | Type::Float
        | Type::Double
        | Type::Enum { .. }
        | Type::Bool => ty.clone(),
    }
}

fn type_has_template_worthy_struct(ty: &Type, ctx: &LowerCtx) -> bool {
    match ty.unqualified() {
        Type::Array(elem, _) => type_has_template_worthy_struct(elem, ctx),
        Type::Struct { fields, packed, .. } => {
            *packed != 0
                || fields.iter().any(|(_, fty)| {
                    matches!(
                        fty.unqualified(),
                        Type::Array(..)
                            | Type::Struct { .. }
                            | Type::Union { .. }
                            | Type::Bitfield(..)
                    ) || crate::types::size_bytes_ctx(fty, ctx) < 4
                })
        }
        _ => false,
    }
}

/// Is `ty` a 1-byte scalar (char / signed char / unsigned char / bool)?
/// These types are byte-packed in memory (four per 32-bit word) and
/// require a dynamic shift+mask when read or written through a pointer
/// so byte-addressed access alignments hold.
fn is_byte_scalar(ty: &Type, ctx: &LowerCtx) -> bool {
    crate::types::size_bytes_ctx(ty.unqualified(), ctx) == 1
}

/// Is `ty` a 2-byte scalar (short / unsigned short / int16_t)?  Short
/// arrays are byte-packed (two halves per 32-bit word) so an `arr[i]`
/// load striding by `sizeof(short) == 2` can land at byte offset 0 or
/// 2 of the containing word.  The load must therefore mask the
/// addressed half rather than treating the full DM read as a 32-bit
/// element.  Mirrors `is_byte_scalar`'s role for `char`-element data.
fn is_short_scalar(ty: &Type, ctx: &LowerCtx) -> bool {
    crate::types::size_bytes_ctx(ty.unqualified(), ctx) == 2
}

/// Normalize a 32-bit register value just loaded from a narrow scalar
/// global (or static-local) so subsequent uses see the canonical
/// sign-/zero-extended representation of the declared type.  Scalar
/// globals occupy one full 32-bit DM word per object; the high bits are
/// undefined-but-stable: the initialiser is emitted zero-padded
/// (`.VAR g_x. = 0x000000E1`) while later writes go through
/// `narrow_int_to_dst`, which sign-extends signed narrow types to fill
/// the word.  Without this normalisation the very first load of a
/// negative `int8_t = 0xE1` reports +225 instead of -31, so any
/// `char -> int -> long long` widening (e.g.
/// `transparent_crc((unsigned long long)g_23)`) sees the wrong sign and
/// fails the CSmith CRC.  Mirrors `narrow_int_to_dst` (used on the
/// store side) so the post-load and post-store representations match.
fn narrow_normalize_load(ctx: &mut LowerCtx, val: VReg, ty: &Type) -> VReg {
    let resolved = resolve_type_chain(ty, ctx);
    // Floats, pointers, aggregates, longlong, anything int-sized: nothing to do.
    if resolved.is_float() {
        return val;
    }
    let bytes = crate::types::size_bytes_ctx(&resolved, ctx);
    if bytes == 0 || bytes >= 4 {
        return val;
    }
    let bits = bytes * 8;
    let mask = (1u32 << bits).wrapping_sub(1) as i64;
    let masked = ctx.alloc_vreg();
    let mask_v = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_v, mask));
    ctx.emit(IrOp::BitAnd(masked, val, mask_v));
    if resolved.is_unsigned() || resolved == Type::Bool {
        return masked;
    }
    let shift = (32 - bits) as i64;
    let shl_v = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shl_v, shift));
    let up = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(up, masked, shl_v));
    let shr_v = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shr_v, -shift));
    let dst = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(dst, up, shr_v));
    dst
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

enum ByteIndexExpr<'a> {
    Expr(&'a Expr),
    Const(i64),
}

fn strip_casts_for_byte_extract(mut expr: &Expr) -> &Expr {
    while let Expr::Cast(_, inner) = expr {
        expr = inner;
    }
    expr
}

fn byte_index_from_shift_count(expr: &Expr) -> Option<ByteIndexExpr<'_>> {
    let expr = strip_casts_for_byte_extract(expr);
    if let Some(n) = const_i64_expr(expr) {
        if (0..64).contains(&n) && n % 8 == 0 {
            return Some(ByteIndexExpr::Const(n / 8));
        }
    }
    if let Expr::Binary {
        op: BinaryOp::Mul,
        lhs,
        rhs,
    } = expr
    {
        let lhs_const = const_i64_expr(strip_casts_for_byte_extract(lhs));
        let rhs_const = const_i64_expr(strip_casts_for_byte_extract(rhs));
        if rhs_const == Some(8) {
            return Some(ByteIndexExpr::Expr(lhs));
        }
        if lhs_const == Some(8) {
            return Some(ByteIndexExpr::Expr(rhs));
        }
    }
    None
}

fn masked_64_shift_byte_parts<'a>(expr: &'a Expr) -> Option<(&'a Expr, ByteIndexExpr<'a>)> {
    let Expr::Binary {
        op: BinaryOp::BitAnd,
        lhs,
        rhs,
    } = strip_casts_for_byte_extract(expr)
    else {
        return None;
    };
    let shifted = if const_i64_expr(strip_casts_for_byte_extract(rhs)) == Some(0xFF) {
        lhs.as_ref()
    } else if const_i64_expr(strip_casts_for_byte_extract(lhs)) == Some(0xFF) {
        rhs.as_ref()
    } else {
        return None;
    };
    let Expr::Binary {
        op: BinaryOp::Shr,
        lhs: value,
        rhs: shift_count,
    } = strip_casts_for_byte_extract(shifted)
    else {
        return None;
    };
    let byte_index = byte_index_from_shift_count(shift_count)?;
    Some((value, byte_index))
}

fn lower_byte_extract_from_64_shift(
    ctx: &mut LowerCtx,
    cast_ty: &Type,
    inner: &Expr,
) -> Result<Option<VReg>> {
    if crate::types::size_bytes_ctx(cast_ty, ctx) != 1 {
        return Ok(None);
    }
    let Some((value_expr, byte_index_expr)) = masked_64_shift_byte_parts(inner) else {
        return Ok(None);
    };
    if !expr_type(value_expr, ctx).is_some_and(|ty| ty_is_long_long(&ty, ctx)) {
        return Ok(None);
    }

    let value = lower_expr(ctx, value_expr)?;
    if !ctx.is_64bit_vreg(value) {
        return Ok(None);
    }
    let byte_index = match byte_index_expr {
        ByteIndexExpr::Expr(expr) => lower_expr(ctx, expr)?,
        ByteIndexExpr::Const(n) => {
            let byte = emit_const_64bit_byte_extract(ctx, value, n);
            if ty_is_unsigned(cast_ty, ctx) {
                return Ok(Some(byte));
            }
            let shl24 = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(shl24, 24));
            let up = ctx.alloc_vreg();
            ctx.emit(IrOp::Shl(up, byte, shl24));
            let neg24 = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(neg24, -24));
            let down = ctx.alloc_vreg();
            ctx.emit(IrOp::Shr(down, up, neg24));
            return Ok(Some(down));
        }
    };
    let byte = emit_64bit_byte_extract(ctx, value, byte_index);
    if ty_is_unsigned(cast_ty, ctx) {
        return Ok(Some(byte));
    }

    let shl24 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shl24, 24));
    let up = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(up, byte, shl24));
    let neg24 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(neg24, -24));
    let down = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(down, up, neg24));
    Ok(Some(down))
}

fn emit_const_64bit_byte_extract(ctx: &mut LowerCtx, value: VReg, byte_index: i64) -> VReg {
    let word = if byte_index < 4 { value } else { value + 1 };
    let lane_bits = (byte_index & 3) * 8;
    let shifted = if lane_bits == 0 {
        let copy = ctx.alloc_vreg();
        ctx.emit(IrOp::Copy(copy, word));
        copy
    } else {
        let neg_shift = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(neg_shift, -lane_bits));
        let shifted = ctx.alloc_vreg();
        ctx.emit(IrOp::Lshr(shifted, word, neg_shift));
        shifted
    };
    let mask = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask, 0xFF));
    let byte = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(byte, shifted, mask));
    byte
}

fn emit_64bit_byte_extract(ctx: &mut LowerCtx, value: VReg, byte_index: VReg) -> VReg {
    let byte = ctx.alloc_vreg();
    ctx.emit(IrOp::ExtractByte64(byte, value, byte_index));
    byte
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

/// Emit a 16-bit (short) granularity load from `addr` (a byte address
/// that is short-aligned, i.e. addr & 1 == 0, but may not be
/// word-aligned).  Produces a 32-bit vreg holding the half-word at
/// `addr`, zero-extended by default and sign-extended if `signed`.
///
/// Odd packed-struct fields must use `emit_unaligned_short_load` instead.
fn emit_short_load(ctx: &mut LowerCtx, addr: VReg, signed: bool) -> VReg {
    let mask_word = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_word, !3i64 & 0xFFFFFFFF));
    let word_addr = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(word_addr, addr, mask_word));
    let word = ctx.alloc_vreg();
    ctx.emit(IrOp::Load(word, word_addr, 0));
    let two = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(two, 2));
    let two_bit = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(two_bit, addr, two));
    let three = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(three, 3));
    let shift = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(shift, two_bit, three));
    let neg_shift = ctx.alloc_vreg();
    ctx.emit(IrOp::Neg(neg_shift, shift));
    let shifted = ctx.alloc_vreg();
    ctx.emit(IrOp::Lshr(shifted, word, neg_shift));
    let mask_ffff = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_ffff, 0xFFFF));
    let half = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(half, shifted, mask_ffff));
    if !signed {
        return half;
    }
    // Sign-extend from bit 15: (half << 16) >> 16 arithmetic.
    let shl16 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shl16, 16));
    let up = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(up, half, shl16));
    let neg16 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(neg16, -16));
    let down = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(down, up, neg16));
    down
}

/// Emit a short-granularity store: write the low 16 bits of `val` to
/// the half-word at `addr` (byte address, short-aligned), preserving
/// the other half-word of the containing 32-bit word.
///
/// Odd packed-struct fields must use `emit_unaligned_short_store` instead.
fn emit_short_store(ctx: &mut LowerCtx, addr: VReg, val: VReg) {
    let mask_word = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_word, !3i64 & 0xFFFFFFFF));
    let word_addr = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(word_addr, addr, mask_word));
    let old = ctx.alloc_vreg();
    ctx.emit(IrOp::Load(old, word_addr, 0));
    let two = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(two, 2));
    let two_bit = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(two_bit, addr, two));
    let three = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(three, 3));
    let shift = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(shift, two_bit, three));
    let ffff = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(ffff, 0xFFFF));
    let half_mask = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(half_mask, ffff, shift));
    let clear_mask = ctx.alloc_vreg();
    ctx.emit(IrOp::BitNot(clear_mask, half_mask));
    let cleared = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(cleared, old, clear_mask));
    let ffff2 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(ffff2, 0xFFFF));
    let val_half = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(val_half, val, ffff2));
    let placed = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(placed, val_half, shift));
    let new_word = ctx.alloc_vreg();
    ctx.emit(IrOp::BitOr(new_word, cleared, placed));
    ctx.emit(IrOp::Store(new_word, word_addr, 0));
}

fn emit_unaligned_short_load(ctx: &mut LowerCtx, addr: VReg, signed: bool) -> VReg {
    let low = emit_byte_load(ctx, addr, false);
    let high_addr = add_byte_offset(ctx, addr, 1);
    let high = emit_byte_load(ctx, high_addr, false);
    let shift8 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shift8, 8));
    let high_shifted = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(high_shifted, high, shift8));
    let half = ctx.alloc_vreg();
    ctx.emit(IrOp::BitOr(half, low, high_shifted));
    if !signed {
        return half;
    }
    let shl16 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shl16, 16));
    let up = ctx.alloc_vreg();
    ctx.emit(IrOp::Shl(up, half, shl16));
    let neg16 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(neg16, -16));
    let down = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(down, up, neg16));
    down
}

fn emit_unaligned_short_store(ctx: &mut LowerCtx, addr: VReg, val: VReg) {
    emit_byte_store(ctx, addr, val);

    let neg8 = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(neg8, -8));
    let high = ctx.alloc_vreg();
    ctx.emit(IrOp::Lshr(high, val, neg8));
    let high_addr = add_byte_offset(ctx, addr, 1);
    emit_byte_store(ctx, high_addr, high);
}

fn emit_unaligned_word_load(ctx: &mut LowerCtx, addr: VReg) -> VReg {
    let mut acc: Option<VReg> = None;
    for byte_idx in 0..4 {
        let byte_addr = add_byte_offset(ctx, addr, byte_idx);
        let byte = emit_byte_load(ctx, byte_addr, false);
        let placed = if byte_idx == 0 {
            byte
        } else {
            let shift = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(shift, (byte_idx * 8) as i64));
            let shifted = ctx.alloc_vreg();
            ctx.emit(IrOp::Shl(shifted, byte, shift));
            shifted
        };
        acc = Some(match acc {
            Some(prev) => {
                let merged = ctx.alloc_vreg();
                ctx.emit(IrOp::BitOr(merged, prev, placed));
                merged
            }
            None => placed,
        });
    }
    acc.expect("word load always emits four byte loads")
}

fn emit_unaligned_word_store(ctx: &mut LowerCtx, addr: VReg, val: VReg) {
    for byte_idx in 0..4 {
        let byte = if byte_idx == 0 {
            val
        } else {
            let neg_shift = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(neg_shift, -((byte_idx * 8) as i64)));
            let shifted = ctx.alloc_vreg();
            ctx.emit(IrOp::Lshr(shifted, val, neg_shift));
            shifted
        };
        let byte_addr = add_byte_offset(ctx, addr, byte_idx);
        emit_byte_store(ctx, byte_addr, byte);
    }
}

fn emit_unaligned_longlong_load(ctx: &mut LowerCtx, addr: VReg) -> VReg {
    let lo = emit_unaligned_word_load(ctx, addr);
    let hi_addr = add_byte_offset(ctx, addr, 4);
    let hi = emit_unaligned_word_load(ctx, hi_addr);
    let pair = ctx.alloc_vreg_pair();
    ctx.emit(IrOp::Copy(pair, lo));
    ctx.emit(IrOp::Copy(pair + 1, hi));
    pair
}

fn emit_unaligned_longlong_store(ctx: &mut LowerCtx, addr: VReg, val: VReg) {
    emit_unaligned_word_store(ctx, addr, val);
    let hi_addr = add_byte_offset(ctx, addr, 4);
    emit_unaligned_word_store(ctx, hi_addr, val + 1);
}

fn lvalue_static_byte_offset(expr: &Expr, ctx: &LowerCtx) -> Option<u32> {
    match expr {
        Expr::Ident(_) | Expr::Deref(_) => Some(0),
        Expr::Member(base, field) => {
            let base_ty = expr_type(base, ctx)?;
            let base_off = lvalue_static_byte_offset(base, ctx).unwrap_or(0);
            if is_union_type(&base_ty) {
                return Some(base_off);
            }
            let fields = resolve_struct_fields(&base_ty, ctx)?;
            let (off, _) = struct_field_offset(fields, field, aggregate_pack(&base_ty, ctx), ctx)?;
            Some(base_off + off)
        }
        Expr::Arrow(base, field) => {
            let base_ty = expr_type(base, ctx)?;
            let base_ty = resolve_type_chain(&base_ty, ctx);
            let pointee = strip_to_pointer(&base_ty)?;
            if is_union_type(pointee) {
                return Some(0);
            }
            let fields = resolve_struct_fields(pointee, ctx)?;
            let (off, _) = struct_field_offset(fields, field, aggregate_pack(pointee, ctx), ctx)?;
            Some(off)
        }
        _ => None,
    }
}

fn lvalue_needs_unaligned_short_access(expr: &Expr, ctx: &LowerCtx) -> bool {
    lvalue_static_byte_offset(expr, ctx).is_some_and(|off| off % 2 != 0)
}

fn lvalue_indexed_base_can_shift_alignment(expr: &Expr, ctx: &LowerCtx, align: u32) -> bool {
    match expr {
        Expr::Index(base, _) => {
            let indexed_shift = expr_type(base, ctx)
                .and_then(|t| pointee_type_resolved(&t, ctx).cloned())
                .is_some_and(|elem| {
                    !crate::types::size_bytes_ctx(&elem, ctx)
                        .max(1)
                        .is_multiple_of(align)
                });
            indexed_shift || lvalue_indexed_base_can_shift_alignment(base, ctx, align)
        }
        Expr::Member(base, _) => lvalue_indexed_base_can_shift_alignment(base, ctx, align),
        Expr::Arrow(base, _) => lvalue_indexed_base_can_shift_alignment(base, ctx, align),
        _ => false,
    }
}

fn lvalue_short_access_may_be_unaligned(expr: &Expr, ctx: &LowerCtx) -> bool {
    matches!(expr, Expr::Deref(_) | Expr::Index(..) | Expr::Arrow(..))
        || lvalue_needs_unaligned_short_access(expr, ctx)
        || lvalue_indexed_base_can_shift_alignment(expr, ctx, 2)
}

fn lvalue_needs_unaligned_word_access(expr: &Expr, ctx: &LowerCtx) -> bool {
    lvalue_static_byte_offset(expr, ctx).is_some_and(|off| off % 4 != 0)
        || lvalue_indexed_base_can_shift_alignment(expr, ctx, 4)
}

fn is_plain_32bit_scalar(ty: &Type, ctx: &LowerCtx) -> bool {
    !is_aggregate_type(ty, ctx)
        && !ty.is_float()
        && !ty_is_long_long(ty, ctx)
        && crate::types::size_bytes_ctx(ty, ctx) == 4
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

fn direct_local_member_key(expr: &Expr) -> Option<(String, String)> {
    match expr {
        Expr::Member(base, field) => match base.as_ref() {
            Expr::Ident(base) => Some((base.clone(), field.clone())),
            _ => None,
        },
        _ => None,
    }
}

fn direct_local_member_frame_slot(ctx: &LowerCtx, expr: &Expr) -> Option<(u32, Type)> {
    let Expr::Member(base, field) = expr else {
        return None;
    };
    let Expr::Ident(base_name) = base.as_ref() else {
        return None;
    };
    let LocalStorage::Stack(base_slot) = ctx.locals.get(base_name)? else {
        return None;
    };
    let base_ty = expr_type(base, ctx)?;
    if is_union_type(&base_ty) {
        let fields = resolve_struct_fields(&base_ty, ctx)?;
        let field_ty = union_field_type(fields, field, ctx)?;
        if matches!(field_ty, Type::Bitfield(..)) {
            return None;
        }
        Some((*base_slot, field_ty))
    } else {
        let fields = resolve_struct_fields(&base_ty, ctx)?;
        let (byte_off, field_ty) =
            struct_field_offset(fields, field, aggregate_pack(&base_ty, ctx), ctx)?;
        if matches!(field_ty, Type::Bitfield(..)) {
            return None;
        }
        if byte_off % 4 != 0 {
            return None;
        }
        Some((base_slot.checked_sub(byte_off / 4)?, field_ty))
    }
}

fn const_int_to_bitfield(val: i64, info: &BitfieldInfo) -> i64 {
    let width = info.bit_width as u32;
    if width == 0 || width >= 32 {
        return val as i32 as i64;
    }
    let mask = (1u64 << width) - 1;
    let narrowed = (val as u64) & mask;
    if !info.signed {
        return narrowed as i64;
    }
    let sign_bit = 1u64 << (width - 1);
    if narrowed & sign_bit == 0 {
        narrowed as i64
    } else {
        (narrowed | !mask) as i64
    }
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
    let fields = resolve_struct_fields(&struct_ty, ctx)?;
    if is_union_type(&struct_ty) {
        let fty = union_field_type(fields, field, ctx)?;
        if let Type::Bitfield(base, width) = &fty {
            return Some(BitfieldInfo {
                bit_offset: 0,
                bit_width: *width,
                signed: !base.is_unsigned(),
            });
        }
        return None;
    }
    let (_, bit_off, bit_width) =
        crate::types::struct_field_layout_ctx(fields, field, aggregate_pack(&struct_ty, ctx), ctx)?;
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
                if !name.starts_with("__anon") {
                    continue;
                }
                if let Type::Struct { fields: inner, .. } | Type::Union { fields: inner, .. } = ty {
                    if let Some(ft) = inner
                        .iter()
                        .find(|(n, _)| n == field)
                        .map(|(_, t)| t.clone())
                    {
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
    Some(BitfieldInfo {
        bit_offset,
        bit_width: width,
        signed,
    })
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
    if info.signed && width < 32 {
        // Sign-extension shifts discard bits above the field, so a
        // separate mask is redundant on the signed path.
        let pad = 32 - width;
        let pad_imm = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(pad_imm, pad));
        let up = ctx.alloc_vreg();
        ctx.emit(IrOp::Shl(up, shifted, pad_imm));
        let neg_pad = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(neg_pad, -pad));
        let down = ctx.alloc_vreg();
        ctx.emit(IrOp::Shr(down, up, neg_pad));
        return down;
    }

    let mask_val = if width >= 32 {
        -1i64
    } else {
        (1i64 << width) - 1
    };
    let mask_imm = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(mask_imm, mask_val));
    let masked = ctx.alloc_vreg();
    ctx.emit(IrOp::BitAnd(masked, shifted, mask_imm));
    if width >= 32 {
        return masked;
    }
    masked
}

/// Emit IR to store `val` into a bitfield whose storage unit starts at
/// `container_addr`. Read-modify-write: load container, clear the field
/// slot, OR in `(val & field_mask) << bit_offset`, store back. This
/// matches the pattern in `emit_byte_store` and preserves bits outside
/// the field per C99 6.7.2.1.
fn emit_bitfield_store(ctx: &mut LowerCtx, container_addr: VReg, val: VReg, info: &BitfieldInfo) {
    let width = info.bit_width as i64;
    let bit_off = info.bit_offset as i64;
    let field_mask_val = if width >= 32 {
        -1i64
    } else {
        (1i64 << width) - 1
    };
    let shifted_mask_val = (field_mask_val as u64).wrapping_shl(bit_off as u32) as i64;

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
            // On SHARC long == int (32 bits).  Hex/octal `L` literals whose
            // value does not fit signed long but does fit unsigned long have
            // type unsigned long; the lexer does not currently preserve the
            // base, but csmith emits these boundary values in hexadecimal and
            // expects the 32-bit unsigned interpretation.
            if val >= i32::MIN as i64 && val <= i32::MAX as i64 {
                Type::Int
            } else if val as u64 <= u32::MAX as u64 {
                Type::Unsigned(Box::new(Type::Int))
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
        IntSuffix::LL => {
            // C99 6.4.4.1 gives hexadecimal `LL` literals the candidate
            // sequence long long -> unsigned long long. The lexer stores the
            // raw token value in an i64, so a high-bit-set hex literal such as
            // `0xEFA42B4837182ABBLL` arrives here as a negative bit pattern;
            // that means it did not fit signed long long and must be unsigned.
            if val < 0 {
                Type::ULongLong
            } else {
                Type::LongLong
            }
        }
        IntSuffix::Ull => Type::ULongLong,
    }
}

/// Infer the type of an expression from context (variable types, pointer
/// dereference, struct member access). Returns `None` when the type cannot
/// be determined.
/// C99 6.5.2.1 p2: `E1[E2]` is identical to `(*((E1)+(E2)))`. Addition is
/// commutative, so `2[arr]` is well-formed and equivalent to `arr[2]`.
/// All downstream lowering paths assume the first operand of `Expr::Index`
/// is the pointer / array operand (so its pointee type drives stride
/// scaling and aggregate-decay rules). This helper inspects both operands
/// and returns them in canonical `(pointer_or_array, integer)` order, so
/// `2[arr]` lowers identically to `arr[2]` regardless of how the user
/// wrote the subscript. When neither operand resolves to a pointer / array
/// type (e.g. an unresolved typedef in dead code), the original order is
/// preserved so existing callers that rely on the literal AST shape keep
/// working.
fn canonical_index_operands<'a>(
    base: &'a Expr,
    idx: &'a Expr,
    ctx: &LowerCtx,
) -> (&'a Expr, &'a Expr) {
    let base_is_ptr = expr_type(base, ctx)
        .as_ref()
        .map(|t| {
            let r = resolve_type_chain(t, ctx);
            matches!(r.unqualified(), Type::Pointer(_) | Type::Array(_, _))
        })
        .unwrap_or(false);
    if base_is_ptr {
        return (base, idx);
    }
    let idx_is_ptr = expr_type(idx, ctx)
        .as_ref()
        .map(|t| {
            let r = resolve_type_chain(t, ctx);
            matches!(r.unqualified(), Type::Pointer(_) | Type::Array(_, _))
        })
        .unwrap_or(false);
    if idx_is_ptr {
        (idx, base)
    } else {
        (base, idx)
    }
}

fn expr_type(expr: &Expr, ctx: &LowerCtx) -> Option<Type> {
    match expr {
        Expr::IntLit(val, suffix) => Some(int_literal_type(*val, *suffix)),
        Expr::CharLit(_) => Some(Type::Int),
        Expr::FloatLit(_) => Some(Type::Float),
        Expr::ImagLit(_) => Some(Type::Complex(Box::new(Type::Float))),
        // C99 6.4.5: a narrow string literal has type `char[N+1]` where
        // N is the byte length of the encoded sequence; the trailing
        // NUL accounts for the +1. C99 6.5.3.4 then makes
        // `sizeof("hello")` evaluate to the array byte size (6), not
        // the pointer size that would result from array-to-pointer
        // decay.
        Expr::StringLit(s) => Some(Type::Array(Box::new(Type::Char), Some(s.len() + 1))),
        // Wide string literal: `wchar_t[N+1]`. wchar_t is 32-bit on
        // SHARC and we model it as `Int` here (matches the wide-string
        // lowering elsewhere in this file).
        Expr::WideStringLit(chars) => Some(Type::Array(Box::new(Type::Int), Some(chars.len() + 1))),
        Expr::Ident(name) => ctx
            .local_types
            .get(name)
            .cloned()
            .or_else(|| ctx.globals.get(name).cloned()),
        Expr::Cast(ty, inner) => {
            // C99 6.7.8p22: a compound literal whose declared type is an
            // array of unknown size takes its size from the initializer
            // list. Without this, `sizeof((int[]){1,2,3})` would query
            // size of `Array(Int, None)`, which is 0.
            if let (Type::Array(elem, None), Expr::InitList(items)) = (ty, inner.as_ref()) {
                return Some(Type::Array(elem.clone(), Some(items.len())));
            }
            Some(ty.clone())
        }
        Expr::Unary { op, operand } => {
            if *op == UnaryOp::LogNot {
                return Some(Type::Int);
            }
            // Apply integer promotion on the operand type.
            expr_type(operand, ctx).map(|t| t.integer_promoted())
        }
        Expr::Binary { op, lhs, rhs } => {
            // Apply integer promotions, then usual arithmetic conversions.
            let lt = expr_type(lhs, ctx).map(|t| resolve_type(&t, ctx).integer_promoted());
            let rt = expr_type(rhs, ctx).map(|t| resolve_type(&t, ctx).integer_promoted());
            if matches!(
                op,
                BinaryOp::Eq
                    | BinaryOp::Ne
                    | BinaryOp::Lt
                    | BinaryOp::Gt
                    | BinaryOp::Le
                    | BinaryOp::Ge
                    | BinaryOp::LogAnd
                    | BinaryOp::LogOr
            ) {
                return Some(Type::Int);
            }
            // Complex operations: if either operand is complex, result is complex.
            match (&lt, &rt) {
                (Some(Type::Complex(e)), _) | (_, Some(Type::Complex(e))) => {
                    Some(Type::Complex(e.clone()))
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
            // Resolve typedef chains so `*p` on a `typedef int(*P)[3]; P p`
            // reports an `int[3]` value type, not None. Without this the
            // outer `[i]` cannot compute the `sizeof(int)` stride and
            // emits a raw-index Add.
            let resolved = resolve_type_chain(&inner_ty, ctx);
            strip_to_pointer(&resolved).cloned()
        }
        Expr::Index(a, b) => {
            // C99 6.5.2.1: subscript is commutative; `2[arr]` is equivalent
            // to `arr[2]`. Find which operand is the pointer / array.
            let (base, _) = canonical_index_operands(a, b, ctx);
            let base_ty = expr_type(base, ctx)?;
            // See Deref above for why typedef resolution is required.
            let resolved = resolve_type_chain(&base_ty, ctx);
            match resolved.unqualified() {
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
                let (_, fty) =
                    struct_field_offset(fields, field, aggregate_pack(&base_ty, ctx), ctx)?;
                Some(fty)
            }
        }
        Expr::Arrow(base, field) => {
            let base_ty = expr_type(base, ctx)?;
            // Resolve typedef chains so `p->x` on `typedef struct S *SP; SP p`
            // can find the pointee struct.
            let base_ty = resolve_type_chain(&base_ty, ctx);
            if let Some(pointee) = strip_to_pointer(&base_ty) {
                let fields = resolve_struct_fields(pointee, ctx)?;
                if is_union_type(pointee) {
                    union_field_type(fields, field, ctx)
                } else {
                    let (_, fty) =
                        struct_field_offset(fields, field, aggregate_pack(pointee, ctx), ctx)?;
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
        Expr::Assign { target, .. } | Expr::CompoundAssign { target, .. } => expr_type(target, ctx),
        Expr::Comma(_, rhs) => expr_type(rhs, ctx),
        Expr::AddrOf(inner) => expr_type(inner, ctx).map(|t| Type::Pointer(Box::new(t))),
        Expr::PostInc(inner) | Expr::PostDec(inner) | Expr::PreInc(inner) | Expr::PreDec(inner) => {
            expr_type(inner, ctx)
        }
        // C99 6.5.15: result type of `?:` follows the usual arithmetic
        // conversion of the second/third operands. For aggregate
        // (struct/union) operands the type must be the same struct on
        // both sides; report that so callers (e.g. `lower_struct_expr_addr`)
        // can detect aggregate ternaries and emit the multi-word copy
        // path instead of truncating to a single VReg.
        Expr::Ternary {
            then_expr,
            else_expr,
            ..
        } => {
            let tt = expr_type(then_expr, ctx);
            let et = expr_type(else_expr, ctx);
            match (&tt, &et) {
                // Both arithmetic: integer promotion then usual arithmetic
                // conversions (C99 6.5.15p5, 6.3.1.1, 6.3.1.8).
                (Some(t), Some(e))
                    if (t.is_integer() || t.is_float()) && (e.is_integer() || e.is_float()) =>
                {
                    let pt = resolve_type(t, ctx).integer_promoted();
                    let pe = resolve_type(e, ctx).integer_promoted();
                    match (&pt, &pe) {
                        (Type::Complex(c), _) | (_, Type::Complex(c)) => {
                            Some(Type::Complex(c.clone()))
                        }
                        (a, _) if a.is_float() => Some(pt),
                        (_, b) if b.is_float() => Some(pe),
                        (a, b) if a.is_integer() && b.is_integer() => {
                            Some(Type::usual_arithmetic_conversion(a, b))
                        }
                        _ => Some(pt),
                    }
                }
                // Pointer vs null/void/integer-zero: prefer the pointer type.
                (Some(t), _) if t.is_pointer() => tt,
                (_, Some(e)) if e.is_pointer() => et,
                // Aggregate (struct/union) operands: both branches must be the
                // same type; either is fine to report.
                _ => tt.or(et),
            }
        }
        // The result of a call has the callee's return type. Reporting
        // it here lets nested arithmetic (e.g. `f() - pi/4.0`) classify
        // the call as a float operand and apply the usual arithmetic
        // conversions on the other side, instead of treating the call's
        // type as unknown and falling back on operand-by-operand vreg
        // inspection.
        Expr::Call { name, .. } => ctx
            .function_return_types
            .get(name)
            .cloned()
            .or_else(|| {
                ctx.local_types
                    .get(name)
                    .or_else(|| ctx.globals.get(name))
                    .and_then(function_ptr_ret_type)
            })
            .or_else(|| {
                // Forward-declared external functions: parser records
                // the return type directly in `globals`. See the
                // matching note in the `Expr::Call` lowering arm.
                if ctx.known_functions.contains(name) {
                    ctx.globals.get(name).cloned()
                } else {
                    None
                }
            }),
        Expr::CallIndirect { func_expr, .. } => expr_function_ptr_ret_type(func_expr, ctx),
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
                        let dst = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::FrameAddr(dst, offset as i32));
                        Ok(dst)
                    }
                    LocalStorage::Reg(vreg) => {
                        // Spill the register variable to a stack slot
                        // so we can take its address.
                        let slot = ctx.alloc_stack_slot();
                        ctx.emit(IrOp::Store(vreg, 0, slot as i32));
                        ctx.locals.insert(name.clone(), LocalStorage::Stack(slot));
                        let dst = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::FrameAddr(dst, slot as i32));
                        Ok(dst)
                    }
                    LocalStorage::Static(ref sym) => {
                        // See note on globals below: the address vreg
                        // must not be VReg 0 since isel uses 0 as the
                        // frame-relative load/store sentinel.
                        let dst = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::LoadGlobal(dst, sym.clone()));
                        Ok(dst)
                    }
                }
            } else if ctx.globals.contains_key(name) {
                // The vreg holding a global's address is used as the
                // base of an indirect Load/Store. isel treats `base == 0`
                // as the frame-relative sentinel, so the address vreg
                // must never be VReg 0 (which can happen in a no-arg
                // function where vreg counting starts at 0).
                let dst = ctx.alloc_vreg_ptr();
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
        Expr::Index(a, b) => {
            // C99 6.5.2.1: `base[idx]` is `*(base + idx)`, where the
            // addition scales the integer index by `sizeof(*base)`.
            // Subscript is commutative (`2[arr]` == `arr[2]`); pick the
            // pointer / array operand as the base.
            let (base, idx) = canonical_index_operands(a, b, ctx);
            let base_ty = expr_type(base, ctx);
            let base_addr = lower_expr(ctx, base)?;
            let index = lower_expr(ctx, idx)?;
            let scaled = match base_ty.as_ref().and_then(|t| pointee_type_resolved(t, ctx)) {
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
                    Error::NotImplemented(format!("member access on non-struct type: {base_ty:?}"))
                })?;
                let _ = union_field_type(fields, field, ctx)
                    .ok_or_else(|| Error::NotImplemented(format!("no field '{field}' in union")))?;
                0u32
            } else {
                let fields = resolve_struct_fields(&base_ty, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!("member access on non-struct type: {base_ty:?}"))
                })?;
                let (off, _) =
                    struct_field_offset(fields, field, aggregate_pack(&base_ty, ctx), ctx)
                        .ok_or_else(|| {
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
                let _ = union_field_type(fields, field, ctx)
                    .ok_or_else(|| Error::NotImplemented(format!("no field '{field}' in union")))?;
                0u32
            } else {
                let fields = resolve_struct_fields(&pointee, ctx).ok_or_else(|| {
                    Error::NotImplemented(format!(
                        "arrow access on non-struct pointee: {pointee:?}"
                    ))
                })?;
                let (off, _) =
                    struct_field_offset(fields, field, aggregate_pack(&pointee, ctx), ctx)
                        .ok_or_else(|| {
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
            // C99 6.7.8p22: an array of unknown size in a compound literal
            // takes its size from the initializer list.
            let init_len = match inner.as_ref() {
                Expr::InitList(items) => items.len(),
                _ => 0,
            };
            let resolved_ty = resolve_type(ty, ctx);
            let resolved_ty = match resolved_ty {
                Type::Array(elem, None) => Type::Array(elem, Some(init_len)),
                other => other,
            };
            let num_words = crate::types::size_words_ctx(&resolved_ty, ctx).max(1);
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            // See note in Stmt::Decl: aggregate compound literals
            // (array, struct, union) must place element / field 0 at
            // the deepest slot so that `+i` or `+offsetof(...)` walks
            // upward through valid storage on a downward-growing stack.
            let is_aggregate = matches!(
                resolved_ty,
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            );
            if let Expr::InitList(items) = inner.as_ref() {
                lower_aggregate_init(ctx, items, &resolved_ty, slot, num_words, is_aggregate)?;
            }
            let base_slot = if is_aggregate {
                slot + num_words - 1
            } else {
                slot
            };
            let dst = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst, base_slot as i32));
            Ok(dst)
        }
        // Comma operator: &(a, b) — evaluate a for side effects, return &b
        Expr::Comma(lhs, rhs) => {
            lower_discarded_expr(ctx, lhs)?;
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
            let lit_ty = int_literal_type(*val, *suffix);
            let is_64 = lit_ty.is_long_long();
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
        Expr::ImagLit(_) => {
            // The scalar half of an imaginary literal is the implied
            // real part — always zero. The imaginary half is recovered
            // through `lower_complex_expr` when context is complex.
            let dst = ctx.alloc_vreg_float();
            ctx.emit(IrOp::LoadImm(dst, 0));
            Ok(dst)
        }
        Expr::Ident(name) => {
            // Check locals first, then globals.
            let is_float_var = ctx.local_types.get(name).is_some_and(|t| t.is_float());
            let is_64bit_var = ctx
                .local_types
                .get(name)
                .cloned()
                .is_some_and(|t| ty_is_long_long(&t, ctx));
            // C99 6.3.2.1: array-to-pointer decay.
            let is_array = ctx.local_types.get(name).is_some_and(|t| {
                matches!(resolve_type_chain(t, ctx).unqualified(), Type::Array(..))
            });
            if is_array {
                return lower_lvalue_addr(ctx, expr);
            }
            if !is_float_var && !is_64bit_var {
                if let Some(value) = ctx.const_locals.get(name).copied() {
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(dst, value));
                    return Ok(dst);
                }
            } else if is_float_var && !is_64bit_var {
                if let Some(bits) = ctx.const_float_locals.get(name).copied() {
                    let dst = ctx.alloc_vreg_float();
                    ctx.emit(IrOp::LoadImm(dst, bits as i64));
                    return Ok(dst);
                }
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
                        // Float-typed `static` locals must yield a float
                        // vreg so downstream binary-op coercion sees the
                        // value as already-floating-point. Without this,
                        // a `static const double PI = ...` read gets an
                        // int vreg, and later `q - PI` triggers a bogus
                        // IntToFloat that reinterprets the IEEE-754 bit
                        // pattern as an integer.
                        let dst = if is_float_var {
                            ctx.alloc_vreg_float()
                        } else {
                            ctx.alloc_vreg()
                        };
                        ctx.emit(IrOp::ReadGlobal(dst, sym.clone()));
                        // Static locals occupy one full DM word per
                        // narrow scalar; normalise the value so signed
                        // narrow types are sign-extended and unsigned
                        // narrow types have the high bits cleared
                        // before any subsequent use sees them.
                        let local_ty = ctx.local_types.get(name).cloned();
                        let dst = if let Some(ty) = local_ty {
                            narrow_normalize_load(ctx, dst, &ty)
                        } else {
                            dst
                        };
                        Ok(dst)
                    }
                }
            } else if ctx.globals.contains_key(name) {
                let is_global_array = ctx.globals.get(name).is_some_and(|t| {
                    matches!(resolve_type_chain(t, ctx).unqualified(), Type::Array(..))
                });
                if is_global_array {
                    // Global-array decay produces a pointer used as the
                    // base of an indirect Load/Store; isel treats vreg 0
                    // as the frame-relative sentinel, so reserve a
                    // non-zero vreg for the address.
                    let dst = ctx.alloc_vreg_ptr();
                    ctx.emit(IrOp::LoadGlobal(dst, name.clone()));
                    return Ok(dst);
                }
                let is_global_64 = ctx
                    .globals
                    .get(name)
                    .cloned()
                    .is_some_and(|t| ty_is_long_long(&t, ctx));
                if is_global_64 {
                    let dst = ctx.alloc_vreg_pair();
                    ctx.emit(IrOp::ReadGlobal64(dst, name.clone()));
                    return Ok(dst);
                }
                // A pointer-typed global is loaded so its value can serve
                // as the base of a subsequent indirect Load/Store; isel
                // treats vreg 0 as the frame-relative sentinel, so the
                // first body instruction in a no-arg function would alias
                // the loaded pointer onto the frame and read a stack slot
                // instead of dereferencing through the pointer.
                let is_global_ptr = ctx
                    .globals
                    .get(name)
                    .is_some_and(|t| pointee_type_resolved(t, ctx).is_some());
                let is_global_float = ctx.globals.get(name).is_some_and(|t| t.is_float());
                let dst = if is_global_ptr {
                    ctx.alloc_vreg_ptr()
                } else if is_global_float {
                    // See the matching note on the static-local branch:
                    // a float-typed global must yield a float vreg or
                    // mixed arithmetic with another float operand will
                    // insert a bogus IntToFloat coercion.
                    ctx.alloc_vreg_float()
                } else {
                    ctx.alloc_vreg()
                };
                ctx.emit(IrOp::ReadGlobal(dst, name.clone()));
                // Scalar globals occupy one full DM word.  Initial
                // values are emitted zero-padded into the high bits
                // (`.VAR g_x. = 0x000000E1`) but later writes go
                // through `narrow_int_to_dst` which sign-extends signed
                // narrow types.  Normalise on every load so the
                // post-init and post-write representations agree, and
                // so a signed narrow type promoted to int (or widened
                // to long long for an `unsigned long long` parameter)
                // sees the C-canonical sign-extended value rather than
                // the raw zero-padded bit pattern.
                let glob_ty = ctx.globals.get(name).cloned();
                let dst = if let Some(ty) = glob_ty {
                    if !is_global_ptr && !is_global_float {
                        narrow_normalize_load(ctx, dst, &ty)
                    } else {
                        dst
                    }
                } else {
                    dst
                };
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
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
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
            let dst = if is_float {
                ctx.alloc_vreg_float()
            } else {
                ctx.alloc_vreg()
            };
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
            // Recognised compiler builtins: lowered inline rather than
            // emitted as real call instructions.
            if let Some(component) = lower_complex_accessor_call(ctx, name, args)? {
                return Ok(component);
            }
            if name == "__builtin_va_start_sel" {
                let named = ctx.va_named_slot_count.ok_or_else(|| Error::Compile {
                    msg: "__builtin_va_start_sel called outside a variadic function".into(),
                })?;
                if !args.is_empty() {
                    return Err(Error::Compile {
                        msg: "__builtin_va_start_sel takes no arguments".into(),
                    });
                }
                let dst = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::StackArgAddr(dst, named));
                return Ok(dst);
            }
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
            // Resolve the callee's prototype so `lower_call_args_with_params`
            // can implement C99 6.5.2.2p7 ("converted as if by assignment to
            // the types of the corresponding parameters"). Direct call to a
            // named function uses `function_param_types`; a call through a
            // function-pointer variable falls back to its FunctionPtr type.
            let param_tys_owned: Option<Vec<Type>> = lookup_callee_param_types(ctx, name)
                .map(|p| p.to_vec())
                .or_else(|| {
                    expr_function_ptr_param_types(&Expr::Ident(name.clone()), ctx)
                        .map(|p| p.to_vec())
                });
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
            // The destination vreg's float/int classification must match
            // the callee's return type. Without this, a function returning
            // `double` lands in a non-float vreg, and any downstream
            // arithmetic (`q1 - pi/4.0`) sees `is_float_vreg(l) == false`
            // and inserts a bogus IntToFloat that reinterprets the IEEE-754
            // bit pattern as a signed integer. The single-call test
            // `cctest_atan2_fn` accidentally compares two values that both
            // suffer the same FLOAT mis-conversion (the static PI_2 constant
            // is also reinterpreted as int via FLOAT) and so the bug
            // cancels; the four-quadrant test compares against runtime
            // expressions like `pi / 4.0` that do not, so the score stays
            // 0.
            // Resolve the callee's return type so we can mark the
            // destination vreg as float-class when appropriate. Three
            // possible sources, in priority order:
            //   1. `function_return_types` -- functions defined in this
            //      translation unit.
            //   2. A `FunctionPtr` in locals/globals -- function pointer
            //      variables.
            //   3. A bare return type stored in `globals` -- forward
            //      declarations of external functions, which the parser
            //      records as `GlobalDecl { ty: <return type>, ... }`
            //      (params and variadic-ness are tracked separately, so
            //      `ty` here is the return type only, not a `FunctionPtr`).
            let ret_ty = ctx
                .function_return_types
                .get(name)
                .cloned()
                .or_else(|| {
                    ctx.local_types
                        .get(name)
                        .or_else(|| ctx.globals.get(name))
                        .and_then(function_ptr_ret_type)
                })
                .or_else(|| {
                    if ctx.known_functions.contains(name) {
                        ctx.globals.get(name).cloned()
                    } else {
                        None
                    }
                });
            if ret_ty.as_ref().is_some_and(|t| ty_is_long_long(t, ctx)) {
                let slot = ctx.frame_size;
                ctx.frame_size += 2;
                let storage_slot = slot + 1;
                let dst_addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
                let callee_ty = ctx.local_types.get(name).or_else(|| ctx.globals.get(name));
                let is_fnptr = callee_ty.is_some_and(|t| is_function_ptr_type(t, ctx));
                if is_fnptr {
                    let addr = lower_expr(ctx, &Expr::Ident(name.clone()))?;
                    ctx.emit(IrOp::CallIndirectStruct {
                        addr,
                        args: arg_vregs,
                        dst_addr,
                        num_words: 2,
                    });
                } else {
                    ctx.emit(IrOp::CallStruct {
                        name: name.clone(),
                        args: arg_vregs,
                        dst_addr,
                        num_words: 2,
                    });
                }
                let pair = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::Load64(pair, dst_addr, 0));
                return Ok(pair);
            }
            let dst = if ret_ty.as_ref().is_some_and(|t| t.is_float()) {
                ctx.alloc_vreg_float()
            } else {
                ctx.alloc_vreg()
            };
            let callee_ty = ctx.local_types.get(name).or_else(|| ctx.globals.get(name));
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
            if let Some(callee) = resolve_const_function_pointer_expr(ctx, func_expr) {
                if let Some(ret_ty) = simple_direct_call_ret_type(ctx, &callee) {
                    let param_tys_owned: Option<Vec<Type>> =
                        lookup_callee_param_types(ctx, &callee).map(|p| p.to_vec());
                    let arg_vregs =
                        lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
                    let dst = if ret_ty.is_float() {
                        ctx.alloc_vreg_float()
                    } else {
                        ctx.alloc_vreg()
                    };
                    ctx.emit(IrOp::Call(dst, callee, arg_vregs));
                    return Ok(dst);
                }
            }
            let func_addr = lower_expr(ctx, func_expr)?;
            // Resolve the FunctionPtr's parameter types so 32-bit
            // arguments bound to `long long` parameters still get
            // widened to a 64-bit pair on the indirect path.
            let param_tys_owned: Option<Vec<Type>> =
                expr_function_ptr_param_types(func_expr, ctx).map(|p| p.to_vec());
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
            // Mirror the float-vs-int classification fix from the direct
            // `Expr::Call` arm: an indirect callee whose return type is
            // `float`/`double` must yield a float vreg so downstream
            // arithmetic does not insert a spurious IntToFloat coercion.
            let ret_ty = expr_function_ptr_ret_type(func_expr, ctx);
            if ret_ty.as_ref().is_some_and(|t| ty_is_long_long(t, ctx)) {
                let slot = ctx.frame_size;
                ctx.frame_size += 2;
                let storage_slot = slot + 1;
                let dst_addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
                ctx.emit(IrOp::CallIndirectStruct {
                    addr: func_addr,
                    args: arg_vregs,
                    dst_addr,
                    num_words: 2,
                });
                let pair = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::Load64(pair, dst_addr, 0));
                return Ok(pair);
            }
            let dst = if ret_ty.as_ref().is_some_and(|t| t.is_float()) {
                ctx.alloc_vreg_float()
            } else {
                ctx.alloc_vreg()
            };
            ctx.emit(IrOp::CallIndirect(dst, func_addr, arg_vregs));
            Ok(dst)
        }
        Expr::Assign { target, value } => {
            // Check if this is a struct assignment (multi-word copy).
            let target_ty = expr_type(target, ctx);
            let is_struct = target_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx));
            if is_struct {
                let byte_size = target_ty
                    .as_ref()
                    .map_or(4, |t| crate::types::size_bytes_ctx(t, ctx));
                let src_aligned = !lvalue_needs_unaligned_word_access(value, ctx);
                let dst_aligned = !lvalue_needs_unaligned_word_access(target, ctx);
                let src_addr = lower_struct_expr_addr(ctx, value)?;
                let dst_addr = lower_lvalue_addr(ctx, target)?;
                emit_struct_copy_exact_aligned(
                    ctx,
                    dst_addr,
                    src_addr,
                    byte_size,
                    src_aligned,
                    dst_aligned,
                );
                let result = ctx.alloc_vreg();
                ctx.emit(IrOp::Load(result, dst_addr, 0));
                return Ok(result);
            }

            // Check for 64-bit assignment.
            let target_is_64 = target_ty.as_ref().is_some_and(|t| ty_is_long_long(t, ctx));

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
                    Expr::Member(..) | Expr::Arrow(..)
                        if lvalue_needs_unaligned_word_access(target, ctx) =>
                    {
                        let addr = lower_lvalue_addr(ctx, target)?;
                        emit_unaligned_longlong_store(ctx, addr, val);
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
                    let const_value = target_ty.as_ref().and_then(|ty| {
                        (!ty.is_float())
                            .then(|| {
                                const_local_i64_expr(ctx, value)
                                    .map(|v| const_int_to_type(ctx, v, ty))
                            })
                            .flatten()
                    });
                    let const_float_value = target_ty.as_ref().and_then(|ty| {
                        (ty.is_float() && !ty.is_volatile())
                            .then(|| const_local_float_bits_expr(ctx, value))
                            .flatten()
                    });
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
                        if let Some(value) = const_value {
                            ctx.const_locals.insert(name.clone(), value);
                            ctx.const_float_locals.remove(name);
                            ctx.const_bitfield_locals
                                .retain(|(base, _), _| base != name);
                        } else if let Some(bits) = const_float_value {
                            ctx.const_float_locals.insert(name.clone(), bits);
                            ctx.const_locals.remove(name);
                            ctx.const_bitfield_locals
                                .retain(|(base, _), _| base != name);
                        } else {
                            clear_const_local(ctx, name);
                        }
                    } else if ctx.globals.contains_key(name) {
                        ctx.emit(IrOp::StoreGlobal(val, name.clone()));
                    } else {
                        return Err(Error::NotImplemented(format!("undefined variable: {name}")));
                    }
                }
                Expr::Deref(inner) => {
                    clear_all_const_locals(ctx);
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
                        if is_short_scalar(pt, ctx) {
                            emit_unaligned_short_store(ctx, ptr, val);
                            return Ok(val);
                        }
                    }
                    ctx.emit(IrOp::Store(val, ptr, 0));
                }
                Expr::Index(a, b) => {
                    if !update_const_fn_ptr_array_store(ctx, target, value) {
                        clear_all_const_locals(ctx);
                    }
                    // C99 6.5.2.1: scale the index by `sizeof(*base)`.
                    // Subscript is commutative; pick the pointer / array
                    // operand as the base so `2[arr] = v` works.
                    let (base, idx) = canonical_index_operands(a, b, ctx);
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
                        if is_short_scalar(et, ctx) {
                            emit_unaligned_short_store(ctx, addr, val);
                            return Ok(val);
                        }
                    }
                    ctx.emit(IrOp::Store(val, addr, 0));
                }
                Expr::Member(..) | Expr::Arrow(..) => {
                    let bitfield_const = member_bitfield_info(target, ctx).and_then(|info| {
                        direct_local_member_key(target).and_then(|key| {
                            const_local_i64_expr(ctx, value)
                                .map(|v| (key, const_int_to_bitfield(v, &info)))
                        })
                    });
                    ctx.const_locals.clear();
                    ctx.const_float_locals.clear();
                    let addr = lower_lvalue_addr(ctx, target)?;
                    if let Some(info) = member_bitfield_info(target, ctx) {
                        emit_bitfield_store(ctx, addr, val, &info);
                    } else if target_ty.as_ref().is_some_and(|ty| is_byte_scalar(ty, ctx)) {
                        emit_byte_store(ctx, addr, val);
                    } else if target_ty
                        .as_ref()
                        .is_some_and(|ty| is_short_scalar(ty, ctx))
                    {
                        if lvalue_short_access_may_be_unaligned(target, ctx) {
                            emit_unaligned_short_store(ctx, addr, val);
                        } else {
                            emit_short_store(ctx, addr, val);
                        }
                    } else {
                        if target_ty.as_ref().is_some_and(|ty| {
                            is_plain_32bit_scalar(ty, ctx)
                                && lvalue_needs_unaligned_word_access(target, ctx)
                        }) {
                            emit_unaligned_word_store(ctx, addr, val);
                        } else {
                            ctx.emit(IrOp::Store(val, addr, 0));
                        }
                    }
                    match bitfield_const {
                        Some((key, value)) => {
                            ctx.const_bitfield_locals.insert(key, value);
                        }
                        None => ctx.const_bitfield_locals.clear(),
                    }
                }
                _ => {
                    clear_all_const_locals(ctx);
                    let addr = lower_lvalue_addr(ctx, target)?;
                    ctx.emit(IrOp::Store(val, addr, 0));
                }
            }
            Ok(val)
        }
        Expr::Deref(inner) => {
            if let Expr::Ident(name) = inner.as_ref() {
                if let Some((value, ty)) = ctx.const_scalar_ptr_values.get(name).cloned() {
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(dst, value));
                    return Ok(coerce_vreg(ctx, dst, &ty));
                }
            }
            let ptr_ty = expr_type(inner, ctx);
            let ptr = lower_expr(ctx, inner)?;
            let ptr = ctx.ensure_ptr_vreg(ptr);
            // Resolve typedefs so a pointer named via `typedef int (*P)[3]`
            // still reports an array pointee here; otherwise the
            // aggregate-decay branch below would miss and we'd emit a
            // scalar Load that reads only the first element.
            let pointee = ptr_ty
                .as_ref()
                .and_then(|t| pointee_type_resolved(t, ctx))
                .cloned();
            // Byte-granularity read for char / unsigned char / bool.
            // A `char *` may aim at any byte in a packed 32-bit word,
            // so load the whole word and shift/mask the target byte
            // out.  Sign-extend if the pointee is signed.  Resolve
            // typedefs first: a `uint8_t` (typedef for `unsigned char`)
            // is `Type::Typedef("uint8_t")` here, and `is_unsigned()`
            // only sees through Const/Volatile — without the resolve
            // step the load would sign-extend an unsigned byte and
            // turn `0xAA` into `0xffffffaa` once promoted to int.
            if let Some(ref pt) = pointee {
                if is_byte_scalar(pt, ctx) {
                    let signed = !resolve_type(pt, ctx).is_unsigned();
                    return Ok(emit_byte_load(ctx, ptr, signed));
                }
                if is_short_scalar(pt, ctx) {
                    // Short pointee: byte-packed `short[N]` puts two
                    // halves per word, so the addressed half (low or
                    // high) must be extracted by mask+shift just like
                    // a char element.  Sign-extend per the resolved
                    // pointee signedness so an `int16_t` load surfaces
                    // negative values correctly through the int-promote.
                    let signed = !resolve_type(pt, ctx).is_unsigned();
                    return Ok(emit_unaligned_short_load(ctx, ptr, signed));
                }
            }
            // C99 6.3.2.1p3: when the pointee is itself an aggregate
            // (array / struct / union) the "value" of `*ptr` in an
            // rvalue context is its address, not a loaded scalar word.
            // For `int (*pa)[3]`, `*pa` has type `int[3]`; emitting a
            // scalar Load here would read `arr[0]` and then any outer
            // `[i]` would treat that integer as the array base.
            if let Some(ref pt) = pointee {
                if is_aggregate_type(pt, ctx) {
                    return Ok(ptr);
                }
            }
            // A long-long pointee occupies two words; emit Load64 so
            // 64-bit semantics survive into the consumer.
            if let Some(ref pt) = pointee {
                if ty_is_long_long(pt, ctx) {
                    let dst = ctx.alloc_vreg_pair();
                    ctx.emit(IrOp::Load64(dst, ptr, 0));
                    return Ok(dst);
                }
            }
            // A float pointee must land in an F-register so downstream
            // casts (e.g. `(int)*p`) see a float source and emit the
            // float->int conversion rather than a silent bit-preserving
            // copy.
            let is_float_pointee = pointee.as_ref().map(|t| t.is_float()).unwrap_or(false);
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
            if let Expr::Ident(name) = inner.as_ref() {
                clear_const_local(ctx, name);
            }
            lower_lvalue_addr(ctx, inner)
        }
        Expr::Index(a, b) => {
            // C99 6.5.2.1: `base[idx]` scales the index by `sizeof(*base)`.
            // Subscript is commutative (`2[arr]` == `arr[2]`); pick the
            // pointer / array operand as the base.
            let (base, idx) = canonical_index_operands(a, b, ctx);
            if let Expr::Ident(name) = base {
                if let Some(index) = const_index_expr(ctx, idx) {
                    if let Some((items, elem_ty, _)) =
                        ctx.const_array_literal_ptrs.get(name).cloned()
                    {
                        if let Some(item) = items.get(index) {
                            let val = lower_expr(ctx, item)?;
                            return Ok(coerce_vreg(ctx, val, &elem_ty));
                        }
                    }
                }
            }
            let base_ty = expr_type(base, ctx);
            // Resolve typedefs so e.g. `arr3_ptr p; p[i]` (where
            // `arr3_ptr = int(*)[3]`) sees an array pointee and emits
            // the aggregate-decay return below; otherwise the bare
            // `pointee_type` would yield None on a `Type::Typedef`.
            let elem_ty = base_ty
                .as_ref()
                .and_then(|t| pointee_type_resolved(t, ctx))
                .cloned();
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
                    // Resolve typedefs so a `uint8_t arr[]` element load
                    // zero-extends; see the matching note in the Deref
                    // branch above.
                    let signed = !resolve_type(et, ctx).is_unsigned();
                    return Ok(emit_byte_load(ctx, addr, signed));
                }
                if is_short_scalar(et, ctx) {
                    // Short element: byte-packed two halves per word, so
                    // the addressed half must be extracted by mask+shift
                    // (see `emit_short_load`).  Sign-extend per resolved
                    // signedness so a signed `int16_t` element promotes
                    // correctly.
                    let signed = !resolve_type(et, ctx).is_unsigned();
                    return Ok(emit_unaligned_short_load(ctx, addr, signed));
                }
            }
            // A long-long element occupies two memory words; emit a
            // 64-bit load so downstream ops (shift, add, cast) see the
            // full pair. A plain `Load` would read only the low word
            // and let later 64-bit shifts treat a single word as the
            // entire value.
            if let Some(ref et) = elem_ty {
                if ty_is_long_long(et, ctx) {
                    let dst = ctx.alloc_vreg_pair();
                    ctx.emit(IrOp::Load64(dst, addr, 0));
                    return Ok(dst);
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
            if let Some(value) = const_local_i64_expr(ctx, expr) {
                let dst = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(dst, value));
                return Ok(dst);
            }
            if let Some((slot, ty)) = direct_local_member_frame_slot(ctx, expr) {
                let resolved = resolve_type(&ty, ctx);
                if is_plain_32bit_scalar(&resolved, ctx) {
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::Load(dst, 0, slot as i32));
                    return Ok(dst);
                }
                if resolved.is_float() {
                    let dst = ctx.alloc_vreg_float();
                    ctx.emit(IrOp::Load(dst, 0, slot as i32));
                    return Ok(dst);
                }
            }
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
            if let Some(ref mty) = member_ty {
                if is_byte_scalar(mty, ctx) {
                    return Ok(emit_byte_load(ctx, addr, !ty_is_unsigned(mty, ctx)));
                }
                if is_short_scalar(mty, ctx) {
                    if lvalue_short_access_may_be_unaligned(expr, ctx) {
                        return Ok(emit_unaligned_short_load(
                            ctx,
                            addr,
                            !ty_is_unsigned(mty, ctx),
                        ));
                    }
                    return Ok(emit_short_load(ctx, addr, !ty_is_unsigned(mty, ctx)));
                }
            }
            // A long-long member spans two words; emit Load64.
            if let Some(ref mty) = member_ty {
                if ty_is_long_long(mty, ctx) {
                    if lvalue_needs_unaligned_word_access(expr, ctx) {
                        return Ok(emit_unaligned_longlong_load(ctx, addr));
                    } else {
                        let dst = ctx.alloc_vreg_pair();
                        ctx.emit(IrOp::Load64(dst, addr, 0));
                        return Ok(dst);
                    }
                }
            }
            if let Some(ref mty) = member_ty {
                if is_plain_32bit_scalar(mty, ctx) && lvalue_needs_unaligned_word_access(expr, ctx)
                {
                    return Ok(emit_unaligned_word_load(ctx, addr));
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
                                Some(Type::Pointer(elem)) => {
                                    crate::types::size_bytes_ctx(elem, ctx).max(1)
                                }
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
            if pointee_type_resolved(ty, ctx).is_some() {
                match inner.as_ref() {
                    Expr::IntLit(val, suffix)
                        if !int_literal_type(*val, *suffix).is_long_long() =>
                    {
                        let dst = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::LoadImm(dst, *val));
                        return Ok(dst);
                    }
                    Expr::CharLit(val) => {
                        let dst = ctx.alloc_vreg_ptr();
                        ctx.emit(IrOp::LoadImm(dst, *val));
                        return Ok(dst);
                    }
                    _ => {}
                }
            }
            if *ty == Type::Bool {
                if let Some(v) = const_i64_expr(inner) {
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(dst, i64::from(v != 0)));
                    return Ok(dst);
                }
                if let Expr::FloatLit(v) = inner.as_ref() {
                    let dst = ctx.alloc_vreg();
                    ctx.emit(IrOp::LoadImm(dst, i64::from((*v as f32) != 0.0)));
                    return Ok(dst);
                }
            }
            if let Some(byte) = lower_byte_extract_from_64_shift(ctx, ty, inner)? {
                return Ok(byte);
            }
            let val = lower_expr(ctx, inner)?;
            let src_is_float = ctx.is_float_vreg(val);
            let src_is_64 = ctx.is_64bit_vreg(val);
            let dst_is_float = ty.is_float();
            let dst_is_64 = ty_is_long_long(ty, ctx);

            // C99 6.3.1.2: conversion to _Bool: any scalar != 0 becomes 1, else 0
            if *ty == Type::Bool {
                return Ok(lower_to_bool(ctx, val));
            }

            // 64-bit -> 32-bit truncation.
            if src_is_64 && !dst_is_64 {
                let dst = if dst_is_float {
                    ctx.alloc_vreg_float()
                } else if pointee_type_resolved(ty, ctx).is_some() {
                    ctx.alloc_vreg_ptr()
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
                return Ok(narrow_int_to_dst(ctx, dst, ty));
            }

            // 32-bit -> 64-bit widening.
            if !src_is_64 && dst_is_64 {
                if src_is_float {
                    // float -> int first, then widen
                    let tmp = ctx.alloc_vreg();
                    ctx.emit(IrOp::FloatToInt(tmp, val));
                    let dst = ctx.alloc_vreg_pair();
                    if is_unsigned_expr(inner, ctx) {
                        ctx.emit(IrOp::IntToLongLong(dst, tmp));
                    } else {
                        ctx.emit(IrOp::SExtToLongLong(dst, tmp));
                    }
                    return Ok(dst);
                }
                let dst = ctx.alloc_vreg_pair();
                if is_unsigned_expr(inner, ctx) {
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
                    if ty_is_unsigned(ty, ctx) {
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
        } => lower_ternary(ctx, cond, then_expr, else_expr),
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
            lower_discarded_expr(ctx, lhs)?;
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
/// `offset` is the slot of the real half (the deepest of the two
/// reserved slots, mirroring the struct-aggregate convention: field 0
/// lives at the deepest slot so that increasing memory addresses
/// correspond to increasing C99 component offsets — real at offset 0,
/// imag at offset sizeof(real)).
fn load_complex(ctx: &mut LowerCtx, offset: u32) -> ComplexPair {
    let real = ctx.alloc_vreg_float();
    let imag = ctx.alloc_vreg_float();
    ctx.emit(IrOp::Load(real, 0, offset as i32));
    // The imag half lives one slot shallower (one word higher in
    // memory, matching `&z + sizeof(real)` from the C99 layout).
    ctx.emit(IrOp::Load(imag, 0, (offset - 1) as i32));
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
        // Complex-returning function call: the reference C ABI returns the value via
        // R0 (real) and R1 (imag), the same convention used for
        // 2-word struct returns. Pipe through `CallStruct` with
        // num_words=2 so the existing R0/R1 unpack writes both halves
        // to a frame buffer in the deepest-slot-first layout, then
        // load real/imag back into vregs as a `ComplexPair`.
        Expr::Call { name, args } => {
            let param_tys_owned: Option<Vec<Type>> = lookup_callee_param_types(ctx, name)
                .map(|p| p.to_vec())
                .or_else(|| {
                    expr_function_ptr_param_types(&Expr::Ident(name.clone()), ctx)
                        .map(|p| p.to_vec())
                });
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
            let slot = ctx.frame_size;
            ctx.frame_size += 2;
            let storage_slot = slot + 1; // deepest of the two
            let dst_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            ctx.emit(IrOp::CallStruct {
                name: name.clone(),
                args: arg_vregs,
                dst_addr,
                num_words: 2,
            });
            let real = ctx.alloc_vreg_float();
            let imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::Load(real, 0, storage_slot as i32));
            ctx.emit(IrOp::Load(imag, 0, (storage_slot - 1) as i32));
            Ok(ComplexPair { real, imag })
        }
        Expr::ImagLit(val) => {
            // GCC imaginary literal: real = 0, imag = val.
            let bits = (*val as f32).to_bits();
            let real = ctx.alloc_vreg_float();
            let imag = ctx.alloc_vreg_float();
            ctx.emit(IrOp::LoadImm(real, 0));
            ctx.emit(IrOp::LoadImm(imag, bits as i64));
            Ok(ComplexPair { real, imag })
        }
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
        Expr::Binary { op, lhs, rhs } => lower_complex_binary(ctx, *op, lhs, rhs),
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

fn lower_complex_accessor_call(
    ctx: &mut LowerCtx,
    name: &str,
    args: &[Expr],
) -> Result<Option<VReg>> {
    let is_real = matches!(name, "creal" | "crealf");
    let is_imag = matches!(name, "cimag" | "cimagf");
    if (!is_real && !is_imag) || args.len() != 1 {
        return Ok(None);
    }
    if ctx.function_return_types.contains_key(name) {
        return Ok(None);
    }

    let arg = &args[0];
    let Some(arg_ty) = expr_type(arg, ctx) else {
        return Ok(None);
    };
    if matches!(resolve_type_chain(&arg_ty, ctx), Type::Complex(_)) {
        let pair = lower_complex_expr(ctx, arg)?;
        return Ok(Some(if is_real { pair.real } else { pair.imag }));
    }

    if is_real {
        let val = lower_expr(ctx, arg)?;
        Ok(Some(coerce_vreg(ctx, val, &Type::Double)))
    } else {
        let zero = ctx.alloc_vreg_float();
        ctx.emit(IrOp::LoadImm(zero, 0));
        Ok(Some(zero))
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
fn lower_complex_binary(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    lhs: &Expr,
    rhs: &Expr,
) -> Result<ComplexPair> {
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
                Ok(ComplexPair {
                    real: neg,
                    imag: neg,
                })
            } else {
                Ok(ComplexPair {
                    real: both,
                    imag: both,
                })
            }
        }
        _ => Err(Error::NotImplemented(format!("complex binary op: {op:?}"))),
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
    let either_complex =
        matches!(&lhs_ty, Some(Type::Complex(_))) || matches!(&rhs_ty, Some(Type::Complex(_)));

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
            BinaryOp::Eq
            | BinaryOp::Ne
            | BinaryOp::Lt
            | BinaryOp::Gt
            | BinaryOp::Le
            | BinaryOp::Ge => {
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
                return Err(Error::NotImplemented(format!("float binary op: {op:?}")));
            }
        }
        return Ok(dst);
    }

    // 64-bit integer operations: widen 32-bit operands if mixed.
    if is_64bit {
        let l = if !l_64 { widen_to_64(ctx, l, lhs) } else { l };
        let r = if !r_64 { widen_to_64(ctx, r, rhs) } else { r };

        // Determine signedness from the usual arithmetic conversions.
        // Mixed `uint32_t`/`int64_t` compares are signed 64-bit in C
        // because `int64_t` can represent every `uint32_t` value.
        let is_unsigned = if matches!(op, BinaryOp::Shl | BinaryOp::Shr) {
            is_unsigned_expr(lhs, ctx)
        } else {
            binary_common_is_unsigned(ctx, lhs, rhs)
        };

        let dst = ctx.alloc_vreg_pair();
        match op {
            BinaryOp::Add => ctx.emit(IrOp::Add64(dst, l, r)),
            BinaryOp::Sub => {
                if expr_is_zero_integer_literal(lhs) {
                    ctx.emit(IrOp::Neg64(dst, r));
                } else {
                    ctx.emit(IrOp::Sub64(dst, l, r));
                }
            }
            BinaryOp::Mul => ctx.emit(IrOp::Mul64(dst, l, r)),
            BinaryOp::Div => {
                if is_unsigned {
                    ctx.emit(IrOp::UDiv64(dst, l, r));
                } else {
                    lower_signed_divmod_64(ctx, dst, l, r, false);
                }
            }
            BinaryOp::Mod => {
                if is_unsigned {
                    ctx.emit(IrOp::UMod64(dst, l, r));
                } else {
                    lower_signed_divmod_64(ctx, dst, l, r, true);
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
            BinaryOp::Eq
            | BinaryOp::Ne
            | BinaryOp::Lt
            | BinaryOp::Gt
            | BinaryOp::Le
            | BinaryOp::Ge => {
                return lower_comparison_64(ctx, op, l, r, is_unsigned);
            }
            BinaryOp::LogAnd | BinaryOp::LogOr => unreachable!(),
        }
        return Ok(dst);
    }

    let is_unsigned = if matches!(op, BinaryOp::Shl | BinaryOp::Shr) {
        is_unsigned_expr(lhs, ctx)
    } else {
        binary_common_is_unsigned(ctx, lhs, rhs)
    };

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
                (None, Some(elem), BinaryOp::Add) => (scale_index_by_elem(ctx, l, &elem), r),
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
        BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge => {
            return lower_comparison(ctx, op, l, r, is_unsigned);
        }
        BinaryOp::LogAnd | BinaryOp::LogOr => unreachable!(),
    }
    Ok(dst)
}

fn lower_comparison(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    l: VReg,
    r: VReg,
    is_unsigned: bool,
) -> Result<VReg> {
    let dst = ctx.alloc_vreg();
    let one = ctx.alloc_vreg();
    // Materialise the boolean branchlessly: dst = 0, then a SHARC conditional
    // compute sets dst = 1 when the relation holds. The immediate loads are
    // emitted before the compare so they cannot clobber the flags the
    // conditional move depends on (LoadImm does not touch ASTAT).
    ctx.emit(IrOp::LoadImm(one, 1));
    ctx.emit(IrOp::LoadImm(dst, 0));
    let cond = emit_compare_for_condition(ctx, op, l, r, is_unsigned);
    ctx.emit(IrOp::CondMove(dst, one, cond));
    Ok(dst)
}

/// Widen a 32-bit vreg to a 64-bit register pair, using sign or zero extension
/// based on the expression type.
fn widen_to_64(ctx: &mut LowerCtx, val: VReg, expr: &Expr) -> VReg {
    widen_to_64_with_signedness(ctx, val, is_unsigned_expr(expr, ctx))
}

fn widen_to_64_with_signedness(ctx: &mut LowerCtx, val: VReg, unsigned: bool) -> VReg {
    let dst = ctx.alloc_vreg_pair();
    if unsigned {
        ctx.emit(IrOp::IntToLongLong(dst, val));
    } else {
        ctx.emit(IrOp::SExtToLongLong(dst, val));
    }
    dst
}

fn expr_is_zero_integer_literal(expr: &Expr) -> bool {
    matches!(expr, Expr::IntLit(0, _))
}

/// Check if an expression has unsigned type.
fn is_unsigned_expr(expr: &Expr, ctx: &LowerCtx) -> bool {
    // Resolve typedef chains before testing signedness: stdint types
    // such as `uint32_t` arrive here as `Type::Typedef("uint32_t")`,
    // and `is_unsigned` only sees through Const/Volatile, so without
    // this step every uint32_t value would be treated as signed.
    expr_type(expr, ctx).is_some_and(|t| resolve_type(&t, ctx).is_unsigned())
}

fn binary_common_is_unsigned(ctx: &LowerCtx, lhs: &Expr, rhs: &Expr) -> bool {
    let Some(lty) = expr_type(lhs, ctx) else {
        return is_unsigned_expr(lhs, ctx) || is_unsigned_expr(rhs, ctx);
    };
    let Some(rty) = expr_type(rhs, ctx) else {
        return is_unsigned_expr(lhs, ctx) || is_unsigned_expr(rhs, ctx);
    };
    let lty = resolve_type(&lty, ctx);
    let rty = resolve_type(&rty, ctx);
    Type::usual_arithmetic_conversion(&lty, &rty).is_unsigned()
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

fn lower_signed_divmod_64(
    ctx: &mut LowerCtx,
    dst: VReg,
    lhs: VReg,
    rhs: VReg,
    want_remainder: bool,
) {
    // Emit a single signed 64-bit runtime divide/modulo call. Doing the sign
    // handling inline (abs + unsigned divide + conditional negate) needs many
    // temporaries live across the divide call and miscompiles under register
    // pressure; the runtime helper keeps caller pressure minimal.
    if want_remainder {
        ctx.emit(IrOp::Mod64(dst, lhs, rhs));
    } else {
        ctx.emit(IrOp::Div64(dst, lhs, rhs));
    }
}

fn lower_log_and(ctx: &mut LowerCtx, lhs: &Expr, rhs: &Expr) -> Result<VReg> {
    if let (Some(lhs), Some(rhs)) = (
        const_local_i64_expr(ctx, lhs),
        const_local_i64_expr(ctx, rhs),
    ) {
        let dst = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(dst, i64::from(lhs != 0 && rhs != 0)));
        return Ok(dst);
    }

    // Branchless: result = (lhs != 0) & (rhs != 0), when the right operand is
    // safe to evaluate unconditionally.
    if is_speculatable(rhs) {
        let l = lower_expr(ctx, lhs)?;
        let lb = if expr_is_boolean(lhs) {
            l
        } else {
            lower_bool_value(ctx, l)
        };
        let r = lower_expr(ctx, rhs)?;
        let rb = if expr_is_boolean(rhs) {
            r
        } else {
            lower_bool_value(ctx, r)
        };
        let dst = ctx.alloc_vreg();
        ctx.emit(IrOp::BitAnd(dst, lb, rb));
        return Ok(dst);
    }

    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));

    let lbl_false = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();

    let l = lower_expr(ctx, lhs)?;
    lower_compare_scalar_to_zero(ctx, l);
    ctx.emit(IrOp::BranchCond(Cond::Eq, lbl_false));

    let r = lower_expr(ctx, rhs)?;
    lower_compare_scalar_to_zero(ctx, r);
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
    if let (Some(lhs), Some(rhs)) = (
        const_local_i64_expr(ctx, lhs),
        const_local_i64_expr(ctx, rhs),
    ) {
        let dst = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(dst, i64::from(lhs != 0 || rhs != 0)));
        return Ok(dst);
    }

    // Branchless: result = (lhs != 0) | (rhs != 0), when the right operand is
    // safe to evaluate unconditionally.
    if is_speculatable(rhs) {
        let l = lower_expr(ctx, lhs)?;
        let lb = if expr_is_boolean(lhs) {
            l
        } else {
            lower_bool_value(ctx, l)
        };
        let r = lower_expr(ctx, rhs)?;
        let rb = if expr_is_boolean(rhs) {
            r
        } else {
            lower_bool_value(ctx, r)
        };
        let dst = ctx.alloc_vreg();
        ctx.emit(IrOp::BitOr(dst, lb, rb));
        return Ok(dst);
    }

    let dst = ctx.alloc_vreg();
    let zero = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(zero, 0));

    let lbl_true = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();

    let l = lower_expr(ctx, lhs)?;
    lower_compare_scalar_to_zero(ctx, l);
    ctx.emit(IrOp::BranchCond(Cond::Ne, lbl_true));

    let r = lower_expr(ctx, rhs)?;
    lower_compare_scalar_to_zero(ctx, r);
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

fn lower_branch_if_false(ctx: &mut LowerCtx, expr: &Expr, false_label: Label) -> Result<()> {
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => {
            if *v == 0 {
                ctx.emit(IrOp::Branch(false_label));
            }
            Ok(())
        }
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => lower_branch_if_true(ctx, operand, false_label),
        Expr::Binary { op, lhs, rhs }
            if matches!(
                op,
                BinaryOp::Eq
                    | BinaryOp::Ne
                    | BinaryOp::Lt
                    | BinaryOp::Gt
                    | BinaryOp::Le
                    | BinaryOp::Ge
            ) && lower_comparison_branch(ctx, *op, lhs, rhs, false_label, false)? =>
        {
            Ok(())
        }
        Expr::Binary {
            op: BinaryOp::LogAnd,
            lhs,
            rhs,
        } => {
            lower_branch_if_false(ctx, lhs, false_label)?;
            lower_branch_if_false(ctx, rhs, false_label)
        }
        Expr::Binary {
            op: BinaryOp::LogOr,
            lhs,
            rhs,
        } => {
            let true_label = ctx.alloc_label();
            lower_branch_if_true(ctx, lhs, true_label)?;
            lower_branch_if_false(ctx, rhs, false_label)?;
            ctx.emit(IrOp::Label(true_label));
            Ok(())
        }
        _ => {
            let val = lower_expr(ctx, expr)?;
            lower_compare_scalar_to_zero(ctx, val);
            ctx.emit(IrOp::BranchCond(Cond::Eq, false_label));
            Ok(())
        }
    }
}

fn lower_branch_if_true(ctx: &mut LowerCtx, expr: &Expr, true_label: Label) -> Result<()> {
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => {
            if *v != 0 {
                ctx.emit(IrOp::Branch(true_label));
            }
            Ok(())
        }
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => lower_branch_if_false(ctx, operand, true_label),
        Expr::Binary { op, lhs, rhs }
            if matches!(
                op,
                BinaryOp::Eq
                    | BinaryOp::Ne
                    | BinaryOp::Lt
                    | BinaryOp::Gt
                    | BinaryOp::Le
                    | BinaryOp::Ge
            ) && lower_comparison_branch(ctx, *op, lhs, rhs, true_label, true)? =>
        {
            Ok(())
        }
        Expr::Binary {
            op: BinaryOp::LogAnd,
            lhs,
            rhs,
        } => {
            let false_label = ctx.alloc_label();
            lower_branch_if_false(ctx, lhs, false_label)?;
            lower_branch_if_true(ctx, rhs, true_label)?;
            ctx.emit(IrOp::Label(false_label));
            Ok(())
        }
        Expr::Binary {
            op: BinaryOp::LogOr,
            lhs,
            rhs,
        } => {
            lower_branch_if_true(ctx, lhs, true_label)?;
            lower_branch_if_true(ctx, rhs, true_label)
        }
        _ => {
            let val = lower_expr(ctx, expr)?;
            lower_compare_scalar_to_zero(ctx, val);
            ctx.emit(IrOp::BranchCond(Cond::Ne, true_label));
            Ok(())
        }
    }
}

fn lower_compare_scalar_to_zero(ctx: &mut LowerCtx, val: VReg) {
    if ctx.is_float_vreg(val) {
        let zero = ctx.alloc_vreg();
        let fzero = ctx.alloc_vreg_float();
        ctx.emit(IrOp::LoadImm(zero, 0));
        ctx.emit(IrOp::IntToFloat(fzero, zero));
        ctx.emit(IrOp::FCmp(val, fzero));
    } else if ctx.is_64bit_vreg(val) {
        let zero_pair = ctx.alloc_vreg_pair();
        ctx.emit(IrOp::LoadImm64(zero_pair, 0));
        ctx.emit(IrOp::Cmp64(val, zero_pair));
    } else {
        let zero = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(zero, 0));
        ctx.emit(IrOp::Cmp(val, zero));
    }
}

fn lower_comparison_branch(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    lhs: &Expr,
    rhs: &Expr,
    label: Label,
    jump_if_true: bool,
) -> Result<bool> {
    if let Some(value) = constant_pointer_comparison(ctx, op, lhs, rhs) {
        if value == jump_if_true {
            ctx.emit(IrOp::Branch(label));
        }
        return Ok(true);
    }
    if let Some(value) = constant_same_scalar_lvalue_comparison(ctx, op, lhs, rhs) {
        if value == jump_if_true {
            ctx.emit(IrOp::Branch(label));
        }
        return Ok(true);
    }
    if let Some(value) = constant_integer_comparison(ctx, op, lhs, rhs) {
        if value == jump_if_true {
            ctx.emit(IrOp::Branch(label));
        }
        return Ok(true);
    }

    let lhs_ty = expr_type(lhs, ctx).map(|t| resolve_type(&t, ctx));
    let rhs_ty = expr_type(rhs, ctx).map(|t| resolve_type(&t, ctx));
    let lhs_is_float = lhs_ty.as_ref().is_some_and(|t| t.is_float());
    let rhs_is_float = rhs_ty.as_ref().is_some_and(|t| t.is_float());
    let unsupported = lhs_ty
        .as_ref()
        .is_some_and(|t| t.is_complex() || ty_is_long_long(t, ctx))
        || rhs_ty
            .as_ref()
            .is_some_and(|t| t.is_complex() || ty_is_long_long(t, ctx));
    if unsupported {
        return Ok(false);
    }

    let l = lower_expr(ctx, lhs)?;
    let r = lower_expr(ctx, rhs)?;
    if lhs_is_float || rhs_is_float {
        let l = if lhs_is_float {
            l
        } else {
            let conv = ctx.alloc_vreg_float();
            ctx.emit(IrOp::IntToFloat(conv, l));
            conv
        };
        let r = if rhs_is_float {
            r
        } else {
            let conv = ctx.alloc_vreg_float();
            ctx.emit(IrOp::IntToFloat(conv, r));
            conv
        };
        ctx.emit(IrOp::FCmp(l, r));
        ctx.emit(IrOp::BranchCond(
            comparison_branch_cond(op, jump_if_true),
            label,
        ));
        return Ok(true);
    }
    let is_unsigned = binary_common_is_unsigned(ctx, lhs, rhs);
    let cond = emit_compare_for_branch(ctx, op, l, r, is_unsigned, jump_if_true);
    ctx.emit(IrOp::BranchCond(cond, label));
    Ok(true)
}

fn constant_integer_comparison(
    ctx: &LowerCtx,
    op: BinaryOp,
    lhs: &Expr,
    rhs: &Expr,
) -> Option<bool> {
    let lhs_val = const_local_i64_expr(ctx, lhs)?;
    let rhs_val = const_local_i64_expr(ctx, rhs)?;
    let is_unsigned = binary_common_is_unsigned(ctx, lhs, rhs);
    Some(match op {
        BinaryOp::Eq => lhs_val == rhs_val,
        BinaryOp::Ne => lhs_val != rhs_val,
        BinaryOp::Lt if is_unsigned => (lhs_val as u32) < (rhs_val as u32),
        BinaryOp::Gt if is_unsigned => (lhs_val as u32) > (rhs_val as u32),
        BinaryOp::Le if is_unsigned => (lhs_val as u32) <= (rhs_val as u32),
        BinaryOp::Ge if is_unsigned => (lhs_val as u32) >= (rhs_val as u32),
        BinaryOp::Lt => (lhs_val as i32) < (rhs_val as i32),
        BinaryOp::Gt => (lhs_val as i32) > (rhs_val as i32),
        BinaryOp::Le => (lhs_val as i32) <= (rhs_val as i32),
        BinaryOp::Ge => (lhs_val as i32) >= (rhs_val as i32),
        _ => return None,
    })
}

fn constant_pointer_comparison(
    ctx: &LowerCtx,
    op: BinaryOp,
    lhs: &Expr,
    rhs: &Expr,
) -> Option<bool> {
    if !matches!(op, BinaryOp::Eq | BinaryOp::Ne) {
        return None;
    }
    let lhs_key = const_array_pointer_key(ctx, lhs)?;
    let rhs_key = const_array_pointer_key(ctx, rhs)?;
    let eq = lhs_key == rhs_key;
    Some(if op == BinaryOp::Eq { eq } else { !eq })
}

fn constant_same_scalar_lvalue_comparison(
    ctx: &LowerCtx,
    op: BinaryOp,
    lhs: &Expr,
    rhs: &Expr,
) -> Option<bool> {
    if !matches!(op, BinaryOp::Eq | BinaryOp::Ne) {
        return None;
    }
    let lhs_ty = const_scalar_lvalue_type(ctx, lhs).map(|ty| resolve_type(&ty, ctx))?;
    let rhs_ty = const_scalar_lvalue_type(ctx, rhs).map(|ty| resolve_type(&ty, ctx))?;
    if type_contains_volatile(&lhs_ty) || type_contains_volatile(&rhs_ty) {
        return None;
    }
    if !(lhs_ty.is_integer() && rhs_ty.is_integer()) {
        return None;
    }

    let lhs_key = const_scalar_lvalue_key(ctx, lhs)?;
    let rhs_key = const_scalar_lvalue_key(ctx, rhs)?;
    let eq = lhs_key == rhs_key;
    Some(if op == BinaryOp::Eq { eq } else { !eq })
}

fn type_contains_volatile(ty: &Type) -> bool {
    match ty {
        Type::Volatile(_) => true,
        Type::Const(inner)
        | Type::Unsigned(inner)
        | Type::Pointer(inner)
        | Type::Array(inner, _)
        | Type::Bitfield(inner, _)
        | Type::Complex(inner)
        | Type::Imaginary(inner) => type_contains_volatile(inner),
        Type::Struct { fields, .. } | Type::Union { fields, .. } => {
            fields.iter().any(|(_, ty)| type_contains_volatile(ty))
        }
        Type::FunctionPtr {
            return_type,
            params,
        } => type_contains_volatile(return_type) || params.iter().any(type_contains_volatile),
        _ => false,
    }
}

fn const_scalar_lvalue_key(ctx: &LowerCtx, expr: &Expr) -> Option<(String, i64)> {
    match expr {
        Expr::Cast(_, inner) => const_scalar_lvalue_key(ctx, inner),
        Expr::Deref(inner) => const_array_pointer_key(ctx, inner),
        Expr::Index(a, b) => {
            let (base, index) = canonical_index_operands(a, b, ctx);
            let (base_name, base_off) = const_array_pointer_key(ctx, base)?;
            let elem_ty = pointer_step_type(ctx, base)?;
            let idx = const_i64_expr(index)?;
            let elem_size = crate::types::size_bytes_ctx(&elem_ty, ctx).max(1) as i64;
            Some((base_name, base_off + idx.saturating_mul(elem_size)))
        }
        _ => None,
    }
}

fn const_scalar_lvalue_type(ctx: &LowerCtx, expr: &Expr) -> Option<Type> {
    match expr {
        Expr::Cast(_, inner) => const_scalar_lvalue_type(ctx, inner),
        Expr::Deref(inner) => pointer_step_type(ctx, inner),
        Expr::Index(..) => expr_type(expr, ctx),
        _ => None,
    }
}

fn const_array_pointer_key(ctx: &LowerCtx, expr: &Expr) -> Option<(String, i64)> {
    match expr {
        Expr::Cast(_, inner) => const_array_pointer_key(ctx, inner),
        Expr::Ident(name) => {
            let ty = ctx
                .local_types
                .get(name)
                .or_else(|| ctx.globals.get(name))
                .map(|ty| resolve_type(ty, ctx))?;
            matches!(ty.unqualified(), Type::Array(..)).then(|| (name.clone(), 0))
        }
        Expr::AddrOf(inner) => match inner.as_ref() {
            Expr::Index(base, index) => {
                let (base_name, base_off) = const_array_pointer_key(ctx, base)?;
                let elem_ty = pointer_step_type(ctx, base)?;
                let idx = const_i64_expr(index)?;
                let elem_size = crate::types::size_bytes_ctx(&elem_ty, ctx).max(1) as i64;
                Some((base_name, base_off + idx.saturating_mul(elem_size)))
            }
            Expr::Ident(name) => {
                let ty = ctx
                    .local_types
                    .get(name)
                    .or_else(|| ctx.globals.get(name))
                    .map(|ty| resolve_type(ty, ctx))?;
                matches!(ty.unqualified(), Type::Array(..)).then(|| (name.clone(), 0))
            }
            _ => None,
        },
        Expr::Binary { op, lhs, rhs } if matches!(op, BinaryOp::Add | BinaryOp::Sub) => {
            if let Some((base_name, base_off)) = const_array_pointer_key(ctx, lhs) {
                let elem_ty = pointer_step_type(ctx, lhs)?;
                let idx = const_i64_expr(rhs)?;
                let elem_size = crate::types::size_bytes_ctx(&elem_ty, ctx).max(1) as i64;
                let delta = idx.saturating_mul(elem_size);
                return Some((
                    base_name,
                    if *op == BinaryOp::Add {
                        base_off + delta
                    } else {
                        base_off - delta
                    },
                ));
            }
            if *op == BinaryOp::Add {
                if let Some((base_name, base_off)) = const_array_pointer_key(ctx, rhs) {
                    let elem_ty = pointer_step_type(ctx, rhs)?;
                    let idx = const_i64_expr(lhs)?;
                    let elem_size = crate::types::size_bytes_ctx(&elem_ty, ctx).max(1) as i64;
                    return Some((base_name, base_off + idx.saturating_mul(elem_size)));
                }
            }
            None
        }
        _ => None,
    }
}

fn pointer_step_type(ctx: &LowerCtx, expr: &Expr) -> Option<Type> {
    if let Expr::Binary { op, lhs, rhs } = expr {
        if matches!(op, BinaryOp::Add | BinaryOp::Sub) {
            if let Some(ty) = pointer_step_type(ctx, lhs) {
                return Some(ty);
            }
            if matches!(op, BinaryOp::Add) {
                if let Some(ty) = pointer_step_type(ctx, rhs) {
                    return Some(ty);
                }
            }
        }
    }

    let ty = expr_type(expr, ctx).map(|ty| resolve_type(&ty, ctx))?;
    match ty.unqualified() {
        Type::Array(elem, _) | Type::Pointer(elem) => Some((**elem).clone()),
        _ => None,
    }
}

fn const_i64_expr(expr: &Expr) -> Option<i64> {
    match expr {
        Expr::IntLit(v, _) | Expr::CharLit(v) => Some(*v),
        Expr::Unary {
            op: UnaryOp::Neg,
            operand,
        } => const_i64_expr(operand).map(|v| v.saturating_neg()),
        Expr::Cast(ty, inner) if *ty == Type::Bool => {
            if let Some(v) = const_i64_expr(inner) {
                return Some(i64::from(v != 0));
            }
            match inner.as_ref() {
                Expr::FloatLit(v) => Some(i64::from((*v as f32) != 0.0)),
                _ => None,
            }
        }
        Expr::Cast(ty, inner) if ty.is_integer() => const_i64_expr(inner),
        Expr::Cast(_, inner) => const_i64_expr(inner),
        _ => None,
    }
}

fn const_int_to_type(ctx: &LowerCtx, val: i64, dst_ty: &Type) -> i64 {
    let resolved = resolve_type_chain(dst_ty, ctx);
    if resolved == Type::Bool {
        return i64::from(val != 0);
    }
    if !resolved.is_integer() {
        return val;
    }
    let dst_bytes = crate::types::size_bytes_ctx(&resolved, ctx);
    if dst_bytes == 0 || dst_bytes >= 8 {
        return val;
    }
    let bits = dst_bytes * 8;
    let mask = if bits >= 64 {
        u64::MAX
    } else {
        (1u64 << bits) - 1
    };
    let narrowed = (val as u64) & mask;
    if resolved.is_unsigned() {
        return narrowed as i64;
    }
    let sign_bit = 1u64 << (bits - 1);
    if narrowed & sign_bit == 0 {
        narrowed as i64
    } else {
        (narrowed | (!mask)) as i64
    }
}

fn const_local_i64_expr(ctx: &LowerCtx, expr: &Expr) -> Option<i64> {
    match expr {
        Expr::Ident(name) => ctx.const_locals.get(name).copied(),
        Expr::Member(..) => direct_local_member_key(expr)
            .and_then(|key| ctx.const_bitfield_locals.get(&key).copied()),
        Expr::Binary { op, lhs, rhs } => {
            let lhs = const_local_i64_expr(ctx, lhs)?;
            let rhs = const_local_i64_expr(ctx, rhs)?;
            eval_integer_binary(*op, lhs, rhs, false)
        }
        Expr::Unary {
            op: UnaryOp::Neg,
            operand,
        } => const_local_i64_expr(ctx, operand).map(|v| v.wrapping_neg()),
        Expr::Unary {
            op: UnaryOp::BitNot,
            operand,
        } => const_local_i64_expr(ctx, operand).map(|v| !v),
        Expr::Unary {
            op: UnaryOp::LogNot,
            operand,
        } => const_local_i64_expr(ctx, operand).map(|v| i64::from(v == 0)),
        Expr::Cast(ty, inner) => {
            const_local_i64_expr(ctx, inner).map(|v| const_int_to_type(ctx, v, ty))
        }
        _ => const_i64_expr(expr),
    }
}

fn const_condition_i64_expr(ctx: &LowerCtx, expr: &Expr) -> Option<i64> {
    if let Some(value) = const_local_i64_expr(ctx, expr) {
        return Some(value);
    }
    if let Expr::Binary { op, lhs, rhs } = expr {
        if matches!(
            op,
            BinaryOp::Eq | BinaryOp::Ne | BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge
        ) {
            return constant_integer_comparison(ctx, *op, lhs, rhs).map(i64::from);
        }
    }
    None
}

fn function_ptr_array_len(ctx: &LowerCtx, ty: &Type) -> Option<usize> {
    let resolved = resolve_type_chain(ty, ctx);
    let Type::Array(elem_ty, len) = resolved.unqualified() else {
        return None;
    };
    if !is_function_ptr_type(elem_ty, ctx) {
        return None;
    }
    *len
}

fn const_fn_ptr_array_init(
    ctx: &LowerCtx,
    ty: &Type,
    init: Option<&Expr>,
) -> Option<Vec<Option<String>>> {
    let len = function_ptr_array_len(ctx, ty)?;

    let Expr::InitList(items) = init? else {
        return None;
    };
    if items.len() > len {
        return None;
    }
    let mut functions = vec![None; len];
    for (idx, item) in items.iter().enumerate() {
        match item {
            Expr::Ident(name) if ctx.known_functions.contains(name) => {
                functions[idx] = Some(name.clone());
            }
            _ => return None,
        }
    }
    Some(functions)
}

fn const_index_expr(ctx: &LowerCtx, expr: &Expr) -> Option<usize> {
    let value = const_local_i64_expr(ctx, expr)?;
    usize::try_from(value).ok()
}

fn const_fn_ptr_array_element(ctx: &LowerCtx, expr: &Expr) -> Option<(String, usize)> {
    let Expr::Index(lhs, rhs) = expr else {
        return None;
    };
    if let Expr::Ident(array_name) = lhs.as_ref() {
        if ctx.const_fn_ptr_arrays.contains_key(array_name) {
            return const_index_expr(ctx, rhs).map(|idx| (array_name.clone(), idx));
        }
    }
    if let Expr::Ident(array_name) = rhs.as_ref() {
        if ctx.const_fn_ptr_arrays.contains_key(array_name) {
            return const_index_expr(ctx, lhs).map(|idx| (array_name.clone(), idx));
        }
    }
    None
}

fn const_fn_ptr_alias_init(ctx: &LowerCtx, init: Option<&Expr>) -> Option<(String, usize)> {
    match init? {
        Expr::AddrOf(inner) => const_fn_ptr_array_element(ctx, inner),
        Expr::Cast(_, inner) => const_fn_ptr_alias_init(ctx, Some(inner)),
        _ => None,
    }
}

fn const_scalar_compound_ptr_init(ctx: &LowerCtx, init: Option<&Expr>) -> Option<(i64, Type)> {
    let Expr::AddrOf(inner) = init? else {
        return None;
    };
    let Expr::Cast(ty, value) = inner.as_ref() else {
        return None;
    };
    let Expr::InitList(items) = value.as_ref() else {
        return None;
    };
    let [item] = items.as_slice() else {
        return None;
    };
    let resolved = resolve_type(ty, ctx);
    if type_contains_volatile(&resolved)
        || !resolved.is_integer()
        || ty_is_long_long(&resolved, ctx)
    {
        return None;
    }
    let value = const_local_i64_expr(ctx, item)?;
    Some((const_int_to_type(ctx, value, &resolved), resolved))
}

/// True if `expr` contains a raw `/` or `%`: unsafe to evaluate speculatively
/// (the divisor may be zero on a path the source short-circuits away).
fn expr_contains_raw_division(expr: &Expr) -> bool {
    match expr {
        Expr::Binary { op, lhs, rhs } => {
            matches!(op, BinaryOp::Div | BinaryOp::Mod)
                || expr_contains_raw_division(lhs)
                || expr_contains_raw_division(rhs)
        }
        Expr::Unary { operand, .. }
        | Expr::AddrOf(operand)
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => expr_contains_raw_division(operand),
        Expr::Comma(a, b) | Expr::Index(a, b) => {
            expr_contains_raw_division(a) || expr_contains_raw_division(b)
        }
        Expr::Member(b, _) | Expr::Arrow(b, _) => expr_contains_raw_division(b),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_contains_raw_division(cond)
                || expr_contains_raw_division(then_expr)
                || expr_contains_raw_division(else_expr)
        }
        _ => false,
    }
}

/// True if `expr` can be evaluated unconditionally in place of a short-circuit
/// operand: no side effects and no raw division (loads cannot fault here).
fn is_speculatable(expr: &Expr) -> bool {
    !expr_has_runtime_side_effect(expr) && !expr_contains_raw_division(expr)
}

/// True if `expr` already evaluates to a 0/1 boolean (so re-normalising it
/// with `(expr != 0)` is redundant): a relational/equality compare, a logical
/// connective, or a logical-not.
fn expr_is_boolean(expr: &Expr) -> bool {
    match expr {
        Expr::Binary { op, .. } => matches!(
            op,
            BinaryOp::Lt
                | BinaryOp::Gt
                | BinaryOp::Le
                | BinaryOp::Ge
                | BinaryOp::Eq
                | BinaryOp::Ne
                | BinaryOp::LogAnd
                | BinaryOp::LogOr
        ),
        Expr::Unary {
            op: UnaryOp::LogNot,
            ..
        } => true,
        Expr::Cast(_, inner) => expr_is_boolean(inner),
        _ => false,
    }
}

/// Materialise `(v != 0)` as a branchless 0/1 boolean via conditional move.
fn lower_bool_value(ctx: &mut LowerCtx, v: VReg) -> VReg {
    let dst = ctx.alloc_vreg();
    let one = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(one, 1));
    ctx.emit(IrOp::LoadImm(dst, 0));
    lower_compare_scalar_to_zero(ctx, v);
    ctx.emit(IrOp::CondMove(dst, one, Cond::Ne));
    dst
}

fn expr_has_runtime_side_effect(expr: &Expr) -> bool {
    match expr {
        Expr::Assign { .. }
        | Expr::CompoundAssign { .. }
        | Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_)
        | Expr::Call { .. }
        | Expr::CallIndirect { .. } => true,
        Expr::Unary { operand, .. }
        | Expr::AddrOf(operand)
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => expr_has_runtime_side_effect(operand),
        Expr::Binary { lhs, rhs, .. } | Expr::Comma(lhs, rhs) | Expr::Index(lhs, rhs) => {
            expr_has_runtime_side_effect(lhs) || expr_has_runtime_side_effect(rhs)
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => expr_has_runtime_side_effect(base),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_has_runtime_side_effect(cond)
                || expr_has_runtime_side_effect(then_expr)
                || expr_has_runtime_side_effect(else_expr)
        }
        Expr::Sizeof(arg) => match arg.as_ref() {
            SizeofArg::Expr(inner) => expr_has_runtime_side_effect(inner),
            SizeofArg::Type(_) => false,
        },
        Expr::InitList(items) => items.iter().any(expr_has_runtime_side_effect),
        Expr::DesignatedInit { value, .. } => expr_has_runtime_side_effect(value),
        Expr::ArrayDesignator { index, value } => {
            expr_has_runtime_side_effect(index) || expr_has_runtime_side_effect(value)
        }
        Expr::Ident(_)
        | Expr::IntLit(..)
        | Expr::CharLit(_)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_) => false,
    }
}

fn collect_expr_idents(expr: &Expr, out: &mut HashSet<String>) {
    match expr {
        Expr::Ident(name) => {
            out.insert(name.clone());
        }
        Expr::Unary { operand, .. }
        | Expr::AddrOf(operand)
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => collect_expr_idents(operand, out),
        Expr::Binary { lhs, rhs, .. } | Expr::Comma(lhs, rhs) | Expr::Index(lhs, rhs) => {
            collect_expr_idents(lhs, out);
            collect_expr_idents(rhs, out);
        }
        Expr::Assign { target, value } | Expr::CompoundAssign { target, value, .. } => {
            collect_expr_idents(target, out);
            collect_expr_idents(value, out);
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => collect_expr_idents(base, out),
        Expr::PreInc(inner) | Expr::PreDec(inner) | Expr::PostInc(inner) | Expr::PostDec(inner) => {
            collect_expr_idents(inner, out);
        }
        Expr::Call { args, .. } => {
            for arg in args {
                collect_expr_idents(arg, out);
            }
        }
        Expr::CallIndirect { func_expr, args } => {
            collect_expr_idents(func_expr, out);
            for arg in args {
                collect_expr_idents(arg, out);
            }
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            collect_expr_idents(cond, out);
            collect_expr_idents(then_expr, out);
            collect_expr_idents(else_expr, out);
        }
        Expr::Sizeof(arg) => {
            if let SizeofArg::Expr(inner) = arg.as_ref() {
                collect_expr_idents(inner, out);
            }
        }
        Expr::InitList(items) => {
            for item in items {
                collect_expr_idents(item, out);
            }
        }
        Expr::DesignatedInit { value, .. } => collect_expr_idents(value, out),
        Expr::ArrayDesignator { index, value } => {
            collect_expr_idents(index, out);
            collect_expr_idents(value, out);
        }
        Expr::IntLit(..)
        | Expr::CharLit(_)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_) => {}
    }
}

fn const_array_compound_ptr_init(
    ctx: &LowerCtx,
    init: Option<&Expr>,
) -> Option<(Vec<Expr>, Type, HashSet<String>)> {
    let Expr::Cast(ty, value) = init? else {
        return None;
    };
    let resolved = resolve_type(ty, ctx);
    let Type::Array(elem_ty, _) = resolved.unqualified() else {
        return None;
    };
    let elem_ty = resolve_type(elem_ty, ctx);
    if type_contains_volatile(&elem_ty) || is_aggregate_type(&elem_ty, ctx) {
        return None;
    }
    let Expr::InitList(items) = value.as_ref() else {
        return None;
    };
    if items.iter().any(expr_has_runtime_side_effect) {
        return None;
    }
    let mut deps = HashSet::new();
    for item in items {
        collect_expr_idents(item, &mut deps);
    }
    Some((items.clone(), elem_ty, deps))
}

fn expr_uses_alias_only_as_const_index(name: &str, expr: &Expr) -> bool {
    match expr {
        Expr::Ident(ident) => ident != name,
        Expr::Index(lhs, rhs) => {
            if matches!(lhs.as_ref(), Expr::Ident(ident) if ident == name) {
                return const_i64_expr(rhs).is_some();
            }
            if matches!(rhs.as_ref(), Expr::Ident(ident) if ident == name) {
                return const_i64_expr(lhs).is_some();
            }
            expr_uses_alias_only_as_const_index(name, lhs)
                && expr_uses_alias_only_as_const_index(name, rhs)
        }
        Expr::Unary { operand, .. }
        | Expr::AddrOf(operand)
        | Expr::Deref(operand)
        | Expr::Cast(_, operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand)
        | Expr::PreInc(operand)
        | Expr::PreDec(operand)
        | Expr::PostInc(operand)
        | Expr::PostDec(operand) => expr_uses_alias_only_as_const_index(name, operand),
        Expr::Binary { lhs, rhs, .. } | Expr::Comma(lhs, rhs) => {
            expr_uses_alias_only_as_const_index(name, lhs)
                && expr_uses_alias_only_as_const_index(name, rhs)
        }
        Expr::Assign { target, value } | Expr::CompoundAssign { target, value, .. } => {
            expr_uses_alias_only_as_const_index(name, target)
                && expr_uses_alias_only_as_const_index(name, value)
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => {
            expr_uses_alias_only_as_const_index(name, base)
        }
        Expr::Call { args, .. } => args
            .iter()
            .all(|arg| expr_uses_alias_only_as_const_index(name, arg)),
        Expr::CallIndirect { func_expr, args } => {
            expr_uses_alias_only_as_const_index(name, func_expr)
                && args
                    .iter()
                    .all(|arg| expr_uses_alias_only_as_const_index(name, arg))
        }
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_uses_alias_only_as_const_index(name, cond)
                && expr_uses_alias_only_as_const_index(name, then_expr)
                && expr_uses_alias_only_as_const_index(name, else_expr)
        }
        Expr::Sizeof(arg) => match arg.as_ref() {
            SizeofArg::Expr(inner) => expr_uses_alias_only_as_const_index(name, inner),
            SizeofArg::Type(_) => true,
        },
        Expr::InitList(items) => items
            .iter()
            .all(|item| expr_uses_alias_only_as_const_index(name, item)),
        Expr::DesignatedInit { value, .. } => expr_uses_alias_only_as_const_index(name, value),
        Expr::ArrayDesignator { index, value } => {
            expr_uses_alias_only_as_const_index(name, index)
                && expr_uses_alias_only_as_const_index(name, value)
        }
        Expr::IntLit(..)
        | Expr::CharLit(_)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_) => true,
    }
}

fn stmt_uses_alias_only_as_const_index(name: &str, stmt: &Stmt) -> bool {
    match stmt {
        Stmt::Return(expr) => expr
            .as_ref()
            .is_none_or(|expr| expr_uses_alias_only_as_const_index(name, expr)),
        Stmt::Expr(expr) => expr_uses_alias_only_as_const_index(name, expr),
        Stmt::VarDecl {
            name: decl_name,
            init,
            vla_dim,
            ..
        } => {
            decl_name != name
                && init
                    .as_ref()
                    .is_none_or(|expr| expr_uses_alias_only_as_const_index(name, expr))
                && vla_dim
                    .as_ref()
                    .is_none_or(|expr| expr_uses_alias_only_as_const_index(name, expr))
        }
        Stmt::If {
            cond,
            then_body,
            else_body,
        } => {
            expr_uses_alias_only_as_const_index(name, cond)
                && then_body
                    .iter()
                    .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
                && else_body.as_ref().is_none_or(|body| {
                    body.iter()
                        .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
                })
        }
        Stmt::While { cond, body } | Stmt::DoWhile { body, cond } => {
            expr_uses_alias_only_as_const_index(name, cond)
                && body
                    .iter()
                    .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
        }
        Stmt::For {
            init,
            cond,
            step,
            body,
        } => {
            init.as_ref()
                .is_none_or(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
                && cond
                    .as_ref()
                    .is_none_or(|expr| expr_uses_alias_only_as_const_index(name, expr))
                && step
                    .as_ref()
                    .is_none_or(|expr| expr_uses_alias_only_as_const_index(name, expr))
                && body
                    .iter()
                    .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
        }
        Stmt::Block(stmts) | Stmt::DeclGroup(stmts) => stmts
            .iter()
            .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt)),
        Stmt::Switch { expr, body } => {
            expr_uses_alias_only_as_const_index(name, expr)
                && body
                    .iter()
                    .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
        }
        Stmt::Label(_, inner) => stmt_uses_alias_only_as_const_index(name, inner),
        Stmt::CaseLabel(expr) => expr_uses_alias_only_as_const_index(name, expr),
        Stmt::DefaultLabel
        | Stmt::Break
        | Stmt::Continue
        | Stmt::Goto(_)
        | Stmt::EnumDecl(_)
        | Stmt::Asm(_) => true,
    }
}

fn try_lower_array_literal_alias_decl_only(ctx: &mut LowerCtx, stmt: &Stmt, rest: &[Stmt]) -> bool {
    let Stmt::VarDecl {
        name,
        ty,
        init,
        is_static: false,
        vla_dim: None,
    } = stmt
    else {
        return false;
    };
    if name.is_empty() {
        return false;
    }
    let Some(alias) = const_array_compound_ptr_init(ctx, init.as_ref()) else {
        return false;
    };
    let (_, _, deps) = &alias;
    let assigned_later = assigned_in_stmts(rest);
    if deps.iter().any(|dep| assigned_later.contains(dep)) {
        return false;
    }
    if !rest
        .iter()
        .all(|stmt| stmt_uses_alias_only_as_const_index(name, stmt))
    {
        return false;
    }
    clear_const_local(ctx, name);
    ctx.local_types.insert(name.clone(), ty.clone());
    ctx.const_array_literal_ptrs.insert(name.clone(), alias);
    true
}

fn const_fn_ptr_array_callee(ctx: &LowerCtx, array_name: &str, idx: usize) -> Option<String> {
    ctx.const_fn_ptr_arrays
        .get(array_name)
        .and_then(|functions| functions.get(idx))
        .cloned()
        .flatten()
}

fn const_fn_ptr_array_store_target(ctx: &LowerCtx, expr: &Expr) -> Option<(String, usize)> {
    let (array_name, idx) = const_fn_ptr_array_element(ctx, expr)?;
    ctx.const_fn_ptr_arrays
        .contains_key(&array_name)
        .then_some((array_name, idx))
}

fn update_const_fn_ptr_array_store(ctx: &mut LowerCtx, target: &Expr, value: &Expr) -> bool {
    let Some((array_name, idx)) = const_fn_ptr_array_store_target(ctx, target) else {
        return false;
    };
    let callee = resolve_const_function_pointer_expr(ctx, value);
    if let Some(elements) = ctx.const_fn_ptr_arrays.get_mut(&array_name) {
        if let Some(slot) = elements.get_mut(idx) {
            *slot = callee;
            return true;
        }
    }
    false
}

fn resolve_const_function_pointer_expr(ctx: &LowerCtx, expr: &Expr) -> Option<String> {
    match expr {
        Expr::Ident(name) if ctx.known_functions.contains(name) => Some(name.clone()),
        Expr::Index(..) => {
            let (array_name, idx) = const_fn_ptr_array_element(ctx, expr)?;
            const_fn_ptr_array_callee(ctx, &array_name, idx)
        }
        Expr::Deref(inner) => match inner.as_ref() {
            Expr::Ident(alias_name) => {
                let (array_name, idx) = ctx.const_fn_ptr_aliases.get(alias_name)?;
                const_fn_ptr_array_callee(ctx, array_name, *idx)
            }
            Expr::AddrOf(target) => resolve_const_function_pointer_expr(ctx, target),
            Expr::Cast(_, cast_inner) => resolve_const_function_pointer_expr(ctx, cast_inner),
            other => resolve_const_function_pointer_expr(ctx, other),
        },
        Expr::AddrOf(inner) | Expr::Cast(_, inner) => {
            resolve_const_function_pointer_expr(ctx, inner)
        }
        Expr::Comma(_, rhs) => resolve_const_function_pointer_expr(ctx, rhs),
        _ => None,
    }
}

fn simple_direct_call_ret_type(ctx: &LowerCtx, name: &str) -> Option<Type> {
    let ret_ty = ctx
        .function_return_types
        .get(name)
        .cloned()
        .or_else(|| ctx.globals.get(name).cloned())?;
    let resolved = resolve_type_chain(&ret_ty, ctx);
    if matches!(resolved.unqualified(), Type::Void)
        || is_struct_type(&ret_ty, ctx)
        || ty_is_long_long(&ret_ty, ctx)
        || resolved.is_complex()
    {
        return None;
    }
    Some(ret_ty)
}

fn const_local_float_bits_expr(ctx: &LowerCtx, expr: &Expr) -> Option<u32> {
    match expr {
        Expr::FloatLit(value) => Some((*value as f32).to_bits()),
        Expr::Ident(name) => ctx.const_float_locals.get(name).copied(),
        Expr::Unary {
            op: UnaryOp::Neg,
            operand,
        } => Some(const_local_float_bits_expr(ctx, operand)? ^ 0x8000_0000),
        Expr::Cast(ty, inner) if ty.is_float() => const_local_float_bits_expr(ctx, inner)
            .or_else(|| const_local_i64_expr(ctx, inner).map(|v| (v as f32).to_bits())),
        Expr::Binary { op, lhs, rhs } => {
            let lhs = f32::from_bits(const_local_float_bits_expr(ctx, lhs)?);
            let rhs = f32::from_bits(const_local_float_bits_expr(ctx, rhs)?);
            let result = match op {
                BinaryOp::Add => lhs + rhs,
                BinaryOp::Sub => lhs - rhs,
                BinaryOp::Mul => lhs * rhs,
                BinaryOp::Div if rhs != 0.0 => lhs / rhs,
                _ => return None,
            };
            result.is_finite().then_some(result.to_bits())
        }
        _ => None,
    }
}

fn eval_integer_compound(op: BinaryOp, lhs: i64, rhs: i64, is_unsigned: bool) -> Option<i64> {
    eval_integer_binary(op, lhs, rhs, is_unsigned)
}

fn eval_integer_binary(op: BinaryOp, lhs: i64, rhs: i64, is_unsigned: bool) -> Option<i64> {
    match op {
        BinaryOp::Add => Some(lhs.wrapping_add(rhs)),
        BinaryOp::Sub => Some(lhs.wrapping_sub(rhs)),
        BinaryOp::Mul => Some(lhs.wrapping_mul(rhs)),
        BinaryOp::Div => {
            if rhs == 0 {
                None
            } else if is_unsigned {
                Some(((lhs as u32).wrapping_div(rhs as u32)) as i64)
            } else {
                Some(((lhs as i32).wrapping_div(rhs as i32)) as i64)
            }
        }
        BinaryOp::Mod => {
            if rhs == 0 {
                None
            } else if is_unsigned {
                Some(((lhs as u32).wrapping_rem(rhs as u32)) as i64)
            } else {
                Some(((lhs as i32).wrapping_rem(rhs as i32)) as i64)
            }
        }
        BinaryOp::BitAnd => Some(lhs & rhs),
        BinaryOp::BitOr => Some(lhs | rhs),
        BinaryOp::BitXor => Some(lhs ^ rhs),
        BinaryOp::LogAnd => Some(i64::from(lhs != 0 && rhs != 0)),
        BinaryOp::LogOr => Some(i64::from(lhs != 0 || rhs != 0)),
        BinaryOp::Shl => Some(lhs.wrapping_shl(rhs as u32)),
        BinaryOp::Shr => {
            if is_unsigned {
                Some(((lhs as u32) >> (rhs as u32)) as i64)
            } else {
                Some(((lhs as i32) >> (rhs as u32)) as i64)
            }
        }
        _ => None,
    }
}

fn emit_compare_for_condition(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    l: VReg,
    r: VReg,
    is_unsigned: bool,
) -> Cond {
    if is_unsigned {
        ctx.emit(IrOp::UCmp(l, r));
    } else {
        ctx.emit(IrOp::Cmp(l, r));
    }
    comparison_branch_cond(op, true)
}

fn emit_compare_for_branch(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    l: VReg,
    r: VReg,
    is_unsigned: bool,
    jump_if_true: bool,
) -> Cond {
    if is_unsigned {
        ctx.emit(IrOp::UCmp(l, r));
    } else {
        ctx.emit(IrOp::Cmp(l, r));
    }
    comparison_branch_cond(op, jump_if_true)
}

fn comparison_branch_cond(op: BinaryOp, jump_if_true: bool) -> Cond {
    match (op, jump_if_true) {
        (BinaryOp::Eq, true) | (BinaryOp::Ne, false) => Cond::Eq,
        (BinaryOp::Ne, true) | (BinaryOp::Eq, false) => Cond::Ne,
        (BinaryOp::Lt, true) | (BinaryOp::Ge, false) => Cond::Lt,
        (BinaryOp::Gt, true) | (BinaryOp::Le, false) => Cond::Gt,
        (BinaryOp::Le, true) | (BinaryOp::Gt, false) => Cond::Le,
        (BinaryOp::Ge, true) | (BinaryOp::Lt, false) => Cond::Ge,
        _ => unreachable!(),
    }
}

fn lower_if(
    ctx: &mut LowerCtx,
    cond: &Expr,
    then_body: &[Stmt],
    else_body: Option<&[Stmt]>,
) -> Result<()> {
    let mut assigned = assigned_in_stmts(then_body);
    if let Some(else_stmts) = else_body {
        assigned.extend(assigned_in_stmts(else_stmts));
        add_address_taken_roots_in_stmts(else_stmts, &mut assigned);
    }
    add_address_taken_roots_expr(cond, &mut assigned);
    add_address_taken_roots_in_stmts(then_body, &mut assigned);
    if let Expr::IntLit(v, _) | Expr::CharLit(v) = cond {
        let selected = if *v != 0 { Some(then_body) } else { else_body };
        if let Some(body) = selected {
            let snap = ctx.snapshot_scope();
            for s in body {
                lower_stmt(ctx, s)?;
            }
            ctx.restore_scope(snap);
        }
        invalidate_const_locals(ctx, &assigned);
        return Ok(());
    }

    if else_body.is_none() {
        if let Some(target) = single_loop_branch_target(ctx, then_body)? {
            lower_branch_if_true(ctx, cond, target)?;
            invalidate_const_locals(ctx, &assigned);
            return Ok(());
        }
    }

    // C99 6.8.4/3: each selection-statement substatement is itself a
    // block, so declarations in `then_body` / `else_body` must not leak
    // bindings into the enclosing scope.
    if let Some(else_stmts) = else_body {
        if try_lower_shared_comparison_if(ctx, cond, then_body, else_stmts)? {
            invalidate_const_locals(ctx, &assigned);
            return Ok(());
        }

        let lbl_else = ctx.alloc_label();
        let lbl_end = ctx.alloc_label();
        // Branch to else when condition is zero (not nonzero).
        lower_branch_if_false(ctx, cond, lbl_else)?;
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
        lower_branch_if_false(ctx, cond, lbl_end)?;
        let snap_then = ctx.snapshot_scope();
        for s in then_body {
            lower_stmt(ctx, s)?;
        }
        ctx.restore_scope(snap_then);
        ctx.emit(IrOp::Label(lbl_end));
    }
    invalidate_const_locals(ctx, &assigned);
    Ok(())
}

fn single_loop_branch_target(ctx: &LowerCtx, body: &[Stmt]) -> Result<Option<Label>> {
    let [stmt] = body else {
        return Ok(None);
    };
    match stmt {
        Stmt::Break => {
            let lc = ctx
                .loop_stack
                .last()
                .ok_or_else(|| Error::NotImplemented("break outside loop or switch".into()))?;
            Ok(Some(lc.break_label))
        }
        Stmt::Continue => {
            let lbl = ctx
                .loop_stack
                .iter()
                .rev()
                .find_map(|lc| lc.continue_label)
                .ok_or_else(|| Error::NotImplemented("continue outside loop".into()))?;
            Ok(Some(lbl))
        }
        _ => Ok(None),
    }
}

fn try_lower_shared_comparison_if(
    ctx: &mut LowerCtx,
    cond: &Expr,
    then_body: &[Stmt],
    else_body: &[Stmt],
) -> Result<bool> {
    let Expr::Binary {
        op: first_op,
        lhs: first_lhs,
        rhs: first_rhs,
    } = cond
    else {
        return Ok(false);
    };
    if *first_op != BinaryOp::Eq {
        return Ok(false);
    }
    let [Stmt::If {
        cond: nested_cond,
        then_body: nested_then,
        else_body: nested_else,
    }] = else_body
    else {
        return Ok(false);
    };
    let Expr::Binary {
        op: nested_op,
        lhs: nested_lhs,
        rhs: nested_rhs,
    } = nested_cond
    else {
        return Ok(false);
    };
    if !matches!(
        nested_op,
        BinaryOp::Lt | BinaryOp::Gt | BinaryOp::Le | BinaryOp::Ge
    ) || first_lhs.as_ref() != nested_lhs.as_ref()
        || first_rhs.as_ref() != nested_rhs.as_ref()
        || !expr_reusable_for_comparison(first_lhs, ctx)
        || !expr_reusable_for_comparison(first_rhs, ctx)
    {
        return Ok(false);
    }

    let lhs_ty = expr_type(first_lhs, ctx).map(|t| resolve_type(&t, ctx));
    let rhs_ty = expr_type(first_rhs, ctx).map(|t| resolve_type(&t, ctx));
    let unsupported = lhs_ty
        .as_ref()
        .is_some_and(|t| t.is_float() || t.is_complex() || ty_is_long_long(t, ctx))
        || rhs_ty
            .as_ref()
            .is_some_and(|t| t.is_float() || t.is_complex() || ty_is_long_long(t, ctx));
    if unsupported {
        return Ok(false);
    }

    let l = lower_expr(ctx, first_lhs)?;
    let r = lower_expr(ctx, first_rhs)?;
    let is_unsigned = binary_common_is_unsigned(ctx, first_lhs, first_rhs);
    let lbl_else = ctx.alloc_label();
    let lbl_end = ctx.alloc_label();
    let cond = emit_compare_for_branch(ctx, *first_op, l, r, is_unsigned, false);
    ctx.emit(IrOp::BranchCond(cond, lbl_else));

    let snap_then = ctx.snapshot_scope();
    for s in then_body {
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap_then);
    ctx.emit(IrOp::Branch(lbl_end));

    ctx.emit(IrOp::Label(lbl_else));
    lower_if_from_existing_comparison(ctx, *nested_op, nested_then, nested_else.as_deref())?;
    ctx.emit(IrOp::Label(lbl_end));
    Ok(true)
}

fn lower_if_from_existing_comparison(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    then_body: &[Stmt],
    else_body: Option<&[Stmt]>,
) -> Result<()> {
    if let Some(else_stmts) = else_body {
        let lbl_else = ctx.alloc_label();
        let lbl_end = ctx.alloc_label();
        ctx.emit(IrOp::BranchCond(
            comparison_branch_cond(op, false),
            lbl_else,
        ));
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
        ctx.emit(IrOp::BranchCond(comparison_branch_cond(op, false), lbl_end));
        let snap_then = ctx.snapshot_scope();
        for s in then_body {
            lower_stmt(ctx, s)?;
        }
        ctx.restore_scope(snap_then);
        ctx.emit(IrOp::Label(lbl_end));
    }
    Ok(())
}

fn expr_reusable_for_comparison(expr: &Expr, ctx: &LowerCtx) -> bool {
    if expr_type(expr, ctx)
        .map(|ty| resolve_type(&ty, ctx).is_volatile())
        .unwrap_or(false)
    {
        return false;
    }
    match expr {
        Expr::IntLit(..)
        | Expr::FloatLit(_)
        | Expr::ImagLit(_)
        | Expr::StringLit(_)
        | Expr::WideStringLit(_)
        | Expr::CharLit(_)
        | Expr::Ident(_)
        | Expr::Sizeof(_) => true,
        Expr::Unary { operand, .. }
        | Expr::Cast(_, operand)
        | Expr::Deref(operand)
        | Expr::AddrOf(operand)
        | Expr::RealPart(operand)
        | Expr::ImagPart(operand) => expr_reusable_for_comparison(operand, ctx),
        Expr::Binary { lhs, rhs, .. } | Expr::Index(lhs, rhs) => {
            expr_reusable_for_comparison(lhs, ctx) && expr_reusable_for_comparison(rhs, ctx)
        }
        Expr::Member(base, _) | Expr::Arrow(base, _) => expr_reusable_for_comparison(base, ctx),
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            expr_reusable_for_comparison(cond, ctx)
                && expr_reusable_for_comparison(then_expr, ctx)
                && expr_reusable_for_comparison(else_expr, ctx)
        }
        Expr::Call { .. }
        | Expr::CallIndirect { .. }
        | Expr::Assign { .. }
        | Expr::PreInc(_)
        | Expr::PreDec(_)
        | Expr::PostInc(_)
        | Expr::PostDec(_)
        | Expr::CompoundAssign { .. }
        | Expr::InitList(_)
        | Expr::Comma(_, _)
        | Expr::DesignatedInit { .. }
        | Expr::ArrayDesignator { .. } => false,
    }
}

fn lower_while(ctx: &mut LowerCtx, cond: &Expr, body: &[Stmt]) -> Result<()> {
    let continue_label = ctx.alloc_label();
    let break_label = ctx.alloc_label();
    let mut assigned = assigned_in_stmts(body);
    collect_assigned_expr(cond, &mut assigned);
    add_address_taken_roots_expr(cond, &mut assigned);
    add_address_taken_roots_in_stmts(body, &mut assigned);
    invalidate_const_locals(ctx, &assigned);

    ctx.emit(IrOp::Label(continue_label));
    lower_branch_if_false(ctx, cond, break_label)?;
    invalidate_const_locals(ctx, &assigned);

    ctx.loop_stack.push(LoopContext {
        break_label,
        continue_label: Some(continue_label),
    });
    // C99 6.8.5/5: the loop body is its own block.
    let snap = ctx.snapshot_scope();
    for (idx, s) in body.iter().enumerate() {
        if try_lower_array_literal_alias_decl_only(ctx, s, &body[idx + 1..]) {
            continue;
        }
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap);
    ctx.loop_stack.pop();

    ctx.emit(IrOp::Branch(continue_label));
    ctx.emit(IrOp::Label(break_label));
    invalidate_const_locals(ctx, &assigned);
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
    let mut assigned = assigned_in_stmts(body);
    if let Some(step_expr) = step {
        collect_assigned_expr(step_expr, &mut assigned);
        add_address_taken_roots_expr(step_expr, &mut assigned);
    }
    if let Some(cond_expr) = cond {
        collect_assigned_expr(cond_expr, &mut assigned);
        add_address_taken_roots_expr(cond_expr, &mut assigned);
    }
    if let Some(init_stmt) = init {
        add_address_taken_roots_in_stmt(init_stmt, &mut assigned);
    }
    add_address_taken_roots_in_stmts(body, &mut assigned);
    invalidate_const_locals(ctx, &assigned);

    // C99 6.8.6.2: a `continue` inside a `for` must jump to the
    // post-expression (step), then fall through to the condition test.
    // We therefore split the loop top from the continue target: the
    // top label receives the back-edge after stepping, while the
    // continue label sits just before the step expression so that
    // `continue` runs the step like a normal iteration end.
    let top_label = ctx.alloc_label();
    let continue_label = ctx.alloc_label();
    let break_label = ctx.alloc_label();

    ctx.emit(IrOp::Label(top_label));
    if let Some(cond_expr) = cond {
        lower_branch_if_false(ctx, cond_expr, break_label)?;
    }

    ctx.loop_stack.push(LoopContext {
        break_label,
        continue_label: Some(continue_label),
    });
    // The loop body is itself a nested block.
    let snap_body = ctx.snapshot_scope();
    for (idx, s) in body.iter().enumerate() {
        if try_lower_array_literal_alias_decl_only(ctx, s, &body[idx + 1..]) {
            continue;
        }
        lower_stmt(ctx, s)?;
    }
    ctx.restore_scope(snap_body);
    ctx.loop_stack.pop();

    ctx.emit(IrOp::Label(continue_label));
    if let Some(step_expr) = step {
        lower_expr(ctx, step_expr)?;
    }
    ctx.emit(IrOp::Branch(top_label));
    ctx.emit(IrOp::Label(break_label));
    ctx.restore_scope(snap_for);
    invalidate_const_locals(ctx, &assigned);
    Ok(())
}

fn lower_do_while(ctx: &mut LowerCtx, body: &[Stmt], cond: &Expr) -> Result<()> {
    // C99 6.8.6.2: `continue` in a do-while must jump to the
    // controlling condition, not back to the top of the body.
    let top_label = ctx.alloc_label();
    let continue_label = ctx.alloc_label();
    let break_label = ctx.alloc_label();
    let mut assigned = assigned_in_stmts(body);
    collect_assigned_expr(cond, &mut assigned);
    add_address_taken_roots_expr(cond, &mut assigned);
    add_address_taken_roots_in_stmts(body, &mut assigned);
    invalidate_const_locals(ctx, &assigned);

    ctx.emit(IrOp::Label(top_label));

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

    ctx.emit(IrOp::Label(continue_label));
    lower_branch_if_true(ctx, cond, top_label)?;
    ctx.emit(IrOp::Label(break_label));
    invalidate_const_locals(ctx, &assigned);
    Ok(())
}

/// Collect all CaseLabel / DefaultLabel positions from a switch body,
/// recursing into nested blocks, loops, etc. (Duff's device).
fn collect_case_labels(stmts: &[Stmt], out: &mut Vec<Option<Expr>>) {
    for s in stmts {
        match s {
            Stmt::CaseLabel(e) => out.push(Some(e.clone())),
            Stmt::DefaultLabel => out.push(None),
            Stmt::Block(inner) | Stmt::DeclGroup(inner) => collect_case_labels(inner, out),
            Stmt::If {
                then_body,
                else_body,
                ..
            } => {
                collect_case_labels(then_body, out);
                if let Some(eb) = else_body {
                    collect_case_labels(eb, out);
                }
            }
            Stmt::While { body, .. } | Stmt::For { body, .. } | Stmt::DoWhile { body, .. } => {
                collect_case_labels(body, out)
            }
            Stmt::Switch { .. } => {} // nested switch owns its own labels
            Stmt::Label(_, inner) => {
                collect_case_labels(std::slice::from_ref(inner.as_ref()), out);
            }
            _ => {}
        }
    }
}

fn lower_switch(ctx: &mut LowerCtx, expr: &Expr, body: &[Stmt]) -> Result<()> {
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

fn lower_float_comparison(ctx: &mut LowerCtx, op: BinaryOp, l: VReg, r: VReg) -> Result<VReg> {
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
fn maybe_scale_ptr_rhs(ctx: &mut LowerCtx, op: BinaryOp, target: &Expr, rhs: VReg) -> VReg {
    if !matches!(op, BinaryOp::Add | BinaryOp::Sub) {
        return rhs;
    }
    let Some(ty) = expr_type(target, ctx) else {
        return rhs;
    };
    let Some(pt) = pointee_type(&ty).cloned() else {
        return rhs;
    };
    scale_index_by_elem(ctx, rhs, &pt)
}

/// Pointer arithmetic stride for `++`, `--`, `+=`, `-=` on a pointer
/// whose type is `ty`.  Matches `scale_index_by_elem`: `sizeof(*ty)`
/// in bytes so byte-packed char arrays and `(char *)&int` aliases
/// both walk byte-by-byte through the underlying storage.
/// Returns 1 for non-pointer types.
fn ptr_stride(ty: Option<&Type>, ctx: &LowerCtx) -> i64 {
    let Some(t) = ty else {
        return 1;
    };
    let Some(pt) = pointee_type_resolved(t, ctx) else {
        return 1;
    };
    crate::types::size_bytes_ctx(pt, ctx).max(1) as i64
}

fn lower_inc_dec_64(
    ctx: &mut LowerCtx,
    operand: &Expr,
    is_inc: bool,
    is_pre: bool,
    is_unsigned: bool,
) -> Result<VReg> {
    let one = ctx.alloc_vreg_pair();
    ctx.emit(IrOp::LoadImm64(one, 1));

    let apply = |ctx: &mut LowerCtx, old_val: VReg| -> Result<VReg> {
        let new_val = emit_compound_op_64(
            ctx,
            if is_inc { BinaryOp::Add } else { BinaryOp::Sub },
            old_val,
            one,
            is_unsigned,
        )?;
        Ok(new_val)
    };

    match operand {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                clear_const_local(ctx, name);
                let old_val = match storage {
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
                let new_val = apply(ctx, old_val)?;
                match storage {
                    LocalStorage::Stack(offset) => {
                        ctx.emit(IrOp::Store64(new_val, 0, offset as i32));
                    }
                    LocalStorage::Reg(vreg) => {
                        ctx.emit(IrOp::Copy(vreg, new_val));
                        ctx.emit(IrOp::Copy(vreg + 1, new_val + 1));
                    }
                    LocalStorage::Static(ref sym) => {
                        ctx.emit(IrOp::WriteGlobal64(new_val, sym.clone()));
                    }
                }
                Ok(if is_pre { new_val } else { old_val })
            } else if ctx.globals.contains_key(name) {
                let old_val = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::ReadGlobal64(old_val, name.clone()));
                let new_val = apply(ctx, old_val)?;
                ctx.emit(IrOp::WriteGlobal64(new_val, name.clone()));
                Ok(if is_pre { new_val } else { old_val })
            } else {
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
            }
        }
        Expr::Deref(inner) => {
            let ptr = lower_expr(ctx, inner)?;
            let old_val = ctx.alloc_vreg_pair();
            ctx.emit(IrOp::Load64(old_val, ptr, 0));
            let new_val = apply(ctx, old_val)?;
            ctx.emit(IrOp::Store64(new_val, ptr, 0));
            Ok(if is_pre { new_val } else { old_val })
        }
        Expr::Index(..) | Expr::Member(..) | Expr::Arrow(..) => {
            let addr = lower_lvalue_addr(ctx, operand)?;
            let old_val = if matches!(operand, Expr::Member(..) | Expr::Arrow(..))
                && lvalue_needs_unaligned_word_access(operand, ctx)
            {
                emit_unaligned_longlong_load(ctx, addr)
            } else {
                let old_val = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::Load64(old_val, addr, 0));
                old_val
            };
            let new_val = apply(ctx, old_val)?;
            if matches!(operand, Expr::Member(..) | Expr::Arrow(..))
                && lvalue_needs_unaligned_word_access(operand, ctx)
            {
                emit_unaligned_longlong_store(ctx, addr, new_val);
            } else {
                ctx.emit(IrOp::Store64(new_val, addr, 0));
            }
            Ok(if is_pre { new_val } else { old_val })
        }
        _ => Err(Error::NotImplemented(
            "increment/decrement of complex expression".into(),
        )),
    }
}

fn lower_inc_dec(ctx: &mut LowerCtx, operand: &Expr, is_inc: bool, is_pre: bool) -> Result<VReg> {
    let operand_ty = expr_type(operand, ctx);
    if let Some(ref ty) = operand_ty {
        if ty_is_long_long(ty, ctx) {
            return lower_inc_dec_64(ctx, operand, is_inc, is_pre, ty_is_unsigned(ty, ctx));
        }
    }
    let stride = ptr_stride(operand_ty.as_ref(), ctx);
    match operand {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                let folded_const = ctx.const_locals.get(name).copied().map(|old| {
                    if is_inc {
                        old.wrapping_add(stride)
                    } else {
                        old.wrapping_sub(stride)
                    }
                });
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
                        // Normalise narrow signed/unsigned scalars: a
                        // static `int8_t c = 0xE1;` lives in a full DM
                        // word and the high bits depend on whether
                        // initialisation or a previous write was the
                        // last touch. Without normalisation, ++c on a
                        // not-yet-written slot reads 225 instead of -31
                        // and produces 226 instead of -30.
                        if let Some(ty) = ctx.local_types.get(name).cloned() {
                            narrow_normalize_load(ctx, dst, &ty)
                        } else {
                            dst
                        }
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
                // Truncate the post-inc value back to the declared
                // narrow type.  The store-side uniformly sign-extends
                // signed narrow types so the in-memory representation
                // stays in canonical form for the next reader.
                let local_ty = ctx.local_types.get(name).cloned();
                let new_val = if let Some(ref ty) = local_ty {
                    coerce_vreg(ctx, new_val, ty)
                } else {
                    new_val
                };
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
                if let Some(value) = folded_const {
                    let value = local_ty
                        .as_ref()
                        .map_or(value, |ty| const_int_to_type(ctx, value, ty));
                    ctx.const_locals.insert(name.clone(), value);
                    ctx.const_float_locals.remove(name);
                    ctx.const_bitfield_locals
                        .retain(|(base, _), _| base != name);
                } else {
                    clear_const_local(ctx, name);
                }
                if is_pre {
                    Ok(new_val)
                } else {
                    Ok(old_val)
                }
            } else if ctx.globals.contains_key(name) {
                // Global variable increment/decrement
                let old_val = ctx.alloc_vreg();
                ctx.emit(IrOp::ReadGlobal(old_val, name.clone()));
                let glob_ty = ctx.globals.get(name).cloned();
                let old_val = if let Some(ref ty) = glob_ty {
                    narrow_normalize_load(ctx, old_val, ty)
                } else {
                    old_val
                };
                let one = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(one, stride));
                let new_val = ctx.alloc_vreg();
                if is_inc {
                    ctx.emit(IrOp::Add(new_val, old_val, one));
                } else {
                    ctx.emit(IrOp::Sub(new_val, old_val, one));
                }
                let new_val = if let Some(ref ty) = glob_ty {
                    coerce_vreg(ctx, new_val, ty)
                } else {
                    new_val
                };
                ctx.emit(IrOp::StoreGlobal(new_val, name.clone()));
                if is_pre {
                    Ok(new_val)
                } else {
                    Ok(old_val)
                }
            } else {
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
            }
        }
        Expr::Deref(_) | Expr::Index(..) | Expr::Member(..) | Expr::Arrow(..) => {
            clear_all_const_locals(ctx);
            let addr = lower_lvalue_addr(ctx, operand)?;
            let old_val = if let Some(ref ty) = operand_ty {
                if is_byte_scalar(ty, ctx) {
                    emit_byte_load(ctx, addr, !ty_is_unsigned(ty, ctx))
                } else if is_short_scalar(ty, ctx) {
                    if lvalue_short_access_may_be_unaligned(operand, ctx) {
                        emit_unaligned_short_load(ctx, addr, !ty_is_unsigned(ty, ctx))
                    } else {
                        emit_short_load(ctx, addr, !ty_is_unsigned(ty, ctx))
                    }
                } else if is_plain_32bit_scalar(ty, ctx)
                    && lvalue_needs_unaligned_word_access(operand, ctx)
                {
                    emit_unaligned_word_load(ctx, addr)
                } else {
                    let old_val = ctx.alloc_vreg();
                    ctx.emit(IrOp::Load(old_val, addr, 0));
                    old_val
                }
            } else {
                let old_val = ctx.alloc_vreg();
                ctx.emit(IrOp::Load(old_val, addr, 0));
                old_val
            };
            let one = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(one, stride));
            let new_val = ctx.alloc_vreg();
            if is_inc {
                ctx.emit(IrOp::Add(new_val, old_val, one));
            } else {
                ctx.emit(IrOp::Sub(new_val, old_val, one));
            }
            let new_val = if let Some(ref ty) = operand_ty {
                coerce_vreg(ctx, new_val, ty)
            } else {
                new_val
            };
            if let Some(ref ty) = operand_ty {
                if is_byte_scalar(ty, ctx) {
                    emit_byte_store(ctx, addr, new_val);
                } else if is_short_scalar(ty, ctx) {
                    if lvalue_short_access_may_be_unaligned(operand, ctx) {
                        emit_unaligned_short_store(ctx, addr, new_val);
                    } else {
                        emit_short_store(ctx, addr, new_val);
                    }
                } else if is_plain_32bit_scalar(ty, ctx)
                    && lvalue_needs_unaligned_word_access(operand, ctx)
                {
                    emit_unaligned_word_store(ctx, addr, new_val);
                } else {
                    ctx.emit(IrOp::Store(new_val, addr, 0));
                }
            } else {
                ctx.emit(IrOp::Store(new_val, addr, 0));
            }
            if is_pre {
                Ok(new_val)
            } else {
                Ok(old_val)
            }
        }
        _ => Err(Error::NotImplemented(
            "increment/decrement of complex expression".into(),
        )),
    }
}

/// Emit the binary operation for a 64-bit compound assignment, given loaded
/// lhs and rhs 64-bit vreg pairs. Returns the result 64-bit vreg pair.
fn emit_compound_op_64(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    lhs: VReg,
    rhs: VReg,
    is_unsigned: bool,
) -> Result<VReg> {
    let result = ctx.alloc_vreg_pair();
    match op {
        BinaryOp::Add => ctx.emit(IrOp::Add64(result, lhs, rhs)),
        BinaryOp::Sub => ctx.emit(IrOp::Sub64(result, lhs, rhs)),
        BinaryOp::Mul => ctx.emit(IrOp::Mul64(result, lhs, rhs)),
        BinaryOp::Div => {
            if is_unsigned {
                ctx.emit(IrOp::UDiv64(result, lhs, rhs));
            } else {
                lower_signed_divmod_64(ctx, result, lhs, rhs, false);
            }
        }
        BinaryOp::Mod => {
            if is_unsigned {
                ctx.emit(IrOp::UMod64(result, lhs, rhs));
            } else {
                lower_signed_divmod_64(ctx, result, lhs, rhs, true);
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
fn emit_compound_op(
    ctx: &mut LowerCtx,
    op: BinaryOp,
    lhs: VReg,
    rhs: VReg,
    is_unsigned: bool,
) -> Result<VReg> {
    let lhs_float = ctx.is_float_vreg(lhs);
    let rhs_float = ctx.is_float_vreg(rhs);
    if lhs_float || rhs_float {
        let lhs = if lhs_float {
            lhs
        } else {
            let conv = ctx.alloc_vreg_float();
            ctx.emit(IrOp::IntToFloat(conv, lhs));
            conv
        };
        let rhs = if rhs_float {
            rhs
        } else {
            let conv = ctx.alloc_vreg_float();
            ctx.emit(IrOp::IntToFloat(conv, rhs));
            conv
        };
        let result = ctx.alloc_vreg_float();
        match op {
            BinaryOp::Add => ctx.emit(IrOp::FAdd(result, lhs, rhs)),
            BinaryOp::Sub => ctx.emit(IrOp::FSub(result, lhs, rhs)),
            BinaryOp::Mul => ctx.emit(IrOp::FMul(result, lhs, rhs)),
            BinaryOp::Div => ctx.emit(IrOp::FDiv(result, lhs, rhs)),
            BinaryOp::Mod => {
                let quot = ctx.alloc_vreg_float();
                ctx.emit(IrOp::FDiv(quot, lhs, rhs));
                let trunc = ctx.alloc_vreg();
                ctx.emit(IrOp::FloatToInt(trunc, quot));
                let trunc_f = ctx.alloc_vreg_float();
                ctx.emit(IrOp::IntToFloat(trunc_f, trunc));
                let prod = ctx.alloc_vreg_float();
                ctx.emit(IrOp::FMul(prod, rhs, trunc_f));
                ctx.emit(IrOp::FSub(result, lhs, prod));
            }
            _ => {
                return Err(Error::NotImplemented(format!(
                    "float compound assignment op: {op:?}"
                )));
            }
        }
        return Ok(result);
    }

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
    let target_ty = expr_type(target, ctx);
    let target_is_float = target_ty.as_ref().is_some_and(|t| t.is_float());
    let target_is_64 = target_ty.as_ref().is_some_and(|t| ty_is_long_long(t, ctx));
    if target_is_64 {
        return lower_compound_assign_64(ctx, op, target, value, is_unsigned);
    }

    match target {
        Expr::Ident(name) => {
            if let Some(storage) = ctx.locals.get(name).cloned() {
                if !target_is_float && !target_is_64 {
                    if let (Some(lhs_const), Some(rhs_const)) = (
                        ctx.const_locals.get(name).copied(),
                        const_local_i64_expr(ctx, value),
                    ) {
                        if let Some(folded) =
                            eval_integer_compound(op, lhs_const, rhs_const, is_unsigned)
                        {
                            let result = ctx.alloc_vreg();
                            ctx.emit(IrOp::LoadImm(result, folded));
                            let mut result = result;
                            if let Some(ref ty) = target_ty {
                                result = coerce_vreg(ctx, result, ty);
                            }
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
                            let folded = target_ty
                                .as_ref()
                                .map_or(folded, |ty| const_int_to_type(ctx, folded, ty));
                            ctx.const_locals.insert(name.clone(), folded);
                            ctx.const_float_locals.remove(name);
                            ctx.const_bitfield_locals
                                .retain(|(base, _), _| base != name);
                            return Ok(result);
                        }
                    }
                }
                let lhs = match storage {
                    LocalStorage::Stack(offset) => {
                        let dst = if target_is_float {
                            ctx.alloc_vreg_float()
                        } else {
                            ctx.alloc_vreg()
                        };
                        ctx.emit(IrOp::Load(dst, 0, offset as i32));
                        dst
                    }
                    LocalStorage::Reg(vreg) => {
                        let dst = if target_is_float {
                            ctx.alloc_vreg_float()
                        } else {
                            ctx.alloc_vreg()
                        };
                        ctx.emit(IrOp::Copy(dst, vreg));
                        dst
                    }
                    LocalStorage::Static(ref sym) => {
                        let dst = if target_is_float {
                            ctx.alloc_vreg_float()
                        } else {
                            ctx.alloc_vreg()
                        };
                        ctx.emit(IrOp::ReadGlobal(dst, sym.clone()));
                        if !target_is_float {
                            if let Some(ty) = ctx.local_types.get(name).cloned() {
                                narrow_normalize_load(ctx, dst, &ty)
                            } else {
                                dst
                            }
                        } else {
                            dst
                        }
                    }
                };
                let rhs = lower_expr(ctx, value)?;
                let rhs = maybe_scale_ptr_rhs(ctx, op, target, rhs);
                let mut result = emit_compound_op(ctx, op, lhs, rhs, is_unsigned)?;
                if let Some(ref ty) = target_ty {
                    result = coerce_vreg(ctx, result, ty);
                }
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
                clear_const_local(ctx, name);
                Ok(result)
            } else if ctx.globals.contains_key(name) {
                // Compound assignment to a global variable.
                let lhs = if target_is_float {
                    ctx.alloc_vreg_float()
                } else {
                    ctx.alloc_vreg()
                };
                ctx.emit(IrOp::ReadGlobal(lhs, name.clone()));
                let lhs = if !target_is_float {
                    if let Some(ty) = ctx.globals.get(name).cloned() {
                        narrow_normalize_load(ctx, lhs, &ty)
                    } else {
                        lhs
                    }
                } else {
                    lhs
                };
                let rhs = lower_expr(ctx, value)?;
                let rhs = maybe_scale_ptr_rhs(ctx, op, target, rhs);
                let mut result = emit_compound_op(ctx, op, lhs, rhs, is_unsigned)?;
                if let Some(ref ty) = target_ty {
                    result = coerce_vreg(ctx, result, ty);
                }
                ctx.emit(IrOp::StoreGlobal(result, name.clone()));
                Ok(result)
            } else {
                Err(Error::NotImplemented(format!("undefined variable: {name}")))
            }
        }
        Expr::Deref(_) | Expr::Index(..) | Expr::Member(..) | Expr::Arrow(..) => {
            let folded_bitfield = member_bitfield_info(target, ctx).and_then(|info| {
                let key = direct_local_member_key(target)?;
                let lhs_const = ctx.const_bitfield_locals.get(&key).copied()?;
                let rhs_const = const_local_i64_expr(ctx, value)?;
                let folded = eval_integer_compound(op, lhs_const, rhs_const, is_unsigned)?;
                Some((key, const_int_to_bitfield(folded, &info), info))
            });
            if folded_bitfield.is_some() {
                ctx.const_locals.clear();
                ctx.const_float_locals.clear();
            } else {
                clear_all_const_locals(ctx);
            }
            let addr = lower_lvalue_addr(ctx, target)?;
            let bitfield = member_bitfield_info(target, ctx);
            if let Some((key, folded, ref info)) = folded_bitfield {
                let result = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(result, folded));
                emit_bitfield_store(ctx, addr, result, info);
                ctx.const_bitfield_locals.insert(key, folded);
                return Ok(result);
            }
            let lhs = if let Some(ref ty) = target_ty {
                if let Some(ref info) = bitfield {
                    emit_bitfield_load(ctx, addr, info)
                } else if is_byte_scalar(ty, ctx) {
                    emit_byte_load(ctx, addr, !ty_is_unsigned(ty, ctx))
                } else if is_short_scalar(ty, ctx) {
                    if lvalue_short_access_may_be_unaligned(target, ctx) {
                        emit_unaligned_short_load(ctx, addr, !ty_is_unsigned(ty, ctx))
                    } else {
                        emit_short_load(ctx, addr, !ty_is_unsigned(ty, ctx))
                    }
                } else if is_plain_32bit_scalar(ty, ctx)
                    && lvalue_needs_unaligned_word_access(target, ctx)
                {
                    emit_unaligned_word_load(ctx, addr)
                } else if target_is_float {
                    let lhs = ctx.alloc_vreg_float();
                    ctx.emit(IrOp::Load(lhs, addr, 0));
                    lhs
                } else {
                    let lhs = ctx.alloc_vreg();
                    ctx.emit(IrOp::Load(lhs, addr, 0));
                    lhs
                }
            } else if target_is_float {
                let lhs = ctx.alloc_vreg_float();
                ctx.emit(IrOp::Load(lhs, addr, 0));
                lhs
            } else {
                let lhs = ctx.alloc_vreg();
                ctx.emit(IrOp::Load(lhs, addr, 0));
                lhs
            };
            let rhs = lower_expr(ctx, value)?;
            let rhs = maybe_scale_ptr_rhs(ctx, op, target, rhs);
            let mut result = emit_compound_op(ctx, op, lhs, rhs, is_unsigned)?;
            if let Some(ref ty) = target_ty {
                result = coerce_vreg(ctx, result, ty);
            }
            if let Some(ref info) = bitfield {
                emit_bitfield_store(ctx, addr, result, info);
                return Ok(result);
            }
            if let Some(ref ty) = target_ty {
                if is_byte_scalar(ty, ctx) {
                    emit_byte_store(ctx, addr, result);
                    return Ok(result);
                }
                if is_short_scalar(ty, ctx) {
                    if lvalue_short_access_may_be_unaligned(target, ctx) {
                        emit_unaligned_short_store(ctx, addr, result);
                    } else {
                        emit_short_store(ctx, addr, result);
                    }
                    return Ok(result);
                }
                if is_plain_32bit_scalar(ty, ctx) && lvalue_needs_unaligned_word_access(target, ctx)
                {
                    emit_unaligned_word_store(ctx, addr, result);
                    return Ok(result);
                }
            }
            ctx.emit(IrOp::Store(result, addr, 0));
            Ok(result)
        }
        _ => {
            clear_all_const_locals(ctx);
            let addr = lower_lvalue_addr(ctx, target)?;
            let lhs = if target_is_float {
                ctx.alloc_vreg_float()
            } else {
                ctx.alloc_vreg()
            };
            ctx.emit(IrOp::Load(lhs, addr, 0));
            let rhs_val = lower_expr(ctx, value)?;
            let rhs_val = maybe_scale_ptr_rhs(ctx, op, target, rhs_val);
            let mut result = emit_compound_op(ctx, op, lhs, rhs_val, is_unsigned)?;
            if let Some(ref ty) = target_ty {
                result = coerce_vreg(ctx, result, ty);
            }
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
            let use_unaligned = matches!(target, Expr::Member(..) | Expr::Arrow(..))
                && lvalue_needs_unaligned_word_access(target, ctx);
            let lhs = if use_unaligned {
                emit_unaligned_longlong_load(ctx, addr)
            } else {
                let lhs = ctx.alloc_vreg_pair();
                ctx.emit(IrOp::Load64(lhs, addr, 0));
                lhs
            };
            let rhs = load_rhs(ctx)?;
            let result = emit_compound_op_64(ctx, op, lhs, rhs, is_unsigned)?;
            if use_unaligned {
                emit_unaligned_longlong_store(ctx, addr, result);
            } else {
                ctx.emit(IrOp::Store64(result, addr, 0));
            }
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

    // Resolve struct-field metadata once (used for `.field = v` designators).
    let resolved_ty = resolve_type(ty, ctx);
    let resolved_pack = aggregate_pack(&resolved_ty, ctx);
    let struct_fields: Option<Vec<(String, Type)>> =
        resolve_struct_fields(&resolved_ty, ctx).map(|f| f.to_vec());

    // Aggregate: zero-fill every word first so holes between designators
    // (`int a[5] = {[2]=7};` leaves a[0..2] and a[3..] at 0) are set.
    // Fully covered full-word arrays do not need that defensive fill:
    // each element store overwrites the whole object.
    if !full_word_array_init_covers_all(ctx, items, &resolved_ty) {
        let zero = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(zero, 0));
        for w in 0..num_words {
            emit_frame_slot_store_indirect(ctx, slot_base + w, zero);
        }
    }

    // Byte-packed narrow-element arrays (any dimensionality) where the
    // leaf scalar is `char` (1 byte) or `short` (2 bytes).  These pack
    // contiguously across all dimensions: `int16_t m[2][3]` is six
    // contiguous shorts in three 32-bit words, not two padded 8-byte
    // rows.  Without this dispatch the generic positional loop would
    // advance one word per element regardless of leaf width and write
    // past the stack reservation that `size_words_ctx` computed for
    // the (now byte-packed) array.  Mirrors the `build_init_words`
    // file-scope flatten path so locals and globals see the same
    // layout.
    if let Type::Array(_, _) = resolved_ty.unqualified() {
        if let Some(leaf_bytes) = narrow_array_leaf_bytes(&resolved_ty, ctx) {
            if leaf_bytes == 1 {
                lower_byte_array_init(ctx, items, ty, slot_base, num_words)?;
                return Ok(());
            }
            if leaf_bytes == 2 {
                lower_short_array_init(ctx, items, ty, slot_base, num_words)?;
                return Ok(());
            }
        }
        if array_needs_byte_stride_flatten(&resolved_ty, ctx) {
            let base_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(
                base_addr,
                (slot_base + num_words - 1) as i32,
            ));
            let init = Expr::InitList(items.to_vec());
            lower_subword_aggregate_init(ctx, &init, ty, base_addr, 0)?;
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
            resolved_pack,
            slot_base,
            num_words,
        )?;
        return Ok(());
    }

    // Element stride (in words) for arrays: each positional step or
    // `[n]` designator advances by `elem_words` words.  For structs the
    // cursor tracks the field index and we resolve to byte offsets.
    let elem_words: u32 = match resolved_ty.unqualified() {
        Type::Array(elem_ty, _) => crate::types::size_bytes_ctx(elem_ty, ctx)
            .div_ceil(4)
            .max(1),
        _ => 1,
    };

    // Cursor is the next element index (for arrays) or field index
    // (for structs).  Designators reset the cursor; positional items
    // advance it.  The element-array path additionally supports brace
    // elision (C99 6.7.8 p20-21): a positional item that targets a
    // nested aggregate and is itself NOT a brace-enclosed init list
    // consumes as many subsequent flat items as are needed to fill the
    // inner aggregate, recursively.
    let elem_is_aggregate = match resolved_ty.unqualified() {
        Type::Array(elem_ty, _) => {
            let resolved_elem = resolve_type(elem_ty, ctx);
            matches!(
                resolved_elem.unqualified(),
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            )
        }
        _ => false,
    };

    let mut cursor: u32 = 0;
    let mut i = 0usize;
    while i < items.len() {
        let item = &items[i];
        // Handle designators first (they don't participate in brace
        // elision — a designator names exactly one element / field).
        let (word_off, inner_expr, next_cursor, consumed) = match item {
            Expr::ArrayDesignator { index, value } => {
                let idx = match index.as_ref() {
                    Expr::IntLit(v, _) => *v as u32,
                    _ => cursor,
                };
                let w = idx.saturating_mul(elem_words);
                (w, value.as_ref(), idx.saturating_add(1), 1usize)
            }
            Expr::DesignatedInit { field, value } => {
                if let Some(fields) = struct_fields.as_deref() {
                    if let Some((byte_off, _)) =
                        struct_field_offset(fields, field, resolved_pack, ctx)
                    {
                        let fidx = fields
                            .iter()
                            .position(|(n, _)| n == field)
                            .unwrap_or(cursor as usize) as u32;
                        // In a union every member starts at offset 0;
                        // `struct_field_offset` walks the fields like a
                        // struct, so for non-first members it returns the
                        // sum of preceding sizes — wrong for a union.
                        // Override with offset 0 so `.f = v` writes v at
                        // the union's base word.
                        let word_off = if is_union_type(&resolved_ty) {
                            0
                        } else {
                            byte_off / 4
                        };
                        (word_off, value.as_ref(), fidx.saturating_add(1), 1usize)
                    } else {
                        // Unknown field: fall back to cursor-based store.
                        (
                            cursor.saturating_mul(elem_words),
                            value.as_ref(),
                            cursor.saturating_add(1),
                            1usize,
                        )
                    }
                } else {
                    (
                        cursor.saturating_mul(elem_words),
                        value.as_ref(),
                        cursor.saturating_add(1),
                        1usize,
                    )
                }
            }
            other => {
                let w = cursor.saturating_mul(elem_words);
                (w, other, cursor.saturating_add(1), 1usize)
            }
        };

        if word_off >= num_words {
            cursor = next_cursor;
            i += consumed;
            continue;
        }

        // For aggregates the deepest slot holds word 0; element at word
        // offset `w` sits at `slot_base + num_words - 1 - w`.
        let elem_slot = slot_base + num_words - 1 - word_off;

        // Brace-enclosed nested initializer (or compound literal with
        // braces): the brace explicitly delimits the inner aggregate, so
        // recurse on just that sub-list.  C99 6.5.2.5 treats `(T){...}`
        // identically to a bare `{...}` in this position.
        let nested_items = match inner_expr {
            Expr::InitList(items) => Some(items.as_slice()),
            Expr::Cast(_, boxed) => match boxed.as_ref() {
                Expr::InitList(items) => Some(items.as_slice()),
                _ => None,
            },
            _ => None,
        };
        if let (Some(inner_items), Type::Array(elem_ty, _)) =
            (nested_items, resolved_ty.unqualified())
        {
            let resolved_elem = resolve_type(elem_ty, ctx);
            if matches!(
                resolved_elem.unqualified(),
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            ) {
                let inner_words = crate::types::size_words_ctx(&resolved_elem, ctx).max(1);
                let inner_base = elem_slot + 1 - inner_words;
                lower_aggregate_init(ctx, inner_items, elem_ty, inner_base, inner_words, true)?;
                cursor = next_cursor;
                i += consumed;
                continue;
            }
        }

        // Brace-enclosed initializer for a union: the inner brace runs
        // against the first union member (C99 6.7.8 -- the first named
        // member receives the initializer when no designator is used).
        // Without this branch the InitList falls through to
        // `lower_expr` below, which treats it like a scalar and stores
        // only the first sub-expression at offset 0, leaving the rest
        // of the member zeroed -- exactly what csmith 4f88006f
        // exposed for `union U1 v = {{a, b, c}}` where the first
        // member is a `struct S0` with 64-bit fields.
        if let (Some(inner_items), Type::Union { .. }) = (nested_items, resolved_ty.unqualified()) {
            if let Some(union_fields) = resolve_struct_fields(&resolved_ty, ctx) {
                if let Some((_, fty)) = union_fields.first() {
                    let fty = fty.clone();
                    let inner_words = crate::types::size_words_ctx(&fty, ctx).max(1);
                    // Union members all start at byte offset 0, so the
                    // first member's deepest slot coincides with the
                    // union's deepest slot.
                    let inner_base = slot_base + num_words - inner_words;
                    lower_aggregate_init(ctx, inner_items, &fty, inner_base, inner_words, true)?;
                    cursor = next_cursor;
                    i += consumed;
                    continue;
                }
            }
        }

        // Scalar initializer for a union initializes the selected member
        // (the first member for positional initializers) as if by assignment.
        // This matters when the member is wider than the expression, e.g.
        // `union U { long long x; } u = {-8L};`: `-8L` is a 32-bit long
        // but must be sign-extended into the 64-bit union member.
        if is_union_type(&resolved_ty) {
            let target_field_ty = match item {
                Expr::DesignatedInit { field, .. } => struct_fields
                    .as_deref()
                    .and_then(|fields| fields.iter().find(|(name, _)| name == field))
                    .map(|(_, fty)| fty.clone()),
                _ if cursor == 0 => struct_fields
                    .as_deref()
                    .and_then(|fields| fields.first())
                    .map(|(_, fty)| fty.clone()),
                _ => None,
            };
            if let Some(fty) = target_field_ty {
                if !is_aggregate_type(&fty, ctx) {
                    let val = lower_expr(ctx, inner_expr)?;
                    let val = coerce_scalar_to_type(ctx, val, inner_expr, &fty);
                    emit_frame_slot_store_indirect(ctx, elem_slot, val);
                    if ctx.is_64bit_vreg(val) && word_off + 1 < num_words {
                        emit_frame_slot_store_indirect(ctx, elem_slot - 1, val + 1);
                    }
                    cursor = next_cursor;
                    i += consumed;
                    continue;
                }
            }
        }

        // Chained designator into an aggregate element: e.g.
        // `[i].field = v` produces ArrayDesignator { i, DesignatedInit { ... }}
        // and `[i][j] = v` produces ArrayDesignator { i, ArrayDesignator { ... }}.
        // The `value` is itself a designator that must be applied within the
        // array element (which is itself an aggregate).  Recurse into
        // lower_aggregate_init for that element with a single-item slice
        // containing the inner designator so its own designator/offset logic
        // runs against the element's type.  Skip the per-element zero-fill
        // (preserving sibling writes from earlier items targeting the same
        // index) by inlining the designator dispatch via a single-item list
        // — `lower_aggregate_init` would zero the element first, but multiple
        // designators referencing the same outer index (e.g. `[0].x` then
        // `[0].y`) need to coexist.  Use a dedicated helper that bypasses
        // the zero-fill.
        if matches!(
            inner_expr,
            Expr::DesignatedInit { .. } | Expr::ArrayDesignator { .. }
        ) {
            if let Type::Array(elem_ty, _) = resolved_ty.unqualified() {
                let resolved_elem = resolve_type(elem_ty, ctx);
                if matches!(
                    resolved_elem.unqualified(),
                    Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
                ) {
                    let inner_words = crate::types::size_words_ctx(&resolved_elem, ctx).max(1);
                    let inner_base = elem_slot + 1 - inner_words;
                    lower_designator_into(ctx, inner_expr, elem_ty, inner_base, inner_words)?;
                    cursor = next_cursor;
                    i += consumed;
                    continue;
                }
            }
        }

        // Brace elision for positional items targeting a nested
        // aggregate: collect the subsequent flat items needed to fill
        // the inner aggregate and recurse.  Designators terminate the
        // run because they belong to the outer aggregate's namespace.
        // Only applies when this is a plain positional item (consumed
        // == 1 and the item is not a designator and has no inner
        // braces — the brace branch above would have caught it).
        if elem_is_aggregate
            && consumed == 1
            && !matches!(
                item,
                Expr::ArrayDesignator { .. } | Expr::DesignatedInit { .. }
            )
        {
            if let Type::Array(elem_ty, _) = resolved_ty.unqualified() {
                let resolved_elem = resolve_type(elem_ty, ctx);
                let inner_words = crate::types::size_words_ctx(&resolved_elem, ctx).max(1);
                let inner_base = elem_slot + 1 - inner_words;
                // Gather subsequent flat (non-designator, non-brace)
                // items: the inner aggregate's own recursive call will
                // stop consuming once the inner aggregate is full and
                // simply ignore extras.  We need a precise count of how
                // many outer-list items belong to this inner element so
                // the outer cursor advances correctly.  Walk a
                // shadow-aggregate filler to compute that count.
                let take = count_flat_items_for(&resolved_elem, &items[i..], ctx);
                let slice = &items[i..i + take];
                lower_aggregate_init(ctx, slice, elem_ty, inner_base, inner_words, true)?;
                cursor = next_cursor;
                i += take;
                continue;
            }
        }

        let val = lower_expr(ctx, inner_expr)?;
        emit_frame_slot_store_indirect(ctx, elem_slot, val);
        // For a 64-bit scalar init landing in a slot that has room for
        // a second word (e.g. `union U { long long a; ... } v = {x};`
        // where U is two words wide), store the high half too --
        // otherwise the second word stays zero from the initial
        // zero-fill, and subsequent reads of the 64-bit field see
        // truncated data.  Csmith case 5203b3a4 exposed this via
        // `union U1 l_184 = {0xFFA272E7E9FB3AEFLL};` inside func_10.
        if ctx.is_64bit_vreg(val) && word_off + 1 < num_words {
            emit_frame_slot_store_indirect(ctx, elem_slot - 1, val + 1);
        }
        cursor = next_cursor;
        i += consumed;
    }
    Ok(())
}

/// Access one stack aggregate word through the same byte-addressable
/// indirect path used by array/member lvalue reads. Direct frame-relative
/// `Store/Load(..., base = 0, slot)` emits a different SHARC DM form and
/// does not reliably alias Type-3 indirect accesses in `-char-size-8` mode.
fn emit_frame_slot_store_indirect(ctx: &mut LowerCtx, slot: u32, val: VReg) {
    let addr = ctx.alloc_vreg_ptr();
    ctx.emit(IrOp::FrameAddr(addr, slot as i32));
    ctx.emit(IrOp::Store(val, addr, 0));
}

fn emit_frame_slot_load_indirect(ctx: &mut LowerCtx, dst: VReg, slot: u32) {
    let addr = ctx.alloc_vreg_ptr();
    ctx.emit(IrOp::FrameAddr(addr, slot as i32));
    ctx.emit(IrOp::Load(dst, addr, 0));
}

/// Count how many items from a flat init list belong to a single
/// instance of `ty` under C99 brace-elision rules.  A brace-enclosed
/// item (or `(T){...}` compound literal) always consumes exactly one
/// outer slot; bare positional items recurse into nested aggregates,
/// each consuming one leaf scalar slot.  Stops once the aggregate is
/// full or items run out.  Designators inside the run terminate it
/// (a designator re-targets an outer slot, ending brace elision for
/// this inner aggregate).
fn count_flat_items_for(ty: &Type, items: &[Expr], ctx: &mut LowerCtx) -> usize {
    // Compute the number of leaf scalar slots in `ty`.
    fn leaves(ty: &Type, ctx: &mut LowerCtx) -> usize {
        let resolved = resolve_type(ty, ctx);
        match resolved.unqualified() {
            Type::Array(elem, n) => {
                let per = leaves(elem, ctx);
                let count = n.unwrap_or(1);
                per.saturating_mul(count).max(1)
            }
            Type::Struct { .. } => {
                if let Some(fields) = resolve_struct_fields(&resolved, ctx) {
                    let fields: Vec<_> = fields.to_vec();
                    let mut n = 0usize;
                    for field in &fields {
                        if is_anonymous_bitfield_field(field, ctx) {
                            continue;
                        }
                        n = n.saturating_add(leaves(&field.1, ctx));
                    }
                    n.max(1)
                } else {
                    1
                }
            }
            Type::Union { .. } => 1,
            _ => 1,
        }
    }
    let need = leaves(ty, ctx);
    let mut consumed = 0usize;
    let mut filled = 0usize;
    while consumed < items.len() && filled < need {
        match &items[consumed] {
            Expr::ArrayDesignator { .. } | Expr::DesignatedInit { .. } => break,
            Expr::InitList(_) => {
                // A brace-enclosed item fills one nested aggregate slot
                // entirely; conservatively count it as one leaf's worth
                // for the purpose of advancing through the inner type.
                // For our use (rectangular nested arrays), this matches
                // the brace-per-row idiom precisely.
                consumed += 1;
                // Advance by leaves of one inner element of the
                // outermost array dimension if applicable.
                let resolved = resolve_type(ty, ctx);
                let step = match resolved.unqualified() {
                    Type::Array(elem, _) => leaves(elem, ctx),
                    _ => 1,
                };
                filled += step.max(1);
            }
            Expr::Cast(_, boxed) if matches!(boxed.as_ref(), Expr::InitList(_)) => {
                consumed += 1;
                let resolved = resolve_type(ty, ctx);
                let step = match resolved.unqualified() {
                    Type::Array(elem, _) => leaves(elem, ctx),
                    _ => 1,
                };
                filled += step.max(1);
            }
            _ => {
                consumed += 1;
                filled += 1;
            }
        }
    }
    consumed.max(1)
}

/// Walk the leaf scalar of a (possibly multi-dimensional) array type
/// and return its byte size if the leaf is a narrow scalar (`char`,
/// `unsigned char`, `bool`, `short`, `unsigned short`).  Returns None
/// for non-array types or arrays whose leaf is wider than 2 bytes.
/// Used to detect when an aggregate stack init should use byte-packed
/// flattening instead of the generic word-per-element path.
fn narrow_array_leaf_bytes(ty: &Type, ctx: &LowerCtx) -> Option<u32> {
    let mut current = resolve_type(ty, ctx);
    loop {
        match current.unqualified().clone() {
            Type::Array(elem, Some(_)) => {
                current = resolve_type(&elem, ctx);
            }
            other => {
                if matches!(
                    other.unqualified(),
                    Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
                ) {
                    return None;
                }
                let b = crate::types::size_bytes_ctx(&other, ctx);
                if b == 1 || b == 2 {
                    return Some(b);
                }
                return None;
            }
        }
    }
}

fn array_needs_byte_stride_flatten(ty: &Type, ctx: &LowerCtx) -> bool {
    match resolve_type(ty, ctx).unqualified().clone() {
        Type::Array(elem, Some(_)) => {
            let elem = resolve_type(&elem, ctx);
            let elem_is_aggregate = matches!(
                elem.unqualified(),
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            );
            (elem_is_aggregate && !crate::types::size_bytes_ctx(&elem, ctx).is_multiple_of(4))
                || array_needs_byte_stride_flatten(&elem, ctx)
        }
        _ => false,
    }
}

/// Flatten an arbitrarily nested array initializer into leaf-scalar
/// stores, recording each leaf's byte offset within the outermost
/// array and the lowered vreg holding its (already masked) value.
/// `byte_offset` is the starting byte offset of the current sub-array.
/// Designators (`[i] = v`) jump the inner cursor; positional items
/// advance one element each.  Mirrors the file-scope
/// `flatten_narrow_array_init` so locals and globals share the same
/// layout.
fn flatten_narrow_array_local(
    ctx: &mut LowerCtx,
    init: &Expr,
    ty: &Type,
    leaf_bytes: u32,
    byte_offset: u32,
    out: &mut Vec<(u32, VReg)>,
) -> Result<()> {
    let resolved = resolve_type(ty, ctx);
    match resolved.unqualified() {
        Type::Array(elem, Some(_)) => {
            let elem_bytes = crate::types::size_bytes_ctx(elem, ctx);
            let items: &[Expr] = match init {
                Expr::InitList(items) => items.as_slice(),
                _ => {
                    return flatten_narrow_array_local(
                        ctx,
                        init,
                        elem,
                        leaf_bytes,
                        byte_offset,
                        out,
                    );
                }
            };
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
                let inner_off = byte_offset + idx * elem_bytes;
                flatten_narrow_array_local(ctx, inner, elem, leaf_bytes, inner_off, out)?;
                cursor = idx + 1;
            }
            Ok(())
        }
        _ => {
            // Leaf scalar: lower the value and mask to leaf width.
            // C99 6.7.8 permits brace-elided scalar initializers wrapped
            // in extra braces (e.g. `signed char arr[3] = { 0, {1}, 2 };`),
            // which the parser delivers here as a single-element
            // `InitList`.  Peel that one wrapper before lowering;
            // multi-element or empty `InitList` at a scalar slot remains
            // a hard error.  Mirrors the file-scope
            // `flatten_narrow_array_init` peel.
            let scalar = match init {
                Expr::InitList(items) if items.len() == 1 => &items[0],
                Expr::InitList(_) => {
                    return Err(Error::Compile {
                        msg: format!(
                            "narrow array element requires a scalar initializer; \
                             got {init:?}"
                        ),
                    });
                }
                other => other,
            };
            let val = lower_expr(ctx, scalar)?;
            let mask_v = ctx.alloc_vreg();
            let mask = if leaf_bytes == 1 { 0xFFi64 } else { 0xFFFFi64 };
            ctx.emit(IrOp::LoadImm(mask_v, mask));
            let masked = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(masked, val, mask_v));
            out.push((byte_offset, masked));
            Ok(())
        }
    }
}

/// Initialise a byte-packed narrow-element array (any dimensionality)
/// from an aggregate init list.  Leaf-element stores share a 32-bit
/// word at four byte lanes (1-byte leaf) or two half-word lanes
/// (2-byte leaf).  Designators `[n] = v` write byte index `n *
/// elem_size`; positional items continue from the cursor.  Word
/// storage is written in one `Store` per word, accumulating multiple
/// leaves with shift-and-or.  Used for both `char` (`leaf_bytes=1`)
/// and `short` (`leaf_bytes=2`) leaf types so multi-dim layouts pack
/// contiguously across row boundaries the way cces emits them.
fn lower_narrow_array_init(
    ctx: &mut LowerCtx,
    items: &[Expr],
    ty: &Type,
    slot_base: u32,
    num_words: u32,
    leaf_bytes: u32,
) -> Result<()> {
    // Walk the (possibly nested) init list into a flat list of
    // (byte_offset, leaf_vreg) entries.
    let outer_init = Expr::InitList(items.to_vec());
    let mut entries: Vec<(u32, VReg)> = Vec::new();
    flatten_narrow_array_local(ctx, &outer_init, ty, leaf_bytes, 0, &mut entries)?;

    // Bucket by word index (byte_off / 4).  A missing leaf stays zero
    // from the outer zero-fill that `lower_aggregate_init` emitted.
    let lane_bits: u32 = if leaf_bytes == 1 { 8 } else { 16 };
    let lane_mod: u32 = 4 / leaf_bytes;
    for wi in 0..num_words {
        let slot = slot_base + num_words - 1 - wi;
        let mut word_acc: Option<VReg> = None;
        for &(byte_off, v) in &entries {
            if byte_off / 4 != wi {
                continue;
            }
            let lane_idx = (byte_off / leaf_bytes) % lane_mod;
            let lane = lane_idx * lane_bits;
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
            emit_frame_slot_store_indirect(ctx, slot, w);
        }
    }
    Ok(())
}

/// Local-stack byte-packed init for a `char[]` / `unsigned char[]`
/// array; defers to the unified narrow-array path with a 1-byte leaf.
fn lower_byte_array_init(
    ctx: &mut LowerCtx,
    items: &[Expr],
    ty: &Type,
    slot_base: u32,
    num_words: u32,
) -> Result<()> {
    lower_narrow_array_init(ctx, items, ty, slot_base, num_words, 1)
}

/// Local-stack byte-packed init for a `short[]` / `unsigned short[]`
/// array; defers to the unified narrow-array path with a 2-byte leaf.
fn lower_short_array_init(
    ctx: &mut LowerCtx,
    items: &[Expr],
    ty: &Type,
    slot_base: u32,
    num_words: u32,
) -> Result<()> {
    lower_narrow_array_init(ctx, items, ty, slot_base, num_words, 2)
}

fn add_byte_offset(ctx: &mut LowerCtx, base_addr: VReg, byte_off: u32) -> VReg {
    if byte_off == 0 {
        return base_addr;
    }
    let off = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(off, byte_off as i64));
    let addr = ctx.alloc_vreg();
    ctx.emit(IrOp::Add(addr, base_addr, off));
    addr
}

fn lower_subword_aggregate_init(
    ctx: &mut LowerCtx,
    init: &Expr,
    ty: &Type,
    base_addr: VReg,
    byte_base: u32,
) -> Result<()> {
    let resolved = resolve_type(ty, ctx);
    match resolved.unqualified() {
        Type::Struct { .. } | Type::Union { .. } => {
            let fields = resolve_struct_fields(&resolved, ctx)
                .ok_or_else(|| Error::Compile {
                    msg: "nested aggregate initializer references unresolved tag".to_string(),
                })?
                .to_vec();
            let is_union = matches!(resolved.unqualified(), Type::Union { .. });
            let items = match init {
                Expr::InitList(items) => items.as_slice(),
                Expr::Cast(_, boxed) => match boxed.as_ref() {
                    Expr::InitList(items) => items.as_slice(),
                    _ => {
                        return Err(Error::Compile {
                            msg: "nested aggregate initializer requires braces".to_string(),
                        });
                    }
                },
                _ => {
                    return Err(Error::Compile {
                        msg: "nested aggregate initializer requires braces".to_string(),
                    });
                }
            };
            let mut cursor = 0usize;
            for item in items {
                let (fidx, inner) = match item {
                    Expr::DesignatedInit { field, value } => {
                        let idx = fields
                            .iter()
                            .position(|(n, _)| n == field)
                            .unwrap_or(cursor);
                        (idx, value.as_ref())
                    }
                    other => (cursor, other),
                };
                if fidx >= fields.len() {
                    break;
                }
                let (fname, fty) = fields[fidx].clone();
                let field_off = if is_union {
                    0
                } else {
                    let pack = aggregate_pack(&resolved, ctx);
                    crate::types::struct_field_layout_ctx(&fields, &fname, pack, ctx)
                        .map(|(off, _, _)| off)
                        .unwrap_or(0)
                };
                lower_subword_aggregate_init(ctx, inner, &fty, base_addr, byte_base + field_off)?;
                cursor = fidx + 1;
                if is_union {
                    break;
                }
            }
            Ok(())
        }
        Type::Array(elem, Some(_)) => {
            let items = match init {
                Expr::InitList(items) => items.as_slice(),
                _ => {
                    return lower_subword_aggregate_init(ctx, init, elem, base_addr, byte_base);
                }
            };
            let elem_bytes = crate::types::size_bytes_ctx(elem, ctx).max(1);
            let mut cursor = 0u32;
            for item in items {
                let (idx, inner) = match item {
                    Expr::ArrayDesignator { index, value } => {
                        let i = match index.as_ref() {
                            Expr::IntLit(v, _) => *v as u32,
                            _ => cursor,
                        };
                        (i, value.as_ref())
                    }
                    other => (cursor, other),
                };
                lower_subword_aggregate_init(
                    ctx,
                    inner,
                    elem,
                    base_addr,
                    byte_base + idx * elem_bytes,
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
            let val = lower_expr(ctx, scalar)?;
            let val = if ty_is_long_long(&resolved, ctx) && !ctx.is_64bit_vreg(val) {
                widen_to_64(ctx, val, scalar)
            } else {
                val
            };
            let bytes = crate::types::size_bytes_ctx(&resolved, ctx);
            let addr = add_byte_offset(ctx, base_addr, byte_base);
            if bytes == 1 {
                emit_byte_store(ctx, addr, val);
            } else if bytes == 2 {
                if !byte_base.is_multiple_of(2) {
                    emit_unaligned_short_store(ctx, addr, val);
                } else {
                    emit_short_store(ctx, addr, val);
                }
            } else if ty_is_long_long(&resolved, ctx) {
                if byte_base.is_multiple_of(4) {
                    ctx.emit(IrOp::Store(val, addr, 0));
                    let next = add_byte_offset(ctx, base_addr, byte_base + 4);
                    ctx.emit(IrOp::Store(val + 1, next, 0));
                } else {
                    emit_unaligned_longlong_store(ctx, addr, val);
                }
            } else if bytes == 4 && !resolved.is_float() {
                if byte_base.is_multiple_of(4) {
                    ctx.emit(IrOp::Store(val, addr, 0));
                } else {
                    emit_unaligned_word_store(ctx, addr, val);
                }
            } else if byte_base.is_multiple_of(4) {
                ctx.emit(IrOp::Store(val, addr, 0));
            } else {
                return Err(Error::NotImplemented(format!(
                    "unaligned {bytes}-byte nested aggregate leaf initializer"
                )));
            }
            Ok(())
        }
    }
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
    pack: u8,
    slot_base: u32,
    num_words: u32,
) -> Result<()> {
    let mut cursor: usize = 0;
    for item in items {
        let (mut fidx, inner, positional) = match item {
            Expr::DesignatedInit { field, value } => {
                let idx = fields
                    .iter()
                    .position(|(n, _)| n == field)
                    .unwrap_or(cursor);
                (idx, value.as_ref(), false)
            }
            Expr::ArrayDesignator { .. } => {
                // An array designator inside a struct init list is
                // malformed; skip it to avoid crashing but keep the
                // cursor moving so trailing positional items still
                // line up.
                cursor = cursor.saturating_add(1);
                continue;
            }
            other => (cursor, other, true),
        };
        if positional {
            while fidx < fields.len() && is_anonymous_bitfield_field(&fields[fidx], ctx) {
                fidx += 1;
            }
        }
        if fidx >= fields.len() {
            cursor = fidx + 1;
            continue;
        }
        let (fname, fty) = &fields[fidx];
        let Some((byte_off, bit_off, bit_width)) =
            crate::types::struct_field_layout_ctx(fields, fname, pack, ctx)
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
        // Nested aggregate field with a brace-enclosed initializer:
        // `.in = { ... }` where `in` is itself a struct / array / union.
        // Recurse so the inner brace runs through its own
        // designator/cursor logic (with its own zero-fill).  Without
        // this, `lower_expr` would attempt to evaluate the InitList as
        // a scalar value and store a single garbage word, dropping the
        // sibling fields entirely.  A nested compound literal
        // `(type){...}` for the same field is equivalent at the
        // initializer level (C99 6.5.2.5 makes `{...}` and
        // `(T){...}` interchangeable in initializer context); peel
        // its `Expr::Cast` wrapper so the same recursion applies.
        let init_list = match inner {
            Expr::InitList(items) => Some(items.as_slice()),
            Expr::Cast(_, boxed) => match boxed.as_ref() {
                Expr::InitList(items) => Some(items.as_slice()),
                _ => None,
            },
            _ => None,
        };
        if let Some(inner_items) = init_list {
            let resolved_fty = resolve_type(fty, ctx);
            let fty_is_aggregate = matches!(
                resolved_fty.unqualified(),
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            );
            if fty_is_aggregate {
                let inner_words = crate::types::size_words_ctx(&resolved_fty, ctx).max(1);
                if byte_off % 4 != 0 {
                    let base_addr = ctx.alloc_vreg_ptr();
                    ctx.emit(IrOp::FrameAddr(
                        base_addr,
                        (slot_base + num_words - 1) as i32,
                    ));
                    lower_subword_aggregate_init(ctx, inner, fty, base_addr, byte_off)?;
                    cursor = fidx + 1;
                    continue;
                }
                // Inner's deepest slot must coincide with the outer
                // field's deepest slot (`elem_slot`).  With the inner
                // call laying out word `i` at
                // `inner_base + inner_words - 1 - i`, equating its
                // word-0 slot to `elem_slot` gives
                // `inner_base = elem_slot - inner_words + 1`.
                let inner_base = elem_slot + 1 - inner_words;
                lower_aggregate_init(ctx, inner_items, fty, inner_base, inner_words, true)?;
                cursor = fidx + 1;
                continue;
            }
        }
        // Chained designator into an aggregate field: e.g. `.f.g = v` or
        // `.a[3] = v`.  The field is itself aggregate and the value is
        // another designator; recurse without zero-filling so sibling
        // designators on the same field coexist.
        if matches!(
            inner,
            Expr::DesignatedInit { .. } | Expr::ArrayDesignator { .. }
        ) {
            let resolved_fty = resolve_type(fty, ctx);
            let fty_is_aggregate = matches!(
                resolved_fty.unqualified(),
                Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
            );
            if fty_is_aggregate {
                let inner_words = crate::types::size_words_ctx(&resolved_fty, ctx).max(1);
                let inner_base = elem_slot + 1 - inner_words;
                lower_designator_into(ctx, inner, fty, inner_base, inner_words)?;
                cursor = fidx + 1;
                continue;
            }
        }
        let val = lower_expr(ctx, inner)?;
        let val = if ty_is_long_long(fty, ctx) && !ctx.is_64bit_vreg(val) {
            widen_to_64(ctx, val, inner)
        } else {
            val
        };
        let resolved_fty = resolve_type(fty, ctx);
        if let Type::Bitfield(_, _) = resolved_fty.unqualified() {
            let bit_off = bit_off.unwrap_or(0);
            let width = bit_width.unwrap_or(32) as u32;
            let bit_pos = (byte_off % 4) * 8 + bit_off;
            if bit_pos + width > 32 {
                return Err(Error::NotImplemented(format!(
                    "bitfield initializer for field {fname} crosses a 32-bit storage word"
                )));
            }
            let field_mask = if width >= 32 {
                u32::MAX as i64
            } else {
                ((1u32 << width) - 1) as i64
            };
            let mask_v = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(mask_v, field_mask));
            let val_bits = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(val_bits, val, mask_v));
            let placed = if bit_pos == 0 {
                val_bits
            } else {
                let sh = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(sh, bit_pos as i64));
                let out = ctx.alloc_vreg();
                ctx.emit(IrOp::Shl(out, val_bits, sh));
                out
            };
            let old = ctx.alloc_vreg();
            emit_frame_slot_load_indirect(ctx, old, elem_slot);
            let shifted_mask = (field_mask as u64).wrapping_shl(bit_pos) as i64;
            let clear_v = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(clear_v, !shifted_mask));
            let cleared = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(cleared, old, clear_v));
            let merged = ctx.alloc_vreg();
            ctx.emit(IrOp::BitOr(merged, cleared, placed));
            emit_frame_slot_store_indirect(ctx, elem_slot, merged);
            cursor = fidx + 1;
            continue;
        }
        let fbytes = crate::types::size_bytes_ctx(fty, ctx);
        if fbytes == 2 && !byte_off.is_multiple_of(2) {
            let base_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(
                base_addr,
                (slot_base + num_words - 1) as i32,
            ));
            let addr = add_byte_offset(ctx, base_addr, byte_off);
            emit_unaligned_short_store(ctx, addr, val);
        } else if ty_is_long_long(fty, ctx) && !byte_off.is_multiple_of(4) {
            let base_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(
                base_addr,
                (slot_base + num_words - 1) as i32,
            ));
            let addr = add_byte_offset(ctx, base_addr, byte_off);
            emit_unaligned_longlong_store(ctx, addr, val);
        } else if fbytes == 4 && !resolved_fty.is_float() && !byte_off.is_multiple_of(4) {
            let base_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(
                base_addr,
                (slot_base + num_words - 1) as i32,
            ));
            let addr = add_byte_offset(ctx, base_addr, byte_off);
            emit_unaligned_word_store(ctx, addr, val);
        } else if fbytes == 1 {
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
            emit_frame_slot_load_indirect(ctx, old, elem_slot);
            let mask_v = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(mask_v, !(0xFFi64 << lane) & 0xFFFFFFFF));
            let cleared = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(cleared, old, mask_v));
            let merged = ctx.alloc_vreg();
            ctx.emit(IrOp::BitOr(merged, cleared, placed));
            emit_frame_slot_store_indirect(ctx, elem_slot, merged);
        } else if fbytes == 2 {
            // 16-bit field: merge into the containing word via
            // halfword-extract store. A `short` at byte-offset 2 sits
            // in the high half of word 0 alongside earlier byte/short
            // fields in the low half (e.g. `struct { int8_t f0;
            // uint16_t f1; }`).  A plain word Store at `elem_slot`
            // here would clobber those earlier fields with the new
            // halfword value in the LOW half of the word -- losing
            // f0 and putting f1's bytes at the wrong byte offset.
            let lane = (byte_off % 4) * 8;
            let ffff = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(ffff, 0xFFFF));
            let val_half = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(val_half, val, ffff));
            let placed = if lane == 0 {
                val_half
            } else {
                let sh = ctx.alloc_vreg();
                ctx.emit(IrOp::LoadImm(sh, lane as i64));
                let out = ctx.alloc_vreg();
                ctx.emit(IrOp::Shl(out, val_half, sh));
                out
            };
            let old = ctx.alloc_vreg();
            emit_frame_slot_load_indirect(ctx, old, elem_slot);
            let mask_v = ctx.alloc_vreg();
            ctx.emit(IrOp::LoadImm(mask_v, !(0xFFFFi64 << lane) & 0xFFFFFFFF));
            let cleared = ctx.alloc_vreg();
            ctx.emit(IrOp::BitAnd(cleared, old, mask_v));
            let merged = ctx.alloc_vreg();
            ctx.emit(IrOp::BitOr(merged, cleared, placed));
            emit_frame_slot_store_indirect(ctx, elem_slot, merged);
        } else {
            // Wider (word-aligned) field: store the whole scalar. 64-bit
            // fields occupy two aggregate words in increasing byte-offset
            // order; direct frame Store64 uses scalar-local layout, so write
            // the two aggregate words explicitly here.
            emit_frame_slot_store_indirect(ctx, elem_slot, val);
            if ty_is_long_long(fty, ctx) && word_off + 1 < num_words {
                emit_frame_slot_store_indirect(ctx, elem_slot - 1, val + 1);
            }
        }
        cursor = fidx + 1;
    }
    Ok(())
}

fn is_anonymous_bitfield_field((name, ty): &(String, Type), ctx: &LowerCtx) -> bool {
    name.starts_with("__anon")
        && matches!(resolve_type(ty, ctx).unqualified(), Type::Bitfield(_, _))
}

/// Apply a single chained designator expression (`[i].field = v`,
/// `.field[j] = v`, `[i][j] = v`, possibly deeper) to a sub-aggregate
/// at `slot_base..slot_base+num_words` of type `ty`, WITHOUT zero-
/// filling.  The non-zero-fill is essential: sibling designators
/// targeting the same outer index (e.g. `[0].x = 1, [0].y = 2`) must
/// coexist, and the outer `lower_aggregate_init` already zeroed the
/// whole aggregate up front.  At each level we resolve the head
/// designator's slot offset, then either recurse (if the value is
/// another designator and the head's target type is itself aggregate)
/// or fall through to the scalar store at the leaf slot.  Brace-
/// enclosed nested init lists at the leaf delegate to
/// `lower_aggregate_init` (which does zero-fill its own sub-aggregate,
/// matching C99 semantics — a brace-enclosed designated initializer
/// like `[0] = {1,2}` reinitialises the entire element).
fn lower_designator_into(
    ctx: &mut LowerCtx,
    expr: &Expr,
    ty: &Type,
    slot_base: u32,
    num_words: u32,
) -> Result<()> {
    let resolved_ty = resolve_type(ty, ctx);
    let resolved_pack = aggregate_pack(&resolved_ty, ctx);
    match expr {
        Expr::ArrayDesignator { index, value } => {
            let idx = match index.as_ref() {
                Expr::IntLit(v, _) => *v as u32,
                _ => 0,
            };
            let (elem_bytes, elem_words) = match resolved_ty.unqualified() {
                Type::Array(elem_ty, _) => (
                    crate::types::size_bytes_ctx(elem_ty, ctx).max(1),
                    crate::types::size_words_ctx(elem_ty, ctx).max(1),
                ),
                _ => (4, 1),
            };
            let byte_off = idx.saturating_mul(elem_bytes);
            let word_off = byte_off / 4;
            if word_off >= num_words {
                return Ok(());
            }
            let elem_slot = slot_base + num_words - 1 - word_off;
            if let Type::Array(elem_ty, _) = resolved_ty.unqualified() {
                let inner_base = elem_slot + 1 - elem_words;
                lower_designator_or_scalar(
                    ctx,
                    value,
                    elem_ty,
                    inner_base,
                    elem_slot,
                    elem_words,
                    byte_off % 4,
                )?;
            }
            Ok(())
        }
        Expr::DesignatedInit { field, value } => {
            let fields = resolve_struct_fields(&resolved_ty, ctx).map(|f| f.to_vec());
            if let Some(fields) = fields {
                if let Some((byte_off, fty)) =
                    struct_field_offset(&fields, field, resolved_pack, ctx)
                {
                    let word_off = if is_union_type(&resolved_ty) {
                        0
                    } else {
                        byte_off / 4
                    };
                    if word_off >= num_words {
                        return Ok(());
                    }
                    let elem_slot = slot_base + num_words - 1 - word_off;
                    let fty_words = crate::types::size_words_ctx(&fty, ctx).max(1);
                    let inner_base = elem_slot + 1 - fty_words;
                    lower_designator_or_scalar(
                        ctx,
                        value,
                        &fty,
                        inner_base,
                        elem_slot,
                        fty_words,
                        byte_off % 4,
                    )?;
                }
            }
            Ok(())
        }
        _ => {
            // Should not reach here with a non-designator at the top
            // level — caller checks before invoking.  Fall through to
            // scalar store at slot_base + num_words - 1 to be safe.
            let val = lower_expr(ctx, expr)?;
            emit_frame_slot_store_indirect(ctx, slot_base + num_words - 1, val);
            Ok(())
        }
    }
}

/// Helper used by `lower_designator_into` after one level of designator
/// has been resolved to a target sub-aggregate or scalar slot.  Handles
/// (a) further chained designators (recurse), (b) brace-enclosed nested
/// init lists (delegate to `lower_aggregate_init`, which zero-fills the
/// inner aggregate per C99), or (c) a leaf scalar value (direct store
/// at `leaf_slot`).
fn lower_designator_or_scalar(
    ctx: &mut LowerCtx,
    value: &Expr,
    target_ty: &Type,
    inner_base: u32,
    leaf_slot: u32,
    inner_words: u32,
    byte_lane: u32,
) -> Result<()> {
    let resolved_target = resolve_type(target_ty, ctx);
    let target_is_aggregate = matches!(
        resolved_target.unqualified(),
        Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
    );
    match value {
        Expr::DesignatedInit { .. } | Expr::ArrayDesignator { .. } if target_is_aggregate => {
            lower_designator_into(ctx, value, target_ty, inner_base, inner_words)
        }
        Expr::InitList(items) if target_is_aggregate => {
            lower_aggregate_init(ctx, items, target_ty, inner_base, inner_words, true)
        }
        Expr::Cast(_, boxed)
            if target_is_aggregate && matches!(boxed.as_ref(), Expr::InitList(_)) =>
        {
            if let Expr::InitList(items) = boxed.as_ref() {
                lower_aggregate_init(ctx, items, target_ty, inner_base, inner_words, true)?;
            }
            Ok(())
        }
        _ => {
            let inner = strip_designator(value);
            let val = lower_expr(ctx, inner)?;
            let val = if ty_is_long_long(target_ty, ctx) && !ctx.is_64bit_vreg(val) {
                widen_to_64(ctx, val, inner)
            } else {
                val
            };
            let fbytes = crate::types::size_bytes_ctx(target_ty, ctx);
            if fbytes == 1 {
                let base_addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(base_addr, leaf_slot as i32));
                let addr = add_byte_offset(ctx, base_addr, byte_lane);
                emit_byte_store(ctx, addr, val);
            } else if fbytes == 2 {
                let base_addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(base_addr, leaf_slot as i32));
                let addr = add_byte_offset(ctx, base_addr, byte_lane);
                if byte_lane.is_multiple_of(2) {
                    emit_short_store(ctx, addr, val);
                } else {
                    emit_unaligned_short_store(ctx, addr, val);
                }
            } else if ty_is_long_long(target_ty, ctx) && byte_lane != 0 {
                let base_addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(base_addr, leaf_slot as i32));
                let addr = add_byte_offset(ctx, base_addr, byte_lane);
                emit_unaligned_longlong_store(ctx, addr, val);
            } else if fbytes == 4 && !resolved_target.is_float() && byte_lane != 0 {
                let base_addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(base_addr, leaf_slot as i32));
                let addr = add_byte_offset(ctx, base_addr, byte_lane);
                emit_unaligned_word_store(ctx, addr, val);
            } else {
                emit_frame_slot_store_indirect(ctx, leaf_slot, val);
                if ty_is_long_long(target_ty, ctx) && inner_words > 1 {
                    emit_frame_slot_store_indirect(ctx, leaf_slot - 1, val + 1);
                }
            }
            Ok(())
        }
    }
}

/// Peel a designator wrapper, returning the inner value expression.
/// Used in scalar contexts where designators are meaningless but may
/// still appear syntactically (e.g. `int x = {.f = 5}` — degenerate).
fn strip_designator(expr: &Expr) -> &Expr {
    match expr {
        Expr::DesignatedInit { value, .. } | Expr::ArrayDesignator { value, .. } => {
            strip_designator(value)
        }
        other => other,
    }
}

/// Lower a C99 compound literal: `(type){init-list}`.
///
/// Allocates a temporary stack slot, initializes it via the shared
/// `lower_aggregate_init` path (honouring designators, zero-fill, and the
/// deepest-slot-first layout aggregates require on a downward-growing
/// stack), then returns an rvalue appropriate for the type: aggregates
/// (array / struct / union) decay to the base address of the storage;
/// scalars are loaded back into a vreg.
fn lower_compound_literal(ctx: &mut LowerCtx, ty: &Type, items: &[Expr]) -> Result<VReg> {
    // C99 6.7.8p22: an array of unknown size in a compound literal takes
    // its size from the initializer list.  Re-form the type as a sized
    // array before we compute its word count, or the unsized form reports
    // size 0 and we truncate storage to a single word.
    let resolved_ty = resolve_type(ty, ctx);
    let resolved_ty = match resolved_ty {
        Type::Array(elem, None) => Type::Array(elem, Some(items.len())),
        other => other,
    };
    let num_words = crate::types::size_words_ctx(&resolved_ty, ctx).max(1);
    let slot = ctx.frame_size;
    ctx.frame_size += num_words;

    let is_aggregate = matches!(
        resolved_ty,
        Type::Array(..) | Type::Struct { .. } | Type::Union { .. }
    );
    let is_array = matches!(resolved_ty, Type::Array(..));

    lower_aggregate_init(ctx, items, &resolved_ty, slot, num_words, is_aggregate)?;

    if is_array {
        // C99 6.3.2.1: an array rvalue decays to a pointer to its first
        // element.  The init helper places element 0 at the deepest slot
        // so callers can walk upward through valid storage on a
        // downward-growing stack; return that slot's address.
        let base_slot = slot + num_words - 1;
        let dst = ctx.alloc_vreg_ptr();
        ctx.emit(IrOp::FrameAddr(dst, base_slot as i32));
        return Ok(dst);
    }

    // Struct / union compound-literal rvalues do NOT decay: by-value
    // callers (function-argument passing, struct return, struct
    // assignment) detect the struct type and route through
    // `lower_struct_expr_addr` which has its own `Expr::Cast(_, InitList)`
    // arm.  If `lower_expr` is reached directly for a struct compound
    // literal (e.g. evaluated for side effects) all that matters is that
    // the initializer stores have run; the returned scalar is unused
    // beyond satisfying the VReg contract, so load word 0 as a
    // placeholder.

    // Scalar compound literal: return the loaded value.
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
    let mut branch_assigned = HashSet::new();
    collect_assigned_expr(then_expr, &mut branch_assigned);
    collect_assigned_expr(else_expr, &mut branch_assigned);

    let result_ty = ternary_scalar_result_type(ctx, then_expr, else_expr);
    let result_is_64 = result_ty.as_ref().is_some_and(|t| ty_is_long_long(t, ctx));
    let result = if result_is_64 {
        ctx.alloc_vreg_pair()
    } else if result_ty.as_ref().is_some_and(|t| t.is_float()) {
        ctx.alloc_vreg_float()
    } else {
        ctx.alloc_vreg()
    };

    if let Some(cond_value) = const_condition_i64_expr(ctx, cond) {
        let chosen = if cond_value != 0 {
            then_expr
        } else {
            else_expr
        };
        return lower_ternary_arm(ctx, chosen, result_ty.as_ref(), result_is_64);
    }

    // Branchless select for a 32-bit integer result whose arms are both safe
    // to evaluate unconditionally: compute both arms, then a conditional move
    // picks the right one based on the condition's flags. Removes the two
    // branches a ternary otherwise needs (common in inlined shift guards).
    let result_is_float = result_ty.as_ref().is_some_and(|t| t.is_float());
    if !result_is_64 && !result_is_float && is_speculatable(then_expr) && is_speculatable(else_expr)
    {
        let tv = lower_ternary_arm(ctx, then_expr, result_ty.as_ref(), result_is_64)?;
        let ev = lower_ternary_arm(ctx, else_expr, result_ty.as_ref(), result_is_64)?;
        ctx.emit(IrOp::Copy(result, ev));
        let c = lower_expr(ctx, cond)?;
        lower_compare_scalar_to_zero(ctx, c);
        ctx.emit(IrOp::CondMove(result, tv, Cond::Ne));
        invalidate_const_locals(ctx, &branch_assigned);
        return Ok(result);
    }

    let else_label = ctx.alloc_label();
    let end_label = ctx.alloc_label();

    lower_branch_if_false(ctx, cond, else_label)?;
    let base_const_locals = ctx.const_locals.clone();
    let base_const_float_locals = ctx.const_float_locals.clone();
    let base_const_bitfield_locals = ctx.const_bitfield_locals.clone();

    // Then branch.
    let then_val = lower_ternary_arm(ctx, then_expr, result_ty.as_ref(), result_is_64)?;
    if result_is_64 {
        ctx.emit(IrOp::Copy64(result, then_val));
    } else {
        ctx.emit(IrOp::Copy(result, then_val));
    }
    ctx.emit(IrOp::Branch(end_label));
    ctx.const_locals = base_const_locals.clone();
    ctx.const_float_locals = base_const_float_locals.clone();
    ctx.const_bitfield_locals = base_const_bitfield_locals.clone();

    // Else branch.
    ctx.emit(IrOp::Label(else_label));
    let else_val = lower_ternary_arm(ctx, else_expr, result_ty.as_ref(), result_is_64)?;
    if result_is_64 {
        ctx.emit(IrOp::Copy64(result, else_val));
    } else {
        ctx.emit(IrOp::Copy(result, else_val));
    }
    ctx.emit(IrOp::Label(end_label));
    ctx.const_locals = base_const_locals;
    ctx.const_float_locals = base_const_float_locals;
    ctx.const_bitfield_locals = base_const_bitfield_locals;
    invalidate_const_locals(ctx, &branch_assigned);

    Ok(result)
}

fn lower_ternary_arm(
    ctx: &mut LowerCtx,
    expr: &Expr,
    result_ty: Option<&Type>,
    result_is_64: bool,
) -> Result<VReg> {
    let val = lower_expr(ctx, expr)?;
    let val_is_64 = ctx.is_64bit_vreg(val);
    if result_is_64 {
        return Ok(if val_is_64 {
            val
        } else {
            widen_to_64(ctx, val, expr)
        });
    }
    let val = if val_is_64 {
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::LongLongToInt(tmp, val));
        tmp
    } else {
        val
    };
    Ok(if let Some(ty) = result_ty {
        coerce_vreg(ctx, val, ty)
    } else {
        val
    })
}

fn ternary_scalar_result_type(ctx: &LowerCtx, then_expr: &Expr, else_expr: &Expr) -> Option<Type> {
    let tt = expr_type(then_expr, ctx)?;
    let et = expr_type(else_expr, ctx)?;
    if (tt.is_integer() || tt.is_float()) && (et.is_integer() || et.is_float()) {
        let pt = tt.integer_promoted();
        let pe = et.integer_promoted();
        if pt.is_float() {
            return Some(pt);
        }
        if pe.is_float() {
            return Some(pe);
        }
        if pt.is_integer() && pe.is_integer() {
            return Some(Type::usual_arithmetic_conversion(&pt, &pe));
        }
    }
    Some(tt)
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
    let stride = if num_words > 1 {
        let stride = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(stride, 4));
        Some(stride)
    } else {
        None
    };
    let mut src_word_addr = src_addr;
    let mut dst_word_addr = dst_addr;
    for i in 0..num_words {
        // Keep the indirect Load/Store offset at zero. The isel path
        // carries non-zero indirect offsets through an i8 instruction
        // field, so byte offset 128 would otherwise wrap to -128 in
        // large aggregate copies.
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::Load(tmp, src_word_addr, 0));
        ctx.emit(IrOp::Store(tmp, dst_word_addr, 0));
        if i + 1 < num_words {
            let stride = stride.expect("stride exists for multi-word copy");
            let next_src = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::Add(next_src, src_word_addr, stride));
            src_word_addr = next_src;
            let next_dst = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::Add(next_dst, dst_word_addr, stride));
            dst_word_addr = next_dst;
        }
    }
}

/// Emit an exact-size aggregate assignment copy. Unlike `emit_struct_copy`,
/// this never rounds the object size up to a full word at the destination,
/// so assigning `struct { short x; }` into a packed array element preserves
/// the neighboring element that shares the same 32-bit storage word.
/// Copy `byte_size` bytes from `src_addr` to `dst_addr`. When the source or
/// destination is known to be word-aligned (`src_aligned` / `dst_aligned`),
/// the word-sized chunks use plain aligned Load/Store instead of the
/// shift-and-mask unaligned sequence — a large win for struct/union copies of
/// word-aligned aggregates (e.g. an array element `g[i] = v`), which would
/// otherwise emit ~7 instructions per word.
fn emit_struct_copy_exact_aligned(
    ctx: &mut LowerCtx,
    dst_addr: VReg,
    src_addr: VReg,
    byte_size: u32,
    src_aligned: bool,
    dst_aligned: bool,
) {
    let mut byte_off = 0;
    while byte_off + 4 <= byte_size {
        let src = add_byte_offset(ctx, src_addr, byte_off);
        let dst = add_byte_offset(ctx, dst_addr, byte_off);
        let val = if src_aligned {
            let v = ctx.alloc_vreg();
            ctx.emit(IrOp::Load(v, src, 0));
            v
        } else {
            emit_unaligned_word_load(ctx, src)
        };
        if dst_aligned {
            ctx.emit(IrOp::Store(val, dst, 0));
        } else {
            emit_unaligned_word_store(ctx, dst, val);
        }
        byte_off += 4;
    }
    if byte_off + 2 <= byte_size {
        let src = add_byte_offset(ctx, src_addr, byte_off);
        let dst = add_byte_offset(ctx, dst_addr, byte_off);
        let val = emit_unaligned_short_load(ctx, src, false);
        emit_unaligned_short_store(ctx, dst, val);
        byte_off += 2;
    }
    if byte_off < byte_size {
        let src = add_byte_offset(ctx, src_addr, byte_off);
        let dst = add_byte_offset(ctx, dst_addr, byte_off);
        let val = emit_byte_load(ctx, src, false);
        emit_byte_store(ctx, dst, val);
    }
}

/// Lower an expression that produces a struct value, returning the address
/// of the struct on the stack rather than loading a single word.
fn lower_struct_return_call_into_frame(
    ctx: &mut LowerCtx,
    expr: &Expr,
    storage_slot: u32,
    target_words: u32,
) -> Result<bool> {
    match expr {
        Expr::Call { name, args } => {
            let ret_ty = ctx.function_return_types.get(name).cloned().or_else(|| {
                ctx.local_types
                    .get(name)
                    .or_else(|| ctx.globals.get(name))
                    .and_then(function_ptr_ret_type)
            });
            if !ret_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx)) {
                return Ok(false);
            }
            let ret_words = ret_ty
                .as_ref()
                .map_or(target_words, |ty| type_size_words(ty, ctx).max(1));
            if ret_words != target_words {
                return Ok(false);
            }
            let param_tys_owned: Option<Vec<Type>> = lookup_callee_param_types(ctx, name)
                .map(|p| p.to_vec())
                .or_else(|| {
                    expr_function_ptr_param_types(&Expr::Ident(name.clone()), ctx)
                        .map(|p| p.to_vec())
                });
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
            let dst_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            let callee_ty = ctx.local_types.get(name).or_else(|| ctx.globals.get(name));
            if callee_ty.is_some_and(|t| is_function_ptr_type(t, ctx)) {
                let addr = lower_expr(ctx, &Expr::Ident(name.clone()))?;
                ctx.emit(IrOp::CallIndirectStruct {
                    addr,
                    args: arg_vregs,
                    dst_addr,
                    num_words: target_words,
                });
            } else {
                ctx.emit(IrOp::CallStruct {
                    name: name.clone(),
                    args: arg_vregs,
                    dst_addr,
                    num_words: target_words,
                });
            }
            Ok(true)
        }
        Expr::CallIndirect { func_expr, args } => {
            let ret_ty = expr_function_ptr_ret_type(func_expr, ctx);
            if !ret_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx)) {
                return Ok(false);
            }
            let ret_words = ret_ty
                .as_ref()
                .map_or(target_words, |ty| type_size_words(ty, ctx).max(1));
            if ret_words != target_words {
                return Ok(false);
            }
            let fn_addr = lower_expr(ctx, func_expr)?;
            let param_tys_owned: Option<Vec<Type>> =
                expr_function_ptr_param_types(func_expr, ctx).map(|p| p.to_vec());
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
            let dst_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            ctx.emit(IrOp::CallIndirectStruct {
                addr: fn_addr,
                args: arg_vregs,
                dst_addr,
                num_words: target_words,
            });
            Ok(true)
        }
        _ => Ok(false),
    }
}

fn lower_struct_expr_addr(ctx: &mut LowerCtx, expr: &Expr) -> Result<VReg> {
    match expr {
        Expr::Ident(_) | Expr::Member(..) | Expr::Arrow(..) | Expr::Deref(..) | Expr::Index(..) => {
            lower_lvalue_addr(ctx, expr)
        }
        Expr::Assign { target, value } => {
            let target_ty = expr_type(target, ctx);
            if target_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx)) {
                let byte_size = target_ty
                    .as_ref()
                    .map_or(4, |t| crate::types::size_bytes_ctx(t, ctx));
                let src_aligned = !lvalue_needs_unaligned_word_access(value, ctx);
                let dst_aligned = !lvalue_needs_unaligned_word_access(target, ctx);
                let src_addr = lower_struct_expr_addr(ctx, value)?;
                let dst_addr = lower_lvalue_addr(ctx, target)?;
                emit_struct_copy_exact_aligned(
                    ctx,
                    dst_addr,
                    src_addr,
                    byte_size,
                    src_aligned,
                    dst_aligned,
                );
                return Ok(dst_addr);
            }

            let val = lower_expr(ctx, expr)?;
            let slot = ctx.alloc_stack_slot();
            ctx.emit(IrOp::Store(val, 0, slot as i32));
            let addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(addr, slot as i32));
            Ok(addr)
        }
        // Ternary on aggregate operands (C99 6.5.15): `cond ? x : y`
        // where x and y are structs. The scalar `lower_ternary` path
        // would Copy a single VReg (only field 0) from one branch into
        // the result, which silently truncates the aggregate to its
        // first word. Materialise an explicit destination buffer and
        // copy *all* words from the selected operand into it on each
        // arm, mirroring the struct-assignment flow.
        Expr::Ternary {
            cond,
            then_expr,
            else_expr,
        } => {
            let ty = expr_type(expr, ctx);
            let is_struct = ty.as_ref().is_some_and(|t| is_struct_type(t, ctx));
            if !is_struct {
                // Fall through to the generic scalar path below.
                let val = lower_expr(ctx, expr)?;
                let slot = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(val, 0, slot as i32));
                let addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(addr, slot as i32));
                return Ok(addr);
            }
            let num_words = type_size_words(ty.as_ref().unwrap(), ctx).max(1);
            // Reserve the destination buffer up front. Field 0 of an
            // aggregate lives at the highest address (deepest frame
            // slot) on SHARC's downward-growing stack; emit_struct_copy
            // walks word w to byte offset w*4, so we point each
            // per-arm `dst_addr` at the deepest slot of the
            // reservation.
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            let storage_slot = slot + num_words - 1;

            // Lower cond / Cmp / branch *before* materialising the
            // destination address vreg. A vreg created here would have
            // to stay live across the conditional Cmp+BranchCond and
            // across both arms (which themselves call back into
            // `lower_expr`, allocate vregs, and may evict caller-saved
            // physical registers); the register allocator does not
            // currently rematerialise frame addresses across that
            // boundary, so the value gets clobbered in one arm.
            // Instead, re-emit `FrameAddr` inside each arm and at the
            // join point: FrameAddr is a pure function of the slot
            // index, so the three vregs all denote the same address.
            let cond_val = lower_expr(ctx, cond)?;
            let else_label = ctx.alloc_label();
            let end_label = ctx.alloc_label();
            lower_compare_scalar_to_zero(ctx, cond_val);
            ctx.emit(IrOp::BranchCond(Cond::Eq, else_label));

            // Then arm: copy x's words into dst.
            let then_addr = lower_struct_expr_addr(ctx, then_expr)?;
            let dst_then = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_then, storage_slot as i32));
            emit_struct_copy(ctx, dst_then, then_addr, num_words);
            ctx.emit(IrOp::Branch(end_label));

            // Else arm: copy y's words into dst.
            ctx.emit(IrOp::Label(else_label));
            let else_addr = lower_struct_expr_addr(ctx, else_expr)?;
            let dst_else = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_else, storage_slot as i32));
            emit_struct_copy(ctx, dst_else, else_addr, num_words);
            ctx.emit(IrOp::Label(end_label));

            // Materialise the address again at the join point so the
            // caller (which expects a single VReg holding the buffer
            // base) gets a fresh, unconditionally-defined value.
            let dst_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            Ok(dst_addr)
        }
        // Struct / union compound literal: `(struct foo){...}`.  The
        // lvalue-addr arm at `lower_lvalue_addr` already allocates frame
        // storage, runs `lower_aggregate_init`, and returns the address
        // of the deepest slot (where field 0 lives on a downward-growing
        // stack).  Reuse it so by-value callers get a real struct-base
        // address rather than the truncated `lower_expr` rvalue.
        Expr::Cast(_, inner) if matches!(inner.as_ref(), Expr::InitList(_)) => {
            lower_lvalue_addr(ctx, expr)
        }
        Expr::Comma(lhs, rhs) => {
            lower_discarded_expr(ctx, lhs)?;
            if expr_type(rhs, ctx).is_some_and(|ty| is_struct_type(&ty, ctx)) {
                lower_struct_expr_addr(ctx, rhs)
            } else {
                let val = lower_expr(ctx, rhs)?;
                let slot = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(val, 0, slot as i32));
                let addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(addr, slot as i32));
                Ok(addr)
            }
        }
        // Call returning a struct by value. The ordinary `lower_expr`
        // path collapses the returned aggregate to a single VReg
        // (field-zero only), which discards every word past R0 and
        // hands the caller a truncated value. Lower the call through
        // `CallStruct` / `CallIndirectStruct` instead, which writes
        // all `num_words` words of the result into a caller-side
        // frame buffer, then return that buffer's address.
        Expr::Call { name, args } => {
            let ret_ty = ctx.function_return_types.get(name).cloned().or_else(|| {
                // Fall back to the callee expression's inferred
                // type when it is a function pointer in the local
                // or global type table.
                ctx.local_types
                    .get(name)
                    .or_else(|| ctx.globals.get(name))
                    .and_then(function_ptr_ret_type)
            });
            let is_struct_ret = ret_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx));
            if !is_struct_ret {
                let val = lower_expr(ctx, expr)?;
                let slot = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(val, 0, slot as i32));
                let addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(addr, slot as i32));
                return Ok(addr);
            }
            let ret_ty = ret_ty.unwrap();
            let num_words = type_size_words(&ret_ty, ctx).max(1);
            let param_tys_owned: Option<Vec<Type>> = lookup_callee_param_types(ctx, name)
                .map(|p| p.to_vec())
                .or_else(|| {
                    expr_function_ptr_param_types(&Expr::Ident(name.clone()), ctx)
                        .map(|p| p.to_vec())
                });
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
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
            let dst_addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(dst_addr, storage_slot as i32));
            let callee_ty = ctx.local_types.get(name).or_else(|| ctx.globals.get(name));
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
            let is_struct_ret = ret_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx));
            if !is_struct_ret {
                let val = lower_expr(ctx, expr)?;
                let slot = ctx.alloc_stack_slot();
                ctx.emit(IrOp::Store(val, 0, slot as i32));
                let addr = ctx.alloc_vreg_ptr();
                ctx.emit(IrOp::FrameAddr(addr, slot as i32));
                return Ok(addr);
            }
            let ret_ty = ret_ty.unwrap();
            let num_words = type_size_words(&ret_ty, ctx).max(1);
            let fn_addr = lower_expr(ctx, func_expr)?;
            let param_tys_owned: Option<Vec<Type>> =
                expr_function_ptr_param_types(func_expr, ctx).map(|p| p.to_vec());
            let arg_vregs = lower_call_args_with_params(ctx, args, param_tys_owned.as_deref())?;
            // See direct-call branch for the rationale behind
            // pointing `dst_addr` at the deepest slot.
            let slot = ctx.frame_size;
            ctx.frame_size += num_words;
            let storage_slot = slot + num_words - 1;
            let dst_addr = ctx.alloc_vreg_ptr();
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
            let addr = ctx.alloc_vreg_ptr();
            ctx.emit(IrOp::FrameAddr(addr, slot as i32));
            Ok(addr)
        }
    }
}

/// Lower a call's argument list into vregs using the same ABI flattening
/// as parameter binding: multi-word scalars, complex values, and
/// struct-by-value arguments become one vreg per 32-bit slot.
/// Resolve the parameter type list of a directly-named callee.
/// Returns `Some(&Vec<Type>)` for in-TU functions whose `Function`
/// definition we already collected; returns `None` for forward
/// declarations that survive only as `GlobalDecl { ty: <return>, ...
/// }` (no params), function pointers (handled by the indirect
/// branch), and builtin/implicit callees.
fn lookup_callee_param_types<'a>(ctx: &'a LowerCtx, name: &str) -> Option<&'a [Type]> {
    ctx.function_param_types.get(name).map(|v| v.as_slice())
}

/// Resolve the parameter type list of an indirect-callee expression
/// by looking through its `Type::FunctionPtr`. Used for
/// `Expr::CallIndirect` and for direct calls through a function
/// pointer variable.
fn function_ptr_param_types(ty: &Type) -> Option<&[Type]> {
    match ty {
        Type::FunctionPtr { params, .. } => Some(params.as_slice()),
        Type::Volatile(inner) | Type::Const(inner) => function_ptr_param_types(inner),
        _ => None,
    }
}

fn expr_function_ptr_param_types<'a>(expr: &Expr, ctx: &'a LowerCtx) -> Option<&'a [Type]> {
    match expr {
        Expr::Ident(name) => ctx
            .local_types
            .get(name)
            .or_else(|| ctx.globals.get(name))
            .and_then(function_ptr_param_types),
        _ => None,
    }
}

/// Lower a call's arguments, applying C99 6.5.2.2p7 implicit
/// "as-if-by-assignment" conversions when the callee's prototype is
/// available via `param_types`.
///
/// The pure-arg-type path (when `param_types` is `None` or the slot is
/// missing) preserves the legacy behaviour: each argument is lowered
/// according to its own type. That path is correct for variadic
/// extra-args (default argument promotions handled by `lower_expr`)
/// and unprototyped K&R callees.
///
/// The prototyped path widens narrow integer arguments to 64 bits when
/// the parameter is `long long`, matching the assignment semantics. A
/// `uint32_t` argument bound to a `unsigned long long` parameter must
/// be zero-extended to a (low, high) pair *before* it lands in the ABI
/// slots — otherwise the callee reads a stale high word out of an
/// unrelated incoming register and silently loses both sign and zero
/// extension. The signedness used for the widening comes from the
/// argument expression (so `(int)x` zero-extends as `int`, while
/// `(uint32_t)x` zero-extends as `uint32_t`); after the widen the bit
/// pattern is reinterpreted at the parameter's type, which matches
/// C99 6.3.1.3 conversion rules.
fn lower_call_args_with_params(
    ctx: &mut LowerCtx,
    args: &[Expr],
    param_types: Option<&[Type]>,
) -> Result<Vec<VReg>> {
    let mut arg_vregs = Vec::new();
    for (i, arg) in args.iter().enumerate() {
        let arg_ty = expr_type(arg, ctx);
        let arg_is_struct = arg_ty.as_ref().is_some_and(|t| is_struct_type(t, ctx));
        let arg_is_complex = arg_ty.as_ref().is_some_and(|t| t.is_complex());
        // Resolve the param type for this slot, when a prototype is
        // available. Slots past the named-param count (variadic
        // extras, or unprototyped callees) leave `param_ty` as None
        // and fall through to the legacy arg-type-only path.
        let param_ty = param_types.and_then(|pts| pts.get(i));
        let param_is_long_long = param_ty.is_some_and(|t| ty_is_long_long(t, ctx));
        if arg_is_struct {
            let nw = arg_ty.as_ref().map_or(1, |t| type_size_words(t, ctx));
            let addr = lower_struct_expr_addr(ctx, arg)?;
            for w in 0..nw {
                let tmp = ctx.alloc_vreg();
                ctx.emit(IrOp::Load(tmp, addr, (w * 4) as i32));
                arg_vregs.push(tmp);
            }
        } else if arg_is_complex {
            // C99 6.2.5p13: a complex value is laid out as two
            // contiguous reals. The ABI passes them as two consecutive
            // argument slots so the callee, which receives the value
            // by value and reads it through `&z`, sees the same
            // [real, imag] pair its frame layout expects.
            let pair = lower_complex_expr(ctx, arg)?;
            arg_vregs.push(pair.real);
            arg_vregs.push(pair.imag);
        } else if param_is_long_long
            || (param_ty.is_none() && arg_ty.as_ref().is_some_and(|t| ty_is_long_long(t, ctx)))
        {
            // Either the argument itself is `long long` or the
            // prototype's parameter is `long long`. With no prototype
            // the legacy/default path also passes a `long long`
            // expression as a pair. With a prototype for a narrower
            // parameter, though, C99 6.5.2.2p7 converts as if by
            // assignment first; that case must consume one ABI slot,
            // not the source expression's two-word width.
            let pair = lower_expr(ctx, arg)?;
            let pair = if ctx.is_64bit_vreg(pair) {
                pair
            } else {
                let unsigned = arg_ty
                    .as_ref()
                    .map(|ty| ty_is_unsigned(ty, ctx))
                    .unwrap_or_else(|| is_unsigned_expr(arg, ctx));
                widen_to_64_with_signedness(ctx, pair, unsigned)
            };
            arg_vregs.push(pair);
            arg_vregs.push(pair + 1);
        } else {
            let val = lower_expr(ctx, arg)?;
            let val = if let Some(param_ty) = param_ty {
                coerce_call_arg_to_param(ctx, val, param_ty)
            } else {
                val
            };
            arg_vregs.push(val);
        }
    }
    Ok(arg_vregs)
}

fn coerce_call_arg_to_param(ctx: &mut LowerCtx, val: VReg, param_ty: &Type) -> VReg {
    let param_is_64 = ty_is_long_long(param_ty, ctx);
    let val_is_64 = ctx.is_64bit_vreg(val);

    if val_is_64 && !param_is_64 {
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::LongLongToInt(tmp, val));
        coerce_vreg(ctx, tmp, param_ty)
    } else if !val_is_64 && param_is_64 {
        // The 64-bit-parameter path normally handles this before
        // flattening the pair. Keep this branch for completeness when
        // callers reuse the scalar coercion helper.
        val
    } else {
        coerce_vreg(ctx, val, param_ty)
    }
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
        Expr::Ident(name) => ctx
            .local_types
            .get(name)
            .or_else(|| ctx.globals.get(name))
            .and_then(function_ptr_ret_type),
        _ => None,
    }
}

/// Coerce a scalar initializer/assignment value to the destination scalar type.
/// Handles 32<->64-bit widening/truncation before delegating narrower scalar
/// conversions to `coerce_vreg`.
fn coerce_scalar_to_type(ctx: &mut LowerCtx, val: VReg, src_expr: &Expr, dst_ty: &Type) -> VReg {
    let dst_is_64 = ty_is_long_long(dst_ty, ctx);
    let val_is_64 = ctx.is_64bit_vreg(val);
    let val = if dst_is_64 && !val_is_64 {
        widen_to_64(ctx, val, src_expr)
    } else if !dst_is_64 && val_is_64 {
        let tmp = ctx.alloc_vreg();
        ctx.emit(IrOp::LongLongToInt(tmp, val));
        tmp
    } else {
        val
    };
    if dst_is_64 {
        val
    } else {
        coerce_vreg(ctx, val, dst_ty)
    }
}

/// Insert an implicit float-to-int or int-to-float conversion if the source
/// vreg type does not match the destination type, and truncate to the
/// destination width for narrow integer destinations (char, short).
fn coerce_vreg(ctx: &mut LowerCtx, val: VReg, dst_ty: &Type) -> VReg {
    // C99 6.3.1.2: any scalar conversion to _Bool yields 0 or 1.
    // Without this, `_Bool b = 42;` would store the raw 42 byte and a
    // later `b == 1` test would fail.
    if *dst_ty == Type::Bool {
        return lower_to_bool(ctx, val);
    }
    let src_is_float = ctx.is_float_vreg(val);
    let dst_is_float = dst_ty.is_float();
    if src_is_float && !dst_is_float {
        let int_val = ctx.alloc_vreg();
        ctx.emit(IrOp::FloatToInt(int_val, val));
        narrow_int_to_dst(ctx, int_val, dst_ty)
    } else if !src_is_float && dst_is_float {
        let dst = ctx.alloc_vreg_float();
        ctx.emit(IrOp::IntToFloat(dst, val));
        dst
    } else if !src_is_float && !dst_is_float {
        // Integer -> integer assignment to a narrow type (char, short)
        // requires truncation to the target width. Without this,
        // `unsigned char c; c += 1;` starting at 255 would store 256
        // into the underlying 32-bit slot and read back 256 instead of
        // wrapping to 0.
        narrow_int_to_dst(ctx, val, dst_ty)
    } else {
        val
    }
}

/// Truncate a 32-bit integer vreg to `dst_ty`'s width. For narrower-than-int
/// types (1- or 2-byte), masks to the type's bit width; for unsigned the
/// masked value is the result, for signed it is sign-extended back to 32
/// bits via shift-left/arithmetic-shift-right. For `int`-or-wider
/// destinations the input is returned unchanged. The signedness check
/// goes through `resolve_type_chain` so a `uint8_t`-style typedef resolves
/// to its `unsigned char` underlying type instead of being treated as
/// signed (which would sign-extend 0xFF into 0xFFFFFFFF and break
/// `<stdint.h>` clients).
fn narrow_int_to_dst(ctx: &mut LowerCtx, val: VReg, dst_ty: &Type) -> VReg {
    let dst_bytes = crate::types::size_bytes_ctx(dst_ty, ctx);
    if dst_bytes == 0 || dst_bytes >= 4 {
        return val;
    }
    let resolved = resolve_type_chain(dst_ty, ctx);
    let bits = dst_bytes * 8;
    if resolved.is_unsigned() {
        let mask = (1u32 << bits).wrapping_sub(1) as i64;
        let masked = ctx.alloc_vreg();
        let mask_v = ctx.alloc_vreg();
        ctx.emit(IrOp::LoadImm(mask_v, mask));
        ctx.emit(IrOp::BitAnd(masked, val, mask_v));
        return masked;
    }
    // Signed narrowing: (val << (32-bits)) >> (32-bits) arithmetic. The
    // left shift already discards the high bits, so a pre-mask `val & 0xFF`
    // / `& 0xFFFF` would be redundant --- skip it (saves an AND + immediate
    // load per signed sub-int cast, which recurs heavily in inlined helpers).
    let shift = (32 - bits) as i64;
    let shifted_up = ctx.alloc_vreg();
    let shl_v = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shl_v, shift));
    ctx.emit(IrOp::Shl(shifted_up, val, shl_v));
    let shr_v = ctx.alloc_vreg();
    ctx.emit(IrOp::LoadImm(shr_v, -shift));
    let dst = ctx.alloc_vreg();
    ctx.emit(IrOp::Shr(dst, shifted_up, shr_v));
    dst
}

/// C99 6.3.1.2 conversion to `_Bool`: any nonzero scalar becomes 1, zero
/// becomes 0. Handles integer, 64-bit integer, and float source vregs.
fn lower_to_bool(ctx: &mut LowerCtx, val: VReg) -> VReg {
    lower_compare_scalar_to_zero(ctx, val);
    let dst = ctx.alloc_vreg();
    let label_true = ctx.alloc_label();
    let label_end = ctx.alloc_label();
    ctx.emit(IrOp::BranchCond(Cond::Ne, label_true));
    ctx.emit(IrOp::LoadImm(dst, 0));
    ctx.emit(IrOp::Branch(label_end));
    ctx.emit(IrOp::Label(label_true));
    ctx.emit(IrOp::LoadImm(dst, 1));
    ctx.emit(IrOp::Label(label_end));
    dst
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::parse;

    fn lower_first_function_with_unit_packs(src: &str) -> Vec<IrOp> {
        let processed = crate::preprocess_only(
            src,
            "lower-packed-short-test.c",
            &crate::cli::Options {
                char_size: 8,
                ..Default::default()
            },
        )
        .unwrap();
        let unit = parse::parse(&processed).unwrap();
        let known = HashSet::new();
        let returns = HashMap::new();
        let params = HashMap::new();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        lower_function_with_known(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops
    }

    fn returned_load_imm(ops: &[IrOp]) -> Option<i64> {
        let mut ret = ops.iter().find_map(|op| match op {
            IrOp::Ret(Some(v)) => Some(*v),
            _ => None,
        })?;
        for op in ops.iter().rev() {
            match op {
                IrOp::LoadImm(v, imm) if *v == ret => return Some(*imm),
                IrOp::Copy(dst, src) if *dst == ret => ret = *src,
                _ => {}
            }
        }
        None
    }

    #[test]
    fn lower_return_42() {
        let unit = parse::parse("int main() { return 42; }").unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should contain a LoadImm and a Ret
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 42))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn block_assignment_invalidates_restored_outer_const_local() {
        let unit = parse::parse(
            "int f(void) {
                int x = 10;
                int *outer = &x;
                int r = 0;
                {
                    int x = 20;
                    int *inner = &x;
                    r = *outer + *inner;
                }
                return r;
            }",
        )
        .unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let ret_vreg = ops
            .iter()
            .find_map(|op| match op {
                IrOp::Ret(Some(vreg)) => Some(*vreg),
                _ => None,
            })
            .expect("return value");
        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::Load(dst, 0, 2) if *dst == ret_vreg)),
            "return must reload r's stack slot after the inner block assigns it, got: {ops:?}"
        );
    }

    #[test]
    fn lower_add_params() {
        let unit = parse::parse("int f(int a, int b) { return a + b; }").unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should contain at least one Add and a Ret
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lowers_masked_ull_byte_extract_without_generic_64bit_shift() {
        let src = "int f(unsigned long long v, int i) {
                       return (unsigned char)((v >> (i * 8)) & 0xFFULL);
                   }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::UShr64(..) | IrOp::Shr64(..))),
            "masked byte extract should avoid the generic 64-bit shift: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::ExtractByte64(..))),
            "masked byte extract should lower to the dedicated byte-extract op: {ops:?}"
        );
    }

    #[test]
    fn lower_const_local_explicit_unsigned_short_cast_truncates() {
        let src = "int f(void) { unsigned int full = 0x12345; unsigned short s = (unsigned short)full; return (int)s; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(returned_load_imm(&ops), Some(0x2345), "{ops:?}");
    }

    #[test]
    fn lower_const_local_implicit_unsigned_short_assignment_truncates() {
        let src =
            "int f(void) { unsigned int full = 0x12345; unsigned short s = full; return (int)s; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(returned_load_imm(&ops), Some(0x2345), "{ops:?}");
    }

    #[test]
    fn lower_const_local_assignment_update_to_unsigned_short_truncates() {
        let src = "int f(void) { unsigned short s = 0; unsigned int full = 0x12345; s = full; return (int)s; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(returned_load_imm(&ops), Some(0x2345), "{ops:?}");
    }

    #[test]
    fn lower_const_local_signed_short_assignment_sign_extends() {
        let src = "int f(void) { short s = 0x8001; return (int)s; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(returned_load_imm(&ops), Some(-32767), "{ops:?}");
    }

    #[test]
    fn lower_const_bool_logical_locals_fold() {
        let src = "int f(void) { _Bool a = 1, b = 0; _Bool c = a && !b; return (int)c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(returned_load_imm(&ops), Some(1), "{ops:?}");
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::Branch(_) | IrOp::BranchCond(..))),
            "constant logical bool locals should not lower to short-circuit branches: {ops:?}"
        );
    }

    #[test]
    fn lower_const_bool_cast_index_normalizes_to_one() {
        let src = "int f(void) { int arr[2] = {0x10, 0x20}; return arr[(_Bool)42]; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 1))),
            "constant _Bool cast should normalize nonzero values to 1: {ops:?}"
        );
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::LoadImm(_, 42) | IrOp::BranchCond(..))),
            "constant _Bool cast should not leave the raw value or runtime bool branch: {ops:?}"
        );
    }

    #[test]
    fn lower_const_float_bool_cast_normalizes_to_one() {
        let src = "int f(void) { return (_Bool)3.14f; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(returned_load_imm(&ops), Some(1), "{ops:?}");
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::BranchCond(..))),
            "constant float-to-_Bool cast should not lower to a runtime branch: {ops:?}"
        );
    }

    #[test]
    fn params_in_calling_functions_are_snapshotted_to_stack() {
        let unit = parse::parse("int g(int); int f(int x) { g(1); return x; }").unwrap();
        let func = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let ops = lower_function(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(matches!(ops.first(), Some(IrOp::Copy(_, 0))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(_, 0, _))));
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::Call(_, name, _) if name == "g")));
    }

    #[test]
    fn params_in_dividing_functions_are_snapshotted_to_stack() {
        let unit = parse::parse("int f(int x, int y) { int z = x / y; return x + z; }").unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(matches!(ops.first(), Some(IrOp::Copy(_, 0))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(_, 0, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Div(..))));
    }

    #[test]
    fn lower_if_else() {
        let src = "int f(int x) { if (x) { return 1; } else { return 0; } }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should contain at least one Cmp, BranchCond, and Label
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Label(_))));
    }

    #[test]
    fn lower_if_float_compare_branches_directly() {
        let src = "int f(float x) { if (x > 1.0f) return 0; return 1; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FCmp(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(_, _))));
        let fcmp_idx = ops
            .iter()
            .position(|op| matches!(op, IrOp::FCmp(_, _)))
            .unwrap();
        assert!(
            matches!(ops.get(fcmp_idx + 1), Some(IrOp::BranchCond(_, _))),
            "float comparison in branch context should branch from flags: {ops:?}"
        );
    }

    #[test]
    fn lower_else_if_reuses_same_comparison_operands() {
        let src = "int f(int mid) { int arr[7] = {2,5,8,13,21,34,55}; if (arr[mid] == 13) return 1; else if (arr[mid] < 13) return 2; return 3; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let indirect_loads = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Load(_, base, _) if *base != 0))
            .count();
        assert_eq!(
            indirect_loads, 1,
            "shared else-if comparison should not reload arr[mid]: {ops:?}"
        );
    }

    #[test]
    fn lower_while_loop() {
        let src = "int f(int x) { while (x) { x = x - 1; } return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should contain Branch (unconditional back-edge)
        assert!(ops.iter().any(|op| matches!(op, IrOp::Branch(_))));
    }

    #[test]
    fn lower_var_decl_with_init() {
        let src = "int f() { int x = 5; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 5))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(_, _, 0))));
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::Load(_, _, 0))),
            "constant scalar local should return from the tracked value without a reload: {ops:?}"
        );
    }

    #[test]
    fn lower_float_add() {
        let src = "float f(float a, float b) { return a + b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FAdd(_, _, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_float_sub_mul() {
        let src = "float f(float a, float b) { return a * b - a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FMul(_, _, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::FSub(_, _, _))));
    }

    #[test]
    fn lower_float_literal() {
        let src = "float f() { return 2.75f; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should load the float bits as an immediate.
        let bits = 2.75f32.to_bits() as i64;
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::LoadImm(_, v) if *v == bits)));
    }

    #[test]
    fn lower_sizeof() {
        let src = "int f() { return sizeof(int); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // sizeof(int) = 4
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 4))));
    }

    #[test]
    fn lower_ternary() {
        let src = "int f(int x) { return x > 0 ? x : 0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should have branches for the ternary.
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(_, _))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Branch(_))));
        let cmp_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Cmp(_, _)))
            .count();
        assert_eq!(
            cmp_count, 1,
            "ternary comparison condition should branch directly: {ops:?}"
        );
    }

    #[test]
    fn lower_return_ternary_avoids_result_spill() {
        let src = "int f(int x) { return x == 7 ? 0x55 : 0xaa; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert_eq!(
            ops.iter().filter(|op| matches!(op, IrOp::Ret(_))).count(),
            2,
            "return ternary should lower to direct returns: {ops:?}"
        );
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::Store(_, 0, _))),
            "return ternary should not spill a synthetic result slot: {ops:?}"
        );
    }

    #[test]
    fn lower_ternary_discards_untaken_branch_constants() {
        let src = "int f(void) { int a = 0, b = 0, c = 0; int x = 5; (x > 3) ? (a = x, b = x * 2) : (c = x * 3); return a + b + c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            !ops.windows(2).any(|window| matches!(
                window,
                [IrOp::LoadImm(v, 30), IrOp::Ret(Some(r))] if v == r
            )),
            "ternary branch assignments must not fold following return to 30: {ops:?}"
        );
        assert!(
            !ops.iter().any(|op| matches!(
                op,
                IrOp::Branch(_) | IrOp::BranchCond(_, _) | IrOp::Label(_)
            )),
            "constant ternary condition should lower only the taken arm: {ops:?}"
        );
    }

    #[test]
    fn lower_array_address_equivalence_folds_branch_condition() {
        let src = "int f(void) { int arr[4]; return (&arr[2] == arr + 2) ? 0x55 : 0xaa; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::Cmp(_, _))),
            "equivalent array address comparison should fold before IR compare: {ops:?}"
        );
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 0x55))));
    }

    #[test]
    fn lower_equivalent_array_lvalue_comparison_folds_branch_condition() {
        let src = "int f(void) { int arr[4]; return (arr[2] == *(arr + 2) && *(arr + 3) == 3[arr]) ? 0x55 : 0xaa; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::Cmp(_, _))),
            "equivalent scalar array lvalue comparisons should fold before IR compare: {ops:?}"
        );
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 0x55))));
    }

    #[test]
    fn lower_float_ternary_keeps_float_result() {
        let src = "float f(float x, int c) { float a; a = c ? -x : x; return a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FNeg(_, _))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::IntToFloat(_, _))));
    }

    #[test]
    fn lower_compound_assign() {
        let src = "int f(int y) { int x = 10; x += y; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
        // Should store the result back.
        let store_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(_, _, _)))
            .count();
        assert!(
            store_count >= 2,
            "expected at least 2 stores (init + compound)"
        );
    }

    #[test]
    fn lower_const_local_compound_assign_chain_folds() {
        let src = "int f(void) { int x = 100; x /= 5; x %= 7; x &= 15; x |= 16; x ^= 4; x >>= 1; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 9))));
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::Div(..) | IrOp::Mod(..))),
            "constant compound chain should not emit runtime div/mod IR: {ops:?}"
        );
    }

    #[test]
    fn lower_float_compound_assign_uses_float_op() {
        let src = "float f(void) { float x = 2.0f; x *= 0.5f; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FMul(_, _, _))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::Mul(_, _, _))));
    }

    #[test]
    fn lower_pre_increment() {
        let src = "int f() { int x = 5; ++x; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
    }

    #[test]
    fn lower_post_increment() {
        let src = "int f() { int x = 5; x++; return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(_, _, _))));
    }

    #[test]
    fn lower_long_long_pre_decrement_stores_both_words() {
        let src = "long long g; void f(void) { --g; }";
        let unit = parse::parse(src).unwrap();
        let globals: HashMap<String, Type> = vec![("g".to_string(), Type::LongLong)]
            .into_iter()
            .collect();
        let ops = lower_function(
            &unit.functions[0],
            &globals,
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Sub64(..))));
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::WriteGlobal64(_, name) if name == "g")));
        assert!(!ops
            .iter()
            .any(|op| matches!(op, IrOp::StoreGlobal(_, name) if name == "g")));
    }

    #[test]
    fn lower_long_long_post_increment_returns_old_pair() {
        let src = "long long f(void) { long long x = -1; return x++; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add64(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store64(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::RetStruct { .. })));
    }

    #[test]
    fn lower_byte_index_post_increment_preserves_packed_word() {
        let src = "typedef unsigned char uint8_t; uint8_t a[2]; int f(void) { return a[1]++; }";
        let unit = parse::parse(src).unwrap();
        let globals: HashMap<String, Type> = vec![(
            "a".to_string(),
            Type::Array(Box::new(Type::Typedef("uint8_t".to_string())), Some(2)),
        )]
        .into_iter()
        .collect();
        let ops = lower_function(
            &unit.functions[0],
            &globals,
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::BitNot(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::BitOr(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_pointer_deref() {
        let src = "int f(int *p) { return *p; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(_, _, _))));
    }

    #[test]
    fn lower_cast_int_to_float() {
        let src = "float f(int x) { return (float)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::IntToFloat(_, _))));
    }

    #[test]
    fn lower_cast_to_bool() {
        // C99 6.3.1.2: conversion to _Bool compares != 0
        let src = "int f(int x) { return (_Bool)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should have a Cmp and BranchCond(Ne) for the bool conversion
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp(_, _))));
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::BranchCond(Cond::Ne, _))));
    }

    #[test]
    fn lower_break_in_while() {
        let src = "int f() { int i = 0; while (i < 10) { if (i == 5) break; i++; } return i; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let branch_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Branch(_)))
            .count();
        assert!(
            branch_count <= 1,
            "if-break should branch directly to the loop exit without a separate unconditional break: {ops:?}"
        );
    }

    #[test]
    fn lower_continue_in_for() {
        let src = "int f() { int sum = 0; int i; for (i = 0; i < 10; i++) { if (i == 3) continue; sum += i; } return sum; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let branch_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Branch(_)))
            .count();
        assert!(
            branch_count <= 1,
            "if-continue should branch directly to the continue label without a separate unconditional continue: {ops:?}"
        );
    }

    #[test]
    fn lower_switch_cases() {
        let src = "int f(int x) { switch(x) { case 0: return 10; case 1: return 20; default: return 0; } }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let cmp_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Cmp(_, _)))
            .count();
        assert!(
            cmp_count >= 2,
            "expected at least 2 Cmps for case 0 and case 1"
        );
    }

    #[test]
    fn lower_goto_forward() {
        let src = "int f(int x) { if (x) goto done; x = 42; done: return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Branch(_))));
        let label_count = ops.iter().filter(|op| matches!(op, IrOp::Label(_))).count();
        assert!(
            label_count >= 1,
            "expected at least 1 label for goto target"
        );
    }

    #[test]
    fn lower_break_in_do_while() {
        let src = "int f() { int i = 0; do { i++; if (i == 3) break; } while (i < 10); return i; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let branch_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Branch(_)))
            .count();
        assert_eq!(
            branch_count, 0,
            "if-break in do-while should lower to a direct conditional exit: {ops:?}"
        );
        assert!(ops.iter().any(|op| matches!(op, IrOp::BranchCond(..))));
    }

    #[test]
    fn lower_switch_with_break() {
        let src = "int f(int x) { int y = 0; switch(x) { case 0: y = 10; break; case 1: y = 20; break; default: y = 30; break; } return y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let branch_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Branch(_)))
            .count();
        assert!(
            branch_count >= 3,
            "expected branches for case breaks and default jump"
        );
    }

    #[test]
    fn lower_struct_member() {
        let src = "struct point { int x; int y; };\nint f() { struct point p; p.x = 10; p.y = 20; return p.x + p.y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should contain stores for field assignments and loads for reads.
        let store_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            store_count >= 2,
            "expected at least 2 stores for p.x and p.y assignments"
        );
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
    }

    #[test]
    fn lower_union_bitfield_member_masks_storage_word() {
        let src = "union u { unsigned f0; unsigned f1 : 27; }; int f(void) { union u g = { 0xffffffffU }; return g.f1; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitAnd(..))),
            "expected union bitfield load to mask the storage word: {ops:?}"
        );
    }

    #[test]
    fn lower_bitfield_compound_assign_preserves_storage_word() {
        let src = "struct s { unsigned a : 3; unsigned b : 5; }; int f(struct s v) { return (v.b &= 3U); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitOr(..))),
            "expected bitfield compound store to merge with neighbouring bits: {ops:?}"
        );
    }

    #[test]
    fn lower_short_member_assignment_preserves_storage_word() {
        let src = "struct s { short a; short b; };
                   int f(void) { struct s v = { 0x1122, 0x3344 }; v.b = 0x55; return v.a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitOr(..))),
            "expected short member assignment to merge with neighbouring halfword: {ops:?}"
        );
    }

    #[test]
    fn lower_aggregate_init_scalar_64bit_writes_both_words() {
        // `union U { long long f0; int f1; } v = {0x1122334455667788LL};`
        // -- the scalar lives in slot_base's deepest word (low half of
        // the 8-byte value) and a second store at slot_base + 0 must
        // write the high half.  Without that, reads of v.f0 truncate
        // to the low 32 bits and the high half stays zero from the
        // zero-fill.  Csmith case 5203b3a4 exposed this pattern via
        // `union U1 l_184 = {0xFFA272E7E9FB3AEFLL};`.
        let src = "union u { long long f0; int f1; };
                   long long f(void) { union u v = {0xFFA272E7E9FB3AEFLL}; return v.f0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // The fix must emit two value-carrying Stores beyond the
        // initial zero-fill -- one per 32-bit half of the 64-bit
        // scalar.  Counting all Store ops would include the zero-
        // fill stores too, so filter to those whose source vreg is
        // NOT the immediate zero-fill vreg.  A simpler proxy: at
        // least one Store at a non-deepest slot must exist (the
        // high-half store goes one word shallower).
        let stores: Vec<_> = ops
            .iter()
            .filter_map(|op| match op {
                IrOp::Store(v, base, off) => Some((*v, *base, *off)),
                _ => None,
            })
            .collect();
        // Distinct offset count >= 2 means we wrote at least two
        // different slots after the zero-fill (which writes both).
        let distinct_offsets: std::collections::HashSet<_> =
            stores.iter().map(|(_, _, off)| *off).collect();
        assert!(
            distinct_offsets.len() >= 2,
            "expected stores at >= 2 distinct slots so both halves of \
             the 64-bit union scalar init land; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_union_scalar_init_sign_extends_to_first_member() {
        let src = "union u { long long f0; int f1; };
                   long long f(void) { union u v = {-8L}; return v.f0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::SExtToLongLong(..))),
            "expected 32-bit long initializer to sign-extend into the 64-bit union member; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_union_init_braced_first_member_writes_all_fields() {
        // `union U { struct S { long long a; long long b; }; ... } v
        // = {{1, 2}};` -- the inner brace runs against the union's
        // first member (a 16-byte struct).  Without the union arm in
        // lower_aggregate_init the inner InitList would fall through
        // to `lower_expr`, which lowers it as a scalar and stores
        // only the first sub-expression -- leaving the second 64-bit
        // field (and everything past it) at zero.  Csmith case
        // 4f88006f exposed this when func_26's parameter `union U1
        // p_30` was initialized from `l_37 = {{...}}`.
        let src = "struct s { long long a; long long b; };
                   union u { struct s f0; int f1; };
                   long long f(void) { union u v = {{0x1122334455667788LL, 0x99AABBCCDDEEFF00LL}}; return v.f0.b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // The fix routes the inner brace through lower_struct_init,
        // which emits a store for every field of the inner struct.
        // Pre-fix only the first sub-expression of the InitList was
        // lowered, so at most one explicit value-store appeared.
        // A real union+struct init now produces stores for both
        // 64-bit halves of each long-long field -- at least four
        // value-carrying stores beyond the zero-fill.
        let stores = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            stores >= 4,
            "expected the inner struct init to emit per-field stores; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_struct_init_short_at_offset_two_preserves_byte_field() {
        // `struct { int8_t f0; uint16_t f1; }` puts f0 at byte 0 and
        // f1 at byte 2 -- both in the same 32-bit storage word.  The
        // f1 initializer must merge its halfword value into the high
        // half of the word; a plain word Store at the struct base
        // would clobber f0 with the LOW byte of f1, which is what
        // csmith case 1632700f exposed.
        let src = "struct s { signed char f0; unsigned short f1; };
                   int f(void) { struct s v = { 0xE3, 0x3705 }; return v.f0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // After the fix the f1 store is a load-modify-store that
        // OR-merges with the existing word.  Before the fix it was a
        // plain word Store, so no merging BitOr appeared in the
        // initializer sequence -- detect that here.
        let bitors = ops
            .iter()
            .filter(|op| matches!(op, IrOp::BitOr(..)))
            .count();
        assert!(
            bitors >= 2,
            "expected the f1 short initializer to read-modify-write \
             its containing word, preserving f0; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_packed_nested_short_load_uses_byte_composition() {
        let src = "typedef unsigned char uint8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned long long uint64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct inner { uint16_t f0; signed char f1; };
                   #pragma pack(pop)
                   #pragma pack(push)
                   #pragma pack(1)
                   struct outer { uint64_t f0; uint8_t f1; struct inner f2; };
                   #pragma pack(pop)
                   unsigned f(struct outer *p) { return p->f2.f0; }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitOr(..))),
            "expected odd-offset short load to combine two byte loads; got ops: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 1))),
            "expected odd-offset short load to read the second byte at addr+1; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_packed_nested_short_store_splits_into_bytes() {
        let src = "typedef unsigned char uint8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned long long uint64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct inner { uint16_t f0; signed char f1; };
                   #pragma pack(pop)
                   #pragma pack(push)
                   #pragma pack(1)
                   struct outer { uint64_t f0; uint8_t f1; struct inner f2; };
                   #pragma pack(pop)
                   void f(struct outer *p) { p->f2.f0 = 0x29E1U; }";
        let ops = lower_first_function_with_unit_packs(src);
        let stores = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            stores >= 2,
            "expected odd-offset short store to write two byte lanes; got ops: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, -8))),
            "expected odd-offset short store to extract the high byte; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_short_pointer_to_packed_field_load_uses_byte_composition() {
        let src = "typedef signed char int8_t;
                   typedef int int32_t;
                   typedef unsigned char uint8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned int uint32_t;
                   typedef unsigned long long uint64_t;
                   typedef long long int64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct inner { uint64_t f0; uint8_t f1; int64_t f2; const uint32_t f3; };
                   #pragma pack(pop)
                   #pragma pack(push)
                   #pragma pack(1)
                   struct outer { int32_t f0; const int8_t f1; struct inner f2; uint16_t f3; };
                   #pragma pack(pop)
                   uint16_t f(void) { struct outer g; uint16_t *p = &g.f3; return *p; }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitOr(..))),
            "expected pointer short load to combine two byte loads; got ops: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 1))),
            "expected pointer short load to read addr+1; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_short_pointer_to_packed_field_store_splits_into_bytes() {
        let src = "typedef signed char int8_t;
                   typedef int int32_t;
                   typedef unsigned char uint8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned int uint32_t;
                   typedef unsigned long long uint64_t;
                   typedef long long int64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct inner { uint64_t f0; uint8_t f1; int64_t f2; const uint32_t f3; };
                   #pragma pack(pop)
                   #pragma pack(push)
                   #pragma pack(1)
                   struct outer { int32_t f0; const int8_t f1; struct inner f2; uint16_t f3; };
                   #pragma pack(pop)
                   void f(void) { struct outer g; uint16_t *p = &g.f3; *p = 0x6a27U; }";
        let ops = lower_first_function_with_unit_packs(src);
        let stores = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            stores >= 2,
            "expected pointer short store to write two byte lanes; got ops: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, -8))),
            "expected pointer short store to extract the high byte; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_short_pointer_compound_assign_splits_store() {
        let src = "typedef signed char int8_t;
                   typedef int int32_t;
                   typedef unsigned char uint8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned int uint32_t;
                   typedef unsigned long long uint64_t;
                   typedef long long int64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct inner { uint64_t f0; uint8_t f1; int64_t f2; const uint32_t f3; };
                   #pragma pack(pop)
                   #pragma pack(push)
                   #pragma pack(1)
                   struct outer { int32_t f0; const int8_t f1; struct inner f2; uint16_t f3; };
                   #pragma pack(pop)
                   void f(void) { struct outer g; uint16_t *p = &g.f3; *p |= 0x6a27U; }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, -8))),
            "expected compound pointer short store to split the high byte; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_short_member_after_odd_stride_array_index_uses_byte_composition() {
        let src = "typedef unsigned char uint8_t;
                   typedef unsigned short uint16_t;
                   typedef unsigned long long uint64_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct packed { uint64_t f0; uint16_t f1; };
                   #pragma pack(pop)
                   struct outer { struct packed f0; uint8_t f1; };
                   uint16_t f(void) { struct outer g[2]; return g[1].f0.f1; }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitOr(..))),
            "expected short member load after odd array stride to combine two byte loads; \
             got ops: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 1))),
            "expected short member load after odd array stride to read addr+1; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_packed_nested_word_load_uses_byte_composition() {
        let src = "typedef unsigned char uint8_t;
                   typedef unsigned int uint32_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct inner { uint32_t f0; };
                   #pragma pack(pop)
                   #pragma pack(push)
                   #pragma pack(1)
                   struct outer { uint8_t f0; struct inner f1; };
                   #pragma pack(pop)
                   uint32_t f(struct outer *p) { return p->f1.f0; }";
        let ops = lower_first_function_with_unit_packs(src);
        let bitors = ops
            .iter()
            .filter(|op| matches!(op, IrOp::BitOr(..)))
            .count();
        assert!(
            bitors >= 1,
            "expected odd-offset word load to combine split word loads; got ops: {ops:?}"
        );
        let loads = ops.iter().filter(|op| matches!(op, IrOp::Load(..))).count();
        assert!(
            loads >= 2,
            "expected odd-offset word load to read two storage words; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_pragma_pack_top_level_word_field_uses_packed_offset() {
        let src = "typedef unsigned short uint16_t;
                   typedef unsigned int uint32_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct s { uint32_t f0; uint16_t f1; const uint32_t f2; uint32_t f3; };
                   #pragma pack(pop)
                   uint32_t f(struct s *p) { return p->f2; }";
        let ops = lower_first_function_with_unit_packs(src);
        let bitors = ops
            .iter()
            .filter(|op| matches!(op, IrOp::BitOr(..)))
            .count();
        assert!(
            bitors >= 1,
            "expected f2 at packed byte offset 6 to use an unaligned word load; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_array_of_small_struct_is_not_narrow_scalar_array() {
        let src = "typedef unsigned char uint8_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct s { const uint8_t f0; signed char f1; };
                   #pragma pack(pop)
                   int f(void) { struct s a[1] = {{{0UL, 0x5EL}}}; return a[0].f1; }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::Store(..))),
            "expected packed struct array initializer to lower as aggregate stores; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_array_of_small_union_uses_byte_stride_initializer() {
        let src = "union u { unsigned short f0; };
                   int f(void) {
                       union u a[2][3][1] =
                           {{{{0xffffU}},{{0x0db5U}},{{0xffffU}}},
                            {{{0x0db5U}},{{0xffffU}},{{0x0db5U}}}};
                       return 0;
                   }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 10))),
            "expected byte-stride aggregate initializer to place the last \
             two-byte union at byte offset 10; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_packed_struct_array_assignment_copies_exact_bytes() {
        let src = "typedef unsigned short uint16_t;
                   #pragma pack(push)
                   #pragma pack(1)
                   struct s { uint16_t f0; };
                   #pragma pack(pop)
                   void f(void) { struct s a = {0x1234U}; struct s g[5]; g[3] = a; }";
        let ops = lower_first_function_with_unit_packs(src);
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitNot(..))),
            "expected packed struct assignment to use preserving stores; got ops: {ops:?}"
        );
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, -8))),
            "expected packed struct assignment to split and copy the high byte; got ops: {ops:?}"
        );
    }

    #[test]
    fn lower_struct_local_bitfield_init_packs_fields() {
        let src = "struct s { unsigned a : 3; unsigned b : 5; }; int f(void) { struct s v = { 1U, 2U }; return v.b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::BitOr(..))),
            "expected local bitfield initializer to pack shared storage: {ops:?}"
        );
    }

    #[test]
    fn lower_anonymous_bitfield_does_not_consume_init() {
        let src = "struct s { unsigned a : 3; unsigned : 0; unsigned b : 5; unsigned c : 5; };
                   int f(void) { struct s v = { 1U, 2U, 3U }; return 0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 5))),
            "expected c initializer to shift by b's 5-bit width: {ops:?}"
        );
    }

    #[test]
    fn lower_discarded_struct_return_uses_struct_abi() {
        let src = "struct s { int a; int b; int c; };
                   struct s g(void) { struct s x = { 1, 2, 3 }; return x; }
                   int f(void) { (g(), 1); return 0; }";
        let unit = parse::parse(src).unwrap();
        let known = HashSet::from(["g".to_string(), "f".to_string()]);
        let returns = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect::<HashMap<_, _>>();
        let params = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect::<HashMap<_, Vec<Type>>>();
        let lower_unit = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let f = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let ops = lower_function_with_known(
            f,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &lower_unit,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::CallStruct { name, .. } if name == "g")),
            "discarded struct-return call must still use struct ABI: {ops:?}"
        );
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::Call(_, name, _) if name == "g")),
            "discarded struct-return call must not use scalar ABI: {ops:?}"
        );
    }

    #[test]
    fn lower_union_narrow_member_uses_narrow_load() {
        let src = "union u { int f0; signed char f1; short f2; }; int f(void) { union u g = { 0xD48D0EE8L }; return g.f1 + g.f2; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let mask_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::BitAnd(..)))
            .count();
        assert!(
            mask_count >= 2,
            "expected byte and short union member loads to mask: {ops:?}"
        );
    }

    #[test]
    fn lower_assign_deref() {
        let src = "void f(int *p) { *p = 42; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 42))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_assign_index() {
        let src = "void f(int *arr) { arr[3] = 99; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 99))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_arrow_access() {
        let src = "struct s { int val; };\nint f(struct s *p) { return p->val; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_arrow_assign() {
        let src = "struct s { int a; int b; };\nvoid f(struct s *p) { p->b = 5; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // p->b has byte offset 4 (second `int` field), so the lowered
        // IR should contain a LoadImm(_, 4) feeding the address Add.
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 4))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_compound_assign_deref() {
        let src = "void f(int *p) { *p += 10; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_inc_dec_deref() {
        let src = "void f(int *p) { ++(*p); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store(..))));
    }

    #[test]
    fn lower_init_list() {
        let src = "int f() { int arr[3] = {10, 20, 30}; return arr[1]; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should have three stores for the init list elements.
        let store_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            store_count >= 3,
            "expected at least 3 stores for init list, got {store_count}"
        );
    }

    #[test]
    fn lower_stack_array_zero_init_uses_indirect_frame_stores() {
        let src = "int f(void) { int arr[8] = {0}; return arr[1]; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        assert!(result.static_locals.is_empty());
        assert!(
            result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::Store(_, base, 0) if *base != 0)),
            "expected aggregate zero-fill through indirect frame stores: {:?}",
            result.ops
        );
        assert!(
            !result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::Store(_, 0, off) if (0..8).contains(off))),
            "stack aggregate init must not use frame-relative stores: {:?}",
            result.ops
        );
    }

    #[test]
    fn lower_full_word_array_init_elides_zero_fill() {
        let src = "int f(void) { int m[2][2] = {{1, 2}, {3, 4}}; return m[1][1]; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        let zero_stores = result
            .ops
            .windows(2)
            .filter(|w| {
                matches!(w[0], IrOp::LoadImm(_, 0))
                    && matches!(w[1], IrOp::Store(_, base, 0) if base != 0)
            })
            .count();
        assert_eq!(
            zero_stores, 0,
            "fully covered full-word array init should not zero-fill first: {:?}",
            result.ops
        );
    }

    #[test]
    fn lower_large_static_template_copy_materializes_word_addresses() {
        let src = "int f(void) { int arr[100] = {0}; return arr[25]; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        assert_eq!(result.static_locals.len(), 1);
        assert!(
            !result.ops.iter().any(|op| matches!(
                op,
                IrOp::Load(_, base, off) | IrOp::Store(_, base, off)
                    if *base != 0 && *off != 0
            )),
            "large aggregate copies must not rely on truncating indirect offsets: {:?}",
            result.ops
        );
    }

    #[test]
    fn lower_stack_string_array_init_uses_indirect_frame_stores() {
        let src = "int f(void) { char s[8] = \"abcdefg\"; return s[4]; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        assert!(
            result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::Store(_, base, 0) if *base != 0)),
            "expected string array init through indirect frame stores: {:?}",
            result.ops
        );
        assert!(
            !result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::Store(_, 0, off) if (0..2).contains(off))),
            "string array init must not use frame-relative aggregate stores: {:?}",
            result.ops
        );
    }

    #[test]
    fn lower_large_const_aggregate_init_uses_static_template_copy() {
        let items = (0..20)
            .map(|i| format!("{{{}, {}}}", i & 0xff, i + 1))
            .collect::<Vec<_>>()
            .join(",");
        let src = format!(
            "struct s {{ unsigned char a; int b; }}; int f(void) {{ struct s arr[20] = {{{items}}}; return arr[19].b; }}"
        );
        let unit = parse::parse(&src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        assert_eq!(result.static_locals.len(), 1);
        let symbol = &result.static_locals[0].symbol;
        assert!(symbol.starts_with("__selcc_init_f_"));
        assert!(matches!(
            &result.static_locals[0].init,
            Some(Expr::InitList(_))
        ));
        assert!(
            result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::LoadGlobal(_, s) if s == symbol)),
            "expected large aggregate initializer to load a static template: {:?}",
            result.ops
        );
    }

    #[test]
    fn lower_large_const_scalar_array_uses_static_template_copy() {
        let items = (0..20).map(|i| i.to_string()).collect::<Vec<_>>().join(",");
        let src = format!("int f(void) {{ int arr[20] = {{{items}}}; return arr[19]; }}");
        let unit = parse::parse(&src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        assert_eq!(result.static_locals.len(), 1);
        let symbol = &result.static_locals[0].symbol;
        assert!(
            result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::LoadGlobal(_, s) if s == symbol)),
            "expected large scalar array initializer to load a static template: {:?}",
            result.ops
        );
    }

    #[test]
    fn lower_static_local() {
        let src = "int counter() { static int n = 0; n++; return n; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        // Static local should produce a static local entry.
        assert_eq!(result.static_locals.len(), 1);
        assert_eq!(result.static_locals[0].symbol, "_counter_n");
        // Areferences to a static local uses ReadGlobal/StoreGlobal.
        assert!(result
            .ops
            .iter()
            .any(|op| matches!(op, IrOp::ReadGlobal(_, ref s) if s == "_counter_n")));
        assert!(result
            .ops
            .iter()
            .any(|op| matches!(op, IrOp::StoreGlobal(_, ref s) if s == "_counter_n")));
    }

    #[test]
    fn lower_implicit_float_to_int() {
        let src = "int f() { float x = 3.14f; int y = x; return y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FloatToInt(_, _))));
    }

    #[test]
    fn lower_implicit_int_to_float() {
        let src = "float f() { int x = 5; float y = x; return y; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::IntToFloat(_, _))));
    }

    #[test]
    fn lower_implicit_float_to_int_assign() {
        let src = "void f() { int y; float x = 2.5f; y = x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FloatToInt(_, _))));
    }

    #[test]
    fn lower_indirect_call() {
        let src = "typedef int (*fn_t)(int);\nint f(fn_t fp, int x) { return fp(x); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::CallIndirect(_, _, _))));
    }

    #[test]
    fn lower_struct_copy_assign() {
        let src = "struct pt { int x; int y; };\nvoid f() { struct pt a; struct pt b; a.x = 1; a.y = 2; b = a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let load_count = ops.iter().filter(|op| matches!(op, IrOp::Load(..))).count();
        let store_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            load_count >= 2,
            "expected at least 2 loads for struct copy, got {load_count}"
        );
        assert!(
            store_count >= 4,
            "expected at least 4 stores, got {store_count}"
        );
    }

    #[test]
    fn lower_struct_chain_assign() {
        let src =
            "struct pt { int x; int y; };\nvoid f() { struct pt a; struct pt b; struct pt c; c = b = a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let load_count = ops.iter().filter(|op| matches!(op, IrOp::Load(..))).count();
        let store_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            load_count >= 4,
            "expected at least 4 loads for two struct copies, got {load_count}"
        );
        assert!(
            store_count >= 4,
            "expected at least 4 stores for two struct copies, got {store_count}"
        );
    }

    #[test]
    fn lower_struct_pass_by_value() {
        let src = "struct pt { int x; int y; };\nvoid g(struct pt p);\nvoid f() { struct pt a; a.x = 1; a.y = 2; g(a); }";
        let unit = parse::parse(src).unwrap();
        let globals: HashMap<String, Type> =
            vec![("g".to_string(), Type::Void)].into_iter().collect();
        let ops = lower_function(
            &unit.functions[0],
            &globals,
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::Call(_, ref n, ref args) if n == "g" && args.len() == 2)));
    }

    #[test]
    fn lower_struct_compound_literal_argument_passes_all_words() {
        let src = "struct cl_pair { int a; int b; }; static int cl_sum(struct cl_pair p) { return p.a + p.b; } int test_main(void) { return cl_sum((struct cl_pair){10, 20}); }";
        let unit = parse::parse(src).unwrap();
        let known: HashSet<_> = unit.functions.iter().map(|f| f.name.clone()).collect();
        let returns: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect();
        let params: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let ops = lower_function_with_known(
            unit.functions
                .iter()
                .find(|f| f.name == "test_main")
                .unwrap(),
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        let args = ops
            .iter()
            .find_map(|op| match op {
                IrOp::Call(_, name, args) if name == "cl_sum" => Some(args.clone()),
                _ => None,
            })
            .expect("expected call to cl_sum");
        assert_eq!(
            args.len(),
            2,
            "struct argument should flatten to two words: {ops:?}"
        );

        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::Load(dst, base, 0) if *dst == args[0] && *base != 0)),
            "first struct word should be loaded from byte offset 0: {ops:?}"
        );
        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::Load(dst, base, 4) if *dst == args[1] && *base != 0)),
            "second struct word should be loaded from byte offset 4: {ops:?}"
        );
    }

    #[test]
    fn lower_array_decay_to_pointer() {
        let src = "void g(int *p);\nvoid f() { int arr[5]; g(arr); }";
        let unit = parse::parse(src).unwrap();
        let globals: HashMap<String, Type> =
            vec![("g".to_string(), Type::Void)].into_iter().collect();
        let ops = lower_function(
            &unit.functions[0],
            &globals,
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::Call(_, ref n, _) if n == "g")));
    }

    #[test]
    fn lower_typedef_array_decay_to_pointer() {
        let src = "typedef int arr5_t[5]; int f() { arr5_t a = {1,2,3,4,5}; return a[4]; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::FrameAddr(..))));
    }

    #[test]
    fn lower_sizeof_array() {
        let src = "int f() { int arr[10]; return sizeof(arr); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 40))));
    }

    #[test]
    fn lower_long_long_var_decl_and_add() {
        let src = "long long f() { long long a = 1; long long b = 2; return a + b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should contain 64-bit store, load, and add operations.
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store64(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load64(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Add64(..))));
    }

    #[test]
    fn lower_long_long_sub() {
        let src = "long long f(long long a, long long b) { return a - b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Sub64(..))));
    }

    #[test]
    fn lower_long_long_ternary_preserves_pair_result() {
        let src =
            "long long f(int c, unsigned long long r) { return (long long)(c ? 0ULL - r : r); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Neg64(..))));
        assert!(
            ops.iter()
                .filter(|op| matches!(op, IrOp::Copy64(..)))
                .count()
                >= 2
        );
    }

    #[test]
    fn lower_zero_minus_long_long_uses_neg64() {
        let src = "unsigned long long f(unsigned long long r) { return 0ULL - r; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Neg64(..))));
    }

    #[test]
    fn lower_long_long_param_consumes_two_abi_slots() {
        let src = "int f(char *out, unsigned long long val, int base, int upper) { return (int)val + base + upper; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        assert_eq!(result.arg_slots, 5);
        assert!(result.ops.iter().any(|op| matches!(op, IrOp::Copy64(_, 1))));
    }

    #[test]
    fn lower_long_long_call_arg_flattens_to_two_slots() {
        let src = "int g(char *, unsigned long long, int, int); int f(char *out, unsigned long long val) { return g(out, val, 10, 0); }";
        let unit = parse::parse(src).unwrap();
        let func = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let ops = lower_function(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::Call(_, name, args) if name == "g" && args.len() == 5)));
    }

    #[test]
    fn lower_unsigned_member_to_ulonglong_call_zero_extends() {
        let src = "typedef unsigned int uint32_t;
                   void g(unsigned long long);
                   struct S { uint32_t f0; };
                   const struct S s = { 18446744073709551609UL };
                   void f(void) { g(s.f0); }";
        let unit = parse::parse(src).unwrap();
        let func = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let mut globals: HashMap<String, Type> = unit
            .globals
            .iter()
            .map(|g| (g.name.clone(), g.ty.clone()))
            .collect();
        globals.insert(
            "g".to_string(),
            Type::FunctionPtr {
                return_type: Box::new(Type::Void),
                params: vec![Type::ULongLong],
            },
        );
        let ops = lower_function(
            func,
            &globals,
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::IntToLongLong(..))),
            "expected unsigned member call arg to zero-extend: {ops:?}"
        );
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::SExtToLongLong(..))),
            "unsigned member call arg must not sign-extend: {ops:?}"
        );
    }

    #[test]
    fn lower_long_long_call_arg_to_short_param_consumes_one_slot() {
        let src = "typedef unsigned short uint16_t; uint16_t g(uint16_t, unsigned int); int f(long long x) { return g(x, 2); }";
        let unit = parse::parse(src).unwrap();
        let func = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let known = HashSet::from(["g".to_string(), "f".to_string()]);
        let returns = HashMap::from([
            ("g".to_string(), Type::Typedef("uint16_t".to_string())),
            ("f".to_string(), Type::Int),
        ]);
        let params = HashMap::from([(
            "g".to_string(),
            vec![
                Type::Typedef("uint16_t".to_string()),
                Type::Unsigned(Box::new(Type::Int)),
            ],
        )]);
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let ops = lower_function_with_known(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(ops
            .iter()
            .any(|op| matches!(op, IrOp::Call(_, name, args) if name == "g" && args.len() == 2)));
        assert!(ops.iter().any(|op| matches!(op, IrOp::LongLongToInt(..))));
    }

    #[test]
    fn lower_long_long_bitwise() {
        let src = "long long f(long long a, long long b) { return a & b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::BitAnd64(..))));
    }

    #[test]
    fn lower_long_long_negate() {
        let src = "long long f(long long a) { return -a; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Neg64(..))));
    }

    #[test]
    fn lower_long_long_compare() {
        let src = "int f(long long a, long long b) { return a < b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))));
    }

    #[test]
    fn lower_unsigned_long_long_compare() {
        let src = "int f(unsigned long long a, unsigned long long b) { return a > b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::UCmp64(..))));
    }

    #[test]
    fn lower_high_hex_ll_literal_compare_is_unsigned() {
        let src = "typedef unsigned int uint32_t; int f(uint32_t x) { return 0xEFA42B4837182ABBLL <= x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::UCmp64(..))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))));
    }

    #[test]
    fn lower_uint32_vs_int64_compare_is_signed() {
        let src = "typedef unsigned int uint32_t; typedef long long int64_t; int f(uint32_t a, int64_t b) { return a > b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::UCmp64(..))));
    }

    #[test]
    fn lower_uint32_vs_lognot_int64_compare_is_unsigned() {
        let src = "typedef unsigned int uint32_t; typedef long long int64_t; int f(uint32_t a, int64_t b) { return a > !b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::UCmp(..))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::Cmp(..))));
    }

    #[test]
    fn lower_if_lognot_long_long_uses_64bit_zero_compare() {
        let src = "int f(long long x) { if (!x) return 1; return 0; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm64(_, 0)))
                && ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))),
            "direct branch lowering for !long long must compare both words: {ops:?}"
        );
    }

    #[test]
    fn lower_expression_log_and_long_long_uses_64bit_zero_compare() {
        let src = "int f(long long x) { return x && 1; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))),
            "expression-valued && must test both words of a long long: {ops:?}"
        );
    }

    #[test]
    fn lower_comparison_result_vs_int64_is_signed() {
        let src = "typedef unsigned int uint32_t; typedef long long int64_t; struct S { int64_t x; }; int f(uint32_t a, struct S s) { return (a == 1U) <= s.x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Cmp64(..))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::UCmp64(..))));
    }

    #[test]
    fn lower_typedef_call_bitxor_compare_keeps_unsigned() {
        let src = "typedef unsigned int uint32_t; uint32_t h(void); int f(int p) { return ((h() ^ -1L) < p); }";
        let unit = parse::parse(src).unwrap();
        let func = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let known = HashSet::from(["h".to_string(), "f".to_string()]);
        let returns = HashMap::from([
            ("h".to_string(), Type::Typedef("uint32_t".to_string())),
            ("f".to_string(), Type::Int),
        ]);
        let params = HashMap::new();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let ops = lower_function_with_known(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::UCmp(..))));
    }

    #[test]
    fn lower_cast_int_to_long_long() {
        let src = "long long f(int x) { return (long long)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::SExtToLongLong(..))));
    }

    #[test]
    fn lower_cast_unsigned_int_to_long_long_zero_extends() {
        let src = "long long f(unsigned int x) { return (long long)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::IntToLongLong(..))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::SExtToLongLong(..))));
    }

    #[test]
    fn lower_return_unsigned_int_as_long_long_zero_extends() {
        let src = "const long long f(unsigned int x) { return x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::IntToLongLong(..))));
        assert!(!ops.iter().any(|op| matches!(op, IrOp::SExtToLongLong(..))));
    }

    #[test]
    fn lower_cast_long_long_to_int() {
        let src = "int f(long long x) { return (int)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LongLongToInt(..))));
    }

    #[test]
    fn lower_cast_long_long_to_signed_char_sign_extends() {
        let src = "int f(long long x) { return (signed char)x; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::LongLongToInt(..))));
        // Signed narrowing sign-extends via Shl+Shr; the left shift discards
        // the high bits, so no redundant pre-mask AND should be emitted.
        assert!(ops.iter().any(|op| matches!(op, IrOp::Shl(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Shr(..))));
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::BitAnd(..))),
            "signed narrowing must not emit a redundant pre-mask AND"
        );
    }

    #[test]
    fn lower_long_long_assign() {
        let src = "void f() { long long x; x = 42; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // The assignment to a long long should widen the 32-bit literal and use Store64.
        assert!(ops.iter().any(|op| matches!(op, IrOp::Store64(..))));
    }

    #[test]
    fn lower_long_long_mul() {
        let src = "long long f(long long a, long long b) { return a * b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Mul64(..))));
    }

    #[test]
    fn lower_signed_long_long_div_uses_runtime_helper() {
        // Signed 64-bit division is emitted as a single ___div64 runtime call
        // (IrOp::Div64). The earlier inline abs+unsigned-divide sequence needed
        // too many values live across the divide and miscompiled.
        let src = "long long f(long long a, long long b) { return a / b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Div64(..))));
    }

    #[test]
    fn lower_signed_long_long_mod_uses_runtime_helper() {
        let src = "long long f(long long a, long long b) { return a % b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(ops.iter().any(|op| matches!(op, IrOp::Mod64(..))));
    }

    #[test]
    fn lower_sizeof_long_long() {
        let src = "int f() { return sizeof(long long); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // sizeof(long long) = 8
        assert!(ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 8))));
    }

    #[test]
    fn lower_vla_emits_stack_alloc() {
        let src = "int f(int n) { int a[n]; return 0; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        // VLA lowering should produce a StackAlloc instruction.
        assert!(
            result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::StackAlloc(_, _))),
            "expected StackAlloc in IR for VLA, got: {:#?}",
            result.ops
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
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap();
        // Block containing VLA should save and restore the stack pointer.
        assert!(
            result.ops.iter().any(|op| matches!(op, IrOp::StackSave(_))),
            "expected StackSave for VLA block scope"
        );
        assert!(
            result
                .ops
                .iter()
                .any(|op| matches!(op, IrOp::StackRestore(_))),
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
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
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
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        );
        assert!(result.is_ok(), "goto before VLA should be allowed");
    }

    #[test]
    fn lower_variadic_loads_named_args_from_caller_stack() {
        // SHARC+ variadic ABI passes every argument (including the named
        // ones) on the caller's stack, so the variadic prologue must
        // load the named params from `LoadStackArg(i)` and copy them to
        // local frame slots — not spill ARG_REGS that the caller never
        // populated.
        let src = "int sum(int count, ...) { return count; }";
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        assert!(func.is_variadic);
        let ops = lower_function(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let stack_arg_loads = ops
            .iter()
            .filter(|op| matches!(op, IrOp::LoadStackArg(..)))
            .count();
        assert!(
            stack_arg_loads >= 1,
            "expected at least 1 LoadStackArg for the named param, got {stack_arg_loads}"
        );
        let store_count = ops
            .iter()
            .filter(|op| matches!(op, IrOp::Store(..)))
            .count();
        assert!(
            store_count >= 1,
            "expected at least 1 Store to materialise the named param locally, got {store_count}"
        );
    }

    #[test]
    fn lower_variadic_named_param_on_stack() {
        // Named parameter of a variadic function is accessible as a
        // stack-allocated local (required for va_start to take &last).
        let src = "int sum(int count, ...) { return count; }";
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        let ops = lower_function(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // 'count' is on the stack, so reading it should use Load (not just Copy).
        let load_count = ops.iter().filter(|op| matches!(op, IrOp::Load(..))).count();
        assert!(
            load_count >= 1,
            "expected at least 1 Load for reading 'count' from stack, got {load_count}"
        );
    }

    #[test]
    fn lower_address_of_local_uses_frame_addr() {
        // Taking the address of a local variable should use FrameAddr
        // to produce an absolute address.
        let src = "int f() { int x = 5; int *p = &x; return *p; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::FrameAddr(..))),
            "expected FrameAddr for &x, got: {ops:?}"
        );
    }

    #[test]
    fn lower_variadic_addr_of_named_param() {
        // Taking address of a named parameter in a variadic function
        // should produce a FrameAddr (the param is forced onto the stack).
        let src = "int f(int count, ...) { int *p = &count; return *p; }";
        let unit = parse::parse(src).unwrap();
        let func = &unit.functions[0];
        let ops = lower_function(
            func,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::FrameAddr(..))),
            "expected FrameAddr from &count in variadic function, got: {ops:?}"
        );
    }

    #[test]
    fn lower_complex_add() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a + b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Complex addition emits two FAdd ops (real + real, imag + imag).
        let fadd_count = ops.iter().filter(|op| matches!(op, IrOp::FAdd(..))).count();
        assert!(
            fadd_count >= 2,
            "expected at least 2 FAdd for complex add, got {fadd_count}"
        );
    }

    #[test]
    fn lower_complex_return_uses_pair_return() {
        let src = "double _Complex f(double _Complex z) { return z; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(
                op,
                IrOp::RetStruct {
                    dst_addr: None,
                    num_words: 2,
                    ..
                }
            )),
            "expected complex return to use two-word RetStruct, got: {ops:?}"
        );
        assert!(
            !ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))),
            "complex return must not collapse to scalar Ret: {ops:?}"
        );
    }

    #[test]
    fn lower_typedef_struct_local_uses_deepest_slot_base() {
        let src = r#"
            typedef struct { long long quot; long long rem; } pair_t;
            pair_t f(void) {
                pair_t r;
                return r;
            }
        "#;
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::FrameAddr(_, 4))),
            "typedef struct local should use the deepest word as its base, got: {ops:?}"
        );
    }

    #[test]
    fn lower_complex_sub() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a - b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        let fsub_count = ops.iter().filter(|op| matches!(op, IrOp::FSub(..))).count();
        assert!(
            fsub_count >= 2,
            "expected at least 2 FSub for complex sub, got {fsub_count}"
        );
    }

    #[test]
    fn lower_complex_mul() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a * b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Complex multiply: ac, bd, ad, bc = 4 FMul, then FSub + FAdd.
        let fmul_count = ops.iter().filter(|op| matches!(op, IrOp::FMul(..))).count();
        assert!(
            fmul_count >= 4,
            "expected at least 4 FMul for complex mul, got {fmul_count}"
        );
    }

    #[test]
    fn lower_complex_div() {
        let src = "float _Complex f() { float _Complex a; float _Complex b; return a / b; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Complex division uses FMul, FAdd, FSub, FDiv.
        let fdiv_count = ops.iter().filter(|op| matches!(op, IrOp::FDiv(..))).count();
        assert!(
            fdiv_count >= 2,
            "expected at least 2 FDiv for complex div, got {fdiv_count}"
        );
    }

    #[test]
    fn lower_real_plus_complex() {
        let src = "float _Complex f(float r) { float _Complex c; return r + c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should produce FAdd for the real parts.
        assert!(ops.iter().any(|op| matches!(op, IrOp::FAdd(..))));
    }

    #[test]
    fn lower_real_part_operator() {
        let src = "float f() { float _Complex c; return __real__ c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should load from the complex variable's real part (offset 0).
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
        assert!(ops.iter().any(|op| matches!(op, IrOp::Ret(Some(_)))));
    }

    #[test]
    fn lower_imag_part_operator() {
        let src = "float f() { float _Complex c; return __imag__ c; }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        // Should load from the complex variable's imaginary part (offset 1).
        assert!(ops.iter().any(|op| matches!(op, IrOp::Load(..))));
    }

    #[test]
    fn lower_complex_accessors_inline_extern_calls() {
        let src = "int f() { double _Complex z = 2.0 + 3.0 * 1.0fi; return (int)creal(z) + (int)cimag(z); }";
        let unit = parse::parse(src).unwrap();
        let ops = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        )
        .unwrap()
        .ops;
        assert!(
            !ops.iter().any(|op| matches!(
                op,
                IrOp::Call(_, name, _) if name == "creal" || name == "cimag"
            )),
            "extern complex accessors should lower inline, got: {ops:?}"
        );
    }

    #[test]
    fn lower_complex_accessors_preserve_local_definitions() {
        let src = "double creal(double _Complex z) { return 7.0; } int f() { double _Complex z; return (int)creal(z); }";
        let unit = parse::parse(src).unwrap();
        let known: HashSet<_> = unit.functions.iter().map(|f| f.name.clone()).collect();
        let returns: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect();
        let params: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let f = unit.functions.iter().find(|f| f.name == "f").unwrap();
        let ops = lower_function_with_known(
            f,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::Call(_, name, _) if name == "creal")),
            "same-translation-unit creal definition must remain callable, got: {ops:?}"
        );
    }

    #[test]
    fn lower_const_function_pointer_array_calls_direct() {
        let src = "static int cplx_fn1(void) { return 10; } static int cplx_fn2(void) { return 20; } int test_main(void) { int (*arr[2])(void) = {cplx_fn1, cplx_fn2}; int (*(*pp))(void) = &arr[0]; return (*pp)() + arr[1](); }";
        let unit = parse::parse(src).unwrap();
        let known: HashSet<_> = unit.functions.iter().map(|f| f.name.clone()).collect();
        let returns: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect();
        let params: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let test_main = unit
            .functions
            .iter()
            .find(|f| f.name == "test_main")
            .unwrap();
        let ops = lower_function_with_known(
            test_main,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::Call(_, name, args) if name == "cplx_fn1" && args.is_empty())),
            "(*pp)() should resolve to a direct cplx_fn1 call, got: {ops:?}"
        );
        assert!(
            ops.iter()
                .any(|op| matches!(op, IrOp::Call(_, name, args) if name == "cplx_fn2" && args.is_empty())),
            "arr[1]() should resolve to a direct cplx_fn2 call, got: {ops:?}"
        );
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::CallIndirect(_, _, _))),
            "constant function pointer array calls should not stay indirect, got: {ops:?}"
        );
    }

    #[test]
    fn lower_assigned_function_pointer_array_call_direct() {
        let src = "static int *cpd_fn1(void) { static int x; return &x; } int test_main(void) { int *(*arr[1])(void); arr[0] = cpd_fn1; return *arr[0](); }";
        let unit = parse::parse(src).unwrap();
        let known: HashSet<_> = unit.functions.iter().map(|f| f.name.clone()).collect();
        let returns: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect();
        let params: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let test_main = unit
            .functions
            .iter()
            .find(|f| f.name == "test_main")
            .unwrap();
        let ops = lower_function_with_known(
            test_main,
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(
                |op| matches!(op, IrOp::Call(_, name, args) if name == "cpd_fn1" && args.is_empty())
            ),
            "assigned function-pointer array call should resolve direct, got: {ops:?}"
        );
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::CallIndirect(_, _, _))),
            "assigned function-pointer array call should not stay indirect, got: {ops:?}"
        );
    }

    #[test]
    fn lower_scalar_compound_literal_pointer_deref_folds_value() {
        let src = "int test_main(void) { int *p = &(int){0x42}; return *p; }";
        let unit = parse::parse(src).unwrap();
        let known: HashSet<_> = unit.functions.iter().map(|f| f.name.clone()).collect();
        let returns: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect();
        let params: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let ops = lower_function_with_known(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(
            ops.iter().any(|op| matches!(op, IrOp::LoadImm(_, 0x42))),
            "constant compound literal pointee should load as an immediate, got: {ops:?}"
        );
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::Load(_, base, _) if *base != 0)),
            "constant compound literal pointee should not require indirect load, got: {ops:?}"
        );
    }

    #[test]
    fn lower_array_compound_literal_pointer_index_reuses_initializer_expr() {
        let src = "int test_main(void) { int sum = 0; for (int i = 1; i <= 5; i++) { const int *p = (const int[]){i, i * 2}; sum += p[0]; } return sum; }";
        let unit = parse::parse(src).unwrap();
        let known: HashSet<_> = unit.functions.iter().map(|f| f.name.clone()).collect();
        let returns: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| (f.name.clone(), f.return_type.clone()))
            .collect();
        let params: HashMap<_, _> = unit
            .functions
            .iter()
            .map(|f| {
                (
                    f.name.clone(),
                    f.params.iter().map(|(_, t)| t.clone()).collect(),
                )
            })
            .collect();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let ops = lower_function_with_known(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        )
        .unwrap()
        .ops;
        assert!(
            !ops.iter()
                .any(|op| matches!(op, IrOp::Load(_, base, _) if *base != 0)),
            "p[0] from a side-effect-free array compound literal should not require an indirect load, got: {ops:?}"
        );
    }

    #[test]
    fn lower_implicit_function_rejected() {
        let src = "int f() { return unknown_func(42); }";
        let unit = parse::parse(src).unwrap();
        let mut known = HashSet::new();
        known.insert("f".to_string());
        let returns = HashMap::new();
        let params = HashMap::new();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let result = lower_function_with_known(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        );
        assert!(
            result.is_err(),
            "expected error for implicit function declaration"
        );
        let err = result.unwrap_err();
        let msg = format!("{err}");
        assert!(
            msg.contains("implicit declaration"),
            "expected implicit declaration error, got: {msg}"
        );
    }

    #[test]
    fn lower_declared_function_accepted() {
        let src = "extern int bar(int);\nint f() { return bar(42); }";
        let unit = parse::parse(src).unwrap();
        let mut known = HashSet::new();
        known.insert("f".to_string());
        known.insert("bar".to_string());
        let returns = HashMap::new();
        let params = HashMap::new();
        let unit_ctx = LowerUnitCtx {
            known_functions: &known,
            function_return_types: &returns,
            function_param_types: &params,
            struct_packs: &unit.struct_packs,
        };
        let result = lower_function_with_known(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
            &unit_ctx,
        );
        assert!(result.is_ok(), "expected declared function to be accepted");
    }

    #[test]
    fn lower_implicit_return_warning() {
        // This should emit a warning to stderr but not fail.
        let src = "int f() { int x = 42; }";
        let unit = parse::parse(src).unwrap();
        let result = lower_function(
            &unit.functions[0],
            &HashMap::new(),
            &unit.struct_defs,
            &unit.enum_constants,
            &unit.typedefs,
        );
        // Should succeed (warning, not error).
        assert!(result.is_ok());
        // The last op should be Ret(None) (implicit return).
        let ops = result.unwrap().ops;
        assert!(matches!(ops.last(), Some(IrOp::Ret(None))));
    }
}
