// SPDX-License-Identifier: MIT
// cctest_enum_is_int.c --- cctest case enum_is_int
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
  enum e { X };
  return (int)sizeof(enum e); /* sizeof(int) = 4 */
}
