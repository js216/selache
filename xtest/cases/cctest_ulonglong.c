// SPDX-License-Identifier: MIT
// cctest_ulonglong.c --- cctest case ulonglong
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
   unsigned long long a = 0xFFFFFFFFULL;
   unsigned long long b = 1ULL;
   unsigned long long c = a + b; /* 0x100000000 */
   return (int)(c >> 32);        /* 1 */
}
