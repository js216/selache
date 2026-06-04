// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7d */
/* @exp_ticks 0x200 */

static int x __attribute__((used)) = 125; int test_main(void){return x;}
