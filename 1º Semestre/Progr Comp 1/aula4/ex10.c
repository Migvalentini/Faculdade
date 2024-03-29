#include <stdio.h>

int main () {
   int num,n1,n2,n3,n4,n5,n6,n7,n8,resto;

   printf("Digite um numero: ");
   scanf("%d",&num);

   n1=num/10000000;
   resto=num%10000000;
   n2=resto/1000000;
   resto=num%1000000;
   n3=resto/100000;
   resto=num%100000;
   n4=resto/10000;
   resto=num%10000;
   n5=resto/1000;
   resto=num%1000;
   n6=resto/100;
   resto=num%100;
   n7=resto/10;
   resto=num%10;
   n8=resto;

   if (n1==n8 && n2==n7 && n3==n6 && n4==n5) {
      printf("Eh palindromo");
   } else {
      printf("Nao eh palindromo");
   }

   return 0;
}