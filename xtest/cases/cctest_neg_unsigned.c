// SPDX-License-Identifier: MIT
// cctest_neg_unsigned.c --- cctest case neg_unsigned
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   unsigned int a = 1;
   unsigned int b = -a;   /* 0xFFFFFFFF */
   return (int)(b >> 28); /* 0xF = 15 */
}
