// SPDX-License-Identifier: MIT
// cctest_register.c --- cctest case register
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37 */

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
   register int i;
   register int sum = 0;
   for (i = 1; i <= 10; i++)
      sum += i;
   return sum; /* 55 = 0x37 */
}
