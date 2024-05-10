#include <stdio.h>

main() {
   int n,somaDiv;

   for(int x = 1; x <= 10; x++) {
      n=0;
      printf("Digite um numero inteiro: ");
      scanf("%d",&n);

      somaDiv = 0;

      for(int y = 1; y <= n; y++) {
         if(n%y == 0) {
            printf("DIV %d\n",y);
            somaDiv += y;
         }
      }

      printf("Soma dos divisores de %d: %d\n", x, somaDiv);
   }
}