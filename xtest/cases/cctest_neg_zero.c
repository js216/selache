// SPDX-License-Identifier: MIT
// cctest_neg_zero.c --- cctest case neg_zero
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
   int a = -0;
   int b = 0;
   return (a == b) ? 0x55 : 0xAA; /* 0x55 */
}
