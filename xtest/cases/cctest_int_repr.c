// SPDX-License-Identifier: MIT
// cctest_int_repr.c --- cctest case int_repr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAA */

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
   int x            = 0x55AA;
   unsigned char *p = (unsigned char *)&x;
   /* SHARC is little-endian for char-size-8 */
   return p[0]; /* low byte = 0xAA */
}
