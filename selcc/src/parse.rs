// SPDX-License-Identifier: GPL-3.0
// parse.rs --- Recursive-descent C parser with Pratt expression parsing
// Copyright (c) 2026 Jakob Kastelic

use crate::ast::{BinaryOp, Expr, Function, GlobalDecl, SizeofArg, Stmt, TranslationUnit, UnaryOp};
use crate::error::Error;
use crate::lex::Lexer;
use crate::token::Token;
use crate::types::Type;

/// Check if a token starts a type specifier.
fn is_type_start(t: &Token) -> bool {
    if matches!(
        t,
        Token::Int
            | Token::Void
            | Token::Char
            | Token::Short
            | Token::Long
            | Token::Float
            | Token::Double
            | Token::Unsigned
            | Token::Signed
            | Token::Struct
            | Token::Union
            | Token::Enum
            | Token::Const
            | Token::Volatile
            | Token::Bool
    ) {
        return true;
    }
    // Recognize platform builtin types and qualifiers
    if let Token::Ident(name) = t {
        return matches!(
            name.as_str(),
            "__builtin_quad" | "__pm" | "__dm" | "__byte_addressed" | "__word_addressed"
                | "size_t" | "ptrdiff_t" | "intptr_t" | "uintptr_t"
        );
    }
    false
}

struct Parser<'a> {
    lexer: Lexer<'a>,
    current: Token,
    /// Names that have been declared as typedefs.
    typedef_names: std::collections::HashSet<String>,
    /// Enum constants collected during parsing.
    enum_constants: Vec<(String, i64)>,
    /// Depth of nested function bodies / blocks currently being parsed.
    /// Zero means file scope. Used so that `enum { ... }` parsed
    /// inside a block can be redirected to a block-scoped
    /// [`Stmt::EnumDecl`] rather than leaking into the flat
    /// translation-unit [`Parser::enum_constants`] list.
    block_depth: u32,
    /// Constants collected by the most recent `enum { ... }` parsed
    /// while `block_depth > 0`. The enclosing block-scoped statement
    /// drains this into a [`Stmt::EnumDecl`] so that lowering can
    /// honour per-block enumerator shadowing (C99 6.2.1).
    pending_block_enum_consts: Vec<(String, i64)>,
    /// Current function name for __func__ (C99 6.4.2.2).
    current_function: String,
}

impl<'a> Parser<'a> {
    fn new(src: &'a str) -> Result<Self, Error> {
        let mut lexer = Lexer::new(src);
        let current = lexer.next_token()?;
        Ok(Parser {
            lexer,
            current,
            typedef_names: std::collections::HashSet::new(),
            enum_constants: Vec::new(),
            block_depth: 0,
            pending_block_enum_consts: Vec::new(),
            current_function: String::new(),
        })
    }

    fn err(&self, msg: String) -> Error {
        Error::Parse {
            line: self.lexer.line(),
            col: self.lexer.col(),
            msg,
        }
    }

    fn advance(&mut self) -> Result<Token, Error> {
        let prev = std::mem::replace(&mut self.current, Token::Eof);
        self.current = self.lexer.next_token()?;
        Ok(prev)
    }

    fn expect(&mut self, expected: &Token) -> Result<(), Error> {
        if &self.current == expected {
            self.advance()?;
            Ok(())
        } else {
            Err(self.err(format!("expected {expected:?}, got {:?}", self.current)))
        }
    }

    fn expect_ident(&mut self) -> Result<String, Error> {
        match self.advance()? {
            Token::Ident(name) => Ok(name),
            other => Err(self.err(format!("expected identifier, got {other:?}"))),
        }
    }

    /// Check whether the current token starts a type specifier, including
    /// typedef names.
    fn is_type_token(&self) -> bool {
        if is_type_start(&self.current) {
            return true;
        }
        matches!(&self.current, Token::Ident(name) if self.typedef_names.contains(name))
    }

    // ---- Type parsing ----

    fn parse_type(&mut self) -> Result<Type, Error> {
        // Consume optional const/volatile/__pm/__dm qualifiers (can appear multiple times).
        let mut has_const = false;
        let mut has_volatile = false;
        loop {
            if self.current == Token::Const {
                has_const = true;
                self.advance()?;
            } else if self.current == Token::Volatile {
                has_volatile = true;
                self.advance()?;
            } else if matches!(&self.current, Token::Ident(name) if matches!(name.as_str(), "__pm" | "__dm" | "__byte_addressed" | "__word_addressed" | "__section" | "__attribute__" | "__inline" | "__inline__" | "inline" | "__restrict" | "restrict" | "__restrict__")) {
                self.advance()?;
                // Skip __attribute__((xxx)) if present
                if self.current == Token::LParen {
                    let mut depth = 0;
                    loop {
                        if self.current == Token::LParen { depth += 1; }
                        if self.current == Token::RParen { depth -= 1; }
                        self.advance()?;
                        if depth == 0 { break; }
                    }
                }
            } else {
                break;
            }
        }

        // Collect type specifier keywords in any order:
        // C allows: `long unsigned int`, `unsigned long`, `signed char`, etc.
        let mut has_unsigned = false;
        let mut long_count: u8 = 0;
        let mut has_short = false;
        let mut has_char = false;
        let mut has_float = false;
        let mut has_double = false;
        let mut has_void = false;
        let mut has_complex = false;
        let mut has_imaginary = false;
        let mut consumed_specifier = false;

        loop {
            match &self.current {
                Token::Unsigned => { has_unsigned = true; consumed_specifier = true; self.advance()?; }
                Token::Signed => { consumed_specifier = true; self.advance()?; }
                Token::Long => { long_count += 1; consumed_specifier = true; self.advance()?; }
                Token::Short => { has_short = true; consumed_specifier = true; self.advance()?; }
                Token::Int => { consumed_specifier = true; self.advance()?; }
                Token::Char => { has_char = true; consumed_specifier = true; self.advance()?; }
                Token::Float => { has_float = true; consumed_specifier = true; self.advance()?; }
                Token::Double => { has_double = true; consumed_specifier = true; self.advance()?; }
                Token::Void => { has_void = true; consumed_specifier = true; self.advance()?; }
                Token::Complex => { has_complex = true; consumed_specifier = true; self.advance()?; }
                Token::Imaginary => { has_imaginary = true; consumed_specifier = true; self.advance()?; }
                Token::Const => { has_const = true; self.advance()?; }
                Token::Volatile => { has_volatile = true; self.advance()?; }
                _ => break,
            }
        }

        // If we consumed simple specifiers, resolve the type.
        if consumed_specifier {
            let mut ty = if has_void { Type::Void }
                else if has_float { Type::Float }
                else if has_double { Type::Double }
                else if has_char && has_unsigned { Type::Unsigned(Box::new(Type::Char)) }
                else if has_char { Type::Char }
                else if has_short && has_unsigned { Type::Unsigned(Box::new(Type::Short)) }
                else if has_short { Type::Short }
                else if long_count >= 2 && has_unsigned { Type::ULongLong }
                else if long_count >= 2 { Type::LongLong }
                else if long_count == 1 && has_unsigned { Type::Unsigned(Box::new(Type::Long)) }
                else if long_count == 1 { Type::Long }
                else if has_unsigned { Type::Unsigned(Box::new(Type::Int)) }
                else { Type::Int }; // int, or bare signed
            if has_complex {
                ty = Type::Complex(Box::new(ty));
            } else if has_imaginary {
                ty = Type::Imaginary(Box::new(ty));
            }
            if has_volatile {
                ty = Type::Volatile(Box::new(ty));
            }
            if has_const {
                ty = Type::Const(Box::new(ty));
            }
            return Ok(ty);
        }

        // Non-specifier types: struct, union, enum, _Bool, builtins, typedefs
        let base = match &self.current {
            Token::Bool => {
                self.advance()?;
                Type::Bool
            }
            Token::Struct => {
                self.advance()?;
                self.parse_struct_or_union(true)?
            }
            Token::Union => {
                self.advance()?;
                self.parse_struct_or_union(false)?
            }
            Token::Enum => {
                self.advance()?;
                let name = if let Token::Ident(_) = &self.current {
                    Some(self.expect_ident()?)
                } else {
                    None
                };
                if self.current == Token::LBrace {
                    self.advance()?;
                    let mut next_val: i64 = 0;
                    while self.current != Token::RBrace {
                        let const_name = self.expect_ident()?;
                        if self.current == Token::Assign {
                            self.advance()?;
                            let val_expr = self.parse_assign()?;
                            next_val = const_eval(&val_expr);
                        }
                        if self.block_depth > 0 {
                            // Inside a function body: collect for a
                            // block-scoped `Stmt::EnumDecl`.
                            self.pending_block_enum_consts
                                .push((const_name, next_val));
                        } else {
                            self.enum_constants.push((const_name, next_val));
                        }
                        next_val += 1;
                        if self.current == Token::Comma {
                            self.advance()?;
                        }
                    }
                    self.expect(&Token::RBrace)?;
                }
                Type::Enum { name }
            }
            Token::Ident(ref name) if name == "__builtin_quad" => {
                self.advance()?;
                Type::Long
            }
            Token::Ident(ref name) if matches!(name.as_str(), "size_t" | "uintptr_t") => {
                self.advance()?;
                Type::Unsigned(Box::new(Type::Int))
            }
            Token::Ident(ref name) if matches!(name.as_str(), "ptrdiff_t" | "intptr_t") => {
                self.advance()?;
                Type::Int
            }
            Token::Ident(name) if self.typedef_names.contains(name) => {
                let name = name.clone();
                self.advance()?;
                Type::Typedef(name)
            }
            _ => return Err(self.err(format!("expected type, got {:?}", self.current))),
        };
        let mut ty = base;
        if has_volatile {
            ty = Type::Volatile(Box::new(ty));
        }
        if has_const {
            ty = Type::Const(Box::new(ty));
        }
        Ok(ty)
    }

    // ---- Top-level parsing ----

