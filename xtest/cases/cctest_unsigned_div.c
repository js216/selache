// SPDX-License-Identifier: MIT
// cctest_unsigned_div.c --- cctest case unsigned_div
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x80 */

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
   unsigned int a = 0x80000000u; /* 2147483648 */
   unsigned int b = 0x10000u;    /* 65536 */
   unsigned int q = a / b;       /* 32768 = 0x8000 */
   return (int)(q >> 8);         /* 0x80 = 128 */
}
