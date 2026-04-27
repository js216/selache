// SPDX-License-Identifier: MIT
// cctest_ptr_sizes_equal.c --- cctest case ptr_sizes_equal
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
   return (sizeof(void *) == sizeof(int *) && sizeof(int *) == sizeof(char *))
              ? 0x55
              : 0xAA;
}
