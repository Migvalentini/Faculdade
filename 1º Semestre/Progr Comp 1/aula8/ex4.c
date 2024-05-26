// Dois números n1 e n2 são ditos amigos entre si se a soma dos divisores de n1 (excluindo o próprio n1) é igual a n2, e a soma dos divisores de n2 (excluindo o próprio n2) é igual a n1.
// Exemplo: os números 220 e 284 são amigos:
// os divisores do número 220 são: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
//       a soma dos divisores 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
// os divisores do número 284 são: 1, 2, 4, 71, 142
//       a soma dos divisores 1 + 2 + 4 + 71 + 142 =220
// Desenvolva um programa em C que solicite ao usuário informar dois valores inteiros.
// O programa em C deverá verificar se os dois números são amigos e mostrar na tela a mensagem “Os números são amigos.” ou a mensagem “Os números não são amigos.”.

#include <stdio.h>

int main() {
   int n1, n2, soma1=0, soma2=0;

   printf("Digite n1: "); scanf("%d",&n1);
   printf("Digite n2: "); scanf("%d",&n2);

   for (int x=1; x <= n1;x++) {
      if(n1%x==0 && x!=n1) {
         soma1+=x;
      }
   }

   for (int y=1; y <= n2; y++) {
      if(n2%y==0 && y!=n2) {
         soma2+=y;
      }
   }

   if(soma1==n2 && soma2==n1) {
      printf("Os numeros sao amigos");
   } else {
      printf("Os numeros nao sao amigos");
   }

   return 0;
}