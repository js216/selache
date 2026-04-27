// SPDX-License-Identifier: MIT
// cctest_assert_macro.c --- cctest case assert_macro
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

#define NDEBUG
#include <assert.h>

int test_main(void)
{
   /* with NDEBUG, assert is a no-op even on a false expression */
   assert(0 == 1);
   return 0x55;
}
