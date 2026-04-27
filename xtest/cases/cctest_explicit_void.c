// SPDX-License-Identifier: MIT
// cctest_explicit_void.c --- cctest case explicit_void
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int explicit_void(void)
{
   return 0x42;
}

int test_main(void)
{
   return explicit_void();
}
