// SPDX-License-Identifier: MIT
// cctest_iso646_misc.c --- cctest case iso646_misc
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

int test_main(void)
{
   int r = 0;
   if ((compl 0u) == 0xFFFFFFFFu)
      r += 1; /* ~0 */
   if (5 not_eq 3)
      r += 2; /* != */
   return r;  /* 1+2 = 3 */
}
