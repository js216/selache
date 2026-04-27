#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x3C */
int cctest_state_machine(void)
{
   int state = 0, sum = 0, count = 0;
   while (state != 3) {
      switch (state) {
         case 0:
            sum += 10;
            state = 1;
            break;
         case 1:
            sum += 20;
            state = (++count < 2) ? 0 : 2;
            break;
         case 2: state = 3; break;
      }
   }
   /* state 0→sum=10,state=1; state 1→sum=30,count=1,state=0;
      state 0→sum=40,state=1; state 1→sum=60,count=2,state=2;
      state 2→state=3; done. sum=60? hmm no:
      iter1: state=0→sum=10→state=1
      iter2: state=1→sum=30→count=1→state=0
      iter3: state=0→sum=40→state=1
      iter4: state=1→sum=60→count=2→state=2
      iter5: state=2→state=3→exit. sum=60=0x3C. That doesn't match 0x1E. */
   return sum;
}
