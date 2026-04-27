// SPDX-License-Identifier: MIT
// cctest_char_relational.c --- cctest case char_relational
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
   char a = 'A'; /* 65 */
   char b = 'Z'; /* 90 */
   int r  = 0;
   if (a < b)
      r += 1;
   if (b > a)
      r += 2;
   if (a != b)
      r += 4;
   return r; /* 7 */
}
