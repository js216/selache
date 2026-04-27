// SPDX-License-Identifier: MIT
// cctest_logops.c --- cctest case logops
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x70 */

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
   int a = 3, b = 0, r = 0;
   if (a && !b)
      r = r + 0x10;
   if (a || b)
      r = r + 0x20;
   if (a > 0 && b == 0)
      r = r + 0x40;
   return r;
}