    fn parse_translation_unit(&mut self) -> Result<TranslationUnit, Error> {
        let mut functions = Vec::new();
        let mut globals = Vec::new();
        let mut typedefs: Vec<(String, Type)> = Vec::new();
        let mut struct_defs: Vec<(String, Vec<(String, Type)>)> = Vec::new();
        let enum_constants: Vec<(String, i64)> = Vec::new();
        let mut variadic_decls: std::collections::HashSet<String> =
            std::collections::HashSet::new();
        while self.current != Token::Eof {
            // Handle typedef declarations.
            if self.current == Token::Typedef {
                self.advance()?;
                let ty = self.parse_type()?;
                let ty = self.parse_pointer_type(ty);
                // Check for function pointer typedef: typedef int (*name)(params)
                if self.current == Token::LParen && self.is_fnptr_declarator() {
                    self.advance()?; // (
                    let (stars, alias, has_brackets, array_dim) = self.parse_paren_ptr_decl()?;
                    let final_ty = self.finish_paren_ptr_type(ty, stars, has_brackets, array_dim)?;
                    self.expect(&Token::Semicolon)?;
                    self.typedef_names.insert(alias.clone());
                    typedefs.push((alias, final_ty));
                    continue;
                }
                let mut alias = self.expect_ident()?;
                // Check for function type typedef: typedef rettype name(params);
                if self.current == Token::LParen {
                    let params = self.parse_fnptr_params()?;
                    let fnptr_ty = Type::FunctionPtr {
                        return_type: Box::new(ty),
                        params,
                    };
                    self.expect(&Token::Semicolon)?;
                    self.typedef_names.insert(alias.clone());
                    typedefs.push((alias, fnptr_ty));
                    continue;
                }
                // Check for array typedef: typedef type name[N];
                if self.current == Token::LBracket {
                    let (arr_ty, _) = self.parse_array_dimensions(ty)?;
                    self.expect(&Token::Semicolon)?;
                    self.typedef_names.insert(alias.clone());
                    typedefs.push((alias, arr_ty));
                    continue;
                }
                // Handle multiple typedef names: typedef struct { ... } A, *B;
                let mut current_ty = ty.clone();
                loop {
                    self.typedef_names.insert(alias.clone());
                    typedefs.push((alias, current_ty.clone()));
                    if self.current != Token::Comma {
                        break;
                    }
                    self.advance()?; // skip comma
                    current_ty = self.parse_pointer_type(ty.clone());
                    alias = self.expect_ident()?;
                }
                self.expect(&Token::Semicolon)?;
                continue;
            }

            let is_static = self.current == Token::Static;
            if is_static {
                self.advance()?;
            }
            let is_extern = self.current == Token::Extern;
            if is_extern {
                self.advance()?;
                // Skip optional linkage specifier: extern "asm", extern "C"
                if let Token::StringLit(_) = &self.current {
                    self.advance()?;
                }
            }
            // Parse optional const/volatile qualifiers before the type.
            let is_const = self.current == Token::Const;
            if is_const {
                self.advance()?;
            }
            let is_volatile = self.current == Token::Volatile;
            if is_volatile {
                self.advance()?;
            }
            let ty = self.parse_type()?;
            // Handle pointer types at top level.
            let ty = self.parse_pointer_type(ty);
            let ty = if is_volatile && !ty.is_volatile() {
                Type::Volatile(Box::new(ty))
            } else {
                ty
            };
            let ty = if is_const && !ty.is_const() {
                Type::Const(Box::new(ty))
            } else {
                ty
            };

            // Standalone struct/union definition: `struct foo { ... };`
            if self.current == Token::Semicolon
                && matches!(&ty, Type::Struct { .. } | Type::Union { .. } | Type::Enum { .. })
            {
                self.advance()?;
                // Record struct/union definition in struct_defs.
                // Skip forward declarations (empty fields).
                match &ty {
                    Type::Struct { name: Some(n), fields } |
                    Type::Union { name: Some(n), fields } if !fields.is_empty() => {
                        struct_defs.push((n.clone(), fields.clone()));
                    }
                    _ => {}
                }
                continue;
            }

            // Check for parenthesized pointer declarator: type (*name)(params), type (*name)[N], etc.
            if self.current == Token::LParen && self.is_fnptr_declarator() {
                self.advance()?; // (
                let (stars, name, has_brackets, array_dim) = self.parse_paren_ptr_decl()?;
                let final_ty = self.finish_paren_ptr_type(ty, stars, has_brackets, array_dim)?;
                let init = if self.current == Token::Assign {
                    self.advance()?;
                    if self.current == Token::LBrace {
                        Some(self.parse_init_list()?)
                    } else {
                        Some(self.parse_assign()?)
                    }
                } else {
                    None
                };
                self.expect(&Token::Semicolon)?;
                globals.push(crate::ast::GlobalDecl {
                    name,
                    ty: final_ty,
                    init,
                    is_static,
                    is_extern,
                });
                continue;
            }

            // Handle parenthesized declarator name: type (name)(params)
            let name = if self.current == Token::LParen && self.is_paren_declarator() {
                self.advance()?; // skip (
                let n = self.expect_ident()?;
                self.expect(&Token::RParen)?;
                n
            } else {
                self.expect_ident()?
            };

            if self.current == Token::LParen {
                // Function definition.
                self.advance()?;
                let mut params = Vec::new();
                let mut is_variadic = false;
                // Check for K&R-style parameters: ident, ident, ...
                // Detect by checking if first token is a non-type identifier.
                let is_kr = if let Token::Ident(name) = &self.current {
                    !is_type_start(&self.current) && !self.typedef_names.contains(name)
                } else {
                    false
                };
                if is_kr {
                    // K&R parameter names only
                    while let Token::Ident(_) = &self.current {
                        let pname = self.expect_ident()?;
                        params.push((pname, Type::Int));
                        if self.current == Token::Comma {
                            self.advance()?;
                        } else {
                            break;
                        }
                    }
                    self.expect(&Token::RParen)?;
                    // Skip K&R type declarations: `int a; int b;` etc.
                    while is_type_start(&self.current)
                        || (matches!(&self.current, Token::Ident(n) if self.typedef_names.contains(n)))
                    {
                        let kr_ty = self.parse_type()?;
                        let kr_ty = self.parse_pointer_type(kr_ty);
                        let kr_name = self.expect_ident()?;
                        self.expect(&Token::Semicolon)?;
                        // Update param type by name
                        for (pn, pt) in &mut params {
                            if *pn == kr_name {
                                *pt = kr_ty.clone();
                                break;
                            }
                        }
                    }
                } else {
                    if self.current != Token::RParen {
                    loop {
                        if self.current == Token::Ellipsis {
                            self.advance()?;
                            is_variadic = true;
                            break;
                        }
                        let pty = self.parse_type()?;
                        let pty = self.parse_pointer_type(pty);
                        // C89/C99 6.7.5.3/10: `(void)` as the sole
                        // parameter list means "no arguments", not
                        // "one parameter of type void". It must be
                        // unnamed and immediately followed by `)`.
                        if matches!(pty, crate::types::Type::Void)
                            && params.is_empty()
                            && !is_variadic
                            && self.current == Token::RParen
                        {
                            break;
                        }
                        // Check for function pointer or pointer-to-array parameter
                        if self.current == Token::LParen && self.is_fnptr_declarator() {
                            self.advance()?; // (
                            self.expect(&Token::Star)?;
                            // Name is optional: void (*)(void) vs void (*fp)(void)
                            let pname = if let Token::Ident(_) = &self.current {
                                self.expect_ident()?
                            } else {
                                format!("__param{}", params.len())
                            };
                            self.expect(&Token::RParen)?;
                            let param_ty = if self.current == Token::LParen {
                                let fp_params = self.parse_fnptr_params()?;
                                Type::FunctionPtr {
                                    return_type: Box::new(pty),
                                    params: fp_params,
                                }
                            } else {
                                // Pointer to array: int (*m)[N]
                                let (arr_ty, _) = self.parse_array_dimensions(pty)?;
                                Type::Pointer(Box::new(arr_ty))
                            };
                            params.push((pname, param_ty));
                        } else if self.current == Token::RParen || self.current == Token::Comma {
                            // Unnamed parameter (declaration only).
                            let pname = format!("__param{}", params.len());
                            params.push((pname, pty));
                        } else {
                            // Skip const/volatile/__restrict between type and parameter name
                            while matches!(self.current, Token::Const | Token::Volatile)
                                || matches!(&self.current, Token::Ident(n) if matches!(n.as_str(), "__restrict" | "restrict" | "__restrict__"))
                            {
                                self.advance()?;
                            }
                            let pname = self.expect_ident()?;
                            // Array parameter decay: int arr[N] -> int *arr
                            // C99 6.7.5.3: allows static/const/restrict/volatile inside []
                            let pty = if self.current == Token::LBracket {
                                self.advance()?;
                                // Skip qualifiers inside []: static, const, restrict, volatile
                                while matches!(self.current, Token::Static | Token::Const | Token::Volatile)
                                    || matches!(&self.current, Token::Ident(n) if matches!(n.as_str(), "restrict" | "__restrict" | "__restrict__"))
                                {
                                    self.advance()?;
                                }
                                if self.current != Token::RBracket {
                                    self.parse_expr()?; // consume size, discard
                                }
                                self.expect(&Token::RBracket)?;
                                Type::Pointer(Box::new(pty))
                            } else {
                                pty
                            };
                            params.push((pname, pty));
                        }
                        if self.current == Token::Comma {
                            self.advance()?;
                        } else {
                            break;
                        }
                    }
                    }
                    self.expect(&Token::RParen)?;
                }

                if self.current == Token::Semicolon {
                    // Forward declaration -- treat as extern.
                    // Track variadic-ness so the call lowering can
                    // see whether the callee is variadic; without this,
                    // an `extern int printf(const char*, ...)` parsed only
                    // as a `GlobalDecl` would lose the `...` and the
                    // caller would emit register-passing for a variadic
                    // callee, leaving its named args in unread registers
                    // and feeding `va_arg` whatever happened to be on the
                    // stack.
                    if is_variadic {
                        variadic_decls.insert(name.clone());
                    }
                    self.advance()?;
                    globals.push(GlobalDecl {
                        name,
                        ty,
                        init: None,
                        is_static,
                        is_extern: true,
                    });
                } else {
                    self.current_function = name.clone();
                    let body = self.parse_block_stmts()?;
                    self.current_function.clear();
                    functions.push(Function {
                        name,
                        return_type: ty,
                        params,
                        is_variadic,
                        body,
                        is_static,
                    });
                }
            } else {
                // Global variable declaration (possibly comma-separated).
                let base_ty = ty;
                let (decl_ty, _) = self.parse_array_dimensions(base_ty.clone())?;
                let init = if self.current == Token::Assign {
                    self.advance()?;
                    if self.current == Token::LBrace {
                        Some(self.parse_init_list()?)
                    } else {
                        Some(self.parse_expr()?)
                    }
                } else {
                    None
                };
                let decl_ty = match (&decl_ty, &init) {
                    (Type::Array(elem, None), Some(Expr::InitList(items))) => {
                        Type::Array(elem.clone(), Some(items.len()))
                    }
                    (Type::Array(elem, None), Some(Expr::StringLit(s))) => {
                        Type::Array(elem.clone(), Some(s.len() + 1))
                    }
                    _ => decl_ty,
                };
                globals.push(GlobalDecl {
                    name,
                    ty: decl_ty,
                    init,
                    is_static,
                    is_extern,
                });
                // Additional comma-separated declarators.
                while self.current == Token::Comma {
                    self.advance()?;
                    let ptr_ty = self.parse_pointer_type(base_ty.clone());
                    let extra_name = self.expect_ident()?;
                    let (extra_ty, _) = self.parse_array_dimensions(ptr_ty)?;
                    let extra_init = if self.current == Token::Assign {
                        self.advance()?;
                        if self.current == Token::LBrace {
                            Some(self.parse_init_list()?)
                        } else {
                            Some(self.parse_expr()?)
                        }
                    } else {
                        None
                    };
                    let extra_ty = match (&extra_ty, &extra_init) {
                        (Type::Array(elem, None), Some(Expr::InitList(items))) => {
                            Type::Array(elem.clone(), Some(items.len()))
                        }
                        (Type::Array(elem, None), Some(Expr::StringLit(s))) => {
                            Type::Array(elem.clone(), Some(s.len() + 1))
                        }
                        _ => extra_ty,
                    };
                    globals.push(GlobalDecl {
                        name: extra_name,
                        ty: extra_ty,
                        init: extra_init,
                        is_static,
                        is_extern,
                    });
                }
                self.expect(&Token::Semicolon)?;
            }
        }
        // Function definitions also contribute their variadic-ness to
        // the lookup table (so `static int helper(int, ...)` followed by
        // a call site below it is handled correctly even without a
        // forward declaration).
        for f in &functions {
            if f.is_variadic {
                variadic_decls.insert(f.name.clone());
            }
        }
        Ok(TranslationUnit {
            functions,
            globals,
            typedefs,
            struct_defs,
            enum_constants: self.enum_constants.drain(..).chain(enum_constants).collect(),
            variadic_functions: variadic_decls,
        })
    }

    /// Parse struct or union type after the `struct`/`union` keyword.
    fn parse_struct_or_union(&mut self, is_struct: bool) -> Result<Type, Error> {
        let name = if let Token::Ident(_) = &self.current {
            Some(self.expect_ident()?)
        } else {
            None
        };
        let fields = if self.current == Token::LBrace {
            self.advance()?;
            let mut fields = Vec::new();
            while self.current != Token::RBrace {
                let field_ty = self.parse_type()?;
                let field_ty = self.parse_pointer_type(field_ty);
                // Anonymous struct/union member (no field name).
                if self.current == Token::Semicolon
                    && matches!(&field_ty, Type::Struct { .. } | Type::Union { .. })
                {
                    let anon_name = format!("__anon{}", fields.len());
                    self.advance()?; // consume semicolon
                    fields.push((anon_name, field_ty));
                    continue;
                }
                // Check for function pointer or pointer-to-array field
                if self.current == Token::LParen && self.is_fnptr_declarator() {
                    self.advance()?; // (
                    let (stars, field_name, has_brackets, array_dim) = self.parse_paren_ptr_decl()?;
                    let final_ty = self.finish_paren_ptr_type(field_ty, stars, has_brackets, array_dim)?;
                    self.expect(&Token::Semicolon)?;
                    fields.push((field_name, final_ty));
                    continue;
                }
                // Anonymous bitfield: `type : width;` (no field name)
                if self.current == Token::Colon {
                    self.advance()?;
                    let width_expr = self.parse_assign()?;
                    let width = const_eval(&width_expr) as u8;
                    self.expect(&Token::Semicolon)?;
                    let anon_name = format!("__anon{}", fields.len());
                    let bf_ty = Type::Bitfield(Box::new(field_ty), width);
                    fields.push((anon_name, bf_ty));
                    continue;
                }
                let field_name = self.expect_ident()?;
                let (field_ty, _) = self.parse_array_dimensions(field_ty)?;
                // Named bitfield: `type name : width;`
                let field_ty = if self.current == Token::Colon {
                    self.advance()?;
                    let width_expr = self.parse_assign()?;
                    let width = const_eval(&width_expr) as u8;
                    Type::Bitfield(Box::new(field_ty), width)
                } else {
                    field_ty
                };
                self.expect(&Token::Semicolon)?;
                fields.push((field_name, field_ty));
            }
            self.expect(&Token::RBrace)?;
            fields
        } else {
            Vec::new()
        };
        if is_struct {
            Ok(Type::Struct { name, fields })
        } else {
            Ok(Type::Union { name, fields })
        }
    }

    /// Consume `*` tokens to build a pointer type.
    fn parse_pointer_type(&mut self, base: Type) -> Type {
        let mut ty = base;
        // Skip qualifiers that may appear between type and *
        while matches!(&self.current, Token::Ident(n) if matches!(n.as_str(), "__pm" | "__dm" | "__byte_addressed" | "__word_addressed"))
            || matches!(self.current, Token::Const | Token::Volatile)
        {
            self.advance().expect("qualifier already matched");
        }
        while self.current == Token::Star {
            self.advance().expect("star already matched");
            // Track const/volatile after * (these qualify the pointer itself)
            let mut ptr_const = false;
            let mut ptr_volatile = false;
            while matches!(self.current, Token::Const | Token::Volatile)
                || matches!(&self.current, Token::Ident(n) if matches!(n.as_str(), "__pm" | "__dm" | "__byte_addressed" | "__word_addressed"))
            {
                if self.current == Token::Const {
                    ptr_const = true;
                } else if self.current == Token::Volatile {
                    ptr_volatile = true;
                }
                self.advance().expect("qualifier already matched");
            }
            ty = Type::Pointer(Box::new(ty));
            if ptr_volatile {
                ty = Type::Volatile(Box::new(ty));
            }
            if ptr_const {
                ty = Type::Const(Box::new(ty));
            }
        }
        ty
    }

