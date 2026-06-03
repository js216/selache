// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x37b8 */
/* @exp_ticks 0x27c32 */

int test_main(void){unsigned a[64];unsigned acc=0;
 for(unsigned r=0;r<400u;++r){for(unsigned i=0;i<64u;++i)a[i]=0u; a[r&63u]=r; for(unsigned i=0;i<64u;++i)acc+=a[i];}
 return (int)(acc&0xffffu);}
