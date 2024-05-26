// Desenvolva um programa que solicite ao usuário digitar cinco números inteiros com valores entre 1 e 6, correspondente ao arremesso de 5 dados no jogo do general. 
// O programa deverá escrever na tela mensagens para indicar: 
// - Se os 5 valores são iguais
// - Se há 4 valores iguais e um diferente
// - Se os 5 valores formam uma sequência (1,2,3,4,5 ou 2,3,4,5,6)
// - Se os valores formam um full-hand (3 valores iguais entre si, e os outros dois valores também iguais entre si)
// - Nenhuma das combinações acima
// Observação: considere que o usuário sempre informará valores entre 1 e 6 e que os dados estarão em ordem crescente. 
// Não precisa realizar a conferência do valor informado.

#include <stdio.h>

int main() {
   int d1,d2,d3,d4,d5;

   printf("Digite o numero 1: ");
   scanf("%d",&d1);
   printf("Digite o numero 2: ");
   scanf("%d",&d2);
   printf("Digite o numero 3: ");
   scanf("%d",&d3);
   printf("Digite o numero 4: ");
   scanf("%d",&d4);
   printf("Digite o numero 5: ");
   scanf("%d",&d5);

   if (d1==d2 && d2==d3 && d3==d4 && d4==d5) {
      printf("Os 5 valores sao iguais");
   } else if ((d1==d2 && d2==d3 && d3==d4) || (d2==d3 && d3==d4 && d4==d5)) {
      printf("4 numeros iguais e 1 diferente");
   } else if ((d1<d2&&d2<d3&&d3<d4) || (d2<d3&&d3<d4&&d4<d5)) {
      printf("Os numeros formam uma sequencia");
   } else if ((d1==d2&&d2==d3&&d4==d5) || (d2==d3&&d3==d4&&d1==d5) || (d3==d4&&d4==d5&&d1==d2)) {
      printf("Os numeros formam um full-hand");
   } else {
      printf("Nenhuma das anteriores");
   }

   return 0;
}
