// SPDX-License-Identifier: MIT
// cctest_compound_cross.c --- cctest case compound_cross
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xBE */

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
   int x  = 100;
   char c = 5;
   x += c;         /* int += char → 105 */
   x -= (short)10; /* int -= short → 95 */
   float f = 2.0f;
   x       = (int)((float)x * f); /* 190 */
   return x;                      /* 190 = 0xBE */
}
