// SPDX-License-Identifier: MIT
// cctest_strcat_fn.c --- cctest case strcat_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   char dst[16] = "ab";
   strcat(dst, "cde");
   if (dst[5] != 0) return 0;
   if (dst[0] != 'a' || dst[4] != 'e') return 0;
   int n = 0;
   while (dst[n]) n++;
   return n; /* 5 */
}
