// SPDX-License-Identifier: MIT
// cctest_roundf_fn.c --- cctest case roundf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   if (roundf(3.5f) != 4.0f) return 0;
   if (roundf(2.4f) != 2.0f) return 0;
   if (roundf(-2.5f) != -3.0f) return 0;
   return (int)roundf(3.5f);
}
