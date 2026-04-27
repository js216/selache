// SPDX-License-Identifier: MIT
// cctest_shift_mixed_types.c --- cctest case shift_mixed_types
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
   unsigned int u      = 1u;
   int shift           = 4;
   unsigned int result = u << shift; /* 16 */
   return (result == 16) ? 0x55 : 0xAA;
}
