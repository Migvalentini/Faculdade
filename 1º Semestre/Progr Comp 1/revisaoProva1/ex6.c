// Fazer um programa na linguadem de programação em C que receba (leia) um horário, composto por hora, minuto e segundo. 
// O programa deverá testar se esse horário é válido (hora entre 0 e 23, minuto e segundo entre 0 e 59).
// Caso o horário for inválido, o programa deve escrever -1, mas se ele for válido, o programa deverá escrever a quantidade em percentual que já foi transcorrido do respectivo dia. 
// Exemplos:
// 12 0 0 escreve 50.00
// 12 65 78 escreve -1
// 18 0 0 escreve 75.00
// 10 30 12 escreve 43.763889
// Dica: Testar se o horário é válido respeitando os intervalos de tempo. 
// Transformar o horário lido em segundos. 
// Fazer uma correspondencia (regra de três) onde:
// 100 corresponde ao total de segundos de um dia;
// X corresponde a quantidade de segundos da transformação acima.
// Cuidado ao calcular somente com números inteiros, o resultado é inteiro, e nesse caso é necessário que o percentual possua casas decimais.

#include <stdio.h>

int main() {
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
