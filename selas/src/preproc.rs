// SPDX-License-Identifier: GPL-3.0
// preproc.rs --- Assembly preprocessor for ADSP-2156x
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};
use std::collections::HashMap;
use std::path::{Path, PathBuf};

/// A macro definition: either a simple text substitution or a parameterized
/// macro with named parameters.
#[derive(Debug, Clone)]
struct MacroDef {
    params: Option<Vec<String>>,
    body: String,
}

/// State of a single `#if` / `#elif` / `#else` / `#endif` nesting level.
#[derive(Debug, Clone)]
struct IfState {
    /// Whether the current branch is actively emitting lines.
    active: bool,
    /// Whether any branch at this level has already been true.
    seen_true: bool,
    /// Whether the enclosing level is active (false means the whole
    /// group is dead regardless of conditions).
    parent_active: bool,
}

pub struct Preprocessor {
    defines: HashMap<String, MacroDef>,
    if_stack: Vec<IfState>,
    include_dirs: Vec<PathBuf>,
    /// Guard against infinite include recursion.
    include_depth: u32,
}

const MAX_INCLUDE_DEPTH: u32 = 64;

impl Preprocessor {
    pub fn new(
        proc_type: Option<&str>,
        include_dirs: &[String],
        defines: &[(String, String)],
    ) -> Self {
        let mut pp = Preprocessor {
            defines: HashMap::new(),
            if_stack: Vec::new(),
            include_dirs: include_dirs.iter().map(PathBuf::from).collect(),
            include_depth: 0,
        };

        // User-supplied -D defines
        for (name, value) in defines {
            pp.defines.insert(
                name.clone(),
                MacroDef {
                    params: None,
                    body: value.clone(),
                },
            );
        }

        // Predefined macros from -proc flag
        if let Some(proc) = proc_type {
            pp.add_proc_defines(proc);
        }

        pp
    }

    fn add_proc_defines(&mut self, proc: &str) {
        // Normalise "ADSP-21569" -> "21569"
        let chip = proc
            .strip_prefix("ADSP-")
            .or_else(|| proc.strip_prefix("ADSP"))
            .unwrap_or(proc);

        let simple = |s: &str| MacroDef {
            params: None,
            body: s.to_string(),
        };

        // Chip-specific: __ADSP21569__
        let chip_upper = chip.to_uppercase();
        self.defines
            .insert(format!("__ADSP{chip_upper}__"), simple("1"));

        // Family macro for 2156x parts
        if chip_upper.starts_with("2156") {
            self.defines
                .insert("__ADSP2156x__".to_string(), simple("1"));
            self.defines
                .insert("__ADSP215xx__".to_string(), simple("1"));
            self.defines
                .insert("__ADSPSC5xx__".to_string(), simple("1"));
        }

        // Generic SHARC macros — value encodes processor generation
        // (0x220 for 2156x/215xx).
        let sharc_ver = if chip_upper.starts_with("215") {
            "0x220"
        } else if chip_upper.starts_with("214") {
            "0x100"
        } else {
            "1"
        };
        self.defines
            .insert("__ADSPSHARC__".to_string(), simple(sharc_ver));
        self.defines
            .insert("__ADSP21000__".to_string(), simple("1"));
        self.defines
            .insert("__SIMDSHARC__".to_string(), simple("1"));
        self.defines
            .insert("__BA_SHARC__".to_string(), simple("1"));
        self.defines
            .insert("__BYTE_ADDRESSING__".to_string(), simple("1"));
        self.defines
            .insert("_LANGUAGE_ASM".to_string(), simple("1"));

        // Core count (single-core parts default to 1/0)
        self.defines
            .insert("__NUM_CORES__".to_string(), simple("1"));
        self.defines
            .insert("__NUM_SEC_CORES__".to_string(), simple("0"));
    }

    /// Preprocess input source, returning the fully-expanded text.
    pub fn process(&mut self, input: &str, filename: &str) -> Result<String> {
        let mut output = String::with_capacity(input.len());
        output.push_str(&format!("#line 1 \"{filename}\"\n"));
        self.process_inner(input, filename, &mut output)?;
        Ok(output)
    }

