#include <stdio.h>

int main() {
   int soma=0,menor=-1,media,vet[15];

   for(int x=0; x<15; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
      soma+=vet[x];
   }

   media=soma/15;

   printf("A media dos numeros informados eh: %d\n",media);

   for(int x=0; x<15; x++) {
      if(vet[x]>media && (menor==-1 || vet[x]<menor)) {
         menor=vet[x];
      }
   }

   printf("\nO menor numero maior que a media eh %d",menor);

   return 0;
}