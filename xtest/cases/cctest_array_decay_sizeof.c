// SPDX-License-Identifier: MIT
// cctest_array_decay_sizeof.c --- cctest case array_decay_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Array passed to function decays to pointer: sizeof in callee (C99 6.3.2.1 p3) */
static int ptr_size(int *p) { return (int)sizeof(p); }
int test_main(void) {
  int arr[100];
  return ptr_size(arr); /* sizeof(int*) = 4, not sizeof(arr) */
}
