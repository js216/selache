// SPDX-License-Identifier: MIT
// cctest_unsigned_rshift.c --- cctest case unsigned_rshift
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
   unsigned int x = 0x80000000u;
   unsigned int y = x >> 1;
   return (y == 0x40000000u) ? 0x55 : 0xAA;
}
