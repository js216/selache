// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xad74 */
/* @exp_ticks 0x669a */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<5000u;++i){unsigned a=i+13u;
  acc+=(((a*a)+(a<<3)-7u)&255u);
  acc^=(((a*a)+(a<<3)-7u)>>2)&63u;
  acc+=(((a*a)+(a<<3)-7u)*3u)&127u;}
 return (int)(acc&0xffffu);}
