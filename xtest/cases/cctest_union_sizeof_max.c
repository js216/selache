// SPDX-License-Identifier: MIT
// cctest_union_sizeof_max.c --- cctest case union_sizeof_max
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return (int)sizeof(struct sa); /* 4+20=24 */
}

int test_main(void)
{
   union u {
      char c;
      int i;
      double d;
   };
