// SPDX-License-Identifier: MIT
// cctest_floor_fn.c --- cctest case floor_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   if (floor(5.9) != 5.0) return 0;
   if (floor(-1.1) != -2.0) return 0;
   return (int)floor(5.9);
}
