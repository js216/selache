// SPDX-License-Identifier: MIT
// cctest_row_major.c --- cctest case row_major
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
  int a[2][3] = {{1,2,3},{4,5,6}};
  /* a[1][0] == 4; in memory: 1,2,3,4,5,6 contiguous */
  int *flat = &a[0][0];
  return (flat[3] == 4 && flat[5] == 6) ? 0x55 : 0xAA;
}
