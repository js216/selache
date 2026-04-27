#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#undef FIRST_ARG
typedef int *intptr_td;
typedef intptr_td *intptrptr_td;

/* @expect 0x42 */
int cctest_nested_ptr_typedef(void)
{
   int x           = 0x42;
   intptr_td p     = &x;
   intptrptr_td pp = &p;
   return **pp; /* 0x42 */
}
