// SPDX-License-Identifier: MIT
// cctest_struct_computed_idx.c --- cctest case struct_computed_idx
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2d */

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
  struct { int a; int b; } arr[4];
  for (int i = 0; i < 4; i++) {
    arr[i].a = i * 10;
    arr[i].b = i * 10 + 5;
  }
  int idx = 2;
  return arr[idx].a + arr[idx].b; /* 20+25 = 45 = 0x2D */
}
