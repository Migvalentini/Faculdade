// A conjectura de Goldbach diz que todo número par maior que 2 pode ser representado como a soma de dois números primos. 
// Assim, 4=2+2, 6=3+3, 8=3+5... 
// Desenvolva um programa em C que leia um número inteiro par. 
// O programa em C deve mostrar na tela em ordem crescente, os dois números primos que o compõem o número inteiro digitado. 
// No caso de haver mais de um par de números, por exemplo, 20=3+17 e 20=7+13, mostre na tela o par que tiver o menor número primo.

#include <stdio.h>

int main() {
   int num, div1, div2, x, y, z;

   printf("Digite um numero par: "); 
   scanf("%d",&num);

   for(x = 1; x <= num; x++) {
      div1=0;
      for(y = 1; y <= x; y++) {
         if(x%y==0) {
            div1++;
         }
      }
      if(div1==2) {
         div2=0;
         for(z=1; z <= num-x; z++) {
            if((num-x)%z==0) {
               div2++;
            }
         }
         if(div2==2) {
            printf("Primo 1 = %d\nPrimo 2 = %d",x,num-x);
            break;
         }
      }
   }

   return 0;
}