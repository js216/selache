// SPDX-License-Identifier: MIT
// cctest_int_promo.c --- cctest case int_promo
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xC8 */

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
   char a = 10;
   char b = 20;
   return a * b; /* 200 = 0xC8 */
}
