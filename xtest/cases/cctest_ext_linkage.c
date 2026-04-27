// SPDX-License-Identifier: MIT
// cctest_ext_linkage.c --- cctest case ext_linkage
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_ext_linkage_var = 0x37;

int test_main(void)
{
   return cctest_ext_linkage_var;
}
