// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x83f0 */
/* @exp_ticks 0x57f4 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){unsigned d=i*12u+5u; acc+=(d+ (i*12u) )&511u;}
 return (int)(acc&0xffffu);}
