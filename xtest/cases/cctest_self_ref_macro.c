// SPDX-License-Identifier: MIT
// cctest_self_ref_macro.c --- cctest case self_ref_macro
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

#define SELFVAL 10

int test_main(void)
{
   return SELFVAL; /* 10 = 0x0A */
}
