// SPDX-License-Identifier: MIT
// cctest_probe_vla_multidim_sizeof.c --- cctest case probe_vla_multidim_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37 */
/* @exp_ticks 0x80 */

int test_main(void)
{
   int n = 2;
   int m = 3;
   int a[++n][++m];
   a[0][0] = n + m;
   return (int)sizeof(a) + a[0][0];
}
