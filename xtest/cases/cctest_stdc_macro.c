// SPDX-License-Identifier: MIT
// cctest_stdc_macro.c --- cctest case stdc_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

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
#ifdef __STDC__
   return __STDC__; /* 1 */
#else
   return 0;
#endif
}
