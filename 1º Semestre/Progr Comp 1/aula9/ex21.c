// Desenvolva um programa em C que solicite ao usuário informar um número N inteiro até 9 dígitos. 
// O programa em C deverá retirar os dígitos ímpares do número e mostrar na tela número resultante. 
// Caso o número só possua dígitos ímpares, o programa em C deve apenas mostrar na tela uma mensagem sinalizando que o número só é formado por dígitos ímpares. 

#include <stdio.h>

int main() {
   int num,n,mult=1,novoNumero=0;

   printf("Digite um numero inteiro de ate 9 digitos: ");
   scanf("%d",&num);

   while(num>0) {
      n=num%10;
      if(n%2==0) {
         novoNumero=n*mult+novoNumero;
         mult*=10;
      }
      num=num/10;
   }

   if(novoNumero==0) {
      printf("Nao ha digitos pares no numero digitado.");
   } else {
      printf("Novo numero: %d",novoNumero);
   }

   return 0;
}