    /// Check if the next tokens form `(*ident)` — i.e. a function pointer
    /// declarator. Called when current == LParen. Looks ahead in the raw
    /// source bytes to avoid consuming tokens.
    fn is_fnptr_declarator(&self) -> bool {
        let remaining = self.lexer.remaining_bytes();
        let mut i = 0;
        // Skip whitespace.
        while i < remaining.len() && remaining[i].is_ascii_whitespace() {
            i += 1;
        }
        i < remaining.len() && remaining[i] == b'*'
    }

    /// Check if the tokens after `(` form a parenthesized declarator name
    /// `(ident)` rather than a parameter list `(type ...)`.  Called when
    /// current == LParen and is_fnptr_declarator() returned false.  Peeks
    /// at raw bytes: skip whitespace, extract the identifier word, reject
    /// if the word is a C type keyword.
    fn is_paren_declarator(&self) -> bool {
        let remaining = self.lexer.remaining_bytes();
        let mut i = 0;
        while i < remaining.len() && remaining[i].is_ascii_whitespace() {
            i += 1;
        }
        if i >= remaining.len() || !(remaining[i].is_ascii_alphabetic() || remaining[i] == b'_') {
            return false;
        }
        let start = i;
        while i < remaining.len() && (remaining[i].is_ascii_alphanumeric() || remaining[i] == b'_')
        {
            i += 1;
        }
        let word = &remaining[start..i];
        // If followed by `)` (after optional whitespace) and the word is not
        // a type keyword, this is a parenthesized name.
        while i < remaining.len() && remaining[i].is_ascii_whitespace() {
            i += 1;
        }
        if i >= remaining.len() || remaining[i] != b')' {
            return false;
        }
        !matches!(
            word,
            b"void" | b"int" | b"char" | b"short" | b"long" | b"float" | b"double"
                | b"unsigned" | b"signed" | b"struct" | b"union" | b"enum" | b"const"
                | b"volatile" | b"_Bool"
        )
    }

    /// Parse the interior of a parenthesized pointer declarator after `(`.
    /// Handles `*name`, `**name`, `*const name`, `*name[N]`, etc.
    /// Returns (indirection_count, name, has_array_brackets, optional_array_size).
    fn parse_paren_ptr_decl(&mut self) -> Result<(usize, String, bool, Option<Expr>), Error> {
        let mut stars = 0;
        while self.current == Token::Star {
            self.advance()?;
            stars += 1;
        }
        // Skip const/volatile qualifiers
        while matches!(self.current, Token::Const | Token::Volatile) {
            self.advance()?;
        }
        // Handle nested parenthesized declarator: (*(*pp)) — skip inner parens
        if self.current == Token::LParen {
            self.advance()?; // skip inner (
            let mut inner_stars = 0;
            while self.current == Token::Star {
                self.advance()?;
                inner_stars += 1;
            }
            while matches!(self.current, Token::Const | Token::Volatile) {
                self.advance()?;
            }
            let name = self.expect_ident()?;
            self.expect(&Token::RParen)?; // inner )
            self.expect(&Token::RParen)?; // outer )
            return Ok((stars + inner_stars, name, false, None));
        }
        let name = self.expect_ident()?;
        let (has_brackets, array_dim) = if self.current == Token::LBracket {
            self.advance()?;
            if self.current == Token::RBracket {
                self.advance()?;
                (true, None) // unsized array []
            } else {
                let dim = self.parse_expr()?;
                self.expect(&Token::RBracket)?;
                (true, Some(dim))
            }
        } else {
            (false, None)
        };
        self.expect(&Token::RParen)?;
        Ok((stars, name, has_brackets, array_dim))
    }

    /// Build the final type for a parenthesized pointer declarator.
    /// `base_ty` is the return/element type, `stars` is the number of `*` seen,
    /// `array_dim` is the optional array dimension inside parens, and
    /// we look at the next token to determine if this is a function pointer
    /// or a pointer to array.
    fn finish_paren_ptr_type(
        &mut self,
        base_ty: Type,
        stars: usize,
        has_brackets: bool,
        array_dim: Option<Expr>,
    ) -> Result<Type, Error> {
        if self.current == Token::LParen {
            // Function pointer: type (*[*...]name[array])(params)
            let fp_params = self.parse_fnptr_params()?;
            let fnptr_ty = Type::FunctionPtr {
                return_type: Box::new(base_ty),
                params: fp_params,
            };
            // Wrap in extra pointer indirection for **, ***, etc.
            let mut ty = fnptr_ty;
            for _ in 1..stars {
                ty = Type::Pointer(Box::new(ty));
            }
            if has_brackets {
                let dim = array_dim.map(|d| match d {
                    Expr::IntLit(n, _) => Ok(n as usize),
                    _ => Err(self.err(
                        "non-constant array dimension for function pointer array".into(),
                    )),
                }).transpose()?;
                Ok(Type::Array(Box::new(ty), dim))
            } else {
                Ok(ty)
            }
        } else {
            // Pointer to array: type (*name)[N]
            let (arr_ty, _) = self.parse_array_dimensions(base_ty)?;
            let mut ty = Type::Pointer(Box::new(arr_ty));
            for _ in 1..stars {
                ty = Type::Pointer(Box::new(ty));
            }
            Ok(ty)
        }
    }

    /// Parse the parameter list of a function pointer type: `(type, type, ...)`
    fn parse_fnptr_params(&mut self) -> Result<Vec<Type>, Error> {
        self.expect(&Token::LParen)?;
        let mut params = Vec::new();
        if self.current != Token::RParen {
            loop {
                if self.current == Token::Ellipsis {
                    self.advance()?;
                    break;
                }
                let pty = self.parse_type()?;
                let pty = self.parse_pointer_type(pty);
                // Skip const/volatile/__restrict qualifiers before optional parameter name.
                while matches!(self.current, Token::Const | Token::Volatile)
                    || matches!(&self.current, Token::Ident(n) if matches!(n.as_str(), "__restrict" | "restrict" | "__restrict__"))
                {
                    self.advance()?;
                }
                // Skip optional parameter name.
                if let Token::Ident(name) = &self.current {
                    if !self.typedef_names.contains(name) {
                        self.advance()?;
                    }
                }
                // Skip array parameter decay: name[N]
                if self.current == Token::LBracket {
                    self.advance()?;
                    if self.current != Token::RBracket {
                        self.parse_expr()?;
                    }
                    self.expect(&Token::RBracket)?;
                }
                params.push(pty);
                if self.current == Token::Comma {
                    self.advance()?;
                } else {
                    break;
                }
            }
        }
        self.expect(&Token::RParen)?;
        Ok(params)
    }

    /// Parse zero or more `[N]` array dimensions after a declarator name.
    /// Wraps the base type in nested `Array` types with the inner-most
    /// dimension first: `int m[2][3]` -> `Array(Array(Int, Some(3)), Some(2))`.
    /// Returns `(type, vla_dim_expr)` where `vla_dim_expr` is `Some` when
    /// the outermost dimension is a runtime expression (VLA).
    fn parse_array_dimensions(&mut self, base: Type) -> Result<(Type, Option<Expr>), Error> {
        let mut dims: Vec<(Option<usize>, Option<Expr>)> = Vec::new();
        while self.current == Token::LBracket {
            self.advance()?;
            // C99 6.7.5.3: allows static/const/restrict/volatile inside []
            while matches!(self.current, Token::Static | Token::Const | Token::Volatile)
                || matches!(&self.current, Token::Ident(n) if matches!(n.as_str(), "restrict" | "__restrict" | "__restrict__"))
            {
                self.advance()?;
            }
            let dim = if self.current == Token::RBracket {
                (None, None)
            } else {
                let expr = self.parse_assign()?;
                match try_const_eval(&expr) {
                    Some(v) => (Some(v as usize), None),
                    None => (None, Some(expr)),
                }
            };
            self.expect(&Token::RBracket)?;
            dims.push(dim);
        }
        // Build nested array type from inside out:
        // int m[2][3] -> dims = [Some(2), Some(3)]
        // Result: Array(Array(Int, Some(3)), Some(2))
        //
        // VLA dimension expression is only meaningful for the outermost
        // dimension (C99 does not allow VLA inner dimensions in practice
        // for local arrays).
        let vla_dim = dims.first().and_then(|(_, expr)| expr.clone());
        let mut ty = base;
        for (size, _) in dims.into_iter().rev() {
            ty = Type::Array(Box::new(ty), size);
        }
        Ok((ty, vla_dim))
    }

    // ---- Statement parsing ----

    fn parse_block_stmts(&mut self) -> Result<Vec<Stmt>, Error> {
        self.expect(&Token::LBrace)?;
        // Entering a block scope: any `enum { ... }` inside should
        // bind per-block rather than leak out to the translation-unit
        // enum table (C99 6.2.1).
        self.block_depth += 1;
        let mut stmts = Vec::new();
        while self.current != Token::RBrace {
            stmts.push(self.parse_stmt()?);
        }
        self.expect(&Token::RBrace)?;
        self.block_depth -= 1;
        Ok(stmts)
    }

    fn parse_stmt(&mut self) -> Result<Stmt, Error> {
        match &self.current {
            Token::Semicolon => {
                // Empty statement
                self.advance()?;
                Ok(Stmt::Block(Vec::new()))
            }
            Token::Return => {
                self.advance()?;
                if self.current == Token::Semicolon {
                    self.advance()?;
                    Ok(Stmt::Return(None))
                } else {
                    let expr = self.parse_expr()?;
                    self.expect(&Token::Semicolon)?;
                    Ok(Stmt::Return(Some(expr)))
                }
            }
            Token::LBrace => {
                let stmts = self.parse_block_stmts()?;
                Ok(Stmt::Block(stmts))
            }
            Token::If => self.parse_if(),
            Token::While => self.parse_while(),
            Token::For => self.parse_for(),
            Token::Do => self.parse_do_while(),
            Token::Switch => self.parse_switch(),
            Token::Case => {
                self.advance()?;
                let val = self.parse_expr()?;
                self.expect(&Token::Colon)?;
                Ok(Stmt::CaseLabel(val))
            }
            Token::Default => {
                self.advance()?;
                self.expect(&Token::Colon)?;
                Ok(Stmt::DefaultLabel)
            }
            Token::Break => {
                self.advance()?;
                self.expect(&Token::Semicolon)?;
                Ok(Stmt::Break)
            }
            Token::Continue => {
                self.advance()?;
                self.expect(&Token::Semicolon)?;
                Ok(Stmt::Continue)
            }
            Token::Goto => {
                self.advance()?;
                let label = self.expect_ident()?;
                self.expect(&Token::Semicolon)?;
                Ok(Stmt::Goto(label))
            }
            Token::Asm => {
                self.advance()?;
                // Skip optional 'volatile' / '__volatile__' after asm keyword
                if matches!(&self.current, Token::Volatile)
                    || matches!(&self.current, Token::Ident(kw) if kw == "__volatile__")
                {
                    self.advance()?;
                }
                self.expect(&Token::LParen)?;
                // Parse asm template: concatenate adjacent string literals
                let mut asm_str = String::new();
                while let Token::StringLit(s) = &self.current {
                    asm_str.push_str(s);
                    self.advance()?;
                }
                // Skip GCC-style operand sections: : outputs : inputs : clobbers
                // Must track parenthesis depth since operands contain nested parens.
                while self.current == Token::Colon {
                    self.advance()?;
                    let mut depth = 0i32;
                    loop {
                        if self.current == Token::LParen {
                            depth += 1;
                        } else if self.current == Token::RParen {
                            if depth == 0 { break; } // outer RParen
                            depth -= 1;
                        } else if self.current == Token::Colon && depth == 0 {
                            break; // next operand section
                        }
                        self.advance()?;
                    }
                }
                self.expect(&Token::RParen)?;
                self.expect(&Token::Semicolon)?;
                Ok(Stmt::Asm(asm_str))
            }
            Token::Ident(_) if self.is_label_stmt() => {
                let Token::Ident(label) = self.advance()? else {
                    unreachable!()
                };
                self.expect(&Token::Colon)?;
                let inner = self.parse_stmt()?;
                Ok(Stmt::Label(label, Box::new(inner)))
            }
            Token::Typedef => {
                // Local typedef: register the alias in typedef_names
                // and emit a no-op statement (the alias only affects
                // subsequent parsing, not code generation).
                self.advance()?;
                let ty = self.parse_type()?;
                let _ty = self.parse_pointer_type(ty);
                if self.current == Token::LParen && self.is_fnptr_declarator() {
                    self.advance()?;
                    let (stars, alias, has_brackets, array_dim) = self.parse_paren_ptr_decl()?;
                    let _ = self.finish_paren_ptr_type(_ty, stars, has_brackets, array_dim)?;
                    self.expect(&Token::Semicolon)?;
                    self.typedef_names.insert(alias);
                } else {
                    let alias = self.expect_ident()?;
                    self.typedef_names.insert(alias);
                    self.expect(&Token::Semicolon)?;
                }
                Ok(Stmt::Block(Vec::new()))
            }
            Token::Extern => {
                // Local extern declaration: just skip it (the symbol is
                // already visible at file scope).
                self.advance()?;
                let _ty = self.parse_type()?;
                let _ty = self.parse_pointer_type(_ty);
                let _name = self.expect_ident()?;
                // Skip function parameter list: extern int fn(int, int);
                if self.current == Token::LParen {
                    let _params = self.parse_fnptr_params()?;
                }
                self.expect(&Token::Semicolon)?;
                Ok(Stmt::Block(Vec::new()))
            }
            Token::Static => {
                self.advance()?;
                self.parse_var_decl_static(true)
            }
            Token::Register | Token::Auto => {
                self.advance()?;
                self.parse_var_decl_static(false)
            }
            t if is_type_start(t) => {
                self.parse_var_decl_static(false)
            }
            Token::Ident(name) if self.typedef_names.contains(name) => {
                self.parse_var_decl_static(false)
            }
            _ => {
                let expr = self.parse_expr()?;
                self.expect(&Token::Semicolon)?;
                Ok(Stmt::Expr(expr))
            }
        }
    }

