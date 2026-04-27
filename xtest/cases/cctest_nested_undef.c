// SPDX-License-Identifier: MIT
// cctest_nested_undef.c --- cctest case nested_undef
// Copyright (c) 2026 Jakob Kastelic

/* @expect 7 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define NEST_UNDEF_A
#define NEST_UNDEF_B

int test_main(void)
{
   int r = 0;
#ifdef NEST_UNDEF_A
   r += 1;
#ifdef NEST_UNDEF_B
   r += 2;
#undef NEST_UNDEF_B
#endif
#ifndef NEST_UNDEF_B
   r += 4; /* B was just undef'd */
#endif
#endif
   return r; /* 1+2+4 = 7 */
}
