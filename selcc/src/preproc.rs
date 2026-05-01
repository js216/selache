// SPDX-License-Identifier: GPL-3.0
// preproc.rs --- C preprocessor
// Copyright (c) 2026 Jakob Kastelic

use std::collections::{HashMap, HashSet};
use std::path::Path;

use crate::error::{Error, Result};

const MAX_INCLUDE_DEPTH: u32 = 200;
const MAX_EXPANSION_DEPTH: u32 = 256;

const BUILTIN_STDARG: &str = include_str!("../../libsel/include/stdarg.h");
const BUILTIN_STDDEF: &str = include_str!("../../libsel/include/stddef.h");
const BUILTIN_STDINT: &str = include_str!("../../libsel/include/stdint.h");
const BUILTIN_STDBOOL: &str = include_str!("../../libsel/include/stdbool.h");
const BUILTIN_COMPLEX: &str = include_str!("../../libsel/include/complex.h");
const BUILTIN_INTTYPES: &str = include_str!("../../libsel/include/inttypes.h");
const BUILTIN_ISO646: &str = include_str!("../../libsel/include/iso646.h");
const BUILTIN_ERRNO: &str = include_str!("../../libsel/include/errno.h");
const BUILTIN_ASSERT: &str = include_str!("../../libsel/include/assert.h");
const BUILTIN_LIMITS: &str = include_str!("../../libsel/include/limits.h");
const BUILTIN_FLOAT: &str = include_str!("../../libsel/include/float.h");
const BUILTIN_MATH: &str = include_str!("../../libsel/include/math.h");
const BUILTIN_STRING: &str = include_str!("../../libsel/include/string.h");
const BUILTIN_CTYPE: &str = include_str!("../../libsel/include/ctype.h");

#[derive(Debug, Clone)]
enum MacroDef {
    Object(String),
    /// Function(params, body, is_variadic).
    Function(Vec<String>, String, bool),
}

pub struct Preprocessor {
    defines: HashMap<String, MacroDef>,
    include_dirs: Vec<String>,
    date: String,
    time: String,
    no_std_inc: bool,
}

impl Default for Preprocessor {
    fn default() -> Self {
        Self::new()
    }
}

impl Preprocessor {
    pub fn new() -> Self {
        let now = std::time::SystemTime::now();
        let secs = now
            .duration_since(std::time::UNIX_EPOCH)
            .unwrap_or_default()
            .as_secs();
        let (date, time) = format_date_time(secs);

        let mut pp = Preprocessor {
            defines: HashMap::new(),
            include_dirs: Vec::new(),
            date,
            time,
            no_std_inc: false,
        };
        // Predefined macros for SHARC processor family compatibility.
        pp.defines.insert(
            "__ADSP21000__".to_string(),
            MacroDef::Object("1".to_string()),
        );
        pp.defines
            .insert("_LANGUAGE_C".to_string(), MacroDef::Object("1".to_string()));
        // Selache compiler identity.
        pp.defines
            .insert("__SELACHE__".to_string(), MacroDef::Object("1".to_string()));
        // SHARC backend identifier (used by adi_types.h and other platform headers).
        pp.defines.insert(
            "__BA_SHARC__".to_string(),
            MacroDef::Object("1".to_string()),
        );
        // Suppress MISRA and other code-analysis pragmas.
        pp.defines.insert(
            "__NO_FLOAT64".to_string(),
            MacroDef::Object("1".to_string()),
        );
        // C99 standard conformance macros.
        pp.defines
            .insert("__STDC__".to_string(), MacroDef::Object("1".to_string()));
        pp.defines.insert(
            "__STDC_VERSION__".to_string(),
            MacroDef::Object("199901L".to_string()),
        );
        // `double` is the 32-bit single-precision type on this
        // target, matching the base SHARC+ C runtime. Platform headers
        // (stdio.h, math.h, ...) use this macro to select 32-bit
        // printf/scanf link-time names such as `_printf32` rather
        // than their 64-bit `_printf64` variants.
        pp.defines.insert(
            "__DOUBLES_ARE_FLOATS__".to_string(),
            MacroDef::Object("1".to_string()),
        );
        pp
    }

    /// Add a predefined macro (-D flag).
    pub fn define(&mut self, name: &str, value: &str) {
        self.defines
            .insert(name.to_string(), MacroDef::Object(value.to_string()));
    }

    /// Remove a macro (-U flag).
    pub fn undefine(&mut self, name: &str) {
        self.defines.remove(name);
    }

    /// Add an include search path (-I flag).
    pub fn add_include_dir(&mut self, dir: &str) {
        self.include_dirs.push(dir.to_string());
    }

    /// Disable selcc's built-in standard headers (-no-std-inc flag).
    /// User `-I` paths become the only source
    /// of `<string.h>`, `<math.h>`, etc. Required when the project
    /// ships its own freestanding replacements (e.g. static inline
    /// implementations of `strcmp`), since otherwise selcc's prototype-
    /// only builtins shadow them and leave unresolved externals at
    /// link time.
    pub fn set_no_std_inc(&mut self, v: bool) {
        self.no_std_inc = v;
    }

    /// Set target processor (defines __ADSP21569__, __ADSP21569_FAMILY__, etc).
    pub fn set_processor(&mut self, proc_name: &str) {
        // Normalize: "ADSP-21569" -> "ADSP21569"
        let normalized = proc_name.replace('-', "");
        let one = MacroDef::Object("1".to_string());
        // Define __ADSP21569__
        self.defines
            .insert(format!("__{normalized}__"), one.clone());
        // Define family macro: __ADSP21569_FAMILY__
        self.defines
            .insert(format!("__{normalized}_FAMILY__"), one.clone());
        // Define series wildcard: __ADSP2156x__ (last digit → 'x')
        // Used for headers shared across a processor series.
        if let Some(prefix) = normalized.strip_suffix(|c: char| c.is_ascii_digit()) {
            let series = format!("__{prefix}x__");
            self.defines.insert(series, one.clone());
        }
        // Define numeric value: __ADSP21569__ = 0x21569
        if let Some(num_str) = normalized.strip_prefix("ADSP") {
            if let Ok(num) = num_str.parse::<u64>() {
                self.defines.insert(
                    format!("__{normalized}__"),
                    MacroDef::Object(format!("0x{num:X}")),
                );
            }
        }
    }

    /// Process source text, resolving all preprocessor directives.
    /// Returns the processed source text.
    pub fn process(&mut self, source: &str, filename: &str) -> Result<String> {
        self.process_inner(source, filename, 0)
    }

