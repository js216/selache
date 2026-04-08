// SPDX-License-Identifier: GPL-3.0
// ldf_parse.rs --- Recursive descent parser for the LDF language
// Copyright (c) 2026 Jakob Kastelic

use std::collections::HashMap;

use crate::error::{Error, Result};
use crate::ldf_ast::*;
use crate::ldf_lex::{self, Spanned, Token};

/// Parse an LDF source string into an AST.
pub fn parse(src: &str, defines: &HashMap<String, String>) -> Result<Ldf> {
    let tokens = ldf_lex::tokenize(src, defines)
        .map_err(Error::Parse)?;
    let mut p = Parser { tokens, pos: 0 };
    p.parse_ldf()
}

struct Parser {
    tokens: Vec<Spanned>,
    pos: usize,
}

impl Parser {
    fn peek(&self) -> &Token {
        self.tokens
            .get(self.pos)
            .map(|s| &s.tok)
            .unwrap_or(&Token::Eof)
    }

    fn at_eof(&self) -> bool {
        matches!(self.peek(), Token::Eof)
    }

    fn advance(&mut self) -> &Token {
        let tok = self.tokens.get(self.pos).map(|s| &s.tok).unwrap_or(&Token::Eof);
        if self.pos < self.tokens.len() {
            self.pos += 1;
        }
        tok
    }

