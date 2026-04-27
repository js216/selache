// SPDX-License-Identifier: MIT
// cctest_sizeof_exprs.c --- cctest case sizeof_exprs
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   int x = EA + 5;   /* enum + int → int */
   int y = EB * 2;   /* enum * int → int */
   int z = EA < EB;  /* enum < enum → int (1) */
   return x + y + z; /* 15 + 40 + 1 = 56 = 0x38 */
}

int test_main(void)
{
   int x = 0;
   int a = (int)sizeof(x + 1);           /* sizeof(int) = 4 */
   int b = (int)sizeof((short)x);        /* sizeof(short) = 2 */
   int c = (int)sizeof(1 ? x : (char)0); /* sizeof(int) = 4 due to promotion */
   return a + b + c;                     /* 4 + 2 + 4 = 10 = 0x0A */
}
