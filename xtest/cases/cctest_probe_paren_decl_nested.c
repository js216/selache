// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */
/* @exp_ticks 0x200 */

int test_main(void){ int x=66; int (((*p)))=&x; return *p; }
