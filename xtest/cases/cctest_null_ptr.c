// SPDX-License-Identifier: MIT
// cctest_null_ptr.c --- cctest case null_ptr
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
   int *p = 0;
   int r  = 0;
   if (p == 0)
      r += 1;
   if (!p)
      r += 2;
   return r; /* 3 */
}
