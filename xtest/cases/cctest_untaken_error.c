// SPDX-License-Identifier: MIT
// cctest_untaken_error.c --- cctest case untaken_error
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

int test_main(void)
{
#if 0
#error "This should never be reached"
#endif
   return 0x55;
}
