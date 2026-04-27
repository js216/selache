// SPDX-License-Identifier: MIT
// cctest_ternary_dim.c --- cctest case ternary_dim
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x08 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return s.a | s.b;
}

int test_main(void)
{
   int arr[sizeof(int) == 4 ? 2 : 4];
   return (int)sizeof(arr); /* 2 * 4 = 8 */
}
