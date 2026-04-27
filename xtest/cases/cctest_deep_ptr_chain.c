// SPDX-License-Identifier: MIT
// cctest_deep_ptr_chain.c --- cctest case deep_ptr_chain
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

int test_main(void)
{
   struct nd {
      int v;
      struct nd *n;
   };
   struct nd c = {0x55, 0};
   struct nd b = {0x20, &c};
   struct nd a = {0x10, &b};
   return a.n->n->v;
}
