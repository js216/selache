// SPDX-License-Identifier: MIT
// cctest_sizeof_fnptr.c --- cctest case sizeof_fnptr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void) {
  return (int)sizeof(int (*)(int, int)); /* 4 on 32-bit */
}
