#include <stdio.h>

int main () 
{
   int x=0;

   // for (int x=0; x < 10; x++) {
   //    printf("%d\n",x);
   // }

   do {
      printf("%d\n",x);
      x++;
   } while (x < 10);

   return 0;
}
