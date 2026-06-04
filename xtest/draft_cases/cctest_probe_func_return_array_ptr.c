// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x40 */
/* @exp_ticks 0x200 */

static int a[3]={1,2,64}; static int (*f(void))[3]{ return &a; } int test_main(void){return (*f())[2];}
