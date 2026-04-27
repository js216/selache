// SPDX-License-Identifier: MIT
// cctest_ternary_null.c --- cctest case ternary_null
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2A */

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
   int x    = 42;
   int *p   = &x;
   int cond = 1;
   int *q   = cond ? p : (int *)0;
   return *q; /* 42 = 0x2A */
}
