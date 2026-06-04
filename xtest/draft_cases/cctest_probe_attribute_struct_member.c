// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x98 */
/* @exp_ticks 0x200 */

struct S{ int x __attribute__((aligned(8))); }; int test_main(void){ struct S s={152}; return s.x; }
