// SPDX-License-Identifier: MIT
// cctest_bf_mixed.c --- cctest case bf_mixed
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

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
  struct {
    int s : 8;
    unsigned int u : 8;
  } bf;
  bf.s = -1;     /* sign-extended: all ones in 8-bit field */
  bf.u = 255;    /* 0xFF */
  int r = 0;
  if (bf.s == -1)   r += 1;
  if (bf.u == 255)  r += 2;
  return r; /* 1+2 = 3 */
}
