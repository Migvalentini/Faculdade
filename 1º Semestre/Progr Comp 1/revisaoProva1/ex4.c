#include <stdio.h>

int main () {
   int n1,n2,n3,n4,n5,premiado;

   printf("Digite o numero 1: ");
   scanf("%d",&n1);
   printf("Digite o numero 2: ");
   scanf("%d",&n2);
   printf("Digite o numero 3: ");
   scanf("%d",&n3);
   printf("Digite o numero 4: ");
   scanf("%d",&n4);
   printf("Digite o numero 5: ");
   scanf("%d",&n5);

   premiado=((n1%1000%100%10)*1000)+((n2%1000%100%10)*100)+((n3%1000%100%10)*10)+((n4%1000%100%10));

   if (premiado==n5) {
      printf("1");
   } else {
      printf("0");
   }

   return 0;
}