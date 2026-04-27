// SPDX-License-Identifier: MIT
// cctest_uchar_arith.c --- cctest case uchar_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12C */

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
   unsigned char a = 200;
   unsigned char b = 100;
   int sum         = a + b; /* promoted to int: 300 */
   return sum;              /* 300 = 0x12C */
}
