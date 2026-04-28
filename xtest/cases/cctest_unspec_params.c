// SPDX-License-Identifier: MIT
// cctest_unspec_params.c --- cctest case unspec_params
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



/* Empty parameter list means unspecified args in C99 (C99 6.7.5.3 p14) */
static int unspec_params() { return 0x42; }
int test_main(void) {
  return unspec_params();
}
