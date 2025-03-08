// Desenvolva um programa em C que gere os 20 primeiros termos da série de fibonacci e mostre na tela apenas os termos que são primos. 

#include <stdio.h>

int main() {
   int primeiro=0,segundo=1,proximo,div;

   printf("Num 0: %d\n",primeiro);
   printf("Num 1: %d\n",segundo);

   for(int x=2; x<20; x++) {
      proximo=primeiro+segundo;
      printf("Num %d: %d\n",x,proximo);
      primeiro=segundo;
      segundo=proximo;
      div=0;
      for(int y=1; y<=proximo; y++) {
         if(proximo%y==0) {
            div++;
         }
      }
      if(div==2) {
         printf("O numero %d eh primo\n",proximo);
      }
   }

   return 0;
}