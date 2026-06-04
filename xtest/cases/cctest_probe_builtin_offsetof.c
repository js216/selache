// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x04 */
/* @exp_ticks 0x200 */

struct S{char c; int x;}; int test_main(void){ return __builtin_offsetof(struct S, x); }
