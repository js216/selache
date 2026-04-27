#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

      int val;
   } s;

   s.tag = E_HI;
   s.val = 5;
   return s.tag + s.val; /* 10+5 = 15 = 0x0F */
}

/* @expect 4 */
int cctest_sizeof_fnptr(void)
{
   return (int)sizeof(int (*)(int, int)); /* 4 on 32-bit */
}