    fn process_inner(&mut self, source: &str, filename: &str, depth: u32) -> Result<String> {
        if depth > MAX_INCLUDE_DEPTH {
            return Err(Error::Preprocess {
                file: filename.to_string(),
                line: 0,
                msg: format!("include depth exceeds maximum of {MAX_INCLUDE_DEPTH}"),
            });
        }

        // Translation phase 1: replace trigraph sequences (C99 5.2.1.1).
        let source = replace_trigraphs(source);

        // Normalize line endings and join line continuations.
        let source = source.replace("\r\n", "\n").replace('\r', "\n");
        let source = join_line_continuations(&source);

        let mut output = String::new();
        let mut cond_stack: Vec<CondState> = Vec::new();
        let mut line_num: u32 = 1;
        let mut in_block_comment = false;
        let mut current_filename = filename.to_string();
        // Pending link-name rewrite for the next function declaration,
        // as set by `#pragma function_name NAME`. The pragma applies
        // to the next function declaration in scope -- we scan the
        // next non-blank text line for an identifier immediately
        // followed by `(` and replace it with NAME.
        let mut pending_function_name: Option<String> = None;

        for raw_line in source.split('\n') {
            let current_line = line_num;
            line_num += 1;

            // Strip comments from the line for directive processing.
            let line = strip_comments(raw_line, &mut in_block_comment);
            let trimmed = line.trim();

            // Check if we are in an active section.
            let active = cond_stack.iter().all(|c| c.active);

            // C99 6.4.6: %: is a digraph for #
            if let Some(directive) = trimmed
                .strip_prefix('#')
                .or_else(|| trimmed.strip_prefix("%:"))
            {
                let directive = directive.trim();
                // Conditional directives must always be processed (even in inactive sections).
                if let Some(rest) = strip_directive(directive, "ifdef") {
                    let name = rest.trim();
                    if active {
                        let defined = self.defines.contains_key(name);
                        cond_stack.push(CondState {
                            active: defined,
                            seen_true: defined,
                            parent_active: true,
                        });
                    } else {
                        cond_stack.push(CondState {
                            active: false,
                            seen_true: true,
                            parent_active: false,
                        });
                    }
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "ifndef") {
                    let name = rest.trim();
                    if active {
                        let not_defined = !self.defines.contains_key(name);
                        cond_stack.push(CondState {
                            active: not_defined,
                            seen_true: not_defined,
                            parent_active: true,
                        });
                    } else {
                        cond_stack.push(CondState {
                            active: false,
                            seen_true: true,
                            parent_active: false,
                        });
                    }
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "if") {
                    if active {
                        let val = self.eval_expr(rest.trim(), &current_filename, current_line)?;
                        let is_true = val != 0;
                        cond_stack.push(CondState {
                            active: is_true,
                            seen_true: is_true,
                            parent_active: true,
                        });
                    } else {
                        cond_stack.push(CondState {
                            active: false,
                            seen_true: true,
                            parent_active: false,
                        });
                    }
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "elif") {
                    if let Some(state) = cond_stack.last_mut() {
                        if state.parent_active {
                            if state.seen_true {
                                state.active = false;
                            } else {
                                let val =
                                    self.eval_expr(rest.trim(), &current_filename, current_line)?;
                                let is_true = val != 0;
                                state.active = is_true;
                                if is_true {
                                    state.seen_true = true;
                                }
                            }
                        }
                    } else {
                        return Err(Error::Preprocess {
                            file: current_filename.clone(),
                            line: current_line,
                            msg: "#elif without #if".to_string(),
                        });
                    }
                    output.push('\n');
                    continue;
                }
                if directive == "else" || directive.starts_with("else ") {
                    if let Some(state) = cond_stack.last_mut() {
                        if state.parent_active {
                            state.active = !state.seen_true;
                            state.seen_true = true;
                        }
                    } else {
                        return Err(Error::Preprocess {
                            file: current_filename.clone(),
                            line: current_line,
                            msg: "#else without #if".to_string(),
                        });
                    }
                    output.push('\n');
                    continue;
                }
                if directive == "endif" || directive.starts_with("endif ") {
                    if cond_stack.pop().is_none() {
                        return Err(Error::Preprocess {
                            file: current_filename.clone(),
                            line: current_line,
                            msg: "#endif without #if".to_string(),
                        });
                    }
                    output.push('\n');
                    continue;
                }

                if !active {
                    output.push('\n');
                    continue;
                }

                // Active-only directives.
                if let Some(rest) = strip_directive(directive, "define") {
                    self.handle_define(rest.trim(), &current_filename, current_line)?;
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "undef") {
                    let name = rest.trim();
                    self.defines.remove(name);
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "include") {
                    let included =
                        self.handle_include(rest.trim(), &current_filename, current_line, depth)?;
                    output.push_str(&included);
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "error") {
                    let msg = rest.trim().trim_matches('"');
                    return Err(Error::Preprocess {
                        file: current_filename.clone(),
                        line: current_line,
                        msg: format!("#error {msg}"),
                    });
                }
                if let Some(rest) = strip_directive(directive, "pragma") {
                    // Recognize `#pragma function_name NAME`: the next
                    // function declaration in scope is renamed to NAME
                    // at the linker-symbol level. Every other pragma
                    // is silently ignored.
                    let rest = rest.trim();
                    if let Some(after) = rest.strip_prefix("function_name") {
                        let name = after.trim();
                        if !name.is_empty() {
                            // If multiple function_name pragmas stack
                            // up before a declaration, the most recent
                            // wins.
                            pending_function_name = Some(name.to_string());
                        }
                    }
                    output.push('\n');
                    continue;
                }
                if directive == "pragma" {
                    output.push('\n');
                    continue;
                }
                if let Some(rest) = strip_directive(directive, "line") {
                    // Parse #line NUMBER ["FILENAME"]
                    let rest = rest.trim();
                    let (num_str, after_num) = match rest.find(|c: char| !c.is_ascii_digit()) {
                        Some(pos) => (&rest[..pos], rest[pos..].trim()),
                        None => (rest, ""),
                    };
                    if let Ok(n) = num_str.parse::<u32>() {
                        // Set line_num so the NEXT line has this number.
                        line_num = n;
                    }
                    if let Some(stripped) = after_num.strip_prefix('"') {
                        if let Some(end) = stripped.find('"') {
                            current_filename = stripped[..end].to_string();
                        }
                    }
                    output.push('\n');
                    continue;
                }
                // Unknown directive in active section -- ignore with blank line.
                output.push('\n');
                continue;
            }

            if !active {
                output.push('\n');
                continue;
            }

            // A pending `#pragma function_name NAME` rewrite applies
            // to the next function declaration. Scan the raw line for
            // an identifier immediately followed by `(` (the classic
            // `TYPE ident(params)` form) and, on a match, install an
            // object macro `ident -> NAME` so every textual use of
            // `ident` in the source -- including later calls -- maps
            // to the chosen link-time name. Blank lines and lines
            // without a candidate skip the scan so the pragma rides
            // forward to the next candidate line.
            if pending_function_name.is_some() && !line.trim().is_empty() {
                if let Some(old_ident) = scan_function_decl_ident(&line) {
                    let new_name = pending_function_name.take().unwrap();
                    // Install as an object-like macro. Self-reference
                    // is impossible because `old_ident != new_name`
                    // for every real pragma: `#pragma function_name X`
                    // followed by `int X(...)` would be a no-op rename.
                    if old_ident != new_name {
                        self.defines.insert(old_ident, MacroDef::Object(new_name));
                    }
                }
            }

            // Regular line: expand macros and emit (use comment-stripped version).
            let expanded = self.expand_macros(&line, &current_filename, current_line)?;
            output.push_str(&expanded);
            output.push('\n');
        }

        if !cond_stack.is_empty() {
            return Err(Error::Preprocess {
                file: current_filename.clone(),
                line: line_num.saturating_sub(1),
                msg: format!(
                    "unterminated conditional ({} level(s) open)",
                    cond_stack.len()
                ),
            });
        }

        // Remove trailing newline if the original didn't end with one.
        if !source.ends_with('\n') && output.ends_with('\n') {
            output.pop();
        }

        Ok(output)
    }

    fn handle_define(&mut self, rest: &str, filename: &str, line: u32) -> Result<()> {
        if rest.is_empty() {
            return Err(Error::Preprocess {
                file: filename.to_string(),
                line,
                msg: "#define with no name".to_string(),
            });
        }

        // Extract the macro name.
        let name_end = rest
            .find(|c: char| !c.is_ascii_alphanumeric() && c != '_')
            .unwrap_or(rest.len());
        let name = &rest[..name_end];
        let after_name = &rest[name_end..];

        // Function-like macro: name immediately followed by '('.
        if after_name.starts_with('(') {
            let close = after_name.find(')');
            if let Some(close_idx) = close {
                let params_str = &after_name[1..close_idx];
                let mut params: Vec<String> = params_str
                    .split(',')
                    .map(|s| s.trim().to_string())
                    .filter(|s| !s.is_empty())
                    .collect();
                // Detect variadic: last param is "..." or ends with "..."
                let variadic = params
                    .last()
                    .is_some_and(|p| p == "..." || p.ends_with("..."));
                if variadic {
                    let last = params.last_mut().unwrap();
                    if *last == "..." {
                        params.pop();
                    } else if let Some(stripped) = last.strip_suffix("...") {
                        *last = stripped.trim().to_string();
                    }
                }
                let body = after_name[close_idx + 1..].trim().to_string();
                self.defines
                    .insert(name.to_string(), MacroDef::Function(params, body, variadic));
            } else {
                return Err(Error::Preprocess {
                    file: filename.to_string(),
                    line,
                    msg: "unterminated parameter list in #define".to_string(),
                });
            }
        } else {
            // Object-like macro.
            let value = after_name.trim().to_string();
            self.defines
                .insert(name.to_string(), MacroDef::Object(value));
        }
        Ok(())
    }

