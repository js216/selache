// SPDX-License-Identifier: MIT
// cctest_bitnot_unsigned.c --- cctest case bitnot_unsigned
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xFF */

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
   unsigned int a = 0xFFFFFF00;
   unsigned int b = ~a;    /* 0x000000FF */
   return (int)(b & 0xFF); /* 0xFF */
}
