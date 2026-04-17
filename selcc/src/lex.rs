// SPDX-License-Identifier: GPL-3.0
// lex.rs --- C language tokenizer
// Copyright (c) 2026 Jakob Kastelic

use crate::error::Error;
use crate::token::{IntSuffix, Token};

pub struct Lexer<'a> {
    src: &'a [u8],
    pos: usize,
    line: u32,
    col: u32,
}

impl<'a> Lexer<'a> {
    pub fn new(src: &'a str) -> Self {
        Lexer {
            src: src.as_bytes(),
            pos: 0,
            line: 1,
            col: 1,
        }
    }

    pub fn line(&self) -> u32 {
        self.line
    }

    pub fn col(&self) -> u32 {
        self.col
    }

    /// Return the remaining unparsed bytes (used for lookahead probing).
    pub fn remaining_bytes(&self) -> &'a [u8] {
        &self.src[self.pos..]
    }

    fn peek(&self) -> Option<u8> {
        self.src.get(self.pos).copied()
    }

    fn peek2(&self) -> Option<u8> {
        self.src.get(self.pos + 1).copied()
    }


    fn advance(&mut self) -> u8 {
        let ch = self.src[self.pos];
        self.pos += 1;
        if ch == b'\n' {
            self.line += 1;
            self.col = 1;
        } else {
            self.col += 1;
        }
        ch
    }

    fn skip_whitespace(&mut self) {
        while let Some(ch) = self.peek() {
            if ch == b' ' || ch == b'\t' || ch == b'\n' || ch == b'\r' {
                self.advance();
            } else if ch == b'/' {
                if self.peek2() == Some(b'/') {
                    // line comment
                    self.advance();
                    self.advance();
                    while let Some(c) = self.peek() {
                        if c == b'\n' {
                            break;
                        }
                        self.advance();
                    }
                } else if self.peek2() == Some(b'*') {
                    // block comment
                    self.advance();
                    self.advance();
                    loop {
                        match self.peek() {
                            None => break,
                            Some(b'*') if self.peek2() == Some(b'/') => {
                                self.advance();
                                self.advance();
                                break;
                            }
                            _ => {
                                self.advance();
                            }
                        }
                    }
                } else {
                    break;
                }
            } else {
                break;
            }
        }
    }

    fn read_number(&mut self) -> Token {
        let first = self.advance();

        // Hex: 0x...
        if first == b'0' {
            if let Some(b'x' | b'X') = self.peek() {
                self.advance();
                let mut val: i64 = 0;
                while let Some(ch) = self.peek() {
                    if let Some(d) = hex_digit(ch) {
                        val = val.wrapping_mul(16).wrapping_add(d as i64);
                        self.advance();
                    } else {
                        break;
                    }
                }
                // Hex float: 0x[hex].[hex]p[+-]exp or 0x[hex]p[+-]exp
                if matches!(self.peek(), Some(b'.' | b'p' | b'P')) {
                    return self.read_hex_float(val as f64);
                }
                let suffix = parse_int_suffix(self);
                return Token::IntLit(val, suffix);
            }
            // Check for float starting with "0."
            if self.peek() == Some(b'.') {
                return self.read_float_fraction(0.0);
            }
            // Octal: 0...
            if matches!(self.peek(), Some(b'0'..=b'7')) {
                let mut val: i64 = 0;
                while let Some(ch) = self.peek() {
                    if (b'0'..=b'7').contains(&ch) {
                        val = val.wrapping_mul(8).wrapping_add((ch - b'0') as i64);
                        self.advance();
                    } else {
                        break;
                    }
                }
                let suffix = parse_int_suffix(self);
                return Token::IntLit(val, suffix);
            }
            // Just 0
            if !matches!(self.peek(), Some(b'0'..=b'9')) {
                let suffix = parse_int_suffix(self);
                return Token::IntLit(0, suffix);
            }
        }

        let mut val: i64 = (first - b'0') as i64;
        while let Some(ch) = self.peek() {
            if ch.is_ascii_digit() {
                val = val.wrapping_mul(10).wrapping_add((ch - b'0') as i64);
                self.advance();
            } else {
                break;
            }
        }

        // Check for decimal point -> float literal
        if self.peek() == Some(b'.') {
            return self.read_float_fraction(val as f64);
        }

        // Check for exponent without decimal point (e.g. 1e5)
        if matches!(self.peek(), Some(b'e' | b'E')) {
            return self.read_float_exponent(val as f64);
        }

        // Check for float suffix without decimal (e.g. 1f)
        if matches!(self.peek(), Some(b'f' | b'F')) {
            self.advance();
            return Token::FloatLit(val as f64);
        }

        let suffix = parse_int_suffix(self);
        Token::IntLit(val, suffix)
    }

    /// Read the fractional part of a float literal after the '.'.
    /// `integer_part` is the value accumulated before the dot.
    /// Read a hex float literal: 0x[hex].[hex]p[+-]exp
    /// `integer_part` is the value of the hex digits before the dot/p.
    fn read_hex_float(&mut self, integer_part: f64) -> Token {
        let mut val = integer_part;
        // Optional fractional part after '.'
        if self.peek() == Some(b'.') {
            self.advance();
            let mut divisor: f64 = 16.0;
            while let Some(ch) = self.peek() {
                if let Some(d) = hex_digit(ch) {
                    val += d as f64 / divisor;
                    divisor *= 16.0;
                    self.advance();
                } else {
                    break;
                }
            }
        }
        // Required binary exponent 'p' or 'P'
        if matches!(self.peek(), Some(b'p' | b'P')) {
            self.advance();
            let neg = if self.peek() == Some(b'-') {
                self.advance();
                true
            } else {
                if self.peek() == Some(b'+') {
                    self.advance();
                }
                false
            };
            let mut exp: i32 = 0;
            while let Some(ch) = self.peek() {
                if ch.is_ascii_digit() {
                    exp = exp * 10 + (ch - b'0') as i32;
                    self.advance();
                } else {
                    break;
                }
            }
            if neg {
                exp = -exp;
            }
            val *= (2.0_f64).powi(exp);
        }
        // Skip optional float suffix (f/F/l/L)
        if matches!(self.peek(), Some(b'f' | b'F' | b'l' | b'L')) {
            self.advance();
        }
        Token::FloatLit(val)
    }

    fn read_float_fraction(&mut self, integer_part: f64) -> Token {
        self.advance(); // consume '.'
        let mut frac: f64 = 0.0;
        let mut divisor: f64 = 10.0;
        while let Some(ch) = self.peek() {
            if ch.is_ascii_digit() {
                frac += (ch - b'0') as f64 / divisor;
                divisor *= 10.0;
                self.advance();
            } else {
                break;
            }
        }
        let val = integer_part + frac;

        // Check for exponent
        if matches!(self.peek(), Some(b'e' | b'E')) {
            return self.read_float_exponent(val);
        }

        // Skip optional float suffix (f/F/l/L)
        if matches!(self.peek(), Some(b'f' | b'F' | b'l' | b'L')) {
            self.advance();
        }
        Token::FloatLit(val)
    }

    /// Read the exponent part of a float literal (e.g. e+10, E-3).
    fn read_float_exponent(&mut self, mantissa: f64) -> Token {
        self.advance(); // consume 'e' or 'E'
        let neg = if self.peek() == Some(b'-') {
            self.advance();
            true
        } else {
            if self.peek() == Some(b'+') {
                self.advance();
            }
            false
        };
        let mut exp: i32 = 0;
        while let Some(ch) = self.peek() {
            if ch.is_ascii_digit() {
                exp = exp * 10 + (ch - b'0') as i32;
                self.advance();
            } else {
                break;
            }
        }
        if neg {
            exp = -exp;
        }
        let val = mantissa * 10f64.powi(exp);
        // Skip optional float suffix
        if matches!(self.peek(), Some(b'f' | b'F' | b'l' | b'L')) {
            self.advance();
        }
        Token::FloatLit(val)
    }

    fn read_ident_or_keyword(&mut self) -> Token {
        let start = self.pos;
        let mut has_ucn = false;
        // Check if the first char is a UCN (\u or \U).
        if self.peek() == Some(b'\\')
            && matches!(self.src.get(self.pos + 1), Some(b'u' | b'U'))
        {
            has_ucn = true;
        } else {
            self.advance();
        }
        loop {
            match self.peek() {
                Some(ch) if ch.is_ascii_alphanumeric() || ch == b'_' => {
                    self.advance();
                }
                Some(b'\\')
                    if matches!(self.src.get(self.pos + 1), Some(b'u' | b'U')) =>
                {
                    has_ucn = true;
                    break;
                }
                _ => break,
            }
        }

        if has_ucn {
            // Re-parse from start, building a String with resolved UCNs.
            let ascii_prefix =
                std::str::from_utf8(&self.src[start..self.pos]).unwrap().to_string();
            return self.read_ident_with_ucn(ascii_prefix);
        }

        let word = std::str::from_utf8(&self.src[start..self.pos]).unwrap();
        match word {
            "int" => Token::Int,
            "void" => Token::Void,
            "char" => Token::Char,
            "short" => Token::Short,
            "long" => Token::Long,
            "float" => Token::Float,
            "double" => Token::Double,
            "unsigned" => Token::Unsigned,
            "signed" => Token::Signed,
            "struct" => Token::Struct,
            "union" => Token::Union,
            "enum" => Token::Enum,
            "typedef" => Token::Typedef,
            "sizeof" => Token::Sizeof,
            "const" => Token::Const,
            "static" => Token::Static,
            "extern" => Token::Extern,
            "volatile" => Token::Volatile,
            "register" => Token::Register,
            "auto" => Token::Auto,
            "return" => Token::Return,
            "if" => Token::If,
            "else" => Token::Else,
            "while" => Token::While,
            "for" => Token::For,
            "do" => Token::Do,
            "switch" => Token::Switch,
            "case" => Token::Case,
            "default" => Token::Default,
            "break" => Token::Break,
            "continue" => Token::Continue,
            "goto" => Token::Goto,
            "_Bool" => Token::Bool,
            "_Complex" => Token::Complex,
            "_Imaginary" => Token::Imaginary,
            "asm" | "__asm" | "__asm__" => Token::Asm,
            _ => Token::Ident(word.to_string()),
        }
    }

    /// Continue reading an identifier that contains universal character names.
    /// `prefix` is the ASCII portion already consumed before the first \u/\U.
    fn read_ident_with_ucn(&mut self, prefix: String) -> Token {
        let mut name = prefix;
        loop {
            if self.peek() == Some(b'\\')
                && matches!(self.src.get(self.pos + 1), Some(b'u' | b'U'))
            {
                self.advance(); // consume '\'
                let count = if self.peek() == Some(b'u') { 4 } else { 8 };
                self.advance(); // consume 'u' or 'U'
                let mut val: u32 = 0;
                for _ in 0..count {
                    if let Some(d) = self.peek().and_then(hex_digit) {
                        val = val * 16 + d as u32;
                        self.advance();
                    } else {
                        break;
                    }
                }
                if let Some(ch) = char::from_u32(val) {
                    name.push(ch);
                }
            } else {
                match self.peek() {
                    Some(ch) if ch.is_ascii_alphanumeric() || ch == b'_' => {
                        name.push(ch as char);
                        self.advance();
                    }
                    _ => break,
                }
            }
        }
        Token::Ident(name)
    }

    fn read_string(&mut self) -> Result<Token, Error> {
        let line = self.line;
        let col = self.col;
        self.advance(); // skip opening quote
        let mut s = String::new();
        loop {
            match self.peek() {
                None => {
                    return Err(Error::Lex {
                        line,
                        col,
                        msg: "unterminated string literal".to_string(),
                    });
                }
                Some(b'"') => {
                    self.advance();
                    break;
                }
                Some(b'\\') => {
                    self.advance();
                    let ch = self.read_escape_char(line, col)?;
                    s.push(ch);
                }
                Some(ch) => {
                    self.advance();
                    s.push(ch as char);
                }
            }
        }
        Ok(Token::StringLit(s))
    }

    fn read_char_literal(&mut self) -> Result<Token, Error> {
        let line = self.line;
        let col = self.col;
        self.advance(); // skip opening quote
        let mut val: i64 = 0;
        loop {
            match self.peek() {
                None | Some(b'\n') => {
                    return Err(Error::Lex {
                        line,
                        col,
                        msg: "unterminated character literal".to_string(),
                    });
                }
                Some(b'\'') => {
                    self.advance(); // skip closing quote
                    break;
                }
                Some(b'\\') => {
                    self.advance();
                    let ch = self.read_escape_char(line, col)? as i64;
                    val = (val << 8) | (ch & 0xFF);
                }
                Some(ch) => {
                    self.advance();
                    val = (val << 8) | (ch as i64 & 0xFF);
                }
            }
        }
        Ok(Token::CharLit(val))
    }

    /// Read a wide character literal L'x' (C99 6.4.4.4).
    /// Produces Token::IntLit with wchar_t width (32-bit on SHARC).
    fn read_wide_char_literal(&mut self) -> Result<Token, Error> {
        let line = self.line;
        let col = self.col;
        self.advance(); // skip opening quote
        let val = match self.peek() {
            None => {
                return Err(Error::Lex {
                    line,
                    col,
                    msg: "unterminated wide character literal".to_string(),
                });
            }
            Some(b'\\') => {
                self.advance();
                self.read_escape_char(line, col)? as u32 as i64
            }
            Some(ch) => {
                self.advance();
                ch as u32 as i64
            }
        };
        if self.peek() != Some(b'\'') {
            return Err(Error::Lex {
                line,
                col,
                msg: "unterminated wide character literal".to_string(),
            });
        }
        self.advance(); // skip closing quote
        Ok(Token::IntLit(val, IntSuffix::None))
    }

    /// Read a wide string literal L"..." (C99 6.4.5).
    /// Produces Token::WideStringLit with wchar_t (32-bit) code points.
    fn read_wide_string(&mut self) -> Result<Token, Error> {
        let line = self.line;
        let col = self.col;
        self.advance(); // skip opening quote
        let mut chars: Vec<u32> = Vec::new();
        loop {
            match self.peek() {
                None => {
                    return Err(Error::Lex {
                        line,
                        col,
                        msg: "unterminated wide string literal".to_string(),
                    });
                }
                Some(b'"') => {
                    self.advance();
                    break;
                }
                Some(b'\\') => {
                    self.advance();
                    let ch = self.read_escape_char(line, col)?;
                    chars.push(ch as u32);
                }
                Some(ch) => {
                    self.advance();
                    chars.push(ch as u32);
                }
            }
        }
        Ok(Token::WideStringLit(chars))
    }

    fn read_escape_char(&mut self, line: u32, col: u32) -> Result<char, Error> {
        match self.peek() {
            Some(b'n') => {
                self.advance();
                Ok('\n')
            }
            Some(b't') => {
                self.advance();
                Ok('\t')
            }
            Some(b'r') => {
                self.advance();
                Ok('\r')
            }
            Some(b'\\') => {
                self.advance();
                Ok('\\')
            }
            Some(b'\'') => {
                self.advance();
                Ok('\'')
            }
            Some(b'"') => {
                self.advance();
                Ok('"')
            }
            Some(b'0'..=b'7') => {
                let mut val: u8 = 0;
                for _ in 0..3 {
                    match self.peek() {
                        Some(ch @ b'0'..=b'7') => {
                            val = val * 8 + (ch - b'0');
                            self.advance();
                        }
                        _ => break,
                    }
                }
                Ok(val as char)
            }
            Some(b'x') => {
                self.advance();
                let mut val: u8 = 0;
                for _ in 0..2 {
                    match self.peek().and_then(hex_digit) {
                        Some(d) => {
                            val = val * 16 + d;
                            self.advance();
                        }
                        None => break,
                    }
                }
                Ok(val as char)
            }
            // Universal character name \uXXXX (C99 6.4.3)
            Some(b'u') => {
                self.advance();
                let val = self.read_ucn_digits(4, line, col)?;
                char::from_u32(val).ok_or_else(|| Error::Lex {
                    line,
                    col,
                    msg: format!("invalid universal character name: \\u{val:04X}"),
                })
            }
            // Universal character name \UXXXXXXXX (C99 6.4.3)
            Some(b'U') => {
                self.advance();
                let val = self.read_ucn_digits(8, line, col)?;
                char::from_u32(val).ok_or_else(|| Error::Lex {
                    line,
                    col,
                    msg: format!("invalid universal character name: \\U{val:08X}"),
                })
            }
            Some(ch) => {
                self.advance();
                Ok(ch as char)
            }
            None => Err(Error::Lex {
                line,
                col,
                msg: "unterminated escape sequence".to_string(),
            }),
        }
    }

    /// Read exactly `count` hex digits for a universal character name.
    fn read_ucn_digits(&mut self, count: usize, line: u32, col: u32) -> Result<u32, Error> {
        let mut val: u32 = 0;
        for _ in 0..count {
            match self.peek().and_then(hex_digit) {
                Some(d) => {
                    val = val * 16 + d as u32;
                    self.advance();
                }
                None => {
                    return Err(Error::Lex {
                        line,
                        col,
                        msg: format!(
                            "expected {count} hex digits in universal character name"
                        ),
                    });
                }
            }
        }
        Ok(val)
    }

    pub fn next_token(&mut self) -> Result<Token, Error> {
        self.skip_whitespace();

        let ch = match self.peek() {
            None => return Ok(Token::Eof),
            Some(ch) => ch,
        };

        // Numbers (including .5 style floats)
        if ch.is_ascii_digit() {
            return Ok(self.read_number());
        }
        if ch == b'.' && matches!(self.src.get(self.pos + 1), Some(b'0'..=b'9')) {
            return Ok(self.read_float_fraction(0.0));
        }

        // Wide character literal L'x' or wide string literal L"..."
        if ch == b'L' {
            if let Some(b'\'') = self.peek2() {
                self.advance(); // skip 'L'
                return self.read_wide_char_literal();
            }
            if let Some(b'"') = self.peek2() {
                self.advance(); // skip 'L'
                return self.read_wide_string();
            }
        }

        // Identifiers and keywords (including UCN \uXXXX / \UXXXXXXXX start)
        if ch.is_ascii_alphabetic() || ch == b'_'
            || (ch == b'\\' && matches!(self.src.get(self.pos + 1), Some(b'u' | b'U')))
        {
            return Ok(self.read_ident_or_keyword());
        }

        // String literal
        if ch == b'"' {
            return self.read_string();
        }

        // Character literal
        if ch == b'\'' {
            return self.read_char_literal();
        }

        let line = self.line;
        let col = self.col;

        // Operators and punctuation
        self.advance();
        match ch {
            b'+' => {
                if self.peek() == Some(b'+') {
                    self.advance();
                    Ok(Token::PlusPlus)
                } else if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::PlusAssign)
                } else {
                    Ok(Token::Plus)
                }
            }
            b'-' => {
                if self.peek() == Some(b'-') {
                    self.advance();
                    Ok(Token::MinusMinus)
                } else if self.peek() == Some(b'>') {
                    self.advance();
                    Ok(Token::Arrow)
                } else if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::MinusAssign)
                } else {
                    Ok(Token::Minus)
                }
            }
            b'*' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::StarAssign)
                } else {
                    Ok(Token::Star)
                }
            }
            b'/' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::SlashAssign)
                } else {
                    Ok(Token::Slash)
                }
            }
            b'%' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::PercentAssign)
                } else if self.peek() == Some(b'>') {
                    // Digraph %> -> }
                    self.advance();
                    Ok(Token::RBrace)
                } else {
                    Ok(Token::Percent)
                }
            }
            b'^' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::CaretAssign)
                } else {
                    Ok(Token::Caret)
                }
            }
            b'~' => Ok(Token::Tilde),
            b'?' => Ok(Token::Question),
            b':' => {
                if self.peek() == Some(b'>') {
                    // Digraph :> -> ]
                    self.advance();
                    Ok(Token::RBracket)
                } else {
                    Ok(Token::Colon)
                }
            }
            b'.' => {
                if self.peek() == Some(b'.') && self.peek2() == Some(b'.') {
                    self.advance();
                    self.advance();
                    Ok(Token::Ellipsis)
                } else {
                    Ok(Token::Dot)
                }
            }
            b'(' => Ok(Token::LParen),
            b')' => Ok(Token::RParen),
            b'{' => Ok(Token::LBrace),
            b'}' => Ok(Token::RBrace),
            b'[' => Ok(Token::LBracket),
            b']' => Ok(Token::RBracket),
            b';' => Ok(Token::Semicolon),
            b',' => Ok(Token::Comma),
            b'=' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::Eq)
                } else {
                    Ok(Token::Assign)
                }
            }
            b'!' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::Ne)
                } else {
                    Ok(Token::Bang)
                }
            }
            b'<' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::Le)
                } else if self.peek() == Some(b'<') {
                    self.advance();
                    if self.peek() == Some(b'=') {
                        self.advance();
                        Ok(Token::ShlAssign)
                    } else {
                        Ok(Token::Shl)
                    }
                } else if self.peek() == Some(b':') {
                    // Digraph <: -> [
                    self.advance();
                    Ok(Token::LBracket)
                } else if self.peek() == Some(b'%') {
                    // Digraph <% -> {
                    self.advance();
                    Ok(Token::LBrace)
                } else {
                    Ok(Token::Lt)
                }
            }
            b'>' => {
                if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::Ge)
                } else if self.peek() == Some(b'>') {
                    self.advance();
                    if self.peek() == Some(b'=') {
                        self.advance();
                        Ok(Token::ShrAssign)
                    } else {
                        Ok(Token::Shr)
                    }
                } else {
                    Ok(Token::Gt)
                }
            }
            b'&' => {
                if self.peek() == Some(b'&') {
                    self.advance();
                    Ok(Token::And)
                } else if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::AmpAssign)
                } else {
                    Ok(Token::Amp)
                }
            }
            b'|' => {
                if self.peek() == Some(b'|') {
                    self.advance();
                    Ok(Token::Or)
                } else if self.peek() == Some(b'=') {
                    self.advance();
                    Ok(Token::PipeAssign)
                } else {
                    Ok(Token::Pipe)
                }
            }
            _ => Err(Error::Lex {
                line,
                col,
                msg: format!("unexpected character: '{}'", ch as char),
            }),
        }
    }
}

