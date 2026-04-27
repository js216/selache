// SPDX-License-Identifier: MIT
// cctest_ctz.c --- cctest case ctz
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

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
   unsigned int x = 0x30; /* 0b00110000 */
   int ctz        = 0;
   while ((x & 1) == 0 && ctz < 32) {
      ctz++;
      x >>= 1;
   }
   return ctz; /* 4 */
}
