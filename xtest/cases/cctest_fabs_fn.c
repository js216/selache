// SPDX-License-Identifier: MIT
// cctest_fabs_fn.c --- cctest case fabs_fn
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
   if (fabs(-3.5) != 3.5) return 0;
   if (fabs(2.5)  != 2.5) return 0;
   return (int)(fabs(-5.0));
}
