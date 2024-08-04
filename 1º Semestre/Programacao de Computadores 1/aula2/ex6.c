// Desenvolva um programa que solicite ao usuário informar dois valores inteiros.
// Após a digitação, o computador deverá executar a operação de potenciação deste número, onde o primeiro número informado é a base e o segundo número informado é o expoente. 
// O resultado desta operação deve ser mostrado na tela do computador.
// Exemplo: se o usuário informar os valores 5 e 3, o programa deve realizar a potenciação, utilizando o número 5 como base e o número 3 como expoente (53) e mostrar na tela o resultado (125).

#include <stdio.h>
#include <math.h>

int main () {
  float n1,n2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  printf("%f", pow(n1, n2));

  return 0;
}
