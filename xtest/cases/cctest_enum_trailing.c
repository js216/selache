// SPDX-License-Identifier: MIT
// cctest_enum_trailing.c --- cctest case enum_trailing
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum trailing_e {
   TE_A = 5,
   TE_B = 10,
   TE_C = 15,
};

int test_main(void)
{
   return TE_A + TE_B + TE_C; /* 30 = 0x1E */
}
