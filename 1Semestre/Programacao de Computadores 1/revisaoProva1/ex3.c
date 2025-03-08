// Foi definido que nas ligações telefônicas, somente são cobradas chamadas com duração acima de três segundos, sendo que do quarto ao trigésimo segundo de ligação é cobrado o valor total
// correspondente a trinta segundos e após a cobrança será feita considerando múltiplos de seis segundos, mesmo que os mesmos não sejam completados. 
// Considerando que uma operadora, cobra 40 centavos para os primeiros 30 segundos e 5 centavos para cada 6 segundos adicionais, fazer um algoritmo que leia o
// horário inicial (hora, minuto e segundo) e final(hora, minuto e segundo) da ligação e escreva o valor que deve ser pago. 
// Considere ainda que a ligação pode iniciar em um dia e terminar no dia seguinte (não excedendo 23 horas). 
// Exemplos:
// duração da chamada  serão cobrados  valor para operadora abaixo
// 2 segundos          sem custo       R$ 0,00
// 4 segundos          30 segundos     R$ 0,40
// 10 segundos         30 segundos     R$ 0,40
// 25 segundos         30 segundos     R$ 0,40
// 30 segundos         30 segundos     R$ 0,40
// 31 segundos         36 segundos     R$ 0,45
// 36 segundos         36 segundos     R$ 0,45
// 37 segundos         42 segundos     R$ 0,50
// 298 segundos        300 segundos    R$ 2,65
// Dica: Calcular primeiro a quantidade de segundos e então o valor.

#include <stdio.h>

int main() {
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
