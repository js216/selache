// SPDX-License-Identifier: MIT
// cctest_probe_vla_sizeof_side_effect.c --- cctest case probe_vla_sizeof_side_effect
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */
/* @exp_ticks 0x60 */

int test_main(void)
{
   int n = 3;
   int a[++n];
   a[0] = n;
   return (int)sizeof(a) + a[0];
}
