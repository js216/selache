// SPDX-License-Identifier: MIT
// cctest_ceilf_fn.c --- cctest case ceilf_fn
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
   if (ceilf(3.2f) != 4.0f) return 0;
   if (ceilf(-2.5f) != -2.0f) return 0;
   return (int)ceilf(3.2f);
}
