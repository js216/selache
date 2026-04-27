#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct l3 {
   int v;
};

struct l2 {
   struct l3 *p3;
   int v;
};

struct l1 {
   struct l2 *p2;
   int v;
};

/* @expect 0x3C */
int cctest_ptr_chase(void)
{
   struct l3 c;
   c.v = 30;
   struct l2 b;
   b.p3 = &c;
   b.v  = 20;
   struct l1 a;
   a.p2 = &b;
   a.v  = 10;
   return a.v + a.p2->v + a.p2->p3->v; /* 10+20+30 = 60 = 0x3C */
}
