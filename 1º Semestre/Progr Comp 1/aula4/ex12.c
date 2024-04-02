#include <stdio.h>

int main () {
   float n1,n2,n3;
   char calculo;

   printf("Digite a nota 1: ");
   scanf("%f",&n1);

   printf("Digite a nota 2: ");
   scanf("%f",&n2);

   printf("Digite a nota 3: ");
   scanf("%f",&n3);

   printf("Digite o tipo de calculo: ");
   fflush(stdin);
   calculo=getchar();

   if (calculo=='a' || calculo=='A') {
      printf("A media aritmetica eh: %.2f",(n1+n2+n3)/3);
   } else if (calculo=='h' || calculo=='H') {
      printf("A media harmonica eh: %.2f",3/(1/n1+1/n2+1/n3));
   } else {
      printf("Tipo de media informada incorretamente. Calculo nao realizado");
   }

   return 0;
}