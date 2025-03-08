// Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. 
// Após a digitação, o computador deverá executar a multiplicação destes números e mostrar o resultado na tela do computador.
// Exemplo: se o usuário digitar os valores 11 e 13, o programa deve realizar a multiplicação destes números e mostrar na tela o resultado (143).

#include <stdio.h>

int main () {
  int n1,n2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  printf("%d", n1*n2);

  return 0;
}
