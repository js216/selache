// SPDX-License-Identifier: MIT
// cctest_probe_init_override_nested_array.c --- cctest case probe_init_override_nested_array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x65 */
/* @exp_ticks 0x50 */

struct rec {
   int a[4];
};

static struct rec r = { .a[0] = 1, .a[2] = 5, .a[2] = 9, .a[3] = 2 };

int test_main(void)
{
   return r.a[0] + r.a[2] * 10 + r.a[3] * 5;
}
