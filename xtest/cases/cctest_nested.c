// SPDX-License-Identifier: MIT
// cctest_nested.c --- cctest case nested
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x20 */

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
   int t = 0, i;
   for (i = 0; i < 4; i = i + 1) {
      int j = 0;
      while (j < 10) {
         if (j == 5)
            break;
         if (j == 2) {
            j = j + 1;
            continue;
         }
         t = t + j;
         j = j + 1;
      }
   }
   return t;
}
