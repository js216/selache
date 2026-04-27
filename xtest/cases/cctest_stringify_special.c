#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.a = 1;
   s.b = 100;
   s.c = 2;
   /* Verify values survive padding */
   return s.a + s.b + s.c; /* 103 = 0x67 */
}

struct s2 {
   int a;
   int b;
};

#define STR_SPECIAL(x) #x

/* @expect 0x68 */
int cctest_stringify_special(void)
{
   const char *s1 = STR_SPECIAL(a + b);  /* "a+b" */
   const char *s2 = STR_SPECIAL(x == y); /* "x==y" */
   return s1[1] + s2[1];                 /* '+' + '=' = 43 + 61 = 104 = 0x68 */
}