    fn parse_var_decl(&mut self) -> Result<Stmt, Error> {
        self.parse_var_decl_static(false)
    }

    fn parse_var_decl_static(&mut self, is_static: bool) -> Result<Stmt, Error> {
        // Consume optional const/volatile qualifiers.
        let is_const = self.current == Token::Const;
        if is_const {
            self.advance()?;
        }
        let is_volatile = self.current == Token::Volatile;
        if is_volatile {
            self.advance()?;
        }
        let decl_base_ty = self.parse_type()?;
        // C99 6.2.1: an `enum { ... }` nested inside a struct member's
        // type-specifier still injects its enumerators into the
        // enclosing scope. `parse_type` accumulates those constants in
        // `pending_block_enum_consts`; drain them here so they bind in
        // the current block scope alongside the variable being declared.
        let leading_enum_decl = if !self.pending_block_enum_consts.is_empty() {
            let consts = std::mem::take(&mut self.pending_block_enum_consts);
            Some(Stmt::EnumDecl(consts))
        } else {
            None
        };
        let base_ty = self.parse_pointer_type(decl_base_ty.clone());
        let base_ty = if is_volatile && !base_ty.is_volatile() {
            Type::Volatile(Box::new(base_ty))
        } else {
            base_ty
        };
        let base_ty = if is_const && !base_ty.is_const() {
            Type::Const(Box::new(base_ty))
        } else {
            base_ty
        };

        let mut stmts = Vec::new();

        // Standalone struct/union/enum definition: `struct S { ... };` with no variable.
        // Preserve the type in a VarDecl so collect_local_struct_defs can
        // extract the struct/union definition for later use.
        if self.current == Token::Semicolon {
            self.advance()?;
            match &base_ty {
                Type::Struct { name: Some(_), fields }
                | Type::Union { name: Some(_), fields } if !fields.is_empty() => {
                    let var_decl = Stmt::VarDecl {
                        name: String::new(),
                        ty: base_ty,
                        init: None,
                        is_static: false,
                        vla_dim: None,
                    };
                    if let Some(enum_decl) = leading_enum_decl {
                        return Ok(Stmt::DeclGroup(vec![enum_decl, var_decl]));
                    }
                    return Ok(var_decl);
                }
                _ => {
                    // `enum { X = v, ... };` with no declarator: if the
                    // parser collected pending block-scoped enum
                    // constants while recognising the type, hand them
                    // to the lowering as a scope-bound declaration so
                    // they can be rolled back when the enclosing block
                    // ends (C99 6.2.1).
                    if let Some(enum_decl) = leading_enum_decl {
                        return Ok(enum_decl);
                    }
                    return Ok(Stmt::Block(Vec::new()));
                }
            }
        }

        // Parenthesized pointer declarator: type (*name)(params), type (*name[N])(params),
        // type (**name)(params), type (*const name)(params), or type (*name)[N].
        if self.current == Token::LParen && self.is_fnptr_declarator() {
            self.advance()?; // (
            let (stars, name, has_brackets, array_dim) = self.parse_paren_ptr_decl()?;
            let final_ty = self.finish_paren_ptr_type(base_ty, stars, has_brackets, array_dim)?;
            let init = if self.current == Token::Assign {
                self.advance()?;
                if self.current == Token::LBrace {
                    Some(self.parse_init_list()?)
                } else {
                    Some(self.parse_assign()?)
                }
            } else {
                None
            };
            self.expect(&Token::Semicolon)?;
            let var_decl = Stmt::VarDecl { name, ty: final_ty, init, is_static, vla_dim: None };
            if let Some(enum_decl) = leading_enum_decl {
                return Ok(Stmt::DeclGroup(vec![enum_decl, var_decl]));
            }
            return Ok(var_decl);
        }

        // Parse first declarator.
        let name = self.expect_ident()?;
        let (ty, vla_dim) = self.parse_array_dimensions(base_ty.clone())?;
        let init = if self.current == Token::Assign {
            self.advance()?;
            if self.current == Token::LBrace {
                Some(self.parse_init_list()?)
            } else {
                Some(self.parse_assign()?)
            }
        } else {
            None
        };
        let (ty, vla_dim) = match (&ty, &init) {
            (Type::Array(elem, None), Some(Expr::InitList(items))) => {
                (Type::Array(elem.clone(), Some(items.len())), None)
            }
            // `char s[] = "hello"`: array length = byte length + 1 (NUL).
            (Type::Array(elem, None), Some(Expr::StringLit(s))) => {
                (Type::Array(elem.clone(), Some(s.len() + 1)), None)
            }
            _ => (ty, vla_dim),
        };
        stmts.push(Stmt::VarDecl { name, ty, init, is_static, vla_dim });

        // Parse additional comma-separated declarators.  Each declarator
        // applies its own pointer/array syntax to the declaration specifier
        // type (`decl_base_ty`), not the fully-decorated first-declarator type.
        while self.current == Token::Comma {
            self.advance()?;
            let mut ptr_ty = self.parse_pointer_type(decl_base_ty.clone());
            if is_volatile && !ptr_ty.is_volatile() {
                ptr_ty = Type::Volatile(Box::new(ptr_ty));
            }
            if is_const && !ptr_ty.is_const() {
                ptr_ty = Type::Const(Box::new(ptr_ty));
            }
            let decl_name = self.expect_ident()?;
            let (decl_ty, decl_vla_dim) = self.parse_array_dimensions(ptr_ty)?;
            let decl_init = if self.current == Token::Assign {
                self.advance()?;
                if self.current == Token::LBrace {
                    Some(self.parse_init_list()?)
                } else {
                    Some(self.parse_assign()?)
                }
            } else {
                None
            };
            let (decl_ty, decl_vla_dim) = match (&decl_ty, &decl_init) {
                (Type::Array(elem, None), Some(Expr::InitList(items))) => {
                    (Type::Array(elem.clone(), Some(items.len())), None)
                }
                (Type::Array(elem, None), Some(Expr::StringLit(s))) => {
                    (Type::Array(elem.clone(), Some(s.len() + 1)), None)
                }
                _ => (decl_ty, decl_vla_dim),
            };
            stmts.push(Stmt::VarDecl { name: decl_name, ty: decl_ty, init: decl_init, is_static, vla_dim: decl_vla_dim });
        }

        self.expect(&Token::Semicolon)?;

        if let Some(enum_decl) = leading_enum_decl {
            let mut combined = Vec::with_capacity(stmts.len() + 1);
            combined.push(enum_decl);
            combined.extend(stmts);
            return Ok(Stmt::DeclGroup(combined));
        }

        if stmts.len() == 1 {
            Ok(stmts.into_iter().next().expect("checked len"))
        } else {
            Ok(Stmt::DeclGroup(stmts))
        }
    }

    fn parse_init_list(&mut self) -> Result<Expr, Error> {
        self.expect(&Token::LBrace)?;
        let mut items = Vec::new();
        if self.current != Token::RBrace {
            loop {
                if self.current == Token::Dot || self.current == Token::LBracket {
                    // Designated initializer: parse chain of designators
                    // e.g. .x, [1], [0].x.y, .a[3].b
                    items.push(self.parse_designator_chain()?);
                } else if self.current == Token::LBrace {
                    // Nested initializer list: {{1,2},{3,4}}
                    items.push(self.parse_init_list()?);
                } else {
                    items.push(self.parse_assign()?);
                }
                if self.current == Token::Comma {
                    self.advance()?;
                    if self.current == Token::RBrace {
                        break;
                    }
                } else {
                    break;
                }
            }
        }
        self.expect(&Token::RBrace)?;
        Ok(Expr::InitList(items))
    }

    /// Parse a chain of designators followed by `= value`.
    /// Supports arbitrary nesting: `.x`, `[1]`, `[0].x.y`, `.a[3].b`, etc.
    /// Builds nested Expr from outside in: `.a[3].b = 5` becomes
    /// DesignatedInit { field: "a", value: ArrayDesignator { index: 3,
    ///   value: DesignatedInit { field: "b", value: 5 } } }
    fn parse_designator_chain(&mut self) -> Result<Expr, Error> {
        // Collect designator steps
        enum Designator {
            Field(String),
            Index(Expr),
        }
        let mut chain = Vec::new();
        loop {
            if self.current == Token::Dot {
                self.advance()?;
                let field = self.expect_ident()?;
                chain.push(Designator::Field(field));
            } else if self.current == Token::LBracket {
                self.advance()?;
                let index = self.parse_assign()?;
                self.expect(&Token::RBracket)?;
                chain.push(Designator::Index(index));
            } else {
                break;
            }
        }
        self.expect(&Token::Assign)?;
        let mut value = if self.current == Token::LBrace {
            self.parse_init_list()?
        } else {
            self.parse_assign()?
        };
        // Wrap value from innermost designator outward
        for designator in chain.into_iter().rev() {
            value = match designator {
                Designator::Field(field) => Expr::DesignatedInit {
                    field,
                    value: Box::new(value),
                },
                Designator::Index(index) => Expr::ArrayDesignator {
                    index: Box::new(index),
                    value: Box::new(value),
                },
            };
        }
        Ok(value)
    }

    /// Consume adjacent wide/narrow string literal tokens, appending their
    /// code points to `wide`. Used by both the StringLit (after promotion)
    /// and WideStringLit arms of parse_primary.
    fn concat_wide_tail(&mut self, wide: &mut Vec<u32>) -> Result<(), Error> {
        loop {
            if let Token::WideStringLit(w) = &self.current {
                wide.extend_from_slice(w);
                self.advance()?;
            } else if let Token::StringLit(s) = &self.current {
                wide.extend(s.chars().map(|c| c as u32));
                self.advance()?;
            } else {
                break;
            }
        }
        Ok(())
    }

    fn parse_if(&mut self) -> Result<Stmt, Error> {
        self.expect(&Token::If)?;
        self.expect(&Token::LParen)?;
        let cond = self.parse_expr()?;
        self.expect(&Token::RParen)?;

        let then_body = if self.current == Token::LBrace {
            self.parse_block_stmts()?
        } else {
            vec![self.parse_stmt()?]
        };

        let else_body = if self.current == Token::Else {
            self.advance()?;
            if self.current == Token::LBrace {
                Some(self.parse_block_stmts()?)
            } else {
                Some(vec![self.parse_stmt()?])
            }
        } else {
            None
        };

        Ok(Stmt::If {
            cond,
            then_body,
            else_body,
        })
    }

    fn parse_while(&mut self) -> Result<Stmt, Error> {
        self.expect(&Token::While)?;
        self.expect(&Token::LParen)?;
        let cond = self.parse_expr()?;
        self.expect(&Token::RParen)?;

        let body = if self.current == Token::LBrace {
            self.parse_block_stmts()?
        } else {
            vec![self.parse_stmt()?]
        };

        Ok(Stmt::While { cond, body })
    }

    fn parse_for(&mut self) -> Result<Stmt, Error> {
        self.expect(&Token::For)?;
        self.expect(&Token::LParen)?;

        // init
        let init = if self.current == Token::Semicolon {
            self.advance()?;
            None
        } else if is_type_start(&self.current)
            || matches!(self.current, Token::Register | Token::Auto)
        {
            if matches!(self.current, Token::Register | Token::Auto) {
                self.advance()?;
            }
            Some(Box::new(self.parse_var_decl()?))
        } else {
            let expr = self.parse_expr()?;
            self.expect(&Token::Semicolon)?;
            Some(Box::new(Stmt::Expr(expr)))
        };

        // cond
        let cond = if self.current == Token::Semicolon {
            None
        } else {
            Some(self.parse_expr()?)
        };
        self.expect(&Token::Semicolon)?;

        // step
        let step = if self.current == Token::RParen {
            None
        } else {
            Some(self.parse_expr()?)
        };
        self.expect(&Token::RParen)?;

        let body = if self.current == Token::LBrace {
            self.parse_block_stmts()?
        } else {
            vec![self.parse_stmt()?]
        };

        Ok(Stmt::For {
            init,
            cond,
            step,
            body,
        })
    }

    /// Check if the current statement is a label (ident followed by colon).
    fn is_label_stmt(&self) -> bool {
        if !matches!(&self.current, Token::Ident(_)) {
            return false;
        }
        // Look ahead in the remaining source bytes to see if the next token
        // is a colon.
        let remaining = self.lexer.remaining_bytes();
        // Skip whitespace.
        let mut i = 0;
        while i < remaining.len() && remaining[i].is_ascii_whitespace() {
            i += 1;
        }
        i < remaining.len() && remaining[i] == b':'
    }

    fn parse_switch(&mut self) -> Result<Stmt, Error> {
        self.expect(&Token::Switch)?;
        self.expect(&Token::LParen)?;
        let expr = self.parse_expr()?;
        self.expect(&Token::RParen)?;
        self.expect(&Token::LBrace)?;

        // Parse the switch body as a flat list of statements.  Case and
        // default labels are represented as CaseLabel / DefaultLabel
        // statements and may appear at any nesting depth (Duff's device).
        let mut body = Vec::new();
        while self.current != Token::RBrace {
            body.push(self.parse_stmt()?);
        }
        self.expect(&Token::RBrace)?;

        Ok(Stmt::Switch { expr, body })
    }


