// SPDX-License-Identifier: MIT
// cctest_memcpy_fn.c --- cctest case memcpy_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55AA */

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
   uint8_t src[4] = {0x55, 0xAA, 0x12, 0x34};
   uint8_t dst[4] = {0};
   memcpy(dst, src, 2);
   return ((unsigned)dst[0] << 8) | dst[1]; /* 0x55AA */
}
