// SPDX-License-Identifier: MIT
// cctest_ternary_lval.c --- cctest case ternary_lval
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x64 */

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
   int a = 1, b = 2;
   int sel          = 0;
   *(sel ? &a : &b) = 99;
   return a + b; /* 1 + 99 = 100 = 0x64 */
}
