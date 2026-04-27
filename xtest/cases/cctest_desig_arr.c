#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct arrwrap {
   int a[3];
   int n;
};

/* @expect 0x0A */
int cctest_desig_arr(void)
{
   struct arrwrap s = {
       .a = {1, 2, 3},
         .n = 4
   };
   return s.a[0] + s.a[1] + s.a[2] + s.n; /* 10 = 0xA */
}
