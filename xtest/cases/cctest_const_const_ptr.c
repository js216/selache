// SPDX-License-Identifier: MIT
// cctest_const_const_ptr.c --- cctest case const_const_ptr
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
   int x              = 0x42;
   const int *const p = &x;
   return *p; /* 0x42 */
}
