// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xafb6 */
/* @exp_ticks 0x957a */

static unsigned mix(unsigned x){return ((x*2654435761u)>>11)^(x+0x9e3779b9u);}
int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){acc+=mix(i)&255u;}
 return (int)(acc&0xffffu);}
