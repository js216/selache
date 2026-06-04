// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x69 */
/* @exp_ticks 0x200 */

int test_main(void){ int x=4; switch(x){case 1 ... 5: return 105; default: return 0;} }
