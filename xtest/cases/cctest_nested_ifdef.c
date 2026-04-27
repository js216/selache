// SPDX-License-Identifier: MIT
// cctest_nested_ifdef.c --- cctest case nested_ifdef
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   int r = 0;
#if 1
   r += 1;
#if 0
    r += 100;
#elif 1
   r += 2;
#else
   r += 200;
#endif
#else
   r += 300;
#endif
   return r; /* 1 + 2 = 3 */
}
