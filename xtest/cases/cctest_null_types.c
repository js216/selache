// SPDX-License-Identifier: MIT
// cctest_null_types.c --- cctest case null_types
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

struct off_test {
   int a;
   int b;
   int c;
};

int test_main(void)
{
   int r               = 0;
   int *pi             = NULL;
   char *pc            = NULL;
   void *pv            = NULL;
   struct off_test *ps = NULL;
   if (pi == NULL)
      r += 1;
   if (pc == NULL)
      r += 2;
   if (pv == NULL)
      r += 4;
   if (ps == NULL)
      r += 8;
   return r; /* 1+2+4+8 = 15 = 0x0F */
}
