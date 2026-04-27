// SPDX-License-Identifier: MIT
// cctest_char_limits.c --- cctest case char_limits
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

int test_main(void)
{
   int r = 0;
   if (CHAR_MIN == SCHAR_MIN)
      r += 1; /* char is signed on SHARC */
   if (CHAR_MAX == SCHAR_MAX)
      r += 2;
   return r; /* 1+2 = 3 */
}
