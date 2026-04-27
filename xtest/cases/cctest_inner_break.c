// SPDX-License-Identifier: MIT
// cctest_inner_break.c --- cctest case inner_break
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0C */

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
   int sum = 0;
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 100; j++) {
         if (j >= 3)
            break;
         sum += 1;
      }
   }
   return sum; /* 4*3 = 12 */
}
