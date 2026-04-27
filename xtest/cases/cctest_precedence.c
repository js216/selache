// SPDX-License-Identifier: MIT
// cctest_precedence.c --- cctest case precedence
// Copyright (c) 2026 Jakob Kastelic

/* @expect 28 */

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
   /* 2 + 3*4 = 14; 14 << 1 = 28; 28 & 0xFF = 28 = 0x1C */
   return 2 + 3 * 4 << 1 & 0xFF;
}
