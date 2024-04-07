#include <stdio.h>

int main () {
   int horaInicial,minutoInicial,segundoInicial,horaFinal,minutoFinal,segundoFinal,duracao,segundosAdicionais,custo=40;

   printf("Digite a hora inicial: ");
   scanf("%d",&horaInicial);
   printf("Digite o minuto inicial: ");
   scanf("%d",&minutoInicial);
   printf("Digite o segundo inicial: ");
   scanf("%d",&segundoInicial);
   printf("Digite a hora final: ");
   scanf("%d",&horaFinal);
   printf("Digite o minuto final: ");
   scanf("%d",&minutoFinal);
   printf("Digite o segundo final: ");
   scanf("%d",&segundoFinal);

   duracao=(horaFinal*3600+minutoFinal*60+segundoFinal)-(horaInicial*3600+minutoInicial*60+segundoInicial);
   if (duracao<0) {
      duracao=duracao+24*3600;
   }

   if (duracao < 3) {
      custo=0.0;
   } else if (duracao>30) {
      segundosAdicionais=duracao-30;
      custo += ((segundosAdicionais / 6) + (segundosAdicionais % 6 != 0)) * 5;
      printf("%d\n",((segundosAdicionais / 6) + (segundosAdicionais % 6 != 0)) * 5);
   }

   printf("Segundos: %d\nCusto: %d",duracao, custo);

   return 0;
}
