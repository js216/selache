// SPDX-License-Identifier: MIT
// cctest_fn_ret_voidptr.c --- cctest case fn_ret_voidptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x66 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void *ret_voidptr(int *p)
{
   return (void *)p;
}

int test_main(void)
{
   int x  = 0x66;
   int *p = (int *)ret_voidptr(&x);
   return *p; /* 0x66 */
}
