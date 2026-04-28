// SPDX-License-Identifier: MIT
// cctest_struct_mixed_members.c --- cctest case struct_mixed_members
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32 */

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
  struct { int arr[3]; int *ptr; int val; } s;
  s.arr[0] = 5; s.arr[1] = 10; s.arr[2] = 15;
  s.ptr = &s.arr[1];
  s.val = 20;
  return s.arr[0] + *s.ptr + s.arr[2] + s.val; /* 5+10+15+20 = 50 = 0x32 */
}
