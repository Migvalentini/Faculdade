// Desenvolva um programa que solicite o usuário informar a altura em metros e o sexo de uma pessoa. 
// O programa deverá calcular o peso ideal da pessoa, utilizando as seguintes fórmulas:
// - Para Homens: ( 72.7 * altura ) - 58
// - Para Mulheres: ( 62.1 * altura) – 44.7
// A altura da pessoa é um valor real. 
// O sexo da pessoa deverá ser identificado através de um caracter. 
// O programa deverá aceitar os caracteres “m” ou “M” para identificar pessoas do sexo masculino e  os caracteres “f” ou “F” para identificar pessoas do sexo feminino. 
// A variável que identifica o sexo deve ser declarada com o tipo char.

#include <stdio.h>

int main() {
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
