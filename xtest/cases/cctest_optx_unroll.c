// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x4a90 */
/* @exp_ticks 0x80f8 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<12000u;++i){acc+=(i&255u);}
 return (int)(acc&0xffffu);}
