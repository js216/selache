// SPDX-License-Identifier: MIT
// cctest_goto_break.c --- cctest case goto_break
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x17 */

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
   int i, j;
   for (i = 0; i < 10; i++) {
      for (j = 0; j < 10; j++) {
         if (i == 2 && j == 3)
            goto done;
         r++;
      }
   }
done:
   return r; /* 2*10 + 3 = 23 = 0x17 */
}
