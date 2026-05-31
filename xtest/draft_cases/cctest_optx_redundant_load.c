// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xc0f0 */
/* @exp_ticks 0x60be */

static unsigned t[8]={3u,1u,4u,1u,5u,9u,2u,6u};
int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){unsigned k=i&7u; acc += t[k]*t[k] + (t[k]<<2) + t[k]; }
 return (int)(acc&0xffffu);}
