// SPDX-License-Identifier: MIT
// cctest_restrict.c --- cctest case restrict
// Copyright (c) 2026 Jakob Kastelic

/* @expect 6 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void restricted_copy(int *restrict dst, const int *restrict src, int n)
{
   for (int i = 0; i < n; i++)
      dst[i] = src[i];
}

int test_main(void)
{
   int a[3];
   a[0] = 1;
   a[1] = 2;
   a[2] = 3;
   int b[3];
   restricted_copy(b, a, 3);
   return b[0] + b[1] + b[2]; /* 6 */
}