    fn builtin_header(name: &str) -> Option<&'static str> {
        match name {
            "stdarg.h" => Some(BUILTIN_STDARG),
            "stddef.h" => Some(BUILTIN_STDDEF),
            "stdint.h" => Some(BUILTIN_STDINT),
            "stdbool.h" => Some(BUILTIN_STDBOOL),
            "limits.h" => Some(BUILTIN_LIMITS),
            "float.h" => Some(BUILTIN_FLOAT),
            "math.h" => Some(BUILTIN_MATH),
            "complex.h" => Some(BUILTIN_COMPLEX),
            "inttypes.h" => Some(BUILTIN_INTTYPES),
            "iso646.h" => Some(BUILTIN_ISO646),
            "errno.h" => Some(BUILTIN_ERRNO),
            "assert.h" => Some(BUILTIN_ASSERT),
            "string.h" => Some(BUILTIN_STRING),
            "ctype.h" => Some(BUILTIN_CTYPE),
            _ => None,
        }
    }

    fn handle_include(
        &mut self,
        rest: &str,
        filename: &str,
        line: u32,
        depth: u32,
    ) -> Result<String> {
        let (inc_file, search_local) = if let Some(after_quote) = rest.strip_prefix('"') {
            if let Some(end_idx) = after_quote.find('"') {
                (after_quote[..end_idx].to_string(), true)
            } else {
                return Err(Error::Preprocess {
                    file: filename.to_string(),
                    line,
                    msg: "unterminated #include filename".to_string(),
                });
            }
        } else if rest.starts_with('<') {
            if let Some(end_idx) = rest.find('>') {
                (rest[1..end_idx].to_string(), false)
            } else {
                return Err(Error::Preprocess {
                    file: filename.to_string(),
                    line,
                    msg: "unterminated #include filename".to_string(),
                });
            }
        } else {
            // C99 6.10.2: macro-expand the argument and retry.
            let expanded_owned = self.expand_macros(rest, filename, line)?;
            let expanded = expanded_owned.trim();
            if let Some(after_quote) = expanded.strip_prefix('"') {
                if let Some(end_idx) = after_quote.find('"') {
                    (after_quote[..end_idx].to_string(), true)
                } else {
                    return Err(Error::Preprocess {
                        file: filename.to_string(),
                        line,
                        msg: "unterminated #include filename after macro expansion".to_string(),
                    });
                }
            } else if expanded.starts_with('<') {
                if let Some(end_idx) = expanded.find('>') {
                    (expanded[1..end_idx].to_string(), false)
                } else {
                    return Err(Error::Preprocess {
                        file: filename.to_string(),
                        line,
                        msg: "unterminated #include filename after macro expansion".to_string(),
                    });
                }
            } else {
                return Err(Error::Preprocess {
                    file: filename.to_string(),
                    line,
                    msg: format!("invalid #include syntax: {rest}"),
                });
            }
        };

        // Normalize backslash paths (Windows-style) to forward slashes.
        let inc_file = inc_file.replace('\\', "/");

        // For system includes (<...>), the selache builtin C standard
        // headers take priority over any filesystem path. External
        // system headers often inline helper functions that name
        // intrinsics this compiler does not model, so using them would
        // pull in unresolvable symbols whenever any transitive
        // `#include <math.h>`, `#include <stdint.h>`, etc. appears in
        // the source.
        if !search_local && !self.no_std_inc {
            if let Some(content) = Self::builtin_header(&inc_file) {
                return self.process_inner(content, &inc_file, depth + 1);
            }
        }

        // Search for the file on the configured include path.
        let mut search_dirs: Vec<String> = Vec::new();
        if search_local {
            // For "file" includes, search relative to the including file first.
            if let Some(parent) = Path::new(filename).parent() {
                search_dirs.push(parent.to_string_lossy().into_owned());
            }
        }
        search_dirs.extend(self.include_dirs.clone());

        for dir in &search_dirs {
            let path = Path::new(dir).join(&inc_file);
            if path.exists() {
                let raw = std::fs::read(&path).map_err(|e| Error::Preprocess {
                    file: filename.to_string(),
                    line,
                    msg: format!("cannot read {}: {e}", path.display()),
                })?;
                let content = String::from_utf8_lossy(&raw).into_owned();
                let path_str = path.to_string_lossy().into_owned();
                return self.process_inner(&content, &path_str, depth + 1);
            }
        }

        // Quoted ("...") include fallback: try builtin headers last.
        if !self.no_std_inc {
            if let Some(content) = Self::builtin_header(&inc_file) {
                return self.process_inner(content, &inc_file, depth + 1);
            }
        }

        Err(Error::Preprocess {
            file: filename.to_string(),
            line,
            msg: format!("cannot find include file: {inc_file}"),
        })
    }

    fn expand_macros(&self, line: &str, filename: &str, line_num: u32) -> Result<String> {
        let expanding: HashSet<String> = HashSet::new();
        self.expand_macros_inner(line, filename, line_num, &expanding, 0)
    }

    fn expand_macros_inner(
        &self,
        text: &str,
        filename: &str,
        line_num: u32,
        expanding: &HashSet<String>,
        depth: u32,
    ) -> Result<String> {
        if depth > MAX_EXPANSION_DEPTH {
            return Err(Error::Preprocess {
                file: filename.to_string(),
                line: line_num,
                msg: "macro expansion depth limit exceeded".to_string(),
            });
        }

        let mut result = String::new();
        let bytes = text.as_bytes();
        let mut i = 0;

        while i < bytes.len() {
            // Skip string literals.
            if bytes[i] == b'"' {
                result.push('"');
                i += 1;
                while i < bytes.len() && bytes[i] != b'"' {
                    if bytes[i] == b'\\' && i + 1 < bytes.len() {
                        result.push(bytes[i] as char);
                        i += 1;
                        result.push(bytes[i] as char);
                        i += 1;
                    } else {
                        result.push(bytes[i] as char);
                        i += 1;
                    }
                }
                if i < bytes.len() {
                    result.push('"');
                    i += 1;
                }
                continue;
            }

            // Skip character literals.
            if bytes[i] == b'\'' {
                result.push('\'');
                i += 1;
                while i < bytes.len() && bytes[i] != b'\'' {
                    if bytes[i] == b'\\' && i + 1 < bytes.len() {
                        result.push(bytes[i] as char);
                        i += 1;
                        result.push(bytes[i] as char);
                        i += 1;
                    } else {
                        result.push(bytes[i] as char);
                        i += 1;
                    }
                }
                if i < bytes.len() {
                    result.push('\'');
                    i += 1;
                }
                continue;
            }

            // Identifier?
            if bytes[i].is_ascii_alphabetic() || bytes[i] == b'_' {
                let start = i;
                while i < bytes.len() && (bytes[i].is_ascii_alphanumeric() || bytes[i] == b'_') {
                    i += 1;
                }
                let ident = &text[start..i];

                // Handle _Pragma operator (C99 6.10.9).
                // Destringify the argument and silently consume it (we ignore pragmas).
                if ident == "_Pragma" {
                    let mut j = i;
                    while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                        j += 1;
                    }
                    if j < bytes.len() && bytes[j] == b'(' {
                        let (_args, end) = collect_macro_args(text, j)?;
                        i = end;
                    }
                    // _Pragma is consumed; emit nothing.
                    continue;
                }

                // Handle built-in macros.
                match ident {
                    "__LINE__" => {
                        result.push_str(&line_num.to_string());
                        continue;
                    }
                    "__FILE__" => {
                        result.push('"');
                        result.push_str(filename);
                        result.push('"');
                        continue;
                    }
                    "__DATE__" => {
                        result.push('"');
                        result.push_str(&self.date);
                        result.push('"');
                        continue;
                    }
                    "__TIME__" => {
                        result.push('"');
                        result.push_str(&self.time);
                        result.push('"');
                        continue;
                    }
                    _ => {}
                }

                if expanding.contains(ident) {
                    // Already expanding this macro, emit literally.
                    result.push_str(ident);
                    continue;
                }

                if let Some(def) = self.defines.get(ident) {
                    match def.clone() {
                        MacroDef::Object(value) => {
                            let mut new_expanding = expanding.clone();
                            new_expanding.insert(ident.to_string());
                            let expanded = self.expand_macros_inner(
                                &value,
                                filename,
                                line_num,
                                &new_expanding,
                                depth + 1,
                            )?;
                            result.push_str(&expanded);
                        }
                        MacroDef::Function(params, body, variadic) => {
                            // Look for '(' after optional whitespace.
                            let mut j = i;
                            while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                                j += 1;
                            }
                            if j < bytes.len() && bytes[j] == b'(' {
                                // Collect arguments.
                                let (args, end) = collect_macro_args(text, j)?;
                                i = end;
                                // Pre-expand arguments for use in
                                // parameter positions that are not
                                // adjacent to # or ## (C99 6.10.3.1:
                                // arguments get rescanned before
                                // substitution unless they feed
                                // stringification or token-paste).
                                let mut expanded_args = Vec::with_capacity(args.len());
                                for arg in &args {
                                    let ea = self.expand_macros_inner(
                                        arg,
                                        filename,
                                        line_num,
                                        expanding,
                                        depth + 1,
                                    )?;
                                    expanded_args.push(ea);
                                }
                                let expanded_body = substitute_params(
                                    &body,
                                    &params,
                                    &args,
                                    &expanded_args,
                                    variadic,
                                );
                                let mut new_expanding = expanding.clone();
                                new_expanding.insert(ident.to_string());
                                let expanded = self.expand_macros_inner(
                                    &expanded_body,
                                    filename,
                                    line_num,
                                    &new_expanding,
                                    depth + 1,
                                )?;
                                result.push_str(&expanded);
                            } else {
                                // No args, emit the name literally.
                                result.push_str(ident);
                            }
                        }
                    }
                    continue;
                }

                result.push_str(ident);
                continue;
            }

            result.push(bytes[i] as char);
            i += 1;
        }

        Ok(result)
    }

    fn eval_expr(&self, expr: &str, filename: &str, line: u32) -> Result<i64> {
        // Handle defined(NAME) BEFORE macro expansion (so the name isn't replaced).
        let with_defined = self.replace_defined_operator(expr);

        // Now expand macros in the expression.
        let empty_set = HashSet::new();
        let expanded = self.expand_macros_inner(&with_defined, filename, line, &empty_set, 0)?;

        // Replace any remaining identifiers with 0 (per C spec).
        let final_expr = replace_remaining_idents(&expanded);

        eval_const_expr(&final_expr, filename, line)
    }

    fn replace_defined_operator(&self, expr: &str) -> String {
        let mut result = String::new();
        let bytes = expr.as_bytes();
        let mut i = 0;

        while i < bytes.len() {
            if i + 7 <= bytes.len() && &expr[i..i + 7] == "defined" {
                // Check that it's a word boundary.
                let before_ok =
                    i == 0 || !bytes[i - 1].is_ascii_alphanumeric() && bytes[i - 1] != b'_';
                let after_pos = i + 7;
                let after_ok = after_pos >= bytes.len()
                    || !bytes[after_pos].is_ascii_alphanumeric() && bytes[after_pos] != b'_';

                if before_ok && after_ok {
                    let mut j = after_pos;
                    // Skip whitespace.
                    while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                        j += 1;
                    }
                    if j < bytes.len() && bytes[j] == b'(' {
                        j += 1;
                        while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                            j += 1;
                        }
                        let name_start = j;
                        while j < bytes.len()
                            && (bytes[j].is_ascii_alphanumeric() || bytes[j] == b'_')
                        {
                            j += 1;
                        }
                        let name = &expr[name_start..j];
                        while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                            j += 1;
                        }
                        if j < bytes.len() && bytes[j] == b')' {
                            j += 1;
                        }
                        let val = if self.defines.contains_key(name) {
                            "1"
                        } else {
                            "0"
                        };
                        result.push_str(val);
                        i = j;
                        continue;
                    } else if j < bytes.len()
                        && (bytes[j].is_ascii_alphabetic() || bytes[j] == b'_')
                    {
                        // defined NAME (without parens).
                        let name_start = j;
                        while j < bytes.len()
                            && (bytes[j].is_ascii_alphanumeric() || bytes[j] == b'_')
                        {
                            j += 1;
                        }
                        let name = &expr[name_start..j];
                        let val = if self.defines.contains_key(name) {
                            "1"
                        } else {
                            "0"
                        };
                        result.push_str(val);
                        i = j;
                        continue;
                    }
                }
            }

            if bytes[i].is_ascii_alphabetic() || bytes[i] == b'_' {
                let start = i;
                while i < bytes.len() && (bytes[i].is_ascii_alphanumeric() || bytes[i] == b'_') {
                    i += 1;
                }
                result.push_str(&expr[start..i]);
                continue;
            }

            result.push(bytes[i] as char);
            i += 1;
        }

        result
    }
}

