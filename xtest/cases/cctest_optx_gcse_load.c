// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x930 */
/* @exp_ticks 0x9115 */

static unsigned g[4]={11u,22u,33u,44u};
int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){ if(i&1u) acc+=g[0]+g[1]; else acc+=g[2]+g[3]; acc^=g[0]^g[1]^g[2]^g[3]; }
 return (int)(acc&0xffffu);}
