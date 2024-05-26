#include <stdio.h>

int main() {
   int vet[10],n,cont=0;

   for(int x=0; x<10; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
   }

   printf("Digite o numero verificador: ");
   scanf("%d",&n);

   for(int x=0; x<10; x++) {
      if(vet[x]==n) {
         cont=1;
         break;
      }
   }

   if(cont==1) {
      printf("O numero %d esta no vetor",n);
   } else if(cont==0) {
      printf("O numero %d NAO esta no vetor",n);
   }

   return 0;
}