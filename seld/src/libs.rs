// SPDX-License-Identifier: GPL-3.0
// libs.rs --- LDF library/CRT resolution and archive-backed symbol pulling
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;
use std::path::{Path, PathBuf};

use selelf::archive::Archive;

use crate::error::{Error, Result};
use crate::ldf_ast::Ldf;
use crate::resolve::{self, InputObject};

/// A library archive loaded from disk, kept live for on-demand member
/// extraction during the symbol-resolution worklist loop.
pub struct LoadedArchive {
    pub path: PathBuf,
    pub archive: Archive,
    /// Which member indices have already been pulled into the link.
    /// Once pulled, a member must not be re-pulled: duplicate global
    /// symbols would conflict in the resolver.
    pub pulled: Vec<bool>,
}

/// Collect library basenames (both `.doj` CRT startup objects and
/// `.dlb` archives) referenced by the LDF's top-level variable
/// declarations. A minimal setup looks like
///
/// ```text
/// $OBJECTS   = 21569_hdr.doj, $COMMAND_LINE_OBJECTS;
/// $LIBRARIES = libcc.dlb, libc.dlb, ...;
/// ```
///
/// The CRT header is a plain object that must be loaded unconditionally;
/// the `$LIBRARIES` list is the ordered search chain for archive-backed
/// symbol pulls. `$COMMAND_LINE_OBJECTS` is skipped: those files reach
/// the linker via the input-file argv directly.
pub fn collect_library_refs(ldf: &Ldf) -> (Vec<String>, Vec<String>) {
    let var_map: HashMap<&str, &Vec<String>> = ldf
        .variables
        .iter()
        .map(|v| (v.name.as_str(), &v.values))
        .collect();

    // Flatten a variable's values, recursively expanding any nested
    // `$VAR` references. A reference to `$COMMAND_LINE_OBJECTS`
    // terminates a branch without contributing any names: those files
    // are already on the argv and must not be pulled a second time.
    fn expand(name: &str, vars: &HashMap<&str, &Vec<String>>, depth: usize, out: &mut Vec<String>) {
        if depth > 32 {
            return;
        }
        if name == "$COMMAND_LINE_OBJECTS" {
            return;
        }
        if let Some(values) = vars.get(name) {
            for v in *values {
                if v.starts_with('$') {
                    expand(v, vars, depth + 1, out);
                } else {
                    out.push(v.clone());
                }
            }
        }
    }

    let mut objects_expanded: Vec<String> = Vec::new();
    expand("$OBJECTS", &var_map, 0, &mut objects_expanded);

    let mut libraries_expanded: Vec<String> = Vec::new();
    expand("$LIBRARIES", &var_map, 0, &mut libraries_expanded);

    // Partition $OBJECTS into CRT `.doj` files and accidentally-mixed
    // `.dlb` entries. CRT `.doj` files are what normally live here;
    // treat `.dlb` defensively so a nonstandard LDF does not silently
    // drop a required archive.
    let mut crt_objects: Vec<String> = Vec::new();
    let mut archives: Vec<String> = Vec::new();
    for entry in &objects_expanded {
        if entry.ends_with(".dlb") {
            archives.push(entry.clone());
        } else if entry.ends_with(".doj") {
            crt_objects.push(entry.clone());
        }
    }
    for entry in &libraries_expanded {
        if entry.ends_with(".dlb") {
            archives.push(entry.clone());
        } else if entry.ends_with(".doj") {
            crt_objects.push(entry.clone());
        }
    }

    (crt_objects, archives)
}

/// Search a basename through the `-L` library path list. Returns the
/// first path that exists. The callers handle the "not found" case
/// explicitly so that a missing CRT header or missing archive is a
/// fatal error with a precise filename, not a silent skip.
pub fn find_in_lib_paths(basename: &str, lib_paths: &[String]) -> Option<PathBuf> {
    for dir in lib_paths {
        let candidate = Path::new(dir).join(basename);
        if candidate.is_file() {
            return Some(candidate);
        }
    }
    None
}

/// Load every archive basename from `archive_basenames` into memory by
/// searching the `-L` path list. Missing archives are a fatal error.
pub fn load_archives(
    archive_basenames: &[String],
    lib_paths: &[String],
) -> Result<Vec<LoadedArchive>> {
    let mut out = Vec::with_capacity(archive_basenames.len());
    // Preserve declaration order but eliminate duplicates: some LDFs
    // list a library twice (e.g. `libprofile.dlb`). Pulling the same
    // archive twice would double every member count.
    let mut seen: Vec<String> = Vec::new();
    for name in archive_basenames {
        if seen.iter().any(|n| n == name) {
            continue;
        }
        seen.push(name.clone());
        let path = find_in_lib_paths(name, lib_paths)
            .ok_or_else(|| Error::Usage(format!("library `{name}` not found on any -L path")))?;
        let data = std::fs::read(&path)?;
        let archive = selelf::archive::read(&data).map_err(Error::Shared)?;
        let pulled = vec![false; archive.members.len()];
        out.push(LoadedArchive {
            path,
            archive,
            pulled,
        });
    }
    Ok(out)
}

