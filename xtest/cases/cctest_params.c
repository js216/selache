// SPDX-License-Identifier: MIT
// cctest_params.c --- cctest case params
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int params_helper(int a, int b)
{
   return a * b + 1;
}

int test_main(void)
{
   return params_helper(7, 11);
}
