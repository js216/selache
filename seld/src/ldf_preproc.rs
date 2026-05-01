// SPDX-License-Identifier: GPL-3.0
// ldf_preproc.rs --- Text-level preprocessor for LDF files
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;
use std::path::{Path, PathBuf};

use crate::error::{Error, Result};

/// A macro definition: either object-like (no parameters) or function-like.
#[derive(Debug, Clone)]
pub struct Macro {
    pub params: Option<Vec<String>>,
    pub body: String,
}

/// Shared state across the preprocessing of one LDF translation unit.
pub struct Preproc {
    pub defines: HashMap<String, Macro>,
    pub include_paths: Vec<PathBuf>,
    pub max_depth: usize,
}

impl Default for Preproc {
    fn default() -> Self {
        Self {
            defines: HashMap::new(),
            include_paths: Vec::new(),
            max_depth: 64,
        }
    }
}

impl Preproc {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn define_simple(&mut self, name: &str, value: &str) {
        self.defines.insert(
            name.to_string(),
            Macro {
                params: None,
                body: value.to_string(),
            },
        );
    }

    /// Preprocess an LDF source string.
    ///
    /// `file_dir` is the directory that contains the source, used for
    /// resolving relative `#include "..."` directives. `display_name` is
    /// used in diagnostics.
    pub fn preprocess(&mut self, src: &str, file_dir: &Path, display_name: &str) -> Result<String> {
        let mut out = String::new();
        self.preprocess_inner(src, file_dir, display_name, &mut out, 0)?;
        Ok(out)
    }

