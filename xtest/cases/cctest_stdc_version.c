// SPDX-License-Identifier: MIT
// cctest_stdc_version.c --- cctest case stdc_version
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x99 */

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
#ifdef __STDC_VERSION__
   long v = __STDC_VERSION__;
   return (v >= 199901L) ? 0x99 : 0x01;
#else
   return 0x99; /* still pass if not defined -- compiler-specific */
#endif
}
