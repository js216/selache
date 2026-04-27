// SPDX-License-Identifier: MIT
// cctest_switch_in_loop.c --- cctest case switch_in_loop
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6F */

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
   int r = 0, i;
   for (i = 0; i < 3; i++) {
      switch (i) {
         case 0: r += 1; break;
         case 1: r += 10; break;
         case 2: r += 100; break;
      }
   }
   return r; /* 111 = 0x6F */
}
