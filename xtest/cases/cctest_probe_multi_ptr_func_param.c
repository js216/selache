// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x43 */
/* @exp_ticks 0x200 */

static int f(int (**p)(int), int x){return (*p)(x);} static int g(int x){return x+3;} int test_main(void){int (*q)(int)=g; return f(&q,64);}
