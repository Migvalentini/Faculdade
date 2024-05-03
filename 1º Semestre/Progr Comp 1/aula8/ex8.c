#include <stdio.h>

int main() {
   int n1, n2, div, soma=0;

   printf("Digite n1: "); scanf("%d",&n1);
   printf("Digite n2: "); scanf("%d",&n2);

   for(int x = n1; x <= n2; x++) {
      div=0;
      for(int y=1; y <= x; y++) {
         if(x%y==0) {
            div++;
         }
      }
      if(div == 2) {
         printf("O numero %d eh primo\n",x);
         soma+=x;
      }
   }
   
   printf("Soma: %d",soma);

   return 0;
}