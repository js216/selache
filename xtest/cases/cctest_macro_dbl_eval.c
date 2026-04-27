// SPDX-License-Identifier: MIT
// cctest_macro_dbl_eval.c --- cctest case macro_dbl_eval
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x11 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define DBL_MAX_M(a, b) ((a) > (b) ? (a) : (b))

int test_main(void)
{
   int x = 5, y = 3;
   int r =
       DBL_MAX_M(x++, y++); /* x++ evaluated twice if x>y: x becomes 7, r=6 */
   return r + x + y;        /* 6 + 7 + 4 = 17 = 0x11 */
}
