// SPDX-License-Identifier: MIT
// cctest_complit_write.c --- cctest case complit_write
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x64 */

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
   int *p = (int[]){10, 20, 30};
   p[1]   = 100;
   return p[1];
}
