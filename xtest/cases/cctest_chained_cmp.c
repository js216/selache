// SPDX-License-Identifier: MIT
// cctest_chained_cmp.c --- cctest case chained_cmp
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
   int a = 1, b = 5, c = 10;
   return (a < b && b < c) ? 0x55 : 0xAA;
}
