#include <stdio.h>

int main() {
   int n, div;

   printf("Digite N: "); scanf("%d",&n);

   for(int x = n; x >= 1; x--) {
      div=0;
      for(int y = 1; y <= x; y++) {
         if(x%y==0) {
            div++;
         }
      }
      if(div==2) {
         printf("Maior numero primo menor que %d = %d",n,x);
         break;
      }
   }

   return 0;
}