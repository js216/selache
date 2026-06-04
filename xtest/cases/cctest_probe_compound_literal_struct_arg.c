// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x67 */
/* @exp_ticks 0x200 */

struct S{int a,b;}; static int f(struct S s){return s.a+s.b;} int test_main(void){return f((struct S){50,53});}
