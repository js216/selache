// SPDX-License-Identifier: MIT
// cctest_single_member_union.c --- cctest case single_member_union
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.x = 0x42;
   return s.x; /* 0x42 */
}

int test_main(void)
{
   union {
      int x;
   } u;
