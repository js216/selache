// SPDX-License-Identifier: MIT
// cctest_memmove_fn.c --- cctest case memmove_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x010203 */

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
   uint8_t buf[6] = {1, 2, 3, 4, 5, 6};
   memmove(buf + 1, buf, 3); /* overlapping move */
   /* expect: {1,1,2,3,5,6} */
   return ((unsigned)buf[1] << 16) | ((unsigned)buf[2] << 8) | buf[3];
}
