// SPDX-License-Identifier: MIT
// cctest_union.c --- cctest case union
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

union intfloat {
   int i;
   float f;
};

int test_main(void)
{
   union intfloat u;
   u.i = 0x41200000; /* 10.0f IEEE-754 */
   return (int)u.f;  /* 10 = 0xA */
}
