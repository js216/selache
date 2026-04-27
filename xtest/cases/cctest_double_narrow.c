// SPDX-License-Identifier: MIT
// cctest_double_narrow.c --- cctest case double_narrow
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   double d = 7.5;
   float f  = (float)d;
   return (int)(f * 2.0f); /* 15 = 0xF */
}
