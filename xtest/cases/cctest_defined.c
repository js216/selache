// SPDX-License-Identifier: MIT
// cctest_defined.c --- cctest case defined
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

#define CCTEST_DEF_A

int test_main(void)
{
   int r = 0;
#if defined(CCTEST_DEF_A) && !defined(CCTEST_DEF_B)
   r = 0x42;
#endif
   return r; /* 0x42 */
}
