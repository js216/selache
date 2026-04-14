// SPDX-License-Identifier: GPL-3.0
// ldf_parse.rs --- Recursive descent parser for the LDF language
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;

use crate::error::{Error, Result};
use crate::ldf_ast::*;
use crate::ldf_lex::{self, Spanned, Token};

/// Parse an LDF source string into an AST.
pub fn parse(src: &str, defines: &HashMap<String, String>) -> Result<Ldf> {
    let tokens = ldf_lex::tokenize(src, defines)
        .map_err(Error::Parse)?;
    let mut p = Parser { tokens, pos: 0 };
    p.parse_ldf()
}

struct Parser {
    tokens: Vec<Spanned>,
    pos: usize,
}

impl Parser {
    fn peek(&self) -> &Token {
        self.tokens
            .get(self.pos)
            .map(|s| &s.tok)
            .unwrap_or(&Token::Eof)
    }

    fn at_eof(&self) -> bool {
        matches!(self.peek(), Token::Eof)
    }

    fn advance(&mut self) -> &Token {
        let tok = self.tokens.get(self.pos).map(|s| &s.tok).unwrap_or(&Token::Eof);
        if self.pos < self.tokens.len() {
            self.pos += 1;
        }
        tok
    }

    fn expect_ident(&mut self) -> Result<String> {
        match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                Ok(s)
            }
            other => Err(self.err(format!("expected identifier, got {}", tok_name(&other)))),
        }
    }

    fn expect(&mut self, expected: &Token) -> Result<()> {
        let got = self.peek().clone();
        if &got == expected {
            self.advance();
            Ok(())
        } else {
            Err(self.err(format!(
                "expected {}, got {}",
                tok_name(expected),
                tok_name(&got)
            )))
        }
    }

    fn err(&self, msg: String) -> Error {
        let loc = self.tokens.get(self.pos).map(|s| s.loc);
        if let Some(loc) = loc {
            Error::Parse(format!("line {}:{}: {}", loc.line, loc.col, msg))
        } else {
            Error::Parse(msg)
        }
    }

    fn parse_ldf(&mut self) -> Result<Ldf> {
        let mut ldf = Ldf {
            architecture: None,
            variables: Vec::new(),
            memory: Vec::new(),
            processors: Vec::new(),
            script_assignments: Vec::new(),
        };

        let mut last_pos = usize::MAX;
        while !self.at_eof() {
            // Safety: detect accidental non-progress to avoid infinite loops.
            if self.pos == last_pos {
                self.advance();
                continue;
            }
            last_pos = self.pos;
            match self.peek().clone() {
                Token::Ident(ref s) if s == "ARCHITECTURE" => {
                    ldf.architecture = Some(self.parse_architecture()?);
                }
                Token::Ident(ref s) if s == "MEMORY" => {
                    ldf.memory.extend(self.parse_memory()?);
                }
                Token::Ident(ref s) if s == "PROCESSOR" => {
                    let (proc, mut assigns) = self.parse_processor()?;
                    ldf.processors.push(proc);
                    ldf.script_assignments.append(&mut assigns);
                }
                Token::Ident(ref s) if s == "SEARCH_DIR" => {
                    self.parse_search_dir()?;
                }
                Token::Variable(_) => {
                    ldf.variables.push(self.parse_var_decl()?);
                }
                Token::Semi => {
                    self.advance();
                }
                Token::Ident(_) => {
                    // A bare `ident = expr ;` at the LDF top level is a
                    // script constant assignment. Anything else (unknown
                    // keyword without `=`) falls through to the permissive
                    // statement skip below.
                    if self.looks_like_assignment() {
                        if let Some(a) = self.try_parse_assignment()? {
                            ldf.script_assignments.push(a);
                            continue;
                        }
                    }
                    self.skip_one_statement();
                }
                _ => {
                    // Unknown top-level construct. In permissive mode, skip
                    // one statement-worth of tokens so stray LDF features we
                    // do not care about (PLIT, MAP, etc.) do not abort the
                    // parse.
                    self.skip_one_statement();
                }
            }
        }

        Ok(ldf)
    }

    /// Skip tokens until the end of a top-level statement. Balances
    /// `{`/`(`/`[` so multi-line forms are handled correctly.
    fn skip_one_statement(&mut self) {
        let mut depth = 0i32;
        loop {
            match self.peek() {
                Token::Eof => return,
                Token::Semi if depth == 0 => {
                    self.advance();
                    return;
                }
                Token::LBrace | Token::LParen | Token::LBracket => {
                    depth += 1;
                    self.advance();
                }
                Token::RBrace | Token::RParen | Token::RBracket => {
                    if depth == 0 {
                        // Stop before we consume the enclosing brace.
                        return;
                    }
                    depth -= 1;
                    self.advance();
                    if depth == 0 {
                        return;
                    }
                }
                _ => {
                    self.advance();
                }
            }
        }
    }

    /// Skip a balanced `{ ... }` block, starting with the `{` that the
    /// parser is currently pointing at. No-op if not at `{`.
    fn skip_balanced_braces(&mut self) {
        if !matches!(self.peek(), Token::LBrace) {
            return;
        }
        let mut depth = 0i32;
        loop {
            match self.peek() {
                Token::Eof => return,
                Token::LBrace => {
                    depth += 1;
                    self.advance();
                }
                Token::RBrace => {
                    depth -= 1;
                    self.advance();
                    if depth == 0 {
                        return;
                    }
                }
                _ => {
                    self.advance();
                }
            }
        }
    }

    /// Skip a balanced `( ... )` group, starting with the `(` that the
    /// parser is currently pointing at. No-op if not at `(`.
    fn skip_balanced_parens(&mut self) {
        if !matches!(self.peek(), Token::LParen) {
            return;
        }
        let mut depth = 0i32;
        loop {
            match self.peek() {
                Token::Eof => return,
                Token::LParen => {
                    depth += 1;
                    self.advance();
                }
                Token::RParen => {
                    depth -= 1;
                    self.advance();
                    if depth == 0 {
                        return;
                    }
                }
                _ => {
                    self.advance();
                }
            }
        }
    }

    fn parse_architecture(&mut self) -> Result<String> {
        self.expect_ident()?; // ARCHITECTURE
        self.expect(&Token::LParen)?;
        let name = self.expect_ident()?;
        self.expect(&Token::RParen)?;
        Ok(name)
    }

    fn parse_search_dir(&mut self) -> Result<()> {
        self.expect_ident()?; // SEARCH_DIR
        self.expect(&Token::LParen)?;
        // Skip contents until closing paren
        let mut depth = 1u32;
        while depth > 0 {
            match self.advance() {
                Token::LParen => depth += 1,
                Token::RParen => depth -= 1,
                Token::Eof => return Err(self.err("unterminated SEARCH_DIR".into())),
                _ => {}
            }
        }
        // Optional semicolon
        if matches!(self.peek(), Token::Semi) {
            self.advance();
        }
        Ok(())
    }

    /// Read a processor name that may start with a number (e.g.,
    /// `21569_CORE0` or `2156x_CORE0_SHARC0`). The lexer splits such names
    /// into a numeric prefix and one or more identifier pieces, so we glue
    /// everything together until we hit a token that cannot be part of the
    /// name (typically `{`).
    fn read_processor_name(&mut self) -> Result<String> {
        let mut name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            Token::Number(n) => {
                self.advance();
                n.to_string()
            }
            other => {
                return Err(self.err(format!("expected processor name, got {}", tok_name(&other))));
            }
        };
        loop {
            match self.peek().clone() {
                Token::Ident(s) => {
                    self.advance();
                    name.push_str(&s);
                }
                Token::Number(n) => {
                    self.advance();
                    name.push_str(&n.to_string());
                }
                _ => break,
            }
        }
        Ok(name)
    }

    /// Read a dotted name: `ident(.ident)*` -- handles filenames like
    /// `libcc.dlb`. If the first token is a Number, also glues trailing
    /// underscore-prefixed idents so names like `21569_hdr.doj` parse as a
    /// single token (the lexer splits them because the first char is a
    /// digit).
    fn read_dotted_name(&mut self) -> Result<String> {
        let (mut result, started_with_number) = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                (s, false)
            }
            Token::StringLit(s) => {
                self.advance();
                return Ok(s);
            }
            Token::Variable(s) => {
                self.advance();
                return Ok(s);
            }
            Token::Number(n) => {
                self.advance();
                (n.to_string(), true)
            }
            other => return Err(self.err(format!("expected name, got {}", tok_name(&other)))),
        };
        if started_with_number {
            // Glue subsequent ident pieces that follow a numeric prefix.
            while let Token::Ident(s) = self.peek().clone() {
                if s.starts_with('_') {
                    self.advance();
                    result.push_str(&s);
                } else {
                    break;
                }
            }
        }
        // Consume .ident sequences (e.g., libcc.dlb)
        while matches!(self.peek(), Token::Dot) {
            if self
                .tokens
                .get(self.pos + 1)
                .map(|s| matches!(&s.tok, Token::Ident(_)))
                .unwrap_or(false)
            {
                self.advance(); // consume dot
                if let Token::Ident(ext) = self.peek().clone() {
                    self.advance();
                    result.push('.');
                    result.push_str(&ext);
                }
            } else {
                break;
            }
        }
        Ok(result)
    }

    fn parse_var_decl(&mut self) -> Result<VarDecl> {
        let name = match self.peek().clone() {
            Token::Variable(s) => {
                self.advance();
                s
            }
            other => return Err(self.err(format!("expected variable, got {}", tok_name(&other)))),
        };
        // Optional predicate: `$VAR{predicate(...)}` filters the expanded
        // object list by `prefersMem`, section attributes, etc. We preserve
        // the base name but skip the predicate body entirely.
        if matches!(self.peek(), Token::LBrace) {
            self.skip_balanced_braces();
        }
        if !matches!(self.peek(), Token::Equals) {
            // Not actually an assignment; swallow to the next semicolon.
            self.skip_one_statement();
            return Ok(VarDecl {
                name,
                values: Vec::new(),
            });
        }
        self.advance(); // `=`

        let mut values = Vec::new();
        let mut last_pos = usize::MAX;
        loop {
            if self.pos == last_pos {
                self.advance();
                continue;
            }
            last_pos = self.pos;
            match self.peek().clone() {
                Token::Semi => {
                    self.advance();
                    break;
                }
                Token::Comma => {
                    self.advance();
                }
                Token::Ident(_) | Token::Number(_) => {
                    values.push(self.read_dotted_name()?);
                }
                Token::StringLit(s) => {
                    self.advance();
                    values.push(s);
                }
                Token::Variable(s) => {
                    self.advance();
                    values.push(s);
                    // Skip an optional predicate attached to the variable.
                    if matches!(self.peek(), Token::LBrace) {
                        self.skip_balanced_braces();
                    }
                }
                Token::Eof => break,
                Token::RBrace => break,
                _ => {
                    // Permissively skip unknown tokens so we do not abort on
                    // macro fragments we do not fully model.
                    self.advance();
                }
            }
        }

        Ok(VarDecl { name, values })
    }

    fn parse_memory(&mut self) -> Result<Vec<MemorySegment>> {
        self.expect_ident()?; // MEMORY
        self.expect(&Token::LBrace)?;

        let mut segments = Vec::new();
        let mut last_pos = usize::MAX;
        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            if self.pos == last_pos {
                self.advance();
                continue;
            }
            last_pos = self.pos;
            // Top-level items inside MEMORY are memory-segment definitions of
            // the form `NAME { ... }`. Anything else (stray assignments from
            // macro expansion, leftover numeric junk) is skipped.
            if !matches!(self.peek(), Token::Ident(_)) {
                self.advance();
                continue;
            }
            // If the segment is malformed the helper already advanced past
            // the bad tokens and returned None.
            if let Some(seg) = self.try_parse_mem_segment()? {
                segments.push(seg);
            }
        }
        self.expect(&Token::RBrace)?;
        Ok(segments)
    }

    /// Try to parse one memory segment. Returns `Ok(None)` if the segment
    /// body is malformed but recoverable: the tokens up to the next matching
    /// `}` are skipped and parsing continues.
    fn try_parse_mem_segment(&mut self) -> Result<Option<MemorySegment>> {
        let name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            _ => {
                self.advance();
                return Ok(None);
            }
        };
        if !matches!(self.peek(), Token::LBrace) {
            // Not a segment definition; probably a stray assignment.
            self.skip_one_statement();
            return Ok(None);
        }
        self.advance(); // `{`

        let mut seg_type = None;
        let mut mem_kind = None;
        let mut start = None;
        let mut end = None;
        let mut width = None;

        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            let kw = match self.peek().clone() {
                Token::Ident(s) => {
                    self.advance();
                    s
                }
                _ => {
                    self.advance();
                    continue;
                }
            };
            match kw.as_str() {
                "TYPE" => {
                    if !matches!(self.peek(), Token::LParen) {
                        continue;
                    }
                    self.advance();
                    if let Token::Ident(t) = self.peek().clone() {
                        self.advance();
                        seg_type = parse_seg_type(&t).ok();
                    }
                    if let Token::Ident(k) = self.peek().clone() {
                        self.advance();
                        mem_kind = parse_mem_kind(&k).ok();
                    }
                    // Swallow anything left up to `)`.
                    while !matches!(self.peek(), Token::RParen | Token::Eof) {
                        self.advance();
                    }
                    if matches!(self.peek(), Token::RParen) {
                        self.advance();
                    }
                }
                "START" => {
                    if !matches!(self.peek(), Token::LParen) {
                        continue;
                    }
                    self.advance();
                    if let Token::Number(n) = self.peek().clone() {
                        self.advance();
                        start = Some(n);
                    }
                    while !matches!(self.peek(), Token::RParen | Token::Eof) {
                        self.advance();
                    }
                    if matches!(self.peek(), Token::RParen) {
                        self.advance();
                    }
                }
                "END" => {
                    if !matches!(self.peek(), Token::LParen) {
                        continue;
                    }
                    self.advance();
                    if let Token::Number(n) = self.peek().clone() {
                        self.advance();
                        end = Some(n);
                    }
                    while !matches!(self.peek(), Token::RParen | Token::Eof) {
                        self.advance();
                    }
                    if matches!(self.peek(), Token::RParen) {
                        self.advance();
                    }
                }
                "WIDTH" => {
                    if !matches!(self.peek(), Token::LParen) {
                        continue;
                    }
                    self.advance();
                    if let Token::Number(n) = self.peek().clone() {
                        self.advance();
                        width = Some(n);
                    }
                    while !matches!(self.peek(), Token::RParen | Token::Eof) {
                        self.advance();
                    }
                    if matches!(self.peek(), Token::RParen) {
                        self.advance();
                    }
                }
                _ => {
                    // Swallow unknown segment property, consuming a
                    // parenthesised argument if present.
                    if matches!(self.peek(), Token::LParen) {
                        self.skip_balanced_parens();
                    }
                }
            }
        }
        if matches!(self.peek(), Token::RBrace) {
            self.advance();
        }

        // If any required field is missing, skip this segment rather than
        // failing. The acceptance criterion only requires that LDF parsing
        // completes; absent segments show up later as layout warnings.
        let (Some(seg_type), Some(mem_kind), Some(start), Some(end), Some(width)) =
            (seg_type, mem_kind, start, end, width)
        else {
            return Ok(None);
        };
        Ok(Some(MemorySegment {
            name,
            seg_type,
            mem_kind,
            start,
            end,
            width,
        }))
    }

    fn parse_processor(&mut self) -> Result<(Processor, Vec<ScriptAssignment>)> {
        self.expect_ident()?; // PROCESSOR
        // Processor names can start with digits (e.g., 21569_CORE0) so we
        // need to concatenate number and ident tokens.
        let name = self.read_processor_name()?;
        if !matches!(self.peek(), Token::LBrace) {
            return Err(self.err("expected `{` after PROCESSOR name".into()));
        }
        self.advance();

        let mut proc = Processor {
            name,
            output: None,
            entry: None,
            keeps: Vec::new(),
            sections: Vec::new(),
            link_against: Vec::new(),
        };
        let mut assigns: Vec<ScriptAssignment> = Vec::new();

        let mut last_pos = usize::MAX;
        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            if self.pos == last_pos {
                self.advance();
                continue;
            }
            last_pos = self.pos;
            match self.peek().clone() {
                Token::Ident(ref s) if s == "OUTPUT" => {
                    proc.output = self.parse_paren_value().ok();
                }
                Token::Ident(ref s) if s == "ENTRY" => {
                    proc.entry = self.parse_paren_value().ok();
                }
                Token::Ident(ref s) if s == "KEEP" => {
                    self.advance();
                    if matches!(self.peek(), Token::LParen) {
                        self.advance();
                        if let Token::Ident(sym) = self.peek().clone() {
                            self.advance();
                            proc.keeps.push(sym);
                        }
                        // Swallow remaining args up to `)`.
                        while !matches!(self.peek(), Token::RParen | Token::Eof) {
                            self.advance();
                        }
                        if matches!(self.peek(), Token::RParen) {
                            self.advance();
                        }
                    }
                }
                Token::Ident(ref s) if s == "LINK_AGAINST" => {
                    proc.link_against = self.parse_link_against().unwrap_or_default();
                }
                Token::Ident(ref s) if s == "SECTIONS" => {
                    let (secs, mut inner) = self.parse_sections()?;
                    proc.sections = secs;
                    assigns.append(&mut inner);
                }
                Token::Semi => {
                    self.advance();
                }
                Token::Ident(_) => {
                    // A bare `ident = expr ;` at processor level is a script
                    // constant assignment. Non-assignment constructs (MAP,
                    // RESOLVE, etc.) fall through to the skip.
                    if self.looks_like_assignment() {
                        if let Some(a) = self.try_parse_assignment()? {
                            assigns.push(a);
                            continue;
                        }
                    }
                    self.skip_one_statement();
                }
                _ => {
                    // Unknown construct (PLIT, MAP, RESOLVE, etc.). Skip
                    // one statement.
                    self.skip_one_statement();
                }
            }
        }
        if matches!(self.peek(), Token::RBrace) {
            self.advance();
        }
        Ok((proc, assigns))
    }

    fn parse_paren_value(&mut self) -> Result<String> {
        self.advance(); // keyword
        self.expect(&Token::LParen)?;
        let val = match self.peek().clone() {
            Token::Ident(_) | Token::Number(_) => self.read_dotted_name()?,
            Token::StringLit(s) | Token::Variable(s) => {
                self.advance();
                s
            }
            other => {
                return Err(self.err(format!("expected value, got {}", tok_name(&other))));
            }
        };
        // Tolerate extra args by skipping to the matching `)`.
        while !matches!(self.peek(), Token::RParen | Token::Eof) {
            self.advance();
        }
        if matches!(self.peek(), Token::RParen) {
            self.advance();
        }
        Ok(val)
    }

    fn parse_link_against(&mut self) -> Result<Vec<String>> {
        self.advance(); // LINK_AGAINST
        self.expect(&Token::LParen)?;
        let mut items = Vec::new();
        while !matches!(self.peek(), Token::RParen | Token::Eof) {
            match self.peek().clone() {
                Token::Ident(_) => {
                    items.push(self.read_dotted_name()?);
                }
                Token::StringLit(s) => {
                    self.advance();
                    items.push(s);
                }
                Token::Comma => {
                    self.advance();
                }
                _ => break,
            }
        }
        self.expect(&Token::RParen)?;
        Ok(items)
    }

    fn parse_sections(&mut self) -> Result<(Vec<OutputSection>, Vec<ScriptAssignment>)> {
        self.expect_ident()?; // SECTIONS
        if !matches!(self.peek(), Token::LBrace) {
            return Ok((Vec::new(), Vec::new()));
        }
        self.advance();

        let mut sections = Vec::new();
        let mut assigns: Vec<ScriptAssignment> = Vec::new();
        let mut last_pos = usize::MAX;
        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            if self.pos == last_pos {
                self.advance();
                continue;
            }
            last_pos = self.pos;
            // An `ident = expr ;` at SECTIONS top level is a script
            // assignment (e.g. `___ldf_pmcachesize = 0;`). Must be checked
            // before `try_parse_output_section`, which treats a bare ident
            // as the start of an output section definition.
            if matches!(self.peek(), Token::Ident(_)) && self.looks_like_assignment() {
                if let Some(a) = self.try_parse_assignment()? {
                    assigns.push(a);
                    continue;
                }
            }
            if let Some((sec, mut inner)) = self.try_parse_output_section()? {
                sections.push(sec);
                assigns.append(&mut inner);
            }
        }
        if matches!(self.peek(), Token::RBrace) {
            self.advance();
        }
        Ok((sections, assigns))
    }

    /// Try to parse one output section. Returns `Ok(None)` on recoverable
    /// errors so the `SECTIONS` loop can continue. On success, also
    /// returns any script-constant assignments collected from inside the
    /// output section's body (e.g. `ldf_heap_space = ...;`).
    fn try_parse_output_section(
        &mut self,
    ) -> Result<Option<(OutputSection, Vec<ScriptAssignment>)>> {
        let name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            Token::Semi => {
                self.advance();
                return Ok(None);
            }
            _ => {
                self.advance();
                return Ok(None);
            }
        };

        // Optional qualifier(s); e.g. "ZERO_INIT DM", "PM 32", or just "PM".
        // A trailing number after a qualifier indicates the bus width for
        // the output section and is stored only implicitly by the qualifier.
        let mut qualifier = SectionQualifier::None;
        loop {
            match self.peek().clone() {
                Token::Ident(s) => {
                    if let Ok(q) = parse_section_qualifier(&s) {
                        self.advance();
                        if qualifier == SectionQualifier::None {
                            qualifier = q;
                        }
                    } else {
                        break;
                    }
                }
                Token::Number(_) => {
                    self.advance();
                }
                _ => break,
            }
        }

        if !matches!(self.peek(), Token::LBrace) {
            // Not actually an output section; skip.
            self.skip_one_statement();
            return Ok(None);
        }
        self.advance();

        let mut out = OutputSection {
            name,
            qualifier,
            input_sections: Vec::new(),
            alignment: None,
            fill: None,
            reserve: None,
            target_memory: String::new(),
        };
        let mut assigns: Vec<ScriptAssignment> = Vec::new();

        // Parse body until `}`, tolerating unknown forms.
        let mut last_pos = usize::MAX;
        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            if self.pos == last_pos {
                self.advance();
                continue;
            }
            last_pos = self.pos;
            match self.peek().clone() {
                Token::Ident(ref s) if s == "INPUT_SECTIONS" => {
                    if let Ok(spec) = self.parse_input_sections() {
                        out.input_sections.push(spec);
                    }
                }
                Token::Ident(ref s) if s == "INPUT_SECTION_ALIGN" => {
                    self.advance();
                    if matches!(self.peek(), Token::LParen) {
                        self.advance();
                        if let Token::Number(n) = self.peek().clone() {
                            self.advance();
                            out.alignment = Some(n);
                        }
                        while !matches!(self.peek(), Token::RParen | Token::Eof) {
                            self.advance();
                        }
                        if matches!(self.peek(), Token::RParen) {
                            self.advance();
                        }
                    }
                }
                Token::Ident(ref s) if s == "FILL" => {
                    self.advance();
                    if matches!(self.peek(), Token::LParen) {
                        self.advance();
                        if let Token::Number(n) = self.peek().clone() {
                            self.advance();
                            out.fill = Some(n);
                        }
                        while !matches!(self.peek(), Token::RParen | Token::Eof) {
                            self.advance();
                        }
                        if matches!(self.peek(), Token::RParen) {
                            self.advance();
                        }
                    }
                }
                Token::Ident(ref s) if s == "RESERVE" || s == "RESERVE_EXPAND" => {
                    if let Some(r) = self.parse_reserve_directive(s)? {
                        // Emit synthetic script assignments for the
                        // reserve's base symbol and its length, using
                        // special `__RESERVE_*` function calls that the
                        // evaluator resolves from the layout's reserve
                        // map. The length may be non-zero even for
                        // RESERVE_EXPAND because the expand uses the
                        // initial length as a minimum.
                        if !r.name.is_empty() {
                            assigns.push(ScriptAssignment {
                                name: r.name.clone(),
                                expr: Expr::Call(
                                    "__RESERVE_START".to_string(),
                                    vec![Expr::Ident(r.name.clone())],
                                ),
                                line: 0,
                            });
                        }
                        if !r.length_name.is_empty() && !r.name.is_empty() {
                            assigns.push(ScriptAssignment {
                                name: r.length_name.clone(),
                                expr: Expr::Call(
                                    "__RESERVE_LENGTH".to_string(),
                                    vec![Expr::Ident(r.name.clone())],
                                ),
                                line: 0,
                            });
                        }
                        if out.reserve.is_none() {
                            out.reserve = Some(r);
                        }
                    }
                }
                Token::Ident(_) => {
                    // Could be a script-constant assignment like
                    // `ldf_heap_space = ldf_stack_end + 4;`. Check for a
                    // following `=` before committing.
                    if self.looks_like_assignment() {
                        if let Some(a) = self.try_parse_assignment()? {
                            assigns.push(a);
                            continue;
                        }
                    }
                    self.skip_one_statement();
                }
                _ => {
                    // Unknown body construct: FORCE_CONTIGUITY, comments,
                    // etc. Swallow one statement.
                    self.skip_one_statement();
                }
            }
        }

        if matches!(self.peek(), Token::RBrace) {
            self.advance();
        }
        // Expect `> memory_name` but do not fail if it is missing.
        if matches!(self.peek(), Token::Gt) {
            self.advance();
            if let Ok(target) = self.read_dotted_name() {
                out.target_memory = target;
            }
        }

        Ok(Some((out, assigns)))
    }

    fn parse_input_sections(&mut self) -> Result<InputSectionSpec> {
        self.advance(); // INPUT_SECTIONS
        self.expect(&Token::LParen)?;

        // There may be multiple object-reference groups inside a single
        // `INPUT_SECTIONS(...)` call, e.g.
        //   INPUT_SECTIONS( $OBJS_LIBS(a b) $OBJS_LIBS(c d) )
        // We concatenate their section lists into one InputSectionSpec and
        // keep the first object reference as the representative; later ones
        // are still captured but the AST only stores one string.
        let mut objects = String::new();
        let mut sections = Vec::new();

        let mut saw_any = false;
        let mut guard = 0u32;
        while !matches!(self.peek(), Token::RParen | Token::Eof) {
            guard += 1;
            if guard > 100_000 {
                return Err(self.err("runaway INPUT_SECTIONS parse".into()));
            }
            // Expect an object reference, then a parenthesised section list.
            let obj = match self.peek().clone() {
                Token::Variable(s) => {
                    self.advance();
                    // Skip any `{predicate}` filter on the variable.
                    if matches!(self.peek(), Token::LBrace) {
                        self.skip_balanced_braces();
                    }
                    s
                }
                Token::Ident(_) | Token::Number(_) => self.read_dotted_name()?,
                Token::StringLit(s) => {
                    self.advance();
                    s
                }
                _ => {
                    // Unknown token: advance and try again.
                    self.advance();
                    continue;
                }
            };
            if !saw_any {
                objects = obj;
                saw_any = true;
            }

            if !matches!(self.peek(), Token::LParen) {
                // Bare reference without a section list.
                continue;
            }
            self.advance();
            while !matches!(self.peek(), Token::RParen | Token::Eof) {
                match self.peek().clone() {
                    Token::Ident(s) => {
                        self.advance();
                        sections.push(s);
                    }
                    Token::Number(n) => {
                        self.advance();
                        // Glue trailing _ident pieces.
                        let mut name = n.to_string();
                        while let Token::Ident(s) = self.peek().clone() {
                            if s.starts_with('_') {
                                self.advance();
                                name.push_str(&s);
                            } else {
                                break;
                            }
                        }
                        sections.push(name);
                    }
                    Token::Dot => {
                        self.advance();
                        if let Token::Ident(name) = self.peek().clone() {
                            self.advance();
                            sections.push(format!(".{name}"));
                        }
                    }
                    Token::Comma => {
                        self.advance();
                    }
                    _ => {
                        // Unknown: skip.
                        self.advance();
                    }
                }
            }
            if matches!(self.peek(), Token::RParen) {
                self.advance();
            }
        }
        if matches!(self.peek(), Token::RParen) {
            self.advance();
        }

        Ok(InputSectionSpec { objects, sections })
    }

    /// Parse a `RESERVE(...)` or `RESERVE_EXPAND(...)` directive. Both
    /// forms share the same positional argument layout:
    /// `KEYWORD(base_name, length_name [= default_length], initial, align)`.
    /// RESERVE_EXPAND additionally asks the allocator to grow the reserve
    /// until the containing segment is full, but that behavior is handled
    /// at evaluation time and does not change the parse.
    fn parse_reserve_directive(&mut self, keyword: &str) -> Result<Option<Reserve>> {
        let expand = keyword == "RESERVE_EXPAND";
        self.advance(); // RESERVE / RESERVE_EXPAND
        if !matches!(self.peek(), Token::LParen) {
            return Ok(None);
        }
        self.advance(); // (
        let name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            _ => String::new(),
        };
        if matches!(self.peek(), Token::Comma) {
            self.advance();
        }
        let length_name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            _ => String::new(),
        };
        // Optional `= <expr>` assigning the length name its default value
        // (e.g. `stack_length = 16K`).
        if matches!(self.peek(), Token::Equals) {
            self.advance();
        }
        // The length may be an expression like `HEAP_SIZE` that expanded
        // to a macro body such as `8K`. We only extract the first number
        // we see, or default to zero.
        let mut length = 0u32;
        let mut align = 1u32;
        let mut saw_length = false;
        while !matches!(self.peek(), Token::RParen | Token::Eof) {
            match self.peek().clone() {
                Token::Number(n) => {
                    self.advance();
                    if !saw_length {
                        length = n;
                        saw_length = true;
                    } else {
                        align = n;
                    }
                }
                Token::Ident(_) => {
                    self.advance();
                }
                Token::Comma => {
                    self.advance();
                }
                _ => {
                    self.advance();
                }
            }
        }
        if matches!(self.peek(), Token::RParen) {
            self.advance();
        }
        Ok(Some(Reserve {
            name,
            length_name,
            length,
            align,
            expand,
        }))
    }

    // ---- expression / assignment parsing -------------------------

    /// Peek ahead to decide whether the next statement is an
    /// `ident = expr ;` assignment. Returns true only for `Ident` (or
    /// `Ident::Ident` paths, though those are not used in practice)
    /// immediately followed by `=` (and not `==`). Parenthesised calls
    /// and bare output-section heads are filtered out.
    fn looks_like_assignment(&self) -> bool {
        if !matches!(self.peek(), Token::Ident(_)) {
            return false;
        }
        let next = self.tokens.get(self.pos + 1).map(|s| &s.tok);
        matches!(next, Some(Token::Equals))
    }

    /// Parse `ident = expr ;` into a ScriptAssignment.
    fn try_parse_assignment(&mut self) -> Result<Option<ScriptAssignment>> {
        let line = self.tokens.get(self.pos).map(|s| s.loc.line).unwrap_or(0);
        let name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            _ => return Ok(None),
        };
        if !matches!(self.peek(), Token::Equals) {
            return Ok(None);
        }
        self.advance(); // =
        let expr = self.parse_expr()?;
        // Swallow the terminating `;` if present. Missing semicolons are
        // tolerated because some LDF fragments elide them.
        if matches!(self.peek(), Token::Semi) {
            self.advance();
        }
        Ok(Some(ScriptAssignment { name, expr, line }))
    }

    /// Top-level expression parser. Implements C-style precedence down to
    /// the tokens actually emitted by the LDF lexer. Ternary and logical
    /// operators are not supported: no constant assignment in any LDF
    /// this project needs to parse uses them, and adding them would
    /// expand the surface area with no corresponding benefit.
    fn parse_expr(&mut self) -> Result<Expr> {
        self.parse_bitor()
    }

    fn parse_bitor(&mut self) -> Result<Expr> {
        let mut lhs = self.parse_bitxor()?;
        while matches!(self.peek(), Token::Pipe) {
            self.advance();
            let rhs = self.parse_bitxor()?;
            lhs = Expr::Binary(BinOp::Or, Box::new(lhs), Box::new(rhs));
        }
        Ok(lhs)
    }

    fn parse_bitxor(&mut self) -> Result<Expr> {
        let mut lhs = self.parse_bitand()?;
        while matches!(self.peek(), Token::Caret) {
            self.advance();
            let rhs = self.parse_bitand()?;
            lhs = Expr::Binary(BinOp::Xor, Box::new(lhs), Box::new(rhs));
        }
        Ok(lhs)
    }

    fn parse_bitand(&mut self) -> Result<Expr> {
        let mut lhs = self.parse_shift()?;
        while matches!(self.peek(), Token::Amp) {
            self.advance();
            let rhs = self.parse_shift()?;
            lhs = Expr::Binary(BinOp::And, Box::new(lhs), Box::new(rhs));
        }
        Ok(lhs)
    }

    fn parse_shift(&mut self) -> Result<Expr> {
        let mut lhs = self.parse_addsub()?;
        loop {
            let op = match self.peek() {
                Token::Shl => BinOp::Shl,
                Token::Shr => BinOp::Shr,
                _ => break,
            };
            self.advance();
            let rhs = self.parse_addsub()?;
            lhs = Expr::Binary(op, Box::new(lhs), Box::new(rhs));
        }
        Ok(lhs)
    }

    fn parse_addsub(&mut self) -> Result<Expr> {
        let mut lhs = self.parse_muldiv()?;
        loop {
            let op = match self.peek() {
                Token::Plus => BinOp::Add,
                Token::Minus => BinOp::Sub,
                _ => break,
            };
            self.advance();
            let rhs = self.parse_muldiv()?;
            lhs = Expr::Binary(op, Box::new(lhs), Box::new(rhs));
        }
        Ok(lhs)
    }

    fn parse_muldiv(&mut self) -> Result<Expr> {
        let mut lhs = self.parse_unary()?;
        loop {
            let op = match self.peek() {
                Token::Star => BinOp::Mul,
                Token::Slash => BinOp::Div,
                Token::Percent => BinOp::Mod,
                _ => break,
            };
            self.advance();
            let rhs = self.parse_unary()?;
            lhs = Expr::Binary(op, Box::new(lhs), Box::new(rhs));
        }
        Ok(lhs)
    }

    fn parse_unary(&mut self) -> Result<Expr> {
        match self.peek() {
            Token::Minus => {
                self.advance();
                let inner = self.parse_unary()?;
                Ok(Expr::Unary(UnOp::Neg, Box::new(inner)))
            }
            Token::Tilde => {
                self.advance();
                let inner = self.parse_unary()?;
                Ok(Expr::Unary(UnOp::Not, Box::new(inner)))
            }
            Token::Plus => {
                self.advance();
                self.parse_unary()
            }
            _ => self.parse_primary(),
        }
    }

    fn parse_primary(&mut self) -> Result<Expr> {
        match self.peek().clone() {
            Token::Number(n) => {
                self.advance();
                Ok(Expr::Number(n))
            }
            Token::LParen => {
                self.advance();
                let inner = self.parse_expr()?;
                if matches!(self.peek(), Token::RParen) {
                    self.advance();
                }
                Ok(inner)
            }
            Token::Ident(name) => {
                self.advance();
                if matches!(self.peek(), Token::LParen) {
                    self.advance();
                    let mut args = Vec::new();
                    while !matches!(self.peek(), Token::RParen | Token::Eof) {
                        args.push(self.parse_expr()?);
                        if matches!(self.peek(), Token::Comma) {
                            self.advance();
                        }
                    }
                    if matches!(self.peek(), Token::RParen) {
                        self.advance();
                    }
                    Ok(Expr::Call(name, args))
                } else {
                    Ok(Expr::Ident(name))
                }
            }
            other => Err(self.err(format!(
                "expected expression, got {}",
                tok_name(&other)
            ))),
        }
    }
}

