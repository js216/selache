// SPDX-License-Identifier: MIT
// cctest_logical_nonbool.c --- cctest case logical_nonbool
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
   int r = 0;
   if (42 && 99)
      r += 1; /* nonzero && nonzero = true */
   if (0 || 77)
      r += 2; /* zero || nonzero = true */
   if (!(0))
      r += 4; /* !zero = true */
   if (42 && 0 || 1)
      r += 8; /* (42&&0)||1 = 0||1 = 1 */
   return r;  /* 1+2+4+8 = 15 = 0x0F */
}
