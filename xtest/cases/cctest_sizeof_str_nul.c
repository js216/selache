// SPDX-License-Identifier: MIT
// cctest_sizeof_str_nul.c --- cctest case sizeof_str_nul
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x06 */

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
   return (int)sizeof("hello");
}
