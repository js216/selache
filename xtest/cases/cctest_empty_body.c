#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x42 */
int cctest_empty_body(void)
{
   int x = 0;
   if (1) {
   } /* empty if body */
   while (0) {
   } /* empty while body */
   for (int i = 0; i < 5; i++) {
   } /* empty for body */
   {
      x = 0x42;
   }         /* standalone block */
   return x; /* 0x42 */
}
