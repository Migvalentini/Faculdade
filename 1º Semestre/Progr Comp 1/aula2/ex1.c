// Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. 
// Após a digitação, o computador deverá executar a soma destes números e mostrar o resultado na tela do computador.
// Exemplo: se o usuário digitar os valores 7 e 15, o programa deve realizar a soma destes números e mostrar na tela o resultado (22).

#include <stdio.h>

int main () {
  int n1,n2;

  printf("1 numero: ");
  scanf("%d", &n1);
  printf("2 numero: ");
  scanf("%d", &n2);

  printf("%d + %d = %d", n1,n2,n1+n2);

  return 0;
}