    fn expect_ident(&mut self) -> Result<String> {
        match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                Ok(s)
            }
            other => Err(self.err(format!("expected identifier, got {}", tok_name(&other)))),
        }
    }

    fn expect(&mut self, expected: &Token) -> Result<()> {
        let got = self.peek().clone();
        if &got == expected {
            self.advance();
            Ok(())
        } else {
            Err(self.err(format!(
                "expected {}, got {}",
                tok_name(expected),
                tok_name(&got)
            )))
        }
    }

    fn expect_number(&mut self) -> Result<u32> {
        match self.peek().clone() {
            Token::Number(n) => {
                self.advance();
                Ok(n)
            }
            other => Err(self.err(format!("expected number, got {}", tok_name(&other)))),
        }
    }

    fn err(&self, msg: String) -> Error {
        let loc = self.tokens.get(self.pos).map(|s| s.loc);
        if let Some(loc) = loc {
            Error::Parse(format!("line {}:{}: {}", loc.line, loc.col, msg))
        } else {
            Error::Parse(msg)
        }
    }

    fn parse_ldf(&mut self) -> Result<Ldf> {
        let mut ldf = Ldf {
            architecture: None,
            variables: Vec::new(),
            memory: Vec::new(),
            processors: Vec::new(),
        };

        while !self.at_eof() {
            match self.peek().clone() {
                Token::Ident(ref s) if s == "ARCHITECTURE" => {
                    ldf.architecture = Some(self.parse_architecture()?);
                }
                Token::Ident(ref s) if s == "MEMORY" => {
                    ldf.memory.extend(self.parse_memory()?);
                }
                Token::Ident(ref s) if s == "PROCESSOR" => {
                    ldf.processors.push(self.parse_processor()?);
                }
                Token::Ident(ref s) if s == "SEARCH_DIR" => {
                    self.parse_search_dir()?;
                }
                Token::Variable(_) => {
                    ldf.variables.push(self.parse_var_decl()?);
                }
                Token::Semi => {
                    self.advance();
                }
                _ => {
                    return Err(self.err(format!(
                        "unexpected token: {}",
                        tok_name(self.peek())
                    )));
                }
            }
        }

        Ok(ldf)
    }

    fn parse_architecture(&mut self) -> Result<String> {
        self.expect_ident()?; // ARCHITECTURE
        self.expect(&Token::LParen)?;
        let name = self.expect_ident()?;
        self.expect(&Token::RParen)?;
        Ok(name)
    }

    fn parse_search_dir(&mut self) -> Result<()> {
        self.expect_ident()?; // SEARCH_DIR
        self.expect(&Token::LParen)?;
        // Skip contents until closing paren
        let mut depth = 1u32;
        while depth > 0 {
            match self.advance() {
                Token::LParen => depth += 1,
                Token::RParen => depth -= 1,
                Token::Eof => return Err(self.err("unterminated SEARCH_DIR".into())),
                _ => {}
            }
        }
        // Optional semicolon
        if matches!(self.peek(), Token::Semi) {
            self.advance();
        }
        Ok(())
    }

    /// Read a processor name that may start with a number (e.g., `21569_CORE0`).
    fn read_processor_name(&mut self) -> Result<String> {
        let mut name = match self.peek().clone() {
            Token::Ident(s) => {
                self.advance();
                s
            }
            Token::Number(n) => {
                self.advance();
                n.to_string()
            }
            other => {
                return Err(self.err(format!("expected processor name, got {}", tok_name(&other))));
            }
        };
        // Consume trailing _IDENT parts that got split by the lexer
        while matches!(self.peek(), Token::Ident(_)) {
            if let Token::Ident(s) = self.peek().clone() {
                if s.starts_with('_') {
                    self.advance();
                    name.push_str(&s);
                } else {
                    break;
                }
            }
        }
        Ok(name)
    }

    /// Read a dotted name: `ident(.ident)*` -- handles filenames like `libcc.dlb`.
    fn read_dotted_name(&mut self) -> Result<String> {
        let first = match self.peek().clone() {
            Token::Ident(s) => { self.advance(); s }
            Token::StringLit(s) => { self.advance(); return Ok(s); }
            Token::Variable(s) => { self.advance(); return Ok(s); }
            other => return Err(self.err(format!("expected name, got {}", tok_name(&other)))),
        };
        let mut result = first;
        // Consume .ident sequences (e.g., libcc.dlb)
        while matches!(self.peek(), Token::Dot) {
            // Peek ahead: is this dot followed by an ident?
            if self.tokens.get(self.pos + 1).map(|s| matches!(&s.tok, Token::Ident(_))).unwrap_or(false) {
                self.advance(); // consume dot
                if let Token::Ident(ext) = self.peek().clone() {
                    self.advance();
                    result.push('.');
                    result.push_str(&ext);
                }
            } else {
                break;
            }
        }
        Ok(result)
    }

    fn parse_var_decl(&mut self) -> Result<VarDecl> {
        let name = match self.peek().clone() {
            Token::Variable(s) => {
                self.advance();
                s
            }
            other => return Err(self.err(format!("expected variable, got {}", tok_name(&other)))),
        };
        self.expect(&Token::Equals)?;

        let mut values = Vec::new();
        loop {
            match self.peek().clone() {
                Token::Semi => {
                    self.advance();
                    break;
                }
                Token::Comma => {
                    self.advance();
                }
                Token::Ident(_) => {
                    values.push(self.read_dotted_name()?);
                }
                Token::StringLit(s) => {
                    self.advance();
                    values.push(s);
                }
                Token::Variable(s) => {
                    self.advance();
                    values.push(s);
                }
                Token::Eof => break,
                _ => {
                    return Err(self.err(format!(
                        "unexpected token in variable declaration: {}",
                        tok_name(self.peek())
                    )));
                }
            }
        }

        Ok(VarDecl { name, values })
    }

    fn parse_memory(&mut self) -> Result<Vec<MemorySegment>> {
        self.expect_ident()?; // MEMORY
        self.expect(&Token::LBrace)?;

        let mut segments = Vec::new();
        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            segments.push(self.parse_mem_segment()?);
        }
        self.expect(&Token::RBrace)?;
        Ok(segments)
    }

    fn parse_mem_segment(&mut self) -> Result<MemorySegment> {
        let name = self.expect_ident()?;
        self.expect(&Token::LBrace)?;

        let mut seg_type = None;
        let mut mem_kind = None;
        let mut start = None;
        let mut end = None;
        let mut width = None;

        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            let kw = self.expect_ident()?;
            match kw.as_str() {
                "TYPE" => {
                    self.expect(&Token::LParen)?;
                    let t = self.expect_ident()?;
                    seg_type = Some(parse_seg_type(&t)?);
                    let k = self.expect_ident()?;
                    mem_kind = Some(parse_mem_kind(&k)?);
                    self.expect(&Token::RParen)?;
                }
                "START" => {
                    self.expect(&Token::LParen)?;
                    start = Some(self.expect_number()?);
                    self.expect(&Token::RParen)?;
                }
                "END" => {
                    self.expect(&Token::LParen)?;
                    end = Some(self.expect_number()?);
                    self.expect(&Token::RParen)?;
                }
                "WIDTH" => {
                    self.expect(&Token::LParen)?;
                    width = Some(self.expect_number()?);
                    self.expect(&Token::RParen)?;
                }
                other => {
                    return Err(self.err(format!("unknown memory segment property: {other}")));
                }
            }
        }
        self.expect(&Token::RBrace)?;

        Ok(MemorySegment {
            name,
            seg_type: seg_type.ok_or_else(|| self.err("missing TYPE in memory segment".into()))?,
            mem_kind: mem_kind.ok_or_else(|| self.err("missing memory kind in TYPE".into()))?,
            start: start.ok_or_else(|| self.err("missing START in memory segment".into()))?,
            end: end.ok_or_else(|| self.err("missing END in memory segment".into()))?,
            width: width.ok_or_else(|| self.err("missing WIDTH in memory segment".into()))?,
        })
    }

    fn parse_processor(&mut self) -> Result<Processor> {
        self.expect_ident()?; // PROCESSOR
        // Processor names can start with digits (e.g., 21569_CORE0) so we
        // need to concatenate number and ident tokens.
        let name = self.read_processor_name()?;
        self.expect(&Token::LBrace)?;

        let mut proc = Processor {
            name,
            output: None,
            entry: None,
            keeps: Vec::new(),
            sections: Vec::new(),
            link_against: Vec::new(),
        };

        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            match self.peek().clone() {
                Token::Ident(ref s) if s == "OUTPUT" => {
                    proc.output = Some(self.parse_paren_value()?);
                }
                Token::Ident(ref s) if s == "ENTRY" => {
                    proc.entry = Some(self.parse_paren_value()?);
                }
                Token::Ident(ref s) if s == "KEEP" => {
                    self.advance();
                    self.expect(&Token::LParen)?;
                    let sym = self.expect_ident()?;
                    self.expect(&Token::RParen)?;
                    proc.keeps.push(sym);
                }
                Token::Ident(ref s) if s == "LINK_AGAINST" => {
                    proc.link_against = self.parse_link_against()?;
                }
                Token::Ident(ref s) if s == "SECTIONS" => {
                    proc.sections = self.parse_sections()?;
                }
                _ => {
                    return Err(self.err(format!(
                        "unexpected token in PROCESSOR: {}",
                        tok_name(self.peek())
                    )));
                }
            }
        }
        self.expect(&Token::RBrace)?;
        Ok(proc)
    }

    fn parse_paren_value(&mut self) -> Result<String> {
        self.advance(); // keyword
        self.expect(&Token::LParen)?;
        let val = match self.peek().clone() {
            Token::Ident(s) | Token::StringLit(s) | Token::Variable(s) => {
                self.advance();
                s
            }
            other => {
                return Err(self.err(format!("expected value, got {}", tok_name(&other))));
            }
        };
        self.expect(&Token::RParen)?;
        Ok(val)
    }

    fn parse_link_against(&mut self) -> Result<Vec<String>> {
        self.advance(); // LINK_AGAINST
        self.expect(&Token::LParen)?;
        let mut items = Vec::new();
        while !matches!(self.peek(), Token::RParen | Token::Eof) {
            match self.peek().clone() {
                Token::Ident(_) => {
                    items.push(self.read_dotted_name()?);
                }
                Token::StringLit(s) => {
                    self.advance();
                    items.push(s);
                }
                Token::Comma => {
                    self.advance();
                }
                _ => break,
            }
        }
        self.expect(&Token::RParen)?;
        Ok(items)
    }

    fn parse_sections(&mut self) -> Result<Vec<OutputSection>> {
        self.expect_ident()?; // SECTIONS
        self.expect(&Token::LBrace)?;

        let mut sections = Vec::new();
        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            sections.push(self.parse_output_section()?);
        }
        self.expect(&Token::RBrace)?;
        Ok(sections)
    }

    fn parse_output_section(&mut self) -> Result<OutputSection> {
        let name = self.expect_ident()?;

        // Parse optional qualifier(s); e.g. "ZERO_INIT DM" or just "PM"
        let mut qualifier = SectionQualifier::None;
        while let Token::Ident(s) = self.peek() {
            match s.as_str() {
                "PM" | "DM" | "SW" | "BW" | "NO_INIT" | "ZERO_INIT" | "DATA64" => {
                    let q = parse_section_qualifier(s)?;
                    self.advance();
                    if qualifier == SectionQualifier::None {
                        qualifier = q;
                    }
                }
                _ => break,
            }
        }

        self.expect(&Token::LBrace)?;

        let mut out = OutputSection {
            name,
            qualifier,
            input_sections: Vec::new(),
            alignment: None,
            fill: None,
            reserve: None,
            target_memory: String::new(),
        };

        while !matches!(self.peek(), Token::RBrace | Token::Eof) {
            match self.peek().clone() {
                Token::Ident(ref s) if s == "INPUT_SECTIONS" => {
                    out.input_sections.push(self.parse_input_sections()?);
                }
                Token::Ident(ref s) if s == "INPUT_SECTION_ALIGN" => {
                    self.advance();
                    self.expect(&Token::LParen)?;
                    out.alignment = Some(self.expect_number()?);
                    self.expect(&Token::RParen)?;
                }
                Token::Ident(ref s) if s == "FILL" => {
                    self.advance();
                    self.expect(&Token::LParen)?;
                    out.fill = Some(self.expect_number()?);
                    self.expect(&Token::RParen)?;
                }
                Token::Ident(ref s) if s == "RESERVE" => {
                    out.reserve = Some(self.parse_reserve()?);
                }
                _ => {
                    return Err(self.err(format!(
                        "unexpected token in output section: {}",
                        tok_name(self.peek())
                    )));
                }
            }
        }

        self.expect(&Token::RBrace)?;
        self.expect(&Token::Gt)?;
        out.target_memory = self.expect_ident()?;

        Ok(out)
    }

    fn parse_input_sections(&mut self) -> Result<InputSectionSpec> {
        self.advance(); // INPUT_SECTIONS
        self.expect(&Token::LParen)?;

        // Object reference
        let objects = match self.peek().clone() {
            Token::Variable(s) => {
                self.advance();
                s
            }
            Token::Ident(s) | Token::StringLit(s) => {
                self.advance();
                s
            }
            other => {
                return Err(self.err(format!(
                    "expected object reference in INPUT_SECTIONS, got {}",
                    tok_name(&other)
                )));
            }
        };

        self.expect(&Token::LParen)?;

        let mut sections = Vec::new();
        while !matches!(self.peek(), Token::RParen | Token::Eof) {
            match self.peek().clone() {
                Token::Ident(s) => {
                    self.advance();
                    sections.push(s);
                }
                Token::Dot => {
                    // Handle .bss, .text, etc.
                    self.advance();
                    let name = self.expect_ident()?;
                    sections.push(format!(".{name}"));
                }
                _ => {
                    return Err(self.err(format!(
                        "unexpected token in section list: {}",
                        tok_name(self.peek())
                    )));
                }
            }
        }
        self.expect(&Token::RParen)?;
        self.expect(&Token::RParen)?;

        Ok(InputSectionSpec { objects, sections })
    }

    fn parse_reserve(&mut self) -> Result<Reserve> {
        self.advance(); // RESERVE
        self.expect(&Token::LParen)?;
        let name = self.expect_ident()?;
        self.expect(&Token::Comma)?;
        let length_name = self.expect_ident()?;
        self.expect(&Token::Comma)?;
        let length = self.expect_number()?;
        let mut align = 1;
        if matches!(self.peek(), Token::Comma) {
            self.advance();
            align = self.expect_number()?;
        }
        self.expect(&Token::RParen)?;
        Ok(Reserve { name, length_name, length, align })
    }
}

