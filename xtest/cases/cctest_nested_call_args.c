// SPDX-License-Identifier: MIT
// cctest_nested_call_args.c --- cctest case nested_call_args
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

int test_main(void)
{
   /* add(add(1,2), add(3, add(4,5))) = add(3, add(3,9)) = add(3,12) = 15 */
   return helper_add(helper_add(1, 2), helper_add(3, helper_add(4, 5)));
}
