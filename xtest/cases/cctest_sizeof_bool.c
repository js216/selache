// SPDX-License-Identifier: MIT
// cctest_sizeof_bool.c --- cctest case sizeof_bool
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
   return (sizeof(_Bool) >= 1) ? 0x55 : 0xAA;
}
