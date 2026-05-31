// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x9b58 */
/* @exp_ticks 0x57f4 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){unsigned x=i; acc+=((((((x+1u)+2u)+3u)+4u)+5u)+6u)&255u; acc^=(((x*2u)*2u)*2u)&255u;}
 return (int)(acc&0xffffu);}