struct CondState {
    active: bool,
    seen_true: bool,
    parent_active: bool,
}

/// Replace trigraph sequences with their single-character equivalents (C99 5.2.1.1).
/// This is translation phase 1, before any other processing.
fn replace_trigraphs(source: &str) -> String {
    let bytes = source.as_bytes();
    let mut result = String::with_capacity(source.len());
    let mut i = 0;
    while i < bytes.len() {
        if i + 2 < bytes.len() && bytes[i] == b'?' && bytes[i + 1] == b'?' {
            let replacement = match bytes[i + 2] {
                b'=' => Some(b'#'),
                b'/' => Some(b'\\'),
                b'\'' => Some(b'^'),
                b'(' => Some(b'['),
                b')' => Some(b']'),
                b'!' => Some(b'|'),
                b'<' => Some(b'{'),
                b'>' => Some(b'}'),
                b'-' => Some(b'~'),
                _ => None,
            };
            if let Some(ch) = replacement {
                result.push(ch as char);
                i += 3;
                continue;
            }
        }
        result.push(bytes[i] as char);
        i += 1;
    }
    result
}

/// Join backslash-newline continuations.
fn join_line_continuations(source: &str) -> String {
    let mut result = String::with_capacity(source.len());
    let bytes = source.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] == b'\\' && i + 1 < bytes.len() && bytes[i + 1] == b'\n' {
            // Skip backslash and newline.
            i += 2;
        } else if bytes[i] == b'\\'
            && i + 2 < bytes.len()
            && bytes[i + 1] == b'\r'
            && bytes[i + 2] == b'\n'
        {
            i += 3;
        } else {
            result.push(bytes[i] as char);
            i += 1;
        }
    }
    result
}

/// Strip C and C++ comments from a line, preserving string literals.
fn strip_comments(line: &str, in_block_comment: &mut bool) -> String {
    let mut result = String::new();
    let bytes = line.as_bytes();
    let mut i = 0;

    while i < bytes.len() {
        if *in_block_comment {
            // Inside a multi-line block comment — scan for */
            if bytes[i] == b'*' && i + 1 < bytes.len() && bytes[i + 1] == b'/' {
                *in_block_comment = false;
                i += 2;
                result.push(' ');
            } else {
                i += 1;
            }
        } else if bytes[i] == b'"' {
            result.push('"');
            i += 1;
            while i < bytes.len() && bytes[i] != b'"' {
                if bytes[i] == b'\\' && i + 1 < bytes.len() {
                    result.push(bytes[i] as char);
                    i += 1;
                    result.push(bytes[i] as char);
                    i += 1;
                } else {
                    result.push(bytes[i] as char);
                    i += 1;
                }
            }
            if i < bytes.len() {
                result.push('"');
                i += 1;
            }
        } else if bytes[i] == b'\'' {
            result.push('\'');
            i += 1;
            while i < bytes.len() && bytes[i] != b'\'' {
                if bytes[i] == b'\\' && i + 1 < bytes.len() {
                    result.push(bytes[i] as char);
                    i += 1;
                    result.push(bytes[i] as char);
                    i += 1;
                } else {
                    result.push(bytes[i] as char);
                    i += 1;
                }
            }
            if i < bytes.len() {
                result.push('\'');
                i += 1;
            }
        } else if bytes[i] == b'/' && i + 1 < bytes.len() && bytes[i + 1] == b'/' {
            break; // line comment
        } else if bytes[i] == b'/' && i + 1 < bytes.len() && bytes[i + 1] == b'*' {
            i += 2;
            // Scan for */ on same line
            let mut found = false;
            while i + 1 < bytes.len() {
                if bytes[i] == b'*' && bytes[i + 1] == b'/' {
                    i += 2;
                    found = true;
                    break;
                }
                i += 1;
            }
            if !found {
                *in_block_comment = true;
                i = bytes.len();
            }
            result.push(' ');
        } else {
            result.push(bytes[i] as char);
            i += 1;
        }
    }

    result
}

/// Strip a directive keyword from the start of a directive line.
/// Returns the remainder after the keyword if it matches.
/// Scan `line` for the function-declaration identifier targeted by a
/// `#pragma function_name NAME` rewrite. Returns the declarator
/// identifier (e.g. `"printf"` for `int printf(const char*, ...)`) or
/// `None` when the line holds no candidate.
///
/// The target identifier is the leftmost non-keyword identifier that
/// is immediately (optionally across whitespace) followed by `(` --
/// the classic C declaration form `TYPE ident(params)`. Keywords,
/// primitive types, and the well-known typedef `FILE` are skipped so
/// declarators like `int fprintf(FILE*, ...)` resolve to `fprintf`
/// rather than `int` or `FILE`. Lines whose first `(` belongs to an
/// expression, cast, or macro invocation return `None` so the caller
/// can leave the pragma pending for the next candidate line.
fn scan_function_decl_ident(line: &str) -> Option<String> {
    let bytes = line.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        let b = bytes[i];
        if b.is_ascii_alphabetic() || b == b'_' {
            // Start of an identifier.
            let start = i;
            i += 1;
            while i < bytes.len() {
                let c = bytes[i];
                if c.is_ascii_alphanumeric() || c == b'_' {
                    i += 1;
                } else {
                    break;
                }
            }
            let end = i;
            // Skip whitespace to look for `(`.
            let mut j = end;
            while j < bytes.len() && (bytes[j] == b' ' || bytes[j] == b'\t') {
                j += 1;
            }
            if j < bytes.len() && bytes[j] == b'(' {
                let ident = &line[start..end];
                if !is_c_keyword_or_type(ident) {
                    return Some(ident.to_string());
                }
            }
            continue;
        }
        i += 1;
    }
    None
}

/// Identifiers that are never the target of a function_name rewrite:
/// C reserved words, primitive types, and common type qualifiers.
/// Any token in this set that appears before `(` on the rewrite line
/// is a type or keyword (e.g. `int printf(...)`, `void f(void)`), not
/// a declarator; the scanner must skip past it.
fn is_c_keyword_or_type(ident: &str) -> bool {
    matches!(
        ident,
        "void"
            | "char"
            | "short"
            | "int"
            | "long"
            | "float"
            | "double"
            | "signed"
            | "unsigned"
            | "_Bool"
            | "bool"
            | "size_t"
            | "ssize_t"
            | "ptrdiff_t"
            | "wchar_t"
            | "const"
            | "volatile"
            | "restrict"
            | "static"
            | "extern"
            | "auto"
            | "register"
            | "inline"
            | "_Complex"
            | "_Imaginary"
            | "struct"
            | "union"
            | "enum"
            | "typedef"
            | "if"
            | "else"
            | "while"
            | "for"
            | "do"
            | "switch"
            | "case"
            | "default"
            | "break"
            | "continue"
            | "goto"
            | "return"
            | "sizeof"
            | "typeof"
            | "FILE"
    )
}

fn strip_directive<'a>(directive: &'a str, keyword: &str) -> Option<&'a str> {
    if let Some(rest) = directive.strip_prefix(keyword) {
        if rest.is_empty() {
            return Some(rest);
        }
        let first = rest.as_bytes()[0];
        if first == b' ' || first == b'\t' {
            return Some(rest.trim_start());
        }
        // For function-like macros: #define NAME(...
        if keyword == "define" && (first.is_ascii_alphanumeric() || first == b'_') {
            return None;
        }
    }
    None
}

/// Collect function-like macro arguments from text starting at the open paren.
fn collect_macro_args(text: &str, open: usize) -> Result<(Vec<String>, usize)> {
    let bytes = text.as_bytes();
    let mut args = Vec::new();
    let mut depth = 0;
    let mut current = String::new();
    let mut i = open + 1; // skip '('
    depth += 1;

    while i < bytes.len() && depth > 0 {
        match bytes[i] {
            b'(' => {
                depth += 1;
                current.push('(');
                i += 1;
            }
            b')' => {
                depth -= 1;
                if depth == 0 {
                    args.push(current.trim().to_string());
                    i += 1;
                    break;
                }
                current.push(')');
                i += 1;
            }
            b',' if depth == 1 => {
                args.push(current.trim().to_string());
                current = String::new();
                i += 1;
            }
            b'"' => {
                current.push('"');
                i += 1;
                while i < bytes.len() && bytes[i] != b'"' {
                    if bytes[i] == b'\\' && i + 1 < bytes.len() {
                        current.push(bytes[i] as char);
                        i += 1;
                        current.push(bytes[i] as char);
                        i += 1;
                    } else {
                        current.push(bytes[i] as char);
                        i += 1;
                    }
                }
                if i < bytes.len() {
                    current.push('"');
                    i += 1;
                }
            }
            _ => {
                current.push(bytes[i] as char);
                i += 1;
            }
        }
    }

    // Handle empty args: MAX() should yield no args, not one empty arg.
    if args.len() == 1 && args[0].is_empty() {
        args.clear();
    }

    Ok((args, i))
}

