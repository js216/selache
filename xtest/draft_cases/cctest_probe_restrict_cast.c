// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2f */
/* @exp_ticks 0x200 */

int test_main(void){int x=47; int *p=(int * restrict)&x; return *p;}
