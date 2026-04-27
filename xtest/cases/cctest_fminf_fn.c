// SPDX-License-Identifier: MIT
// cctest_fminf_fn.c --- cctest case fminf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x02 */

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
   if (fminf(2.0f, 5.0f) != 2.0f) return 0;
   if (fminf(-1.0f, -3.0f) != -3.0f) return 0;
   return (int)fminf(2.0f, 5.0f);
}
