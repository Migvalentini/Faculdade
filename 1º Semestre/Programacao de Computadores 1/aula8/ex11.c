#include <stdio.h>

int main() {
   int x, n, div, cont=0;

   printf("Digite N: "); 
   scanf("%d",&n);

   x=n;
   while(cont==0) {
      div=0;
      for(int y = 1; y <= x; y++) {
         if(x%y==0) {
            div++;
         }
      }
      if(div==2) {
         printf("Menor numero primo maior que %d = %d",n,x);
         cont=1;
      }
      x++;
   }

   return 0;
}