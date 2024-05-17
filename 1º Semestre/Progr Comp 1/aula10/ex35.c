#include <stdio.h>

int main() {
   float den=1;
   float soma=1;

   for(int x=0; x<100; x++) {
      printf("1/%.0f = %f\n",den,1/den);
      den+=2;
      soma=soma+1/den;
   }

   printf("Soma: %f",soma);

   return 0;
}