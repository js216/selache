// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x88e0 */
/* @exp_ticks 0x5dd0 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){unsigned x=i*7u; acc+=( (x*1u)+(x-x)+(x|0u)+((x<<4)>>4)+(x&0xffffffffu) )&255u;}
 return (int)(acc&0xffffu);}
