// SPDX-License-Identifier: MIT
// cctest_bitfield2.c --- cctest case bitfield2
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAA */

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
  struct { int val : 2; } bf;
  bf.val = -1; /* 0b11 → sign-extends to -1 */
  return (bf.val < 0) ? 0xAA : 0xBB; /* 0xAA */
}
