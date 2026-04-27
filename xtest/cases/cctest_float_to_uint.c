// SPDX-License-Identifier: MIT
// cctest_float_to_uint.c --- cctest case float_to_uint
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
   float f        = 42.7f;
   unsigned int u = (unsigned int)f; /* 42 */
   return (int)u;                    /* 42 = 0x2A */
}
