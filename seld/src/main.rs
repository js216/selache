// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for the LDF-driven seld
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;
mod gc;
mod layout;
mod ldf_ast;
mod ldf_lex;
mod ldf_parse;
mod ldf_preproc;
mod libs;
mod output;
mod relocate;
mod resolve;
mod script_eval;

use std::collections::HashMap;
use std::process;

const BANNER: &str = "\
ADSP-2156x Family LDF Linker\n\
Version: ";

fn print_banner() {
    eprintln!("{BANNER}{}", env!("CARGO_PKG_VERSION"));
    eprintln!("Copyright (c) 2026 Jakob Kastelic");
}

fn print_usage() {
    print_banner();
    eprintln!();
    eprintln!("Usage: seld [options] file1.doj [file2.doj ...]");
    eprintln!();
    eprintln!("Options:");
    eprintln!("  -proc processor     Target processor (e.g. ADSP-21569)");
    eprintln!("  -T filename         LDF (Linker Description File)");
    eprintln!("  -o filename         Output executable file (.dxe)");
    eprintln!("  -L path             Library search path (repeatable)");
    eprintln!("  -e                  Eliminate unused symbols");
    eprintln!("  -ek secName         Keep section from elimination");
    eprintln!("  -entry symbol       Entry point symbol");
    eprintln!("  -Map filename       Generate map file");
    eprintln!("  -s                  Strip all symbols");
    eprintln!("  -S                  Strip debug symbols only");
    eprintln!("  -t                  Trace linked objects");
    eprintln!("  -tx                 Trace linked objects (full paths)");
    eprintln!("  -selinit            Post-process with memory initializer");
    eprintln!("  -MD macro[=def]     Define preprocessor macro");
    eprintln!("  -MUD macro          Undefine preprocessor macro");
    eprintln!("  -i/-I directory     Include search directory");
    eprintln!("  -si-revision ver    Silicon revision");
    eprintln!("  -sp                 Skip LDF preprocessing");
    eprintln!("  -save-temps         Keep temporary files");
    eprintln!("  -W<number>          Disable specific warning");
    eprintln!("  -Werror <number>    Promote warning to error");
    eprintln!("  -xref               Cross-reference listing");
    eprintln!("  @filename           Response file");
    eprintln!("  -v/-verbose         Verbose output");
    eprintln!("  -h/-help            Display this help");
    eprintln!("  -version            Version information");
}

fn fatal(msg: &str) -> ! {
    eprintln!();
    eprintln!("%seld - FATAL ERROR");
    eprintln!();
    eprintln!("{msg}");
    process::exit(255)
}

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(255);
    }

    let opts = match cli::parse_args(&args) {
        Ok(opts) => opts,
        Err(e) => {
            print_banner();
            fatal(&e.to_string());
        }
    };

    if opts.show_help {
        print_usage();
        return;
    }

    if opts.show_version {
        print_banner();
        return;
    }

    print_banner();

    if let Err(e) = run(&opts) {
        fatal(&e.to_string());
    }
}

