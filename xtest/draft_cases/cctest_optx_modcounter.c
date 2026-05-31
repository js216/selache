// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf9ec */
/* @exp_ticks 0x88c8 */

int test_main(void){unsigned acc=0;
 for(unsigned i=0;i<8000u;++i){ acc += (i % 6u) + (i % 12u); }
 return (int)(acc&0xffffu);}
