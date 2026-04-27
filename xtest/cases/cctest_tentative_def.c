// SPDX-License-Identifier: MIT
// cctest_tentative_def.c --- cctest case tentative_def
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x66 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_tentative_var;
int cctest_tentative_var;

int test_main(void)
{
   cctest_tentative_var = 0x66;
   return cctest_tentative_var; /* 0x66 */
}
