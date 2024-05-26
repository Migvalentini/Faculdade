// Desenvolva um programa em C que solicite ao usuário informar um número inteiro N. 
// O programa em C deve mostrar na tela o maior número primo menor do que N.
// Exemplo: se o usuário informar o número 672 (N), o programa em C deverá mostrar na tela o número 661, que é o maior número primo menor que 672.

#include <stdio.h>

int main() {
   int n, div;

   printf("Digite N: "); scanf("%d",&n);

   for(int x = n; x >= 1; x--) {
      div=0;
      for(int y = 1; y <= x; y++) {
         if(x%y==0) {
            div++;
         }
      }
      if(div==2) {
         printf("Maior numero primo menor que %d = %d",n,x);
         break;
      }
   }

   return 0;
}