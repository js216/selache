// SPDX-License-Identifier: MIT
// cctest_bit_reverse.c --- cctest case bit_reverse
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
   unsigned char x = 0xB4; /* 10110100 -> 00101101 = 0x2D */
   unsigned char r = 0;
   for (int i = 0; i < 8; i++) {
      r = (r << 1) | (x & 1);
      x >>= 1;
   }
   return (r == 0x2D) ? 0x55 : 0xAA;
}
