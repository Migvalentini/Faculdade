#include <stdio.h>

main() {
   int num,n,mult=1,novoNumero=0;

   printf("Digite um numero inteiro de ate 9 digitos: ");
   scanf("%d",&num);

   while(num>0) {
      n=num%10;
      if(n%2==0) {
         printf("%d ",n);
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
}