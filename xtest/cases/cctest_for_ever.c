// SPDX-License-Identifier: MIT
// cctest_for_ever.c --- cctest case for_ever
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.a = 7;                         /* 0b111 */
   bf.b = 5;                         /* 0b101 */
   bf.c = 3;                         /* 0b011 */
   bf.d = 1;                         /* 0b001 */
   return bf.a + bf.b + bf.c + bf.d; /* 7+5+3+1 = 16 = 0x10 */
}

int test_main(void)
{
   int i = 0;
   for (;;) {
      i++;
      if (i == 7)
         break;
   }
   return i; /* 7 */
}
