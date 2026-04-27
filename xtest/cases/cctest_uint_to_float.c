// SPDX-License-Identifier: MIT
// cctest_uint_to_float.c --- cctest case uint_to_float
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xFA */

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
   unsigned int u = 1000;
   float f        = (float)u;
   f              = f / 4.0f;
   return (int)f; /* 250 = 0xFA */
}
