// Desenvolva um programa em C que solicite ao usuário informar dois valores inteiros que correspondam ao número de termos da série e um valor positivo x. 
// O programa em C deve calcular e mostrar na tela o resultado da série:
// S = -x^2/1! + x^3/2! - x^4/3! + x^5/4! - x^6/5! + x^7/6! - x^8/7! + x^9/8! - x^10/9! + x^11/10! - ...

#include <stdio.h>

int main() {
   int termos,x,exp=1,fat=1,soma=0;

   printf("Digite o numero de termos: ");
   scanf("%d",&termos);
   printf("Digite x: ");
   scanf("%d",&x);

   for(int i=0; i<termos; i++) {
      exp=x;
      for(int z=i; z>0; z--) {
         exp*=x;
      }
      printf("I: %d\n",i=1);
      // for(int y=1; y<i; y++) {
      //    fat*=y;
      //    printf("Y: %d\n",y);
      // }
      printf("%d/%d \n",exp,fat);
      if(i%2==0) {
         soma-=(exp)/fat;
      }
      if(i%2==1) {
         soma+=(exp)/fat;
      }
   }

   return 0;
}