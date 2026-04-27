// SPDX-License-Identifier: MIT
// cctest_mod_by_1.c --- cctest case mod_by_1
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
   int r = 1;
   for (int i = -10; i <= 10; i++) {
      if (i % 1 != 0)
         r = 0;
   }
   return r ? 0x55 : 0xAA;
}
