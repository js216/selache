// SPDX-License-Identifier: MIT
// cctest_cmp64_signed_le.c --- cctest case cmp64_signed_le
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x22222222 */
/* @exp_ticks 0xe */

#include <stdint.h>

int test_main(void)
{
    int lhs = 0;
    int64_t rhs = -9;

    return (lhs <= rhs) ? 0x11111111 : 0x22222222;
}
