// SPDX-License-Identifier: MIT
// cctest_enum.c --- cctest case enum
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0B */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum color { RED, GREEN = 5, BLUE };

int test_main(void)
{
   return GREEN + BLUE;
}
