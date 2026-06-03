// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xb3b */
/* @exp_ticks 0x4278 */

int test_main(void){unsigned long long a=1u;
 for(unsigned i=0;i<4000u;++i){ a += ((unsigned long long)i * (i+7u)) ^ (a>>13); }
 return (int)((a ^ (a>>32)) & 0xffffu);}
