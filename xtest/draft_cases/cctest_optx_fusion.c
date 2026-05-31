// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x3980 */
/* @exp_ticks 0x149d9 */

int test_main(void){unsigned a[64];unsigned acc=0;
 for(unsigned r=0;r<200u;++r){
  for(unsigned i=0;i<64u;++i) a[i]=(i*r+7u);
  for(unsigned i=0;i<64u;++i) acc+=a[i]&255u;}
 return (int)(acc&0xffffu);}
