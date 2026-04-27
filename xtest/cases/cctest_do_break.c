// SPDX-License-Identifier: MIT
// cctest_do_break.c --- cctest case do_break
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   int i = 0, r = 0;
   do {
      r += 10;
      i++;
      if (i == 3)
         break;
   } while (i < 10);
   return r; /* 30 = 0x1E */
}
