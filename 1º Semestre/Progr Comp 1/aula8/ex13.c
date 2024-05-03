#include <stdio.h>

int main() {
   int num, div1, div2, x, y, z;

   printf("Digite um numero par: "); scanf("%d",&num);

   for(x = 1; x <= num; x++) {
      div1=0;
      for(y = 1; y <= x; y++) {
         if(x%y==0) {
            div1++;
         }
      }
      if(div1==2) {
         div2=0;
         for(z=1; z <= num-x; z++) {
            if((num-x)%z==0) {
               div2++;
            }
         }
         if(div2==2) {
            printf("Primo 1 = %d\nPrimo 2 = %d",x,num-x);
            break;
         }
      }
   }

   return 0;
}