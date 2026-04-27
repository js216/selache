// SPDX-License-Identifier: MIT
// cctest_extern_inside.c --- cctest case extern_inside
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_ext_link_val2 = 0x42;

int test_main(void)
{
   extern int cctest_ext_link_val2;
   return cctest_ext_link_val2;
}
