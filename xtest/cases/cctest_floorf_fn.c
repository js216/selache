// SPDX-License-Identifier: MIT
// cctest_floorf_fn.c --- cctest case floorf_fn
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
#include <math.h>

int test_main(void)
{
   if (floorf(3.7f) != 3.0f) return 0;
   if (floorf(-2.5f) != -3.0f) return 0;
   return (int)floorf(3.7f);
}
