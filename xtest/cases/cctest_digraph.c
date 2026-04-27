#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x3C */
int cctest_digraph(void)
{
   int arr<:3:>; /* int arr[3]; */
   arr<:0:> = 10;
   arr<:1:> = 20;
   arr<:2:> = 30;
   int sum  = 0;
   <% /* { */
      sum = arr<:0:> + arr<:1:> + arr<:2:>;
   %> /* } */
   return sum; /* 60 = 0x3C */
}
