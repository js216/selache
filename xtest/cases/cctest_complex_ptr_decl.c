// SPDX-License-Identifier: MIT
// cctest_complex_ptr_decl.c --- cctest case complex_ptr_decl
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

static int cpd_val = 0x42;

static int *cpd_fn1(void)
{
   return &cpd_val;
}

int test_main(void)
{
   int *(*arr[1])(void); /* array of 1 ptr to fn returning int* */
   arr[0] = cpd_fn1;
   return *arr[0](); /* 0x42 */
}
