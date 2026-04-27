// SPDX-License-Identifier: MIT
// cctest_ll_neg.c --- cctest case ll_neg
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
   long long a = 12345678901LL;
   long long b = -a;
   return (a + b == 0) ? 0x55 : 0xAA;
}