    fn parse_do_while(&mut self) -> Result<Stmt, Error> {
        self.expect(&Token::Do)?;

        let body = if self.current == Token::LBrace {
            self.parse_block_stmts()?
        } else {
            vec![self.parse_stmt()?]
        };

        self.expect(&Token::While)?;
        self.expect(&Token::LParen)?;
        let cond = self.parse_expr()?;
        self.expect(&Token::RParen)?;
        self.expect(&Token::Semicolon)?;

        Ok(Stmt::DoWhile { body, cond })
    }

    // ---- Expression parsing (Pratt / precedence climbing) ----

    fn parse_expr(&mut self) -> Result<Expr, Error> {
        let mut expr = self.parse_assign()?;
        while self.current == Token::Comma {
            self.advance()?;
            let rhs = self.parse_assign()?;
            expr = Expr::Comma(Box::new(expr), Box::new(rhs));
        }
        Ok(expr)
    }

    fn parse_assign(&mut self) -> Result<Expr, Error> {
        let expr = self.parse_ternary()?;

        // Check for assignment: expr = expr
        if self.current == Token::Assign {
            self.advance()?;
            let value = self.parse_assign()?;
            return Ok(Expr::Assign {
                target: Box::new(expr),
                value: Box::new(value),
            });
        }

        // Compound assignments: +=, -=, etc.
        let compound_op = match &self.current {
            Token::PlusAssign => Some(BinaryOp::Add),
            Token::MinusAssign => Some(BinaryOp::Sub),
            Token::StarAssign => Some(BinaryOp::Mul),
            Token::SlashAssign => Some(BinaryOp::Div),
            Token::PercentAssign => Some(BinaryOp::Mod),
            Token::AmpAssign => Some(BinaryOp::BitAnd),
            Token::PipeAssign => Some(BinaryOp::BitOr),
            Token::CaretAssign => Some(BinaryOp::BitXor),
            Token::ShlAssign => Some(BinaryOp::Shl),
            Token::ShrAssign => Some(BinaryOp::Shr),
            _ => None,
        };
        if let Some(op) = compound_op {
            self.advance()?;
            let value = self.parse_assign()?;
            return Ok(Expr::CompoundAssign {
                op,
                target: Box::new(expr),
                value: Box::new(value),
            });
        }

        Ok(expr)
    }

    fn parse_ternary(&mut self) -> Result<Expr, Error> {
        let cond = self.parse_binary(0)?;

        if self.current == Token::Question {
            self.advance()?;
            let then_expr = self.parse_expr()?;
            self.expect(&Token::Colon)?;
            let else_expr = self.parse_ternary()?;
            Ok(Expr::Ternary {
                cond: Box::new(cond),
                then_expr: Box::new(then_expr),
                else_expr: Box::new(else_expr),
            })
        } else {
            Ok(cond)
        }
    }

    fn parse_binary(&mut self, min_prec: u8) -> Result<Expr, Error> {
        let mut lhs = self.parse_unary()?;

        loop {
            let (op, prec) = match self.current {
                Token::Or => (BinaryOp::LogOr, 1),
                Token::And => (BinaryOp::LogAnd, 2),
                Token::Pipe => (BinaryOp::BitOr, 3),
                Token::Caret => (BinaryOp::BitXor, 4),
                Token::Amp => (BinaryOp::BitAnd, 5),
                Token::Eq => (BinaryOp::Eq, 6),
                Token::Ne => (BinaryOp::Ne, 6),
                Token::Lt => (BinaryOp::Lt, 7),
                Token::Gt => (BinaryOp::Gt, 7),
                Token::Le => (BinaryOp::Le, 7),
                Token::Ge => (BinaryOp::Ge, 7),
                Token::Shl => (BinaryOp::Shl, 8),
                Token::Shr => (BinaryOp::Shr, 8),
                Token::Plus => (BinaryOp::Add, 9),
                Token::Minus => (BinaryOp::Sub, 9),
                Token::Star => (BinaryOp::Mul, 10),
                Token::Slash => (BinaryOp::Div, 10),
                Token::Percent => (BinaryOp::Mod, 10),
                _ => break,
            };

            if prec < min_prec {
                break;
            }

            self.advance()?;
            let rhs = self.parse_binary(prec + 1)?;
            lhs = Expr::Binary {
                op,
                lhs: Box::new(lhs),
                rhs: Box::new(rhs),
            };
        }

        Ok(lhs)
    }

    fn parse_unary(&mut self) -> Result<Expr, Error> {
        match &self.current {
            Token::Ident(name) if name == "__real__" => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::RealPart(Box::new(operand)))
            }
            Token::Ident(name) if name == "__imag__" => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::ImagPart(Box::new(operand)))
            }
            Token::Plus => {
                // Unary plus: a no-op (integer promotion only).
                self.advance()?;
                self.parse_unary()
            }
            Token::Minus => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::Unary {
                    op: UnaryOp::Neg,
                    operand: Box::new(operand),
                })
            }
            Token::Tilde => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::Unary {
                    op: UnaryOp::BitNot,
                    operand: Box::new(operand),
                })
            }
            Token::Bang => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::Unary {
                    op: UnaryOp::LogNot,
                    operand: Box::new(operand),
                })
            }
            Token::Star => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::Deref(Box::new(operand)))
            }
            Token::Amp => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::AddrOf(Box::new(operand)))
            }
            Token::PlusPlus => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::PreInc(Box::new(operand)))
            }
            Token::MinusMinus => {
                self.advance()?;
                let operand = self.parse_unary()?;
                Ok(Expr::PreDec(Box::new(operand)))
            }
            _ => self.parse_postfix(),
        }
    }

    fn parse_postfix(&mut self) -> Result<Expr, Error> {
        let mut expr = self.parse_primary()?;
        loop {
            match &self.current {
                Token::LBracket => {
                    self.advance()?;
                    let idx = self.parse_expr()?;
                    self.expect(&Token::RBracket)?;
                    expr = Expr::Index(Box::new(expr), Box::new(idx));
                }
                Token::Dot => {
                    self.advance()?;
                    let member = self.expect_ident()?;
                    expr = Expr::Member(Box::new(expr), member);
                }
                Token::Arrow => {
                    self.advance()?;
                    let member = self.expect_ident()?;
                    expr = Expr::Arrow(Box::new(expr), member);
                }
                Token::LParen => {
                    // Indirect function call: expr(args)
                    self.advance()?;
                    let mut args = Vec::new();
                    if self.current != Token::RParen {
                        loop {
                            args.push(self.parse_assign()?);
                            if self.current == Token::Comma {
                                self.advance()?;
                            } else {
                                break;
                            }
                        }
                    }
                    self.expect(&Token::RParen)?;
                    // Wrap as a Call with a generated name, or use a new
                    // indirect call expr. For simplicity, extract the name
                    // if the expr is an Ident, otherwise create an indirect call.
                    match expr {
                        Expr::Ident(ref name) => {
                            expr = Expr::Call { name: name.clone(), args };
                        }
                        _ => {
                            // Indirect call through function pointer expression.
                            expr = Expr::CallIndirect {
                                func_expr: Box::new(expr),
                                args,
                            };
                        }
                    }
                }
                Token::PlusPlus => {
                    self.advance()?;
                    expr = Expr::PostInc(Box::new(expr));
                }
                Token::MinusMinus => {
                    self.advance()?;
                    expr = Expr::PostDec(Box::new(expr));
                }
                _ => break,
            }
        }
        Ok(expr)
    }

    fn parse_primary(&mut self) -> Result<Expr, Error> {
        match &self.current {
            Token::IntLit(..) => {
                let Token::IntLit(val, suffix) = self.advance()? else {
                    unreachable!()
                };
                Ok(Expr::IntLit(val, suffix))
            }
            Token::FloatLit(_) => {
                let Token::FloatLit(val) = self.advance()? else {
                    unreachable!()
                };
                Ok(Expr::FloatLit(val))
            }
            Token::Ident(_) => {
                let Token::Ident(name) = self.advance()? else {
                    unreachable!()
                };
                // C99 6.4.2.2: __func__ is implicitly declared as a string literal
                if name == "__func__" {
                    return Ok(Expr::StringLit(self.current_function.clone()));
                }
                // Function call?
                if self.current == Token::LParen {
                    self.advance()?;
                    let mut args = Vec::new();
                    if self.current != Token::RParen {
                        loop {
                            args.push(self.parse_assign()?);
                            if self.current == Token::Comma {
                                self.advance()?;
                            } else {
                                break;
                            }
                        }
                    }
                    self.expect(&Token::RParen)?;
                    Ok(Expr::Call { name, args })
                } else {
                    Ok(Expr::Ident(name))
                }
            }
            Token::StringLit(_) => {
                let Token::StringLit(mut s) = self.advance()? else {
                    unreachable!()
                };
                // Concatenate adjacent string literals ("foo" "bar" -> "foobar")
                // If a wide string is adjacent, promote to wide (C99 6.4.5p5)
                loop {
                    if let Token::StringLit(next) = &self.current {
                        s.push_str(next);
                        self.advance()?;
                    } else if matches!(&self.current, Token::WideStringLit(_)) {
                        let mut wide: Vec<u32> = s.chars().map(|c| c as u32).collect();
                        self.concat_wide_tail(&mut wide)?;
                        return Ok(Expr::WideStringLit(wide));
                    } else {
                        break;
                    }
                }
                Ok(Expr::StringLit(s))
            }
            Token::WideStringLit(_) => {
                let Token::WideStringLit(mut w) = self.advance()? else {
                    unreachable!()
                };
                self.concat_wide_tail(&mut w)?;
                Ok(Expr::WideStringLit(w))
            }
            Token::CharLit(_) => {
                let Token::CharLit(val) = self.advance()? else {
                    unreachable!()
                };
                Ok(Expr::CharLit(val))
            }
            Token::Sizeof => {
                self.advance()?;
                if self.current == Token::LParen {
                    self.advance()?;
                    // Try to parse as type first, then fall back to expression.
                    if self.is_type_token() {
                        let ty = self.parse_type()?;
                        let ty = self.parse_pointer_type(ty);
                        // Function pointer type: sizeof(rettype (*)(params))
                        let ty = if self.current == Token::LParen && self.is_fnptr_declarator() {
                            self.advance()?;
                            self.expect(&Token::Star)?;
                            self.expect(&Token::RParen)?;
                            let fp_params = self.parse_fnptr_params()?;
                            Type::FunctionPtr {
                                return_type: Box::new(ty),
                                params: fp_params,
                            }
                        } else {
                            ty
                        };
                        let (ty, _) = self.parse_array_dimensions(ty)?;
                        self.expect(&Token::RParen)?;
                        Ok(Expr::Sizeof(Box::new(crate::ast::SizeofArg::Type(ty))))
                    } else {
                        let expr = self.parse_expr()?;
                        self.expect(&Token::RParen)?;
                        Ok(Expr::Sizeof(Box::new(crate::ast::SizeofArg::Expr(expr))))
                    }
                } else {
                    // sizeof without parens: sizeof unary-expression
                    let expr = self.parse_unary()?;
                    Ok(Expr::Sizeof(Box::new(crate::ast::SizeofArg::Expr(expr))))
                }
            }
            Token::LParen => {
                self.advance()?;
                // Check for cast or compound literal: (type)expr or (type){...}
                if self.is_type_token() {
                    let ty = self.parse_type()?;
                    let ty = self.parse_pointer_type(ty);
                    // Function pointer type cast: (rettype (*)(params))
                    let ty = if self.current == Token::LParen && self.is_fnptr_declarator() {
                        self.advance()?; // (
                        self.expect(&Token::Star)?;
                        self.expect(&Token::RParen)?;
                        let fp_params = self.parse_fnptr_params()?;
                        Type::FunctionPtr {
                            return_type: Box::new(ty),
                            params: fp_params,
                        }
                    } else {
                        ty
                    };
                    // Handle array type in cast/compound literal: (int[3]) or (int[])
                    let (ty, _) = self.parse_array_dimensions(ty)?;
                    self.expect(&Token::RParen)?;
                    if self.current == Token::LBrace {
                        // Compound literal: (type){initializer-list}
                        let init = self.parse_init_list()?;
                        Ok(Expr::Cast(ty, Box::new(init)))
                    } else {
                        let operand = self.parse_unary()?;
                        Ok(Expr::Cast(ty, Box::new(operand)))
                    }
                } else {
                    let expr = self.parse_expr()?;
                    self.expect(&Token::RParen)?;
                    Ok(expr)
                }
            }
            _ => Err(self.err(format!(
                "expected expression, got {:?}",
                self.current
            ))),
        }
    }
}

/// Evaluate a constant expression at compile time (for enum values).
/// Supports integer literals and simple unary minus.
fn const_eval(expr: &Expr) -> i64 {
    match expr {
        Expr::IntLit(v, _) => *v,
        Expr::CharLit(v) => *v,
        Expr::Unary { op: UnaryOp::Neg, operand } => -const_eval(operand),
        Expr::Binary { op: BinaryOp::Add, lhs, rhs } => const_eval(lhs) + const_eval(rhs),
        Expr::Binary { op: BinaryOp::Sub, lhs, rhs } => const_eval(lhs) - const_eval(rhs),
        Expr::Binary { op: BinaryOp::Mul, lhs, rhs } => const_eval(lhs) * const_eval(rhs),
        Expr::Binary { op: BinaryOp::Shl, lhs, rhs } => const_eval(lhs) << const_eval(rhs),
        Expr::Binary { op: BinaryOp::Shr, lhs, rhs } => const_eval(lhs) >> const_eval(rhs),
        _ => 0,
    }
}

