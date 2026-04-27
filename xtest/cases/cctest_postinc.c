// SPDX-License-Identifier: MIT
// cctest_postinc.c --- cctest case postinc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35 */

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
   int i = 3;
   int j = i++;
   int k = ++i;
   return j * 0x10 + k;
}