    fn preprocess_inner(
        &mut self,
        src: &str,
        file_dir: &Path,
        display_name: &str,
        out: &mut String,
        depth: usize,
    ) -> Result<()> {
        if depth > self.max_depth {
            return Err(Error::Parse(format!(
                "{display_name}: #include nesting too deep"
            )));
        }

        // Join continuation lines (`\` at end of line joins to next line).
        let joined = join_continuation_lines(src);

        // Cond stack: each entry is (currently_emitting, any_branch_taken, seen_else).
        // When a branch is skipped we still recurse into #if within the skipped
        // region but we do not emit output.
        let mut cond: Vec<(bool, bool, bool)> = Vec::new();

        let mut line_no: usize = 0;
        for raw_line in joined.split_inclusive('\n') {
            line_no += 1;
            // Preserve line numbering in output (only when emitting).
            let line = strip_trailing_newline(raw_line);
            let trimmed = line.trim_start();
            let emitting = cond.iter().all(|(e, _, _)| *e);

            if let Some(rest) = strip_directive(trimmed) {
                let (directive, arg) = split_directive(rest);
                match directive {
                    "include" => {
                        if !emitting {
                            out.push('\n');
                            continue;
                        }
                        let inc_path = parse_include_arg(arg).ok_or_else(|| {
                            Error::Parse(format!("{display_name}:{line_no}: malformed #include"))
                        })?;
                        let resolved = self.resolve_include(&inc_path, file_dir)?;
                        let inc_src = std::fs::read_to_string(&resolved).map_err(|e| {
                            Error::Parse(format!(
                                "{display_name}:{line_no}: cannot read included file `{}`: {e}",
                                resolved.display()
                            ))
                        })?;
                        let inc_dir = resolved
                            .parent()
                            .map(|p| p.to_path_buf())
                            .unwrap_or_else(|| PathBuf::from("."));
                        let inc_display = resolved.display().to_string();
                        self.preprocess_inner(&inc_src, &inc_dir, &inc_display, out, depth + 1)?;
                        out.push('\n');
                    }
                    "define" => {
                        if emitting {
                            parse_define(arg, &mut self.defines);
                        }
                        out.push('\n');
                    }
                    "undef" => {
                        if emitting {
                            let name = arg.split_whitespace().next().unwrap_or("");
                            self.defines.remove(name);
                        }
                        out.push('\n');
                    }
                    "ifdef" => {
                        let name = arg.split_whitespace().next().unwrap_or("");
                        let parent = emitting;
                        let cond_val = parent && self.defines.contains_key(name);
                        cond.push((cond_val, cond_val, false));
                        out.push('\n');
                    }
                    "ifndef" => {
                        let name = arg.split_whitespace().next().unwrap_or("");
                        let parent = emitting;
                        let cond_val = parent && !self.defines.contains_key(name);
                        cond.push((cond_val, cond_val, false));
                        out.push('\n');
                    }
                    "if" => {
                        let parent = emitting;
                        let cond_val = parent && self.eval_if(arg);
                        cond.push((cond_val, cond_val, false));
                        out.push('\n');
                    }
                    "elif" => {
                        let top = cond.last_mut().ok_or_else(|| {
                            Error::Parse(format!("{display_name}:{line_no}: #elif without #if"))
                        })?;
                        if top.2 {
                            return Err(Error::Parse(format!(
                                "{display_name}:{line_no}: #elif after #else"
                            )));
                        }
                        let parent_active =
                            cond.len() < 2 || cond[..cond.len() - 1].iter().all(|(e, _, _)| *e);
                        // Re-borrow after parent_active computation.
                        let top = cond.last_mut().unwrap();
                        if top.1 {
                            top.0 = false;
                        } else {
                            let v = parent_active && self.eval_if(arg);
                            top.0 = v;
                            top.1 = v;
                        }
                        out.push('\n');
                    }
                    "else" => {
                        let top = cond.last_mut().ok_or_else(|| {
                            Error::Parse(format!("{display_name}:{line_no}: #else without #if"))
                        })?;
                        if top.2 {
                            return Err(Error::Parse(format!(
                                "{display_name}:{line_no}: duplicate #else"
                            )));
                        }
                        let parent_active =
                            cond.len() < 2 || cond[..cond.len() - 1].iter().all(|(e, _, _)| *e);
                        let top = cond.last_mut().unwrap();
                        top.2 = true;
                        if top.1 {
                            top.0 = false;
                        } else {
                            top.0 = parent_active;
                            top.1 = parent_active;
                        }
                        out.push('\n');
                    }
                    "endif" => {
                        if cond.pop().is_none() {
                            return Err(Error::Parse(format!(
                                "{display_name}:{line_no}: #endif without #if"
                            )));
                        }
                        out.push('\n');
                    }
                    "warning" | "error" | "pragma" | "line" => {
                        // Silently drop. A real preprocessor would print warnings
                        // or stop on errors, but they are not in active branches
                        // when this LDF is used with the default selache
                        // predefine set.
                        out.push('\n');
                    }
                    _ => {
                        // Unknown directive; drop the line.
                        out.push('\n');
                    }
                }
                continue;
            }

            if !emitting {
                // Still emit a blank line to keep line numbering meaningful.
                out.push('\n');
                continue;
            }

            // Regular line: perform macro expansion and emit.
            let expanded = expand_macros(line, &self.defines);
            out.push_str(&expanded);
            out.push('\n');
        }

        if !cond.is_empty() {
            return Err(Error::Parse(format!(
                "{display_name}: unterminated #if at end of file"
            )));
        }

        Ok(())
    }

    fn resolve_include(&self, rel: &str, file_dir: &Path) -> Result<PathBuf> {
        // First try relative to the including file's directory.
        let p = file_dir.join(rel);
        if p.is_file() {
            return Ok(p);
        }
        // Then try each explicit include path.
        for dir in &self.include_paths {
            let p = dir.join(rel);
            if p.is_file() {
                return Ok(p);
            }
        }
        Err(Error::Parse(format!(
            "cannot resolve #include \"{rel}\" from directory {}",
            file_dir.display()
        )))
    }

    fn eval_if(&self, expr: &str) -> bool {
        let mut ev = ExprEval::new(expr, &self.defines);
        let v = ev.parse_or();
        v != 0
    }
}

fn strip_trailing_newline(s: &str) -> &str {
    if let Some(rest) = s.strip_suffix('\n') {
        if let Some(r2) = rest.strip_suffix('\r') {
            r2
        } else {
            rest
        }
    } else {
        s
    }
}

