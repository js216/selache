#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct ppn {
   int val;
};

/* @expect 0x42 */
int cctest_pp_struct(void)
{
   struct ppn s;
   s.val           = 0x42;
   struct ppn *p   = &s;
   struct ppn **pp = &p;
   return (*pp)->val; /* 0x42 */
}
