// SPDX-License-Identifier: MIT
// cctest_ll_add_sub.c --- cctest case ll_add_sub
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
   long long a = 0x100000000LL;
   long long b = 0x200000000LL;
   long long c = a + b; /* 0x300000000 */
   long long d = c - a; /* 0x200000000 */
   return (d == b) ? 0x55 : 0xAA;
}
