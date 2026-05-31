// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xad2d */
/* @exp_ticks 0x80f8 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<6000u;++i){unsigned t=i*2654435761u; unsigned m=(t&0x8000u)?t:(~t); acc+=m&255u;}
 return (int)(acc&0xffffu);}
