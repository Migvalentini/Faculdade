#include <stdio.h>

int main() {
   int n1, n2, soma1=0, soma2=0;

   printf("Digite n1: "); scanf("%d",&n1);
   printf("Digite n2: "); scanf("%d",&n2);

   for (int x=1; x <= n1;x++) {
      if(n1%x==0 && x!=n1) {
         soma1+=x;
      }
   }

   printf("\n");

   for (int y=1; y <= n2; y++) {
      if(n2%y==0 && y!=n2) {
         soma2+=y;
      }
   }

   if(soma1==n2 && soma2==n1) {
      printf("Os numeros sao amigos");
   } else {
      printf("Os numeros nao sao amigos");
   }

   return 0;
}