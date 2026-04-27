// SPDX-License-Identifier: MIT
// cctest_macro_comma_arg.c --- cctest case macro_comma_arg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 3 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return ONLY; /* 0x33 */
}

#define FIRST_ARG(x) (x)

int test_main(void)
{
   /* The argument (1, 2, 3) is a single macro arg due to outer parens */
   return FIRST_ARG((1, 2, 3)); /* comma operator: result is 3 */
}
