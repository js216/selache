// SPDX-License-Identifier: MIT
// cctest_neg_neg_mod.c --- cctest case neg_neg_mod
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32 */

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
   int a = -17, b = -5;
   int q = a / b;          /* 3 (toward zero) */
   int r = a % b;          /* -2 (a == b*q + r: -5*3 + -2 = -17) */
   return q * 0x10 + (-r); /* 3*16 + 2 = 50 = 0x32 */
}
