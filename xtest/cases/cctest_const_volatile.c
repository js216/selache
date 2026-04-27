// SPDX-License-Identifier: MIT
// cctest_const_volatile.c --- cctest case const_volatile
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */

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
   volatile int x        = 0x33;
   const volatile int *p = &x;
   return *p; /* 0x33 */
}
