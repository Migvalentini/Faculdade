// Desenvolva um programa que implemente uma calculadora de 4 operações. 
// O programa deve solicitar que o usuário informe três dados: o primeiro operando, o operador (+,-,*,/) e o segundo operando. 
// O programa deve mostrar na tela a operação e seu resultado.
// Em duas situações, o programa não deverá efetuar o cálculo:
// - Se o operador informado pelo usuário for inválido mostrar a mensagem “Operador inválido” e encerrar a execução do programa
// - Se o segundo operando for igual a 0 (zero) e o operador escolhido for a divisão (/), mostrar na tela a mensagem “Divisão por Zero!” e encerrar a execução do programa.
// Para encerrar o programa é utilizada a função exit(). 
// A função exit() está incluída na biblioteca stdlib.
// A variável que identifica a operação deve ser declarada com o tipo char. 

#include <stdio.h>

int main() {
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

   return 0;
}
