// Desenvolva um programa que solicite ao usuário um número de até cinco dígitos. 
// O programa deve calcular e mostrar na tela a soma dos dígitos do número digitado. 
// Exemplo: Se o usuário informar o valor de 1325, o programa deverá mostrar na tela o valor 11, isto é 1+3+2+5. 
// Para desenvolver este programa, utilizar os operadores de divisão e o resto da divisão

#include <stdio.h>

int main () {
   int numero,dig1,dig2,dig3,dig4,dig5;

   printf("Digite o numero: ");
   scanf("%d",&numero);

   dig1=numero/10000;
   dig2=numero%10000/1000;
   dig3=numero%10000%1000/100;
   dig4=numero%10000%1000%100/10;
   dig5=numero%10000%1000%100%10/1;

   printf("Digito 1: %d\nDigito 2: %d\nDigito 3: %d\nDigito 4: %d\nDigito 5: %d\nSoma: %d",dig1,dig2,dig3,dig4,dig5, dig1+dig2+dig3+dig4+dig5);

   return 0;
}
