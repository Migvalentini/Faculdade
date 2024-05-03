#include <stdio.h>

int main() {
   int num, somaDiv=0;
   
   for(int x = 1; x <= 10; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&num);

      somaDiv=0;
      for(int y = 1; y <= num; y++) {
         if(num%y==0) {
            somaDiv+=y;
         }
      }
      somaDiv-=num;
      if(somaDiv == num) {
         printf("O numero %d eh um numero perfeito\n",num);
      }
   }

   return 0;
}