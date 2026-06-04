// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x58 */
/* @exp_ticks 0x200 */

static int f(int [3]); static int f(int a[3]){return a[2];} int test_main(void){int a[3]={1,2,88};return f(a);}
