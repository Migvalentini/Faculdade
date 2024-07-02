// Desenvolva um programa em C que gera os 20 primeiros números primos a partir de 2 (inclusive) e os armazena em um vetor de 20 posições.
// Após gerar os 20 números primos e armazená-los no vetor, o programa em C deverá mostrar estes números na tela. 
// Na execução deste programa em C, os números 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 deverão ser mostrados na tela. 

#include <stdio.h>

int main() {
   int x, num=2, vet[20], primos=0, div;

   while(primos<20) {
      div=0;
      for(x=1; x<=num; x++) {
         if(num%x==0) {
            div++;
         }
      }
      if(div==2) {
         vet[primos]=num;
         primos++;
      }

      num++;
   }

   for(x=0; x<20; x++) {
      printf("%d ",vet[x]);
   }

   return 0;
}