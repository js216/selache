// SPDX-License-Identifier: MIT
// cctest_void_ptr_round.c --- cctest case void_ptr_round
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   int x   = 0x42;
   void *v = &x;
   int *p  = (int *)v;
   return *p;
}
