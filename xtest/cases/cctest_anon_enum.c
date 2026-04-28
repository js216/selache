// SPDX-License-Identifier: MIT
// cctest_anon_enum.c --- cctest case anon_enum
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
  enum { AE_X = 7, AE_Y = 13, AE_Z = 20 };
  return AE_X + AE_Y + AE_Z; /* 40 = 0x28 */
}
