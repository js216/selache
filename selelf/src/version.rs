// SPDX-License-Identifier: GPL-3.0
// version.rs --- Archive version metadata parsing and formatting
// Copyright (c) 2026 Jakob Kastelic

use crate::elf;
use crate::error::Result;

/// Version metadata stored in `__version.doj`.
#[derive(Debug, Clone, Default)]
pub struct VersionInfo {
    pub library_built: Option<String>,
    pub library_name: Option<String>,
    pub library_version: Option<String>,
    pub platform: Option<String>,
    pub silicon: Option<String>,
    pub special_notes: Option<String>,
    pub special_options: Option<String>,
    pub user_version: Option<String>,
    pub selar_version: Option<String>,
    pub log: Option<String>,
    /// User-defined key-value pairs from -tx files.
    pub user_defined: Vec<(String, String)>,
}

/// Parse a `__version.doj` ELF object to extract version metadata.
pub fn parse_version_elf(data: &[u8]) -> Result<VersionInfo> {
    let hdr = elf::parse_header(data)?;
    let e = hdr.ei_data;
    let mut info = VersionInfo::default();

    if hdr.e_shoff == 0 || hdr.e_shnum == 0 {
        return Ok(info);
    }

    // Read all section headers
    let mut sections = Vec::with_capacity(hdr.e_shnum as usize);
    for i in 0..hdr.e_shnum as usize {
        let off = hdr.e_shoff as usize + i * hdr.e_shentsize as usize;
        if off + hdr.e_shentsize as usize > data.len() {
            break;
        }
        sections.push(elf::parse_section_header(&data[off..], e));
    }

    // Read shstrtab to get section names
    if hdr.e_shstrndx as usize >= sections.len() {
        return Ok(info);
    }
    let shstrtab_sec = &sections[hdr.e_shstrndx as usize];
    let shstrtab_off = shstrtab_sec.sh_offset as usize;
    let shstrtab_sz = shstrtab_sec.sh_size as usize;
    if shstrtab_off + shstrtab_sz > data.len() {
        return Ok(info);
    }
    let shstrtab = &data[shstrtab_off..shstrtab_off + shstrtab_sz];

    // For each section of type SHT_STRTAB, match name to version field
    for sec in &sections {
        if sec.sh_type != elf::SHT_STRTAB {
            continue;
        }
        let name_off = sec.sh_name as usize;
        let sec_name = read_c_string(shstrtab, name_off);
        if sec_name.is_empty() {
            continue;
        }

        // Read section content as a string value (skip leading null)
        let content_off = sec.sh_offset as usize;
        let content_sz = sec.sh_size as usize;
        if content_off + content_sz > data.len() || content_sz == 0 {
            continue;
        }
        let raw = &data[content_off..content_off + content_sz];
        let value = extract_strtab_value(raw);

        // Match against known keys
        match sec_name.as_str() {
            "Library_Built:" => info.library_built = Some(value),
            "Library_Name:" => info.library_name = Some(value),
            "Library_Version:" => info.library_version = Some(value),
            "Platform:" => info.platform = Some(value),
            "Silicon" => info.silicon = Some(value),
            "Special_Notes:" => info.special_notes = Some(value),
            "Special_Options:" => info.special_options = Some(value),
            "UserVersion" => info.user_version = Some(value),
            "selarVersion" => info.selar_version = Some(value),
            "__log" => info.log = Some(value),
            // Skip .strtab, .symtab, .adi.attributes, etc.
            n if n.starts_with('.') => {}
            _ => {
                // User-defined section
                info.user_defined.push((sec_name, value));
            }
        }
    }

    Ok(info)
}

