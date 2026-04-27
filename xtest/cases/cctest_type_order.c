// SPDX-License-Identifier: MIT
// cctest_type_order.c --- cctest case type_order
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x19A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return AE_X + AE_Y + AE_Z; /* 40 = 0x28 */
}

int test_main(void)
{
   unsigned long int a = 100UL;
   long unsigned int b = 200UL;
   signed short int c  = 10;
   short signed int d  = 20;
   int long e          = 50L;
   int unsigned f      = 30u;
   return (int)(a + b) + c + d + (int)e +
          (int)f; /* 300+10+20+50+30 = 410 = 0x19A */
}
