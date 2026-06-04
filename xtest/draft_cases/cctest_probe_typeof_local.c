// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x73 */
/* @exp_ticks 0x200 */

int test_main(void){ int x=115; __typeof__(x) y=x; return y; }
