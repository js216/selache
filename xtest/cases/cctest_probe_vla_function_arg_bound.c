// SPDX-License-Identifier: MIT
// cctest_probe_vla_function_arg_bound.c --- cctest case probe_vla_function_arg_bound
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x22 */
/* @exp_ticks 0x90 */

static int probe(int n, int row[n])
{
   return row[n - 1] + (int)sizeof(int[n]);
}

int test_main(void)
{
   int n = 5;
   int row[n];
   for (int i = 0; i < n; ++i)
      row[i] = i + 10;
   return probe(n, row);
}
