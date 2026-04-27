#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct off_test {
   int a;
   int b;
   int c;
};

/* @expect 0 */
int cctest_offsetof_first(void)
{
   return (int)offsetof(struct off_test, a); /* 0 */
}
