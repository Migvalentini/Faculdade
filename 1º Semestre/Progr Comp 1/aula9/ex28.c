#include <stdio.h>

int main() {
   int dia,mes,diaSemana;

   printf("Digite o dia: ");
   scanf("%d",&dia);
   printf("Digite o mes: ");
   scanf("%d",&mes);
   printf("Digite o dia da semana: ");
   scanf("%d",&diaSemana);

   while(dia>1) {
      dia--;
      diaSemana--;
      if(diaSemana==0) {
         diaSemana=7;
      }
   }
   
   printf("%d/%d - %d",dia,mes,diaSemana);

   switch (diaSemana)
   {
   case 1:
      printf(" - Domingo");
      break;
   case 2:
      printf(" - Segunda");
      break;
   case 3:
      printf(" - Terca");
      break;
   case 4:
      printf(" - Quarta");
      break;
   case 5:
      printf(" - Quinta");
      break;
   case 6:
      printf(" - Sexta");
      break;
   case 7:
      printf(" - Sabado");
      break;
   
   }

   return 0;
}