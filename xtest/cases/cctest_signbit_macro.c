// SPDX-License-Identifier: MIT
// cctest_signbit_macro.c --- cctest case signbit_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x11 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int test_main(void)
{
   int r = 0;
   if (signbit(-1.0f)) r |= 0x01;
   if (!signbit(1.0f)) r |= 0x10;
   return r;
}
