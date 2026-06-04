// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x41 */
/* @exp_ticks 0x200 */

static int g(int x){return x+1;} static int (*f(void))(int){return g;} int test_main(void){return f()(64);}