/// Wrap argument text in double quotes, escaping backslash and double-quote.
fn stringify_arg(arg: &str) -> String {
    let mut s = String::with_capacity(arg.len() + 2);
    s.push('"');
    for ch in arg.chars() {
        if ch == '\\' || ch == '"' {
            s.push('\\');
        }
        s.push(ch);
    }
    s.push('"');
    s
}

/// Substitute parameters in a function-like macro body.
// Return true if the identifier spanning bytes[start..end] in the
// macro body is immediately adjacent (after skipping whitespace
// only) to a ## token paste operator -- either the `##` digraph or
// `%:%:`. Parameters in such positions must be substituted with
// raw (unexpanded) argument text per C99 6.10.3.1.
fn is_adjacent_to_paste(bytes: &[u8], start: usize, end: usize) -> bool {
    // Look backwards from `start` past whitespace.
    let mut b = start;
    while b > 0 && (bytes[b - 1] == b' ' || bytes[b - 1] == b'\t') {
        b -= 1;
    }
    if b >= 2 && bytes[b - 1] == b'#' && bytes[b - 2] == b'#' {
        return true;
    }
    if b >= 4
        && bytes[b - 1] == b':'
        && bytes[b - 2] == b'%'
        && bytes[b - 3] == b':'
        && bytes[b - 4] == b'%'
    {
        return true;
    }
    // Look forwards from `end` past whitespace.
    let mut f = end;
    while f < bytes.len() && (bytes[f] == b' ' || bytes[f] == b'\t') {
        f += 1;
    }
    if f + 1 < bytes.len() && bytes[f] == b'#' && bytes[f + 1] == b'#' {
        return true;
    }
    if f + 3 < bytes.len()
        && bytes[f] == b'%'
        && bytes[f + 1] == b':'
        && bytes[f + 2] == b'%'
        && bytes[f + 3] == b':'
    {
        return true;
    }
    false
}

fn substitute_params(
    body: &str,
    params: &[String],
    args: &[String],
    expanded_args: &[String],
    variadic: bool,
) -> String {
    // Build the variadic argument text (trailing args beyond named params).
    let va_args_text = if variadic && args.len() > params.len() {
        args[params.len()..].join(", ")
    } else {
        String::new()
    };
    let va_args_expanded = if variadic && expanded_args.len() > params.len() {
        expanded_args[params.len()..].join(", ")
    } else {
        String::new()
    };
    let has_va_args = variadic;

    // Pass 1: substitute parameter names, __VA_ARGS__, and # (stringify).
    let mut result = String::new();
    let bytes = body.as_bytes();
    let mut i = 0;

    while i < bytes.len() {
        // Handle # stringify operator (but not ## or digraph %:%:).
        // Also recognize digraph %: as # (but not %:%: which is ##).
        let is_stringify_hash = bytes[i] == b'#'
            && (i + 1 >= bytes.len() || bytes[i + 1] != b'#')
            && (i == 0 || bytes[i - 1] != b'#');
        let is_stringify_digraph = bytes[i] == b'%'
            && i + 1 < bytes.len()
            && bytes[i + 1] == b':'
            && !(i + 3 < bytes.len() && bytes[i + 2] == b'%' && bytes[i + 3] == b':');
        if is_stringify_hash || is_stringify_digraph {
            let hash_pos = i;
            let hash_len: usize = if is_stringify_digraph { 2 } else { 1 };
            i += hash_len;
            // Skip whitespace after # (or %:).
            while i < bytes.len() && (bytes[i] == b' ' || bytes[i] == b'\t') {
                i += 1;
            }
            // Check if followed by an identifier.
            if i < bytes.len() && (bytes[i].is_ascii_alphabetic() || bytes[i] == b'_') {
                let id_start = i;
                while i < bytes.len() && (bytes[i].is_ascii_alphanumeric() || bytes[i] == b'_') {
                    i += 1;
                }
                let ident = &body[id_start..i];
                if has_va_args && ident == "__VA_ARGS__" {
                    result.push_str(&stringify_arg(&va_args_text));
                    continue;
                }
                if let Some(pos) = params.iter().position(|p| p == ident) {
                    let arg_text = if pos < args.len() { &args[pos] } else { "" };
                    result.push_str(&stringify_arg(arg_text));
                    continue;
                }
                // Not a param, emit # (or %:) and the identifier literally.
                result.push_str(&body[hash_pos..hash_pos + hash_len]);
                result.push_str(ident);
                continue;
            }
            // Not followed by an identifier; emit # (or %:) literally.
            i = hash_pos + hash_len;
            result.push_str(&body[hash_pos..hash_pos + hash_len]);
            continue;
        }

        if bytes[i].is_ascii_alphabetic() || bytes[i] == b'_' {
            let start = i;
            while i < bytes.len() && (bytes[i].is_ascii_alphanumeric() || bytes[i] == b'_') {
                i += 1;
            }
            let ident = &body[start..i];
            // Look at the non-whitespace token before `start` and
            // after `i` in the body to decide whether this parameter
            // occurrence is adjacent to ## (or the %:%: digraph). If
            // it is, the raw argument text must be substituted; if
            // not, the pre-expanded argument text must be used so
            // that later rescans see macro expansion of nested names.
            let adjacent_to_paste = is_adjacent_to_paste(bytes, start, i);
            if has_va_args && ident == "__VA_ARGS__" {
                if adjacent_to_paste {
                    result.push_str(&va_args_text);
                } else {
                    result.push_str(&va_args_expanded);
                }
            } else if let Some(pos) = params.iter().position(|p| p == ident) {
                let src = if adjacent_to_paste {
                    args
                } else {
                    expanded_args
                };
                if pos < src.len() {
                    result.push_str(&src[pos]);
                }
            } else {
                result.push_str(ident);
            }
        } else {
            result.push(bytes[i] as char);
            i += 1;
        }
    }

    // Pass 2: handle ## token paste (and digraph %:%:).
    if !result.contains("##") && !result.contains("%:%:") {
        return result;
    }
    let subst = result;
    let mut result = String::new();
    let sb = subst.as_bytes();
    i = 0;
    while i < sb.len() {
        // Match ## or digraph %:%:
        let paste_len = if i + 1 < sb.len() && sb[i] == b'#' && sb[i + 1] == b'#' {
            2
        } else if i + 3 < sb.len()
            && sb[i] == b'%'
            && sb[i + 1] == b':'
            && sb[i + 2] == b'%'
            && sb[i + 3] == b':'
        {
            4
        } else {
            0
        };
        if paste_len > 0 {
            // Trim trailing whitespace from result (left operand).
            while result.ends_with(' ') || result.ends_with('\t') {
                result.pop();
            }
            // Skip the ## (or %:%:) and any following whitespace.
            i += paste_len;
            while i < sb.len() && (sb[i] == b' ' || sb[i] == b'\t') {
                i += 1;
            }
            // GNU extension: if left side ends with comma and right side is
            // empty (variadic args were empty), elide the comma.
            if result.ends_with(',') {
                let rest_start = i;
                let mut j = i;
                while j < sb.len() && (sb[j].is_ascii_alphanumeric() || sb[j] == b'_') {
                    j += 1;
                }
                let right_token = &subst[rest_start..j];
                if right_token.is_empty() {
                    result.pop();
                    while result.ends_with(' ') || result.ends_with('\t') {
                        result.pop();
                    }
                }
            }
        } else {
            result.push(sb[i] as char);
            i += 1;
        }
    }

    result
}

/// Replace remaining identifiers with 0 (C preprocessor spec for #if expressions).
fn replace_remaining_idents(expr: &str) -> String {
    let mut result = String::new();
    let bytes = expr.as_bytes();
    let mut i = 0;

    while i < bytes.len() {
        // Preserve character literals (e.g. 'A', '\n').
        if bytes[i] == b'\'' {
            result.push('\'');
            i += 1;
            while i < bytes.len() && bytes[i] != b'\'' {
                if bytes[i] == b'\\' && i + 1 < bytes.len() {
                    result.push(bytes[i] as char);
                    i += 1;
                    result.push(bytes[i] as char);
                    i += 1;
                } else {
                    result.push(bytes[i] as char);
                    i += 1;
                }
            }
            if i < bytes.len() {
                result.push('\'');
                i += 1;
            }
        } else if bytes[i].is_ascii_alphabetic() || bytes[i] == b'_' {
            let start = i;
            while i < bytes.len() && (bytes[i].is_ascii_alphanumeric() || bytes[i] == b'_') {
                i += 1;
            }
            // Replace unknown identifiers with 0.
            result.push('0');
            let _ = &expr[start..i]; // consume
        } else {
            result.push(bytes[i] as char);
            i += 1;
        }
    }

    result
}

/// Evaluate a constant expression (integers, operators, parentheses).
fn eval_const_expr(expr: &str, filename: &str, line: u32) -> Result<i64> {
    let tokens = tokenize_expr(expr);
    let mut pos = 0;
    let result = parse_or(&tokens, &mut pos, filename, line)?;
    Ok(result)
}

#[derive(Debug, Clone)]
enum ExprToken {
    Num(i64),
    Op(String),
    LParen,
    RParen,
}

