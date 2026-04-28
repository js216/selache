// SPDX-License-Identifier: MIT
// cctest_const_member.c --- cctest case const_member
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

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
  struct { const int x; int y; } s = { 0x10, 0x20 };
  /* s.x cannot be modified after init */
  return s.x + s.y; /* 0x30 */
}
