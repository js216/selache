// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xd4d8 */
/* @exp_ticks 0x5506 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){acc+=(i*1009u + i*65537u + i*97u)&1023u;}
 return (int)(acc&0xffffu);}
