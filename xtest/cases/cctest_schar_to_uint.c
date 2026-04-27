// SPDX-License-Identifier: MIT
// cctest_schar_to_uint.c --- cctest case schar_to_uint
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
   signed char c  = -1;
   unsigned int u = c; /* sign-extends to int (-1), then converts to UINT_MAX */
   return (u == (unsigned int)-1) ? 0x55 : 0xAA;
}
