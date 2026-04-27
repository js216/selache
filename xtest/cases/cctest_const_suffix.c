// SPDX-License-Identifier: MIT
// cctest_const_suffix.c --- cctest case const_suffix
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9B */

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
   unsigned int a = 0xFFu;            /* 255 */
   long b         = 100L;             /* 100 */
   return (int)(a - (unsigned int)b); /* 155 = 0x9B */
}
