// SPDX-License-Identifier: MIT
// cctest_static_fwd.c --- cctest case static_fwd
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x31 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fwd_static(int x);

int test_main(void)
{
   return fwd_static(0x30); /* 0x31 */
}
