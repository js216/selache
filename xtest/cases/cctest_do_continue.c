// SPDX-License-Identifier: MIT
// cctest_do_continue.c --- cctest case do_continue
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
   int i = 0, s = 0;
   do {
      i++;
      if (i == 3)
         continue;
      s += i;
   } while (i < 5);
   return s; /* 1+2+4+5 = 12 = 0x0C */
}
