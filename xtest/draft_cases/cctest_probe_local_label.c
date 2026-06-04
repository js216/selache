// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8d */
/* @exp_ticks 0x200 */

int test_main(void){ __label__ L; goto L; return 0; L: return 141; }
