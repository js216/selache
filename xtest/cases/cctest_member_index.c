// SPDX-License-Identifier: MIT
// cctest_member_index.c --- cctest case member_index
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28 */

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
  struct { int idx; } s;
  int arr[5];
  arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;
  s.idx = 3;
  return arr[s.idx]; /* arr[3] = 40 = 0x28 */
}
