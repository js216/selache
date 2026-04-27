// SPDX-License-Identifier: MIT
// cctest_log2_shift.c --- cctest case log2_shift
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   unsigned int x = 1024; /* 2^10 */
   int log2       = 0;
   while (x > 1) {
      x >>= 1;
      log2++;
   }
   return log2;
}
