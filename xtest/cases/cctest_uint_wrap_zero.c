// SPDX-License-Identifier: MIT
// cctest_uint_wrap_zero.c --- cctest case uint_wrap_zero
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
   unsigned int m = (unsigned int)-1;
   return (m + 1 == 0) ? 0x55 : 0xAA;
}
