// SPDX-License-Identifier: MIT
// cctest_enum_int_conv.c --- cctest case enum_int_conv
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38 */

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
  enum { EA = 10, EB = 20 };
  int x = EA + 5;       /* enum + int → int */
  int y = EB * 2;       /* enum * int → int */
  int z = EA < EB;      /* enum < enum → int (1) */
  return x + y + z; /* 15 + 40 + 1 = 56 = 0x38 */
}
