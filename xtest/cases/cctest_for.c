// SPDX-License-Identifier: MIT
// cctest_for.c --- cctest case for
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x78 */

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
   int p = 1, i;
   for (i = 1; i <= 5; i = i + 1)
      p = p * i;
   return p;
}
