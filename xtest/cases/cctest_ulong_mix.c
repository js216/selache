// SPDX-License-Identifier: MIT
// cctest_ulong_mix.c --- cctest case ulong_mix
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x64 */

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
   unsigned long a = 300000UL;
   unsigned long b = 200000UL;
   unsigned long c = a - b; /* 100000 */
   return (int)(c / 1000);  /* 100 = 0x64 */
}
