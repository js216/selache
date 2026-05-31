// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xa358 */
/* @exp_ticks 0x7b1c */

int test_main(void){unsigned acc=0,flag=911u;
 for(unsigned i=0;i<6000u;++i){ if(flag&1u) acc+=(i*3u)&255u; else acc+=(i*7u)&127u; }
 return (int)(acc&0xffffu);}
