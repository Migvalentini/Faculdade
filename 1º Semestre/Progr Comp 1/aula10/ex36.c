// Desenvolva um programa em C que calcule e mostre na tela a soma dos 100 primeiros termos da sequência x/1 + x/3 + x/5 + x/7 + x/9 ...
// , onde o x deve ser um valor inteiro informado pelo usuário no início do programa em C.

#include <stdio.h>

int main() {
   float soma;
   float num;
   float den=1;

   printf("Digite o numerador: ");
   scanf("%f",&num);

   soma=num;

   for(int x=0; x<100; x++) {
      printf("%.0f/%.0f = %f\n",num,den,num/den);
      den+=2;
      soma=soma+num/den;
   }

   printf("Soma: %f",soma);

   return 0;
}