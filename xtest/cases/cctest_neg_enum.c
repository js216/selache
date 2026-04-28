// SPDX-License-Identifier: MIT
// cctest_neg_enum.c --- cctest case neg_enum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Negative enum values (C99 6.7.2.2) */
enum signed_enum { NEG2 = -2, NEG1, ZERO, POS1 };
int test_main(void) {
  return ZERO - NEG2 + POS1; /* 0-(-2)+1 = 3 */
}
