// Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
// O programa em C deve mostrar na tela os dígitos formantes desse número em ordem crescente. 
// Exemplo: se o usuário digitar o valor 86934, o programa em C deverá mostrar na tela os números 3,4,6,8 e 9.

#include <stdio.h>

int main() {
   int num,n;

   printf("Digite um numero inteiro ate 100.000.000: ");
   scanf("%d",&num);
   
   for(int x=0; x<=9; x++) {
      n=num;
      while(n>0) {
         if(n%10==x) {
            printf("%d\n",n%10);
         }
         n/=10;
      }
   }

   return 0;
}