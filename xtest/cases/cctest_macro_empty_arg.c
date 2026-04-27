// SPDX-License-Identifier: MIT
// cctest_macro_empty_arg.c --- cctest case macro_empty_arg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAYBE(x) (0 x + 1)

int test_main(void)
{
   return MAYBE(); /* (0  + 1) = 1 */
}