/// Return the text after the leading `#` if the line is a preprocessor
/// directive, else `None`. The `#` may be followed by whitespace.
fn strip_directive(line: &str) -> Option<&str> {
    let rest = line.strip_prefix('#')?;
    Some(rest.trim_start())
}

/// Split a directive body into (name, argument-tail).
fn split_directive(body: &str) -> (&str, &str) {
    let mut name_end = 0;
    for (i, c) in body.char_indices() {
        if c.is_ascii_alphabetic() || c == '_' {
            name_end = i + c.len_utf8();
        } else {
            break;
        }
    }
    let name = &body[..name_end];
    let rest = body[name_end..].trim_start();
    (name, rest)
}

/// Remove `//` and `/* ... */` comments from a single line.
fn strip_line_comments(s: &str) -> String {
    let bytes = s.as_bytes();
    let mut out = String::with_capacity(s.len());
    let mut i = 0;
    while i < bytes.len() {
        if i + 1 < bytes.len() && bytes[i] == b'/' && bytes[i + 1] == b'/' {
            break;
        }
        if i + 1 < bytes.len() && bytes[i] == b'/' && bytes[i + 1] == b'*' {
            // Skip until */
            i += 2;
            while i + 1 < bytes.len() && !(bytes[i] == b'*' && bytes[i + 1] == b'/') {
                i += 1;
            }
            if i + 1 < bytes.len() {
                i += 2;
            }
            out.push(' ');
            continue;
        }
        out.push(bytes[i] as char);
        i += 1;
    }
    out
}

/// Parse `#include "path"` or `#include <path>` argument.
fn parse_include_arg(arg: &str) -> Option<String> {
    let arg = arg.trim();
    let arg = strip_line_comments(arg);
    let arg = arg.trim();
    let b = arg.as_bytes();
    if b.len() >= 2 && b[0] == b'"' {
        let end = arg[1..].find('"')?;
        Some(arg[1..1 + end].to_string())
    } else if b.len() >= 2 && b[0] == b'<' {
        let end = arg[1..].find('>')?;
        Some(arg[1..1 + end].to_string())
    } else {
        None
    }
}

/// Parse a `#define` body into the macro table.
fn parse_define(arg: &str, defines: &mut HashMap<String, Macro>) {
    let arg = strip_line_comments(arg);
    let bytes = arg.as_bytes();
    // Read identifier.
    let mut i = 0;
    while i < bytes.len() && (bytes[i] == b' ' || bytes[i] == b'\t') {
        i += 1;
    }
    let name_start = i;
    while i < bytes.len() && (bytes[i].is_ascii_alphanumeric() || bytes[i] == b'_') {
        i += 1;
    }
    if i == name_start {
        return;
    }
    let name = arg[name_start..i].to_string();
    // Optional function-like parameter list: `(` immediately follows.
    let params = if i < bytes.len() && bytes[i] == b'(' {
        i += 1;
        let mut params = Vec::new();
        let mut param_start = i;
        let mut depth = 1i32;
        while i < bytes.len() && depth > 0 {
            match bytes[i] {
                b'(' => depth += 1,
                b')' => {
                    depth -= 1;
                    if depth == 0 {
                        let piece = arg[param_start..i].trim();
                        if !piece.is_empty() {
                            params.push(piece.to_string());
                        }
                        i += 1;
                        break;
                    }
                }
                b',' if depth == 1 => {
                    let piece = arg[param_start..i].trim();
                    if !piece.is_empty() {
                        params.push(piece.to_string());
                    }
                    i += 1;
                    param_start = i;
                    continue;
                }
                _ => {}
            }
            i += 1;
        }
        Some(params)
    } else {
        None
    };
    let body = arg[i..].trim().to_string();
    defines.insert(name, Macro { params, body });
}

/// Simple expression evaluator for `#if` conditions.
struct ExprEval<'a> {
    chars: Vec<char>,
    pos: usize,
    defines: &'a HashMap<String, Macro>,
}

