// SPDX-License-Identifier: MIT
// cctest_uint8_wrap.c --- cctest case uint8_wrap
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2C */

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
   uint8_t a = 200;
   uint8_t b = 100;
   uint8_t c = (uint8_t)(a + b); /* 300 mod 256 = 44 */
   return (int)c;                /* 44 = 0x2C */
}
