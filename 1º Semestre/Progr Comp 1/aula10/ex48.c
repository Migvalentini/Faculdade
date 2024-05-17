#include <stdio.h>

int main() {
   int n,div,cont=0;
   int p1,p2,p3;

   printf("Digite n: ");
   scanf("%d",&n);

   while(cont<10) {
      //printf("%d\n",n);
      p1=0;
      p2=0;
      p3=0;
      for(int x=1; x<=n; x++) {
         div=0;
         for(int y=1; y<=x; y++) {
            if(x%y==0) {
               div++;
            }
         }
         if(div==2) {
            p1=p2;
            p2=p3;
            p3=x;
            
            if(p1+p2+p3==n) {
               printf("O numero %d eh piramidal - %d, %d, %d\n",n,p1,p2,p3);
               cont++;
            }
         }
      }
      n++;
   }

   return 0;
}