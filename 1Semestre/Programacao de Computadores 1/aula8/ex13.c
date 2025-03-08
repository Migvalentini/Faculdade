// Um número perfeito é o número que é igual à soma de seus divisores, exceto o próprio número. 
// Por exemplo, o número 6 é perfeito pois a soma dos seus divisores 1 + 2 + 3, exceto 6, é igual a 6.
// Desenvolva um programa em C que solicite ao usuário informar dez (10) valores inteiros. 
// O programa em C deve verificar quais os números são perfeitos e mostrar esta informação na tela. 

#include <stdio.h>

int main() {
   int num, somaDiv=0;
   
   for(int x = 1; x <= 10; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&num);

      somaDiv=0;
      for(int y = 1; y <= num; y++) {
         if(num%y==0) {
            somaDiv+=y;
         }
      }
      somaDiv-=num;
      if(somaDiv == num) {
         printf("O numero %d eh um numero perfeito\n",num);
      }
   }

   return 0;
}