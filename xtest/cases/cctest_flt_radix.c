// SPDX-License-Identifier: MIT
// cctest_flt_radix.c --- cctest case flt_radix
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

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
   return FLT_RADIX; /* 2 */
}
