// SPDX-License-Identifier: MIT
// cctest_volatile.c --- cctest case volatile
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x56 */

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
   volatile int x = 0x55;
   x              = x + 1;
   return x; /* 0x56 */
}
