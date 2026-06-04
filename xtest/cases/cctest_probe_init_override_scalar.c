// SPDX-License-Identifier: MIT
// cctest_probe_init_override_scalar.c --- cctest case probe_init_override_scalar
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5e */
/* @exp_ticks 0x40 */

static struct rec {
   int a;
   int b;
} r = { .a = 3, .b = 4, .a = 9 };

int test_main(void)
{
   return r.a * 10 + r.b;
}
