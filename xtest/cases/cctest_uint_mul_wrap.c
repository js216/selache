// SPDX-License-Identifier: MIT
// cctest_uint_mul_wrap.c --- cctest case uint_mul_wrap
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
   unsigned int a = 0x10000u;
   unsigned int b = 0x10000u;
   unsigned int c = a * b; /* 0x100000000 wraps to 0 */
   return (c == 0) ? 0x55 : 0xAA;
}
