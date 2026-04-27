#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct inner {
   int val;
};

struct outer {
   struct inner a;
   int b;
};

/* @expect 0x0F */
int cctest_nested_struct(void)
{
   struct outer o;
   o.a.val = 5;
   o.b     = 10;
   return o.a.val + o.b; /* 15 = 0xF */
}
