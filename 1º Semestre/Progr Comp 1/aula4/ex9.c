#include <stdio.h>

int main () {
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
