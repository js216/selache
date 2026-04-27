// SPDX-License-Identifier: MIT
// cctest_ull_max.c --- cctest case ull_max
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xFF */

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
   unsigned long long max   = ~0ULL;
   unsigned long long check = 0xFFFFFFFFFFFFFFFFULL;
   return (max == check) ? 0xFF : 0;
}
