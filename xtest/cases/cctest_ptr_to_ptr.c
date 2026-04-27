// SPDX-License-Identifier: MIT
// cctest_ptr_to_ptr.c --- cctest case ptr_to_ptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2A */

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
   int x    = 42;
   int *p   = &x;
   int **pp = &p;
   return **pp; /* 42 = 0x2A */
}