impl<'a> ExprEval<'a> {
    fn new(expr: &str, defines: &'a HashMap<String, Macro>) -> Self {
        Self {
            chars: expr.chars().collect(),
            pos: 0,
            defines,
        }
    }

    fn peek(&self) -> Option<char> {
        self.chars.get(self.pos).copied()
    }

    fn skip_ws(&mut self) {
        while let Some(c) = self.peek() {
            if c.is_whitespace() {
                self.pos += 1;
            } else {
                break;
            }
        }
    }

    fn match_str(&mut self, s: &str) -> bool {
        self.skip_ws();
        let chars: Vec<char> = s.chars().collect();
        if self.pos + chars.len() > self.chars.len() {
            return false;
        }
        for (i, c) in chars.iter().enumerate() {
            if self.chars[self.pos + i] != *c {
                return false;
            }
        }
        self.pos += chars.len();
        true
    }

    fn parse_or(&mut self) -> i64 {
        let mut v = self.parse_and();
        loop {
            self.skip_ws();
            if self.match_str("||") {
                let r = self.parse_and();
                v = if v != 0 || r != 0 { 1 } else { 0 };
            } else {
                break;
            }
        }
        v
    }

    fn parse_and(&mut self) -> i64 {
        let mut v = self.parse_eq();
        loop {
            self.skip_ws();
            if self.match_str("&&") {
                let r = self.parse_eq();
                v = if v != 0 && r != 0 { 1 } else { 0 };
            } else {
                break;
            }
        }
        v
    }

    fn parse_eq(&mut self) -> i64 {
        let mut v = self.parse_rel();
        loop {
            self.skip_ws();
            if self.match_str("==") {
                let r = self.parse_rel();
                v = (v == r) as i64;
            } else if self.match_str("!=") {
                let r = self.parse_rel();
                v = (v != r) as i64;
            } else {
                break;
            }
        }
        v
    }

    fn parse_rel(&mut self) -> i64 {
        let mut v = self.parse_add();
        loop {
            self.skip_ws();
            if self.match_str("<=") {
                let r = self.parse_add();
                v = (v <= r) as i64;
            } else if self.match_str(">=") {
                let r = self.parse_add();
                v = (v >= r) as i64;
            } else if self.match_str("<") {
                let r = self.parse_add();
                v = (v < r) as i64;
            } else if self.match_str(">") {
                let r = self.parse_add();
                v = (v > r) as i64;
            } else {
                break;
            }
        }
        v
    }

    fn parse_add(&mut self) -> i64 {
        let mut v = self.parse_mul();
        loop {
            self.skip_ws();
            if self.match_str("+") {
                v += self.parse_mul();
            } else if self.match_str("-") {
                v -= self.parse_mul();
            } else {
                break;
            }
        }
        v
    }

    fn parse_mul(&mut self) -> i64 {
        let mut v = self.parse_unary();
        loop {
            self.skip_ws();
            if self.match_str("*") {
                v *= self.parse_unary();
            } else if self.match_str("/") {
                let r = self.parse_unary();
                v = if r == 0 { 0 } else { v / r };
            } else if self.match_str("%") {
                let r = self.parse_unary();
                v = if r == 0 { 0 } else { v % r };
            } else {
                break;
            }
        }
        v
    }

    fn parse_unary(&mut self) -> i64 {
        self.skip_ws();
        if self.match_str("!") {
            let v = self.parse_unary();
            if v == 0 {
                1
            } else {
                0
            }
        } else if self.match_str("-") {
            -self.parse_unary()
        } else if self.match_str("+") {
            self.parse_unary()
        } else {
            self.parse_primary()
        }
    }

