// SPDX-License-Identifier: MIT
// cctest_enum_in_struct.c --- cctest case enum_in_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
  struct { enum { E_LO = 1, E_HI = 10 } tag; int val; } s;
  s.tag = E_HI;
  s.val = 5;
  return s.tag + s.val; /* 10+5 = 15 = 0x0F */
}
