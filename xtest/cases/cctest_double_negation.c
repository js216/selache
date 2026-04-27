// SPDX-License-Identifier: MIT
// cctest_double_negation.c --- cctest case double_negation
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
   int r = 0;
   if (!!42 == 1)
      r += 1;
   if (!!0 == 0)
      r += 2;
   return r;
}
