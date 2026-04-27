// SPDX-License-Identifier: MIT
// cctest_shift_zero.c --- cctest case shift_zero
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
   int x = 0x12345678;
   return ((x << 0) == x && (x >> 0) == x) ? 0x55 : 0xAA;
}
