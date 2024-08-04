// Desenvolva um programa em C que solicite ao usuário informar um valor inteiro x. 
// O programa em C deve calcular e mostrar na tela os valores dos 500 primeiros termos da série:
// 1/(x+4) + 4/(x+8) + 8/(x+12) + 12/(x+16) + ...
// Ao final, o programa em C deve mostrar também na tela soma de todos os termos gerados.

#include <stdio.h>

int main() {
   int x,num=1,den=4;
   float resultado=0,soma=0;

   printf("Digite o valor de x: ");
   scanf("%d",&x);

   for(int i=0; i<5; i++) {
      resultado=(float)num/(x+den);
      printf("%.4f ",resultado);
      if(i==0) {
         num=0;
      }
      num+=4;
      den+=4;
      soma+=resultado;
   }

   printf("\nA soma dos termos eh %f",soma);

   return 0;
}