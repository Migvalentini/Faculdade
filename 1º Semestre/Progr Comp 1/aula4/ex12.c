// Desenvolva um programa que solicite ao usuário informar três valores reais que correspondam as notas de um aluno e um caracter que indique qual o tipo de cálculo que deve ser efetuado para calcular a média. 
// O usuário poderá digitar os caracteres 'a' ou 'A' para escolher o cálculo pela média aritmética ou os caracteres 'h' ou 'H' para escolher o cálculo pela média harmônica. 
// Se o usuário digitar caracteres diferentes de 'a',  'A',  'h' e 'H' uma mensagem de erro deverá ser mostrada e o cálculo não deverá ser efetuado. 
// Após o cálculo, a média deverá ser mostrada na tela.
// Exemplos:
// - Se o usuário digitar os caracteres 'a' ou 'A' e os valores 7,5, 6 e 9,5 respectivamente como a primeira, segunda e terceira notas de um aluno, o programa deverá calcular a média ( 7,5 + 6 + 9,5)/3 e mostrar o resultado final (7,67) na tela.
// - Se o usuário digitar os caracteres 'h' ou 'H' e os valores 7,5, 6 e 9,5 respectivamente como a primeira, segunda e terceira notas de um aluno, o programa deverá calcular a média  3/( 1/7.5 + 1/6 + 1/9.5) e mostrar o resultado final (7,39) na tela.
// - Se o usuário digitar o caracter 'p', a mensagem “Tipo de média informada incorretamente. Cálculo não realizado”.

#include <stdio.h>

int main() {
   float n1,n2,n3;
   char calculo;

   printf("Digite a nota 1: ");
   scanf("%f",&n1);

   printf("Digite a nota 2: ");
   scanf("%f",&n2);

   printf("Digite a nota 3: ");
   scanf("%f",&n3);

   printf("Digite o tipo de calculo a ser realizado: ");
   fflush(stdin);
   calculo=getchar();

   if (calculo=='a' || calculo=='A') {
      printf("A media aritmetica eh: %.2f",(n1+n2+n3)/3);
   } else if (calculo=='h' || calculo=='H') {
      printf("A media harmonica eh: %.2f",3/(1/n1+1/n2+1/n3));
   } else {
      printf("Tipo de media informada incorretamente. Calculo nao realizado");
   }

   return 0;
}
