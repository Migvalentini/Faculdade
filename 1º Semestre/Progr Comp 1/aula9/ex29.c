#include <stdio.h>
main(){

   int ano,mes,dia,diaSemana,bissexto,cont=0;
   printf("Informe o dia inicial: ");
   scanf("%d",&dia);
   printf("Informe o mes inicial: ");
   scanf("%d",&mes);
   printf("Informe o ano inicial: ");
   scanf("%d",&ano);
   printf("Informe o dia da semana: ");
   scanf("%d",&diaSemana);

   while(1){
      if (dia==13&&diaSemana==6) {
         printf("%d/%d/%d\n",dia,mes,ano);
         cont++;  
         if(cont==3) {
            break;
         }
      }
      dia++;
      diaSemana++;
      if (diaSemana==8) diaSemana=1;
      if (dia==32&&(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10)){
         dia=1;
         mes++;
      }
      else if (dia==31&&(mes==4||mes==6||mes==9||mes==11)){
         dia=1;
         mes++;
         }
      else if (dia==32&&mes==12){
               dia=1;
               mes=1;
               ano++;
         }
         else if(dia==29&&mes==2){
                  bissexto=0;
                  if (ano%4==0)
                     if (ano%100==0){
                           if (ano%400==0)
                              bissexto=1;
                     }
                     else 
                           bissexto=1;
                  if (bissexto==0){
                     dia=1;
                     mes=3;
                  }
      }
   }
}