// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x7ed0 */
/* @exp_ticks 0x42aa6 */

static unsigned sumsq(unsigned n, unsigned acc){ if(n==0u) return acc; return sumsq(n-1u, acc + n*n); }
int test_main(void){unsigned acc=0; for(unsigned i=0;i<3000u;++i) acc+=sumsq(i&31u,0u)&255u; return (int)(acc&0xffffu);}
