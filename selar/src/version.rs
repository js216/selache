// SPDX-License-Identifier: GPL-3.0
// version.rs --- Version ELF synthesis for archive tagging
// Copyright (c) 2026 Jakob Kastelic

use selelf::elf::{self, Endian};
use selelf::version::VersionInfo;

/// Synthesize a `__version.doj` ELF object (big-endian) from version metadata.
pub fn synthesize_version_elf(info: &VersionInfo) -> Vec<u8> {
    let e = Endian::Big;

    // Collect all sections: first build the section name string table and content
    // Section layout:
    //   [0] NULL
    //   [1] .strtab (this is the shstrtab itself)
    //   [2] .symtab (empty)
    //   [3..N] value sections (SHT_STRTAB)
    //   [N] .adi.attributes

    struct SecDef {
        name: String,
        content: Vec<u8>,
        sh_type: u32,
    }

    let mut value_sections: Vec<SecDef> = Vec::new();

    // Helper: add a value section only if the value is Some and not empty.
    // Only include sections that have real values.
    let mut add_if_present = |key: &str, val: &Option<String>| {
        if let Some(v) = val {
            if !v.is_empty() {
                let mut c = vec![0u8]; // leading null
                c.extend_from_slice(v.as_bytes());
                c.push(0); // trailing null
                value_sections.push(SecDef {
                    name: key.to_string(),
                    content: c,
                    sh_type: elf::SHT_STRTAB,
                });
            }
        }
    };

    add_if_present("Library_Built:", &info.library_built);
    add_if_present("Library_Name:", &info.library_name);
    add_if_present("Library_Version:", &info.library_version);
    add_if_present("Platform:", &info.platform);
    add_if_present("Silicon", &info.silicon);
    add_if_present("Special_Notes:", &info.special_notes);
    add_if_present("Special_Options:", &info.special_options);
    add_if_present("UserVersion", &info.user_version);
    // Always include selarVersion, using our version if not set
    let selar_ver = info
        .selar_version
        .clone()
        .unwrap_or_else(|| env!("CARGO_PKG_VERSION").to_string());
    add_if_present("selarVersion", &Some(selar_ver));

    // __log section (only if present)
    add_if_present("__log", &info.log);

    // User-defined sections
    for (key, val) in &info.user_defined {
        let mut content = vec![0u8];
        content.extend_from_slice(val.as_bytes());
        content.push(0);
        value_sections.push(SecDef {
            name: key.clone(),
            content,
            sh_type: elf::SHT_STRTAB,
        });
    }

    // .adi.attributes section (processor-specific constant blob)
    let adi_attrs: Vec<u8> = vec![
        0x41, 0x00, 0x00, 0x00, 0x13, 0x41, 0x6e, 0x6f, 0x6e, 0x41, 0x44, 0x49, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x07, 0x08, 0x01,
    ];

    // Build shstrtab (section name string table)
    // Names: \0 + ".strtab\0" + ".symtab\0" + each value section name + "\0" + ".adi.attributes\0"
    let mut shstrtab = vec![0u8]; // initial null
    let strtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".strtab\0");
    let symtab_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".symtab\0");

    let mut sec_name_offsets: Vec<usize> = Vec::new();
    for sec in &value_sections {
        sec_name_offsets.push(shstrtab.len());
        shstrtab.extend_from_slice(sec.name.as_bytes());
        shstrtab.push(0);
    }
    let adi_name_off = shstrtab.len();
    shstrtab.extend_from_slice(b".adi.attributes\0");

    // Now compute layout
    // ELF header: 52 bytes
    // Then section contents starting at offset 52:
    //   [1] shstrtab content
    //   [2] symtab content (empty, 0 bytes)
    //   [3..N] value section contents
    //   [N] .adi.attributes content
    // Then section header table

    let ehdr_size: usize = 52;
    let mut content_offset = ehdr_size;

    // shstrtab
    let shstrtab_file_off = content_offset;
    content_offset += shstrtab.len();

    // symtab (empty)
    let symtab_file_off = content_offset;
    // no content, size = 0

    // value sections
    let mut val_sec_offsets: Vec<usize> = Vec::new();
    for sec in &value_sections {
        val_sec_offsets.push(content_offset);
        content_offset += sec.content.len();
    }

    // .adi.attributes
    let adi_file_off = content_offset;
    content_offset += adi_attrs.len();

    // Section header table starts here
    let sh_table_off = content_offset;

    // Total section count: 1 (NULL) + 1 (strtab) + 1 (symtab) + value_sections + 1 (adi)
    let total_sections = 3 + value_sections.len() + 1;

    // Build the ELF
    let total_size = sh_table_off + total_sections * 40;
    let mut out = vec![0u8; total_size];

    // ELF header
    out[0..4].copy_from_slice(&elf::ELF_MAGIC);
    out[4] = 1; // ELFCLASS32
    out[5] = elf::ELFDATA2MSB;
    out[6] = 1; // EV_CURRENT
    // e_type = ET_EXEC (2)
    out[16..18].copy_from_slice(&e.write_u16(2));
    // e_machine = 0
    out[18..20].copy_from_slice(&e.write_u16(0));
    // e_version = 1
    out[20..24].copy_from_slice(&e.write_u32(1));
    // e_ehsize = 52
    out[32..36].copy_from_slice(&e.write_u32(sh_table_off as u32)); // e_shoff
    out[40..44].copy_from_slice(&e.write_u32(0)); // e_flags
    out[44..46].copy_from_slice(&e.write_u16(52)); // e_ehsize
    out[46..48].copy_from_slice(&e.write_u16(40)); // e_shentsize
    out[48..50].copy_from_slice(&e.write_u16(total_sections as u16)); // e_shnum
    out[50..52].copy_from_slice(&e.write_u16(1)); // e_shstrndx = 1

    // Copy section contents
    out[shstrtab_file_off..shstrtab_file_off + shstrtab.len()].copy_from_slice(&shstrtab);
    for (i, sec) in value_sections.iter().enumerate() {
        let off = val_sec_offsets[i];
        out[off..off + sec.content.len()].copy_from_slice(&sec.content);
    }
    out[adi_file_off..adi_file_off + adi_attrs.len()].copy_from_slice(&adi_attrs);

    // Write section headers
    let write_shdr =
        |out: &mut Vec<u8>, idx: usize, name: u32, stype: u32, offset: u32, size: u32| {
            let base = sh_table_off + idx * 40;
            out[base..base + 4].copy_from_slice(&e.write_u32(name));
            out[base + 4..base + 8].copy_from_slice(&e.write_u32(stype));
            // sh_flags, sh_addr = 0 (already zero)
            out[base + 16..base + 20].copy_from_slice(&e.write_u32(offset));
            out[base + 20..base + 24].copy_from_slice(&e.write_u32(size));
            // sh_link, sh_info, sh_addralign, sh_entsize = 0
        };

    // [0] NULL section (all zeros, already done)

    // [1] .strtab (shstrtab)
    write_shdr(
        &mut out,
        1,
        strtab_name_off as u32,
        elf::SHT_STRTAB,
        shstrtab_file_off as u32,
        shstrtab.len() as u32,
    );

    // [2] .symtab (empty)
    write_shdr(
        &mut out,
        2,
        symtab_name_off as u32,
        elf::SHT_SYMTAB,
        symtab_file_off as u32,
        0,
    );

    // [3..N] value sections
    for (i, sec) in value_sections.iter().enumerate() {
        write_shdr(
            &mut out,
            3 + i,
            sec_name_offsets[i] as u32,
            sec.sh_type,
            val_sec_offsets[i] as u32,
            sec.content.len() as u32,
        );
    }

    // [N] .adi.attributes
    write_shdr(
        &mut out,
        3 + value_sections.len(),
        adi_name_off as u32,
        0x7000_0002, // processor attributes type
        adi_file_off as u32,
        adi_attrs.len() as u32,
    );

    out
}

