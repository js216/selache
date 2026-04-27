// SPDX-License-Identifier: MIT
// cctest_fmaxf_fn.c --- cctest case fmaxf_fn
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
   if (fmaxf(2.0f, 5.0f) != 5.0f) return 0;
   if (fmaxf(-1.0f, -3.0f) != -1.0f) return 0;
   return (int)fmaxf(2.0f, 5.0f);
}
