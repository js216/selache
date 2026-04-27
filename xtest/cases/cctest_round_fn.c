// SPDX-License-Identifier: MIT
// cctest_round_fn.c --- cctest case round_fn
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
   if (round(5.5) != 6.0) return 0;
   if (round(5.4) != 5.0) return 0;
   return (int)round(5.5);
}
