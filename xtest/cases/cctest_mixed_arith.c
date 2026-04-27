// SPDX-License-Identifier: MIT
// cctest_mixed_arith.c --- cctest case mixed_arith
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
   char a  = 10;
   short b = 20;
   int c   = 30;
   long d  = 40L;
   return (int)(a + b + c + d); /* 100 = 0x64 */
}
