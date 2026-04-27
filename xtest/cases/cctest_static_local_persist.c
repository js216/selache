#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int _persist_counter2(void)
{
   static int c = 0;
   return ++c;
}

/* @expect 0x55 */
int cctest_static_local_persist(void)
{
   int a = _persist_counter2();
   int b = _persist_counter2();
   int c = _persist_counter2();
   /* b == a+1 and c == a+2 regardless of how many times we've been called */
   return (b == a + 1 && c == a + 2) ? 0x55 : 0xAA;
}
