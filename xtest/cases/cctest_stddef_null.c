// SPDX-License-Identifier: MIT
// cctest_stddef_null.c --- cctest case stddef_null
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

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
   int r  = 0;
   int *p = NULL;
   if (p == 0)
      r += 1;
   if (!p)
      r += 2;
   return r; /* 1+2 = 3 */
}
