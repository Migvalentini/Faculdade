#include <stdio.h> 

int main () {
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
}