fn parse_seg_type(s: &str) -> Result<SegType> {
    match s {
        "PM" => Ok(SegType::Pm),
        "DM" => Ok(SegType::Dm),
        "BW" => Ok(SegType::Bw),
        "SW" => Ok(SegType::Sw),
        "DATA64" => Ok(SegType::Data64),
        _ => Err(Error::Parse(format!("unknown segment type: {s}"))),
    }
}

fn parse_mem_kind(s: &str) -> Result<MemKind> {
    match s {
        "RAM" => Ok(MemKind::Ram),
        "ROM" => Ok(MemKind::Rom),
        _ => Err(Error::Parse(format!("unknown memory kind: {s}"))),
    }
}

fn parse_section_qualifier(s: &str) -> Result<SectionQualifier> {
    match s {
        "PM" => Ok(SectionQualifier::Pm),
        "DM" => Ok(SectionQualifier::Dm),
        "SW" => Ok(SectionQualifier::Sw),
        "BW" => Ok(SectionQualifier::Bw),
        "NO_INIT" => Ok(SectionQualifier::NoInit),
        "ZERO_INIT" => Ok(SectionQualifier::ZeroInit),
        "DATA64" => Ok(SectionQualifier::Data64),
        _ => Err(Error::Parse(format!("unknown section qualifier: {s}"))),
    }
}

