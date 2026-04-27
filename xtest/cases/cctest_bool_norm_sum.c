// SPDX-License-Identifier: MIT
// cctest_bool_norm_sum.c --- cctest case bool_norm_sum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   _Bool a = 42;
   _Bool b = -100;
   _Bool c = 0;
   _Bool d = 1;
   return (int)(a + b + c + d); /* 1+1+0+1 = 3 */
}
