#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0E */
int cctest_ptr_walk(void)
{
   int arr[5];
   arr[0]  = 1;
   arr[1]  = 2;
   arr[2]  = 3;
   arr[3]  = 4;
   arr[4]  = 5;
   int *p  = arr;
   int sum = 0;
   sum += *p++; /* arr[0]=1, then p->arr[1] */
   sum += *p++; /* arr[1]=2, then p->arr[2] */
   sum += *++p; /* p->arr[3], then arr[3]=4 */
   sum += *p--; /* arr[3]=4, then p->arr[2] */
   sum += *p;   /* arr[2]=3 */
   return sum;  /* 1+2+4+4+3 = 14 = 0x0E */
}
