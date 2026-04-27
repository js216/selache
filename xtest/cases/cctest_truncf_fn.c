// SPDX-License-Identifier: MIT
// cctest_truncf_fn.c --- cctest case truncf_fn
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
   if (truncf(3.7f) != 3.0f) return 0;
   if (truncf(-2.7f) != -2.0f) return 0;
   return (int)truncf(3.7f);
}
