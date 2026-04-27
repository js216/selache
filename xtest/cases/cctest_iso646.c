// SPDX-License-Identifier: MIT
// cctest_iso646.c --- cctest case iso646
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3F */

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
   int a = 0xFF, b = 0x0F;
   int r = 0;
   if (a and b)
      r += 1; /* && */
   if (a or 0)
      r += 2; /* || */
   if (not 0)
      r += 4; /* ! */
   if ((a bitand b) == b)
      r += 8; /* & */
   if ((a bitor b) == a)
      r += 16; /* | */
   if ((a xor b) == 0xF0)
      r += 32; /* ^ */
   return r;   /* 1+2+4+8+16+32 = 63 = 0x3F */
}
