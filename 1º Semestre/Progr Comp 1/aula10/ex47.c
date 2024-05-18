#include <stdio.h>

int main() {
   int num,numAnterior,naipe,naipeAnterior,sequencia=0;

   printf("Digite o numero da carta 1: ");
   scanf("%d",&numAnterior);
   printf("Digite o naipe da carta 1: ");
   scanf("%d",&naipeAnterior);

   for(int x=2; x<=10; x++) {
      printf("Digite o numero da carta %d: ",x);
      scanf("%d",&num);
      printf("Digite o naipe da carta %d: ",x);
      scanf("%d",&naipe);

      if(num-numAnterior==1 && naipe==naipeAnterior) {
         printf("Eh sequencia\n");
         sequencia++;
      }

      numAnterior=num;
      naipeAnterior=naipe;
   }

   if(sequencia>=7) {
      printf("As cartas foram uma sequencia");
   }

   return 0;
}