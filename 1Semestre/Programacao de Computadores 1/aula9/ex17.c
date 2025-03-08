// Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
// O programa em C deverá verificar quantas vezes o dígito 2 aparece no número e mostrar esta informação na tela.
// Exemplo: se o valor informado foi 32412, o programa em C deve mostrar na tela o dígito 2 ocorre 2 vezes no número. 

#include <stdio.h>

int main() {
   int num,n,cont=0;

   printf("Digite um numero inteiro: ");
   scanf("%d",&num);

   while(num>0) {
      n=num%10;
      if(n==2) {
         cont++;
      }
      num/=10;
   }

   printf("O numero 2 aparece %d vezes",cont);

   return 0;
}