// Desenvolva um programa em C que solicite ao usuário informar 20 valores inteiros e armazene estes valores em um vetor.
// Após ler e armazenar os dados no vetor, o programa em C deverá calcular e mostrar na tela a soma dos números pares e a quantidade dos números ímpares, mostrando o relatório abaixo. 
// Caso não seja informado nenhum número ímpar, mostre a mensagem “Não existe nenhum número ímpar”. 
// Caso não seja informado nenhum número par, mostre a mensagem “Não existe nenhum número par”.
// Exemplo para um vetor de 6 posições:
// V[0]= 2  V[1]= 4  V[2]= 5  V[3]= 6  V[4]= 3  V[5]= 7
// Caso sejam digitados os valores acima, o programa em C deverá mostrar no final as seguintes informações:
// Os números pares são:
//    - número 2 posição 0
//    - número 4 posição 1
//    - número 6 posição 3
//    - Soma dos pares = 12
// Os números ímpares são:
//    - número 5 posição 2
//    - número 3 posição 4
//    - número 7 posição 5
// Quantidade dos ímpares = 3
    
#include <stdio.h>

int main() {
   int somaPar=0,vet[20],qntdImp=0;

   for(int x=0; x<20; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
   }

   for(int x=0; x<20; x++) {
      if(vet[x]%2==0) {
         somaPar+=vet[x];
      } else {
         qntdImp++;
      }
   }

   if(somaPar>0) {
      printf("Os numeros pares sao:\n");
      for(int x=0; x<20; x++) {
         if(vet[x]%2==0) {
            printf("Numero %d - Posicao %d\n",vet[x],x);
         }
      }
   } else {
      printf("Nao existe nenhum numero par\n");
   }

   if(qntdImp>0) {
      printf("Os numeros impares sao:\n");
      for(int x=0; x<20; x++) {
         if(vet[x]%2==1) {
            printf("Numero %d - Posicao %d\n",vet[x],x);
         }
      }
   } else {
      printf("Nao existe nenhum numero impar");
   }

   return 0;
}