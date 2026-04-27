// SPDX-License-Identifier: MIT
// cctest_list_count.c --- cctest case list_count
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */

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
   struct nd e = {5, 0};
   struct nd d = {4, &e};
   struct nd c = {3, &d};
   struct nd b = {2, &c};
   struct nd a = {1, &b};
   int count   = 0;
   for (struct nd *p = &a; p; p = p->n)
      count++;
   return count;
}