/// Locate and load every CRT object file into `InputObject` records.
/// Every CRT basename must resolve on the `-L` path list or the link
/// fails loudly.
pub fn load_crt_objects(
    crt_basenames: &[String],
    lib_paths: &[String],
) -> Result<Vec<InputObject>> {
    let mut out = Vec::with_capacity(crt_basenames.len());
    // Dedupe in declaration order (same rationale as archive loading).
    let mut seen: Vec<String> = Vec::new();
    for name in crt_basenames {
        if seen.iter().any(|n| n == name) {
            continue;
        }
        seen.push(name.clone());
        let path = find_in_lib_paths(name, lib_paths)
            .ok_or_else(|| Error::Usage(format!("CRT object `{name}` not found on any -L path")))?;
        let data = std::fs::read(&path)?;
        let obj = resolve::load_object(path.to_string_lossy().as_ref(), data)?;
        out.push(obj);
    }
    Ok(out)
}

/// Pull one archive member by its symbol name. Scans archives in
/// declaration order and returns the first match that has not already
/// been pulled. The search honours the toolchain's two-dialect naming
/// convention: a reference in assembler form (`_foo`) will match a
/// definition in compiler form (`foo.`) and vice versa. Marks the
/// pulled member as pulled so a later symbol that happens to share
/// the same object does not re-pull it.
pub fn pull_member_for_symbol(archives: &mut [LoadedArchive], symbol: &str) -> Option<InputObject> {
    // Build the list of name variants once per request. The same
    // archive scan then checks each variant against each archive in
    // declaration order.
    let mut candidates: Vec<String> = Vec::new();
    candidates.push(symbol.to_string());
    for alias in resolve::name_aliases(symbol) {
        if !candidates.contains(&alias) {
            candidates.push(alias);
        }
    }

    for ar in archives.iter_mut() {
        let mut matched: Option<usize> = None;
        for candidate in &candidates {
            if let Some(&(_, member_idx)) = ar
                .archive
                .symbol_index
                .iter()
                .find(|(name, _)| name == candidate)
            {
                if member_idx < ar.pulled.len() && !ar.pulled[member_idx] {
                    matched = Some(member_idx);
                    break;
                }
            }
        }
        if let Some(member_idx) = matched {
            ar.pulled[member_idx] = true;
            let member = &ar.archive.members[member_idx];
            let synthetic_path = format!("{}({})", ar.path.to_string_lossy(), member.name);
            let data = member.data.clone();
            if let Ok(obj) = resolve::load_object(&synthetic_path, data) {
                return Some(obj);
            }
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ldf_ast::{Ldf, VarDecl};

    fn mk_ldf(vars: &[(&str, &[&str])]) -> Ldf {
        Ldf {
            architecture: None,
            variables: vars
                .iter()
                .map(|&(name, values)| VarDecl {
                    name: name.to_string(),
                    values: values.iter().map(|s| s.to_string()).collect(),
                })
                .collect(),
            memory: Vec::new(),
            processors: Vec::new(),
            script_assignments: Vec::new(),
        }
    }

    #[test]
    fn collect_expands_typical_style_ldf() {
        let ldf = mk_ldf(&[
            ("$OBJECTS", &["21569_hdr.doj", "$COMMAND_LINE_OBJECTS"]),
            ("$LIBRARIES", &["libcc.dlb", "libc.dlb", "libio.dlb"]),
        ]);
        let (crt, arcs) = collect_library_refs(&ldf);
        assert_eq!(crt, vec!["21569_hdr.doj".to_string()]);
        assert_eq!(
            arcs,
            vec![
                "libcc.dlb".to_string(),
                "libc.dlb".to_string(),
                "libio.dlb".to_string()
            ]
        );
    }

    #[test]
    fn collect_skips_command_line_objects() {
        let ldf = mk_ldf(&[("$OBJECTS", &["$COMMAND_LINE_OBJECTS", "startup.doj"])]);
        let (crt, arcs) = collect_library_refs(&ldf);
        assert_eq!(crt, vec!["startup.doj".to_string()]);
        assert!(arcs.is_empty());
    }

    #[test]
    fn collect_handles_no_libraries_var() {
        let ldf = mk_ldf(&[]);
        let (crt, arcs) = collect_library_refs(&ldf);
        assert!(crt.is_empty());
        assert!(arcs.is_empty());
    }

    #[test]
    fn collect_dedupes_implicitly_through_loader() {
        // collect_library_refs preserves duplicates; dedup happens at
        // load time.  Verify that behaviour is honoured.
        let ldf = mk_ldf(&[("$LIBRARIES", &["libprofile.dlb", "libprofile.dlb"])]);
        let (_crt, arcs) = collect_library_refs(&ldf);
        assert_eq!(arcs.len(), 2);
    }
}
