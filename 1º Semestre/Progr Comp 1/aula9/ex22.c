#include <stdio.h>

int main() {
   int num, n, palindromo,mult=1,aux,aux2;

   printf("Digite um numero inteiro ate 100.000.000: ");
   scanf("%d",&num);

   aux=num;
   aux2=num;

   while(aux>0) {
      mult*=10;
      aux/=10;
   }

   mult/=10;

   while(num>0) {
      n=num%10;
      palindromo+=n*mult;
      mult/=10;
      num=num/10;
   }

   if(palindromo==aux2) {
      printf("O numero %d eh palindromo",aux2);
   } else {
      printf("O numero %d nao eh palindromo",aux2);
   }

   return 0;
}