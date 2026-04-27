// SPDX-License-Identifier: MIT
// cctest_overflow_detect.c --- cctest case overflow_detect
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
   unsigned int a   = 0xFFFFFFFF;
   unsigned int b   = 1;
   unsigned int sum = a + b;
   int overflowed   = (sum < a); /* wrapped → sum < a */
   return overflowed ? 0x55 : 0xAA;
}
