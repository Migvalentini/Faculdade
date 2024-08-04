// Desenvolva um programa em C que solicite ao usuário informar dois números inteiros N1 e N2. 
// O programa em C deve mostrar na tela os números primos entre N1 e N2 (incluindo N1 e N2 se algum deles for primo) e a soma destes números.
// Exemplo: se o usuário informar os números 600 (N1) e 700 (N2), o programa em C deverá mostrar na tela os números 601,607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683 e 691 e a soma 10316.

#include <stdio.h>

int main() {
   int n1, n2, div, soma=0;

   printf("Digite n1: "); scanf("%d",&n1);
   printf("Digite n2: "); scanf("%d",&n2);

   for(int x = n1; x <= n2; x++) {
      div=0;
      for(int y=1; y <= x; y++) {
         if(x%y==0) {
            div++;
         }
      }
      if(div == 2) {
         printf("O numero %d eh primo\n",x);
         soma+=x;
      }
   }
   
   printf("Soma: %d",soma);

   return 0;
}