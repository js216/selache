// SPDX-License-Identifier: MIT
// cctest_float_cmp.c --- cctest case float_cmp
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
   int r   = 0;
   float x = (float)5;
   if (x > 2.5f)
      r = r + 1;
   float y = (float)1;
   if (y < 3.0f)
      r = r + 2;
   return r;
}
