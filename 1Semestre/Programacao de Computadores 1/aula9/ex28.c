// Desenvolva um programa em C que que solicite ao usuário informar 3 valores inteiros, correspondentes ao dia e mês de uma data e o dia da semana que esta data ocorre. 
// O dia da semana informado deverá ser um número que pertença ao intervalo 1 a 7, onde 1-domingo, 2-segunda, 3-terça, 4-quarta, 5-quinta, 6-sexta, 7-sábado.  
// O programa em C deverá encontrar e mostrar na tela o nome do dia da semana correspondente ao primeiro dia do mês digitado.

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