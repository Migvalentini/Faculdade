#include <stdio.h>

main() {
   int num,n, palindromo,mult=1;

   printf("digite um numero inteiro ate 100.000.000: ");
   scanf("%d",&num);

   n=num;

   while(n>0) {
      palindromo+=(n%10)*mult;
      n/=10;
      mult*=10;
   }

   mult/=10;

   // while() {
      
   // }

   printf("%d\n",palindromo/mult);

   printf("Palindromo: %d",palindromo);
   printf("Mult: %d",mult);
}