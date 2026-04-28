// SPDX-License-Identifier: MIT
// cctest_complit_arg.c --- cctest case complit_arg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Compound literal as function argument (C99 6.5.2.5) */
static int pair_sum(const int *p) { return p[0] + p[1]; }
int test_main(void) {
  return pair_sum((const int[]){10, 20});
}
