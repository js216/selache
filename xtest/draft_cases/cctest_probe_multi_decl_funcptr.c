// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */
/* @exp_ticks 0x200 */

static int f(int x){return x+5;} int test_main(void){ int x=80, (*p)(int)=f; return p(x); }
