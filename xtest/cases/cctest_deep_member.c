#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct chain3 {
   struct {
      struct {
         int deep;
      } b;
   } a;
};

/* @expect 0x77 */
int cctest_deep_member(void)
{
   struct chain3 c;
   c.a.b.deep = 0x77;
   return c.a.b.deep;
}
