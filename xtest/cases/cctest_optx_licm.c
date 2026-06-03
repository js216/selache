// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x3e58 */
/* @exp_ticks 0x6f64 */

int test_main(void){unsigned acc=0,p=37u,q=911u;
 for(unsigned i=0;i<6000u;++i){unsigned inv=(p*q)+(q<<5)+(p*p)-(q>>2)+(p^q)*13u;
  acc+=(inv & 255u)+(i&7u);}
 return (int)(acc&0xffffu);}
