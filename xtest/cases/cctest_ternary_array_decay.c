// SPDX-License-Identifier: MIT
// cctest_ternary_array_decay.c --- cctest case ternary_array_decay
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
  int a[2] = {0x55, 0xAA};
  int b[2] = {0xBB, 0xCC};
  int *p = (1) ? a : b;
  return p[0];
}
