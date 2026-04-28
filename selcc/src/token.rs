// SPDX-License-Identifier: GPL-3.0
// token.rs --- C language token types
// Copyright (c) 2026 Jakob Kastelic

/// Integer literal suffix per C99 6.4.4.1.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum IntSuffix {
    /// No suffix: type determined by value range.
    None,
    /// `u` / `U`
    U,
    /// `l` / `L`
    L,
    /// `ul` / `UL`
    UL,
    /// `ll` / `LL`
    LL,
    /// `ull` / `ULL`
    Ull,
}

#[derive(Debug, Clone, PartialEq)]
pub enum Token {
    // Literals
    IntLit(i64, IntSuffix),
    FloatLit(f64),
    /// Imaginary float literal (GCC extension): `1.0fi`, `2.0i`, etc.
    /// Carries the imaginary magnitude; the implied real part is zero.
    ImagFloatLit(f64),
    StringLit(String),
    WideStringLit(Vec<u32>),
    CharLit(i64),

    // Identifiers
    Ident(String),

    // Keywords -- types
    Int,
    Void,
    Char,
    Short,
    Long,
    Float,
    Double,
    Unsigned,
    Signed,
    Struct,
    Union,
    Enum,
    Typedef,
    Const,
    Static,
    Extern,
    Volatile,
    Register,
    Auto,
    Bool,
    Complex,
    Imaginary,

    // Keywords -- control flow
    Return,
    If,
    Else,
    While,
    For,
    Do,
    Switch,
    Case,
    Default,
    Break,
    Continue,
    Goto,

    // Keywords -- operators
    Sizeof,
    Asm,

    // Operators
    Plus,
    Minus,
    Star,
    Slash,
    Percent,
    Amp,
    Pipe,
    Caret,
    Tilde,
    Bang,
    Shl,
    Shr,
    Eq,
    Ne,
    Lt,
    Gt,
    Le,
    Ge,
    And,
    Or,
    Assign,

    // New operators
    Arrow,        // ->
    Dot,          // .
    PlusPlus,     // ++
    MinusMinus,   // --
    PlusAssign,   // +=
    MinusAssign,  // -=
    StarAssign,   // *=
    SlashAssign,  // /=
    PercentAssign,// %=
    AmpAssign,    // &=
    PipeAssign,   // |=
    CaretAssign,  // ^=
    ShlAssign,    // <<=
    ShrAssign,    // >>=
    Question,     // ?
    Colon,        // :
    Ellipsis,     // ...

    // Delimiters
    LParen,
    RParen,
    LBrace,
    RBrace,
    LBracket,
    RBracket,
    Semicolon,
    Comma,

    // Special
    Eof,
}
