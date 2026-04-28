// SPDX-License-Identifier: MIT
// cctest_enum_for.c --- cctest case enum_for
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x06 */

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
  enum { START = 0, END = 3 };
  int sum = 0;
  for (int i = START; i <= END; i++) sum += i;
  return sum; /* 0+1+2+3 = 6 */
}
