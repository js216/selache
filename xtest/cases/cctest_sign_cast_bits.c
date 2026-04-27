// SPDX-License-Identifier: MIT
// cctest_sign_cast_bits.c --- cctest case sign_cast_bits
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.x = 0x10;
   s.y = 0x20;
   return s.x + s.y; /* 0x30 */
}

struct s2 {
   int a;
   int b;
};

int test_main(void)
{
   int s          = -1;
   unsigned int u = (unsigned int)s;
   int r          = 0;
   if (u == 0xFFFFFFFFu)
      r += 1;
   int s2 = (int)u;
   if (s2 == -1)
      r += 2;
   return r; /* 1+2 = 3 */
}
