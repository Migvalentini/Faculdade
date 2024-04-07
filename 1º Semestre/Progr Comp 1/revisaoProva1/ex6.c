#include <stdio.h>

int main () {
   int horas,minutos,segundos,totalSegundos;
   float porcentagem;

   printf("Digite as horas: ");
   scanf("%d",&horas);
   printf("Digite os minutos: ");
   scanf("%d",&minutos);
   printf("Digite os segundos: ");
   scanf("%d",&segundos);

   if (horas>=0&&horas<=23&&minutos>=0&&minutos<=59&&segundos>=0&&segundos<=59) {
      totalSegundos=horas*3600+minutos*60+segundos;
      porcentagem=(totalSegundos*100)/86400;
      printf("Total de Segundos: %d\nPorcentagem: %.2f",totalSegundos,porcentagem);
   } else {
      printf("Data Invalida");
   }

   return 0;
}