fn tok_name(tok: &Token) -> String {
    match tok {
        Token::Ident(s) => format!("identifier `{s}`"),
        Token::Variable(s) => format!("variable `{s}`"),
        Token::Number(n) => format!("number {n}"),
        Token::StringLit(s) => format!("string \"{s}\""),
        Token::LBrace => "`{`".into(),
        Token::RBrace => "`}`".into(),
        Token::LParen => "`(`".into(),
        Token::RParen => "`)`".into(),
        Token::Semi => "`;`".into(),
        Token::Comma => "`,`".into(),
        Token::Equals => "`=`".into(),
        Token::Gt => "`>`".into(),
        Token::Bang => "`!`".into(),
        Token::Dot => "`.`".into(),
        Token::Slash => "`/`".into(),
        Token::Eof => "end of file".into(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn parse_str(src: &str) -> Ldf {
        parse(src, &HashMap::new()).unwrap()
    }

    #[test]
    fn parse_architecture() {
        let ldf = parse_str("ARCHITECTURE(ADSP-21569)");
        assert_eq!(ldf.architecture.as_deref(), Some("ADSP-21569"));
    }

    #[test]
    fn parse_variable() {
        let ldf = parse_str("$LIBRARIES = libcc.dlb, libc.dlb ;");
        assert_eq!(ldf.variables.len(), 1);
        assert_eq!(ldf.variables[0].name, "$LIBRARIES");
        assert_eq!(ldf.variables[0].values, vec!["libcc.dlb", "libc.dlb"]);
    }

    #[test]
    fn parse_memory_block() {
        let src = r#"
            MEMORY {
                mem_code { TYPE(PM RAM) START(0x00090000) END(0x000900a7) WIDTH(48) }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.memory.len(), 1);
        let seg = &ldf.memory[0];
        assert_eq!(seg.name, "mem_code");
        assert_eq!(seg.seg_type, SegType::Pm);
        assert_eq!(seg.mem_kind, MemKind::Ram);
        assert_eq!(seg.start, 0x00090000);
        assert_eq!(seg.end, 0x000900a7);
        assert_eq!(seg.width, 48);
    }

    #[test]
    fn parse_multiple_memory_segments() {
        let src = r#"
            MEMORY {
                seg_a { TYPE(PM RAM) START(0x1000) END(0x1FFF) WIDTH(48) }
                seg_b { TYPE(DM RAM) START(0x2000) END(0x2FFF) WIDTH(32) }
                seg_c { TYPE(BW ROM) START(0x3000) END(0x3FFF) WIDTH(8) }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.memory.len(), 3);
        assert_eq!(ldf.memory[0].seg_type, SegType::Pm);
        assert_eq!(ldf.memory[1].seg_type, SegType::Dm);
        assert_eq!(ldf.memory[2].seg_type, SegType::Bw);
        assert_eq!(ldf.memory[2].mem_kind, MemKind::Rom);
    }

    #[test]
    fn parse_processor_with_sections() {
        let src = r#"
            PROCESSOR my_core {
                OUTPUT($COMMAND_LINE_OUTPUT_FILE)
                ENTRY(start)
                KEEP(___ctor_NULL_marker)

                SECTIONS {
                    dxe_code PM {
                        INPUT_SECTIONS( $OBJECTS(seg_pmco) )
                    } > mem_code

                    dxe_data BW {
                        INPUT_SECTION_ALIGN(4)
                        INPUT_SECTIONS( $OBJS_LIBS(seg_data) )
                    } > mem_data
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors.len(), 1);
        let proc = &ldf.processors[0];
        assert_eq!(proc.name, "my_core");
        assert_eq!(proc.output.as_deref(), Some("$COMMAND_LINE_OUTPUT_FILE"));
        assert_eq!(proc.entry.as_deref(), Some("start"));
        assert_eq!(proc.keeps, vec!["___ctor_NULL_marker"]);
        assert_eq!(proc.sections.len(), 2);

        let s0 = &proc.sections[0];
        assert_eq!(s0.name, "dxe_code");
        assert_eq!(s0.qualifier, SectionQualifier::Pm);
        assert_eq!(s0.target_memory, "mem_code");
        assert_eq!(s0.input_sections.len(), 1);
        assert_eq!(s0.input_sections[0].objects, "$OBJECTS");
        assert_eq!(s0.input_sections[0].sections, vec!["seg_pmco"]);

        let s1 = &proc.sections[1];
        assert_eq!(s1.alignment, Some(4));
        assert_eq!(s1.target_memory, "mem_data");
    }

    #[test]
    fn parse_zero_init_section() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    bss_sec ZERO_INIT DM {
                        INPUT_SECTIONS( $OBJS(.bss) )
                    } > mem_data
                }
            }
        "#;
        let ldf = parse_str(src);
        let sec = &ldf.processors[0].sections[0];
        assert_eq!(sec.qualifier, SectionQualifier::ZeroInit);
        assert_eq!(sec.input_sections[0].sections, vec![".bss"]);
    }

    #[test]
    fn parse_fill() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    sec PM {
                        FILL(0xDEAD)
                        INPUT_SECTIONS( $OBJS(code) )
                    } > mem
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors[0].sections[0].fill, Some(0xDEAD));
    }

    #[test]
    fn parse_full_example() {
        let src = r#"
            ARCHITECTURE(ADSP-21569)

            $LIBRARIES = libcc.dlb, libc.dlb, libio.dlb ;
            $OBJECTS = "app_startup.doj", $COMMAND_LINE_OBJECTS ;
            $OBJS_LIBS = $OBJECTS, $LIBRARIES ;

            MEMORY {
                mem_iv_code    { TYPE(PM RAM) START(0x00090000) END(0x000900a7) WIDTH(48) }
                mem_block0_bw  { TYPE(BW RAM) START(0x002403f0) END(0x0026ffff) WIDTH(8) }
            }

            PROCESSOR 21569_CORE0 {
                OUTPUT($COMMAND_LINE_OUTPUT_FILE)
                KEEP(___ctor_NULL_marker)
                ENTRY(start)

                SECTIONS {
                    dxe_iv_code PM {
                        INPUT_SECTIONS( $OBJECTS(iv_code) )
                    } > mem_iv_code

                    dxe_block0_data BW {
                        INPUT_SECTION_ALIGN(4)
                        INPUT_SECTIONS( $OBJS_LIBS(seg_l1_block0 seg_int_data) )
                    } > mem_block0_bw

                    dxe_block0_bsz ZERO_INIT DM {
                        INPUT_SECTIONS( $OBJS_LIBS(.bss) )
                    } > mem_block0_bw
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.architecture.as_deref(), Some("ADSP-21569"));
        assert_eq!(ldf.variables.len(), 3);
        assert_eq!(ldf.memory.len(), 2);
        assert_eq!(ldf.processors.len(), 1);
        assert_eq!(ldf.processors[0].sections.len(), 3);
    }

    #[test]
    fn parse_error_missing_brace() {
        let result = parse("MEMORY {", &HashMap::new());
        assert!(result.is_err());
    }

    #[test]
    fn parse_empty() {
        let ldf = parse_str("");
        assert!(ldf.architecture.is_none());
        assert!(ldf.memory.is_empty());
    }

    #[test]
    fn parse_link_against() {
        let src = r#"
            PROCESSOR p {
                LINK_AGAINST(other.dxe)
                SECTIONS {
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors[0].link_against, vec!["other.dxe"]);
    }

    #[test]
    fn parse_multiple_input_sections() {
        let src = r#"
            PROCESSOR p {
                SECTIONS {
                    sec PM {
                        INPUT_SECTIONS( $OBJS(seg_pmco) )
                        INPUT_SECTIONS( $LIBS(seg_pmco) )
                    } > mem
                }
            }
        "#;
        let ldf = parse_str(src);
        assert_eq!(ldf.processors[0].sections[0].input_sections.len(), 2);
    }

    #[test]
    fn parse_search_dir_ignored() {
        let src = "SEARCH_DIR($SELACHE_ROOT/SHARC/lib)";
        let ldf = parse_str(src);
        assert!(ldf.memory.is_empty());
    }
}
