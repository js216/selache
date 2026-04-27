// SPDX-License-Identifier: MIT
// cctest_va_macro.c --- cctest case va_macro
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

static int va_sum3(int a, int b, int c)
{
   return a + b + c;
}

#define CALL_SUM(fn, ...) fn(__VA_ARGS__)

int test_main(void)
{
   return CALL_SUM(va_sum3, 1, 2, 3); /* 6 */
}
