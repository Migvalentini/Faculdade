#include <stdio.h>

int main () {
   int n1,n2,d11,d12,d13,d21,d22,d23,resto,aux;

   printf("Digite o numero 1: ");
   scanf("%d",&n1);

   printf("Digite o numero 2: ");
   scanf("%d",&n2);

   d11=n1/100;
   resto=n1%100;
   d12=resto/10;
   d13=resto%10;

   if (d11>d12) {
      aux=d11;
      d11=d12;
      d12=aux;
   }
   if (d11>d13) {
      aux=d11;
      d11=d13;
      d13=aux;
   }
   if (d12>d13) {
      aux=d12;
      d12=d13;
      d13=aux;
   }

   d21=n2/100;
   resto=n2%100;
   d22=resto/10;
   d23=resto%10;

   if (d21>d22) {
      aux=d21;
      d21=d22;
      d22=aux;
   }
   if (d21>d23) {
      aux=d21;
      d21=d23;
      d23=aux;
   }
   if (d22>d23) {
      aux=d22;
      d22=d23;
      d23=aux;
   }

   if (d11==d21 && d12==d22 && d13==d23) {
      printf("Os numeros possuem os mesmos digitos");
   } else {
      printf("Os numeros NAO possuem os mesmos digitos");
   }

   printf("\nn1: %d ,n2: %d ,d11: %d ,d12: %d ,d13: %d ,d21: %d ,d22: %d ,d23: %d ",n1,n2,d11,d12,d13,d21,d22,d23);

   return 0;
}