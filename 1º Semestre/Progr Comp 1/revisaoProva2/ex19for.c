// Desenvolva um programa em C que solicite ao usuário informar valores reais que correspondam ao peso e a altura de 10 pessoas. 
// O programa em C deverá mostrar o peso e a altura da pessoa mais alta.

#include <stdio.h>

int main() {
   float peso, altura, pesoMaior=0, alturaMaior=0;

   for(int x=0; x<10;x++) {
      printf("Digite o peso da pessoa: ");
      scanf("%f",&peso);
      printf("Digite a altura da pessoa: ");
      scanf("%f",&altura);

      if(altura>alturaMaior) {
         alturaMaior=altura;
         pesoMaior=peso;
      }
   }

   printf("A pessoa mais alta mede %f metros e pesa %fkg",alturaMaior,pesoMaior);

   return 0;
}