fn run(opts: &cli::Options) -> error::Result<()> {
    // Read LDF
    let ldf_path = opts.ldf_file.as_ref().ok_or(error::Error::NoLdf)?;
    let ldf_src = std::fs::read_to_string(ldf_path)?;

    // Run the LDF preprocessor first: this expands `#include`, handles
    // `#if/#elif/#else/#endif`, and substitutes `#define`d macros. After
    // this pass the source contains no preprocessor directives, so the
    // downstream lexer/parser does not need to cope with them.
    let mut preproc = ldf_preproc::Preproc::new();
    // Predefine macros from the command line.
    for (k, v) in &opts.defines {
        preproc.define_simple(k, v);
    }
    for name in &opts.undefines {
        preproc.defines.remove(name);
    }
    // Seed defaults for `-proc ADSP-21569 -si-revision any`. Only macros
    // that control selection of header fragments and default code paths
    // are seeded; everything else is left to explicit `-MD`.
    seed_defaults_for_proc(&mut preproc, opts.processor.as_deref());
    // Include search paths: the -i/-I flag list plus the directory
    // containing the LDF itself (for resolving `#include "modules_sharc.ldf"`).
    for p in &opts.include_paths {
        preproc.include_paths.push(std::path::PathBuf::from(p));
    }
    let ldf_path_buf = std::path::PathBuf::from(ldf_path);
    let ldf_dir = ldf_path_buf
        .parent()
        .map(|p| p.to_path_buf())
        .unwrap_or_else(|| std::path::PathBuf::from("."));
    if let Some(ldf_parent) = ldf_path_buf.parent() {
        if !preproc
            .include_paths
            .iter()
            .any(|p| p == ldf_parent)
        {
            preproc.include_paths.push(ldf_parent.to_path_buf());
        }
    }

    if opts.verbose {
        eprintln!("Parsing LDF: {ldf_path}");
    }

    let expanded_src = preproc.preprocess(&ldf_src, &ldf_dir, ldf_path)?;

    if opts.save_temps {
        let out = format!("{ldf_path}.pre");
        if std::fs::write(&out, &expanded_src).is_ok() && opts.verbose {
            eprintln!("wrote expanded LDF to {out}");
        }
    }

    // The lexer's own `#`-directive handling is no longer needed in the
    // common case; pass an empty define table so any leftover `#` is
    // treated as an unknown directive and skipped gracefully.
    let defines = HashMap::new();

    let ldf = ldf_parse::parse(&expanded_src, &defines)?;

    // Validate architecture
    if let Some(ref arch) = ldf.architecture {
        if opts.verbose {
            eprintln!("Architecture: {arch}");
        }
    }

    // Load input objects
    if opts.input_files.is_empty() {
        return Err(error::Error::NoInput);
    }

    let mut objects = Vec::new();
    for path in &opts.input_files {
        if opts.trace || opts.trace_full {
            if opts.trace_full {
                let abs = std::fs::canonicalize(path).unwrap_or_else(|_| path.into());
                eprintln!("  {}", abs.display());
            } else {
                eprintln!("  {path}");
            }
        }
        let data = std::fs::read(path)?;
        let obj = resolve::load_object(path, data)?;
        objects.push(obj);
    }
    // Remember how many of the objects came from the argv. Every
    // section of every one of these is a garbage-collection root:
    // user code is never dropped. CRT and archive members loaded
    // below come after this count and are only kept if reachable
    // from a root via the cross-object symbol graph.
    let num_command_line_objects = objects.len();

    // Pull in CRT startup objects and library archives referenced by
    // the LDF's top-level variable declarations. The CRT `.doj` files
    // are loaded unconditionally; the `.dlb` archives are kept live so
    // that members can be pulled on demand during the resolve loop.
    let (crt_basenames, archive_basenames) = libs::collect_library_refs(&ldf);
    let crt_objects = libs::load_crt_objects(&crt_basenames, &opts.lib_paths)?;
    for obj in crt_objects {
        if opts.trace || opts.trace_full {
            eprintln!("  {}", obj.path);
        }
        objects.push(obj);
    }
    let mut archives =
        libs::load_archives(&archive_basenames, &opts.lib_paths)?;

    if opts.verbose {
        eprintln!(
            "Loaded {} input objects and {} archive(s)",
            objects.len(),
            archives.len()
        );
    }

    // Symbol resolution with on-demand archive pulling. At each pass
    // we resolve the growing object list; any remaining undefined
    // symbol that matches a live archive's symbol index triggers a
    // fresh member pull, and the loop repeats until either no
    // undefined symbols remain (success) or no archive member can
    // satisfy any of them (hard failure).
    //
    // Script-assignment names (e.g. `___ldf_pmcachesize`,
    // `ldf_heap_space`) are expected to be satisfied later by the
    // LDF expression evaluator, after section layout finishes.
    // They must not count against the resolve loop, both because
    // there is no archive member that defines them and because
    // raising a hard error here would prevent the evaluator from
    // ever running.
    let script_names: std::collections::HashSet<String> = ldf
        .script_assignments
        .iter()
        .map(|a| a.name.clone())
        .collect();
    let is_script_name = |name: &str| -> bool {
        if script_names.contains(name) {
            return true;
        }
        resolve::name_aliases(name)
            .iter()
            .any(|a| script_names.contains(a))
    };
    if opts.verbose {
        eprintln!("Resolving symbols...");
    }
    let symtab = loop {
        let tab = resolve::resolve(&objects)?;
        // An `UNDEF global` declaration that no relocation anywhere
        // actually points at is an unused extern: hand-written SHARC
        // CRT headers (`21569_hdr.doj` and friends) declare a
        // superset of OSAL entry points (`_adi_osal_MsgQueuePost`,
        // `_adi_osal_SemPost`, ...) that are only load-bearing in
        // RTOS builds and are never referenced by any `.rela.*` entry
        // in a no-OS build. Such declarations must be silently ignored,
        // otherwise every no-OS link would fail on OSAL symbols that no
        // code calls.
        let referenced = resolve::relocation_referenced_symbols(&objects);
        let is_referenced = |name: &str| -> bool {
            if referenced.contains(name) {
                return true;
            }
            resolve::name_aliases(name)
                .iter()
                .any(|a| referenced.contains(a))
        };
        let live_undef: Vec<String> = tab
            .undefined
            .iter()
            .filter(|s| !is_script_name(s) && is_referenced(s))
            .cloned()
            .collect();
        if live_undef.is_empty() {
            break tab;
        }
        // Try to pull archive members that define any of the
        // remaining undefined symbols. This is the primary path
        // for library references; a failure to find a definition
        // is a hard link error.
        let mut pulled_this_pass = 0usize;
        for sym in &live_undef {
            if let Some(obj) =
                libs::pull_member_for_symbol(&mut archives, sym)
            {
                if opts.trace || opts.trace_full {
                    eprintln!("  {}", obj.path);
                }
                objects.push(obj);
                pulled_this_pass += 1;
            }
        }
        if pulled_this_pass > 0 {
            continue;
        }

        // No archive could satisfy anything. Every remaining
        // unresolved symbol is a genuine reference to a missing
        // definition: the link fails closed with every remaining
        // unresolved symbol on stderr, not just the first.
        //
        // In verbose mode, before bailing out, try to dump the
        // script-constant evaluation results so the operator can
        // still see what values the LDF expression evaluator
        // produced against the partial layout. A failure in the
        // diagnostic dump is ignored; it must not mask the real
        // unresolved-symbol error.
        for sym in &live_undef {
            eprintln!("unresolved symbol: {sym}");
        }
        return Err(error::Error::UnresolvedSymbol(live_undef[0].clone()));
    };

    if opts.verbose {
        eprintln!("Resolved {} global symbols", symtab.symbols.len());
    }

    // Build variable table from LDF. `$COMMAND_LINE_OBJECTS` is
    // deliberately left unset here so that `resolve_object_refs`
    // hits its built-in wildcard expansion: every input object on
    // the command line, plus every pulled archive member, must be
    // considered eligible for placement under a spec that names
    // `$COMMAND_LINE_OBJECTS` (or any variable that transitively
    // includes it, e.g. `$OBJS_LIBS`). Binding the variable to
    // literal CLI input paths would hide archive-pulled members
    // from the layout pass.
    let mut variables: HashMap<String, Vec<String>> = HashMap::new();
    for var in &ldf.variables {
        if var.name == "$COMMAND_LINE_OBJECTS" {
            continue;
        }
        variables.insert(var.name.clone(), var.values.clone());
    }
    // Add output file
    if let Some(ref out) = opts.output_file {
        variables.insert("$COMMAND_LINE_OUTPUT_FILE".to_string(), vec![out.clone()]);
    }

    // Section-level garbage collection. Compute which sections are
    // reachable from the GC roots (command-line objects, the entry
    // symbol, LDF-claimed sections, script-assignment targets, and
    // KEEP directives) so that layout never sees sections the
    // program cannot reach. Without this pass, CRT startup stubs
    // that carry C++-runtime-only placeholders (`seg_ctdml`,
    // `seg_ctdml_bw`) would orphan every no-C++ link.
    let entry_name = opts
        .entry
        .as_deref()
        .or(ldf.processors.first().and_then(|p| p.entry.as_deref()));
    if opts.verbose {
        eprintln!("Computing section liveness...");
    }
    let live_sections = gc::compute_liveness(
        &objects,
        num_command_line_objects,
        &ldf,
        &symtab,
        entry_name,
    )?;

    // Layout
    if opts.verbose {
        eprintln!("Performing section layout...");
    }
    let mut link_layout =
        layout::layout(&ldf, &objects, &variables, entry_name, &live_sections)?;

    if opts.verbose {
        eprintln!(
            "Placed {} sections, entry=0x{:08x}",
            link_layout.placed.len(),
            link_layout.entry_address.unwrap_or(0)
        );
    }

    // Evaluate LDF script-constant assignments against the now-known
    // memory layout. Each resolved value becomes a global SHN_ABS
    // symbol that the relocation pass can see. A failure here is a
    // hard error: there is no silent zero fallback, because the
    // downstream reloc patch would otherwise place a wrong address
    // into the output image.
    if opts.verbose {
        eprintln!(
            "Evaluating {} LDF script assignments...",
            ldf.script_assignments.len()
        );
    }
    let mut symtab = symtab;
    install_script_symbols(&ldf, &link_layout, &mut symtab)?;
    if opts.verbose {
        let mut names: Vec<&String> = ldf
            .script_assignments
            .iter()
            .map(|a| &a.name)
            .collect();
        names.sort();
        names.dedup();
        for n in names {
            if let Some(sym) = symtab.symbols.get(n) {
                eprintln!("  script symbol {n} = 0x{:08x}", sym.value);
            }
        }
    }

    // Apply relocations
    if opts.verbose {
        eprintln!("Processing relocations...");
    }
    relocate::apply_relocations(&objects, &symtab, &mut link_layout.placed)?;

    // Generate output
    if opts.verbose {
        eprintln!("Generating output...");
    }
    let config = output::OutputConfig {
        strip_all: opts.strip_all,
    };
    let output_data = output::generate(&link_layout, &objects, &symtab, &config)?;

    let output_path = opts
        .output_file
        .as_ref()
        .ok_or(error::Error::NoOutput)?;
    std::fs::write(output_path, &output_data)?;

    if opts.verbose {
        eprintln!("Written {} bytes to {output_path}", output_data.len());
    }

    // Map file
    if let Some(ref map_path) = opts.map_file {
        let map = generate_map(&ldf, &link_layout, &symtab);
        std::fs::write(map_path, map)?;
        if opts.verbose {
            eprintln!("Map file written to {map_path}");
        }
    }

    eprintln!("Link successful.");
    Ok(())
}

