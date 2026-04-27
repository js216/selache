// SPDX-License-Identifier: MIT
// cctest_global_ptr_init.c --- cctest case global_ptr_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_complit_arr[] = {10, 20, 30};
static int *g_ca_ptr       = &g_complit_arr[1];

int test_main(void)
{
   return *g_ca_ptr; /* 20 = 0x14 */
}
