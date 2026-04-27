// SPDX-License-Identifier: MIT
// cctest_unsigned.c --- cctest case unsigned
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

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
   unsigned int a = 0xFFFFFFFF;
   unsigned int b = 1;
   int r          = 0;
   if (a > b)
      r = r + 1;
   return r;
}
