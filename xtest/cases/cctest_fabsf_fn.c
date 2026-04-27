// SPDX-License-Identifier: MIT
// cctest_fabsf_fn.c --- cctest case fabsf_fn
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
   if (fabsf(-3.5f) != 3.5f) return 0;
   if (fabsf(2.5f)  != 2.5f) return 0;
   return (int)(fabsf(-5.0f)); /* 5 */
}
