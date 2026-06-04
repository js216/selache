// SPDX-License-Identifier: MIT
// cctest_probe_vla_type_pointer_arith.c --- cctest case probe_vla_type_pointer_arith
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1c */
/* @exp_ticks 0x90 */

int test_main(void)
{
   int n = 4;
   typedef int row_t[n];
   row_t rows[2];
   rows[0][3] = 12;
   rows[1][0] = 16;
   row_t *p = rows;
   return (*p)[3] + (*(p + 1))[0];
}
