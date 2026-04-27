// SPDX-License-Identifier: MIT
// cctest_int_to_float_conv.c --- cctest case int_to_float_conv
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
   int i        = 7;
   float f      = 0.5f;
   float result = i + f;
   return (int)result; /* 7.5 -> 7 */
}
