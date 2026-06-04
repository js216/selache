// SPDX-License-Identifier: MIT
// cctest_probe_vla_typedef_sizeof.c --- cctest case probe_vla_typedef_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1e */
/* @exp_ticks 0x70 */

int test_main(void)
{
   int n = 6;
   typedef int row_t[n];
   row_t row;
   row[0] = n;
   return (int)sizeof(row) + row[0];
}
