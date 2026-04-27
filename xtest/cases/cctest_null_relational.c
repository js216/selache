// SPDX-License-Identifier: MIT
// cctest_null_relational.c --- cctest case null_relational
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
   int x  = 42;
   int *p = &x;
   int *q = (int *)0;
   int r  = 0;
   if (p != (int *)0)
      r += 1; /* non-null != NULL */
   if (q == (int *)0)
      r += 2; /* null == NULL */
   if (!q)
      r += 4; /* !null is true */
   if (p)
      r += 8; /* non-null is true */
   return r;  /* 1+2+4+8 = 15 = 0x0F */
}
