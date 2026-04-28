// SPDX-License-Identifier: MIT
// cctest_bf_only.c --- cctest case bf_only
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6D */

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
    unsigned int r : 5;
    unsigned int g : 6;
    unsigned int b : 5;
  } rgb;
  rgb.r = 31;  /* max 5-bit */
  rgb.g = 63;  /* max 6-bit */
  rgb.b = 15;
  return rgb.r + rgb.g + rgb.b; /* 31+63+15 = 109 = 0x6D */
}