fn tokenize_expr(expr: &str) -> Vec<ExprToken> {
    let mut tokens = Vec::new();
    let bytes = expr.as_bytes();
    let mut i = 0;

    while i < bytes.len() {
        match bytes[i] {
            b' ' | b'\t' => i += 1,
            b'0'..=b'9' => {
                let start = i;
                // Handle hex.
                if bytes[i] == b'0'
                    && i + 1 < bytes.len()
                    && (bytes[i + 1] == b'x' || bytes[i + 1] == b'X')
                {
                    i += 2;
                    while i < bytes.len() && bytes[i].is_ascii_hexdigit() {
                        i += 1;
                    }
                    let s = &expr[start..i];
                    let val = i64::from_str_radix(&s[2..], 16).unwrap_or(0);
                    tokens.push(ExprToken::Num(val));
                } else {
                    while i < bytes.len() && bytes[i].is_ascii_digit() {
                        i += 1;
                    }
                    // Skip integer suffixes (L, U, LL, etc.).
                    while i < bytes.len()
                        && (bytes[i] == b'L'
                            || bytes[i] == b'l'
                            || bytes[i] == b'U'
                            || bytes[i] == b'u')
                    {
                        i += 1;
                    }
                    let s = &expr[start..i].trim_end_matches(['L', 'l', 'U', 'u']);
                    let val: i64 = s.parse().unwrap_or(0);
                    tokens.push(ExprToken::Num(val));
                }
            }
            b'(' => {
                tokens.push(ExprToken::LParen);
                i += 1;
            }
            b')' => {
                tokens.push(ExprToken::RParen);
                i += 1;
            }
            b'&' if i + 1 < bytes.len() && bytes[i + 1] == b'&' => {
                tokens.push(ExprToken::Op("&&".to_string()));
                i += 2;
            }
            b'|' if i + 1 < bytes.len() && bytes[i + 1] == b'|' => {
                tokens.push(ExprToken::Op("||".to_string()));
                i += 2;
            }
            b'=' if i + 1 < bytes.len() && bytes[i + 1] == b'=' => {
                tokens.push(ExprToken::Op("==".to_string()));
                i += 2;
            }
            b'!' if i + 1 < bytes.len() && bytes[i + 1] == b'=' => {
                tokens.push(ExprToken::Op("!=".to_string()));
                i += 2;
            }
            b'<' if i + 1 < bytes.len() && bytes[i + 1] == b'=' => {
                tokens.push(ExprToken::Op("<=".to_string()));
                i += 2;
            }
            b'>' if i + 1 < bytes.len() && bytes[i + 1] == b'=' => {
                tokens.push(ExprToken::Op(">=".to_string()));
                i += 2;
            }
            b'<' if i + 1 < bytes.len() && bytes[i + 1] == b'<' => {
                tokens.push(ExprToken::Op("<<".to_string()));
                i += 2;
            }
            b'>' if i + 1 < bytes.len() && bytes[i + 1] == b'>' => {
                tokens.push(ExprToken::Op(">>".to_string()));
                i += 2;
            }
            b'+' | b'-' | b'*' | b'/' | b'%' | b'<' | b'>' | b'!' => {
                tokens.push(ExprToken::Op((bytes[i] as char).to_string()));
                i += 1;
            }
            b'\'' => {
                // Character constant: 'x' or '\n' etc.
                i += 1;
                let val: i64 = if i < bytes.len() && bytes[i] == b'\\' {
                    i += 1;
                    if i < bytes.len() {
                        let c = bytes[i];
                        i += 1;
                        match c {
                            b'n' => 10,
                            b't' => 9,
                            b'r' => 13,
                            b'\\' => 92,
                            b'\'' => 39,
                            b'"' => 34,
                            b'0' => 0,
                            b'a' => 7,
                            b'b' => 8,
                            b'f' => 12,
                            b'v' => 11,
                            b'x' => {
                                // Hex escape.
                                let hex_start = i;
                                while i < bytes.len() && bytes[i].is_ascii_hexdigit() {
                                    i += 1;
                                }
                                i64::from_str_radix(&expr[hex_start..i], 16).unwrap_or(0)
                            }
                            _ => i64::from(c),
                        }
                    } else {
                        0
                    }
                } else if i < bytes.len() {
                    let c = bytes[i];
                    i += 1;
                    i64::from(c)
                } else {
                    0
                };
                // Skip closing quote.
                if i < bytes.len() && bytes[i] == b'\'' {
                    i += 1;
                }
                tokens.push(ExprToken::Num(val));
            }
            _ => i += 1,
        }
    }

    tokens
}

fn parse_or(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    let mut left = parse_and(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        if matches!(&tokens[*pos], ExprToken::Op(op) if op == "||") {
            *pos += 1;
            let right = parse_and(tokens, pos, filename, line)?;
            left = i64::from(left != 0 || right != 0);
        } else {
            break;
        }
    }
    Ok(left)
}

fn parse_and(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    let mut left = parse_equality(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        if matches!(&tokens[*pos], ExprToken::Op(op) if op == "&&") {
            *pos += 1;
            let right = parse_equality(tokens, pos, filename, line)?;
            left = i64::from(left != 0 && right != 0);
        } else {
            break;
        }
    }
    Ok(left)
}

fn parse_equality(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    let mut left = parse_relational(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        match &tokens[*pos] {
            ExprToken::Op(op) if op == "==" => {
                *pos += 1;
                let right = parse_relational(tokens, pos, filename, line)?;
                left = i64::from(left == right);
            }
            ExprToken::Op(op) if op == "!=" => {
                *pos += 1;
                let right = parse_relational(tokens, pos, filename, line)?;
                left = i64::from(left != right);
            }
            _ => break,
        }
    }
    Ok(left)
}

fn parse_relational(
    tokens: &[ExprToken],
    pos: &mut usize,
    filename: &str,
    line: u32,
) -> Result<i64> {
    let mut left = parse_shift(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        match &tokens[*pos] {
            ExprToken::Op(op) if op == "<" => {
                *pos += 1;
                let right = parse_shift(tokens, pos, filename, line)?;
                left = i64::from(left < right);
            }
            ExprToken::Op(op) if op == ">" => {
                *pos += 1;
                let right = parse_shift(tokens, pos, filename, line)?;
                left = i64::from(left > right);
            }
            ExprToken::Op(op) if op == "<=" => {
                *pos += 1;
                let right = parse_shift(tokens, pos, filename, line)?;
                left = i64::from(left <= right);
            }
            ExprToken::Op(op) if op == ">=" => {
                *pos += 1;
                let right = parse_shift(tokens, pos, filename, line)?;
                left = i64::from(left >= right);
            }
            _ => break,
        }
    }
    Ok(left)
}

fn parse_shift(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    let mut left = parse_additive(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        match &tokens[*pos] {
            ExprToken::Op(op) if op == "<<" => {
                *pos += 1;
                let right = parse_additive(tokens, pos, filename, line)?;
                left <<= right;
            }
            ExprToken::Op(op) if op == ">>" => {
                *pos += 1;
                let right = parse_additive(tokens, pos, filename, line)?;
                left >>= right;
            }
            _ => break,
        }
    }
    Ok(left)
}

fn parse_additive(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    let mut left = parse_multiplicative(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        match &tokens[*pos] {
            ExprToken::Op(op) if op == "+" => {
                *pos += 1;
                let right = parse_multiplicative(tokens, pos, filename, line)?;
                left += right;
            }
            ExprToken::Op(op) if op == "-" => {
                *pos += 1;
                let right = parse_multiplicative(tokens, pos, filename, line)?;
                left -= right;
            }
            _ => break,
        }
    }
    Ok(left)
}

fn parse_multiplicative(
    tokens: &[ExprToken],
    pos: &mut usize,
    filename: &str,
    line: u32,
) -> Result<i64> {
    let mut left = parse_unary(tokens, pos, filename, line)?;
    while *pos < tokens.len() {
        match &tokens[*pos] {
            ExprToken::Op(op) if op == "*" => {
                *pos += 1;
                let right = parse_unary(tokens, pos, filename, line)?;
                left *= right;
            }
            ExprToken::Op(op) if op == "/" => {
                *pos += 1;
                let right = parse_unary(tokens, pos, filename, line)?;
                if right == 0 {
                    return Err(Error::Preprocess {
                        file: filename.to_string(),
                        line,
                        msg: "division by zero in preprocessor expression".to_string(),
                    });
                }
                left /= right;
            }
            ExprToken::Op(op) if op == "%" => {
                *pos += 1;
                let right = parse_unary(tokens, pos, filename, line)?;
                if right == 0 {
                    return Err(Error::Preprocess {
                        file: filename.to_string(),
                        line,
                        msg: "modulo by zero in preprocessor expression".to_string(),
                    });
                }
                left %= right;
            }
            _ => break,
        }
    }
    Ok(left)
}

fn parse_unary(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    if *pos < tokens.len() {
        match &tokens[*pos] {
            ExprToken::Op(op) if op == "!" => {
                *pos += 1;
                let val = parse_unary(tokens, pos, filename, line)?;
                return Ok(i64::from(val == 0));
            }
            ExprToken::Op(op) if op == "-" => {
                *pos += 1;
                let val = parse_unary(tokens, pos, filename, line)?;
                return Ok(-val);
            }
            ExprToken::Op(op) if op == "+" => {
                *pos += 1;
                return parse_unary(tokens, pos, filename, line);
            }
            _ => {}
        }
    }
    parse_primary(tokens, pos, filename, line)
}

