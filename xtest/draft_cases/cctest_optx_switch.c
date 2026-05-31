// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xbeb4 */
/* @exp_ticks 0xa4db */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){switch(i&7u){case 0:acc+=1u;break;case 1:acc+=3u;break;case 2:acc+=7u;break;case 3:acc+=15u;break;case 4:acc+=31u;break;case 5:acc+=63u;break;case 6:acc+=127u;break;default:acc+=255u;break;}}
 return (int)(acc&0xffffu);}
