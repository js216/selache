// SPDX-License-Identifier: MIT
// cctest_void_ptr_cast_back.c --- cctest case void_ptr_cast_back
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
   int x   = 42;
   void *v = &x;
   int *p  = (int *)v;
   *p      = 0x55;
   return x;
}
