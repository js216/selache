// SPDX-License-Identifier: MIT
// cctest_conv_rank.c --- cctest case conv_rank
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
   short s = 1;
   long l  = 2;
   /* s is promoted to long for the addition; result type is long */
   long result = s + l;
   return (result == 3 && sizeof(result) == sizeof(long)) ? 0x55 : 0xAA;
}
