#include <stdio.h>

int main () 
{
   char sexo;
   float altura;

   printf("Informe a altura: ");
   scanf("%f", &altura);

   printf("Informe o sexo: ");
   fflush(stdin);
   sexo=getchar();

   if (sexo=='M' || sexo=='m') {
      printf("O peso ideal eh: %.2f",( 72.7 * altura ) - 58);
   }
   if (sexo=='F' || sexo=='f') {
      printf("O peso ideal eh: %.2f",( 62.1 * altura) - 44.7);
   }

   return 0;
}  
