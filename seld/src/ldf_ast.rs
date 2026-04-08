// SPDX-License-Identifier: GPL-3.0
// ldf_ast.rs --- AST node types for the LDF linker description language
// Copyright (c) 2026 Jakob Kastelic

/// Root of an LDF file.
#[derive(Debug, Clone, PartialEq)]
pub struct Ldf {
    pub architecture: Option<String>,
    pub variables: Vec<VarDecl>,
    pub memory: Vec<MemorySegment>,
    pub processors: Vec<Processor>,
}

/// A variable declaration: `$NAME = value1, value2 ;`
#[derive(Debug, Clone, PartialEq)]
pub struct VarDecl {
    pub name: String,
    pub values: Vec<String>,
}

/// A memory segment inside the MEMORY block.
#[derive(Debug, Clone, PartialEq)]
pub struct MemorySegment {
    pub name: String,
    pub seg_type: SegType,
    pub mem_kind: MemKind,
    pub start: u32,
    pub end: u32,
    pub width: u32,
}

/// Segment type qualifier.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SegType {
    Pm,
    Dm,
    Bw,
    Sw,
    Data64,
}

/// Memory kind.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MemKind {
    Ram,
    Rom,
}

/// A PROCESSOR block.
#[derive(Debug, Clone, PartialEq)]
pub struct Processor {
    pub name: String,
    pub output: Option<String>,
    pub entry: Option<String>,
    pub keeps: Vec<String>,
    pub sections: Vec<OutputSection>,
    pub link_against: Vec<String>,
}

/// An output section inside SECTIONS.
#[derive(Debug, Clone, PartialEq)]
pub struct OutputSection {
    pub name: String,
    pub qualifier: SectionQualifier,
    pub input_sections: Vec<InputSectionSpec>,
    pub alignment: Option<u32>,
    pub fill: Option<u32>,
    pub reserve: Option<Reserve>,
    pub target_memory: String,
}

/// Section qualifier keyword.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SectionQualifier {
    Pm,
    Dm,
    Sw,
    Bw,
    NoInit,
    ZeroInit,
    Data64,
    None,
}

/// An INPUT_SECTIONS specification.
#[derive(Debug, Clone, PartialEq)]
pub struct InputSectionSpec {
    pub objects: String,
    pub sections: Vec<String>,
}

/// A RESERVE directive inside an output section.
#[derive(Debug, Clone, PartialEq)]
pub struct Reserve {
    pub name: String,
    pub length_name: String,
    pub length: u32,
    pub align: u32,
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn default_ldf() {
        let ldf = Ldf {
            architecture: None,
            variables: vec![],
            memory: vec![],
            processors: vec![],
        };
        assert!(ldf.architecture.is_none());
        assert!(ldf.memory.is_empty());
    }

    #[test]
    fn seg_type_equality() {
        assert_eq!(SegType::Pm, SegType::Pm);
        assert_ne!(SegType::Pm, SegType::Dm);
    }

    #[test]
    fn section_qualifier_equality() {
        assert_eq!(SectionQualifier::None, SectionQualifier::None);
        assert_ne!(SectionQualifier::Pm, SectionQualifier::Dm);
    }
}
