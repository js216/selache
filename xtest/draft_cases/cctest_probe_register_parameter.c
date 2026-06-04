// SPDX-License-Identifier: MIT
// cctest_probe_register_parameter.c --- cctest case probe_register_parameter
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2a */
/* @exp_ticks 0x30 */

static int f(register int a, register int b)
{
   return a + b;
}

int test_main(void)
{
   return f(17, 25);
}
