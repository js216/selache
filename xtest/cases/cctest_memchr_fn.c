// SPDX-License-Identifier: MIT
// cctest_memchr_fn.c --- cctest case memchr_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

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
   uint8_t buf[6] = {10, 20, 30, 40, 50, 60};
   uint8_t *p = (uint8_t *)memchr(buf, 40, 6);
   if (!p) return 0xFF;
   return (int)(p - buf); /* 3 */
}
