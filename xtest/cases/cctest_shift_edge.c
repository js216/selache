// SPDX-License-Identifier: MIT
// cctest_shift_edge.c --- cctest case shift_edge
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
   unsigned int a = 0x12345678;
   unsigned int b = a << 0;   /* unchanged */
   unsigned int c = 1u << 31; /* 0x80000000 */
   int r          = 0;
   if (b == a)
      r += 1;
   if (c == 0x80000000u)
      r += 2;
   return r; /* 3 */
}
