// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x77 */
/* @exp_ticks 0x200 */

int test_main(void){ int x=({ int s=0; for(int i=0;i<7;i++) s+=i; s+98; }); return x; }
