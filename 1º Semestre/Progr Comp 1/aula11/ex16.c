#include <stdio.h>

int main() {
   int vet[10],n;

   for(int x=0; x<10; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
   }

   printf("Digite o numero verificador: ");
   scanf("%d",&n);

   for(int x=0; x<10; x++) {
      if(vet[x]==n) {
         printf("O numero %d esta no vetor na posicao %d\n",n,x);
      }
   }

   return 0;
}