// SPDX-License-Identifier: MIT
// cctest_for_scope.c --- cctest case for_scope
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x63 */

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
   int i = 99;
   for (int i = 0; i < 5; i++)
      ;
   return i; /* outer i still 99 = 0x63 */
}
