// SPDX-License-Identifier: MIT
// cctest_bf_const_width.c --- cctest case bf_const_width
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Integer constant expression in bitfield width (C99 6.6 + 6.7.2.1) */
#define BF_WIDTH (2 + 3)
int test_main(void) {
  struct { unsigned int x : BF_WIDTH; } bf; /* 5-bit field */
  bf.x = 31; /* max for 5 bits */
  return bf.x; /* 31 = 0x1F */
}