/// Try to evaluate a constant expression. Returns `None` when the expression
/// contains non-constant sub-expressions (e.g. variable references), which
/// indicates a VLA dimension.
fn try_const_eval(expr: &Expr) -> Option<i64> {
    match expr {
        Expr::IntLit(v, _) => Some(*v),
        Expr::CharLit(v) => Some(*v),
        Expr::Unary { op: UnaryOp::Neg, operand } => try_const_eval(operand).map(|v| -v),
        Expr::Binary { op, lhs, rhs } => {
            let l = try_const_eval(lhs)?;
            let r = try_const_eval(rhs)?;
            match op {
                BinaryOp::Add => Some(l + r),
                BinaryOp::Sub => Some(l - r),
                BinaryOp::Mul => Some(l * r),
                BinaryOp::Shl => Some(l << r),
                BinaryOp::Shr => Some(l >> r),
                _ => None,
            }
        }
        Expr::Sizeof(arg) => match arg.as_ref() {
            SizeofArg::Type(ty) => {
                // The parser has no view of later-declared struct_defs,
                // so a tag-only aggregate's layout is unknowable here.
                // Returning its bogus zero-byte size would silently
                // produce `int arr[sizeof(struct x)] == arr[0]` for a
                // forward-referenced tag. Defer to lowering by marking
                // this expression as non-constant; arrays of unknown
                // constant dimension become VLAs downstream and are
                // sized correctly once struct_defs is in scope.
                if matches!(ty.unqualified(), Type::Struct { fields, .. } | Type::Union { fields, .. } if fields.is_empty()) {
                    return None;
                }
                Some(ty.size_bytes() as i64)
            }
            SizeofArg::Expr(_) => None,
        },
        Expr::Cast(_, inner) => try_const_eval(inner),
        _ => None,
    }
}

