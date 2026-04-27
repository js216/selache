// SPDX-License-Identifier: MIT
// cctest_comma_chain.c --- cctest case comma_chain
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return (int)sizeof(union u); /* sizeof(double)=4 with -double-size-32 */
}

int test_main(void)
{
   int x = 10;
   int y = (x += 5, x += 5, x);
   return y; /* 20 */
}
