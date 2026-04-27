// SPDX-License-Identifier: MIT
// cctest_arith_conv.c --- cctest case arith_conv
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAA */

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
   int s          = -1;
   unsigned int u = 1;
   /* s promoted to unsigned → 0xFFFFFFFF > 1 */
   return (s > u) ? 0xAA : 0xBB; /* 0xAA */
}
