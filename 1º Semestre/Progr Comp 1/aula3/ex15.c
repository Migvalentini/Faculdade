#include <stdio.h>

int main () {
   float n1,n2;
   char operador;

   printf("Digite o primeiro numero: ");
   scanf("%f",&n1);

   printf("Digite o operador: ");
   fflush(stdin);
   operador=getchar();

   printf("Digite o segundo numero: ");
   scanf("%f",&n2);

   if (operador=='+') {
      printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
   }

   if (operador=='-') {
      printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
   }

   if (operador=='*') {
      printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
   }

   if (operador=='/' && n2 != 0) {
      printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
   } 
   
   if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
      printf("Operador Invalido");
   }

   if (operador=='/' && n2==0) {
      printf("Divisao por Zero");
   }
}