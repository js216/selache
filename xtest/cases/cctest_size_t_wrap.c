// SPDX-License-Identifier: MIT
// cctest_size_t_wrap.c --- cctest case size_t_wrap
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
   size_t a = 0;
   size_t b = a - 1; /* wraps to max value */
   return (b > 0) ? 0x55 : 0xAA;
}
