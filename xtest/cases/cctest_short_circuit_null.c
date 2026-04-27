// SPDX-License-Identifier: MIT
// cctest_short_circuit_null.c --- cctest case short_circuit_null
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x01 */

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
   int *p = 0;
   int r  = (p != 0) && (*p == 42);
   return (r == 0) ? 1 : 0;
}
