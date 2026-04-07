// SPDX-License-Identifier: GPL-3.0
// main.rs --- ELF archive tool entry point
// Copyright (c) 2026 Jakob Kastelic

mod archive;
mod cli;
mod error;
mod version;

use std::io::{self, Write};
use std::path::Path;
use std::process;

use cli::{Action, VersionTag};
use error::Error;
use selelf::version::VersionInfo;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.is_empty() {
        print_usage();
        process::exit(1);
    }

    if let Err(e) = run(&args) {
        eprintln!("selar: {e}");
        process::exit(1);
    }
}

fn run(args: &[String]) -> error::Result<()> {
    let opts = cli::parse_args(args)?;

    if opts.show_version && opts.library.is_empty() {
        println!("ELF Librarian/Archive Utility");
        println!("Version {}", env!("CARGO_PKG_VERSION"));
        return Ok(());
    }

    let lib_path = Path::new(&opts.library);

    match opts.action {
        Action::Create => {
            if opts.files.is_empty() {
                return Err(Error::MissingArgument("object files".into()));
            }
            let members = archive::load_members_from_files(&opts.files)?;
            if opts.verbose {
                for m in &members {
                    eprintln!("adding {}", m.name);
                }
            }
            let mut arch = selelf::archive::Archive::new();
            arch.members = members;
            apply_version_tag(&mut arch.version_info, &opts.version_tag)?;
            archive::write_file(&arch, lib_path)?;
            if opts.verbose {
                eprintln!("created {}", opts.library);
            }
        }

        Action::Append => {
            if opts.files.is_empty() {
                return Err(Error::MissingArgument("object files".into()));
            }
            let mut arch = selelf::archive::read_file(lib_path)?;
            let new_members = archive::load_members_from_files(&opts.files)?;
            if opts.verbose {
                for m in &new_members {
                    eprintln!("appending {}", m.name);
                }
            }
            arch.members.extend(new_members);
            if opts.clear_version {
                arch.version_info = VersionInfo::default();
            }
            apply_version_tag(&mut arch.version_info, &opts.version_tag)?;
            archive::write_file(&arch, lib_path)?;
        }

        Action::Delete => {
            if opts.files.is_empty() {
                return Err(Error::MissingArgument("member names".into()));
            }
            let mut arch = selelf::archive::read_file(lib_path)?;
            if opts.verbose {
                for name in &opts.files {
                    eprintln!("deleting {name}");
                }
            }
            archive::delete_members(&mut arch, &opts.files)?;
            if opts.clear_version {
                arch.version_info = VersionInfo::default();
            }
            apply_version_tag(&mut arch.version_info, &opts.version_tag)?;
            archive::write_file(&arch, lib_path)?;
        }

        Action::Extract => {
            let arch = selelf::archive::read_file(lib_path)?;
            let names = if opts.files.is_empty() {
                // Extract all
                arch.members.iter().map(|m| m.name.clone()).collect()
            } else {
                opts.files.clone()
            };
            if opts.verbose {
                for name in &names {
                    eprintln!("extracting {name}");
                }
            }
            archive::extract_members(&arch, &names)?;
        }

        Action::Print => {
            let arch = selelf::archive::read_file(lib_path)?;
            let stdout = io::stdout();
            let mut out = stdout.lock();
            if opts.files.is_empty() {
                archive::print_members(&arch, &mut out)?;
            } else {
                // Print only matching members
                for member in &arch.members {
                    for pattern in &opts.files {
                        if selelf::glob::matches(pattern, &member.name) {
                            writeln!(out, "{}", member.name)?;
                        }
                    }
                }
            }
        }

        Action::PrintVersion => {
            let arch = selelf::archive::read_file(lib_path)?;
            let stdout = io::stdout();
            let mut out = stdout.lock();
            archive::print_version(&arch, opts.print_all_version, &mut out)?;
        }

        Action::Replace => {
            if opts.files.is_empty() {
                return Err(Error::MissingArgument("object files".into()));
            }
            let mut arch = selelf::archive::read_file(lib_path)?;
            let new_members = archive::load_members_from_files(&opts.files)?;
            if opts.verbose {
                for m in &new_members {
                    eprintln!("replacing {}", m.name);
                }
            }
            archive::replace_members(&mut arch, &new_members)?;
            apply_version_tag(&mut arch.version_info, &opts.version_tag)?;
            archive::write_file(&arch, lib_path)?;
        }

        Action::Encrypt => {
            return Err(Error::NotImplemented("symbol encryption (-s)".into()));
        }
    }

    Ok(())
}

fn apply_version_tag(
    info: &mut VersionInfo,
    tag: &Option<VersionTag>,
) -> error::Result<()> {
    match tag {
        Some(VersionTag::Simple(s)) => {
            info.user_version = Some(s.clone());
        }
        Some(VersionTag::File(path)) => {
            let content = std::fs::read_to_string(path)?;
            info.apply_tx_file(&content);
        }
        Some(VersionTag::Validated(ver)) => {
            info.set_validated_version(ver)?;
        }
        None => {}
    }
    Ok(())
}

fn print_usage() {
    eprintln!("Usage: selar -[a|c|d|e|p|r] <options> library_file object_file ...");
    eprintln!("       selar -s [-v|ve] library_file in_library_file exclude_file type");
    eprintln!("       selar -version");
    eprintln!();
    eprintln!("The main selar commands are one of:");
    eprintln!("    -a        Append the named file(s) to the end of the library file");
    eprintln!("    -c        Create a new library from a list of files");
    eprintln!("    -d        Delete the named file(s) from the library");
    eprintln!("    -e        Extract the named file(s) from the library");
    eprintln!("    -p        Print a list of the files contained in the library");
    eprintln!("    -r        Replace the named file(s) in the library");
    eprintln!();
    eprintln!("Options that may be used:");
    eprintln!("    -M        is only available with -c; only print dependencies");
    eprintln!("    -MM       is only available with -c; print dependencies and create archive");
    eprintln!();
    eprintln!("    -i file   Specify file containing list of object files");
    eprintln!();
    eprintln!("    -v        print a verbose description of the actions taken by selar");
    eprintln!();
    eprintln!("    -t verno  Tag library with version information in string");
    eprintln!("    -tx file  Tag library with version information in file");
    eprintln!("    -twc ver  Tag library with version info in num.num.num form");
    eprintln!("    -tnv      Clear version information from library");
    eprintln!();
    eprintln!("    -w        Do not display any warnings");
    eprintln!("    -Wnnnn    Selectively disable warning specified by number");
    eprintln!();
    eprintln!("Special versions of commands:");
    eprintln!("    -pv       Print only version information in library");
    eprintln!("    -pva      Print all version information in library");
    eprintln!("    -anv      Append file(s) and clear version");
    eprintln!("    -dnv      Delete file(s) and clear version");
    eprintln!();
    eprintln!("The -version switch, alone on the command line, will print out the version of selar");
}
