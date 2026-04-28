// SPDX-License-Identifier: MIT
// cctest_enum_auto.c --- cctest case enum_auto
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
  enum seq { A, B, C, D };
  return A + B + C + D; /* 0+1+2+3=6 */
}
