// Desenvolva um programa que solicite ao usuário informar dois números inteiros de três dígitos cada um. 
// O programa deverá verificar se os dois números possuem os mesmos dígitos. 
// Após a verificação, o programa deverá mostrar na tela uma mensagem se os números possuem os mesmos dígitos. 
// Exemplos: 
// Se o usuário informar os números 469 e 694, o programa deve mostrar uma mensagem que os dígitos dos dois números são os mesmos. 
// Se o usuário informar os números 221 e 112,  o programa deve mostrar uma mensagem que os dígitos dos dois números são diferentes. 
// Neste exemplo, de ambos terem somente os dígitos 1 e 2, o dígito 2 aparece duas vezes no primeiro número e o dígito 1 aparece duas vezes no segundo número. 

#include <stdio.h>

int main() {
   int n1,n2,d11,d12,d13,d21,d22,d23,resto,aux;

   printf("Digite o numero 1: ");
   scanf("%d",&n1);

   printf("Digite o numero 2: ");
   scanf("%d",&n2);

   d11=n1/100;
   resto=n1%100;
   d12=resto/10;
   d13=resto%10;

   if (d11>d12) {
      aux=d11;
      d11=d12;
      d12=aux;
   }
   if (d11>d13) {
      aux=d11;
      d11=d13;
      d13=aux;
   }
   if (d12>d13) {
      aux=d12;
      d12=d13;
      d13=aux;
   }

   d21=n2/100;
   resto=n2%100;
   d22=resto/10;
   d23=resto%10;

   if (d21>d22) {
      aux=d21;
      d21=d22;
      d22=aux;
   }
   if (d21>d23) {
      aux=d21;
      d21=d23;
      d23=aux;
   }
   if (d22>d23) {
      aux=d22;
      d22=d23;
      d23=aux;
   }

   if (d11==d21 && d12==d22 && d13==d23) {
      printf("Os numeros possuem os mesmos digitos");
   } else {
      printf("Os numeros NAO possuem os mesmos digitos");
   }

   return 0;
}
