// SPDX-License-Identifier: MIT
// cctest_enum_from_enum.c --- cctest case enum_from_enum
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

enum base_e { BASE_A = 10, BASE_B = 20 };

enum derived_e { DER_A = BASE_A + 5, DER_B = BASE_B * 2 };

int test_main(void)
{
   return DER_A + DER_B; /* 15 + 40 = 55 = 0x37 */
}
