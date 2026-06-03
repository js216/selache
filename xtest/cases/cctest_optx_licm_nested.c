// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xda90 */
/* @exp_ticks 0x3cbfc */

int test_main(void){unsigned acc=0;
 for(unsigned o=0;o<300u;++o) for(unsigned i=0;i<200u;++i){ unsigned inv=(o*97u)+(o*o)-(o<<3)+13u; acc+=(inv + i)&255u; }
 return (int)(acc&0xffffu);}
