// Fazer um algoritmo que leia uma data em três variáveis inteiras (dia, mes e ano) e escreva a data correspondente ao dia anterior também de forma separada: dia, mês e ano.
// Para facilitar, considerar que os anos bissextos são aqueles divisíveis por 4.
// Assim o mês 2 (fevereiro) possui 28 dias, exceto nos anos bissextos, nos quais possui 29 dias.
// Abril (4), junho(6), setembro(9) e novembro(11) possuem 30 dias e os demais 31 dias.
// Dica: Subtrair 1 unidade do dia, se o resultado for menor que 1, determinar o mês anterior, senão já está tudo certo. 
// Quando for necessário determinar o mês anterior (subtrair 1 do mesmo, se o resultado for menorn que 1, atribuir 12 para o mês e determinar o ano anterior subtraindo 1 do ano; 
// determinar o dia considerando a quantidade de dias do mês calculado)

#include <stdio.h>

int main() {
   int dia,mes,ano;

   printf("Digite o dia: ");
   scanf("%d",&dia);
   printf("Digite o mes: ");
   scanf("%d",&mes);
   printf("Digite o ano: ");
   scanf("%d",&ano);

   if (dia==1 && mes==1) {
      dia=31;
      mes=12;
      ano--;
   } else if (dia == 1 && (mes==2||mes==4||mes==6||mes==9||mes==11)) {
      dia=31;
      mes--;
   } else if (dia == 1 && (mes==5||mes==7||mes==8||mes==10||mes==12)) {
      dia=30;
      mes--;
   } else if (dia == 1 && mes==3 && (ano%4==0)) {
      dia=29;
      mes--;
   } else if (dia == 1 && mes==3 && (ano%4!=0)) {
      dia=28;
      mes--;
   } else {
      dia--;
   }

   printf("Dia anterior: %d/%d/%d",dia,mes,ano);

   return 0;
}
