#include <stdio.h>

int main() {
   float soma;
   float num;
   float den=1;

   printf("Digite o numerador: ");
   scanf("%f",&num);

   soma=num;

   for(int x=0; x<100; x++) {
      printf("%.0f/%.0f = %f\n",num,den,num/den);
      den+=2;
      soma=soma+num/den;
   }

   printf("Soma: %f",soma);

   return 0;
}