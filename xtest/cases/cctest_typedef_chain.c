// SPDX-License-Identifier: MIT
// cctest_typedef_chain.c --- cctest case typedef_chain
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int base_t;
typedef base_t mid_t;
typedef mid_t top_t;

int test_main(void)
{
   top_t x = 42;
   return x; /* 42 = 0x2A */
}