fn parse_primary(tokens: &[ExprToken], pos: &mut usize, filename: &str, line: u32) -> Result<i64> {
    if *pos >= tokens.len() {
        return Ok(0);
    }

    match &tokens[*pos] {
        ExprToken::Num(n) => {
            let v = *n;
            *pos += 1;
            Ok(v)
        }
        ExprToken::LParen => {
            *pos += 1;
            let val = parse_or(tokens, pos, filename, line)?;
            if *pos < tokens.len() && matches!(&tokens[*pos], ExprToken::RParen) {
                *pos += 1;
            }
            Ok(val)
        }
        _ => {
            *pos += 1;
            Ok(0)
        }
    }
}

/// Format epoch seconds into ("Mmm dd yyyy", "HH:MM:SS").
fn format_date_time(epoch_secs: u64) -> (String, String) {
    let secs_per_day: u64 = 86400;
    let days = epoch_secs / secs_per_day;
    let time_of_day = epoch_secs % secs_per_day;

    let hours = time_of_day / 3600;
    let minutes = (time_of_day % 3600) / 60;
    let seconds = time_of_day % 60;

    // Days since 1970-01-01.
    let (year, month, day) = days_to_ymd(days);

    let months = [
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
    ];
    let mon_name = months[month as usize];

    let date = format!("{mon_name} {day:2} {year}");
    let time = format!("{hours:02}:{minutes:02}:{seconds:02}");
    (date, time)
}

fn days_to_ymd(mut days: u64) -> (u64, u32, u32) {
    let mut year = 1970u64;
    loop {
        let days_in_year = if is_leap(year) { 366 } else { 365 };
        if days < days_in_year {
            break;
        }
        days -= days_in_year;
        year += 1;
    }
    let leap = is_leap(year);
    let month_days: [u32; 12] = [
        31,
        if leap { 29 } else { 28 },
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31,
    ];
    let mut month = 0u32;
    for (m, &md) in month_days.iter().enumerate() {
        if days < u64::from(md) {
            month = m as u32;
            break;
        }
        days -= u64::from(md);
    }
    (year, month, days as u32 + 1)
}

