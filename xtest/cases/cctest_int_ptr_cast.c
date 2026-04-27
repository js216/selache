// SPDX-License-Identifier: MIT
// cctest_int_ptr_cast.c --- cctest case int_ptr_cast
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x77 */

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
   int x          = 0x77;
   int *p         = &x;
   unsigned int u = (unsigned int)p;
   int *q         = (int *)u;
   return *q; /* 0x77 */
}
