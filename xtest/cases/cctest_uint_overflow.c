// SPDX-License-Identifier: MIT
// cctest_uint_overflow.c --- cctest case uint_overflow
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
   unsigned int a = 0xFFFFFFFFu;
   unsigned int b = a + 2u;  /* wraps to 1 */
   unsigned int c = 0u - 1u; /* wraps to 0xFFFFFFFF */
   int r          = 0;
   if (b == 1u)
      r += 1;
   if (c == 0xFFFFFFFFu)
      r += 2;
   if (a + 1u == 0u)
      r += 4;
   return (r == 7) ? 0x55 : 0xAA;
}