/// Parse optional integer literal suffix per C99 6.4.4.1 and return the
/// suffix classification.  Handles all orderings: u, U, l, L, ll, LL,
/// ul, UL, ull, ULL, lu, LU, llu, LLU, etc.
fn parse_int_suffix(lexer: &mut Lexer<'_>) -> IntSuffix {
    let mut has_u = false;
    let mut long_count: u8 = 0;

    // First component: may start with u/U or l/L
    if matches!(lexer.peek(), Some(b'u' | b'U')) {
        lexer.advance();
        has_u = true;
    }
    // l/L or ll/LL
    if matches!(lexer.peek(), Some(b'l' | b'L')) {
        lexer.advance();
        long_count = 1;
        if matches!(lexer.peek(), Some(b'l' | b'L')) {
            lexer.advance();
            long_count = 2;
        }
    }
    // Trailing u/U (handles LU, LLU orderings)
    if !has_u && matches!(lexer.peek(), Some(b'u' | b'U')) {
        lexer.advance();
        has_u = true;
    }

    match (has_u, long_count) {
        (false, 0) => IntSuffix::None,
        (true, 0) => IntSuffix::U,
        (false, 1) => IntSuffix::L,
        (true, 1) => IntSuffix::UL,
        (false, _) => IntSuffix::LL,
        (true, _) => IntSuffix::Ull,
    }
}

