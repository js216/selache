// SPDX-License-Identifier: MIT
// cctest_postdec.c --- cctest case postdec
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x13 */

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
   int x = 10;
   int y = x--;
   return y + x; /* 10 + 9 = 19 = 0x13 */
}
