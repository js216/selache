// SPDX-License-Identifier: MIT
// cctest_zero_init.c --- cctest case zero_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

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
  int arr[5] = {0};
  struct { int a; int b; int c; } s = {0};
  return arr[0] + arr[4] + s.a + s.b + s.c; /* all zero = 0 */
}
