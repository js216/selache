#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x30 */
int cctest_volatile_member(void)
{
   struct {
      volatile int x;
      int y;
   } s;