/// Section index marker for absolute-value symbols (ELF SHN_ABS).
/// Script-constant assignments lack a real section to live in, so
/// their symbols point here. Relocation callers special-case this
/// value: no section lookup, no address rebase, just use the stored
/// value directly.
const SHN_ABS: u16 = 0xfff1;

/// Evaluate the script-constant assignments collected from the LDF
/// and install each resolved value as a global SHN_ABS symbol in
/// `symtab`. A new name-alias pass also populates the two-dialect
/// variants so references in either form can resolve.
fn install_script_symbols(
    ldf: &ldf_ast::Ldf,
    link_layout: &layout::Layout,
    symtab: &mut resolve::SymbolTable,
) -> error::Result<()> {
    let values = script_eval::evaluate(&ldf.script_assignments, link_layout)?;
    for (name, value) in &values {
        // Encode the st_info byte for a global object-type symbol:
        // bind=GLOBAL, type=OBJECT. `object_idx = 0` is a benign
        // placeholder; the SHN_ABS shndx tells downstream code to
        // ignore the section index.
        let sym = resolve::ResolvedSymbol {
            object_idx: 0,
            value: *value,
            size: 0,
            section_idx: SHN_ABS,
            info: (selelf::elf::STB_GLOBAL << 4) | selelf::elf::STT_OBJECT,
            is_weak: false,
        };
        symtab.symbols.insert(name.clone(), sym.clone());
        // Install two-dialect aliases. The existing resolve pass
        // already did this for symbols defined in input objects; we
        // reapply the same rule so a script symbol named
        // `___ldf_pmcachesize` also satisfies a reference written
        // as `__ldf_pmcachesize`.
        for alias in resolve::name_aliases(name) {
            symtab.symbols.entry(alias).or_insert_with(|| sym.clone());
        }
    }
    // Drop any remaining undefined-symbol entries that the newly
    // installed script symbols satisfy. The resolve pass built
    // `symtab.undefined` from references in input objects; those
    // references can now be answered.
    symtab.undefined.retain(|name| {
        !symtab.symbols.contains_key(name)
            && !resolve::name_aliases(name)
                .iter()
                .any(|a| symtab.symbols.contains_key(a))
    });
    Ok(())
}

