#include <stdio.h>

main() {
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
}