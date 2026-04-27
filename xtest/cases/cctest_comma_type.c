// SPDX-License-Identifier: MIT
// cctest_comma_type.c --- cctest case comma_type
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   int a  = 10;
   long b = 20L;
   long r = (a, b); /* result is b (20) */
   return (int)r;   /* 20 = 0x14 */
}
