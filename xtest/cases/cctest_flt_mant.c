// SPDX-License-Identifier: MIT
// cctest_flt_mant.c --- cctest case flt_mant
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   return FLT_MANT_DIG + FLT_DIG; /* 24 + 6 = 30 = 0x1E */
}
