// Desenvolva um programa que solicite ao usuário digitar três números inteiros. 
// O programa deverá verificar entre estes três valores qual é o maior e mostrar este valor na tela.  
// Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na tela a mensagem “Maior valor: 43”.  

#include <stdio.h> 

int main() {
   int n1,n2,n3;

   printf("Digite o primeiro numero: ");
   scanf("%d",&n1);

   printf("Digite o segundo numero: ");
   scanf("%d",&n2);

   printf("Digite o terceiro numero: ");
   scanf("%d",&n3);

   if (n1>n2&&n1>n3) {
      printf("Maior numero: %d",n1);
   } else if (n2>n1&&n2>n3) {
      printf("Maior numero: %d",n2);
   } else if (n3>n1&&n3>n2) {
      printf("Maior numero: %d",n3);
   }
   
   return 0;
}