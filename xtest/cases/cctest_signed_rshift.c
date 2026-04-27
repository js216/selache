// SPDX-License-Identifier: MIT
// cctest_signed_rshift.c --- cctest case signed_rshift
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
   int x = -8;
   int y = x >> 1;
   return (y == -4) ? 0x55 : 0xAA;
}
