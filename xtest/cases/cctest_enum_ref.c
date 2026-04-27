// SPDX-License-Identifier: MIT
// cctest_enum_ref.c --- cctest case enum_ref
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1D */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum seq { SEQ_A = 5, SEQ_B = SEQ_A + 3, SEQ_C = SEQ_B * 2 };

int test_main(void)
{
   return SEQ_A + SEQ_B + SEQ_C; /* 5+8+16 = 29 = 0x1D */
}
