// SPDX-License-Identifier: MIT
// cctest_void_ptr.c --- cctest case void_ptr
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
   int x    = 0x77;
   void *vp = &x;
   int *ip  = (int *)vp;
   return *ip; /* 0x77 */
}
