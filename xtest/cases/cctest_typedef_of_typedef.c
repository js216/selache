// SPDX-License-Identifier: MIT
// cctest_typedef_of_typedef.c --- cctest case typedef_of_typedef
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
  typedef int myint;
  typedef myint myint2;
  return (int)sizeof(myint2);
}
