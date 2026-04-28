// SPDX-License-Identifier: MIT
// cctest_single_member_union.c --- cctest case single_member_union
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
  union { int x; } u;
  u.x = 0x55;
  return u.x; /* 0x55 */
}
