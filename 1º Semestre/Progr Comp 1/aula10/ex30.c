#include <stdio.h>

int main() {
   int primeiro=0;
   int segundo=1;
   int num=0;

   printf("Numero 0: %d\n",primeiro);
   printf("Numero 1: %d\n",segundo);

   for(int x=0; x<20-2; x++) {
      num=primeiro+segundo;
      printf("Numero %d: %d\n",x+2,num);
      primeiro=segundo;
      segundo=num;
   }

   return 0;
}