// SPDX-License-Identifier: MIT
// cctest_static_visibility.c --- cctest case static_visibility
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

static int _tu_private(void)
{
   return 42;
}

int test_main(void)
{
   return _tu_private();
}