/// Parse a C source string into a translation unit.
pub fn parse(src: &str) -> Result<TranslationUnit, Error> {
    let mut parser = Parser::new(src)?;
    parser.parse_translation_unit()
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ast::*;
    use crate::token::IntSuffix;
    use crate::types::Type;

    #[test]
    fn parse_return_42() {
        let unit = parse("int main() { return 42; }").unwrap();
        assert_eq!(unit.functions.len(), 1);
        let f = &unit.functions[0];
        assert_eq!(f.name, "main");
        assert_eq!(f.return_type, Type::Int);
        assert!(f.params.is_empty());
        assert_eq!(f.body.len(), 1);
        match &f.body[0] {
            Stmt::Return(Some(Expr::IntLit(42, IntSuffix::None))) => {}
            other => panic!("expected return 42, got {other:?}"),
        }
    }

    #[test]
    fn parse_void_return() {
        let unit = parse("void f() { return; }").unwrap();
        let f = &unit.functions[0];
        assert_eq!(f.return_type, Type::Void);
        match &f.body[0] {
            Stmt::Return(None) => {}
            other => panic!("expected bare return, got {other:?}"),
        }
    }

    #[test]
    fn parse_function_params() {
        let unit = parse("int add(int a, int b) { return a; }").unwrap();
        let f = &unit.functions[0];
        assert_eq!(f.params.len(), 2);
        assert_eq!(f.params[0], ("a".into(), Type::Int));
        assert_eq!(f.params[1], ("b".into(), Type::Int));
    }

    #[test]
    fn parse_arithmetic_precedence() {
        // a + b * 2 should parse as a + (b * 2)
        let unit = parse("int f(int a, int b) { return a + b * 2; }").unwrap();
        let f = &unit.functions[0];
        match &f.body[0] {
            Stmt::Return(Some(Expr::Binary {
                op: BinaryOp::Add,
                lhs,
                rhs,
            })) => {
                match lhs.as_ref() {
                    Expr::Ident(name) => assert_eq!(name, "a"),
                    other => panic!("expected ident a, got {other:?}"),
                }
                match rhs.as_ref() {
                    Expr::Binary {
                        op: BinaryOp::Mul,
                        lhs,
                        rhs,
                    } => {
                        match lhs.as_ref() {
                            Expr::Ident(name) => assert_eq!(name, "b"),
                            other => panic!("expected ident b, got {other:?}"),
                        }
                        match rhs.as_ref() {
                            Expr::IntLit(2, IntSuffix::None) => {}
                            other => panic!("expected int 2, got {other:?}"),
                        }
                    }
                    other => panic!("expected mul, got {other:?}"),
                }
            }
            other => panic!("expected return with add, got {other:?}"),
        }
    }

    #[test]
    fn parse_unary_operators() {
        let unit = parse("int f() { return -42; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Unary {
                op: UnaryOp::Neg,
                operand,
            })) => {
                assert_eq!(operand.as_ref(), &Expr::IntLit(42, IntSuffix::None));
            }
            other => panic!("expected unary neg, got {other:?}"),
        }
    }

    #[test]
    fn parse_logical_operators() {
        let unit = parse("int f(int a, int b) { return a && b || 0; }").unwrap();
        // a && b || 0 should be (a && b) || 0 since && binds tighter
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Binary {
                op: BinaryOp::LogOr,
                lhs,
                rhs,
            })) => {
                match lhs.as_ref() {
                    Expr::Binary {
                        op: BinaryOp::LogAnd,
                        ..
                    } => {}
                    other => panic!("expected && on lhs, got {other:?}"),
                }
                assert_eq!(rhs.as_ref(), &Expr::IntLit(0, IntSuffix::None));
            }
            other => panic!("expected ||, got {other:?}"),
        }
    }

    #[test]
    fn parse_var_decl() {
        let unit = parse("int f() { int x = 5; return x; }").unwrap();
        let stmts = &unit.functions[0].body;
        assert_eq!(stmts.len(), 2);
        match &stmts[0] {
            Stmt::VarDecl { name, ty, init, .. } => {
                assert_eq!(name, "x");
                assert_eq!(*ty, Type::Int);
                assert_eq!(*init, Some(Expr::IntLit(5, IntSuffix::None)));
            }
            other => panic!("expected var decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_var_decl_no_init() {
        let unit = parse("int f() { int x; return x; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl {
                name, ty, init: None, ..
            } => {
                assert_eq!(name, "x");
                assert_eq!(*ty, Type::Int);
            }
            other => panic!("expected var decl without init, got {other:?}"),
        }
    }

    #[test]
    fn parse_assignment() {
        let unit = parse("int f() { int x; x = 10; return x; }").unwrap();
        match &unit.functions[0].body[1] {
            Stmt::Expr(Expr::Assign { target, value }) => {
                assert_eq!(target.as_ref(), &Expr::Ident("x".into()));
                assert_eq!(value.as_ref(), &Expr::IntLit(10, IntSuffix::None));
            }
            other => panic!("expected assignment, got {other:?}"),
        }
    }

    #[test]
    fn parse_if_else() {
        let unit = parse("int f(int x) { if (x) { return 1; } else { return 0; } }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::If {
                cond,
                then_body,
                else_body,
            } => {
                assert_eq!(*cond, Expr::Ident("x".into()));
                assert_eq!(then_body.len(), 1);
                assert!(else_body.is_some());
                assert_eq!(else_body.as_ref().unwrap().len(), 1);
            }
            other => panic!("expected if/else, got {other:?}"),
        }
    }

    #[test]
    fn parse_if_no_else() {
        let unit = parse("int f(int x) { if (x) { return 1; } return 0; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::If {
                else_body: None, ..
            } => {}
            other => panic!("expected if without else, got {other:?}"),
        }
    }

    #[test]
    fn parse_while_loop() {
        let unit = parse("int f(int x) { while (x) { x = x - 1; } return x; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::While { cond, body } => {
                assert_eq!(*cond, Expr::Ident("x".into()));
                assert_eq!(body.len(), 1);
            }
            other => panic!("expected while, got {other:?}"),
        }
    }

    #[test]
    fn parse_for_loop() {
        let src = "int f() { for (int i = 0; i < 10; i = i + 1) { return i; } return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::For {
                init,
                cond,
                step,
                body,
            } => {
                assert!(init.is_some());
                assert!(cond.is_some());
                assert!(step.is_some());
                assert_eq!(body.len(), 1);
            }
            other => panic!("expected for, got {other:?}"),
        }
    }

    #[test]
    fn parse_for_empty_parts() {
        let unit = parse("int f() { for (;;) { return 0; } return 0; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::For {
                init: None,
                cond: None,
                step: None,
                ..
            } => {}
            other => panic!("expected for(;;), got {other:?}"),
        }
    }

    #[test]
    fn parse_do_while() {
        let src = "int f(int x) { do { x = x - 1; } while (x); return x; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::DoWhile { body, cond } => {
                assert_eq!(body.len(), 1);
                assert_eq!(*cond, Expr::Ident("x".into()));
            }
            other => panic!("expected do/while, got {other:?}"),
        }
    }

    #[test]
    fn parse_function_call() {
        let src = "int f() { return add(1, 2); }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Call { name, args })) => {
                assert_eq!(name, "add");
                assert_eq!(args.len(), 2);
                assert_eq!(args[0], Expr::IntLit(1, IntSuffix::None));
                assert_eq!(args[1], Expr::IntLit(2, IntSuffix::None));
            }
            other => panic!("expected call, got {other:?}"),
        }
    }

    #[test]
    fn parse_parenthesized_expr() {
        // (a + b) * 2 should multiply the sum
        let src = "int f(int a, int b) { return (a + b) * 2; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Binary {
                op: BinaryOp::Mul,
                lhs,
                rhs,
            })) => {
                match lhs.as_ref() {
                    Expr::Binary {
                        op: BinaryOp::Add, ..
                    } => {}
                    other => panic!("expected add in parens, got {other:?}"),
                }
                assert_eq!(rhs.as_ref(), &Expr::IntLit(2, IntSuffix::None));
            }
            other => panic!("expected mul, got {other:?}"),
        }
    }

    #[test]
    fn parse_multiple_functions() {
        let src = "int a() { return 1; } int b() { return 2; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 2);
        assert_eq!(unit.functions[0].name, "a");
        assert_eq!(unit.functions[1].name, "b");
    }

    #[test]
    fn parse_nested_block() {
        let src = "int f() { { return 1; } }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Block(stmts) => {
                assert_eq!(stmts.len(), 1);
            }
            other => panic!("expected block, got {other:?}"),
        }
    }

    #[test]
    fn parse_comparison_chain() {
        // a < b == c should parse as (a < b) == c because relational binds tighter
        let src = "int f(int a, int b, int c) { return a < b == c; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Binary {
                op: BinaryOp::Eq,
                lhs,
                ..
            })) => {
                match lhs.as_ref() {
                    Expr::Binary {
                        op: BinaryOp::Lt, ..
                    } => {}
                    other => panic!("expected < on lhs of ==, got {other:?}"),
                }
            }
            other => panic!("expected ==, got {other:?}"),
        }
    }

    #[test]
    fn parse_bitwise_precedence() {
        // a | b & c should be a | (b & c) since & binds tighter
        let src = "int f(int a, int b, int c) { return a | b & c; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Binary {
                op: BinaryOp::BitOr,
                rhs,
                ..
            })) => {
                match rhs.as_ref() {
                    Expr::Binary {
                        op: BinaryOp::BitAnd,
                        ..
                    } => {}
                    other => panic!("expected & on rhs of |, got {other:?}"),
                }
            }
            other => panic!("expected |, got {other:?}"),
        }
    }

    #[test]
    fn parse_shift_precedence() {
        // a + b << c should be (a + b) << c since + binds tighter than <<
        let src = "int f(int a, int b, int c) { return a + b << c; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Binary {
                op: BinaryOp::Shl,
                lhs,
                ..
            })) => {
                match lhs.as_ref() {
                    Expr::Binary {
                        op: BinaryOp::Add, ..
                    } => {}
                    other => panic!("expected + on lhs of <<, got {other:?}"),
                }
            }
            other => panic!("expected <<, got {other:?}"),
        }
    }

    #[test]
    fn parse_if_without_braces() {
        let src = "int f(int x) { if (x) return 1; return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::If {
                then_body,
                else_body: None,
                ..
            } => {
                assert_eq!(then_body.len(), 1);
            }
            other => panic!("expected if without braces, got {other:?}"),
        }
    }

    #[test]
    fn parse_else_if() {
        let src = "int f(int x) { if (x) return 1; else if (x == 0) return 2; else return 3; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::If {
                else_body: Some(else_stmts),
                ..
            } => {
                assert_eq!(else_stmts.len(), 1);
                match &else_stmts[0] {
                    Stmt::If {
                        else_body: Some(inner_else),
                        ..
                    } => {
                        assert_eq!(inner_else.len(), 1);
                    }
                    other => panic!("expected nested if, got {other:?}"),
                }
            }
            other => panic!("expected if with else, got {other:?}"),
        }
    }

    #[test]
    fn parse_error_missing_semicolon() {
        let result = parse("int f() { return 42 }");
        assert!(result.is_err());
    }

    #[test]
    fn parse_error_missing_paren() {
        let result = parse("int f( { return 0; }");
        assert!(result.is_err());
    }

    #[test]
    fn parse_hex_literal() {
        let unit = parse("int f() { return 0xFF; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::IntLit(255, IntSuffix::None))) => {}
            other => panic!("expected return 255, got {other:?}"),
        }
    }

    #[test]
    fn parse_expr_stmt() {
        let src = "int f() { add(1, 2); return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Expr(Expr::Call { name, args }) => {
                assert_eq!(name, "add");
                assert_eq!(args.len(), 2);
            }
            other => panic!("expected expr stmt with call, got {other:?}"),
        }
    }

    #[test]
    fn parse_nested_unary() {
        let unit = parse("int f() { return !!1; }").unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Unary {
                op: UnaryOp::LogNot,
                operand,
            })) => {
                match operand.as_ref() {
                    Expr::Unary {
                        op: UnaryOp::LogNot,
                        operand,
                    } => {
                        assert_eq!(operand.as_ref(), &Expr::IntLit(1, IntSuffix::None));
                    }
                    other => panic!("expected nested !, got {other:?}"),
                }
            }
            other => panic!("expected !!, got {other:?}"),
        }
    }

    #[test]
    fn parse_complex_expression() {
        let src = "int f(int a, int b, int c) { return a * (b + c) - ~d(1); }";
        // This should fail because d is not declared, but parsing should succeed
        // (semantic checks come later)
        let result = parse(src);
        assert!(result.is_ok());
    }

    #[test]
    fn parse_with_comments() {
        let src = r#"
            // This is a comment
            int main() {
                /* block comment */
                return 0; // inline comment
            }
        "#;
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
        assert_eq!(unit.functions[0].name, "main");
    }

    // ---- New tests for extended features ----

    #[test]
    fn parse_pointer_deref() {
        let src = "int f(int *p) { return *p; }";
        let unit = parse(src).unwrap();
        let f = &unit.functions[0];
        assert_eq!(f.params[0].1, Type::Pointer(Box::new(Type::Int)));
        match &f.body[0] {
            Stmt::Return(Some(Expr::Deref(inner))) => {
                assert_eq!(inner.as_ref(), &Expr::Ident("p".into()));
            }
            other => panic!("expected deref, got {other:?}"),
        }
    }

    #[test]
    fn parse_addr_of() {
        let src = "int *f(int *x) { return &x; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::AddrOf(inner))) => {
                assert_eq!(inner.as_ref(), &Expr::Ident("x".into()));
            }
            other => panic!("expected addr_of, got {other:?}"),
        }
    }

    #[test]
    fn parse_struct_member() {
        let src = "struct point { int x; int y; }; int f(struct point *p) { return p->x; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Arrow(base, field))) => {
                assert_eq!(base.as_ref(), &Expr::Ident("p".into()));
                assert_eq!(field, "x");
            }
            other => panic!("expected arrow, got {other:?}"),
        }
    }

    #[test]
    fn parse_array_index() {
        let src = "int f(int *arr) { return arr[2]; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Index(base, idx))) => {
                assert_eq!(base.as_ref(), &Expr::Ident("arr".into()));
                assert_eq!(idx.as_ref(), &Expr::IntLit(2, IntSuffix::None));
            }
            other => panic!("expected index, got {other:?}"),
        }
    }

    #[test]
    fn parse_pre_increment() {
        let src = "int f(int *p) { return ++(*p); }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::PreInc(inner))) => {
                assert!(matches!(inner.as_ref(), Expr::Deref(_)));
            }
            other => panic!("expected preinc, got {other:?}"),
        }
    }

    #[test]
    fn parse_post_increment() {
        let src = "int f() { int x; x++; return x; }";
        let unit = parse(src).unwrap();
        assert!(matches!(&unit.functions[0].body[1], Stmt::Expr(Expr::PostInc(_))));
    }

    #[test]
    fn parse_switch_test() {
        let src = "int f(int x) { switch(x) { case 0: return 1; case 1: return 2; default: return 0; } }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Switch { expr, body } => {
                assert_eq!(*expr, Expr::Ident("x".into()));
                // body: CaseLabel(0), Return(1), CaseLabel(1), Return(2), DefaultLabel, Return(0)
                assert_eq!(body.len(), 6);
                assert!(matches!(&body[0], Stmt::CaseLabel(Expr::IntLit(0, _))));
                assert!(matches!(&body[2], Stmt::CaseLabel(Expr::IntLit(1, _))));
                assert!(matches!(&body[4], Stmt::DefaultLabel));
            }
            other => panic!("expected switch, got {other:?}"),
        }
    }

    #[test]
    fn parse_break_continue() {
        let src = "void f() { while(1) { break; continue; } }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::While { body, .. } => {
                assert_eq!(body[0], Stmt::Break);
                assert_eq!(body[1], Stmt::Continue);
            }
            other => panic!("expected while, got {other:?}"),
        }
    }

    #[test]
    fn parse_compound_assign() {
        let src = "int f(int x) { x += 1; return x; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Expr(Expr::CompoundAssign { op, target, value }) => {
                assert_eq!(*op, BinaryOp::Add);
                assert_eq!(target.as_ref(), &Expr::Ident("x".into()));
                assert_eq!(value.as_ref(), &Expr::IntLit(1, IntSuffix::None));
            }
            other => panic!("expected +=, got {other:?}"),
        }
    }

    #[test]
    fn parse_ternary() {
        let src = "int f(int x) { return x ? 1 : 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Ternary { cond, then_expr, else_expr })) => {
                assert_eq!(cond.as_ref(), &Expr::Ident("x".into()));
                assert_eq!(then_expr.as_ref(), &Expr::IntLit(1, IntSuffix::None));
                assert_eq!(else_expr.as_ref(), &Expr::IntLit(0, IntSuffix::None));
            }
            other => panic!("expected ternary, got {other:?}"),
        }
    }

    #[test]
    fn parse_sizeof_type() {
        let src = "int f() { return sizeof(int); }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Sizeof(arg))) => {
                assert!(matches!(arg.as_ref(), crate::ast::SizeofArg::Type(Type::Int)));
            }
            other => panic!("expected sizeof, got {other:?}"),
        }
    }

    #[test]
    fn parse_cast_expr() {
        let src = "int f(void *p) { return (int)p; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Cast(ty, inner))) => {
                assert_eq!(*ty, Type::Int);
                assert_eq!(inner.as_ref(), &Expr::Ident("p".into()));
            }
            other => panic!("expected cast, got {other:?}"),
        }
    }

    #[test]
    fn parse_pointer_param_types() {
        let src = "void f(char *s, unsigned int x, long y) { return; }";
        let unit = parse(src).unwrap();
        let f = &unit.functions[0];
        assert_eq!(f.params[0].1, Type::Pointer(Box::new(Type::Char)));
        assert_eq!(f.params[1].1, Type::Unsigned(Box::new(Type::Int)));
        assert_eq!(f.params[2].1, Type::Long);
    }

    #[test]
    fn parse_array_decl() {
        let src = "int f() { int arr[10]; return arr[0]; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { name, ty, .. } => {
                assert_eq!(name, "arr");
                assert_eq!(*ty, Type::Array(Box::new(Type::Int), Some(10)));
            }
            other => panic!("expected array decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_struct_def_and_var() {
        let src = "struct point { int x; int y; }; int f() { struct point p; return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { ty: Type::Struct { name: Some(n), .. }, .. } => {
                assert_eq!(n, "point");
            }
            other => panic!("expected struct point var, got {other:?}"),
        }
    }

    #[test]
    fn parse_dot_member_access() {
        let src = "struct s { int x; }; int f() { struct s v; return v.x; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[1] {
            Stmt::Return(Some(Expr::Member(_, field))) => assert_eq!(field, "x"),
            other => panic!("expected member, got {other:?}"),
        }
    }

    #[test]
    fn parse_global_var_test() {
        let unit = parse("int g = 42; int f() { return 0; }").unwrap();
        assert_eq!(unit.globals[0].name, "g");
        assert_eq!(unit.globals[0].init, Some(Expr::IntLit(42, IntSuffix::None)));
    }

    #[test]
    fn parse_extern_global() {
        let unit = parse("extern int g; int f() { return 0; }").unwrap();
        assert!(unit.globals[0].is_extern);
    }

    #[test]
    fn parse_typedef_usage() {
        let src = "typedef int myint; myint f() { myint x = 5; return x; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.typedefs[0].0, "myint");
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_string_lit_expr() {
        let unit = parse(r#"int f() { char *s = "hello"; return 0; }"#).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { init: Some(Expr::StringLit(s)), .. } => assert_eq!(s, "hello"),
            other => panic!("expected string lit, got {other:?}"),
        }
    }

    #[test]
    fn parse_char_lit_expr() {
        let unit = parse("int f() { return 'A'; }").unwrap();
        assert!(matches!(&unit.functions[0].body[0], Stmt::Return(Some(Expr::CharLit(65)))));
    }

    #[test]
    fn parse_goto_stmt() {
        let unit = parse("int f() { goto end; return 0; }").unwrap();
        assert!(matches!(&unit.functions[0].body[0], Stmt::Goto(l) if l == "end"));
    }

    #[test]
    fn parse_switch_with_break() {
        let src = "int f(int x) { int r; switch(x) { case 0: r = 10; break; default: r = 0; break; } return r; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[1] {
            Stmt::Switch { body, .. } => {
                // body: CaseLabel(0), Expr(r=10), Break, DefaultLabel, Expr(r=0), Break
                assert!(body.iter().any(|s| matches!(s, Stmt::Break)));
            }
            other => panic!("expected switch, got {other:?}"),
        }
    }

    #[test]
    fn parse_multiple_compound_ops() {
        let src = "int f(int x) { x -= 2; x *= 3; x /= 4; x %= 5; return x; }";
        let unit = parse(src).unwrap();
        let stmts = &unit.functions[0].body;
        assert!(matches!(&stmts[0], Stmt::Expr(Expr::CompoundAssign { op: BinaryOp::Sub, .. })));
        assert!(matches!(&stmts[1], Stmt::Expr(Expr::CompoundAssign { op: BinaryOp::Mul, .. })));
        assert!(matches!(&stmts[2], Stmt::Expr(Expr::CompoundAssign { op: BinaryOp::Div, .. })));
        assert!(matches!(&stmts[3], Stmt::Expr(Expr::CompoundAssign { op: BinaryOp::Mod, .. })));
    }

    #[test]
    fn parse_struct_defs_collected() {
        let src = "struct point { int x; int y; }; int f() { return 0; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.struct_defs.len(), 1);
        assert_eq!(unit.struct_defs[0].0, "point");
        assert_eq!(unit.struct_defs[0].1.len(), 2);
    }

    #[test]
    fn parse_label_stmt() {
        let src = "int f() { done: return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Label(label, inner) => {
                assert_eq!(label, "done");
                assert!(matches!(inner.as_ref(), Stmt::Return(_)));
            }
            other => panic!("expected label, got {other:?}"),
        }
    }

    #[test]
    fn parse_init_list() {
        let src = "int f() { int arr[3] = {1, 2, 3}; return arr[0]; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { name, ty, init: Some(Expr::InitList(items)), .. } => {
                assert_eq!(name, "arr");
                assert_eq!(*ty, Type::Array(Box::new(Type::Int), Some(3)));
                assert_eq!(items.len(), 3);
                assert_eq!(items[0], Expr::IntLit(1, IntSuffix::None));
                assert_eq!(items[1], Expr::IntLit(2, IntSuffix::None));
                assert_eq!(items[2], Expr::IntLit(3, IntSuffix::None));
            }
            other => panic!("expected var decl with init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_global_init_list() {
        let src = "int data[] = {10, 20, 30};\nint f() { return data[1]; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        assert_eq!(unit.globals[0].name, "data");
        // Array size should be inferred from the init list.
        assert_eq!(
            unit.globals[0].ty,
            Type::Array(Box::new(Type::Int), Some(3))
        );
        match &unit.globals[0].init {
            Some(Expr::InitList(items)) => {
                assert_eq!(items.len(), 3);
                assert_eq!(items[0], Expr::IntLit(10, IntSuffix::None));
            }
            other => panic!("expected init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_static_local() {
        let src = "int f() { static int count = 0; count++; return count; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { name, is_static, init, .. } => {
                assert_eq!(name, "count");
                assert!(*is_static);
                assert_eq!(*init, Some(Expr::IntLit(0, IntSuffix::None)));
            }
            other => panic!("expected static var decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_volatile_local() {
        let src = "int f() { volatile int x = 42; return x; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { ty, .. } => {
                assert_eq!(*ty, Type::Volatile(Box::new(Type::Int)));
            }
            other => panic!("expected volatile var decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_partial_init_list() {
        let src = "int f() { int arr[4] = {1, 2}; return arr[0]; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { ty, init: Some(Expr::InitList(items)), .. } => {
                assert_eq!(*ty, Type::Array(Box::new(Type::Int), Some(4)));
                assert_eq!(items.len(), 2);
            }
            other => panic!("expected partial init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_variadic() {
        let src = "int sum(int n, ...) { return n; }";
        let unit = parse(src).unwrap();
        assert!(unit.functions[0].is_variadic);
        assert_eq!(unit.functions[0].params.len(), 1);
        assert_eq!(unit.functions[0].params[0], ("n".into(), Type::Int));
    }

    #[test]
    fn parse_non_variadic() {
        let src = "int add(int a, int b) { return a; }";
        let unit = parse(src).unwrap();
        assert!(!unit.functions[0].is_variadic);
    }

    #[test]
    fn parse_variadic_multiple_params() {
        let src = "int fmt(int a, int b, int c, ...) { return a; }";
        let unit = parse(src).unwrap();
        assert!(unit.functions[0].is_variadic);
        assert_eq!(unit.functions[0].params.len(), 3);
    }

    #[test]
    fn parse_function_pointer_typedef() {
        let src = "typedef int (*fn_t)(int, int);\nint apply(fn_t f, int x) { return x; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
        assert_eq!(unit.typedefs.len(), 1);
        assert_eq!(unit.typedefs[0].0, "fn_t");
        match &unit.typedefs[0].1 {
            Type::FunctionPtr { return_type, params } => {
                assert_eq!(**return_type, Type::Int);
                assert_eq!(params.len(), 2);
            }
            other => panic!("expected FunctionPtr, got {other:?}"),
        }
    }

    #[test]
    fn parse_function_pointer_param() {
        let src = "void apply(int (*f)(int), int x) { return; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions[0].params.len(), 2);
        match &unit.functions[0].params[0].1 {
            Type::FunctionPtr { return_type, params } => {
                assert_eq!(**return_type, Type::Int);
                assert_eq!(params.len(), 1);
            }
            other => panic!("expected FunctionPtr param, got {other:?}"),
        }
        assert_eq!(unit.functions[0].params[0].0, "f");
    }

    #[test]
    fn parse_multidim_array() {
        let src = "int f() { int m[2][3]; return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { name, ty, .. } => {
                assert_eq!(name, "m");
                // int m[2][3] -> Array(Array(Int, Some(3)), Some(2))
                assert_eq!(
                    *ty,
                    Type::Array(
                        Box::new(Type::Array(Box::new(Type::Int), Some(3))),
                        Some(2)
                    )
                );
            }
            other => panic!("expected var decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_comma_expression() {
        let src = "int f() { int a = (1, 2, 3); return a; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { init: Some(Expr::Comma(..)), .. } => {}
            other => panic!("expected comma expr init, got {other:?}"),
        }
    }

    #[test]
    fn parse_designated_init() {
        let src = "struct p { int x; int y; };\nstruct p pt = {.x = 1, .y = 2};";
        let unit = parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        match &unit.globals[0].init {
            Some(Expr::InitList(items)) => {
                assert_eq!(items.len(), 2);
                match &items[0] {
                    Expr::DesignatedInit { field, value } => {
                        assert_eq!(field, "x");
                        assert_eq!(**value, Expr::IntLit(1, IntSuffix::None));
                    }
                    other => panic!("expected designated init, got {other:?}"),
                }
            }
            other => panic!("expected init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_asm_statement() {
        let src = r#"void f() { asm("NOP;"); }"#;
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Asm(s) => assert_eq!(s, "NOP;"),
            other => panic!("expected asm, got {other:?}"),
        }
    }

    #[test]
    fn parse_asm_variants() {
        let src1 = r#"void f() { __asm("NOP;"); }"#;
        let unit1 = parse(src1).unwrap();
        assert!(matches!(&unit1.functions[0].body[0], Stmt::Asm(_)));

        let src2 = r#"void f() { __asm__("NOP;"); }"#;
        let unit2 = parse(src2).unwrap();
        assert!(matches!(&unit2.functions[0].body[0], Stmt::Asm(_)));
    }

    #[test]
    fn parse_comma_in_call_not_operator() {
        // Comma in function call should NOT be treated as comma operator
        let src = "int f() { return add(1, 2); }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::Return(Some(Expr::Call { args, .. })) => {
                assert_eq!(args.len(), 2);
                assert_eq!(args[0], Expr::IntLit(1, IntSuffix::None));
                assert_eq!(args[1], Expr::IntLit(2, IntSuffix::None));
            }
            other => panic!("expected call with 2 args, got {other:?}"),
        }
    }

    #[test]
    fn parse_bool_type() {
        let src = "_Bool flag = 1; int f() { return flag; }";
        let unit = parse(src).unwrap();
        assert!(!unit.globals.is_empty());
        assert_eq!(unit.globals[0].ty, Type::Bool);
    }

    #[test]
    fn parse_complex_type() {
        let src = "float _Complex z; int f() { return 0; }";
        let unit = parse(src).unwrap();
        assert!(!unit.globals.is_empty());
        assert_eq!(unit.globals[0].ty, Type::Complex(Box::new(Type::Float)));
    }

    #[test]
    fn parse_double_complex_type() {
        let src = "double _Complex z; int f() { return 0; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.globals[0].ty, Type::Complex(Box::new(Type::Double)));
    }

    #[test]
    fn parse_imaginary_type() {
        let src = "float _Imaginary z; int f() { return 0; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.globals[0].ty, Type::Imaginary(Box::new(Type::Float)));
    }

    #[test]
    fn parse_typedef_cast() {
        let src = "typedef int myint; int f() { myint *p = (myint *)0; return 0; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_multi_decl() {
        let src = "int f() { int a, b, c; a = 1; b = 2; c = 3; return a + b + c; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_multi_decl_with_init() {
        let src = "int f() { int a = 1, b = 2, c; c = 3; return a + b + c; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_multi_decl_global() {
        let src = "int a, b, c; int f() { return a + b + c; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.globals.len(), 3);
        assert_eq!(unit.globals[0].name, "a");
        assert_eq!(unit.globals[1].name, "b");
        assert_eq!(unit.globals[2].name, "c");
    }

    #[test]
    fn parse_array_param() {
        let src = "void f(int arr[10]) { arr[0] = 1; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions[0].params[0].1, Type::Pointer(Box::new(Type::Int)));
    }

    #[test]
    fn parse_extern_func() {
        let src = "extern int ext_func(int); int f() { return ext_func(42); }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
        assert_eq!(unit.globals.len(), 1);
        assert!(unit.globals[0].is_extern);
    }

    #[test]
    fn parse_unnamed_params() {
        let src = "int f(int, int); int f(int a, int b) { return a + b; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_string_global() {
        let src = "const char *msg = \"hello\"; int f() { return 0; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.globals.len(), 1);
        assert_eq!(unit.globals[0].name, "msg");
        assert_eq!(unit.globals[0].init, Some(Expr::StringLit("hello".into())));
    }

    #[test]
    fn parse_typedef_struct_multi() {
        let src = "typedef struct { int x; } MyType, *MyTypePtr;";
        let unit = parse(src).unwrap();
        assert!(unit.typedefs.len() >= 2);
        assert_eq!(unit.typedefs[0].0, "MyType");
        assert_eq!(unit.typedefs[1].0, "MyTypePtr");
        assert!(matches!(unit.typedefs[1].1, Type::Pointer(_)));
    }

    #[test]
    fn parse_typedef_function_type() {
        let src = "typedef void callback_fn(void);\nint f() { return 0; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.typedefs.len(), 1);
        assert_eq!(unit.typedefs[0].0, "callback_fn");
        assert!(matches!(unit.typedefs[0].1, Type::FunctionPtr { .. }));
    }

    #[test]
    fn parse_anonymous_struct_member() {
        let src = "struct s { union { int a; float b; }; int c; };\nint f(struct s *p) { return p->c; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_anonymous_nested() {
        let src = r#"
            struct outer {
                union {
                    struct { int x; int y; };
                    int raw;
                };
                int z;
            };
            int f(struct outer *p) { return p->z; }
        "#;
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions.len(), 1);
    }

    #[test]
    fn parse_long_long() {
        let src = "long long f() { long long x = 42; unsigned long long y = 0; return x; }";
        let unit = parse(src).unwrap();
        assert_eq!(unit.functions[0].return_type, Type::LongLong);
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { ty, .. } => assert_eq!(*ty, Type::LongLong),
            other => panic!("expected long long var, got {other:?}"),
        }
        match &unit.functions[0].body[1] {
            Stmt::VarDecl { ty, .. } => assert_eq!(*ty, Type::ULongLong),
            other => panic!("expected unsigned long long var, got {other:?}"),
        }
    }

    #[test]
    fn parse_wide_string_lit() {
        let src = r#"int f() { int *p = L"hello"; return 0; }"#;
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { init: Some(Expr::WideStringLit(chars)), .. } => {
                assert_eq!(chars, &vec![104, 101, 108, 108, 111]);
            }
            other => panic!("expected wide string lit init, got {other:?}"),
        }
    }

    #[test]
    fn parse_vla_declaration() {
        let src = "int f(int n) { int a[n]; return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { name, ty, vla_dim, .. } => {
                assert_eq!(name, "a");
                assert_eq!(*ty, Type::Array(Box::new(Type::Int), None));
                assert!(vla_dim.is_some());
                assert_eq!(vla_dim.as_ref().unwrap(), &Expr::Ident("n".into()));
            }
            other => panic!("expected VLA var decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_wide_narrow_concat() {
        // L"foo" "bar" -> wide string "foobar"
        let src = r#"int f() { int *p = L"foo" "bar"; return 0; }"#;
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { init: Some(Expr::WideStringLit(chars)), .. } => {
                let expected: Vec<u32> = "foobar".chars().map(|c| c as u32).collect();
                assert_eq!(chars, &expected);
            }
            other => panic!("expected wide string concat, got {other:?}"),
        }
    }

    #[test]
    fn parse_vla_with_expression_dim() {
        let src = "int f(int n) { int a[n + 1]; return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { vla_dim: Some(_), ty, .. } => {
                assert_eq!(*ty, Type::Array(Box::new(Type::Int), None));
            }
            other => panic!("expected VLA var decl, got {other:?}"),
        }
    }

    #[test]
    fn parse_narrow_wide_concat() {
        // "foo" L"bar" -> wide string "foobar"
        let src = r#"int f() { int *p = "foo" L"bar"; return 0; }"#;
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { init: Some(Expr::WideStringLit(chars)), .. } => {
                let expected: Vec<u32> = "foobar".chars().map(|c| c as u32).collect();
                assert_eq!(chars, &expected);
            }
            other => panic!("expected wide string concat, got {other:?}"),
        }
    }

    #[test]
    fn parse_array_designator() {
        let src = "int arr[3] = {[1] = 42};";
        let unit = parse(src).unwrap();
        match &unit.globals[0].init {
            Some(Expr::InitList(items)) => {
                assert_eq!(items.len(), 1);
                match &items[0] {
                    Expr::ArrayDesignator { index, value } => {
                        assert_eq!(**index, Expr::IntLit(1, IntSuffix::None));
                        assert_eq!(**value, Expr::IntLit(42, IntSuffix::None));
                    }
                    other => panic!("expected array designator, got {other:?}"),
                }
            }
            other => panic!("expected init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_deep_nested_designator() {
        // [0].x = 5 -> ArrayDesignator(0, DesignatedInit("x", 5))
        let src = "struct s { int x; };\nstruct s arr[2] = {[0].x = 5};";
        let unit = parse(src).unwrap();
        match &unit.globals[0].init {
            Some(Expr::InitList(items)) => {
                assert_eq!(items.len(), 1);
                match &items[0] {
                    Expr::ArrayDesignator { index, value } => {
                        assert_eq!(**index, Expr::IntLit(0, IntSuffix::None));
                        match value.as_ref() {
                            Expr::DesignatedInit { field, value } => {
                                assert_eq!(field, "x");
                                assert_eq!(**value, Expr::IntLit(5, IntSuffix::None));
                            }
                            other => panic!("expected designated init, got {other:?}"),
                        }
                    }
                    other => panic!("expected array designator, got {other:?}"),
                }
            }
            other => panic!("expected init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_multi_array_designator() {
        // [1][2] = 99 -> ArrayDesignator(1, ArrayDesignator(2, 99))
        let src = "int arr[3][3] = {[1][2] = 99};";
        let unit = parse(src).unwrap();
        match &unit.globals[0].init {
            Some(Expr::InitList(items)) => {
                assert_eq!(items.len(), 1);
                match &items[0] {
                    Expr::ArrayDesignator { index, value } => {
                        assert_eq!(**index, Expr::IntLit(1, IntSuffix::None));
                        match value.as_ref() {
                            Expr::ArrayDesignator { index: i2, value: v2 } => {
                                assert_eq!(**i2, Expr::IntLit(2, IntSuffix::None));
                                assert_eq!(**v2, Expr::IntLit(99, IntSuffix::None));
                            }
                            other => panic!("expected inner array designator, got {other:?}"),
                        }
                    }
                    other => panic!("expected array designator, got {other:?}"),
                }
            }
            other => panic!("expected init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_field_array_field_designator() {
        // .a[3].b = 7 -> DesignatedInit("a", ArrayDesignator(3, DesignatedInit("b", 7)))
        let src = r#"
            struct inner { int b; };
            struct outer { struct inner a[5]; };
            struct outer x = {.a[3].b = 7};
        "#;
        let unit = parse(src).unwrap();
        match &unit.globals[0].init {
            Some(Expr::InitList(items)) => {
                assert_eq!(items.len(), 1);
                match &items[0] {
                    Expr::DesignatedInit { field, value } => {
                        assert_eq!(field, "a");
                        match value.as_ref() {
                            Expr::ArrayDesignator { index, value } => {
                                assert_eq!(**index, Expr::IntLit(3, IntSuffix::None));
                                match value.as_ref() {
                                    Expr::DesignatedInit { field, value } => {
                                        assert_eq!(field, "b");
                                        assert_eq!(**value, Expr::IntLit(7, IntSuffix::None));
                                    }
                                    other => panic!("expected inner designated init, got {other:?}"),
                                }
                            }
                            other => panic!("expected array designator, got {other:?}"),
                        }
                    }
                    other => panic!("expected designated init, got {other:?}"),
                }
            }
            other => panic!("expected init list, got {other:?}"),
        }
    }

    #[test]
    fn parse_constant_array_not_vla() {
        let src = "int f() { int a[10]; return 0; }";
        let unit = parse(src).unwrap();
        match &unit.functions[0].body[0] {
            Stmt::VarDecl { ty, vla_dim, .. } => {
                assert_eq!(*ty, Type::Array(Box::new(Type::Int), Some(10)));
                assert!(vla_dim.is_none());
            }
            other => panic!("expected fixed-size array, got {other:?}"),
        }
    }
}
