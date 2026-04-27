// SPDX-License-Identifier: MIT
// cctest_stdint_64.c --- cctest case stdint_64
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
   int64_t a = 1;
   a <<= 40;
   uint64_t b = (uint64_t)a;
   return (int)(b >> 40); /* 1 */
}
