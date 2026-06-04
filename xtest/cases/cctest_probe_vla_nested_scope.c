// SPDX-License-Identifier: MIT
// cctest_probe_vla_nested_scope.c --- cctest case probe_vla_nested_scope
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x23 */
/* @exp_ticks 0x90 */

int test_main(void)
{
   int n = 2;
   int total = 0;
   {
      int a[++n];
      a[0] = n;
      total += (int)sizeof(a) + a[0];
   }
   {
      int b[++n];
      b[0] = n;
      total += (int)sizeof(b) + b[0];
   }
   return total;
}
