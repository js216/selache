// SPDX-License-Identifier: MIT
// cctest_probe_vla_pointer_param.c --- cctest case probe_vla_pointer_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x46 */
/* @exp_ticks 0x90 */

static int sum_row(int n, int (*row)[n])
{
   int sum = 0;
   for (int i = 0; i < n; ++i)
      sum += (*row)[i];
   return sum;
}

int test_main(void)
{
   int n = 4;
   int row[n];
   for (int i = 0; i < n; ++i)
      row[i] = (i + 1) * 7;
   return sum_row(n, &row);
}
