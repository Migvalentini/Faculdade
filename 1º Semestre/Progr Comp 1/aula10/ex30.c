// A sequência de fibonacci, muito conhecida na matemática, é mostrada na tabela abaixo:
// n      0 1 2 3 4 5 6 7  8  9  10 11 12
// fib(n) 0 1 1 2 3 5 8 13 21 34 55 89 144
// Esta sequência começa com 0 e 1 e cada novo número é a soma dos dois imediatamente anteriores. 
// Desenvolva um programa em C que  gere e mostre na tela os 100 primeiros termos da série de  fibonacci.

#include <stdio.h>

int main() {
   int primeiro=0;
   int segundo=1;
   int num=0;

   printf("Numero 0: %d\n",primeiro);
   printf("Numero 1: %d\n",segundo);

   for(int x=0; x<30-2; x++) {
      num=primeiro+segundo;
      printf("Numero %d: %d\n",x+2,num);
      primeiro=segundo;
      segundo=num;
   }

   return 0;
}