// SPDX-License-Identifier: GPL-3.0
// crc32.rs --- CRC32 checksum calculation for boot stream blocks
// Copyright (c) 2026 Jakob Kastelic

/// Default CRC32 polynomial for ADSP-2156x boot streams.
pub const DEFAULT_POLYNOMIAL: u32 = 0xD801_8001;

/// Build a 256-entry CRC32 lookup table for the given polynomial.
fn build_table(polynomial: u32) -> [u32; 256] {
    let mut table = [0u32; 256];
    for i in 0..256u32 {
        let mut crc = i;
        for _ in 0..8 {
            if crc & 1 != 0 {
                crc = (crc >> 1) ^ polynomial;
            } else {
                crc >>= 1;
            }
        }
        table[i as usize] = crc;
    }
    table
}

/// Precomputed CRC32 table for reuse across multiple checksum calls.
pub struct Crc32 {
    table: [u32; 256],
}

impl Crc32 {
    /// Build a CRC32 instance with the given polynomial.
    pub fn new(polynomial: u32) -> Self {
        Self {
            table: build_table(polynomial),
        }
    }

    /// Compute CRC32 over `data` using the precomputed table.
    ///
    /// Uses init=0 and no final inversion, matching the SHARC+ boot ROM
    /// CRC engine.
    pub fn checksum(&self, data: &[u8]) -> u32 {
        let mut crc = 0u32;
        for &byte in data {
            let idx = ((crc ^ u32::from(byte)) & 0xFF) as usize;
            crc = (crc >> 8) ^ self.table[idx];
        }
        crc
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_crc32_empty() {
        let ctx = Crc32::new(DEFAULT_POLYNOMIAL);
        let result = ctx.checksum(&[]);
        // CRC of empty data should be 0 (0xFFFFFFFF ^ 0xFFFFFFFF)
        assert_eq!(result, 0);
    }

    #[test]
    fn test_crc32_deterministic() {
        let ctx = Crc32::new(DEFAULT_POLYNOMIAL);
        let data = b"hello world";
        let a = ctx.checksum(data);
        let b = ctx.checksum(data);
        assert_eq!(a, b);
    }

    #[test]
    fn test_crc32_different_data() {
        let ctx = Crc32::new(DEFAULT_POLYNOMIAL);
        let a = ctx.checksum(b"abc");
        let b = ctx.checksum(b"xyz");
        assert_ne!(a, b);
    }

    #[test]
    fn test_crc32_different_poly() {
        let data = b"test data";
        let a = Crc32::new(DEFAULT_POLYNOMIAL).checksum(data);
        let b = Crc32::new(0x04C1_1DB7).checksum(data);
        assert_ne!(a, b);
    }

    #[test]
    fn test_build_table_length() {
        let table = build_table(DEFAULT_POLYNOMIAL);
        assert_eq!(table.len(), 256);
        // First entry should always be 0
        assert_eq!(table[0], 0);
    }

    #[test]
    fn test_crc32_single_byte() {
        let ctx = Crc32::new(DEFAULT_POLYNOMIAL);
        let a = ctx.checksum(&[0x00]);
        let b = ctx.checksum(&[0xFF]);
        // CRC(0x00) with init=0 is 0 (identity), CRC(0xFF) is non-zero
        assert_eq!(a, 0);
        assert_ne!(b, 0);
    }
}
