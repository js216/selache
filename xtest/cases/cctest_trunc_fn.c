// SPDX-License-Identifier: MIT
// cctest_trunc_fn.c --- cctest case trunc_fn
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
   if (trunc(5.7) != 5.0) return 0;
   if (trunc(-3.9) != -3.0) return 0;
   return (int)trunc(5.7);
}
