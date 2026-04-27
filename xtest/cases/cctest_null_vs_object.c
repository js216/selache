// SPDX-License-Identifier: MIT
// cctest_null_vs_object.c --- cctest case null_vs_object
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   int x;
   int *p = &x;
   int *n = 0;
   int r  = 0;
   if (p != n)
      r += 1;
   if (n == 0)
      r += 2;
   return r;
}
