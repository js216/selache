// SPDX-License-Identifier: MIT
// cctest_ll_mul.c --- cctest case ll_mul
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
   long long a = 100000LL;
   long long b = 100000LL;
   long long c = a * b; /* 10,000,000,000 = 0x2540BE400 */
   return (c == 10000000000LL) ? 0x55 : 0xAA;
}