    /// Inner recursive processor (used for #include).
    fn process_inner(
        &mut self,
        input: &str,
        filename: &str,
        output: &mut String,
    ) -> Result<()> {
        // First, strip block comments while preserving line count.
        let stripped = strip_block_comments(input);

        let lines: Vec<&str> = stripped.lines().collect();
        let mut i = 0;
        while i < lines.len() {
            let raw_line = lines[i];
            let trimmed = raw_line.trim();
            let line_num = i + 1; // 1-based

            // Handle backslash line continuation: join lines ending with '\'
            if let Some(without_backslash) = trimmed.strip_suffix('\\') {
            if trim_directive(trimmed).is_some() {
                let mut joined = without_backslash.to_string();
                let mut extra_lines = 0;
                i += 1;
                while i < lines.len() {
                    extra_lines += 1;
                    let next = lines[i].trim();
                    if let Some(stripped) = next.strip_suffix('\\') {
                        joined.push_str(stripped);
                        i += 1;
                    } else {
                        joined.push_str(next);
                        i += 1;
                        break;
                    }
                }
                let joined_trimmed = joined.trim();
                if let Some(directive_body) = trim_directive(joined_trimmed) {
                    self.handle_directive(directive_body, filename, line_num, output)?;
                    // Emit blank lines for the continuation lines
                    for _ in 0..extra_lines {
                        output.push('\n');
                    }
                }
                continue;
            }
            }

            i += 1;

            // Check for preprocessor directive (starts with #)
            if let Some(directive_body) = trim_directive(trimmed) {
                self.handle_directive(directive_body, filename, line_num, output)?;
            } else if self.is_active() {
                // Regular line: expand macros and emit
                let expanded = self.expand_macros(raw_line);
                // Strip // line comments
                let without_comment = strip_line_comment(&expanded);
                output.push_str(without_comment);
                output.push('\n');
            } else {
                // Inactive branch: emit blank line
                output.push('\n');
            }
        }

        Ok(())
    }

    /// Returns true when the current position is in an active branch.
    fn is_active(&self) -> bool {
        self.if_stack
            .last()
            .is_none_or(|st| st.active && st.parent_active)
    }

    fn handle_directive(
        &mut self,
        body: &str,
        filename: &str,
        line_num: usize,
        output: &mut String,
    ) -> Result<()> {
        // Parse directive keyword (case-insensitive)
        let (keyword, rest) = split_keyword(body);
        let kw = keyword.to_uppercase();

        match kw.as_str() {
            "IF" => {
                let parent_active = self.is_active();
                let cond = if parent_active {
                    self.eval_condition(rest)
                } else {
                    false
                };
                self.if_stack.push(IfState {
                    active: cond,
                    seen_true: cond,
                    parent_active,
                });
                output.push('\n');
            }
            "IFDEF" => {
                let parent_active = self.is_active();
                let sym = rest.trim();
                let cond = parent_active && self.defines.contains_key(sym);
                self.if_stack.push(IfState {
                    active: cond,
                    seen_true: cond,
                    parent_active,
                });
                output.push('\n');
            }
            "IFNDEF" => {
                let parent_active = self.is_active();
                let sym = rest.trim();
                let cond = parent_active && !self.defines.contains_key(sym);
                self.if_stack.push(IfState {
                    active: cond,
                    seen_true: cond,
                    parent_active,
                });
                output.push('\n');
            }
            "ELIF" => {
                // Extract parent_active before mutable borrow
                let parent_active = self
                    .if_stack
                    .last()
                    .is_none_or(|s| s.parent_active);
                let already_true = self
                    .if_stack
                    .last()
                    .is_some_and(|s| s.seen_true);
                let cond = if already_true || !parent_active {
                    false
                } else {
                    self.eval_condition_with_parent(rest, parent_active)
                };
                if let Some(state) = self.if_stack.last_mut() {
                    state.active = cond;
                    if cond {
                        state.seen_true = true;
                    }
                }
                output.push('\n');
            }
            "ELSE" => {
                if let Some(state) = self.if_stack.last_mut() {
                    if state.seen_true || !state.parent_active {
                        state.active = false;
                    } else {
                        state.active = true;
                        state.seen_true = true;
                    }
                }
                output.push('\n');
            }
            "ENDIF" => {
                self.if_stack.pop();
                output.push('\n');
            }
            "DEFINE" if self.is_active() => {
                self.handle_define(rest);
                output.push('\n');
            }
            "UNDEF" if self.is_active() => {
                let sym = rest.trim();
                self.defines.remove(sym);
                output.push('\n');
            }
            "INCLUDE" if self.is_active() => {
                self.handle_include(rest, filename, line_num, output)?;
            }
            "PRAGMA" => {
                // Silently consume pragma lines
                output.push('\n');
            }
            "ERROR" if self.is_active() => {
                return Err(Error::Parse {
                    line: 0,
                    msg: format!("#error {}", rest.trim()),
                });
            }
            "WARNING" if self.is_active() => {
                eprintln!("warning: {}", rest.trim());
                output.push('\n');
            }
            _ => {
                // Unknown directive or directive in inactive branch: blank line
                output.push('\n');
            }
        }

        Ok(())
    }

