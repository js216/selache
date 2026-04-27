// SPDX-License-Identifier: MIT
// cctest_multi_fallthrough.c --- cctest case multi_fallthrough
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
   int x = 1, r = 0;
   switch (x) {
      case 1: r += 1;
      case 2: r += 2;
      case 3: r += 4;
      case 4: r += 8; break;
      default: r = 0xFF;
   }
   return r; /* 1+2+4+8 = 15 = 0x0F */
}
