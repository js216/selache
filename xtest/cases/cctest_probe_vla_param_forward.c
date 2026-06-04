// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5d */
/* @exp_ticks 0x200 */

static int f(int n, int a[n][n]){return a[1][1];} int test_main(void){int a[2][2]={{1,2},{3,93}};return f(2,a);}
