// SPDX-License-Identifier: MIT
// cctest_list_traverse.c --- cctest case list_traverse
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
   struct nd {
      int v;
      struct nd *n;
   };
   struct nd c = {3, 0};
   struct nd b = {5, &c};
   struct nd a = {7, &b};
   int sum     = 0;
   for (struct nd *p = &a; p; p = p->n)
      sum += p->v;
   return sum; /* 15 */
}
