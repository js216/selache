// SPDX-License-Identifier: MIT
// cctest_enum_int_conv.c --- cctest case enum_int_conv
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38 */

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
   enum { EA = 10, EB = 20 };
