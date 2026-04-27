// SPDX-License-Identifier: MIT
// cctest_global_complit.c --- cctest case global_complit
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x99 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int *g_complit_ptr = &(int){0x99};

int test_main(void)
{
   return *g_complit_ptr; /* 0x99 */
}
