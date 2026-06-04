// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7b */
/* @exp_ticks 0x200 */

__attribute__((noinline)) static int f(void){return 123;} int test_main(void){return f();}
