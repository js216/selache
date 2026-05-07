// SPDX-License-Identifier: MIT
// cctest_struct_arg_stack_i64.c --- cctest case struct_arg_stack_i64
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x22222222 */

#include <stdint.h>

struct S {
    int32_t a;
    int32_t b;
    int32_t c;
    int64_t d;
};

static int f(struct S s)
{
    return (0 <= s.d) ? 0x11111111 : 0x22222222;
}

int test_main(void)
{
    struct S s = {1, 2, 3, -9};
    return f(s);
}