/// Seed preprocessor definitions for the given processor. Users can
/// still override with `-MD` or cancel with `-MUD` via the CLI, which
/// are applied before this call.
fn seed_defaults_for_proc(preproc: &mut ldf_preproc::Preproc, processor: Option<&str>) {
    let only_if_unset = |pp: &mut ldf_preproc::Preproc, name: &str, value: &str| {
        if !pp.defines.contains_key(name) {
            pp.define_simple(name, value);
        }
    };

    // Base macro that every SHARC+ LDF tests for. Always defined.
    only_if_unset(preproc, "__SHARCPLUS__", "1");
    only_if_unset(preproc, "__ADI_SHARCPLUS__", "1");
    only_if_unset(preproc, "__SHORT_WORD_CODE__", "1");

    // Processor-family macros. Selecting a 2156x chip turns on the 2156x
    // family flag so included headers take the 2156x branch.
    if let Some(p) = processor {
        let upper = p.to_ascii_uppercase();
        // Strip any `ADSP-` prefix for the canonical symbol, e.g. ADSP-21569
        // becomes `__ADSP21569__`.
        let core_name = upper.strip_prefix("ADSP-").unwrap_or(&upper);
        let sym = format!("__{}__", core_name.replace('-', ""));
        only_if_unset(preproc, &sym, "1");

        // Chip-family flags referenced by the LDFs seld consumes.
        if core_name.starts_with("2156") {
            only_if_unset(preproc, "__ADSP2156X_FAMILY__", "1");
            only_if_unset(preproc, "__ADSPSC58X_FAMILY__", "1");
        }
    } else {
        // No `-proc` given: assume 21569 for the linker fuzz corpus.
        only_if_unset(preproc, "__ADSP21569__", "1");
        only_if_unset(preproc, "__ADSP2156X_FAMILY__", "1");
    }
}

