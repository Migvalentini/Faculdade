// Em matemática, uma sequência é denominada monótona quando ela preserva ou inverte a relação de ordem de seus elementos. 
// Quando a sequência preserva a relação dos elementos, é denominada de função crescente. 
// Quando a sequência inverte a relação dos elementos, é denominada função decrescente. 
// Desta forma temos:
// - Todos iguais: a1=a2=a3=a4=..........=an
// - Estritamente Crescente: se a1 < a2 < a3 < .... < an < …
// - Crescente: se a1 ≤ a2 ≤ a3 ≤ …≤ an ≤ ...
// - Estritamente Decrescente: se a1 > a2 > a3 > .... > an > …
// - Decrescente: se a1 ≥ a2 ≥ a3 ≥ .... ≥ an ≥ …
// - Desordenada: quando os elementos não estão em ordem.
// Desenvolva um programa em C que solicite ao usuário informar 10 números inteiros. 
// O programa em C deverá verificar qual o tipo de sequência acima os números informados formam. 
// O programa em C deve mostrar uma mensagem na tela indicando o tipo de sequência, isto é, estritamente crescente, crescente, estritamente decrescente, decrescente e desordenada.

#include <stdio.h>

int main() {
   int num;
   int anterior;
   int igual=0;
   int maior=0;
   int menor=0;

   printf("Digite um numero: ");
   scanf("%d",&num);
   anterior=num;

   for(int x=0; x<9; x++) {
      printf("Digite um numero: ");
      scanf("%d",&num);

      if(anterior==num) {
         igual++;
      } else if (anterior>num) {
         maior++;
      } else if (anterior<num) {
         menor++;
      } 

      anterior=num;
   }

   if(igual==9) {
      printf("Todos iguais");
   } else if (menor==9) {
      printf("Estritamente crescente");
   } else if (igual+menor==9) {
      printf("Crescente");
   } else if (maior==9) {
      printf("Estritamente decrescente");
   } else if (igual+maior==9) {
      printf("Decrescente");
   } else {
      printf("Desordenada");
   }

   return 0;
}  