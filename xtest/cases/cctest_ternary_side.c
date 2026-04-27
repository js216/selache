// SPDX-License-Identifier: MIT
// cctest_ternary_side.c --- cctest case ternary_side
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   int a = 0, b = 0;
   int cond = 1;
   cond ? (a = 10) : (b = 20);
   return a + b; /* 10 = 0xA */
}