fn hex_digit(ch: u8) -> Option<u8> {
    match ch {
        b'0'..=b'9' => Some(ch - b'0'),
        b'a'..=b'f' => Some(ch - b'a' + 10),
        b'A'..=b'F' => Some(ch - b'A' + 10),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::token::{IntSuffix, Token};

    fn tokenize(src: &str) -> Result<Vec<Token>, crate::error::Error> {
        let mut lexer = Lexer::new(src);
        let mut tokens = Vec::new();
        loop {
            let tok = lexer.next_token()?;
            if tok == Token::Eof {
                break;
            }
            tokens.push(tok);
        }
        Ok(tokens)
    }

    #[test]
    fn lex_empty() {
        let tokens = tokenize("").unwrap();
        assert!(tokens.is_empty());
    }

    #[test]
    fn lex_whitespace_only() {
        let tokens = tokenize("   \n\t  ").unwrap();
        assert!(tokens.is_empty());
    }

    #[test]
    fn lex_integer_literals() {
        let tokens = tokenize("0 42 0x1F 0XFF 077").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::IntLit(0, IntSuffix::None),
                Token::IntLit(42, IntSuffix::None),
                Token::IntLit(0x1F, IntSuffix::None),
                Token::IntLit(0xFF, IntSuffix::None),
                Token::IntLit(0o77, IntSuffix::None),
            ]
        );
    }

    #[test]
    fn lex_integer_suffix_ll() {
        let tokens = tokenize("42LL 42ll 42ULL 42ull 42LLU 42llu").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::IntLit(42, IntSuffix::LL),
                Token::IntLit(42, IntSuffix::LL),
                Token::IntLit(42, IntSuffix::Ull),
                Token::IntLit(42, IntSuffix::Ull),
                Token::IntLit(42, IntSuffix::Ull),
                Token::IntLit(42, IntSuffix::Ull),
            ]
        );
    }

    #[test]
    fn lex_integer_suffix_u_l() {
        let tokens = tokenize("42U 42u 42L 42l 42UL 42ul 42LU 42lu").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::IntLit(42, IntSuffix::U),
                Token::IntLit(42, IntSuffix::U),
                Token::IntLit(42, IntSuffix::L),
                Token::IntLit(42, IntSuffix::L),
                Token::IntLit(42, IntSuffix::UL),
                Token::IntLit(42, IntSuffix::UL),
                Token::IntLit(42, IntSuffix::UL),
                Token::IntLit(42, IntSuffix::UL),
            ]
        );
    }

    #[test]
    fn lex_hex_with_suffix() {
        let tokens = tokenize("0xFFLL 0x1ULL").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::IntLit(0xFF, IntSuffix::LL),
                Token::IntLit(0x1, IntSuffix::Ull),
            ]
        );
    }

    #[test]
    fn lex_keywords() {
        let tokens = tokenize("int void return if else while for do").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Int,
                Token::Void,
                Token::Return,
                Token::If,
                Token::Else,
                Token::While,
                Token::For,
                Token::Do,
            ]
        );
    }

    #[test]
    fn lex_new_keywords() {
        let tokens = tokenize(
            "char short long float double unsigned signed struct union enum typedef sizeof switch case default break continue goto const static extern volatile",
        )
        .unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Char,
                Token::Short,
                Token::Long,
                Token::Float,
                Token::Double,
                Token::Unsigned,
                Token::Signed,
                Token::Struct,
                Token::Union,
                Token::Enum,
                Token::Typedef,
                Token::Sizeof,
                Token::Switch,
                Token::Case,
                Token::Default,
                Token::Break,
                Token::Continue,
                Token::Goto,
                Token::Const,
                Token::Static,
                Token::Extern,
                Token::Volatile,
            ]
        );
    }

    #[test]
    fn lex_identifiers() {
        let tokens = tokenize("foo _bar baz123").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Ident("foo".into()),
                Token::Ident("_bar".into()),
                Token::Ident("baz123".into()),
            ]
        );
    }

    #[test]
    fn lex_operators() {
        let tokens = tokenize("+ - * / % & | ^ ~ ! << >> == != < > <= >= && ||").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Plus,
                Token::Minus,
                Token::Star,
                Token::Slash,
                Token::Percent,
                Token::Amp,
                Token::Pipe,
                Token::Caret,
                Token::Tilde,
                Token::Bang,
                Token::Shl,
                Token::Shr,
                Token::Eq,
                Token::Ne,
                Token::Lt,
                Token::Gt,
                Token::Le,
                Token::Ge,
                Token::And,
                Token::Or,
            ]
        );
    }

    #[test]
    fn lex_new_operators() {
        let tokens =
            tokenize("-> . ++ -- += -= *= /= %= &= |= ^= <<= >>= ? : ...").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Arrow,
                Token::Dot,
                Token::PlusPlus,
                Token::MinusMinus,
                Token::PlusAssign,
                Token::MinusAssign,
                Token::StarAssign,
                Token::SlashAssign,
                Token::PercentAssign,
                Token::AmpAssign,
                Token::PipeAssign,
                Token::CaretAssign,
                Token::ShlAssign,
                Token::ShrAssign,
                Token::Question,
                Token::Colon,
                Token::Ellipsis,
            ]
        );
    }

    #[test]
    fn lex_delimiters() {
        let tokens = tokenize("( ) { } [ ] ; ,").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::LParen,
                Token::RParen,
                Token::LBrace,
                Token::RBrace,
                Token::LBracket,
                Token::RBracket,
                Token::Semicolon,
                Token::Comma,
            ]
        );
    }

    #[test]
    fn lex_assign_vs_eq() {
        let tokens = tokenize("= ==").unwrap();
        assert_eq!(tokens, vec![Token::Assign, Token::Eq]);
    }

    #[test]
    fn lex_line_comment() {
        let tokens = tokenize("42 // comment\n7").unwrap();
        assert_eq!(tokens, vec![Token::IntLit(42, IntSuffix::None), Token::IntLit(7, IntSuffix::None)]);
    }

    #[test]
    fn lex_block_comment() {
        let tokens = tokenize("42 /* comment */ 7").unwrap();
        assert_eq!(tokens, vec![Token::IntLit(42, IntSuffix::None), Token::IntLit(7, IntSuffix::None)]);
    }

    #[test]
    fn lex_multiline_block_comment() {
        let tokens = tokenize("1 /* line1\nline2\nline3 */ 2").unwrap();
        assert_eq!(tokens, vec![Token::IntLit(1, IntSuffix::None), Token::IntLit(2, IntSuffix::None)]);
    }

    #[test]
    fn lex_string_literal() {
        let tokens = tokenize(r#""hello""#).unwrap();
        assert_eq!(tokens, vec![Token::StringLit("hello".into())]);
    }

    #[test]
    fn lex_string_escapes() {
        let tokens = tokenize(r#""a\nb\\c""#).unwrap();
        assert_eq!(tokens, vec![Token::StringLit("a\nb\\c".into())]);
    }

    #[test]
    fn lex_unterminated_string() {
        let result = tokenize(r#""hello"#);
        assert!(result.is_err());
    }

    #[test]
    fn lex_char_literal() {
        let tokens = tokenize("'a'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(b'a' as i64)]);
    }

    #[test]
    fn lex_char_escape() {
        let tokens = tokenize(r"'\n'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(b'\n' as i64)]);
    }

    #[test]
    fn lex_char_hex_escape() {
        let tokens = tokenize(r"'\x41'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(0x41)]);
    }

    #[test]
    fn lex_simple_function() {
        let tokens = tokenize("int main() { return 42; }").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Int,
                Token::Ident("main".into()),
                Token::LParen,
                Token::RParen,
                Token::LBrace,
                Token::Return,
                Token::IntLit(42, IntSuffix::None),
                Token::Semicolon,
                Token::RBrace,
            ]
        );
    }

    #[test]
    fn lex_position_tracking() {
        let mut lexer = Lexer::new("ab\ncd");
        assert_eq!(lexer.line(), 1);
        assert_eq!(lexer.col(), 1);

        lexer.next_token().unwrap(); // "ab"
        assert_eq!(lexer.line(), 1);
        assert_eq!(lexer.col(), 3);

        lexer.next_token().unwrap(); // "cd" -- after newline
        assert_eq!(lexer.line(), 2);
        assert_eq!(lexer.col(), 3);
    }

    #[test]
    fn lex_unexpected_char() {
        let result = tokenize("@");
        assert!(result.is_err());
    }

    #[test]
    fn lex_arrow_vs_minus() {
        let tokens = tokenize("p->x - 1").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Ident("p".into()),
                Token::Arrow,
                Token::Ident("x".into()),
                Token::Minus,
                Token::IntLit(1, IntSuffix::None),
            ]
        );
    }

    #[test]
    fn lex_dot() {
        let tokens = tokenize("s.x").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Ident("s".into()),
                Token::Dot,
                Token::Ident("x".into()),
            ]
        );
    }

    #[test]
    fn lex_increment_decrement() {
        let tokens = tokenize("++x x++ --y y--").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::PlusPlus,
                Token::Ident("x".into()),
                Token::Ident("x".into()),
                Token::PlusPlus,
                Token::MinusMinus,
                Token::Ident("y".into()),
                Token::Ident("y".into()),
                Token::MinusMinus,
            ]
        );
    }

    #[test]
    fn lex_compound_assign() {
        let tokens = tokenize("+= -= *= /= %= &= |= ^= <<= >>=").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::PlusAssign,
                Token::MinusAssign,
                Token::StarAssign,
                Token::SlashAssign,
                Token::PercentAssign,
                Token::AmpAssign,
                Token::PipeAssign,
                Token::CaretAssign,
                Token::ShlAssign,
                Token::ShrAssign,
            ]
        );
    }

    #[test]
    fn lex_ternary() {
        let tokens = tokenize("a ? b : c").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Ident("a".into()),
                Token::Question,
                Token::Ident("b".into()),
                Token::Colon,
                Token::Ident("c".into()),
            ]
        );
    }

    #[test]
    fn lex_bool_keyword() {
        let tokens = tokenize("_Bool x").unwrap();
        assert_eq!(tokens, vec![Token::Bool, Token::Ident("x".into())]);
    }

    #[test]
    fn lex_complex_keyword() {
        let tokens = tokenize("float _Complex z").unwrap();
        assert_eq!(tokens, vec![Token::Float, Token::Complex, Token::Ident("z".into())]);
    }

    #[test]
    fn lex_imaginary_keyword() {
        let tokens = tokenize("float _Imaginary z").unwrap();
        assert_eq!(tokens, vec![Token::Float, Token::Imaginary, Token::Ident("z".into())]);
    }

    #[test]
    fn lex_float_literals() {
        let tokens = tokenize("2.75 1.0 0.5 .25").unwrap();
        assert_eq!(tokens.len(), 4);
        assert!(matches!(&tokens[0], Token::FloatLit(v) if (*v - 2.75).abs() < 1e-10));
        assert!(matches!(&tokens[1], Token::FloatLit(v) if (*v - 1.0).abs() < 1e-10));
        assert!(matches!(&tokens[2], Token::FloatLit(v) if (*v - 0.5).abs() < 1e-10));
        assert!(matches!(&tokens[3], Token::FloatLit(v) if (*v - 0.25).abs() < 1e-10));
    }

    #[test]
    fn lex_float_with_suffix() {
        let tokens = tokenize("2.75f 1.0F").unwrap();
        assert_eq!(tokens.len(), 2);
        assert!(matches!(&tokens[0], Token::FloatLit(v) if (*v - 2.75).abs() < 1e-10));
        assert!(matches!(&tokens[1], Token::FloatLit(v) if (*v - 1.0).abs() < 1e-10));
    }

    #[test]
    fn lex_float_exponent() {
        let tokens = tokenize("1e5 2.5e-3 1.0E+2").unwrap();
        assert_eq!(tokens.len(), 3);
        assert!(matches!(&tokens[0], Token::FloatLit(v) if (*v - 1e5).abs() < 1.0));
        assert!(matches!(&tokens[1], Token::FloatLit(v) if (*v - 2.5e-3).abs() < 1e-10));
        assert!(matches!(&tokens[2], Token::FloatLit(v) if (*v - 100.0).abs() < 1e-10));
    }

    #[test]
    fn lex_digraph_brackets() {
        // <: -> [, :> -> ]
        let tokens = tokenize("a<:0:>").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::Ident("a".into()),
                Token::LBracket,
                Token::IntLit(0, IntSuffix::None),
                Token::RBracket,
            ]
        );
    }

    #[test]
    fn lex_digraph_braces() {
        // <% -> {, %> -> }
        let tokens = tokenize("<%int x;%>").unwrap();
        assert_eq!(
            tokens,
            vec![
                Token::LBrace,
                Token::Int,
                Token::Ident("x".into()),
                Token::Semicolon,
                Token::RBrace,
            ]
        );
    }

    #[test]
    fn lex_wide_char_literal() {
        let tokens = tokenize("L'A'").unwrap();
        assert_eq!(tokens, vec![Token::IntLit(65, IntSuffix::None)]);
    }

    #[test]
    fn lex_wide_char_escape() {
        let tokens = tokenize(r"L'\n'").unwrap();
        assert_eq!(tokens, vec![Token::IntLit(10, IntSuffix::None)]);
    }

    #[test]
    fn lex_wide_string_literal() {
        let tokens = tokenize(r#"L"hello""#).unwrap();
        assert_eq!(
            tokens,
            vec![Token::WideStringLit(vec![104, 101, 108, 108, 111])]
        );
    }

    #[test]
    fn lex_wide_string_with_escape() {
        let tokens = tokenize(r#"L"a\nb""#).unwrap();
        assert_eq!(
            tokens,
            vec![Token::WideStringLit(vec![97, 10, 98])]
        );
    }

    #[test]
    fn lex_ucn_in_string() {
        // \u00E9 is 'e' with acute accent (U+00E9)
        let tokens = tokenize(r#""\u00E9""#).unwrap();
        assert_eq!(tokens, vec![Token::StringLit("\u{00E9}".into())]);
    }

    #[test]
    fn lex_ucn_uppercase_in_string() {
        // \U0001F600 is grinning face emoji
        let tokens = tokenize(r#""\U0001F600""#).unwrap();
        assert_eq!(tokens, vec![Token::StringLit("\u{1F600}".into())]);
    }

    #[test]
    fn lex_ucn_in_char_literal() {
        let tokens = tokenize(r"'\u0041'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(0x41)]);
    }

    #[test]
    fn lex_ucn_in_identifier() {
        let tokens = tokenize(r"caf\u00E9").unwrap();
        assert_eq!(tokens, vec![Token::Ident("caf\u{00E9}".into())]);
    }

    #[test]
    fn lex_ucn_start_identifier() {
        let tokens = tokenize(r"\u00E9var").unwrap();
        assert_eq!(tokens, vec![Token::Ident("\u{00E9}var".into())]);
    }

    #[test]
    fn lex_wide_string_vs_ident_l() {
        // L not followed by " should be an identifier
        let tokens = tokenize("L x").unwrap();
        assert_eq!(tokens, vec![Token::Ident("L".into()), Token::Ident("x".into())]);
    }

    #[test]
    fn lex_octal_escape_null() {
        // \0 should still work as NUL
        let tokens = tokenize(r"'\0'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(0)]);
    }

    #[test]
    fn lex_octal_escape_single_digit() {
        let tokens = tokenize(r"'\7'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(7)]);
    }

    #[test]
    fn lex_octal_escape_two_digits() {
        // \77 = octal 77 = decimal 63
        let tokens = tokenize(r"'\77'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(63)]);
    }

    #[test]
    fn lex_octal_escape_three_digits() {
        // \177 = octal 177 = decimal 127
        let tokens = tokenize(r"'\177'").unwrap();
        assert_eq!(tokens, vec![Token::CharLit(127)]);
    }

    #[test]
    fn lex_octal_escape_in_string() {
        let tokens = tokenize(r#""\7\77\177""#).unwrap();
        if let Token::StringLit(s) = &tokens[0] {
            assert_eq!(s.as_bytes(), &[7, 63, 127]);
        } else {
            panic!("expected StringLit");
        }
    }
}
