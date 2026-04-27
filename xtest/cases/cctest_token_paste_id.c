// SPDX-License-Identifier: MIT
// cctest_token_paste_id.c --- cctest case token_paste_id
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

static int tp_val_42 = 0x42;
#define TP_GET(prefix, num) prefix##_val_##num

int test_main(void)
{
   return TP_GET(tp, 42);
}
