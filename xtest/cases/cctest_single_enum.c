// SPDX-License-Identifier: MIT
// cctest_single_enum.c --- cctest case single_enum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */

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
  enum { ONLY = 0x33 };
  return ONLY; /* 0x33 */
}
