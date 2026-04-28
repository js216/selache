// SPDX-License-Identifier: MIT
// cctest_ptr_neg_arith.c --- cctest case ptr_neg_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = &arr[4];
  p = p - 3;
  return *p; /* arr[1] = 20 = 0x14 */
}
