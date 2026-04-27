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
int cctest_stack_sum(void)
{
   int stack[8];
   int sp      = 0;
   stack[sp++] = 10;
   stack[sp++] = 20;
   stack[sp++] = 30;
   return stack[--sp] + stack[--sp] + stack[--sp]; /* 30+20+10=60=0x3C */
}