    fn eval_condition(&self, expr: &str) -> bool {
        self.eval_condition_with_parent(expr, true)
    }

    fn eval_condition_with_parent(&self, expr: &str, parent_active: bool) -> bool {
        if !parent_active {
            return false;
        }
        self.eval_expr(expr.trim())
    }

    /// Evaluate a preprocessor condition expression.
    /// Supports: DEFINED(sym), !DEFINED(sym), defined(sym), &&, ||, !,
    /// integer literals, comparisons.
    fn eval_expr(&self, expr: &str) -> bool {
        let expr = expr.trim();
        if expr.is_empty() {
            return false;
        }

        // Handle parenthesised expression at the top level
        if expr.starts_with('(') {
            if let Some(close) = find_matching_paren(expr, 0) {
                if close == expr.len() - 1 {
                    return self.eval_expr(&expr[1..close]);
                }
                // There's stuff after the closing paren - handle as binary op
                let rest = expr[close + 1..].trim();
                if let Some(stripped) = rest.strip_prefix("&&") {
                    return self.eval_expr(&expr[..=close])
                        && self.eval_expr(stripped);
                }
                if let Some(stripped) = rest.strip_prefix("||") {
                    return self.eval_expr(&expr[..=close])
                        || self.eval_expr(stripped);
                }
            }
        }

        // Split on || (lowest precedence)
        if let Some(pos) = find_top_level_op(expr, "||") {
            let left = &expr[..pos];
            let right = &expr[pos + 2..];
            return self.eval_expr(left) || self.eval_expr(right);
        }

        // Split on && (next precedence)
        if let Some(pos) = find_top_level_op(expr, "&&") {
            let left = &expr[..pos];
            let right = &expr[pos + 2..];
            return self.eval_expr(left) && self.eval_expr(right);
        }

        // Handle logical NOT (higher precedence than && / ||)
        if let Some(inner) = expr.strip_prefix('!') {
            let inner = inner.trim();
            // !DEFINED(sym) or !(expr)
            return !self.eval_expr(inner);
        }

        // DEFINED(sym) or defined(sym)
        let upper = expr.to_uppercase();
        if upper.starts_with("DEFINED") {
            let rest = expr[7..].trim();
            if let Some(inner) = rest
                .strip_prefix('(')
                .and_then(|s| s.strip_suffix(')'))
            {
                let sym = inner.trim();
                return self.defines.contains_key(sym);
            }
        }

        // Comparison operators: ==, !=, >=, <=, >, <
        for op in &["==", "!=", ">=", "<=", ">", "<"] {
            if let Some(pos) = find_top_level_op(expr, op) {
                let left = self.eval_integer(&expr[..pos]);
                let right = self.eval_integer(&expr[pos + op.len()..]);
                return match *op {
                    "==" => left == right,
                    "!=" => left != right,
                    ">=" => left >= right,
                    "<=" => left <= right,
                    ">" => left > right,
                    "<" => left < right,
                    _ => false,
                };
            }
        }

        // Try as integer: nonzero = true
        let val = self.eval_integer(expr);
        val != 0
    }