    fn parse_primary(&mut self) -> i64 {
        self.skip_ws();
        if self.match_str("(") {
            let v = self.parse_or();
            self.skip_ws();
            let _ = self.match_str(")");
            return v;
        }
        // defined(NAME) or defined NAME
        if self.match_keyword("defined") {
            self.skip_ws();
            let had_paren = self.match_str("(");
            self.skip_ws();
            let name = self.read_ident();
            self.skip_ws();
            if had_paren {
                let _ = self.match_str(")");
            }
            return if self.defines.contains_key(&name) {
                1
            } else {
                0
            };
        }
        // Numeric literal.
        if let Some(c) = self.peek() {
            if c.is_ascii_digit() {
                return self.read_number();
            }
            if c.is_ascii_alphabetic() || c == '_' {
                let name = self.read_ident();
                if let Some(m) = self.defines.get(&name) {
                    // Try to parse the macro body as an integer literal.
                    let body = m.body.trim();
                    if let Some(n) = parse_int_literal(body) {
                        return n;
                    }
                    // Fall back to recursively evaluating the body text.
                    let mut sub = ExprEval::new(body, self.defines);
                    return sub.parse_or();
                }
                return 0;
            }
        }
        0
    }

    fn match_keyword(&mut self, kw: &str) -> bool {
        self.skip_ws();
        let start = self.pos;
        let chars: Vec<char> = kw.chars().collect();
        if self.pos + chars.len() > self.chars.len() {
            return false;
        }
        for (i, c) in chars.iter().enumerate() {
            if self.chars[self.pos + i] != *c {
                return false;
            }
        }
        // Must be followed by a non-ident char.
        if let Some(next) = self.chars.get(self.pos + chars.len()) {
            if next.is_ascii_alphanumeric() || *next == '_' {
                return false;
            }
        }
        self.pos += chars.len();
        let _ = start;
        true
    }

    fn read_ident(&mut self) -> String {
        let mut s = String::new();
        while let Some(c) = self.peek() {
            if c.is_ascii_alphanumeric() || c == '_' {
                s.push(c);
                self.pos += 1;
            } else {
                break;
            }
        }
        s
    }

    fn read_number(&mut self) -> i64 {
        let start = self.pos;
        // Possible hex prefix.
        if self.pos + 1 < self.chars.len()
            && self.chars[self.pos] == '0'
            && (self.chars[self.pos + 1] == 'x' || self.chars[self.pos + 1] == 'X')
        {
            self.pos += 2;
            while let Some(c) = self.peek() {
                if c.is_ascii_hexdigit() {
                    self.pos += 1;
                } else {
                    break;
                }
            }
            let s: String = self.chars[start + 2..self.pos].iter().collect();
            return i64::from_str_radix(&s, 16).unwrap_or(0);
        }
        while let Some(c) = self.peek() {
            if c.is_ascii_digit() {
                self.pos += 1;
            } else {
                break;
            }
        }
        // Skip common integer suffixes (L, LL, U, UL).
        while let Some(c) = self.peek() {
            if matches!(c, 'L' | 'l' | 'U' | 'u') {
                self.pos += 1;
            } else {
                break;
            }
        }
        let s: String = self.chars[start..self.pos].iter().collect();
        // Strip suffix before parsing.
        let digits: String = s.chars().take_while(|c| c.is_ascii_digit()).collect();
        digits.parse::<i64>().unwrap_or(0)
    }
}

fn parse_int_literal(s: &str) -> Option<i64> {
    let s = s.trim();
    if let Some(hex) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        let hex: String = hex.chars().take_while(|c| c.is_ascii_hexdigit()).collect();
        return i64::from_str_radix(&hex, 16).ok();
    }
    let digits: String = s.chars().take_while(|c| c.is_ascii_digit()).collect();
    if digits.is_empty() {
        return None;
    }
    digits.parse::<i64>().ok()
}

/// Join physical lines that end with a backslash into a single logical line.
/// Keeps the number of resulting newlines the same by replacing the
/// `\\\n` pair with a single space but appending an extra newline at the end
/// of the original run so that downstream line numbering remains stable.
fn join_continuation_lines(src: &str) -> String {
    let mut out = String::with_capacity(src.len());
    let bytes = src.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] == b'\\' && i + 1 < bytes.len() && bytes[i + 1] == b'\n' {
            // Replace the continuation with a space and remember we need
            // to emit an extra newline later so lines stay aligned.
            out.push(' ');
            i += 2;
            // Collect the following physical line into the output, then add
            // a newline at the end which accounts for the one we swallowed.
            let start = i;
            while i < bytes.len() && bytes[i] != b'\n' {
                i += 1;
            }
            out.push_str(std::str::from_utf8(&bytes[start..i]).unwrap_or(""));
            if i < bytes.len() {
                out.push('\n');
                i += 1;
            }
            // Emit the makeup newline to preserve line-count parity.
            out.push('\n');
            continue;
        }
        out.push(bytes[i] as char);
        i += 1;
    }
    out
}

