// SPDX-License-Identifier: GPL-3.0
// ldf_lex.rs --- Tokenizer for the LDF linker description language
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;

/// Token kinds produced by the lexer.
#[derive(Debug, Clone, PartialEq)]
pub enum Token {
    /// Identifier or keyword.
    Ident(String),
    /// A `$VARIABLE` reference (includes the leading `$`).
    Variable(String),
    /// Numeric literal (decimal or hex).
    Number(u32),
    /// Quoted string literal (contents only, no quotes).
    StringLit(String),
    /// `{`
    LBrace,
    /// `}`
    RBrace,
    /// `(`
    LParen,
    /// `)`
    RParen,
    /// `;`
    Semi,
    /// `,`
    Comma,
    /// `=`
    Equals,
    /// `>`
    Gt,
    /// `!`
    Bang,
    /// `.`
    Dot,
    /// `/`
    Slash,
    /// End of input.
    Eof,
}

/// Source location for diagnostics.
#[derive(Debug, Clone, Copy)]
pub struct Loc {
    pub line: usize,
    pub col: usize,
}

/// A token with its source location.
#[derive(Debug, Clone)]
pub struct Spanned {
    pub tok: Token,
    pub loc: Loc,
}

/// Tokenize an LDF source string, handling preprocessor directives.
pub fn tokenize(src: &str, defines: &HashMap<String, String>) -> Result<Vec<Spanned>, String> {
    let mut lexer = Lexer::new(src, defines);
    let mut tokens = Vec::new();
    loop {
        let sp = lexer.next_token()?;
        let is_eof = sp.tok == Token::Eof;
        tokens.push(sp);
        if is_eof {
            break;
        }
    }
    Ok(tokens)
}

struct Lexer<'a> {
    src: &'a [u8],
    pos: usize,
    line: usize,
    col: usize,
    defines: HashMap<String, String>,
    /// Stack of conditional inclusion states.
    /// Each entry: (active, seen_true_branch).
    cond_stack: Vec<(bool, bool)>,
}

impl<'a> Lexer<'a> {
    fn new(src: &'a str, defines: &HashMap<String, String>) -> Self {
        Self {
            src: src.as_bytes(),
            pos: 0,
            line: 1,
            col: 1,
            defines: defines.clone(),
            cond_stack: Vec::new(),
        }
    }

    fn active(&self) -> bool {
        self.cond_stack.iter().all(|(active, _)| *active)
    }

    fn peek(&self) -> Option<u8> {
        self.src.get(self.pos).copied()
    }

    fn advance(&mut self) -> Option<u8> {
        let ch = self.src.get(self.pos).copied()?;
        self.pos += 1;
        if ch == b'\n' {
            self.line += 1;
            self.col = 1;
        } else {
            self.col += 1;
        }
        Some(ch)
    }

    fn loc(&self) -> Loc {
        Loc { line: self.line, col: self.col }
    }

    fn skip_whitespace(&mut self) {
        while let Some(ch) = self.peek() {
            if ch == b' ' || ch == b'\t' || ch == b'\r' || ch == b'\n' {
                self.advance();
            } else {
                break;
            }
        }
    }

    fn skip_line_comment(&mut self) {
        while let Some(ch) = self.advance() {
            if ch == b'\n' {
                break;
            }
        }
    }

    fn skip_block_comment(&mut self) -> Result<(), String> {
        let start = self.loc();
        loop {
            match self.advance() {
                None => {
                    return Err(format!(
                        "unterminated block comment starting at line {}:{}",
                        start.line, start.col
                    ));
                }
                Some(b'*') => {
                    if self.peek() == Some(b'/') {
                        self.advance();
                        return Ok(());
                    }
                }
                _ => {}
            }
        }
    }

    fn skip_to_eol(&mut self) {
        while let Some(ch) = self.peek() {
            if ch == b'\n' {
                break;
            }
            self.advance();
        }
    }

