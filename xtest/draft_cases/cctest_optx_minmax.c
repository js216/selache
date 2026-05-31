// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf8c0 */
/* @exp_ticks 0xc459 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){unsigned x=(i*2654435761u)&0xffffu; unsigned y=i&0xffffu; unsigned mx=x>y?x:y; unsigned mn=x<y?x:y; acc+=(mx-mn)&255u;}
 return (int)(acc&0xffffu);}
