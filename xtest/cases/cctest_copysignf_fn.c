// SPDX-License-Identifier: MIT
// cctest_copysignf_fn.c --- cctest case copysignf_fn
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
   if (copysignf(3.0f, -1.0f) != -3.0f) return 0;
   if (copysignf(-3.0f, 2.0f) != 3.0f) return 0;
   return 1;
}
