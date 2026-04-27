// SPDX-License-Identifier: MIT
// cctest_while_complex.c --- cctest case while_complex
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32 */

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
   int i = 0, j = 10, sum = 0;
   while (i < 5 && j > 5) {
      sum += i + j;
      i++;
      j--;
   }
   return sum; /* (0+10)+(1+9)+(2+8)+(3+7)+(4+6) = 50 = 0x32 */
}