fn is_leap(year: u64) -> bool {
    (year.is_multiple_of(4) && !year.is_multiple_of(100)) || year.is_multiple_of(400)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_simple_define() {
        let mut pp = Preprocessor::new();
        let result = pp
            .process("#define FOO 42\nint x = FOO;\n", "test.c")
            .unwrap();
        assert!(result.contains("int x = 42;"));
    }

    #[test]
    fn test_ifdef() {
        let mut pp = Preprocessor::new();
        pp.define("DEBUG", "1");
        let src = "#ifdef DEBUG\nint x = 1;\n#else\nint x = 0;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int x = 1;"));
        assert!(!result.contains("int x = 0;"));
    }

    #[test]
    fn test_ifndef() {
        let mut pp = Preprocessor::new();
        let src = "#ifndef RELEASE\nint debug = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int debug = 1;"));
    }

    #[test]
    fn test_include() {
        let dir = std::env::temp_dir();
        let header = dir.join("test_header_selcc.h");
        std::fs::write(&header, "int header_var;\n").unwrap();

        let mut pp = Preprocessor::new();
        pp.add_include_dir(dir.to_str().unwrap());
        let result = pp
            .process("#include \"test_header_selcc.h\"\n", "test.c")
            .unwrap();
        assert!(result.contains("int header_var;"));

        std::fs::remove_file(header).ok();
    }

    #[test]
    fn test_system_include_prefers_builtin_header() {
        // A shadow math.h on the include search path must NOT override
        // the selache builtin for system (`<>`) includes: external
        // system headers inline helper functions that name intrinsics
        // this compiler does not model.
        let dir = std::env::temp_dir().join("test_selcc_builtin_priority");
        std::fs::create_dir_all(&dir).unwrap();
        let header = dir.join("math.h");
        // The shadow header defines a sentinel variable; if it is
        // included instead of the builtin, the sentinel will appear in
        // the preprocessed output.
        std::fs::write(&header, "int __shadow_math_h_selcc_test_sentinel;\n").unwrap();

        let mut pp = Preprocessor::new();
        pp.add_include_dir(dir.to_str().unwrap());
        // Reference a prototype the selache builtin math.h provides so
        // we can tell whether the builtin was actually included.
        let result = pp
            .process(
                "#include <math.h>\nint test_use_builtin(void) { float x = fabsf(0); return 0; }\n",
                "test.c",
            )
            .unwrap();
        assert!(
            !result.contains("__shadow_math_h_selcc_test_sentinel"),
            "system <math.h> must resolve to the selache builtin, \
             not the filesystem shadow header"
        );
        // The selache builtin math.h declares `fabsf`; a forward
        // declaration must be present in the preprocessed output for
        // the call below to parse successfully.
        assert!(
            result.contains("fabsf"),
            "selache builtin <math.h> was not used for system include"
        );

        // But a quoted include with the same filename must still pick
        // up the shadow file on the search path, because `"..."`
        // includes are supposed to search user-provided directories
        // before falling back to the compiler's builtin library.
        let mut pp2 = Preprocessor::new();
        pp2.add_include_dir(dir.to_str().unwrap());
        let result2 = pp2.process("#include \"math.h\"\n", "test.c").unwrap();
        assert!(
            result2.contains("__shadow_math_h_selcc_test_sentinel"),
            "quoted math.h should pick up the filesystem shadow file"
        );

        std::fs::remove_file(header).ok();
        std::fs::remove_dir(dir).ok();
    }

    #[test]
    fn test_function_macro() {
        let mut pp = Preprocessor::new();
        let src = "#define MAX(a,b) ((a)>(b)?(a):(b))\nint x = MAX(3, 5);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("((3)>(5)?(3):(5))"));
    }

    #[test]
    fn test_predefined_macros() {
        let mut pp = Preprocessor::new();
        let src = "int line = __LINE__;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int line = 1;"));
    }

    #[test]
    fn test_nested_ifdef() {
        let mut pp = Preprocessor::new();
        pp.define("A", "1");
        let src = "#ifdef A\n#ifdef B\nint ab = 1;\n#else\nint a_only = 1;\n#endif\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int a_only = 1;"));
        assert!(!result.contains("int ab = 1;"));
    }

    #[test]
    fn test_undef() {
        let mut pp = Preprocessor::new();
        let src = "#define X 1\nint a = X;\n#undef X\nint b = X;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int a = 1;"));
        assert!(result.contains("int b = X;"));
    }

    #[test]
    fn test_line_continuation() {
        let mut pp = Preprocessor::new();
        let src = "#define LONG_MACRO \\\n    42\nint x = LONG_MACRO;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int x = 42;") || result.contains("int x =     42;"));
    }

    #[test]
    fn test_if_expression() {
        let mut pp = Preprocessor::new();
        pp.define("VERSION", "3");
        let src = "#if VERSION > 2\nint new = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int new = 1;"));
    }

    #[test]
    fn test_if_defined_operator() {
        let mut pp = Preprocessor::new();
        pp.define("FOO", "1");
        let src = "#if defined(FOO)\nint yes = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int yes = 1;"));
    }

    #[test]
    fn test_if_not_defined() {
        let mut pp = Preprocessor::new();
        let src = "#if !defined(BAR)\nint no_bar = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int no_bar = 1;"));
    }

    #[test]
    fn test_elif() {
        let mut pp = Preprocessor::new();
        pp.define("X", "2");
        let src =
            "#if X == 1\nint one = 1;\n#elif X == 2\nint two = 1;\n#else\nint other = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(!result.contains("int one = 1;"));
        assert!(result.contains("int two = 1;"));
        assert!(!result.contains("int other = 1;"));
    }

    #[test]
    fn test_error_directive() {
        let mut pp = Preprocessor::new();
        let src = "#error \"bad config\"\n";
        let result = pp.process(src, "test.c");
        assert!(result.is_err());
    }

    #[test]
    fn test_pragma_ignored() {
        let mut pp = Preprocessor::new();
        let src = "#pragma once\nint x = 1;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int x = 1;"));
    }

    #[test]
    fn test_pragma_function_name_rewrites_decl_and_calls() {
        // `#pragma function_name NAME` applied to `int printf(...)`
        // must rewrite both the declaration and every subsequent call
        // in the translation unit to NAME so the linker sees NAME as
        // the C-level symbol.
        let mut pp = Preprocessor::new();
        let src = "#pragma function_name _printf32\n\
                   int printf(const char *f, ...);\n\
                   int main(void) { return printf(\"hi\"); }\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int _printf32(const char *f, ...);"));
        assert!(result.contains("return _printf32(\"hi\");"));
        assert!(!result.contains("printf("));
    }

    #[test]
    fn test_pragma_function_name_skips_blank_lines() {
        // The pragma must ride forward across comments and blank
        // lines to the next actual declaration.
        let mut pp = Preprocessor::new();
        let src = "#pragma function_name _fprintf32\n\
                   \n\
                   int fprintf(int stream, const char *f, ...);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int _fprintf32(int stream, const char *f, ...);"));
    }

    #[test]
    fn test_pragma_function_name_skips_misra_prefix() {
        // Multiple pragmas can stack before a declaration; only the
        // function_name pragma carries a rewrite, other pragmas
        // (like misra_func) are silently consumed.
        let mut pp = Preprocessor::new();
        let src = "#pragma misra_func(io)\n\
                   #pragma function_name _printf32\n\
                   int printf(const char *f, ...);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int _printf32(const char *f, ...);"));
    }

    #[test]
    fn test_pragma_function_name_ignores_nondecl_line() {
        // A pragma followed by a comment or a block-brace line
        // should ride forward, not attach to the brace line.
        let mut pp = Preprocessor::new();
        let src = "#pragma function_name _foo\n\
                   {\n\
                   int foo(int x);\n\
                   }\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int _foo(int x);"));
    }

    #[test]
    fn test_file_macro() {
        let mut pp = Preprocessor::new();
        let src = "const char *f = __FILE__;\n";
        let result = pp.process(src, "myfile.c").unwrap();
        assert!(result.contains("\"myfile.c\""));
    }

    #[test]
    fn test_adsp_predefined() {
        let mut pp = Preprocessor::new();
        let src = "#ifdef __ADSP21000__\nint sharc = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int sharc = 1;"));
    }

    #[test]
    fn test_set_processor() {
        let mut pp = Preprocessor::new();
        pp.set_processor("ADSP-21569");
        let src = "#ifdef __ADSP21569__\nint proc = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int proc = 1;"));
    }

    #[test]
    fn test_unterminated_conditional() {
        let mut pp = Preprocessor::new();
        let src = "#ifdef FOO\nint x = 1;\n";
        let result = pp.process(src, "test.c");
        assert!(result.is_err());
    }

    #[test]
    fn test_endif_without_if() {
        let mut pp = Preprocessor::new();
        let src = "#endif\n";
        let result = pp.process(src, "test.c");
        assert!(result.is_err());
    }

    #[test]
    fn test_nested_function_macro() {
        let mut pp = Preprocessor::new();
        let src = "#define A(x) (x+1)\n#define B(x) A(x)\nint y = B(5);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("(5+1)"));
    }

    #[test]
    fn test_macro_in_string_not_expanded() {
        let mut pp = Preprocessor::new();
        pp.define("FOO", "bar");
        let src = "char *s = \"FOO\";\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("\"FOO\""));
    }

    #[test]
    fn test_comments_in_directive() {
        let mut pp = Preprocessor::new();
        let src = "#define X 42 /* the answer */\nint x = X;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int x = 42"));
    }

    #[test]
    fn test_if_arithmetic() {
        let mut pp = Preprocessor::new();
        let src = "#if 2 + 3 == 5\nint ok = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int ok = 1;"));
    }

    #[test]
    fn test_if_shift_arithmetic() {
        let mut pp = Preprocessor::new();
        let src = "#if (1 << 4) == 16 && (32 >> 2) == 8\nint ok = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int ok = 1;"), "got: {result}");
    }

    #[test]
    fn test_if_logical_and() {
        let mut pp = Preprocessor::new();
        pp.define("A", "1");
        pp.define("B", "1");
        let src = "#if defined(A) && defined(B)\nint both = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int both = 1;"));
    }

    #[test]
    fn preprocess_stdarg() {
        let mut pp = Preprocessor::new();
        let src = "#include <stdarg.h>\nint x;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("__va_list"));
    }

    #[test]
    fn preprocess_stdint() {
        let mut pp = Preprocessor::new();
        let src = "#include <stdint.h>\nint32_t x;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int") && result.contains("x"));
    }

    #[test]
    fn preprocess_stdbool() {
        let mut pp = Preprocessor::new();
        let src = "#include <stdbool.h>\nint flag = true;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("1"));
    }

    #[test]
    fn preprocess_stddef() {
        let mut pp = Preprocessor::new();
        let src = "#include <stddef.h>\nsize_t n;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("size_t") || result.contains("unsigned int"));
    }

    #[test]
    fn preprocess_limits() {
        let mut pp = Preprocessor::new();
        let src = "#include <limits.h>\nint x = INT_MAX;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("2147483647"));
    }

    #[test]
    fn preprocess_stdarg_include_guard() {
        let mut pp = Preprocessor::new();
        let src = "#include <stdarg.h>\n#include <stdarg.h>\nint x;\n";
        let result = pp.process(src, "test.c").unwrap();
        // Should work without errors even with double include.
        assert!(result.contains("__va_list"));
    }

    #[test]
    fn test_variadic_macro() {
        let mut pp = Preprocessor::new();
        let src = "#define LOG(fmt, ...) printf(fmt, __VA_ARGS__)\nLOG(\"x=%d\", x);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("printf(\"x=%d\", x)"), "got: {result}");
    }

    #[test]
    fn test_variadic_macro_gnu_comma_elision() {
        let mut pp = Preprocessor::new();
        let src = "#define LOG(fmt, ...) printf(fmt, ##__VA_ARGS__)\nLOG(\"hello\");\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("printf(\"hello\")"), "got: {result}");
    }

    #[test]
    fn test_stringify_operator() {
        let mut pp = Preprocessor::new();
        let src = "#define STR(x) #x\nchar *s = STR(hello);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("\"hello\""), "got: {result}");
    }

    #[test]
    fn test_stringify_va_args() {
        let mut pp = Preprocessor::new();
        let src = "#define ARGS(...) #__VA_ARGS__\nchar *s = ARGS(a, b, c);\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("\"a, b, c\""), "got: {result}");
    }

    #[test]
    fn test_line_directive() {
        let mut pp = Preprocessor::new();
        let src = "#line 42\nint x = __LINE__;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int x = 42;"), "got: {result}");
    }

    #[test]
    fn test_line_directive_with_file() {
        let mut pp = Preprocessor::new();
        let src = "#line 10 \"renamed.c\"\nconst char *f = __FILE__;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("renamed.c"), "got: {result}");
    }

    #[test]
    fn trigraph_replacement() {
        assert_eq!(replace_trigraphs("??="), "#");
        assert_eq!(replace_trigraphs("??/"), "\\");
        assert_eq!(replace_trigraphs("??'"), "^");
        assert_eq!(replace_trigraphs("??("), "[");
        assert_eq!(replace_trigraphs("??)"), "]");
        assert_eq!(replace_trigraphs("??!"), "|");
        assert_eq!(replace_trigraphs("??<"), "{");
        assert_eq!(replace_trigraphs("??>"), "}");
        assert_eq!(replace_trigraphs("??-"), "~");
    }

    #[test]
    fn trigraph_in_source() {
        let mut pp = Preprocessor::new();
        let src = "??=define FOO 42\nint x = FOO;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("42"));
    }

    #[test]
    fn trigraph_not_replaced_when_not_trigraph() {
        assert_eq!(replace_trigraphs("??x"), "??x");
        assert_eq!(replace_trigraphs("?"), "?");
        assert_eq!(replace_trigraphs("??"), "??");
    }

    #[test]
    fn digraph_percent_colon_define() {
        let mut pp = Preprocessor::new();
        let src = "%:define BAR 99\nint y = BAR;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("99"), "got: {result}");
    }

    #[test]
    fn test_pragma_operator() {
        let mut pp = Preprocessor::new();
        let src = "_Pragma(\"once\")\nint x = 1;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int x = 1;"), "got: {result}");
        assert!(!result.contains("_Pragma"), "got: {result}");
    }

    #[test]
    fn test_include_macro_expansion() {
        let mut pp = Preprocessor::new();
        let src = "#define HDR <stdint.h>\n#include HDR\nint32_t x;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(
            result.contains("int32_t") || result.contains("int"),
            "got: {result}"
        );
    }

    #[test]
    fn test_char_constant_in_if() {
        let mut pp = Preprocessor::new();
        let src = "#if 'A' == 65\nint ascii = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int ascii = 1;"), "got: {result}");
    }

    #[test]
    fn test_char_escape_in_if() {
        let mut pp = Preprocessor::new();
        let src = "#if '\\n' == 10\nint newline = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int newline = 1;"), "got: {result}");
    }

    #[test]
    fn test_char_zero_in_if() {
        let mut pp = Preprocessor::new();
        let src = "#if '\\0' == 0\nint null = 1;\n#endif\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(result.contains("int null = 1;"), "got: {result}");
    }

    #[test]
    fn preprocess_stdc_macros() {
        let mut pp = Preprocessor::new();
        let src = "int stdc = __STDC__;\nlong ver = __STDC_VERSION__;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(
            result.contains("int stdc = 1;"),
            "expected __STDC__ = 1, got: {result}"
        );
        assert!(
            result.contains("long ver = 199901L;"),
            "expected __STDC_VERSION__ = 199901L, got: {result}"
        );
    }

    #[test]
    fn preprocess_iso646() {
        let mut pp = Preprocessor::new();
        let src = "#include <iso646.h>\nint x = 1 and 0;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(
            result.contains("1 && 0"),
            "expected 'and' expanded to '&&', got: {result}"
        );
    }

    #[test]
    fn preprocess_errno() {
        let mut pp = Preprocessor::new();
        let src = "#include <errno.h>\nint x = EDOM;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(
            result.contains("int x = 1;"),
            "expected EDOM = 1, got: {result}"
        );
    }

    #[test]
    fn preprocess_assert() {
        let mut pp = Preprocessor::new();
        let src = "#include <assert.h>\nvoid f() { assert(1); }\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(
            result.contains("__assert_fail") || result.contains("((void)0)"),
            "expected assert expansion, got: {result}"
        );
    }

    #[test]
    fn preprocess_inttypes() {
        let mut pp = Preprocessor::new();
        let src = "#include <inttypes.h>\nconst char *fmt = PRId32;\n";
        let result = pp.process(src, "test.c").unwrap();
        assert!(
            result.contains("\"d\""),
            "expected PRId32 = \"d\", got: {result}"
        );
    }
}
