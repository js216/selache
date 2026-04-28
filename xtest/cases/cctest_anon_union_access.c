// SPDX-License-Identifier: MIT
// cctest_anon_union_access.c --- cctest case anon_union_access
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

int test_main(void) {
  struct mixed {
    int kind;
    union { int ival; float fval; };
  };
  struct mixed m;
  m.kind = 1;
  m.ival = 0x42;
  return m.ival;
}
