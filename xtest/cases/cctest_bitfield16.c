// SPDX-License-Identifier: MIT
// cctest_bitfield16.c --- cctest case bitfield16
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xDF */

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
  struct { unsigned int lo : 16; unsigned int hi : 16; } bf;
  bf.lo = 0x1234;
  bf.hi = 0xABCD;
  return (int)((bf.hi >> 8) + (bf.lo & 0xFF)); /* 0xAB + 0x34 = 0xDF */
}
