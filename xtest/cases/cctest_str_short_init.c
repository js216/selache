#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.x = 0xFF; /* only low 4 bits stored */
   return bf.x; /* 15 = 0x0F */
}

/* @expect 0x68 */
int cctest_str_short_init(void)
{
   char s[10] = "hi";
   /* s[0]='h', s[1]='i', s[2]='\0', s[3..9]='\0' */
   return s[0] + s[2] + s[5]; /* 'h'+0+0 = 104 = 0x68 */
}
