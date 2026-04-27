// SPDX-License-Identifier: MIT
// cctest_sizeof_struct.c --- cctest case sizeof_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0C */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct three_int {
   int x;
   int y;
   int z;
};

int test_main(void)
{
   return (int)sizeof(struct three_int); /* 12 = 0xC */
}
