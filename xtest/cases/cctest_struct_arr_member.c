#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct with_arr {
   int id;
   int data[4];
};

/* @expect 0x3D */
int cctest_struct_arr_member(void)
{
   struct with_arr s;
   s.id      = 1;
   s.data[0] = 10;
   s.data[1] = 20;
   s.data[2] = 30;
   s.data[3] = 40;
   return s.id + s.data[1] + s.data[3]; /* 1+20+40 = 61 = 0x3D */
}
