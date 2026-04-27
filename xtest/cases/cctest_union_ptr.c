#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

union uptr {
   int val;
   int *ptr;
};

/* @expect 0x42 */
int cctest_union_ptr(void)
{
   int x = 0x42;
   union uptr u;
   u.ptr = &x;
   return *u.ptr; /* 0x42 */
}
