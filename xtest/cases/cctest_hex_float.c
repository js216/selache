// SPDX-License-Identifier: MIT
// cctest_hex_float.c --- cctest case hex_float
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10 */

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
   float f = 0x1.0p4; /* 16.0 */
   return (int)f;     /* 16 = 0x10 */
}
