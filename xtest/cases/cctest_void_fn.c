// SPDX-License-Identifier: MIT
// cctest_void_fn.c --- cctest case void_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x77 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void set_val(int *p, int v)
{
   *p = v;
}

int test_main(void)
{
   int x = 0;
   set_val(&x, 0x77);
   return x; /* 0x77 */
}
