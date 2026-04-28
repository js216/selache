// SPDX-License-Identifier: MIT
// cctest_same_member.c --- cctest case same_member
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1e */

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
  struct { struct { int x; } a; int x; } s;
  s.a.x = 10;
  s.x = 20;
  return s.a.x + s.x; /* 10+20 = 30 = 0x1E */
}
