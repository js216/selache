// SPDX-License-Identifier: MIT
// cctest_probe_vla_sizeof_conditional.c --- cctest case probe_vla_sizeof_conditional
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1a */
/* @exp_ticks 0x90 */

int test_main(void)
{
   int n = 4;
   int choose = 1;
   int a[choose ? ++n : 9];
   a[0] = n;
   return (int)sizeof(a) + a[0] + choose;
}
