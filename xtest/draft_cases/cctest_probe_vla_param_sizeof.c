// SPDX-License-Identifier: MIT
// cctest_probe_vla_param_sizeof.c --- cctest case probe_vla_param_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x23 */
/* @exp_ticks 0x80 */

static int bytes(int n, int a[n])
{
   a[0] = n;
   return (int)sizeof(int[n]) + a[0];
}

int test_main(void)
{
   int n = 7;
   int a[n];
   return bytes(n, a);
}
