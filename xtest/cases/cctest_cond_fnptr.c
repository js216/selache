// SPDX-License-Identifier: MIT
// cctest_cond_fnptr.c --- cctest case cond_fnptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

static int helper_mul(int a, int b)
{
   return a * b;
}

int test_main(void)
{
   int sel = 1;
   return (sel ? helper_add : helper_mul)(3, 4); /* helper_add(3,4) = 7 */
}
