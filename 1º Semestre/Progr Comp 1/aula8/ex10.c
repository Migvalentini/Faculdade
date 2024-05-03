#include <stdio.h>

int main() {
   int n, x=100, cont=0, div=0;

   printf("Digite N: "); scanf("%d",&n);

   while(n > cont) {
      div=0;
      for(int y = 1; y <= x; y++) {
         //printf("%d ",y);
         if(x%y==0) {
            div++;
         }
      }
      if(div==2) {
         printf("O numero %d eh primo\n",x);
         cont++;
      }
      x++;
   }

   return 0;
}