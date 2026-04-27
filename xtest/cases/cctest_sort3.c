// SPDX-License-Identifier: MIT
// cctest_sort3.c --- cctest case sort3
// Copyright (c) 2026 Jakob Kastelic

/* @expect 9 */

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
   int a = 3, b = 1, c = 5;
   int lo, mid, hi;
   if (a <= b && a <= c) {
      lo = a;
      if (b <= c) {
         mid = b;
         hi  = c;
      } else {
         mid = c;
         hi  = b;
      }
   } else if (b <= a && b <= c) {
      lo = b;
      if (a <= c) {
         mid = a;
         hi  = c;
      } else {
         mid = c;
         hi  = a;
      }
   } else {
      lo = c;
      if (a <= b) {
         mid = a;
         hi  = b;
      } else {
         mid = b;
         hi  = a;
      }
   }
   return lo + mid + hi; /* 1+3+5 = 9 */
}