/// Expand macros on a single input line. This performs simple one-pass
/// identifier-level substitution: it walks tokens, and when it finds an
/// identifier that is a defined macro, replaces it with its body. For
/// function-like macros, the argument list is parsed and parameters are
/// substituted, then the result is re-expanded.
fn expand_macros(line: &str, defines: &HashMap<String, Macro>) -> String {
    expand_str(line, defines, 0)
}

fn expand_str(line: &str, defines: &HashMap<String, Macro>, depth: usize) -> String {
    if depth > 32 {
        return line.to_string();
    }
    let chars: Vec<char> = line.chars().collect();
    let mut out = String::with_capacity(line.len());
    let mut i = 0;
    while i < chars.len() {
        let c = chars[i];
        // Skip contents of string literals so macros inside "..." are left alone.
        if c == '"' {
            out.push(c);
            i += 1;
            while i < chars.len() && chars[i] != '"' {
                if chars[i] == '\\' && i + 1 < chars.len() {
                    out.push(chars[i]);
                    out.push(chars[i + 1]);
                    i += 2;
                    continue;
                }
                out.push(chars[i]);
                i += 1;
            }
            if i < chars.len() {
                out.push('"');
                i += 1;
            }
            continue;
        }
        // Skip line comments entirely.
        if c == '/' && i + 1 < chars.len() && chars[i + 1] == '/' {
            out.push_str(&chars[i..].iter().collect::<String>());
            break;
        }
        // Recognize identifiers.
        if c.is_ascii_alphabetic() || c == '_' {
            let start = i;
            while i < chars.len() && (chars[i].is_ascii_alphanumeric() || chars[i] == '_') {
                i += 1;
            }
            let name: String = chars[start..i].iter().collect();
            if let Some(m) = defines.get(&name) {
                if let Some(params) = &m.params {
                    // Function-like macro. Skip whitespace then expect '('.
                    let mut j = i;
                    while j < chars.len() && chars[j].is_whitespace() {
                        j += 1;
                    }
                    if j < chars.len() && chars[j] == '(' {
                        j += 1;
                        let mut args: Vec<String> = Vec::new();
                        let mut depth_paren = 1i32;
                        let mut arg_start = j;
                        while j < chars.len() && depth_paren > 0 {
                            match chars[j] {
                                '(' => {
                                    depth_paren += 1;
                                    j += 1;
                                }
                                ')' => {
                                    depth_paren -= 1;
                                    if depth_paren == 0 {
                                        let a: String = chars[arg_start..j].iter().collect();
                                        args.push(a.trim().to_string());
                                        j += 1;
                                        break;
                                    }
                                    j += 1;
                                }
                                ',' if depth_paren == 1 => {
                                    let a: String = chars[arg_start..j].iter().collect();
                                    args.push(a.trim().to_string());
                                    j += 1;
                                    arg_start = j;
                                }
                                _ => j += 1,
                            }
                        }
                        // Substitute.
                        let substituted = substitute_params(&m.body, params, &args);
                        // Recursively expand the substituted text.
                        let expanded = expand_str(&substituted, defines, depth + 1);
                        out.push_str(&expanded);
                        i = j;
                        continue;
                    }
                    // No paren -- leave as-is.
                    out.push_str(&name);
                    continue;
                } else {
                    // Object-like macro.
                    let expanded = expand_str(&m.body, defines, depth + 1);
                    out.push_str(&expanded);
                    continue;
                }
            }
            out.push_str(&name);
            continue;
        }
        out.push(c);
        i += 1;
    }
    out
}

