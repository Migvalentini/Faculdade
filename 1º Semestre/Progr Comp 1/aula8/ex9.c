// Desenvolva um programa em C que solicite ao usuário informar um número inteiro N. 
// O programa em C deve mostrar na tela os N primeiros números primos maiores que 100.
// Exemplo: se o usuário informar o número 15 (N), o programa em C deverá mostrar na tela os 15 primeiros números primos a partir de 100, ou seja, 101,103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167 e 173.

#include <stdio.h>

int main() {
   int n, x=100, cont=0, div=0;

   printf("Digite N: "); scanf("%d",&n);

   while(n > cont) {
      div=0;
      for(int y = 1; y <= x; y++) {
         if(x%y==0) {
            div++;
         }
      }
      if(div==2) {
         printf("O numero %d eh primo\n",x);
         cont++;
      }
      x++;
   }

   return 0;
}