    fn read_rest_of_line(&mut self) -> String {
        let start = self.pos;
        self.skip_to_eol();
        let s = std::str::from_utf8(&self.src[start..self.pos]).unwrap_or("");
        s.trim().to_string()
    }

    fn read_ident_from(&mut self, start: usize) -> String {
        while let Some(ch) = self.peek() {
            if ch.is_ascii_alphanumeric() || ch == b'_' || ch == b'-' {
                self.advance();
            } else {
                break;
            }
        }
        std::str::from_utf8(&self.src[start..self.pos])
            .unwrap_or("")
            .to_string()
    }

    fn handle_preprocessor(&mut self) -> Result<(), String> {
        // Skip `#`
        self.advance();
        // Skip whitespace after #
        while let Some(ch) = self.peek() {
            if ch == b' ' || ch == b'\t' {
                self.advance();
            } else {
                break;
            }
        }
        let start = self.pos;
        let directive = self.read_ident_from(start);

        match directive.as_str() {
            "define" => {
                // Skip whitespace
                while let Some(ch) = self.peek() {
                    if ch == b' ' || ch == b'\t' {
                        self.advance();
                    } else {
                        break;
                    }
                }
                let name_start = self.pos;
                let name = self.read_ident_from(name_start);
                // Skip whitespace
                while let Some(ch) = self.peek() {
                    if ch == b' ' || ch == b'\t' {
                        self.advance();
                    } else {
                        break;
                    }
                }
                let value = self.read_rest_of_line();
                if self.active() {
                    self.defines.insert(name, value);
                }
            }
            "undef" => {
                while let Some(ch) = self.peek() {
                    if ch == b' ' || ch == b'\t' {
                        self.advance();
                    } else {
                        break;
                    }
                }
                let name_start = self.pos;
                let name = self.read_ident_from(name_start);
                if self.active() {
                    self.defines.remove(&name);
                }
                self.skip_to_eol();
            }
            "ifdef" => {
                while let Some(ch) = self.peek() {
                    if ch == b' ' || ch == b'\t' {
                        self.advance();
                    } else {
                        break;
                    }
                }
                let name_start = self.pos;
                let name = self.read_ident_from(name_start);
                let defined = self.defines.contains_key(&name);
                self.cond_stack.push((self.active() && defined, defined));
                self.skip_to_eol();
            }
            "ifndef" => {
                while let Some(ch) = self.peek() {
                    if ch == b' ' || ch == b'\t' {
                        self.advance();
                    } else {
                        break;
                    }
                }
                let name_start = self.pos;
                let name = self.read_ident_from(name_start);
                let not_defined = !self.defines.contains_key(&name);
                self.cond_stack.push((self.active() && not_defined, not_defined));
                self.skip_to_eol();
            }
            "if" => {
                // Simple: handle `defined(NAME)` only
                let rest = self.read_rest_of_line();
                let cond = self.eval_if_condition(&rest);
                self.cond_stack.push((self.active() && cond, cond));
            }
            "else" => {
                self.skip_to_eol();
                let stack_len = self.cond_stack.len();
                if stack_len == 0 {
                    return Err("unexpected #else without #if".into());
                }
                let parent_active = if stack_len < 2 {
                    true
                } else {
                    self.cond_stack[..stack_len - 1].iter().all(|(a, _)| *a)
                };
                let entry = self.cond_stack.last_mut().unwrap();
                entry.0 = parent_active && !entry.1;
            }
            "endif" => {
                self.skip_to_eol();
                if self.cond_stack.pop().is_none() {
                    return Err("unexpected #endif without #if".into());
                }
            }
            "include" => {
                self.skip_to_eol();
                return Err("unsupported: #include (use -sp to skip preprocessing)".into());
            }
            _ => {
                if !directive.is_empty() {
                    eprintln!("warning: unsupported preprocessor directive: #{directive}");
                }
                self.skip_to_eol();
            }
        }
        Ok(())
    }