    fn eval_integer(&self, expr: &str) -> i64 {
        let expr = expr.trim();

        // Try macro expansion first
        if let Some(def) = self.defines.get(expr) {
            if def.params.is_none() {
                let expanded = def.body.trim();
                if expanded != expr {
                    return self.eval_integer(expanded);
                }
            }
        }

        // Hex literal
        if let Some(hex) = expr.strip_prefix("0x").or_else(|| expr.strip_prefix("0X")) {
            let hex = hex.trim_end_matches(['u', 'U', 'l', 'L']);
            return i64::from_str_radix(hex, 16).unwrap_or(0);
        }

        // Decimal literal
        let cleaned = expr.trim_end_matches(['u', 'U', 'l', 'L']);
        cleaned.parse::<i64>().unwrap_or(0)
    }

    fn handle_define(&mut self, rest: &str) {
        let rest = rest.trim();
        if rest.is_empty() {
            return;
        }

        // Parse: NAME or NAME(params) body
        // Find end of identifier
        let name_end = rest
            .find(|c: char| !c.is_alphanumeric() && c != '_')
            .unwrap_or(rest.len());
        let name = &rest[..name_end];
        let after_name = &rest[name_end..];

        if after_name.starts_with('(') {
            // Parameterized macro: #define NAME(a, b) body
            if let Some(close) = after_name.find(')') {
                let param_str = &after_name[1..close];
                let params: Vec<String> = param_str
                    .split(',')
                    .map(|s| s.trim().to_string())
                    .filter(|s| !s.is_empty())
                    .collect();
                let body = after_name[close + 1..].trim().to_string();
                self.defines.insert(
                    name.to_string(),
                    MacroDef {
                        params: Some(params),
                        body,
                    },
                );
            }
        } else {
            // Simple macro: #define NAME value
            let body = after_name.trim().to_string();
            self.defines.insert(
                name.to_string(),
                MacroDef {
                    params: None,
                    body,
                },
            );
        }
    }

    fn handle_include(
        &mut self,
        rest: &str,
        current_file: &str,
        line_num: usize,
        output: &mut String,
    ) -> Result<()> {
        let rest = rest.trim();

        // Parse filename from "file" or <file>
        let (inc_file, is_system) = if let Some(after_quote) = rest.strip_prefix('"') {
            match after_quote.find('"') {
                Some(e) => (&after_quote[..e], false),
                None => return Ok(()),
            }
        } else if rest.starts_with('<') {
            let end = rest.find('>');
            match end {
                Some(e) => (&rest[1..e], true),
                None => return Ok(()),
            }
        } else {
            // Possibly a macro that expands to an include path; skip
            return Ok(());
        };

        // Search for the file
        let resolved = self.resolve_include(inc_file, current_file, is_system);

        match resolved {
            Some(path) => {
                if self.include_depth >= MAX_INCLUDE_DEPTH {
                    return Err(Error::Parse {
                        line: 0,
                        msg: format!("include depth exceeded for {inc_file}"),
                    });
                }
                let content = std::fs::read_to_string(&path).map_err(|e| Error::Parse {
                    line: 0,
                    msg: format!("cannot read {}: {e}", path.display()),
                })?;

                let path_str = path.to_string_lossy().to_string();
                output.push_str(&format!("#line 1 \"{path_str}\"\n"));

                self.include_depth += 1;
                self.process_inner(&content, &path_str, output)?;
                self.include_depth -= 1;

                // Emit #line to return to the parent file at the line after
                // the #include directive.
                output.push_str(&format!(
                    "#line {} \"{current_file}\"\n",
                    line_num + 1
                ));
            }
            None => {
                // File not found: emit a blank line (the standard does the same
                // for missing optional includes in inactive branches; for active
                // branches it errors, but many real projects have missing includes
                // that are guarded).
                eprintln!("warning: include file not found: {inc_file}");
                output.push('\n');
            }
        }

        Ok(())
    }

