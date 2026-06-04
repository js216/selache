// SPDX-License-Identifier: MIT
// cctest_probe_vla_sizeof_type_expr.c --- cctest case probe_vla_sizeof_type_expr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x19 */
/* @exp_ticks 0x80 */

int test_main(void)
{
   int n = 4;
   int bytes = (int)sizeof(int[++n]);
   return bytes + n;
}
