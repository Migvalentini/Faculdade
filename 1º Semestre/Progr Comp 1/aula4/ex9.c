#include <stdio.h>

int main () {
   int d1,d2,d3,d4,d5,cont1,cont2,contt3,cont4,cont5;

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

   if (d1==1) {
      cont1++;
   } else if (d1==2) {

   }

   if (d1==d2 && d2==d3 && d3==d4 && d4==d5) {
      printf("Os 5 valores sao iguais");
   } else if (d1==d2 || d2==d3 || d3==d4 || d4==d5) {
      printf("4 numeros iguais e 1 diferente");
   }

   return 0;
}
