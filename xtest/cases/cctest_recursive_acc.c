#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_acc(int n, int acc)
{
   if (n <= 0)
      return acc;
   return sum_acc(n - 1, acc + n);
}

/* @expect 0x37 */
int cctest_recursive_acc(void)
{
   return sum_acc(10, 0); /* 55 */
}
