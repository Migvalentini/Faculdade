#include <stdio.h>

main() {
   int num;

   printf("Digite um numero inteiro: ");
   scanf("%d",&num);

   while(num>0) {
      printf("%d ",num%10);
      num=num/10;
   }
}