// Uma pessoa aplicou um determinado valor na caderneta de poupança. 
// Sabe-se que na poupança o banco pagará 0,5% ao mês de juros.
// Desenvolver um programa em C que solicite ao usuário informar dois valores reais correspondentes ao valor inicial aplicado e ao valor final desejado. 
// O programa em C deverá calcular e mostrar na tela a quantidade de tempo, em anos e meses, que esta pessoa deverá deixar o dinheiro aplicado para obter o valor final desejado.

#include <stdio.h>

int main() {
   float valorInicial, valorFinal;
   int meses=0;

   printf("Digite o valor inicial: ");
   scanf("%f",&valorInicial);
   printf("Digite o valor final: ");
   scanf("%f",&valorFinal);

   while(valorInicial < valorFinal) {
      meses++;
      valorInicial+=(valorInicial/100)*5;
      printf("Mes%d: %f \n",meses,valorInicial);
   }

   printf("Levara %d anos e %d meses",meses/12,meses%12);

   return 0;
}