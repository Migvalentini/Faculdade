// Desenvolva um programa que solicite ao usuário digitar dois valores reais. 
// Após a digitação, o computador deverá efetuar as operações de adição, subtração, multiplicação e divisão destes valores.  
// Os quatro resultados deverão ser mostrados na tela assim como os números digitados pelo usuário.
// Exemplo: se o usuário digitar os valores 18 e 15,5, o programa deve executar as quatro operações e mostrar na tela:
// Números digitados: 18 e 15,5
// A soma destes números é 33,5 
// A subtração destes números é  2,5
// A multiplicação destes números é 279
// A divisão destes números é 1,161

#include <stdio.h>;

int main () {
  float n1,n2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  printf("%f\n", n1+n2);
  printf("%f\n", n1-n2);
  printf("%f\n", n1*n2);
  printf("%f", n1/n2);

  return 0;
}
