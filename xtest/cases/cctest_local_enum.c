// SPDX-License-Identifier: MIT
// cctest_local_enum.c --- cctest case local_enum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12 */

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
   enum local_e { LE_A = 3, LE_B = 7, LE_C = 11 };
   enum local_e val = LE_B;
   return val + LE_C; /* 7 + 11 = 18 = 0x12 */
}
