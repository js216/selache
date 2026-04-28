// SPDX-License-Identifier: MIT
// cctest_volatile_member.c --- cctest case volatile_member
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
  struct { volatile int x; int y; } s;
  s.x = 0x10;
  s.y = 0x20;
  return s.x + s.y; /* 0x30 */
}
