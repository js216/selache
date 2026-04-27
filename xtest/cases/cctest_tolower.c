// SPDX-License-Identifier: MIT
// cctest_tolower.c --- cctest case tolower
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x61 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test_main(void)
{
   int r1 = tolower('A'); /* 'a' = 0x61 */
   int r2 = tolower('a'); /* unchanged */
   int r3 = tolower('5'); /* unchanged */
   if (r1 != 'a') return 0;
   if (r2 != 'a') return 0;
   if (r3 != '5') return 0;
   return r1;
}
