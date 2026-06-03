// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x366e */
/* @exp_ticks 0xa888 */

int test_main(void){unsigned a=1,b=2,c=3,d=4,e=5,f=6,g=7;
 for(unsigned i=0;i<6000u;++i){a+=i;b+=a;c+=b;d+=c;e+=d;f+=e;g+=f; if(i&1u)a^=g; else b^=f;}
 return (int)((a+b+c+d+e+f+g)&0xffffu);}
