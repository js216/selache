// SPDX-License-Identifier: MIT
// cctest_union_ptr.c --- cctest case union_ptr
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

union uptr {
   int val;
   int *ptr;
};

int test_main(void)
{
   int x = 0x42;
   union uptr u;
   u.ptr = &x;
   return *u.ptr; /* 0x42 */
}
