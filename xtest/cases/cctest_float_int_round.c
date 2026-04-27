// SPDX-License-Identifier: MIT
// cctest_float_int_round.c --- cctest case float_int_round
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
   float f = 3.14f;
   int i   = (int)f;   /* 3: truncation toward zero */
   float g = (float)i; /* 3.0 */
   return (g == 3.0f && i == 3) ? 0x55 : 0xAA;
}
