// SPDX-License-Identifier: MIT
// cctest_enum_case.c --- cctest case enum_case
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   enum { VAL_A = 10, VAL_B = 20, VAL_C = 30 };
