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
int cctest_stack_pattern(void)
{
   int stack[8];
   int sp      = 0;
   stack[sp++] = 10;
   stack[sp++] = 20;
   stack[sp++] = 30;
   int c       = stack[--sp]; /* 30 */
   int b       = stack[--sp]; /* 20 */
   int a       = stack[--sp]; /* 10 */
   return a + b + c;          /* 10+20+30 = 60 = 0x3C */
}
