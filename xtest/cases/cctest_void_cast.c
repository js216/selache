// SPDX-License-Identifier: MIT
// cctest_void_cast.c --- cctest case void_cast
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

static int side_effect_fn(int *p)
{
   (*p)++;
   return 99;
}

int test_main(void)
{
   int x = 0;
   (void)side_effect_fn(&x); /* discard return, keep side effect */
   return x;                 /* 1 */
}
