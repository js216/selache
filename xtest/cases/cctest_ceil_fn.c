// SPDX-License-Identifier: MIT
// cctest_ceil_fn.c --- cctest case ceil_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x06 */

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
   if (ceil(5.1) != 6.0) return 0;
   if (ceil(-1.9) != -1.0) return 0;
   return (int)ceil(5.1);
}
