// SPDX-License-Identifier: MIT
// cctest_powf_fn.c --- cctest case powf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x40 */

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
   float p = powf(2.0f, 6.0f);
   int n = (int)(p + 0.5f);
   if (n != 64) return 0;
   if (powf(5.0f, 0.0f) != 1.0f) return 0;
   return n;
}
