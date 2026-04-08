// SPDX-License-Identifier: GPL-3.0
// main.rs --- Entry point for the LDF-driven seld
// Copyright (c) 2026 Jakob Kastelic

mod cli;
mod error;
mod layout;
mod ldf_ast;
mod ldf_lex;
mod ldf_parse;
mod output;
mod relocate;
mod resolve;

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

    // Build preprocessor defines from CLI
    let mut defines = opts.defines.clone();
    for name in &opts.undefines {
        defines.remove(name);
    }

    if opts.verbose {
        eprintln!("Parsing LDF: {ldf_path}");
    }

    let ldf = ldf_parse::parse(&ldf_src, &defines)?;

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

    if opts.verbose {
        eprintln!("Loaded {} input objects", objects.len());
    }

    // Symbol resolution
    if opts.verbose {
        eprintln!("Resolving symbols...");
    }
    let symtab = resolve::resolve(&objects)?;

    // Report unresolved symbols (not fatal if they are all from eliminated sections, but
    // for now treat as errors)
    if !symtab.undefined.is_empty() {
        for sym in &symtab.undefined {
            eprintln!("warning: unresolved symbol: {sym}");
        }
        // For a linker, unresolved symbols are typically fatal
        return Err(error::Error::UnresolvedSymbol(
            symtab.undefined[0].clone(),
        ));
    }

    if opts.verbose {
        eprintln!("Resolved {} global symbols", symtab.symbols.len());
    }

    // Build variable table from LDF
    let mut variables: HashMap<String, Vec<String>> = HashMap::new();
    for var in &ldf.variables {
        variables.insert(var.name.clone(), var.values.clone());
    }
    // Add command-line objects as $COMMAND_LINE_OBJECTS
    let cli_objs: Vec<String> = opts.input_files.clone();
    variables.insert("$COMMAND_LINE_OBJECTS".to_string(), cli_objs);
    // Add output file
    if let Some(ref out) = opts.output_file {
        variables.insert("$COMMAND_LINE_OUTPUT_FILE".to_string(), vec![out.clone()]);
    }

    // Layout
    if opts.verbose {
        eprintln!("Performing section layout...");
    }
    let entry_name = opts
        .entry
        .as_deref()
        .or(ldf.processors.first().and_then(|p| p.entry.as_deref()));
    let mut link_layout = layout::layout(&ldf, &objects, &variables, entry_name)?;

    if opts.verbose {
        eprintln!(
            "Placed {} sections, entry=0x{:08x}",
            link_layout.placed.len(),
            link_layout.entry_address.unwrap_or(0)
        );
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
