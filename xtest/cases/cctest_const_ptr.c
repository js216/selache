#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x28 */
int cctest_const_ptr(void)
{
   int a = 10, b = 20;
   const int *pc = &a; /* pointer to const int */
   int *const cp = &b; /* const pointer to int */
   *cp           = 30; /* OK: object is mutable */
   return *pc + *cp;   /* 10 + 30 = 40 = 0x28 */
}