/// Extract the string value from a strtab section.
/// The content is typically: \0 + value_string + \0, or multiple strings.
fn extract_strtab_value(raw: &[u8]) -> String {
    // Skip leading null bytes
    let start = raw.iter().position(|&b| b != 0).unwrap_or(raw.len());
    if start >= raw.len() {
        return String::new();
    }
    // Read until null or end
    let end = raw[start..]
        .iter()
        .position(|&b| b == 0)
        .map(|p| start + p)
        .unwrap_or(raw.len());
    String::from_utf8_lossy(&raw[start..end]).to_string()
}

fn read_c_string(data: &[u8], offset: usize) -> String {
    if offset >= data.len() {
        return String::new();
    }
    let end = data[offset..]
        .iter()
        .position(|&b| b == 0)
        .map(|p| offset + p)
        .unwrap_or(data.len());
    String::from_utf8_lossy(&data[offset..end]).to_string()
}

impl VersionInfo {
    /// Returns true if any version field has a real value (not `*No Value*`).
    pub fn has_version_data(&self) -> bool {
        let fields: &[&Option<String>] = &[
            &self.library_built,
            &self.library_name,
            &self.library_version,
            &self.platform,
            &self.silicon,
            &self.special_notes,
            &self.special_options,
            &self.user_version,
            &self.selar_version,
            &self.log,
        ];
        for v in fields.iter().copied().flatten() {
            if v != "*No Value*" {
                return true;
            }
        }
        if !self.user_defined.is_empty() {
            return true;
        }
        false
    }

    /// Format a version field line as `::name: value`.
    fn format_field(key: &str, value: &str) -> String {
        format!("::{key}: {value}")
    }

    /// Format version info for `-pv` output.
    /// Shows library metadata fields and UserVersion, skipping `*No Value*`.
    /// Does not show selarVersion.
    pub fn format_version(&self) -> String {
        let mut lines = Vec::new();
        let metadata_fields: &[(&str, &Option<String>)] = &[
            ("Library_Built:", &self.library_built),
            ("Library_Name:", &self.library_name),
            ("Library_Version:", &self.library_version),
            ("Platform:", &self.platform),
            ("Silicon", &self.silicon),
            ("Special_Notes:", &self.special_notes),
            ("Special_Options:", &self.special_options),
        ];
        for (key, val) in metadata_fields {
            if let Some(v) = val {
                if v != "*No Value*" {
                    lines.push(Self::format_field(key, v));
                }
            }
        }
        if let Some(v) = &self.user_version {
            if v != "*No Value*" {
                lines.push(format!("::User Archive Version Info: {v}"));
            }
        }
        for (key, val) in &self.user_defined {
            lines.push(Self::format_field(key, val));
        }
        lines.join("\n")
    }

    /// Format all version info for `-pva` output.
    /// Shows selar version at top, then library metadata and UserVersion.
    /// Skips fields with `*No Value*`.
    pub fn format_all(&self) -> String {
        let mut lines = Vec::new();
        // UserVersion first (if present)
        if let Some(v) = &self.user_version {
            if v != "*No Value*" {
                lines.push(format!("::User Archive Version Info: {v}"));
            }
        }
        // selar version
        if let Some(v) = &self.selar_version {
            if v != "*No Value*" {
                lines.push(format!("::selar Version: {v}"));
            }
        }
        // Library metadata fields
        let metadata_fields: &[(&str, &Option<String>)] = &[
            ("Library_Built:", &self.library_built),
            ("Library_Name:", &self.library_name),
            ("Library_Version:", &self.library_version),
            ("Platform:", &self.platform),
            ("Silicon", &self.silicon),
            ("Special_Notes:", &self.special_notes),
            ("Special_Options:", &self.special_options),
        ];
        for (key, val) in metadata_fields {
            if let Some(v) = val {
                if v != "*No Value*" {
                    lines.push(Self::format_field(key, v));
                }
            }
        }
        // User-defined fields
        for (key, val) in &self.user_defined {
            lines.push(Self::format_field(key, val));
        }
        lines.join("\n")
    }

