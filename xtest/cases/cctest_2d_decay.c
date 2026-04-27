// SPDX-License-Identifier: MIT
// cctest_2d_decay.c --- cctest case 2d_decay
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
   int a[3][4];
   a[1][2]      = 0x55;
   int(*row)[4] = a; /* decay: int[3][4] -> int(*)[4] */
   return row[1][2];
}
