// SPDX-License-Identifier: MIT
// cctest_copysign_fn.c --- cctest case copysign_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x01 */

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
   if (copysign(4.0, -2.0) != -4.0) return 0;
   if (copysign(-4.0, 1.0) != 4.0) return 0;
   return 1;
}
