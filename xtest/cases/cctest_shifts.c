// SPDX-License-Identifier: MIT
// cctest_shifts.c --- cctest case shifts
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x94 */

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
   return (1 << 6) + (0x200 >> 3) + (5 << 2);
}
