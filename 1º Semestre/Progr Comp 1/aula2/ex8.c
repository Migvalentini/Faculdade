// Desenvolva um programa que solicite ao usuário informar dois valores reais. 
// Após a digitação, o computador deve efetuar as seguintes operações:
// multiplique o primeiro número por 4
// multiplique o segundo número por 6
// a média aritmética dos resultados obtidos.
// O resultado final destes cálculos deve ser mostrado na tela. 
// Exemplo:  se o usuário informar os valores 5 e 9, o programa deve realizar o cálculo (5*4+9*6)/2 e  mostrar na tela o resultado (37).

#include <stdio.h>
#include <math.h>

int main() {
  float n1, n2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  printf("%f", ((n1 * 4) + (n2 * 6)) / 2);

  return 0;
}
