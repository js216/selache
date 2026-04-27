// SPDX-License-Identifier: MIT
// cctest_local_extern.c --- cctest case local_extern
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x88 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_extern_var = 0x88;

int test_main(void)
{
   extern int cctest_extern_var;
   return cctest_extern_var; /* 0x88 */
}
