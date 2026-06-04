// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2e */
/* @exp_ticks 0x200 */

typedef int * restrict ip; int test_main(void){int x=46; ip p=&x; return *p;}
