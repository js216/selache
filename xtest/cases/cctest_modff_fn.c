// SPDX-License-Identifier: MIT
// cctest_modff_fn.c --- cctest case modff_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

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
   float ip = 0.0f;
   float fp = modff(7.25f, &ip);
   if (fabsf(fp - 0.25f) > 1e-5f) return 0;
   return (int)ip;
}