    fn resolve_include(
        &self,
        inc_file: &str,
        current_file: &str,
        is_system: bool,
    ) -> Option<PathBuf> {
        // For quoted includes, search relative to current file first
        if !is_system {
            let current_dir = Path::new(current_file).parent().unwrap_or(Path::new("."));
            let candidate = current_dir.join(inc_file);
            if candidate.is_file() {
                return Some(candidate);
            }
        }

        // Search -I directories
        for dir in &self.include_dirs {
            let candidate = dir.join(inc_file);
            if candidate.is_file() {
                return Some(candidate);
            }
        }

        None
    }

    /// Expand macros in a line of text.
    fn expand_macros(&self, line: &str) -> String {
        self.expand_macros_depth(line, 0)
    }

    fn expand_macros_depth(&self, line: &str, depth: u32) -> String {
        if depth > 32 {
            return line.to_string();
        }

        let mut result = line.to_string();
        let mut changed = true;
        let mut iterations = 0;

        while changed && iterations < 64 {
            changed = false;
            iterations += 1;

            // Try each defined macro
            for (name, def) in &self.defines {
                if !result.contains(name.as_str()) {
                    continue;
                }
                if let Some(new_result) = self.try_expand_macro(name, def, &result) {
                    if new_result != result {
                        result = new_result;
                        changed = true;
                    }
                }
            }
        }

        // Handle ## token concatenation
        while result.contains("##") {
            let new = handle_token_concat(&result);
            if new == result {
                break;
            }
            result = new;
        }

        result
    }

    fn try_expand_macro(&self, name: &str, def: &MacroDef, text: &str) -> Option<String> {
        if def.params.is_some() {
            self.expand_parameterized(name, def, text)
        } else {
            self.expand_simple(name, def, text)
        }
    }

    fn expand_simple(&self, name: &str, def: &MacroDef, text: &str) -> Option<String> {
        // Find the macro name as a whole word
        let mut result = String::new();
        let mut pos = 0;
        let bytes = text.as_bytes();
        let name_bytes = name.as_bytes();
        let mut did_replace = false;

        while pos <= bytes.len().saturating_sub(name_bytes.len()) {
            if &bytes[pos..pos + name_bytes.len()] == name_bytes {
                // Check word boundaries
                let before_ok = pos == 0
                    || !is_ident_char(bytes[pos - 1]);
                let after_pos = pos + name_bytes.len();
                let after_ok = after_pos >= bytes.len()
                    || !is_ident_char(bytes[after_pos]);

                if before_ok && after_ok {
                    result.push_str(&def.body);
                    pos += name_bytes.len();
                    did_replace = true;
                    continue;
                }
            }
            result.push(bytes[pos] as char);
            pos += 1;
        }
        // Append remaining bytes
        if pos < bytes.len() {
            for &b in &bytes[pos..] {
                result.push(b as char);
            }
        }

        if did_replace {
            Some(result)
        } else {
            None
        }
    }

    fn expand_parameterized(
        &self,
        name: &str,
        def: &MacroDef,
        text: &str,
    ) -> Option<String> {
        let params = def.params.as_ref()?;

        let mut result = String::new();
        let mut pos = 0;
        let bytes = text.as_bytes();
        let name_bytes = name.as_bytes();
        let mut did_replace = false;

        while pos < bytes.len() {
            if pos + name_bytes.len() <= bytes.len()
                && &bytes[pos..pos + name_bytes.len()] == name_bytes
            {
                // Check word boundary before
                let before_ok =
                    pos == 0 || !is_ident_char(bytes[pos - 1]);
                let after_pos = pos + name_bytes.len();

                if before_ok {
                    // Skip optional whitespace between macro name and '('
                    let mut paren_pos = after_pos;
                    while paren_pos < bytes.len()
                        && (bytes[paren_pos] == b' ' || bytes[paren_pos] == b'\t')
                    {
                        paren_pos += 1;
                    }

                    if paren_pos < bytes.len() && bytes[paren_pos] == b'(' {
                        // Found macro invocation: parse arguments
                        if let Some((args, end)) = parse_macro_args(text, paren_pos) {
                            if args.len() == params.len() {
                                let expanded =
                                    substitute_params(&def.body, params, &args);
                                result.push_str(&expanded);
                                pos = end;
                                did_replace = true;
                                continue;
                            }
                        }
                    }
                }
            }
            result.push(bytes[pos] as char);
            pos += 1;
        }

        if did_replace {
            Some(result)
        } else {
            None
        }
    }
}

