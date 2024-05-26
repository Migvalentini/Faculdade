// Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. 
// Após a digitação, o computador deverá executar a subtração do primeiro número do segundo número e mostrar o resultado na tela do computador.
// Exemplo: se o usuário digitar os valores 900 e 100, o programa deve realizar a subtração do número 900 pelo número 100 e mostrar na tela o resultado (800).

#include <stdio.h>

int main () {
  int n1,n2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  printf("%d",n1-n2);

  return 0;
}
