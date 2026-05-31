// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x67dc */
/* @exp_ticks 0x6c78 */

int test_main(void){unsigned s[4]={1u,2u,3u,4u};unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){s[0]+=i;s[1]^=s[0];s[2]+=s[1];s[3]^=s[2];acc+=(s[0]^s[1]^s[2]^s[3])&255u;}
 return (int)(acc&0xffffu);}