    /// Parse a `-tx` format file: `NAME value` per line.
    pub fn apply_tx_file(&mut self, content: &str) {
        for line in content.lines() {
            let line = line.trim();
            if line.is_empty() {
                continue;
            }
            let mut parts = line.splitn(2, char::is_whitespace);
            if let Some(key) = parts.next() {
                let value = parts.next().unwrap_or("").trim().to_string();
                // Check if it maps to a known field
                match key {
                    "UserVersion" => self.user_version = Some(value),
                    _ => {
                        // Update existing or add new
                        if let Some(entry) = self.user_defined.iter_mut().find(|(k, _)| k == key) {
                            entry.1 = value;
                        } else {
                            self.user_defined.push((key.to_string(), value));
                        }
                    }
                }
            }
        }
    }

    /// Validate and set version with `-twc` format (nn.nn.nn).
    pub fn set_validated_version(&mut self, ver: &str) -> Result<()> {
        let parts: Vec<&str> = ver.split('.').collect();
        if parts.len() == 3 && parts.iter().all(|p| p.parse::<u32>().is_ok()) {
            self.user_version = Some(ver.to_string());
            Ok(())
        } else {
            eprintln!(
                "warning: version '{ver}' does not match nn.nn.nn format, using default 0.0.0"
            );
            self.user_version = Some("0.0.0".to_string());
            Ok(())
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_extract_strtab_value() {
        let raw = b"\0hello\0";
        assert_eq!(extract_strtab_value(raw), "hello");
    }

    #[test]
    fn test_extract_strtab_value_empty() {
        let raw = b"\0";
        assert_eq!(extract_strtab_value(raw), "");
    }

    #[test]
    fn test_format_version_user_only() {
        let info = VersionInfo {
            user_version: Some("1.2.3".into()),
            ..Default::default()
        };
        assert_eq!(info.format_version(), "::User Archive Version Info: 1.2.3");
    }

    #[test]
    fn test_format_version_metadata_fields() {
        let info = VersionInfo {
            library_name: Some("   Test Library".into()),
            platform: Some("       ADSP-SC589".into()),
            ..Default::default()
        };
        let result = info.format_version();
        assert!(result.contains("::Library_Name:: "));
        assert!(result.contains("::Platform:: "));
    }

    #[test]
    fn test_format_version_skips_no_value() {
        let info = VersionInfo {
            user_version: Some("*No Value*".into()),
            library_name: Some("*No Value*".into()),
            ..Default::default()
        };
        assert_eq!(info.format_version(), "");
    }

    #[test]
    fn test_format_all_includes_selar_version() {
        let info = VersionInfo {
            user_version: Some("1.0".into()),
            selar_version: Some("5.4.0.1".into()),
            ..Default::default()
        };
        let result = info.format_all();
        assert!(result.contains("::User Archive Version Info: 1.0"));
        assert!(result.contains("::selar Version: 5.4.0.1"));
    }

    #[test]
    fn test_has_version_data() {
        let empty = VersionInfo::default();
        assert!(!empty.has_version_data());

        let with_user = VersionInfo {
            user_version: Some("1.0".into()),
            ..Default::default()
        };
        assert!(with_user.has_version_data());

        let no_value_only = VersionInfo {
            user_version: Some("*No Value*".into()),
            ..Default::default()
        };
        assert!(!no_value_only.has_version_data());
    }

    #[test]
    fn test_apply_tx_file() {
        let mut info = VersionInfo::default();
        info.apply_tx_file("UserVersion 2.0\nCustomField hello world\n");
        assert_eq!(info.user_version.as_deref(), Some("2.0"));
        assert_eq!(info.user_defined.len(), 1);
        assert_eq!(info.user_defined[0], ("CustomField".to_string(), "hello world".to_string()));
    }

    #[test]
    fn test_set_validated_version() {
        let mut info = VersionInfo::default();
        info.set_validated_version("1.2.3").unwrap();
        assert_eq!(info.user_version.as_deref(), Some("1.2.3"));
    }
}