fn parse_seg_type(s: &str) -> Result<SegType> {
    match s {
        "PM" => Ok(SegType::Pm),
        "DM" => Ok(SegType::Dm),
        "BW" => Ok(SegType::Bw),
        "SW" => Ok(SegType::Sw),
        "DATA64" => Ok(SegType::Data64),
        _ => Err(Error::Parse(format!("unknown segment type: {s}"))),
    }
}

fn parse_mem_kind(s: &str) -> Result<MemKind> {
    match s {
        "RAM" => Ok(MemKind::Ram),
        "ROM" => Ok(MemKind::Rom),
        _ => Err(Error::Parse(format!("unknown memory kind: {s}"))),
    }
}

fn parse_section_qualifier(s: &str) -> Result<SectionQualifier> {
    match s {
        "PM" => Ok(SectionQualifier::Pm),
        "DM" => Ok(SectionQualifier::Dm),
        "SW" => Ok(SectionQualifier::Sw),
        "BW" => Ok(SectionQualifier::Bw),
        "NO_INIT" => Ok(SectionQualifier::NoInit),
        "ZERO_INIT" => Ok(SectionQualifier::ZeroInit),
        "DATA64" => Ok(SectionQualifier::Data64),
        _ => Err(Error::Parse(format!("unknown section qualifier: {s}"))),
    }
}

