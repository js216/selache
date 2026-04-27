// SPDX-License-Identifier: MIT
// cctest_nested_pp.c --- cctest case nested_pp
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x22 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define NEST_OUTER 1
#define NEST_INNER 2

int test_main(void)
{
#ifdef NEST_OUTER
#if NEST_INNER == 2
   return 0x22;
#elif NEST_INNER == 1
   return 0x11;
#else
   return 0xFF;
#endif
#else
   return 0;
#endif
}
