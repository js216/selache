// SPDX-License-Identifier: MIT
// cctest_bool_conv.c --- cctest case bool_conv
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
   _Bool a = 42;    /* nonzero → 1 */
   _Bool b = 0;     /* zero → 0    */
   _Bool c = -1;    /* nonzero → 1 */
   _Bool d = 3.14f; /* nonzero → 1 */
   int r   = 0;
   if (a == 1)
      r += 1;
   if (b == 0)
      r += 2;
   if (c == 1)
      r += 4;
   if (d == 1)
      r += 8;
   return r; /* 1+2+4+8 = 15 = 0x0F */
}
