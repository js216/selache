// SPDX-License-Identifier: MIT
// cctest_strncat_fn.c --- cctest case strncat_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   char dst[16] = "xy";
   strncat(dst, "abcde", 2); /* appends 'a','b' then NUL */
   if (dst[4] != 0) return 0;
   if (dst[2] != 'a' || dst[3] != 'b') return 0;
   int n = 0;
   while (dst[n]) n++;
   return n; /* 4 */
}
