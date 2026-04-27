// SPDX-License-Identifier: MIT
// cctest_const_chain.c --- cctest case const_chain
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x19 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int sc_base    = 10;
static const int sc_derived = 10 + 5;

int test_main(void)
{
   return sc_base + sc_derived; /* 10+15 = 25 = 0x19 */
}
