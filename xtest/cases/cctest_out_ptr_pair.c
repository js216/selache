// SPDX-License-Identifier: MIT
// cctest_out_ptr_pair.c --- cctest case out_ptr_pair
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Multiple return values via output pointer (C99 6.5.3.2) */
static void divmod(int a, int b, int *q, int *r) {
  *q = a / b;
  *r = a % b;
}
int test_main(void) {
  int q, r;
  divmod(17, 5, &q, &r);
  return (q == 3 && r == 2) ? 0x55 : 0xAA;
}
