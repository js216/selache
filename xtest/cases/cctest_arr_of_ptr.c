// SPDX-License-Identifier: MIT
// cctest_arr_of_ptr.c --- cctest case arr_of_ptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3C */

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
  int a = 10, b = 20, c = 30;
  int *ptrs[3];
  ptrs[0] = &a;
  ptrs[1] = &b;
  ptrs[2] = &c;
  return *ptrs[0] + *ptrs[1] + *ptrs[2]; /* 60 = 0x3C */
}
