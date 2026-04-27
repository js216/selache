#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fncast_target(int x)
{
   return x + 1;
}

/* @expect 0x42 */
int cctest_fnptr_cast(void)
{
   int (*fp)(int)   = fncast_target;
   void (*vp)(void) = (void (*)(void))fp; /* cast to different fnptr */
   int (*rp)(int)   = (int (*)(int))vp;   /* cast back */
   return rp(0x41);                       /* 0x42 */
}