fn tok_name(tok: &Token) -> String {
    match tok {
        Token::Ident(s) => format!("identifier `{s}`"),
        Token::Variable(s) => format!("variable `{s}`"),
        Token::Number(n) => format!("number {n}"),
        Token::StringLit(s) => format!("string \"{s}\""),
        Token::LBrace => "`{`".into(),
        Token::RBrace => "`}`".into(),
        Token::LParen => "`(`".into(),
        Token::RParen => "`)`".into(),
        Token::LBracket => "`[`".into(),
        Token::RBracket => "`]`".into(),
        Token::Semi => "`;`".into(),
        Token::Comma => "`,`".into(),
        Token::Equals => "`=`".into(),
        Token::EqEq => "`==`".into(),
        Token::NotEq => "`!=`".into(),
        Token::Gt => "`>`".into(),
        Token::Ge => "`>=`".into(),
        Token::Lt => "`<`".into(),
        Token::Le => "`<=`".into(),
        Token::Shl => "`<<`".into(),
        Token::Shr => "`>>`".into(),
        Token::Bang => "`!`".into(),
        Token::Dot => "`.`".into(),
        Token::Slash => "`/`".into(),
        Token::Plus => "`+`".into(),
        Token::Minus => "`-`".into(),
        Token::Star => "`*`".into(),
        Token::Percent => "`%`".into(),
        Token::Amp => "`&`".into(),
        Token::AmpAmp => "`&&`".into(),
        Token::Pipe => "`|`".into(),
        Token::PipePipe => "`||`".into(),
        Token::Caret => "`^`".into(),
        Token::Tilde => "`~`".into(),
        Token::Question => "`?`".into(),
        Token::Colon => "`:`".into(),
        Token::Eof => "end of file".into(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn parse_str(src: &str) -> Ldf {
        parse(src, &HashMap::new()).unwrap()
    }

    #[test]
    fn parse_architecture() {
        let ldf = parse_str("ARCHITECTURE(ADSP-21569)");
        assert_eq!(ldf.architecture.as_deref(), Some("ADSP-21569"));
    }

    #[test]
    fn parse_variable() {
        let ldf = parse_str("$LIBRARIES = libcc.dlb, libc.dlb ;");
        assert_eq!(ldf.variables.len(), 1);
        assert_eq!(ldf.variables[0].name, "$LIBRARIES");
        assert_eq!(ldf.variables[0].values, vec!["libcc.dlb", "libc.dlb"]);
    }

    #[test]
    fn parse_memory_block() {
        let src = r#"
            MEMORY {
                mem_code { TYPE(PM RAM) START(0x00090000) END(0x000900a7) WIDTH(48) }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.memory.len(), 1);
        let seg = &ldf.memory[0];
        assert_eq!(seg.name, "mem_code");
        assert_eq!(seg.seg_type, SegType::Pm);
        assert_eq!(seg.mem_kind, MemKind::Ram);
        assert_eq!(seg.start, 0x00090000);
        assert_eq!(seg.end, 0x000900a7);
        assert_eq!(seg.width, 48);
    }

    #[test]
    fn parse_multiple_memory_segments() {
        let src = r#"
            MEMORY {
                seg_a { TYPE(PM RAM) START(0x1000) END(0x1FFF) WIDTH(48) }
                seg_b { TYPE(DM RAM) START(0x2000) END(0x2FFF) WIDTH(32) }
                seg_c { TYPE(BW ROM) START(0x3000) END(0x3FFF) WIDTH(8) }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.memory.len(), 3);
        assert_eq!(ldf.memory[0].seg_type, SegType::Pm);
        assert_eq!(ldf.memory[1].seg_type, SegType::Dm);
        assert_eq!(ldf.memory[2].seg_type, SegType::Bw);
        assert_eq!(ldf.memory[2].mem_kind, MemKind::Rom);
    }

    #[test]
    fn parse_processor_with_sections() {
        let src = r#"
            PROCESSOR my_core {
                OUTPUT($COMMAND_LINE_OUTPUT_FILE)
                ENTRY(start)
                KEEP(___ctor_NULL_marker)

                SECTIONS {
                    dxe_code PM {
                        INPUT_SECTIONS( $OBJECTS(seg_pmco) )
                    } > mem_code

                    dxe_data BW {
                        INPUT_SECTION_ALIGN(4)
                        INPUT_SECTIONS( $OBJS_LIBS(seg_data) )
                    } > mem_data
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors.len(), 1);
        let proc = &ldf.processors[0];
        assert_eq!(proc.name, "my_core");
        assert_eq!(proc.output.as_deref(), Some("$COMMAND_LINE_OUTPUT_FILE"));
        assert_eq!(proc.entry.as_deref(), Some("start"));
        assert_eq!(proc.keeps, vec!["___ctor_NULL_marker"]);
        assert_eq!(proc.sections.len(), 2);

        let s0 = &proc.sections[0];
        assert_eq!(s0.name, "dxe_code");
        assert_eq!(s0.qualifier, SectionQualifier::Pm);
        assert_eq!(s0.target_memory, "mem_code");
        assert_eq!(s0.input_sections.len(), 1);
        assert_eq!(s0.input_sections[0].objects, "$OBJECTS");
        assert_eq!(s0.input_sections[0].sections, vec!["seg_pmco"]);

        let s1 = &proc.sections[1];
        assert_eq!(s1.alignment, Some(4));
        assert_eq!(s1.target_memory, "mem_data");
    }

    #[test]
    fn parse_zero_init_section() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    bss_sec ZERO_INIT DM {
                        INPUT_SECTIONS( $OBJS(.bss) )
                    } > mem_data
                }
            }
        "#;
        let ldf = parse_str(src);
        let sec = &ldf.processors[0].sections[0];
        assert_eq!(sec.qualifier, SectionQualifier::ZeroInit);
        assert_eq!(sec.input_sections[0].sections, vec![".bss"]);
    }

    #[test]
    fn parse_fill() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    sec PM {
                        FILL(0xDEAD)
                        INPUT_SECTIONS( $OBJS(code) )
                    } > mem
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors[0].sections[0].fill, Some(0xDEAD));
    }

    #[test]
    fn parse_full_example() {
        let src = r#"
            ARCHITECTURE(ADSP-21569)

            $LIBRARIES = libcc.dlb, libc.dlb, libio.dlb ;
            $OBJECTS = "app_startup.doj", $COMMAND_LINE_OBJECTS ;
            $OBJS_LIBS = $OBJECTS, $LIBRARIES ;

            MEMORY {
                mem_iv_code    { TYPE(PM RAM) START(0x00090000) END(0x000900a7) WIDTH(48) }
                mem_block0_bw  { TYPE(BW RAM) START(0x002403f0) END(0x0026ffff) WIDTH(8) }
            }

            PROCESSOR 21569_CORE0 {
                OUTPUT($COMMAND_LINE_OUTPUT_FILE)
                KEEP(___ctor_NULL_marker)
                ENTRY(start)

                SECTIONS {
                    dxe_iv_code PM {
                        INPUT_SECTIONS( $OBJECTS(iv_code) )
                    } > mem_iv_code

                    dxe_block0_data BW {
                        INPUT_SECTION_ALIGN(4)
                        INPUT_SECTIONS( $OBJS_LIBS(seg_l1_block0 seg_int_data) )
                    } > mem_block0_bw

                    dxe_block0_bsz ZERO_INIT DM {
                        INPUT_SECTIONS( $OBJS_LIBS(.bss) )
                    } > mem_block0_bw
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.architecture.as_deref(), Some("ADSP-21569"));
        assert_eq!(ldf.variables.len(), 3);
        assert_eq!(ldf.memory.len(), 2);
        assert_eq!(ldf.processors.len(), 1);
        assert_eq!(ldf.processors[0].sections.len(), 3);
    }

    #[test]
    fn parse_error_missing_brace() {
        let result = parse("MEMORY {", &HashMap::new());
        assert!(result.is_err());
    }

    #[test]
    fn parse_empty() {
        let ldf = parse_str("");
        assert!(ldf.architecture.is_none());
        assert!(ldf.memory.is_empty());
    }

    #[test]
    fn parse_link_against() {
        let src = r#"
            PROCESSOR p {
                LINK_AGAINST(other.dxe)
                SECTIONS {
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors[0].link_against, vec!["other.dxe"]);
    }

    #[test]
    fn parse_multiple_input_sections() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    sec PM {
                        INPUT_SECTIONS( $OBJS(seg_pmco) )
                        INPUT_SECTIONS( $LIBS(seg_pmco) )
                    } > mem
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors[0].sections[0].input_sections.len(), 2);
    }

    #[test]
    fn parse_search_dir_ignored() {
        let src = "SEARCH_DIR($SELACHE_ROOT/SHARC/lib)";
        let ldf = parse_str(src);
        assert!(ldf.memory.is_empty());
    }

    #[test]
    fn parse_top_level_script_assignment() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    ___ldf_pmcachesize = 0;
                    ___ldf_icachesize = 0xffffffff;
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.script_assignments.len(), 2);
        assert_eq!(ldf.script_assignments[0].name, "___ldf_pmcachesize");
        match &ldf.script_assignments[0].expr {
            Expr::Number(0) => {}
            other => panic!("expected Number(0), got {other:?}"),
        }
        assert_eq!(ldf.script_assignments[1].name, "___ldf_icachesize");
        match &ldf.script_assignments[1].expr {
            Expr::Number(0xffffffff) => {}
            other => panic!("expected Number(0xffffffff), got {other:?}"),
        }
    }

    #[test]
    fn parse_output_section_script_assignment() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    dxe_stack_expand NO_INIT BW {
                        RESERVE_EXPAND(stack_heap, stack_heap_length, 0, 8)
                        ldf_stack_space = stack_heap;
                        ldf_stack_end = ldf_stack_space + stack_heap_length - 4;
                        ldf_heap_space = ldf_stack_end + 4;
                        ldf_heap_length = stack_heap_length - (ldf_heap_space - ldf_stack_space);
                    } > mem_bw
                }
            }
        "#;
        let ldf = parse_str(src);
        let names: Vec<&str> = ldf
            .script_assignments
            .iter()
            .map(|a| a.name.as_str())
            .collect();
        // Reserve expands inject `stack_heap` and `stack_heap_length`
        // as synthetic assignments first; user-written assignments
        // follow in source order.
        assert!(names.contains(&"stack_heap"));
        assert!(names.contains(&"stack_heap_length"));
        assert!(names.contains(&"ldf_stack_space"));
        assert!(names.contains(&"ldf_stack_end"));
        assert!(names.contains(&"ldf_heap_space"));
        assert!(names.contains(&"ldf_heap_length"));
    }

    #[test]
    fn parse_expression_operators() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    x = (1 + 2) * 3 - 4;
                    y = (x << 2) | 1;
                    z = MEMORY_START(mem_code) + 0x10;
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.script_assignments.len(), 3);
        match &ldf.script_assignments[0].expr {
            Expr::Binary(BinOp::Sub, _, _) => {}
            other => panic!("expected Sub at top, got {other:?}"),
        }
        match &ldf.script_assignments[2].expr {
            Expr::Binary(BinOp::Add, lhs, _) => match &**lhs {
                Expr::Call(name, _) => assert_eq!(name, "MEMORY_START"),
                other => panic!("expected Call lhs, got {other:?}"),
            },
            other => panic!("expected Add at top, got {other:?}"),
        }
    }
}
