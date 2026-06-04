// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7a */
/* @exp_ticks 0x200 */

int test_main(void){ return __builtin_types_compatible_p(int, signed int) ? 122 : 0; }
