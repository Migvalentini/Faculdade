// Desenvolva um programa em C que solicite ao usuário informar 15 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá calcular a média dos valores informados, encontrar o menor número maior que a média e mostrar na tela estas informações.
// Exemplo: se o usuário informar os valores:
// 9,5  1,2  1,3  3,0  1,5  2,0  8,5  4,5  9,0  0,4  9,3  7,5  7,2  1,9  1,5
// O programa em C deverá mostrar que a média é 4,55 e o menor número maior que a média é 7,2.
 
#include <stdio.h>

int main() {
   float media,soma=0,vet[15],menor=-1;

   for(int x=0; x<15; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%f",&vet[x]);
      soma+=vet[x];
   }

   media=soma/15;

   printf("A media dos numeros informados eh: %f\n",media);

   for(int x=0; x<15; x++) {
      if(vet[x]>media && (menor==-1 || vet[x]<menor)) {
         menor=vet[x];
      }
   }

   printf("\nO menor numero maior que a media eh %f",menor);

   return 0;
}