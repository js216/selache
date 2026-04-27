// SPDX-License-Identifier: MIT
// cctest_wrap.c --- cctest case wrap
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xFF */

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
   unsigned int a = 0;
   a              = a - 1; /* 0xFFFFFFFF */
   return (int)(a >> 24);  /* 0xFF */
}