/// Substitute parameter names in a macro body with the corresponding
/// argument text, honoring the `##` token-paste operator.
fn substitute_params(body: &str, params: &[String], args: &[String]) -> String {
    // Tokenize the body by identifiers so we can replace parameter names.
    let chars: Vec<char> = body.chars().collect();
    let mut out = String::with_capacity(body.len());
    let mut i = 0;
    while i < chars.len() {
        let c = chars[i];
        if c.is_ascii_alphabetic() || c == '_' {
            let start = i;
            while i < chars.len() && (chars[i].is_ascii_alphanumeric() || chars[i] == '_') {
                i += 1;
            }
            let name: String = chars[start..i].iter().collect();
            if let Some(idx) = params.iter().position(|p| p == &name) {
                if let Some(a) = args.get(idx) {
                    out.push_str(a);
                    continue;
                }
            }
            out.push_str(&name);
            continue;
        }
        // Token-paste: `a ## b` -> `ab`. Consume surrounding whitespace.
        if c == '#' && i + 1 < chars.len() && chars[i + 1] == '#' {
            // Strip trailing whitespace from out.
            while out.ends_with(' ') || out.ends_with('\t') {
                out.pop();
            }
            i += 2;
            while i < chars.len() && (chars[i] == ' ' || chars[i] == '\t') {
                i += 1;
            }
            continue;
        }
        out.push(c);
        i += 1;
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn pp(src: &str) -> String {
        let mut p = Preproc::new();
        p.preprocess(src, Path::new("."), "<test>").unwrap()
    }

    fn pp_with(src: &str, defs: &[(&str, &str)]) -> String {
        let mut p = Preproc::new();
        for (k, v) in defs {
            p.define_simple(k, v);
        }
        p.preprocess(src, Path::new("."), "<test>").unwrap()
    }

    #[test]
    fn passthrough() {
        let out = pp("ARCHITECTURE(ADSP-21569)\n");
        assert!(out.contains("ARCHITECTURE"));
    }

    #[test]
    fn ifdef_true() {
        let out = pp_with("#ifdef FOO\nhello\n#endif\n", &[("FOO", "1")]);
        assert!(out.contains("hello"));
    }

    #[test]
    fn ifdef_false() {
        let out = pp("#ifdef FOO\nhello\n#endif\n");
        assert!(!out.contains("hello"));
    }

    #[test]
    fn if_elif_else() {
        let out = pp_with(
            "#if defined(A)\nAA\n#elif defined(B)\nBB\n#else\nCC\n#endif\n",
            &[("B", "1")],
        );
        assert!(out.contains("BB"));
        assert!(!out.contains("AA"));
        assert!(!out.contains("CC"));
    }

    #[test]
    fn define_object() {
        let out = pp("#define X foo\nX bar\n");
        assert!(out.contains("foo bar"));
    }

    #[test]
    fn define_function_with_paste() {
        let out = pp("#define RT(n) lib ## n ## .dlb\nRT(cc)\n");
        // The expansion should contain libcc.dlb
        assert!(out.contains("libcc.dlb"), "got: {out}");
    }

    #[test]
    fn eval_defined_and() {
        let out = pp_with(
            "#if defined(A) && defined(B)\nYES\n#else\nNO\n#endif\n",
            &[("A", ""), ("B", "")],
        );
        assert!(out.contains("YES"));
    }

    #[test]
    fn eval_not_defined() {
        let out = pp("#if !defined(FOO)\nNO_FOO\n#endif\n");
        assert!(out.contains("NO_FOO"));
    }

    #[test]
    fn nested_if() {
        let out = pp_with(
            "#if defined(A)\n#if defined(B)\nAB\n#else\nA_NOT_B\n#endif\n#endif\n",
            &[("A", "")],
        );
        assert!(out.contains("A_NOT_B"));
        assert!(!out.contains("AB"));
    }

    #[test]
    fn unknown_directive_dropped() {
        let out = pp("#pragma once\nALIVE\n");
        assert!(out.contains("ALIVE"));
    }
}
