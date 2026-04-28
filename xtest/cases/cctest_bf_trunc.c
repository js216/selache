// SPDX-License-Identifier: MIT
// cctest_bf_trunc.c --- cctest case bf_trunc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
  struct { unsigned int x : 4; } bf;
  bf.x = 0xFF; /* only low 4 bits stored */
  return bf.x; /* 15 = 0x0F */
}
