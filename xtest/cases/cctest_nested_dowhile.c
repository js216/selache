// SPDX-License-Identifier: MIT
// cctest_nested_dowhile.c --- cctest case nested_dowhile
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x09 */

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
   int count = 0;
   int i     = 0;
   do {
      int j = 0;
      do {
         count++;
         j++;
      } while (j < 3);
      i++;
   } while (i < 3);
   return count; /* 3*3 = 9 */
}
