// SPDX-License-Identifier: MIT
// cctest_desig_struct.c --- cctest case desig_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x50 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Designated initializer for structs (C99 6.7.8) */
struct dinit { int a; int b; int c; };
int test_main(void) {
  struct dinit s = { .b = 0x20, .c = 0x30 };
  return s.a + s.b + s.c; /* 0 + 0x20 + 0x30 = 0x50 */
}
