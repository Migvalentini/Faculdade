// Desenvolva um programa que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa deverá ler também um outro valor inteiro N e verificar se este valor N é um elemento do vetor. 
// O programa deverá mostrar na tela uma mensagem informando qual posição do vetor esse elemento se encontra. Se o valor estiver em mais de uma posição do vetor, deve mostrar todas as posições que este elemento se encontra.
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 23  V[2]= 87  V[3]= 10  V[4]= 43  V[5]= 23  V[6]= 23  V[7]= 88  V[8]= 121  V[9]= 231
// Se o usuário digitar o valor 23, o programa deverá mostrar na tela uma mensagem indicando que o valor 23 encontra-se nas posições 1,5 e 6 do vetor.

#include <stdio.h>

int main() {
   int vet[10],n;

   for(int x=0; x<10; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
   }

   printf("Digite o numero verificador: ");
   scanf("%d",&n);

   for(int x=0; x<10; x++) {
      if(vet[x]==n) {
         printf("O numero %d esta no vetor na posicao %d\n",n,x);
      }
   }

   return 0;
}