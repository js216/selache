// SPDX-License-Identifier: MIT
// cctest_tent_actual.c --- cctest case tent_actual
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

int cctest_tent_then_init;
int cctest_tent_then_init = 0x42;

int test_main(void)
{
   return cctest_tent_then_init; /* 0x42 */
}
