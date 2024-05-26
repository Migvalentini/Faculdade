// Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
// O programa em C deve mostrar na tela os dígitos do número na ordem contrária que foram informados.
// Exemplo: se o valor informado foi 32417, o programa em C deve mostrar na tela os números 7,1,4,2,3. 

#include <stdio.h>

int main() {
   int num;

   printf("Digite um numero inteiro: ");
   scanf("%d",&num);

   while(num>0) {
      printf("%d ",num%10);
      num=num/10;
   }

   return 0;
}