#[cfg(test)]
mod tests {
    use super::*;
    use selelf::version::parse_version_elf;

    #[test]
    fn test_synthesize_and_parse() {
        let info = VersionInfo {
            library_version: Some("1.0.0".into()),
            platform: Some("ADSP-21569".into()),
            ..Default::default()
        };
        let elf_data = synthesize_version_elf(&info);
        let parsed = parse_version_elf(&elf_data).unwrap();
        assert_eq!(parsed.library_version.as_deref(), Some("1.0.0"));
        assert_eq!(parsed.platform.as_deref(), Some("ADSP-21569"));
    }

    #[test]
    fn test_empty_version() {
        let info = VersionInfo::default();
        let elf_data = synthesize_version_elf(&info);
        let parsed = parse_version_elf(&elf_data).unwrap();
        // With default info, only selarVersion is present (auto-filled)
        assert!(parsed.selar_version.is_some());
        // Library metadata fields are not present (no *No Value* sections)
        assert!(parsed.library_version.is_none());
    }

    #[test]
    fn test_user_defined_fields() {
        let info = VersionInfo {
            user_version: Some("my_app v2".into()),
            selar_version: Some("0.1.0".into()),
            log: Some("created by selar".into()),
            ..Default::default()
        };
        let elf_data = synthesize_version_elf(&info);
        let parsed = parse_version_elf(&elf_data).unwrap();
        assert_eq!(parsed.user_version.as_deref(), Some("my_app v2"));
        assert_eq!(parsed.selar_version.as_deref(), Some("0.1.0"));
        assert_eq!(parsed.log.as_deref(), Some("created by selar"));
    }
}
