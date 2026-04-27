// SPDX-License-Identifier: MIT
// cctest_char_ptr_arith.c --- cctest case char_ptr_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x45 */

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
   int x      = 0x11223344;
   char *p    = (char *)&x;
   char first = p[0]; /* LSB on little-endian SHARC: 0x44 */
   char *q    = p + 1;
   return (int)(unsigned char)first + (int)(q > p); /* 0x44 + 1 = 0x45 */
}
