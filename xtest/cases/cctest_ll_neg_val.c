// SPDX-License-Identifier: MIT
// cctest_ll_neg_val.c --- cctest case ll_neg_val
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
   long long x = -1LL;
   long long y = -9999999999LL;
   return (x < 0 && y < 0 && x > y) ? 0x55 : 0xAA;
}
