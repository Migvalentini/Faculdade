// Desenvolva um programa que solicite ao usuário digitar seis números inteiros. 
// O programa deverá somar os valores pares informados e mostrar o resultado desta soma na tela.  
// Exemplo: se o usuário informar os números 21, 15, 43, 34, -7 e 120 deverá ser mostrado na tela a mensagem  “A soma dos números pares digitados é 154.”

#include <stdio.h> 

int main() {
   int n1,n2,n3,n4,n5,n6,somaPares=0;

   printf("Digite o primeiro numero: ");
   scanf("%d",&n1);

   printf("Digite o segundo numero: ");
   scanf("%d",&n2);

   printf("Digite o terceiro numero: ");
   scanf("%d",&n3);

   printf("Digite o quarto numero: ");
   scanf("%d",&n4);

   printf("Digite o quinto numero: ");
   scanf("%d",&n5);

   printf("Digite o sexto numero: ");
   scanf("%d",&n6);

   if (n1%2==0) {
      somaPares+=n1;
   }
   if (n2%2==0) {
      somaPares+=n2;
   }
   if (n3%2==0) {
      somaPares+=n3;
   }
   if (n4%2==0) {
      somaPares+=n4;
   }
   if (n5%2==0) {
      somaPares+=n5;
   }
   if (n6%2==0) {
      somaPares+=n6;
   }

   printf("A soma de numeros pares eh: %d",somaPares);

   return 0;   
}