/// Strip `/* ... */` block comments, replacing the comment with a space
/// on the opening line and blank lines for subsequent lines within the
/// comment (preserving line count).
fn strip_block_comments(input: &str) -> String {
    let mut output = String::with_capacity(input.len());
    let mut in_comment = false;
    let mut chars = input.chars().peekable();

    while let Some(c) = chars.next() {
        if in_comment {
            if c == '*' && chars.peek() == Some(&'/') {
                chars.next(); // consume '/'
                in_comment = false;
                // Replace the block comment with a single space (per C
                // standard behavior).
                output.push(' ');
            } else if c == '\n' {
                output.push('\n');
            }
            // Other chars inside comment are swallowed
        } else if c == '/' && chars.peek() == Some(&'*') {
            chars.next(); // consume '*'
            in_comment = true;
        } else {
            output.push(c);
        }
    }

    output
}

/// Strip // line comment from a line, preserving content before it
/// (including trailing whitespace, matching reference behavior).
fn strip_line_comment(line: &str) -> &str {
    // Be careful not to strip inside string literals
    let mut in_string = false;
    let bytes = line.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] == b'"' {
            in_string = !in_string;
        } else if !in_string && i + 1 < bytes.len() && bytes[i] == b'/' && bytes[i + 1] == b'/' {
            return &line[..i];
        }
        i += 1;
    }
    line
}

/// Check if a trimmed line is a preprocessor directive, returning the
/// body after the `#` if so.
fn trim_directive(trimmed: &str) -> Option<&str> {
    let s = trimmed.strip_prefix('#')?;
    // Allow optional space between # and keyword
    // Also, lone '#' lines (blank directive) should be consumed
    Some(s.trim_start())
}

/// Split a directive body into (keyword, rest). E.g. "if DEFINED(X)" -> ("if", "DEFINED(X)")
fn split_keyword(body: &str) -> (&str, &str) {
    let body = body.trim();
    let end = body
        .find(|c: char| !c.is_alphanumeric() && c != '_')
        .unwrap_or(body.len());
    let keyword = &body[..end];
    let rest = &body[end..];
    (keyword, rest)
}

/// Find the closing parenthesis matching the opening one at `start`.
fn find_matching_paren(s: &str, start: usize) -> Option<usize> {
    let bytes = s.as_bytes();
    let mut depth = 0i32;
    for (i, &b) in bytes.iter().enumerate().skip(start) {
        match b {
            b'(' => depth += 1,
            b')' => {
                depth -= 1;
                if depth == 0 {
                    return Some(i);
                }
            }
            _ => {}
        }
    }
    None
}

/// Find a top-level binary operator (not inside parentheses).
fn find_top_level_op(expr: &str, op: &str) -> Option<usize> {
    let bytes = expr.as_bytes();
    let op_bytes = op.as_bytes();
    let mut depth = 0i32;
    let mut i = 0;
    while i + op_bytes.len() <= bytes.len() {
        match bytes[i] {
            b'(' => depth += 1,
            b')' => depth -= 1,
            _ => {}
        }
        if depth == 0 && &bytes[i..i + op_bytes.len()] == op_bytes {
            // Make sure we don't confuse <= with < or != with !
            // For multi-char ops this is fine; for single-char < and >,
            // make sure they're not part of <= >= << >>
            if op.len() == 1 && (op == "<" || op == ">") {
                let next = if i + 1 < bytes.len() {
                    bytes[i + 1]
                } else {
                    0
                };
                let prev = if i > 0 { bytes[i - 1] } else { 0 };
                if next == b'=' || next == bytes[i] || prev == bytes[i] {
                    i += 1;
                    continue;
                }
            }
            return Some(i);
        }
        i += 1;
    }
    None
}

fn is_ident_char(b: u8) -> bool {
    b.is_ascii_alphanumeric() || b == b'_' || b == b'.'
}

