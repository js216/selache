// SPDX-License-Identifier: MIT
// cctest_addr_equiv.c --- cctest case addr_equiv
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
   int arr[4];
   return (&arr[2] == arr + 2) ? 0x55 : 0xAA; /* 0x55 */
}
