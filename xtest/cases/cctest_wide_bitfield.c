// SPDX-License-Identifier: MIT
// cctest_wide_bitfield.c --- cctest case wide_bitfield
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xad */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void) {
  struct { unsigned int val : 32; } bf;
  bf.val = 0xDEADBEEF;
  return (int)((bf.val >> 16) & 0xFF); /* 0xAD = 173 */
}
