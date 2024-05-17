#include <stdio.h>

int main() {
   int num;
   int anterior;
   int igual=0;
   int maior=0;
   int menor=0;

   printf("Digite um numero: ");
   scanf("%d",&num);
   anterior=num;

   for(int x=0; x<9; x++) {
      printf("Digite um numero: ");
      scanf("%d",&num);

      //printf("%d %d\n",anterior, num);

      if(anterior==num) {
         igual++;
      } else if (anterior>num) {
         maior++;
      } else if (anterior<num) {
         menor++;
      } 

      anterior=num;
   }

   printf("Igual: %d\nMaior: %d\nMenor: %d\n",igual,maior,menor);

   if(igual==9) {
      printf("Todos iguais");
   } else if (menor==9) {
      printf("Estritamente crescente");
   } else if (igual+menor==9) {
      printf("Crescente");
   } else if (maior==9) {
      printf("Estritamente decrescente");
   } else if (igual+maior==9) {
      printf("Decrescente");
   } else {
      printf("Desordenada");
   }

   return 0;
}  