// SPDX-License-Identifier: MIT
// cctest_nested_cast.c --- cctest case nested_cast
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x78 */

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
   int x = 0x12345678;
   int r = (int)(short)(char)x; /* char: 0x78, short: 0x0078, int: 0x0078 */
   return r;                    /* 0x78 = 120 */
}