/// Parse macro arguments from an opening paren, handling nested parens.
fn parse_macro_args(text: &str, paren_start: usize) -> Option<(Vec<String>, usize)> {
    let bytes = text.as_bytes();
    if paren_start >= bytes.len() || bytes[paren_start] != b'(' {
        return None;
    }

    let mut args = Vec::new();
    let mut depth = 1i32;
    let mut current = String::new();
    let mut i = paren_start + 1;

    while i < bytes.len() && depth > 0 {
        match bytes[i] {
            b'(' => {
                depth += 1;
                current.push('(');
            }
            b')' => {
                depth -= 1;
                if depth == 0 {
                    args.push(current.trim().to_string());
                } else {
                    current.push(')');
                }
            }
            b',' if depth == 1 => {
                args.push(current.trim().to_string());
                current = String::new();
            }
            _ => {
                current.push(bytes[i] as char);
            }
        }
        i += 1;
    }

    if depth == 0 {
        Some((args, i))
    } else {
        None
    }
}

/// Substitute parameters in a macro body.
fn substitute_params(body: &str, params: &[String], args: &[String]) -> String {
    let mut result = body.to_string();
    for (param, arg) in params.iter().zip(args.iter()) {
        // Replace parameter as whole word
        let mut new = String::new();
        let bytes = result.as_bytes();
        let param_bytes = param.as_bytes();
        let mut pos = 0;

        while pos <= bytes.len().saturating_sub(param_bytes.len()) {
            if pos + param_bytes.len() <= bytes.len()
                && &bytes[pos..pos + param_bytes.len()] == param_bytes
            {
                let before_ok =
                    pos == 0 || !is_ident_char(bytes[pos - 1]);
                let after_pos = pos + param_bytes.len();
                let after_ok =
                    after_pos >= bytes.len() || !is_ident_char(bytes[after_pos]);
                if before_ok && after_ok {
                    new.push_str(arg);
                    pos += param_bytes.len();
                    continue;
                }
            }
            new.push(bytes[pos] as char);
            pos += 1;
        }
        if pos < bytes.len() {
            for &b in &bytes[pos..] {
                new.push(b as char);
            }
        }
        result = new;
    }
    result
}

