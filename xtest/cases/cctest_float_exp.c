// SPDX-License-Identifier: MIT
// cctest_float_exp.c --- cctest case float_exp
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x21 */

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
   float a  = 1.5e2f;                       /* 150.0 */
   float b  = 2.0e-1f;                      /* 0.2 */
   double c = 3.0e3;                        /* 3000.0 */
   return (int)(a * b) + (int)(c / 1000.0); /* 30 + 3 = 33 = 0x21 */
}
