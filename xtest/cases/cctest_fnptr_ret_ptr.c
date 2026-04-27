// SPDX-License-Identifier: MIT
// cctest_fnptr_ret_ptr.c --- cctest case fnptr_ret_ptr
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

static int gval = 0x55;

static int *get_ptr(void)
{
   return &gval;
}

int test_main(void)
{
   int *(*fp)(void) = get_ptr;
   return *fp(); /* 0x55 */
}
