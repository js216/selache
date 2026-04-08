// SPDX-License-Identifier: GPL-3.0
// ihex.rs --- Intel HEX32 format parser
// Copyright (c) 2026 Jakob Kastelic

use crate::error::{Error, Result};

/// A data record with a full 32-bit address and its payload bytes.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DataRecord {
    pub address: u32,
    pub data: Vec<u8>,
}

/// Parse an Intel HEX32 formatted string into a list of data records.
///
/// Handles record types:
///   00 = data, 01 = EOF, 02 = extended segment address,
///   04 = extended linear address, 03/05 = ignored (start address).
pub fn parse_ihex(input: &str) -> Result<Vec<DataRecord>> {
    let mut records = Vec::new();
    let mut extended_address: u32 = 0;
    let mut got_eof = false;

    for (line_idx, line) in input.lines().enumerate() {
        let line_num = line_idx + 1;
        let line = line.trim();

        if line.is_empty() {
            continue;
        }

        if got_eof {
            return Err(Error::Parse {
                line: line_num,
                msg: "data after EOF record".to_string(),
            });
        }

        if !line.starts_with(':') {
            return Err(Error::Parse {
                line: line_num,
                msg: "expected ':' start code".to_string(),
            });
        }

        let hex = &line[1..];
        if hex.len() < 10 {
            return Err(Error::Parse {
                line: line_num,
                msg: "record too short".to_string(),
            });
        }

        let bytes = parse_hex_bytes(hex, line_num)?;
        validate_checksum(&bytes, line_num)?;

        let byte_count = bytes[0] as usize;
        let address = u16::from_be_bytes([bytes[1], bytes[2]]);
        let record_type = bytes[3];

        let expected_len = byte_count + 5; // LL + AAAA(2) + TT + data + CC
        if bytes.len() != expected_len {
            return Err(Error::Parse {
                line: line_num,
                msg: format!(
                    "byte count mismatch: header says {byte_count}, got {} data bytes",
                    bytes.len().saturating_sub(5)
                ),
            });
        }

        let data = &bytes[4..4 + byte_count];

        match record_type {
            0x00 => {
                // Data record
                let full_address = extended_address | u32::from(address);
                records.push(DataRecord {
                    address: full_address,
                    data: data.to_vec(),
                });
            }
            0x01 => {
                // End of file
                got_eof = true;
            }
            0x02 => {
                // Extended segment address
                if byte_count != 2 {
                    return Err(Error::Parse {
                        line: line_num,
                        msg: "extended segment address record must have 2 data bytes"
                            .to_string(),
                    });
                }
                let segment = u16::from_be_bytes([data[0], data[1]]);
                extended_address = u32::from(segment) << 4;
            }
            0x03 => {
                // Start segment address -- informational, ignore
            }
            0x04 => {
                // Extended linear address
                if byte_count != 2 {
                    return Err(Error::Parse {
                        line: line_num,
                        msg: "extended linear address record must have 2 data bytes"
                            .to_string(),
                    });
                }
                let upper = u16::from_be_bytes([data[0], data[1]]);
                extended_address = u32::from(upper) << 16;
            }
            0x05 => {
                // Start linear address -- informational, ignore
            }
            _ => {
                return Err(Error::Parse {
                    line: line_num,
                    msg: format!("unknown record type: 0x{record_type:02X}"),
                });
            }
        }
    }

    Ok(records)
}

/// Decode a string of hex character pairs into bytes.
fn parse_hex_bytes(hex: &str, line_num: usize) -> Result<Vec<u8>> {
    if !hex.len().is_multiple_of(2) {
        return Err(Error::Parse {
            line: line_num,
            msg: "odd number of hex characters".to_string(),
        });
    }
    let mut bytes = Vec::with_capacity(hex.len() / 2);
    let mut i = 0;
    while i < hex.len() {
        let pair = &hex[i..i + 2];
        let byte = u8::from_str_radix(pair, 16).map_err(|_| Error::Parse {
            line: line_num,
            msg: format!("invalid hex byte: {pair}"),
        })?;
        bytes.push(byte);
        i += 2;
    }
    Ok(bytes)
}

/// Validate the two's complement checksum of a parsed record.
fn validate_checksum(bytes: &[u8], line_num: usize) -> Result<()> {
    let sum: u8 = bytes.iter().fold(0u8, |acc, &b| acc.wrapping_add(b));
    if sum != 0 {
        return Err(Error::InvalidChecksum { line: line_num });
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_simple_data_record() {
        let input = ":0400000048656C6C77\n:00000001FF\n";
        let records = parse_ihex(input).unwrap();
        assert_eq!(records.len(), 1);
        assert_eq!(records[0].address, 0x0000);
        assert_eq!(records[0].data, b"Hell");
    }

    #[test]
    fn test_extended_linear_address() {
        // Set upper address to 0x0001, then data at offset 0x0000
        let input = concat!(
            ":020000040001F9\n",
            ":04000000DEADBEEFC4\n",
            ":00000001FF\n",
        );
        let records = parse_ihex(input).unwrap();
        assert_eq!(records.len(), 1);
        assert_eq!(records[0].address, 0x00010000);
        assert_eq!(records[0].data, vec![0xDE, 0xAD, 0xBE, 0xEF]);
    }

    #[test]
    fn test_extended_segment_address() {
        // Extended segment address 0x1000 => base = 0x10000
        let input = concat!(
            ":020000021000EC\n",
            ":01000000AA55\n",
            ":00000001FF\n",
        );
        let records = parse_ihex(input).unwrap();
        assert_eq!(records.len(), 1);
        assert_eq!(records[0].address, 0x10000);
        assert_eq!(records[0].data, vec![0xAA]);
    }

    #[test]
    fn test_multiple_data_records() {
        let input = concat!(
            ":02000000AABB99\n",
            ":02000200CCDD53\n",
            ":00000001FF\n",
        );
        let records = parse_ihex(input).unwrap();
        assert_eq!(records.len(), 2);
        assert_eq!(records[0].address, 0x0000);
        assert_eq!(records[1].address, 0x0002);
    }

    #[test]
    fn test_invalid_checksum() {
        let input = ":0400000048656C6C78\n:00000001FF\n";
        let err = parse_ihex(input).unwrap_err();
        assert!(matches!(err, Error::InvalidChecksum { line: 1 }));
    }

    #[test]
    fn test_missing_start_code() {
        let input = "0400000048656C6CB1\n";
        let err = parse_ihex(input).unwrap_err();
        assert!(matches!(err, Error::Parse { line: 1, .. }));
    }

    #[test]
    fn test_empty_input() {
        let records = parse_ihex("").unwrap();
        assert!(records.is_empty());
    }

    #[test]
    fn test_blank_lines_ignored() {
        let input = "\n:0100000042BD\n\n:00000001FF\n\n";
        let records = parse_ihex(input).unwrap();
        assert_eq!(records.len(), 1);
        assert_eq!(records[0].data, vec![0x42]);
    }

    #[test]
    fn test_start_linear_address_ignored() {
        // Type 05: start linear address, should be ignored
        let input = concat!(
            ":0400000500010000F6\n",
            ":0100000042BD\n",
            ":00000001FF\n",
        );
        let records = parse_ihex(input).unwrap();
        assert_eq!(records.len(), 1);
    }

    #[test]
    fn test_unknown_record_type() {
        let input = ":00000006FA\n";
        let err = parse_ihex(input).unwrap_err();
        assert!(matches!(err, Error::Parse { .. }));
    }
}
