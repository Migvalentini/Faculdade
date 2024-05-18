#include <stdio.h>

int main() {
   int num,n;

   // printf("Digite um numero inteiro ate 100.000.000: ");
   // scanf("%d",&num);
   num=275917451;
   
   for(int x=0; x<=9; x++) {
      n=num;
      while(n>0) {
         //printf("%d ",n);
         if(n%10==x) {
            printf("%d\n",n%10);
         }
         n/=10;
      }
   }
}