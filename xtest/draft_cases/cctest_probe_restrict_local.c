// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35 */
/* @exp_ticks 0x200 */

int test_main(void){ int x=53; int * restrict p=&x; return *p; }