    fn eval_if_condition(&self, expr: &str) -> bool {
        let trimmed = expr.trim();
        if let Some(inner) = trimmed.strip_prefix("defined(") {
            if let Some(name) = inner.strip_suffix(')') {
                return self.defines.contains_key(name.trim());
            }
        }
        if let Some(inner) = trimmed.strip_prefix("defined ") {
            return self.defines.contains_key(inner.trim());
        }
        // Fallback: treat as false
        false
    }

    fn next_token(&mut self) -> Result<Spanned, String> {
        loop {
            self.skip_whitespace();

            let loc = self.loc();
            let ch = match self.peek() {
                None => return Ok(Spanned { tok: Token::Eof, loc }),
                Some(ch) => ch,
            };

            // Handle comments
            if ch == b'/' {
                if self.src.get(self.pos + 1) == Some(&b'/') {
                    self.skip_line_comment();
                    continue;
                }
                if self.src.get(self.pos + 1) == Some(&b'*') {
                    self.advance();
                    self.advance();
                    self.skip_block_comment()?;
                    continue;
                }
            }

            // Handle preprocessor
            if ch == b'#' && loc.col == 1 {
                self.handle_preprocessor()?;
                continue;
            }
            // Also handle # not at col 1 if it starts a line
            if ch == b'#' {
                self.handle_preprocessor()?;
                continue;
            }

            if !self.active() {
                // Skip content in inactive conditional blocks
                if ch == b'\n' {
                    self.advance();
                    continue;
                }
                self.advance();
                continue;
            }

            // Single-character tokens
            match ch {
                b'{' => { self.advance(); return Ok(Spanned { tok: Token::LBrace, loc }); }
                b'}' => { self.advance(); return Ok(Spanned { tok: Token::RBrace, loc }); }
                b'(' => { self.advance(); return Ok(Spanned { tok: Token::LParen, loc }); }
                b')' => { self.advance(); return Ok(Spanned { tok: Token::RParen, loc }); }
                b';' => { self.advance(); return Ok(Spanned { tok: Token::Semi, loc }); }
                b',' => { self.advance(); return Ok(Spanned { tok: Token::Comma, loc }); }
                b'=' => { self.advance(); return Ok(Spanned { tok: Token::Equals, loc }); }
                b'>' => { self.advance(); return Ok(Spanned { tok: Token::Gt, loc }); }
                b'!' => { self.advance(); return Ok(Spanned { tok: Token::Bang, loc }); }
                b'.' => { self.advance(); return Ok(Spanned { tok: Token::Dot, loc }); }
                b'/' => { self.advance(); return Ok(Spanned { tok: Token::Slash, loc }); }
                _ => {}
            }

            // Variable reference $IDENT
            if ch == b'$' {
                self.advance();
                let name_start = self.pos;
                let name = self.read_ident_from(name_start);
                let var_name = format!("${name}");
                return Ok(Spanned { tok: Token::Variable(var_name), loc });
            }

            // String literal
            if ch == b'"' {
                self.advance();
                let mut s = String::new();
                loop {
                    match self.advance() {
                        None => return Err(format!("unterminated string at line {}:{}", loc.line, loc.col)),
                        Some(b'"') => break,
                        Some(b'\\') => {
                            if let Some(esc) = self.advance() {
                                s.push(esc as char);
                            }
                        }
                        Some(c) => s.push(c as char),
                    }
                }
                return Ok(Spanned { tok: Token::StringLit(s), loc });
            }

            // Number
            if ch.is_ascii_digit() {
                let start = self.pos;
                if ch == b'0' && self.src.get(self.pos + 1).copied() == Some(b'x') {
                    self.advance();
                    self.advance();
                    while let Some(c) = self.peek() {
                        if c.is_ascii_hexdigit() {
                            self.advance();
                        } else {
                            break;
                        }
                    }
                    let s = std::str::from_utf8(&self.src[start..self.pos]).unwrap_or("0");
                    let val = u32::from_str_radix(&s[2..], 16)
                        .map_err(|e| format!("invalid hex number `{s}`: {e}"))?;
                    return Ok(Spanned { tok: Token::Number(val), loc });
                }
                while let Some(c) = self.peek() {
                    if c.is_ascii_digit() {
                        self.advance();
                    } else {
                        break;
                    }
                }
                let s = std::str::from_utf8(&self.src[start..self.pos]).unwrap_or("0");
                let val: u32 = s.parse()
                    .map_err(|e| format!("invalid number `{s}`: {e}"))?;
                return Ok(Spanned { tok: Token::Number(val), loc });
            }

            // Identifier / keyword
            if ch.is_ascii_alphabetic() || ch == b'_' {
                let start = self.pos;
                let ident = self.read_ident_from(start);
                // Check if it is a define
                if let Some(expansion) = self.defines.get(&ident) {
                    // Re-tokenize is complex; for simple single-token defines just
                    // try to parse as number or return as ident.
                    let exp = expansion.clone();
                    let trimmed = exp.trim();
                    if let Ok(val) = trimmed.parse::<u32>() {
                        return Ok(Spanned { tok: Token::Number(val), loc });
                    }
                    if let Some(hex) = trimmed.strip_prefix("0x") {
                        if let Ok(val) = u32::from_str_radix(hex, 16) {
                            return Ok(Spanned { tok: Token::Number(val), loc });
                        }
                    }
                    return Ok(Spanned { tok: Token::Ident(trimmed.to_string()), loc });
                }
                return Ok(Spanned { tok: Token::Ident(ident), loc });
            }

            return Err(format!("unexpected character `{}` at line {}:{}", ch as char, loc.line, loc.col));
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn toks(src: &str) -> Vec<Token> {
        let defs = HashMap::new();
        tokenize(src, &defs)
            .unwrap()
            .into_iter()
            .map(|s| s.tok)
            .collect()
    }

    #[test]
    fn simple_tokens() {
        let result = toks("{ } ( ) ; , = > .");
        assert_eq!(result, vec![
            Token::LBrace, Token::RBrace, Token::LParen, Token::RParen,
            Token::Semi, Token::Comma, Token::Equals, Token::Gt, Token::Dot,
            Token::Eof,
        ]);
    }

    #[test]
    fn ident_and_number() {
        let result = toks("MEMORY 0x1000 48");
        assert_eq!(result, vec![
            Token::Ident("MEMORY".into()),
            Token::Number(0x1000),
            Token::Number(48),
            Token::Eof,
        ]);
    }

    #[test]
    fn variable() {
        let result = toks("$OBJECTS = foo ;");
        assert_eq!(result, vec![
            Token::Variable("$OBJECTS".into()),
            Token::Equals,
            Token::Ident("foo".into()),
            Token::Semi,
            Token::Eof,
        ]);
    }

    #[test]
    fn string_literal() {
        let result = toks("\"hello.doj\"");
        assert_eq!(result, vec![
            Token::StringLit("hello.doj".into()),
            Token::Eof,
        ]);
    }

    #[test]
    fn line_comment() {
        let result = toks("MEMORY // this is a comment\n48");
        assert_eq!(result, vec![
            Token::Ident("MEMORY".into()),
            Token::Number(48),
            Token::Eof,
        ]);
    }

    #[test]
    fn block_comment() {
        let result = toks("MEMORY /* block */ 48");
        assert_eq!(result, vec![
            Token::Ident("MEMORY".into()),
            Token::Number(48),
            Token::Eof,
        ]);
    }

    #[test]
    fn ifdef_true() {
        let mut defs = HashMap::new();
        defs.insert("FOO".into(), "1".into());
        let result: Vec<Token> = tokenize("#ifdef FOO\nMEMORY\n#endif\n", &defs)
            .unwrap()
            .into_iter()
            .map(|s| s.tok)
            .collect();
        assert_eq!(result, vec![Token::Ident("MEMORY".into()), Token::Eof]);
    }

    #[test]
    fn ifdef_false() {
        let defs = HashMap::new();
        let result: Vec<Token> = tokenize("#ifdef FOO\nMEMORY\n#endif\n", &defs)
            .unwrap()
            .into_iter()
            .map(|s| s.tok)
            .collect();
        assert_eq!(result, vec![Token::Eof]);
    }

    #[test]
    fn ifdef_else() {
        let defs = HashMap::new();
        let result: Vec<Token> = tokenize(
            "#ifdef FOO\nMEMORY\n#else\nSECTIONS\n#endif\n",
            &defs,
        )
        .unwrap()
        .into_iter()
        .map(|s| s.tok)
        .collect();
        assert_eq!(result, vec![Token::Ident("SECTIONS".into()), Token::Eof]);
    }

    #[test]
    fn define_substitution() {
        let defs = HashMap::new();
        let result: Vec<Token> = tokenize(
            "#define MY_ADDR 0x1000\nSTART(MY_ADDR)\n",
            &defs,
        )
        .unwrap()
        .into_iter()
        .map(|s| s.tok)
        .collect();
        assert_eq!(result, vec![
            Token::Ident("START".into()),
            Token::LParen,
            Token::Number(0x1000),
            Token::RParen,
            Token::Eof,
        ]);
    }

    #[test]
    fn ifndef() {
        let defs = HashMap::new();
        let result: Vec<Token> = tokenize(
            "#ifndef FOO\nMEMORY\n#endif\n",
            &defs,
        )
        .unwrap()
        .into_iter()
        .map(|s| s.tok)
        .collect();
        assert_eq!(result, vec![Token::Ident("MEMORY".into()), Token::Eof]);
    }

    #[test]
    fn hex_numbers() {
        let result = toks("0x00090000 0x000900a7");
        assert_eq!(result, vec![
            Token::Number(0x00090000),
            Token::Number(0x000900a7),
            Token::Eof,
        ]);
    }

    #[test]
    fn identifier_with_hyphen() {
        let result = toks("ADSP-21569");
        assert_eq!(result, vec![Token::Ident("ADSP-21569".into()), Token::Eof]);
    }

    #[test]
    fn command_line_variables() {
        let result = toks("$COMMAND_LINE_OBJECTS");
        assert_eq!(result, vec![
            Token::Variable("$COMMAND_LINE_OBJECTS".into()),
            Token::Eof,
        ]);
    }

    #[test]
    fn unterminated_block_comment() {
        let defs = HashMap::new();
        let result = tokenize("/* never closed", &defs);
        assert!(result.is_err());
    }

    #[test]
    fn unterminated_string() {
        let defs = HashMap::new();
        let result = tokenize("\"never closed", &defs);
        assert!(result.is_err());
    }

    #[test]
    fn bang_token() {
        let result = toks("!");
        assert_eq!(result, vec![Token::Bang, Token::Eof]);
    }

    #[test]
    fn include_directive_is_error() {
        let defs = HashMap::new();
        let result = tokenize("#include \"foo.h\"\n", &defs);
        assert!(result.is_err());
        let msg = result.unwrap_err();
        assert!(msg.contains("#include"), "error should mention #include: {msg}");
    }

    #[test]
    fn unknown_directive_continues() {
        let defs = HashMap::new();
        let result = tokenize("#pragma once\nMEMORY\n", &defs);
        assert!(result.is_ok());
        let toks: Vec<Token> = result.unwrap().into_iter().map(|s| s.tok).collect();
        assert_eq!(toks, vec![Token::Ident("MEMORY".into()), Token::Eof]);
    }
}
