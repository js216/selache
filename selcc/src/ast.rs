// SPDX-License-Identifier: GPL-3.0
// ast.rs --- C abstract syntax tree node types
// Copyright (c) 2026 Jakob Kastelic

use crate::token::IntSuffix;
use crate::types::Type;

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum UnaryOp {
    Neg,
    BitNot,
    LogNot,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum BinaryOp {
    Add,
    Sub,
    Mul,
    Div,
    Mod,
    BitAnd,
    BitOr,
    BitXor,
    Shl,
    Shr,
    Eq,
    Ne,
    Lt,
    Gt,
    Le,
    Ge,
    LogAnd,
    LogOr,
}

#[derive(Debug, Clone, PartialEq)]
pub enum SizeofArg {
    Expr(Expr),
    Type(Type),
}

#[derive(Debug, Clone, PartialEq)]
pub enum Expr {
    IntLit(i64, IntSuffix),
    FloatLit(f64),
    /// Imaginary float literal (GCC extension): `1.0fi` parses as
    /// `ImagLit(1.0)`. The implied real part is zero; the type is
    /// `_Complex float`.
    ImagLit(f64),
    StringLit(String),
    WideStringLit(Vec<u32>),
    CharLit(i64),
    Ident(String),
    Unary {
        op: UnaryOp,
        operand: Box<Expr>,
    },
    Binary {
        op: BinaryOp,
        lhs: Box<Expr>,
        rhs: Box<Expr>,
    },
    Call {
        name: String,
        args: Vec<Expr>,
    },
    CallIndirect {
        func_expr: Box<Expr>,
        args: Vec<Expr>,
    },
    Assign {
        target: Box<Expr>,
        value: Box<Expr>,
    },
    Deref(Box<Expr>),
    AddrOf(Box<Expr>),
    Index(Box<Expr>, Box<Expr>),
    Member(Box<Expr>, String),
    Arrow(Box<Expr>, String),
    Sizeof(Box<SizeofArg>),
    Cast(Type, Box<Expr>),
    PreInc(Box<Expr>),
    PreDec(Box<Expr>),
    PostInc(Box<Expr>),
    PostDec(Box<Expr>),
    CompoundAssign {
        op: BinaryOp,
        target: Box<Expr>,
        value: Box<Expr>,
    },
    Ternary {
        cond: Box<Expr>,
        then_expr: Box<Expr>,
        else_expr: Box<Expr>,
    },
    InitList(Vec<Expr>),
    Comma(Box<Expr>, Box<Expr>),
    DesignatedInit {
        field: String,
        value: Box<Expr>,
    },
    ArrayDesignator {
        index: Box<Expr>,
        value: Box<Expr>,
    },
    RealPart(Box<Expr>),
    ImagPart(Box<Expr>),
}

#[derive(Debug, Clone, PartialEq)]
pub enum Stmt {
    Return(Option<Expr>),
    Expr(Expr),
    VarDecl {
        name: String,
        ty: Type,
        init: Option<Expr>,
        is_static: bool,
        /// For VLAs, the runtime dimension expression (e.g. `n` in `int a[n]`).
        vla_dim: Option<Expr>,
    },
    If {
        cond: Expr,
        then_body: Vec<Stmt>,
        else_body: Option<Vec<Stmt>>,
    },
    While {
        cond: Expr,
        body: Vec<Stmt>,
    },
    For {
        init: Option<Box<Stmt>>,
        cond: Option<Expr>,
        step: Option<Expr>,
        body: Vec<Stmt>,
    },
    DoWhile {
        body: Vec<Stmt>,
        cond: Expr,
    },
    Block(Vec<Stmt>),
    /// Multi-declarator grouping synthesized by the parser for a single
    /// declaration that declares several names, e.g. `int a=1, b=2;`.
    /// Unlike [`Stmt::Block`] this has *no* scope semantics — all
    /// declarations are in the enclosing scope per C99 6.7/5.
    DeclGroup(Vec<Stmt>),
    /// Block-local `enum { X = v, ... }` declaration. Constants bind
    /// at the enclosing block's scope (C99 6.2.1) — lowering inserts
    /// them into `ctx.enum_constants` inside the current scope and
    /// the block's `restore_scope` rolls them back on exit.
    EnumDecl(Vec<(String, i64)>),
    Switch {
        expr: Expr,
        body: Vec<Stmt>,
    },
    CaseLabel(Expr),
    DefaultLabel,
    Break,
    Continue,
    Goto(String),
    Label(String, Box<Stmt>),
    Asm(String),
}

#[derive(Debug, Clone, PartialEq)]
pub struct Function {
    pub name: String,
    pub return_type: Type,
    pub params: Vec<(String, Type)>,
    pub is_variadic: bool,
    pub body: Vec<Stmt>,
    pub is_static: bool,
    pub is_weak: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct GlobalDecl {
    pub name: String,
    pub ty: Type,
    pub init: Option<Expr>,
    pub is_static: bool,
    pub is_extern: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct TranslationUnit {
    pub functions: Vec<Function>,
    pub globals: Vec<GlobalDecl>,
    pub typedefs: Vec<(String, Type)>,
    pub struct_defs: Vec<(String, Vec<(String, Type)>)>,
    pub enum_constants: Vec<(String, i64)>,
    /// Names of functions known to be variadic (declared with `...`),
    /// including forward declarations of externs. Looked up by call
    /// lowering to choose stack-passing for variadic callees.
    pub variadic_functions: std::collections::HashSet<String>,
    /// For each variadic function, the number of *named* parameters
    /// (everything before the `...`). The SHARC+ variadic-call ABI
    /// always places the last named arg on the stack and only puts
    /// up to `min(named-1, ARG_REGS.len())` *preceding* named args
    /// in registers, so callers must know the named count to lay out
    /// the call exactly the same way the callee's prologue reads it.
    pub variadic_named_counts: std::collections::HashMap<String, usize>,
    /// Names of functions whose parameter list contains a `_Complex`
    /// type. The reference C calling convention passes complex parameters
    /// entirely on the stack (no `R4`/`R8`/`R12` register slots): the
    /// caller pushes imag then real, and the callee reads them as
    /// `DM(I6+1)` / `DM(I6+2)` from the post-`cjump` swapped-frame
    /// layout. To stay compatible with reference-toolchain-compiled libsel callees
    /// such as `cabsf`, every call to a function in this set must use
    /// the stack-only push path.
    pub complex_arg_callees: std::collections::HashSet<String>,
}
