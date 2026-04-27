// SPDX-License-Identifier: MIT
// cctest_const_param.c --- cctest case const_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int const_param(const int x)
{
   return x + 1; /* cannot modify x */
}

int test_main(void)
{
   int a = 0x41;
   return const_param(a); /* 0x42 */
}
