// SPDX-License-Identifier: MIT
// cctest_out_param.c --- cctest case out_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x73 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void swap_out(int *a, int *b)
{
   int t = *a;
   *a    = *b;
   *b    = t;
}

int test_main(void)
{
   int x = 3, y = 7;
   swap_out(&x, &y);
   return x * 0x10 + y; /* x=7, y=3 → 7*16+3 = 115 = 0x73 */
}
