// SPDX-License-Identifier: MIT
// cctest_callback_ctx.c --- cctest case callback_ctx
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3C */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Callback with void* context pointer (C99 6.5.2.2 + 6.3.2.3) */
static int ctx_callback(void *ctx, int val) {
  int *acc = (int *)ctx;
  *acc += val;
  return *acc;
}
int test_main(void) {
  int total = 0;
  ctx_callback(&total, 10);
  ctx_callback(&total, 20);
  ctx_callback(&total, 30);
  return total; /* 60 = 0x3C */
}
