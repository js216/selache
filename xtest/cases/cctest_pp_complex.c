// SPDX-License-Identifier: MIT
// cctest_pp_complex.c --- cctest case pp_complex
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x88 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define CPP_A 3
#define CPP_B 5
#define CPP_C (CPP_A * CPP_B - 7)

int test_main(void)
{
#if CPP_C == 8 && (CPP_A + CPP_B) > 6 && !(CPP_C < 0)
   return 0x88;
#else
   return 0;
#endif
}
