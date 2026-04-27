// SPDX-License-Identifier: MIT
// cctest_cast_complit.c --- cctest case cast_complit
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   /* s.x cannot be modified after init */
   return s.x + s.y; /* 0x30 */
}

int test_main(void)
{
   long val = *(long *)(int[]){0x55};
   return (int)val; /* 0x55 */
}
