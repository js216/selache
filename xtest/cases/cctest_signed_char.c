// SPDX-License-Identifier: MIT
// cctest_signed_char.c --- cctest case signed_char
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
   signed char a = -100;
   signed char b = 50;
   int sum       = a + b; /* int promotion: -100+50 = -50 */
   return -sum;           /* 50 = 0x32 */
}
