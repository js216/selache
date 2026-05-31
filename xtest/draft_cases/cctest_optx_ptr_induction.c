// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf000 */
/* @exp_ticks 0x2c284 */

static unsigned arr[256];
int test_main(void){for(unsigned i=0;i<256u;++i)arr[i]=i*3u+1u; unsigned acc=0;
 for(unsigned r=0;r<200u;++r) for(unsigned i=0;i<256u;++i) acc += arr[i]*(i&7u);
 return (int)(acc&0xffffu);}