/// Handle ## token concatenation: remove whitespace around ## and join tokens.
fn handle_token_concat(s: &str) -> String {
    let mut result = String::with_capacity(s.len());
    let mut chars = s.chars().peekable();
    while let Some(c) = chars.next() {
        if c == '#' && chars.peek() == Some(&'#') {
            chars.next(); // consume second #
            // Trim trailing whitespace from result
            while result.ends_with(' ') || result.ends_with('\t') {
                result.pop();
            }
            // Skip leading whitespace after ##
            while chars.peek() == Some(&' ') || chars.peek() == Some(&'\t') {
                chars.next();
            }
        } else {
            result.push(c);
        }
    }
    result
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_strip_block_comments() {
        let input = "before /* inside */ after";
        let out = strip_block_comments(input);
        // Single-line block comment replaced with a space
        assert_eq!(out, "before   after");
    }

    #[test]
    fn test_strip_block_comments_span_lines() {
        let input = "before /* inside\nstill inside */ after";
        let out = strip_block_comments(input);
        // Multi-line block comment: newlines preserved, space replaces comment
        assert_eq!(out, "before \n  after");
        assert_eq!(out.lines().count(), 2);
    }

    #[test]
    fn test_strip_block_comments_multiline() {
        let input = "/**\n * comment\n */\ncode";
        let out = strip_block_comments(input);
        assert_eq!(out.lines().count(), 4);
        assert!(out.ends_with("code"));
    }

    #[test]
    fn test_strip_line_comment() {
        assert_eq!(strip_line_comment("code // comment"), "code ");
        assert_eq!(
            strip_line_comment(r#"name = "a // b""#),
            r#"name = "a // b""#
        );
    }

    #[test]
    fn test_simple_define() {
        let mut pp = Preprocessor::new(None, &[], &[]);
        let input = "#define FOO 42\nval = FOO\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("val = 42"));
    }

    #[test]
    fn test_ifdef_true() {
        let mut pp = Preprocessor::new(None, &[], &[("FOO".into(), "1".into())]);
        let input = "#ifdef FOO\nyes\n#else\nno\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("yes"));
        assert!(!out.contains("no"));
    }

    #[test]
    fn test_ifdef_false() {
        let mut pp = Preprocessor::new(None, &[], &[]);
        let input = "#ifdef FOO\nyes\n#else\nno\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(!out.contains("yes"));
        assert!(out.contains("no"));
    }

    #[test]
    fn test_if_defined() {
        let mut pp = Preprocessor::new(None, &[], &[("X".into(), "1".into())]);
        let input = "#if defined(X)\nyes\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("yes"));
    }

    #[test]
    fn test_if_not_defined() {
        let mut pp = Preprocessor::new(None, &[], &[]);
        let input = "#if !defined(X)\nyes\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("yes"));
    }

    #[test]
    fn test_elif_chain() {
        let mut pp = Preprocessor::new(None, &[], &[("B".into(), "1".into())]);
        let input = "#if defined(A)\nfirst\n#elif defined(B)\nsecond\n#else\nthird\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(!out.contains("first"));
        assert!(out.contains("second"));
        assert!(!out.contains("third"));
    }

    #[test]
    fn test_nested_if() {
        let mut pp = Preprocessor::new(None, &[], &[("A".into(), "1".into())]);
        let input = "#if defined(A)\n#if defined(B)\ninner\n#endif\nouter\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(!out.contains("inner"));
        assert!(out.contains("outer"));
    }

    #[test]
    fn test_proc_defines() {
        let pp = Preprocessor::new(Some("ADSP-21569"), &[], &[]);
        assert!(pp.defines.contains_key("__ADSP21569__"));
        assert!(pp.defines.contains_key("__ADSPSHARC__"));
        assert!(pp.defines.contains_key("__BYTE_ADDRESSING__"));
        assert!(pp.defines.contains_key("_LANGUAGE_ASM"));
        assert!(pp.defines.contains_key("__ADSP2156x__"));
    }

    #[test]
    fn test_parameterized_macro() {
        let mut pp = Preprocessor::new(None, &[], &[]);
        let input = "#define ADD(x, y) ((x) + (y))\nresult = ADD(1, 2)\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("result = ((1) + (2))"));
    }

    #[test]
    fn test_token_concat() {
        assert_eq!(handle_token_concat("a ## b"), "ab");
        assert_eq!(handle_token_concat("foo ## bar"), "foobar");
    }

    #[test]
    fn test_case_insensitive_directives() {
        let mut pp = Preprocessor::new(None, &[], &[("X".into(), "1".into())]);
        let input = "#IF DEFINED(X)\nyes\n#ENDIF\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("yes"));
    }

    #[test]
    fn test_line_count_preserved() {
        let mut pp = Preprocessor::new(None, &[], &[]);
        let input = "line1\n#if 0\nskipped\n#endif\nline5\n";
        let out = pp.process(input, "test.asm").unwrap();
        // Output has 1 extra line from #line directive at top
        // #line 1 "test.asm"\nline1\n\n\n\nline5\n
        let lines: Vec<&str> = out.lines().collect();
        assert_eq!(lines.len(), 6); // #line + 5 original lines
    }

    #[test]
    fn test_undef() {
        let mut pp = Preprocessor::new(None, &[], &[("X".into(), "1".into())]);
        let input = "#undef X\n#ifdef X\nyes\n#else\nno\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(!out.contains("yes"));
        assert!(out.contains("no"));
    }

    #[test]
    fn test_or_condition() {
        let mut pp = Preprocessor::new(None, &[], &[("B".into(), "1".into())]);
        let input = "#if defined(A) || defined(B)\nyes\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("yes"));
    }

    #[test]
    fn test_and_condition() {
        let mut pp = Preprocessor::new(
            None,
            &[],
            &[("A".into(), "1".into()), ("B".into(), "1".into())],
        );
        let input = "#if defined(A) && defined(B)\nyes\n#endif\n";
        let out = pp.process(input, "test.asm").unwrap();
        assert!(out.contains("yes"));
    }
}
