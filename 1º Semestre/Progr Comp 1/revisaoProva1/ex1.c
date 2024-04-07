#include <stdio.h>

int main () {
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
