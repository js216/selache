// SPDX-License-Identifier: MIT
// cctest_mod_sign.c --- cctest case mod_sign
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

int test_main(void)
{
   int r = 0;
   if (17 % 5 == 2)
      r += 1; /* positive dividend → positive remainder */
   if (-17 % 5 == -2)
      r += 2; /* negative dividend → negative remainder */
   if (17 % -5 == 2)
      r += 4; /* positive dividend → positive remainder */
   return r;  /* 1+2+4 = 7 */
}
