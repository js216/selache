// SPDX-License-Identifier: MIT
// cctest_global_rw.c --- cctest case global_rw
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

int cctest_gvar = 0;

int test_main(void)
{
   cctest_gvar = 0x42;
   return cctest_gvar; /* 0x42 */
}
