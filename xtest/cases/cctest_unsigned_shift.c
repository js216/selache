// SPDX-License-Identifier: MIT
// cctest_unsigned_shift.c --- cctest case unsigned_shift
// Copyright (c) 2026 Jakob Kastelic

/* @expect 8 */

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
   unsigned int x = 0x80000000;
   return (int)(x >> 28); /* 8 */
}
