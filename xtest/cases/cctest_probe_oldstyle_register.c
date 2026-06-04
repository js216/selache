// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x57 */
/* @exp_ticks 0x200 */

static int f(x) register int x; { return x; } int test_main(void){return f(87);}
