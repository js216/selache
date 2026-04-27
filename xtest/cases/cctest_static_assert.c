// SPDX-License-Identifier: MIT
// cctest_static_assert.c --- cctest case static_assert
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef char sa_check_short[(sizeof(short) == 2) ? 1 : -1];
typedef char sa_check_int[(sizeof(int) == 4) ? 1 : -1];

int test_main(void)
{
   return (int)sizeof(sa_check_short) + (int)sizeof(sa_check_int); /* 1+1 = 2 */
}
