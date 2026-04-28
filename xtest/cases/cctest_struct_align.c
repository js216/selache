// SPDX-License-Identifier: MIT
// cctest_struct_align.c --- cctest case struct_align
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
  struct { char c; int i; } s;
  /* &s.i should be aligned to 4 */
  int offset = (char *)&s.i - (char *)&s;
  return (offset >= 2) ? 0x55 : 0xAA; /* at least 2 bytes gap for alignment */
}
