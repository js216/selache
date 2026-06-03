// SPDX-License-Identifier: MIT
// cctest_probe_vla_typedef_matrix.c --- cctest case probe_vla_typedef_matrix
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x31 */
/* @exp_ticks 0xb0 */

int test_main(void)
{
   int n = 3;
   int m = 4;
   typedef int matrix_t[n][m];
   matrix_t mat;
   mat[0][0] = n;
   mat[2][3] = m;
   return (int)sizeof(mat) + mat[0][0] - mat[2][3] + 2;
}
