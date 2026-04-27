// SPDX-License-Identifier: MIT
// cctest_float.c --- cctest case float
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0E */

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
   float a = 3.0f;
   float b = 4.0f;
   float c = a * b + 2.0f;
   return (int)c;
}
