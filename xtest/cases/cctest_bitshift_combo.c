// SPDX-License-Identifier: MIT
// cctest_bitshift_combo.c --- cctest case bitshift_combo
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAB */

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
   unsigned int x = 0xABCD1234u;
   return (int)((x >> 24) & 0xFF); /* top byte = 0xAB */
}
