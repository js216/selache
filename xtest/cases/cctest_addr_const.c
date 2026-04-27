// SPDX-License-Identifier: MIT
// cctest_addr_const.c --- cctest case addr_const
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

static int g_addr_target = 0x55;
static int *g_addr_ptr   = &g_addr_target;

int test_main(void)
{
   return *g_addr_ptr; /* 0x55 */
}