fn generate_map(
    ldf: &ldf_ast::Ldf,
    link_layout: &layout::Layout,
    symtab: &resolve::SymbolTable,
) -> String {
    let mut out = String::new();
    out.push_str("Linker Map File\n");
    out.push_str("===============\n\n");

    if let Some(ref arch) = ldf.architecture {
        out.push_str(&format!("Architecture: {arch}\n\n"));
    }

    out.push_str("Memory Segments:\n");
    for seg in &ldf.memory {
        out.push_str(&format!(
            "  {:<24} 0x{:08x} - 0x{:08x}  width={}\n",
            seg.name, seg.start, seg.end, seg.width
        ));
    }

    out.push_str("\nPlaced Sections:\n");
    for ps in &link_layout.placed {
        out.push_str(&format!(
            "  {:<24} 0x{:08x}  size=0x{:x}  -> {}\n",
            ps.output_name, ps.address, ps.size, ps.target_memory
        ));
    }

    out.push_str("\nGlobal Symbols:\n");
    let mut syms: Vec<_> = symtab.symbols.iter().collect();
    syms.sort_by_key(|(name, _)| name.to_string());
    for (name, resolved) in syms {
        out.push_str(&format!("  {:<32} 0x{:08x}\n", name, resolved.value));
    }

    if let Some(entry) = link_layout.entry_address {
        out.push_str(&format!("\nEntry point: 0x{entry:08x}\n"));
    }

    out
}
