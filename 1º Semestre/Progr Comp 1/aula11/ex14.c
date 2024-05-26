#include <stdio.h>

int main() {
   int n1,razao,vet[20];

   printf("Digite o primeiro termo: ");
   scanf("%d",&n1);

   printf("Digite a razao: ");
   scanf("%d",&razao);


   vet[0]=n1;
   for(int x=1; x<20; x++) {
      vet[x]=vet[x-1]+razao;
   }

   for(int x=0;x<20;x++) {
      printf("%d ",vet[x]);
   }

   return 0;
}