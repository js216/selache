// SPDX-License-Identifier: MIT
// cctest_logf_fn.c --- cctest case logf_fn
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
   float l = logf((float)M_E);
   if (fabsf(l - 1.0f) > 1e-4f) return 0;
   if (fabsf(logf(1.0f)) > 1e-6f) return 0;
   return 1;
}
