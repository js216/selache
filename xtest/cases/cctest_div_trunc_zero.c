// SPDX-License-Identifier: MIT
// cctest_div_trunc_zero.c --- cctest case div_trunc_zero
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
   int r = 0;
   if (7 / 2 == 3)
      r += 1;
   if ((-7) / 2 == -3)
      r += 2;
   if (7 / (-2) == -3)
      r += 4;
   return r;
}
