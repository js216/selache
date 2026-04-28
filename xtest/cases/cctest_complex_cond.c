// SPDX-License-Identifier: MIT
// cctest_complex_cond.c --- cctest case complex_cond
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
  int a = 0, b = 0, c = 0;
  int x = 5;
  (x > 3) ? (a = x, b = x * 2) : (c = x * 3);
  return a + b + c; /* 5 + 10 + 0 = 15 = 0x0F */
}
