// SPDX-License-Identifier: MIT
// cctest_switch_side.c --- cctest case switch_side
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.flags          = 0;
   unsigned char *p = (unsigned char *)&s;
   p[0]             = 0x0A;      /* set low byte */
   return (int)(s.flags & 0xFF); /* 0x0A */
}

int test_main(void)
{
   int x = 1;
   switch (x++) {
      case 0: return 0x10;
      case 1: return x + 0x10; /* x is now 2; 2 + 0x10 = 0x12 */
      default: return 0xFF;
   }
}
